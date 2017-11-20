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
	rep var i (func->reg_size->im) {
		if (regs{i}) {
			map{i} = :im(new_reg_index);
			++new_reg_index;
		}
	}
	map{''} = :im('');
	var new_func = func;
	new_func->reg_size->im = new_reg_index;
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
				new_src []= map{el as :im}; #TODO non-im
			}
			new_cmd = :arr_decl({
				dest => map{arr->dest as :im}, #TODO non-im
				src => new_src,
			});
		} case :hash_decl(var hash) {
			var new_keys = [];
			fora var el (hash->src) {
				new_keys []= {
					key => el->key, val => map{el->val as :im} #TODO non-im
				};
			}
			new_cmd = :hash_decl({
				dest => map{hash->dest as :im}, #TODO non-im
				src => new_keys,
			});
		} case :func(var func) {
			new_cmd = :func({
				dest => map{func->dest as :im}, #TODO non-im
				module => func->module,
				name => func->name,
			});
		} case :call(var call) {
			var new_args = [];
			fora var el (call->args) {
				var new_el;
				match (el) case :val(var reg) {
					new_el = :val(map{reg as :im}); #TODO non-im
				} case :ref(var reg) {
					new_el = :ref(map{reg as :im}); #TODO non-im
				}
				new_args []= new_el;
			}
			new_cmd = :call({
				dest => map{call->dest as :im}, #TODO non-im
				mod => call->mod,
				fun_name => call->fun_name,
				args => new_args,
			});
		} case :una_op(var op) {
			new_cmd = :una_op({
				dest => map{op->dest as :im}, #TODO non-im
				src => map{op->src as :im}, #TODO non-im
				op => op->op,
			});
		} case :bin_op(var op) {
			new_cmd = :bin_op({
				dest => map{op->dest as :im}, #TODO non-im
				left => map{op->left as :im}, #TODO non-im
				right => map{op->right as :im}, #TODO non-im
				op => op->op,
			});
		} case :ov_is(var op) {
			new_cmd = :ov_is({
				dest => map{op->dest as :im}, #TODO non-im
				src => map{op->src as :im}, #TODO non-im
				type => op->type,
			});
		} case :ov_as(var op) {
			new_cmd = :ov_as({
				dest => map{op->dest as :im}, #TODO non-im
				src => map{op->src as :im}, #TODO non-im
				type => op->type,
			});
		} case :return(var ret) {
			match (ret) case :val(var val) {
				new_cmd = :return(:val(map{val as :im})); #TODO non-im
			} case :emp {
				new_cmd = :return(:emp);
			}
		} case :die(var as_die) {
			new_cmd = :die(map{as_die as :im}); #TODO non-im
		} case :move(var move) {
			new_cmd = :move({
				dest => map{move->dest as :im}, #TODO non-im
				src => map{move->src as :im}, #TODO non-im
			});
		} case :load_const(var l) {
			new_cmd = :load_const({
				dest => map{l->dest as :im}, #TODO non-im
				val => l->val,
			});
		} case :get_frm_idx(var idx) {
			new_cmd = :get_frm_idx({
				dest => map{idx->dest as :im}, #TODO non-im
				src => map{idx->src as :im}, #TODO non-im
				idx => map{idx->idx as :im}, #TODO non-im
			});
		} case :set_at_idx(var idx) {
			new_cmd = :set_at_idx({
				src => map{idx->src as :im}, #TODO non-im
				idx => map{idx->idx as :im}, #TODO non-im
				val => map{idx->val as :im}, #TODO non-im
			});
		} case :get_val(var val) {
			new_cmd = :get_val({
				key => val->key,
				dest => map{val->dest as :im}, #TODO non-im
				src => map{val->src as :im}, #TODO non-im
			});
		} case :set_val(var val) {
			new_cmd = :set_val({
				src => map{val->src as :im}, #TODO non-im
				val => map{val->val as :im}, #TODO non-im
				key => val->key,
			});
		} case :ov_mk(var ov) {
			var new_arg;
			match (ov->src) case :arg(var arg) {
				new_arg = :arg(map{arg as :im}); #TODO non-im
			} case :emp {
				new_arg = :emp;
			}
			new_cmd = :ov_mk({
				dest => map{ov->dest as :im}, #TODO non-im
				src => new_arg,
				name => ov->name,
			});
		} case :prt_lbl(var lbl) {
			new_cmd = :prt_lbl(lbl);
		} case :if_goto(var cond) {
			new_cmd = :if_goto({
				dest =>  cond->dest,
				src => map{cond->src as :im}, #TODO non-im
			});
		} case :goto(var goto) {
			new_cmd = :goto(goto);
		} case :clear(var clear) {
			new_cmd = :clear(map{clear as :im}); #TODO non-im
		} case :var_decl(var decl) {
			die;
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
			new_regs []= map{reg as :im}; #TODO non-im
		}
		return :const(new_regs);
	}
}

def find_unused_regs(func : @nlasm::function_t) : ptd::hash(@boolean_t::type) {
	var regs : ptd::hash(@boolean_t::type) = {};
	rep var i (func->reg_size->im) { #TODO non-im
		regs{i} = false;
	}

	rep var i (array::len(func->args_type)) {
		regs{i} = true;
	}

	fora var cmd (func->commands) {
		match (cmd->cmd) case :arr_decl(var arr) {
			regs{arr->dest as :im} = true; #TODO non-im
			fora var el (arr->src) {
				regs{el as :im} = true; #TODO non-im
			}
		} case :hash_decl(var hash) {
			regs{hash->dest as :im} = true; #TODO non-im
			fora var el (hash->src) {
				regs{el->val as :im} = true; #TODO non-im
			}
		} case :func(var func_cmd) {
			regs{func_cmd->dest as :im} = true; #TODO non-im
		} case :call(var call) {
			regs{call->dest as :im} = true; #TODO non-im
			fora var el (call->args) {
				match (el) case :val(var reg) {
					regs{reg as :im} = true; #TODO non-im
				} case :ref(var reg) {
					regs{reg as :im} = true; #TODO non-im
				}
			}
		} case :una_op(var op) {
			regs{op->dest as :im} = true; #TODO non-im
			regs{op->src as :im} = true; #TODO non-im
		} case :bin_op(var op) {
			regs{op->dest as :im} = true; #TODO non-im
			regs{op->left as :im} = true; #TODO non-im
			regs{op->right as :im} = true; #TODO non-im
		} case :ov_is(var op) {
			regs{op->dest as :im} = true; #TODO non-im
			regs{op->src as :im} = true; #TODO non-im
		} case :ov_as(var op) {
			regs{op->dest as :im} = true; #TODO non-im
			regs{op->src as :im} = true; #TODO non-im
		} case :return(var ret) {
			match (ret) case :val(var val) {
				regs{val as :im} = true; #TODO non-im
			} case :emp {
			}
		} case :die(var as_die) {
			regs{as_die as :im} = true; #TODO non-im
		} case :move(var move) {
			regs{move->dest as :im} = true; #TODO non-im
			regs{move->src as :im} = true; #TODO non-im
		} case :load_const(var l) {
			regs{l->dest as :im} = true; #TODO non-im
		} case :get_frm_idx(var idx) {
			regs{idx->dest as :im} = true; #TODO non-im
			regs{idx->src as :im} = true; #TODO non-im
			regs{idx->idx as :im} = true; #TODO non-im
		} case :set_at_idx(var idx) {
			regs{idx->val as :im} = true; #TODO non-im
			regs{idx->src as :im} = true; #TODO non-im
			regs{idx->idx as :im} = true; #TODO non-im
		} case :get_val(var val) {
			regs{val->dest as :im} = true; #TODO non-im
			regs{val->src as :im} = true; #TODO non-im
		} case :set_val(var val) {
			regs{val->src as :im} = true; #TODO non-im
			regs{val->val as :im} = true; #TODO non-im
		} case :ov_mk(var ov) {
			regs{ov->dest as :im} = true;	 #TODO non-im
			match (ov->src) case :arg(var arg) {
				regs{arg as :im} = true; #TODO non-im
			} case :emp {
			}
		} case :prt_lbl(var lbl) {
		} case :if_goto(var cond) {
			regs{cond->src as :im} = true; #TODO non-im
		} case :goto(var goto) {
		} case :clear(var clear) {
			regs{clear as :im} = true; #TODO non-im
		} case :var_decl(var decl) {
			die;
		}
	}
	return regs;
}
