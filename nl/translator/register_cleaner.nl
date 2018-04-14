###
# (c) Atinea Sp. z o.o.
# Stamp: PLE 2017-01-26
###

use ptd;
use nlasm;
use boolean_t;
use array;


def register_cleaner::clean_registers(ref nlasms : ptd::hash(@nlasm::result_t)) {
	var ret : ptd::hash(@nlasm::result_t) = {};
	forh var mod_name, var  mod (nlasms) {
		ret{mod_name} = clean(mod);
	}
	nlasms = ret;
}


def clean(module : @nlasm::result_t) : @nlasm::result_t {	
	var new_functions = [];
	fora var function (module->functions) {
		new_functions []= clean_f(function);
	}
	module->functions = new_functions;
	return module;
}


def clean_f(func : @nlasm::function_t) : @nlasm::function_t {
	var regs = find_unused_regs(func);
	
	var new_reg_index = 0;
	var map : ptd::hash(@nlasm::reg_t) = {};
	rep var i (array::len(func->registers)) {
		if (regs{i}) {
			map{i} = {type => :im, reg_no => new_reg_index, access_type => :value};
			++new_reg_index;
		}
	}
	map{''} = {type => :im, reg_no => '', access_type => :value};
	var new_func = func;
	new_func->commands = recalculate_registers(func->commands, map);
	return new_func;
}


def recalculate_registers(cmds : @nlasm::cmds_t, map : ptd::hash(@nlasm::reg_t)) : @nlasm::cmds_t {
	var new_cmds = [];
	fora var cmd (cmds) {
		var new_cmd;
		match (cmd->cmd) case :arr_decl(var arr) {
			var new_src = [];
			fora var el (arr->src) {
				new_src []= map{el->reg_no};
			}
			new_cmd = :arr_decl({
				dest => map{arr->dest->reg_no},
				src => new_src,
			});
		} case :hash_decl(var hash) {
			var new_keys = [];
			fora var el (hash->src) {
				new_keys []= {
					key => el->key, val => map{el->val->reg_no}
				};
			}
			new_cmd = :hash_decl({
				dest => map{hash->dest->reg_no},
				src => new_keys,
			});
		} case :func(var func) {
			new_cmd = :func({
				dest => map{func->dest->reg_no},
				module => func->module,
				name => func->name,
			});
		} case :call(var call) {
			var new_args = [];
			fora var el (call->args) {
				var new_el;
				match (el) case :val(var reg) {
					new_el = :val(map{reg->reg_no});
				} case :ref(var reg) {
					new_el = :ref(map{reg->reg_no});
				}
				new_args []= new_el;
			}
			new_cmd = :call({
				dest => map{call->dest->reg_no},
				mod => call->mod,
				fun_name => call->fun_name,
				args => new_args,
			});
		} case :una_op(var op) {
			new_cmd = :una_op({
				dest => map{op->dest->reg_no},
				src => map{op->src->reg_no},
				op => op->op,
			});
		} case :bin_op(var op) {
			new_cmd = :bin_op({
				dest => map{op->dest->reg_no},
				left => map{op->left->reg_no},
				right => map{op->right->reg_no},
				op => op->op,
			});
		} case :ov_is(var op) {
			new_cmd = :ov_is({
				dest => map{op->dest->reg_no},
				src => map{op->src->reg_no},
				type => op->type,
				label_no => op->label_no,
			});
		} case :ov_as(var op) {
			new_cmd = :ov_as({
				dest => map{op->dest->reg_no},
				src => map{op->src->reg_no},
				type => op->type,
				label_no => op->label_no,
			});
		} case :return(var ret) {
			match (ret) case :val(var val) {
				new_cmd = :return(:val(map{val->reg_no}));
			} case :emp {
				new_cmd = :return(:emp);
			}
		} case :die(var as_die) {
			new_cmd = :die(map{as_die->reg_no});
		} case :move(var move) {
			new_cmd = :move({
				dest => map{move->dest->reg_no},
				src => map{move->src->reg_no},
			});
		} case :load_const(var l) {
			new_cmd = :load_const({
				dest => map{l->dest->reg_no},
				val => l->val,
			});
		} case :get_frm_idx(var idx) {
			new_cmd = :get_frm_idx({
				dest => map{idx->dest->reg_no},
				src => map{idx->src->reg_no},
				idx => map{idx->idx->reg_no},
			});
		} case :set_at_idx(var idx) {
			new_cmd = :set_at_idx({
				src => map{idx->src->reg_no},
				idx => map{idx->idx->reg_no},
				val => map{idx->val->reg_no},
			});
		} case :array_push(var push) {
			new_cmd = :array_push({
				dest => map{push->dest->reg_no},
				val => map{push->val->reg_no},
			});
		} case :array_len(var len) {
			new_cmd = :array_len({
				dest => map{len->dest->reg_no},
				src => map{len->src->reg_no},
			});
		} case :get_val(var val) {
			new_cmd = :get_val({
				key => val->key,
				dest => map{val->dest->reg_no},
				src => map{val->src->reg_no},
			});
		} case :set_val(var val) {
			new_cmd = :set_val({
				src => map{val->src->reg_no},
				val => map{val->val->reg_no},
				key => val->key,
			});
		} case :ov_mk(var ov) {
			var new_arg;
			match (ov->src) case :arg(var arg) {
				new_arg = :arg(map{arg->reg_no});
			} case :emp {
				new_arg = :emp;
			}
			new_cmd = :ov_mk({
				dest => map{ov->dest->reg_no},
				src => new_arg,
				label => ov->label,
				label_no => ov->label_no,
				inner_type => ov->inner_type,
			});
		} case :prt_lbl(var lbl) {
			new_cmd = :prt_lbl(lbl);
		} case :if_goto(var cond) {
			new_cmd = :if_goto({
				dest =>  cond->dest,
				src => map{cond->src->reg_no},
			});
		} case :goto(var goto) {
			new_cmd = :goto(goto);
		} case :clear(var clear) {
			new_cmd = :clear(map{clear->reg_no});
		} case :var_decl(var decl) {
			die;
		} case :use_field(var use_field) {
			new_cmd = :use_field({
				new_owner => map{use_field->new_owner->reg_no},
				old_owner => map{use_field->old_owner->reg_no},
				field_name => use_field->field_name,
			});
		} case :release_field(var release_field) {
			new_cmd = :release_field({
				current_owner => map{release_field->current_owner->reg_no},
				field_name => release_field->field_name,
			});
		} case :use_index(var use_index) {
			new_cmd = :use_index({
				new_owner => map{use_index->new_owner->reg_no},
				old_owner => map{use_index->old_owner->reg_no},
				index => map{use_index->index->reg_no},
			});
		} case :release_index(var release_index) {
			new_cmd = :release_index({
				current_owner => map{release_index->current_owner->reg_no},
				index => map{release_index->index->reg_no},
			});
		} case :use_hash_index(var use_hash_index) {
			new_cmd = :use_hash_index({
				new_owner => map{use_hash_index->new_owner->reg_no},
				old_owner => map{use_hash_index->old_owner->reg_no},
				index => map{use_hash_index->index->reg_no},
				create_if_not_exist => use_hash_index->create_if_not_exist,
			});
		} case :release_hash_index(var release_hash_index) {
			new_cmd = :release_hash_index({
				current_owner => map{release_hash_index->current_owner->reg_no},
				index => map{release_hash_index->index->reg_no},
			});
		} case :use_variant(var use_variant) {
			new_cmd = :use_variant({
				new_owner => map{use_variant->new_owner->reg_no},
				old_owner => map{use_variant->old_owner->reg_no},
				label => use_variant->label,
				label_no => use_variant->label_no,
			});
		} case :release_variant(var release_variant) {
			new_cmd = :release_variant({
				current_owner => map{release_variant->current_owner->reg_no},
			});
		}
		new_cmds []= {
			annotation => recalculate_annotation(cmd->annotation, map),
			debug => cmd->debug,
			cmd => new_cmd,
		};
	}
	return new_cmds;
}

def recalculate_annotation(annotation : @nlasm::annotation_t, map : ptd::hash(@nlasm::reg_t)) : @nlasm::annotation_t {
	match (annotation) case :none {
		return :none;
	} case :const(var regs) {
		var new_regs = [];
		fora var reg (regs) {
			new_regs []= map{reg->reg_no};
		}
		return :const(new_regs);
	}
}

def find_unused_regs(func : @nlasm::function_t) : ptd::hash(@boolean_t::type) {
	var regs : ptd::hash(@boolean_t::type) = {};
	rep var i (array::len(func->registers)) {
		regs{i} = false;
	}

	rep var i (array::len(func->args_type)) {
		regs{i} = true;
	}

	fora var cmd (func->commands) {
		match (cmd->cmd) case :arr_decl(var arr) {
			regs{arr->dest->reg_no} = true;
			fora var el (arr->src) {
				regs{el->reg_no} = true;
			}
		} case :hash_decl(var hash) {
			regs{hash->dest->reg_no} = true;
			fora var el (hash->src) {
				regs{el->val->reg_no} = true;
			}
		} case :func(var func_cmd) {
			regs{func_cmd->dest->reg_no} = true;
		} case :call(var call) {
			regs{call->dest->reg_no} = true;
			fora var el (call->args) {
				match (el) case :val(var reg) {
					regs{reg->reg_no} = true;
				} case :ref(var reg) {
					regs{reg->reg_no} = true;
				}
			}
		} case :una_op(var op) {
			regs{op->dest->reg_no} = true;
			regs{op->src->reg_no} = true;
		} case :bin_op(var op) {
			regs{op->dest->reg_no} = true;
			regs{op->left->reg_no} = true;
			regs{op->right->reg_no} = true;
		} case :ov_is(var op) {
			regs{op->dest->reg_no} = true;
			regs{op->src->reg_no} = true;
		} case :ov_as(var op) {
			regs{op->dest->reg_no} = true;
			regs{op->src->reg_no} = true;
		} case :return(var ret) {
			match (ret) case :val(var val) {
				regs{val->reg_no} = true;
			} case :emp {
			}
		} case :die(var as_die) {
			regs{as_die->reg_no} = true;
		} case :move(var move) {
			regs{move->dest->reg_no} = true;
			regs{move->src->reg_no} = true;
		} case :load_const(var l) {
			regs{l->dest->reg_no} = true;
		} case :get_frm_idx(var idx) {
			regs{idx->dest->reg_no} = true;
			regs{idx->src->reg_no} = true;
			regs{idx->idx->reg_no} = true;
		} case :set_at_idx(var idx) {
			regs{idx->val->reg_no} = true;
			regs{idx->src->reg_no} = true;
			regs{idx->idx->reg_no} = true;
		} case :array_push(var push) {
			regs{push->dest->reg_no} = true;
			regs{push->val->reg_no} = true;
		} case :array_len(var len) {
			regs{len->dest->reg_no} = true;
			regs{len->src->reg_no} = true;
		} case :get_val(var val) {
			regs{val->dest->reg_no} = true;
			regs{val->src->reg_no} = true;
		} case :set_val(var val) {
			regs{val->src->reg_no} = true;
			regs{val->val->reg_no} = true;
		} case :ov_mk(var ov) {
			regs{ov->dest->reg_no} = true;	
			match (ov->src) case :arg(var arg) {
				regs{arg->reg_no} = true;
			} case :emp {
			}
		} case :prt_lbl(var lbl) {
		} case :if_goto(var cond) {
			regs{cond->src->reg_no} = true;
		} case :goto(var goto) {
		} case :clear(var clear) {
			regs{clear->reg_no} = true;
		} case :var_decl(var decl) {
			die;
		} case :use_field(var use_field) {
			regs{use_field->src->reg_no} = true;
			regs{use_field->val->reg_no} = true;
		} case :release_field(var release_field) {
		} case :use_index(var use_index) {
			regs{use_index->src->reg_no} = true;
			regs{use_index->val->reg_no} = true;
			regs{use_index->index->reg_no} = true;
		} case :release_index(var release_index) {
		} case :use_hash_index(var use_hash_index) {
			regs{use_hash_index->src->reg_no} = true;
			regs{use_hash_index->val->reg_no} = true;
			regs{use_hash_index->index->reg_no} = true;
		} case :release_hash_index(var release_hash_index) {
		} case :use_variant(var use_variant) {
			regs{use_variant->src->reg_no} = true;
			regs{use_variant->val->reg_no} = true;
		} case :release_variant(var release_variant) {
		}
	}
	return regs;
}
