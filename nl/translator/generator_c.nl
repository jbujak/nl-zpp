###
# (c) Atinea Sp. z o.o.
###


use ptd;
use nlasm;
use string;
use array;
use hash;
use ov;
use singleton;
use nl;
use boolean_t;
use string_utils;
use tct;
use generator_c_struct_dependence_sort;

def get_bin_ops() : ptd::hash(ptd::sim()) {
	return singleton::sigleton_do_not_use_without_approval(gen_bin_ops());
}

def get_bin_ops_mod() : ptd::hash(ptd::sim()) {
	return singleton::sigleton_do_not_use_without_approval(gen_bin_ops_mod());
}

def get_unary_ops() : ptd::hash(ptd::sim()) {
	return singleton::sigleton_do_not_use_without_approval(gen_unary_ops());
}

def gen_unary_ops() : ptd::hash(ptd::sim()) {
	var ret = {};
	hash::set_value(ref ret, '!', 'not');
	hash::set_value(ref ret, '-', 'unary_minus');
	hash::set_value(ref ret, '+', 'unary_plus');
	return ret;
}

def gen_bin_ops() : ptd::hash(ptd::sim()) {
	var ret = {};
	hash::set_value(ref ret, 'eq', 'eq');
	hash::set_value(ref ret, 'ne', 'ne');
	hash::set_value(ref ret, '+', 'add');
	hash::set_value(ref ret, '-', 'sub');
	hash::set_value(ref ret, '*', 'mul');
	hash::set_value(ref ret, '/', 'div');
	hash::set_value(ref ret, '%', 'mod');
	hash::set_value(ref ret, '<=', 'le');
	hash::set_value(ref ret, '<', 'lt');
	hash::set_value(ref ret, '==', 'num_eq');
	hash::set_value(ref ret, '!=', 'num_ne');
	hash::set_value(ref ret, '>', 'gt');
	hash::set_value(ref ret, '>=', 'ge');
	hash::set_value(ref ret, '.', 'concat_new');
	return ret;
}

def gen_bin_ops_mod() : ptd::hash(ptd::sim()) {
	var ret = {};
	hash::set_value(ref ret, '+', 'add_mod');
	hash::set_value(ref ret, '-', 'sub_mod');
	hash::set_value(ref ret, '*', 'mul_mod');
	hash::set_value(ref ret, '/', 'div_mod');
	hash::set_value(ref ret, '%', 'mod_mod');
	hash::set_value(ref ret, '.', 'concat_add');
	return ret;
}

def generator_c::const_dict() {
	return ptd::rec({arr => ptd::arr(ptd::sim()), hash => ptd::hash(ptd::sim())});
}

def generator_c::fun_args_t() {
	return ptd::arr(@nlasm::arg_type_t);
}

def generator_c::const_t() {
	return ptd::rec({arr => ptd::arr(ptd::sim()), hash => ptd::hash(ptd::sim())});
}

def generator_c::global_const_t() {
	return ptd::rec({
			arr => ptd::arr(ptd::rec({key => ptd::sim(), uses => ptd::sim()})),
			hash => ptd::hash(ptd::sim()),
			holes => ptd::arr(ptd::sim()),
			module_consts => ptd::hash(ptd::hash(ptd::sim()))
		});
}

def generator_c::state_t() {
	return ptd::rec({
			global_const => @generator_c::global_const_t,
			header => ptd::sim(),
			ret => ptd::sim(),
			additional_imports => ptd::hash(@boolean_t::type),
			mod_name => ptd::sim(),
			fun_args => @generator_c::fun_args_t,
			ret_type => @tct::meta_type,
			const => ptd::rec({
					sim => @generator_c::const_t,
					singleton => @generator_c::const_t,
					dynamic_nr => ptd::sim()
				})
		});
}

def generator_c::get_empty_state() : @generator_c::state_t {
	return {
			global_const => {arr => [], hash => {}, holes => [], module_consts => {}},
			ret => '',
			header => '',
			fun_args => [],
			ret_type => :tct_im,
			const => {dynamic_nr => 0, sim => {arr => [], hash => {}}, singleton => {arr => [], hash => {}}},
			mod_name => '',
			additional_imports => {},
		};
}

def print(ref state : @generator_c::state_t, s : ptd::sim()) : ptd::void() {
	state->ret .= s;
}

def print_to_header(ref state : @generator_c::state_t, s : ptd::sim()) {
	state->header .= s;
}

def println_to_header(ref state : @generator_c::state_t, s : ptd::sim()) {
	state->header .= s . string::lf();
}

def im_t() : ptd::sim() {
	return 'ImmT ';
}

def int_t() : ptd::sim() {
	return 'INT ';
}

def bool_t() : ptd::sim() {
	return 'bool ';
}

def println(ref state : @generator_c::state_t, s : ptd::sim()) {
	state->ret .= s;
	state->ret .= string::lf();
}

def get_reg(ref state : @generator_c::state_t, reg : @nlasm::reg_t) : ptd::sim() {
	var args = state->fun_args;
	var reg_no = reg->reg_no;
	if (array::len(args) > reg_no && args[reg_no]->by is :ref) {
		return '*___ref___' . reg_suffix(reg);
	} else {
		return '___nl__' . reg_suffix(reg);
	}
}

def get_reg_ref(ref state : @generator_c::state_t, reg : @nlasm::reg_t) : ptd::sim() {
	var args = state->fun_args;
	var reg_no = reg->reg_no;
	if (array::len(args) > reg_no && args[reg_no]->by is :ref) {
		return '___ref___' . reg_suffix(reg);
	} else {
		return '&___nl__' . reg_suffix(reg);
	}
}

def get_string(s : ptd::sim()) : ptd::sim() {
	return '"' . s . '"';
}

def generator_c::module_out_t() {
	return ptd::rec({c => ptd::sim(), h => ptd::sim()});
}

def generator_c::out_t() {
	return ptd::rec({modules => ptd::hash(@generator_c::module_out_t), global_const => @generator_c::module_out_t});
}

def generator_c::generate(nlasms : ptd::hash(@nlasm::result_t), ref state : @generator_c::state_t) : @generator_c::out_t {
	var modules_out = {};
	var modules_names = [];
	forh var module, var none (nlasms) {
		array::push(ref modules_names, module);
	}
	array::sort(ref modules_names);
	fora var module (modules_names) {
		var nlasm = hash::get_value(nlasms, module);
		generator_c::clear_module_from_state(ref state, module);
		hash::set_value(ref state->global_const->module_consts, module, {});
		state->ret = '';
		state->header = '';
		state->fun_args = [];
		state->const = {dynamic_nr => 0, sim => {arr => [], hash => {}}, singleton => {arr => [], hash => {}}};
		state->mod_name = module;
		state->additional_imports = {};
		print_mod(ref state, nlasm);
		hash::set_value(ref modules_out, module, {c => state->ret, h => state->header});
	}
	return {modules => modules_out, global_const => generate_global_const_files(ref state)};
}

def generate_global_const_files(ref state : @generator_c::state_t) : @generator_c::module_out_t {
	state->ret = '';
	state->header = '';
	state->fun_args = [];
	state->const = {dynamic_nr => 0, sim => {arr => [], hash => {}}, singleton => {arr => [], hash => {}}};
	state->mod_name = '';
	print_to_header(ref state, get_cr());
	println_to_header(ref state, '#pragma once');
	println_to_header(ref state, get_include('c_rt_lib'));
	print(ref state, get_cr());
	println(ref state, get_include('c_global_const'));
	var sim = state->global_const->arr;
	var const_len = array::len(sim);
	println_to_header(ref state, 'void ___global_const_init();');
	println_to_header(ref state, im_t() . ' ___get_global_const(int __nr);');
	println(ref state, '
		'static ' . im_t() . ' ___global_const__ = NULL;
		'static int ___global_const_init__ = 1;
		'static int ___global_const_offset;');
	println(ref state, 'void ___global_const_init(){
		'if(___global_const_init__) {
		'___global_const_init__ = 0;
		'___global_const_offset = c_rt_lib0get_global_const_offset();
		'___global_const__ = alloc_mem(' . const_len . ' * ___global_const_offset);
		'');
	rep var i (const_len) {
		println(ref state, create_sim_to_memory(sim[i]->key, '___global_const__ + ___global_const_offset * ' . i) . ';');
	}
	println(ref state, '
		'' . get_lib_fun('register_global_const') . '((' . im_t() . ')___global_const__,(' . im_t() . 
		')___global_const__ + ' . const_len . ' * ___global_const_offset);
		'}}');
	println(ref state, im_t() . '___get_global_const(int __nr) {
		'' . im_t() . 'ret = NULL;
		'' . get_fun_lib('copy', ['&ret', '(' . im_t() . ')___global_const__ + ___global_const_offset * __nr']) . ';
		'return ret;
		'}');
	return {c => state->ret, h => state->header};
}

def get_include(import : ptd::sim()) : ptd::sim() {
	return '#include "' . import . '.h"';
}

def get_cr() : ptd::sim() {
	return '
		'/* (c) Atinea Sp z o. o.
		' *  Stamp: nianio lang
		' */
		'';
}

def get_function_name(func : @nlasm::function_t, mod_name : ptd::sim()) : ptd::sim() {
	var nmode;
	match (func->access) case :pub {
		nmode = mod_name;
	} case :priv {
		nmode = '';
	}
	return get_fun_name(nmode, func->name, mod_name);
}

def get_function_header(func : @nlasm::function_t, mod_name : ptd::sim()) : ptd::sim() {
	var fun_header = '';
	var fun_name = get_function_name(func, mod_name);
	fun_header .= get_type_name(func->ret_type) . fun_name . '(';
	var reg_mem = 0;
	fora var arg_type (func->args_type) {
		fun_header .= ',' unless 0 == reg_mem;
		match (arg_type->by) case :val {
			fun_header .=  get_type_name(arg_type->type as :type) . '___nl__' . reg_suffix(arg_type->register);
		} case :ref {
			fun_header .= get_type_name(arg_type->type as :type) . '* ___ref___' . reg_suffix(arg_type->register);
		}
		reg_mem++;
	}
	fun_header .= ')';
	return fun_header;
}

def get_const(ref type : @generator_c::const_t, key : ptd::sim()) : ptd::sim() {
	var nr = -1;
	if (!hash::has_key(type->hash, key)) {
		nr = array::len(type->arr);
		array::push(ref type->arr, key);
		hash::set_value(ref type->hash, key, nr);
	} else {
		nr = hash::get_value(type->hash, key);
	}
	return nr;
}

def insert_const_to_modules_hash(ref global_const : @generator_c::global_const_t, key : ptd::sim(), module : ptd::sim()) {
	var hash = hash::get_value(global_const->module_consts, module);
	hash::set_value(ref hash, key, '');
	hash::set_value(ref global_const->module_consts, module, hash);
}

def get_global_const(ref global_const : @generator_c::global_const_t, key : ptd::sim(), module : ptd::sim()) : ptd::sim() {
	var nr = -1;
	if (!hash::has_key(global_const->hash, key)) {
		if (array::len(global_const->holes) > 0) {
			nr = global_const->holes[array::len(global_const->holes) - 1];
			array::pop(ref global_const->holes);
			global_const->arr[nr] = {key => key, uses => 1};
		} else {
			nr = array::len(global_const->arr);
			array::push(ref global_const->arr, {key => key, uses => 1});
		}
		insert_const_to_modules_hash(ref global_const, key, module);
		hash::set_value(ref global_const->hash, key, nr);
	} else {
		nr = hash::get_value(global_const->hash, key);
		var module_hash = hash::get_value(global_const->module_consts, module);
		if (!hash::has_key(module_hash, key)) {
			++global_const->arr[nr]->uses;
			insert_const_to_modules_hash(ref global_const, key, module);
		}
	}
	return nr;
}

def generator_c::clear_module_from_state(ref state : @generator_c::state_t, module : ptd::sim()) {
	if (hash::has_key(state->global_const->module_consts, module)) {
		var consts = hash::get_value(state->global_const->module_consts, module);
		forh var key, var none (consts) {
			var nr = hash::get_value(state->global_const->hash, key);
			--state->global_const->arr[nr]->uses;
			if (state->global_const->arr[nr]->uses == 0) {
				hash::delete(ref state->global_const->hash, key);
				array::push(ref state->global_const->holes, nr);
			}
		}
		hash::delete(ref state->global_const->module_consts, module);
	}
}

def get_const_sim(ref state : @generator_c::state_t, sim : ptd::sim()) : ptd::sim() {
	var nr = get_global_const(ref state->global_const, sim, state->mod_name);
	return '___get_global_const(' . nr . ')';
}

def get_const_singleton(ref state : @generator_c::state_t, sim : ptd::sim()) : ptd::sim() {
	var nr = get_const(ref state->const->singleton, sim);
	return get_fun_name('', '__const__sing', state->mod_name) . '(' . nr . ')';
}

def get_func_ptr_header(func : @nlasm::function_t, mod_name : ptd::sim()) : ptd::sim() {
	return get_type_name(func->ret_type) . get_function_name(func, mod_name) . '0ptr(int _num, ImmT *_tab)';
}

def print_mod(ref state : @generator_c::state_t, asm : @nlasm::result_t) {
	print_to_header(ref state, get_cr());
	print_to_header(ref state, '#pragma once' . string::lf());
	print_to_header(ref state, get_include('c_rt_lib') . string::lf());
	print_to_header(ref state, get_include('stdbool') . string::lf());
	print(ref state, get_cr());
	println(ref state, get_include('c_rt_lib'));
	println(ref state, get_include('c_global_const'));
	println(ref state, get_include(state->mod_name));
	fora var import (asm->imports) {
		println(ref state, get_include(import));
	}
	var ret = state->ret;
	state->ret = '';
	println(ref state, '#line 1 "' . state->mod_name . '.nl"' . string::lf());
	println(ref state, 'static ' . im_t() . '*__const__f = NULL;');
	println(ref state, 'void ' . get_fun_name('', '__const__init', state->mod_name) . '();');
	println(ref state, im_t() . get_fun_name('', '__const__sim', state->mod_name) . '(int __nr);');
	println(ref state, im_t() . get_fun_name('', '__const__sing', state->mod_name) . '(int __nr);' . string::lf());
	fora var func (asm->functions) {
		var fun_header = get_function_header(func, state->mod_name);
		match (func->access) case :pub {
			print_to_header(ref state, fun_header . ';' . string::lf());
			print_to_header(ref state, get_func_ptr_header(func, state->mod_name) . ';' . string::lf());
		} case :priv {
			println(ref state, fun_header . ';');
		}
	}
	var struct_order = generator_c_struct_dependence_sort::sort(asm->functions, state->mod_name);
	var hash_typedef_funs : ptd::hash(@nlasm::function_t) = {};
	fora var f (asm->functions) {
		match (f->access) case :pub {
			match (f->defines_type) case :yes(var type) {
				hash::set_value(ref hash_typedef_funs, f->name, f);
			} case :no {
			}
		} case :priv {
		}
	}
	match (struct_order) case :result(var s) {
		fora var func (s) {
			match (func) case :definition(var name) {
				print_to_header(ref state, get_func_type_struct_def(
					hash::get_value(hash_typedef_funs, name), state->mod_name) . string::lf());
			} case :declaration(var name) {
				#print_to_header(ref state, get_func_type_struct_decl(
				#	hash::get_value(hash_typedef_funs, name), state->mod_name) . string::lf());
			} case :both(var name) {
				#print_to_header(ref state, get_func_type_struct_decl(
				#	hash::get_value(hash_typedef_funs, name), state->mod_name) . string::lf());
				print_to_header(ref state, get_func_type_struct_def(
					hash::get_value(hash_typedef_funs, name), state->mod_name) . string::lf());
			}
		}
	} case :cycle {
		nl::print('C generation error: struct reference cycle' . string::lf());
		die;
	}
	
	println(ref state, string::lf());
	fora var func (asm->functions) {
		if (func->access is :pub) {
			var fun_name = get_function_name(func, state->mod_name);
			println(ref state, get_func_ptr_header(func, state->mod_name) . '{');
			var number = array::len(func->args_type);
			println(ref state, get_fun_lib('func_num_args', ['_num', number, get_string(fun_name)]) . ';');
			print(ref state, 'return ' . fun_name . '(');
			rep var arg_id (number) {
				print(ref state, ', ') if (arg_id > 0);
				match (func->args_type[arg_id]->by) case :val {
					print(ref state, '_tab[' . arg_id . ']');
				} case :ref {
					print(ref state, '&_tab[' . arg_id . ']');
				}
			}
			println(ref state, ');}');
		}
		if (is_singleton_use_function(func)) {
			var fun_name = get_function_name(func, state->mod_name);
			println(ref state, im_t() . fun_name . '(){');
			println(ref state, get_fun_name('', '__const__init', state->mod_name) . '();');
			println(ref state, 'return ' . get_const_singleton(ref state, fun_name) . ';}');
			print(ref state, im_t() . fun_name . '0cal()');
		} else {
			print(ref state, get_function_header(func, state->mod_name));
		}
		print_function_block(ref state, func);
	}
	print_init_const(ref state);
	forh var import, var none (state->additional_imports) {
		ret .= get_include(import) . string::lf();
	}
	state->ret = ret  . state->ret;
}

def print_init_const(ref state : @generator_c::state_t) : ptd::void() {
	var sim = state->const->sim->arr;
	var singleton = state->const->singleton->arr;
	var sim_len = array::len(sim);
	var sing_len = array::len(singleton);
	var dyna_len = state->const->dynamic_nr;
	var const_len = sim_len + sing_len + dyna_len;
	println(ref state, '
		'static ' . im_t() . '___const__[' . (1 + const_len) . '];
		'static int ___const_init__ = 1;');
	println(ref state, 'void ' . get_fun_name('', '__const__init', state->mod_name) . '(){
		'if(___const_init__) {
		'___const_init__ = 0;
		'__const__f = &___const__[' . (sim_len + sing_len) . '];
		'');
	rep var i (sim_len) {
		println(ref state, '___const__[' . i . '] = ' . create_sim(sim[i]) . ';');
	}
	println(ref state, '
		'for(int i=' . sim_len . ';i<' . const_len . ';++i) ___const__[i] = NULL;
		'' . get_lib_fun('register_const') . '(___const__, ' . const_len . ');
		'}}');
	println(ref state, im_t() . get_fun_name('', '__const__sim', state->mod_name) . '(int __nr) {
		'' . im_t() . 'ret = NULL;
		'' . get_fun_lib('copy', ['&ret', '___const__[__nr]']) . ';
		'return ret;
		'}');
	println(ref state, im_t() . get_fun_name('', '__const__sing', state->mod_name) . '(int __nr) {
		'if(___const__[__nr+' . sim_len . ']==NULL) {
		'switch(__nr){');
	rep var i (array::len(singleton)) {
		println(ref state, 'case ' . i . ':');
		println(ref state, '	___const__[' . (i + sim_len) . '] = ' . singleton[i] . '0cal();');
		println(ref state, '	break;');
	}
	println(ref state, 'default:
		'	nl_die();
		'}}
		'' . im_t() . 'ret = NULL;
		'' . get_fun_lib('copy', ['&ret', '___const__[__nr+' . sim_len . ']']) . ';
		'return ret;
		'}');
}

def print_function_block(ref state : @generator_c::state_t, func : @nlasm::function_t) : ptd::void() {
	println(ref state, ' {');
	state->fun_args = func->args_type;
	state->ret_type = func->ret_type;
	move_args_to_register(ref state);
	println(ref state, get_fun_name('', '__const__init', state->mod_name) . '();');
	
	for(var i = array::len(func->args_type); i < array::len(func->registers); i++) {
		print_declaration(ref state, func->registers[i]);
	}
	
	fora var cmd (func->commands) {
		match (cmd->annotation) case :none {
			print_cmd(ref state, cmd);
		} case :const(var tab) {
			if (cmd->cmd is :load_const) {
				var value = (cmd->cmd as :load_const)->val;
				if (nl::is_sim(value)) {
					print_cmd(ref state, cmd);
					continue;
				}
			}
			var len = array::len(tab);
			if (len == 0) {
				print_cmd(ref state, cmd);
				continue;
			} else {
				var nr = state->const->dynamic_nr;
				println(ref state, 'if(__const__f[' . nr . '] == NULL) {');
				print_cmd(ref state, cmd);
				fora var reg (tab) {
					println(ref state, get_fun_lib('copy', ['&__const__f[' . nr . ']', get_reg(ref state, reg)]) . ';');
					nr++;
				}
				println(ref state, '}');
				nr -= len;
				fora var reg (tab) {
					println(ref state, get_fun_lib('copy', [get_reg_ref(ref state, reg), '__const__f[' . nr . ']']) . 
						';');
					nr++;
				}
				state->const->dynamic_nr = nr;
			}
		}
	}
	println(ref state, '}' . string::lf());
}

def is_singleton_use_function(function : @nlasm::function_t) : @boolean_t::type {
	return false if (array::len(function->args_type) > 0);
	var is_math = function->annotation is :math;
	var was_singleton = false;
	var dest;
	fora var cmd (function->commands) {
		var command = cmd->cmd;
		if (command is :call) {
			var call = command as :call;
			continue unless (call->fun_name eq 'sigleton_do_not_use_without_approval');
			continue unless (call->mod eq 'singleton');
			was_singleton = true;
			dest = call->dest;
		} elsif (command is :return) {
			var ret = command as :return;
			return false unless (ret is :val);
			return true if is_math;
			return false unless was_singleton;
			return ret as :val->reg_no eq dest;
		} elsif (command is :prt_lbl) {
		} elsif (command is :clear) {
		} else {
			return false if (was_singleton);
		}
	}
	return false;
}

def move_args_to_register(ref state : @generator_c::state_t) {
	rep var arg_id (array::len(state->fun_args)) {
		match (state->fun_args[arg_id]->by) case :val {
			print(ref state, get_fun_lib('arg_val', [get_reg(ref state, state->fun_args[arg_id]->register)]));
			println(ref state, ';');
		} case :ref {
		}
	}
}

def move_register_to_ref_args(ref state : @generator_c::state_t) {
#	rep var arg_id (array::len(state->fun_args)) {
#		match (state->fun_args[arg_id]) case :val {
#		} case :ref {
#		}
#	}
}

def get_fun_lib(fun_name : ptd::sim(), args : ptd::arr(ptd::sim())) : ptd::sim() {
	var ret = get_lib_fun(fun_name) . '(';
	var i = 0;
	fora var arg (args) {
		ret .= ', ' unless 0 == i;
		ret .= arg;
		++i;
	}
	return ret . ')';
}

def get_module_name(mod : ptd::sim()) : ptd::sim() {
	return string::replace(mod, '0', '00');
}

def get_fun_name(mod : ptd::sim(), fun_name : ptd::sim(), mod_name : ptd::sim()) : ptd::sim() {
	mod = mod_name . '_priv' if mod eq '';
	return get_module_name(mod) . '0' . string::replace(fun_name, '0', '00');
}

def get_lib_fun(fun_name : ptd::sim()) : ptd::sim() {
	return get_fun_name('c_rt_lib', fun_name, '');
}

def generate_imm(ref state : @generator_c::state_t, obj) : ptd::void() {
	if (nl::is_hash(obj)) {
		print(ref state, get_lib_fun('hash_mk_dec') . '(' . hash::size(obj));
		forh var key, var value (obj) {
			print(ref state, ', ');
			print(ref state, get_const_sim(ref state, key));
			print(ref state, ', ');
			generate_imm(ref state, value);
		}
		print(ref state, ')');
	} elsif (nl::is_array(obj)) {
		print(ref state, get_lib_fun('array_mk_dec') . '(' . array::len(obj));
		fora var el (obj) {
			print(ref state, ', ');
			generate_imm(ref state, el);
		}
		print(ref state, ')');
	} elsif (nl::is_variant(obj)) {

		var variant_label = get_const_sim(ref state, ptd::ensure(ptd::sim(), ov::get_element(obj)));
		if (ov::has_value(obj)) {
			print(ref state, get_lib_fun('ov_mk_arg_dec') . '(' . variant_label . ', ');

			var obj_val = ov::get_value(obj);
			if ((obj is :ref) && nl::is_hash(obj_val) && (hash::size(obj_val) == 2) && hash::has_key(obj_val, 'name') && hash::has_key(obj_val, 'module')) {
				if (nl::is_sim(obj_val->name) && nl::is_sim(obj_val->module)) {
					print(ref state, get_func_pointer(ref state, ptd::ensure(ptd::sim(), obj_val->module), ptd::ensure(ptd::sim(), obj_val->name)));
				} else {
					generate_imm(ref state, obj_val);	
				}
			} else {
				generate_imm(ref state, obj_val);
			}

			print(ref state, ')');
		} else {
			print(ref state, get_lib_fun('ov_mk_none') . '(' . variant_label . ')');
		}
	} elsif (nl::is_sim(obj)) {
		print(ref state, get_const_sim(ref state, ptd::ensure(ptd::sim(), obj)));
	} else {
		die;
	}
}


def get_func_pointer(ref state : @generator_c::state_t, module_name : ptd::sim(), fun_name : ptd::sim()) : ptd::sim() {
	state->additional_imports{module_name} = true;
	return get_fun_lib('func_new', [
		get_fun_name(module_name, fun_name, state->mod_name) . '0ptr',
		get_const_sim(ref state, module_name),
		get_const_sim(ref state, fun_name),
	]);
}

def print_cmd(ref state : @generator_c::state_t, asm : @nlasm::cmd_t) : ptd::void() {
	print(ref state, '#line ' . asm->debug->nast_debug->begin->line . string::lf());
	match (asm->cmd) case :arr_decl(var decl) {
		var args = [array::len(decl->src)];
		array::push(ref args, get_reg(ref state, el)) fora var el (decl->src);
		var r = get_fun_lib('array_mk', args);
		print(ref state, get_assign(ref state, decl->dest, r));
	} case :hash_decl(var hash_decl) {
		var args = [array::len(hash_decl->src)];
		fora var el (hash_decl->src) {
			array::push(ref args, get_const_sim(ref state, el->key));
			array::push(ref args, get_reg(ref state, el->val));
		}
		var r = get_fun_lib('hash_mk', args);
		print(ref state, get_assign(ref state, hash_decl->dest, r));
	} case :func(var func) {
		var r = get_func_pointer(ref state, func->module, func->name);
		print(ref state, get_assign(ref state, func->dest, r));
	} case :call(var call) {
		generate_call(ref state, call);
	} case :una_op(var una_op) {
		var op = hash::get_value(get_unary_ops(), una_op->op);
		var r;
		if (op eq 'not') {
            r = '!' . get_reg(ref state, una_op->src);
		} else {
			r = get_fun_lib(op, [get_reg(ref state, una_op->src)]);
		}
		print(ref state, get_assign(ref state, una_op->dest, r));
	} case :bin_op(var bin_op) {
		print_bin_op(ref state, bin_op);
	} case :ov_is(var ov_is) {
		var r = get_fun_lib('priv_is', [get_reg(ref state, ov_is->src), get_const_sim(ref state, ov_is->type)]);
		print(ref state, get_assign(ref state, ov_is->dest, r));
	} case :ov_as(var ov_as) {
		var r = get_fun_lib('priv_as', [get_reg(ref state, ov_as->src), get_const_sim(ref state, ov_as->type)]);
		print(ref state, get_assign(ref state, ov_as->dest, r));
	} case :return(var rr) {
		move_register_to_ref_args(ref state);
		match (rr) case :val(var v) {
			print(ref state, 'return ');
			print(ref state, get_reg(ref state, v));
		} case :emp {
			print(ref state, 'return ');
			print(ref state, get_empty_value(state->ret_type));
		}
	} case :die(var dd) {
		print(ref state, 'nl_die_arg(' . get_reg(ref state, dd) . ')');
	} case :move(var move) {
		print_move(ref state, move->src, move->dest);
	} case :load_const(var const) {
		return if nlasm::is_empty(const->dest);
		match (const->dest->type) case :im {
			print(ref state, get_lib_fun('move') . '(' . get_reg_ref(ref state, const->dest) . ',');
			generate_imm(ref state, const->val);
			print(ref state, ')');
		} case :int {
			print(ref state, get_reg(ref state, const->dest) . ' = ' . const->val);
		} case :string {
			#TODO string
			print(ref state, get_lib_fun('move') . '(' . get_reg_ref(ref state, const->dest) . ',');
			generate_imm(ref state, const->val);
			print(ref state, ')');
		} case :bool {
			print(ref state, get_reg(ref state, const->dest) . ' = ');
			generate_imm(ref state, const->val);			
		}
	} case :get_frm_idx(var get) {
		var r = get_fun_lib('array_get', [get_reg(ref state, get->src), get_reg(ref state, get->idx)]);
		print(ref state, get_assign(ref state, get->dest, r));
	} case :set_at_idx(var set) {
		print(ref state, get_fun_lib('array_set', [
					get_reg_ref(ref state, set->src),
					get_reg(ref state, set->idx),
					get_reg(ref state, set->val)
				]));
	} case :get_val(var get) {
		var r = get_fun_lib('hash_get_value_dec', [get_reg(ref state, get->src), get_const_sim(ref state, get->key)]);
		print(ref state, get_assign(ref state, get->dest, r));
	} case :set_val(var set) {
		print(ref state, get_fun_lib('hash_set_value_dec', [
					get_reg_ref(ref state, set->src),
					get_const_sim(ref state, set->key),
					get_reg(ref state, set->val)
				]));
	} case :ov_mk(var mk) {
		var r;
		if (mk->src is :emp && (mk->name eq 'TRUE')) {
			r = 'true';
		} elsif (mk->src is :emp && (mk->name eq 'FALSE')) {
			r = 'false';
		} else {
			match (mk->src) case :arg(var a) {
				r = get_fun_lib('ov_mk_arg', [get_const_sim(ref state, mk->name), get_reg(ref state, a)]);
			} case :emp {
				r = get_fun_lib('ov_mk_none', [get_const_sim(ref state, mk->name)]);
			}
		}
		print(ref state, get_assign(ref state, mk->dest, r));
	} case :prt_lbl(var l) {
		print(ref state, 'label_' . l . ':' . string::lf());
		return;
	} case :if_goto(var ifgoto) {
		print(ref state, 'if(');
		print(ref state, get_reg(ref state, ifgoto->src));
		print(ref state, '){ goto label_' . ifgoto->dest . ';}' . string::lf());
		return;
	} case :goto(var goto) {
		print(ref state, 'goto label_' . goto);
	} case :clear(var reg) {
		match (reg->type) case :im {
			print(ref state, get_fun_lib('clear', [get_reg_ref(ref state, reg)]));
		} case :int {
			print(ref state, '//clear ' . get_reg(ref state, reg));
		} case :bool {
			print(ref state, '//clear ' . get_reg(ref state, reg));			
		} case :string {
			print(ref state, get_fun_lib('clear', [get_reg_ref(ref state, reg)])); #TODO string
		}
	} case :var_decl(var decl) {
	}
	print(ref state, ';' . string::lf());
}

def print_declaration(ref state : @generator_c::state_t, reg : @nlasm::reg_t){
	var target_type_name;
	var default_value;
	match (reg->type) case :im {
		target_type_name = im_t();
		default_value = 'NULL';
	} case :int {
		target_type_name = int_t();
		default_value = '0';
	} case :bool {
		target_type_name = bool_t();
		default_value = 'false';
	} case :string {
		target_type_name = im_t(); #TODO string
		default_value = 'NULL';
	}
	println(ref state, target_type_name . get_reg(ref state, reg) . ' = ' . default_value .';');
}

def print_move(ref state : @generator_c::state_t, src : @nlasm::reg_t, dest : @nlasm::reg_t) {
	return if nlasm::is_empty(dest);
	match (dest->type) case :im {
		print_move_to_im(ref state, src, dest);
	} case :int {
		print(ref state, get_reg(ref state, dest) . ' = ' . get_reg(ref state, src));
	} case :string {
		#TODO string
		var arg = [get_reg_ref(ref state, dest), get_reg(ref state, src)];
		print(ref state, get_fun_lib('copy', arg));
	} case :bool {
		print(ref state, get_reg(ref state, dest) . ' = ' . get_reg(ref state, src));		
	}
}

def print_move_to_im(ref state : @generator_c::state_t, src : @nlasm::reg_t, dest : @nlasm::reg_t) {
	match (src->type) case :im {
		var arg = [get_reg_ref(ref state, dest), get_reg(ref state, src)];
		print(ref state, get_fun_lib('copy', arg));
	} case :int {
		var arg = [get_reg_ref(ref state, dest), get_fun_lib('int_new', [get_reg(ref state, src)])];
		print(ref state, get_fun_lib('move', arg));
	} case :bool {
		var arg = [get_reg_ref(ref state, dest), get_fun_lib('bool_to_nl_native', [get_reg(ref state, src)])];
		print(ref state, get_fun_lib('move', arg));
	} case :string {
		#TODO string
		var arg = [get_reg_ref(ref state, dest), get_reg(ref state, src)];
		print(ref state, get_fun_lib('copy', arg));
	}
}

def print_bin_op(ref state : @generator_c::state_t, bin_op : @nlasm::bin_op) : ptd::void() {
	var op = hash::get_value(get_bin_ops(), bin_op->op);
	if (nlasm::eq_reg(bin_op->dest, bin_op->left) && hash::has_key(get_bin_ops_mod(), bin_op->op)) {
		op = hash::get_value(get_bin_ops_mod(), bin_op->op);
	}
	var r;
	#TODO string specific
	if (bin_op->op eq 'eq') {
		if(bin_op->left->type is :im || bin_op->left->type is :string) {
			r = get_fun_lib(op, [get_reg(ref state, bin_op->left), get_reg(ref state, bin_op->right)]);		
		} else {
			r = get_inline_bin_op(ref state, bin_op->left, bin_op->right, '==');			
		}
	} elsif (bin_op->op eq 'ne') {
		if(bin_op->left->type is :im || bin_op->left->type is :string) {
			r = get_fun_lib(op, [get_reg(ref state, bin_op->left), get_reg(ref state, bin_op->right)]);		
		} else {
			r = get_inline_bin_op(ref state, bin_op->left, bin_op->right, '!=');			
		}
	} else {
		if(bin_op->left->type is :im || bin_op->left->type is :string) {
			r = get_fun_lib(op, [get_reg(ref state, bin_op->left), get_reg(ref state, bin_op->right)]);		
		} else {
			r = get_inline_bin_op(ref state, bin_op->left, bin_op->right, bin_op->op);			
		}
	}
	print(ref state, get_assign(ref state, bin_op->dest, r));
}

def get_assign(ref state : @generator_c::state_t, reg : @nlasm::reg_t, right : ptd::sim()) : ptd::sim() {
	if (nlasm::is_empty(reg)) {
		return get_fun_lib('delete', [right]);
	} else {
		match (reg->type) case :im {
			return get_fun_lib('move', [get_reg_ref(ref state, reg), right]);
		} case :int {
			return get_reg(ref state, reg) . ' = ' . right;
		} case :string {
			#TODO string
			return get_fun_lib('move', [get_reg_ref(ref state, reg), right]);
		} case :bool {
			return get_reg(ref state, reg) . ' = ' . right;
		}
	}
}

def generate_call(ref state : @generator_c::state_t, call : @nlasm::call_t) : ptd::void() {
	var ret = get_fun_name(call->mod, call->fun_name, state->mod_name) . '(';
	rep var i (array::len(call->args)) {
		ret .= ', ' unless 0 == i;
		match (call->args[i]) case :val(var val) {
			ret .= get_reg(ref state, val);
		} case :ref(var ref_val) {
			ret .= get_reg_ref(ref state, ref_val);
		}
	}
	ret .= ')';
	if (nlasm::is_empty(call->dest)) {
		print(ref state, ret);
	} else {
		print(ref state, get_assign(ref state, call->dest, ret));
	}
}

def create_sim(obj : ptd::sim()) : ptd::sim() {
	if (string_utils::is_integer(obj)) {
		return get_lib_fun('int_new') . '(' . obj . ')';
	} elsif (string_utils::is_float(obj)) {
		return get_lib_fun('float_new') . '(' . obj . ')';
	} else {
		var str = obj . '';
		str = string::replace(str, '\', '\\');
		str = string::replace(str, string::lf(), '\n');
		str = string::replace(str, string::r(), '\r');
		str = string::replace(str, string::tab(), '\t');
		str = string::replace(str, '"', '\"');
		str = string::replace(str, '''', '\''');
		return get_lib_fun('string_new') . '("' . str . '")';
	}
}

def create_sim_to_memory(obj : ptd::sim(), memory : ptd::sim()) : ptd::sim() {
	if (string_utils::is_integer(obj)) {
		return get_lib_fun('int_new_to_memory') . '(' . obj . ',' . memory . ')';
	} elsif (string_utils::is_float(obj)) {
		return get_lib_fun('float_new_to_memory') . '(' . obj . ',' . memory . ')';
	} else {
		var str = obj . '';
		str = string::replace(str, '\', '\\');
		str = string::replace(str, string::lf(), '\n');
		str = string::replace(str, string::r(), '\r');
		str = string::replace(str, string::tab(), '\t');
		str = string::replace(str, '"', '\"');
		str = string::replace(str, '''', '\''');
		str = string::replace(str, string::chr(0), '\0');
		return get_lib_fun('string_new_to_memory') . '("' . str . '",' . memory . ')';
	}
}

def get_type_to_c(type : @tct::meta_type, name : ptd::sim()) : ptd::sim() {
	match (type) case :tct_im {
		return im_t();
	} case :tct_arr(var arr_type) {
		return im_t();
	} case :tct_own_arr(var arr_type) {
		return get_type_to_c(arr_type, '') . '* ';
	} case :tct_hash(var hash_type) {
		return im_t();
	} case :tct_own_hash(var hash_type) {
		return im_t();
	} case :tct_rec(var records) {
		return im_t();
	} case :tct_own_rec(var records) {
		var ret = 'struct ' . name . ' {' . string::lf();
		forh var r_name, var r_type (records) {
			ret .= get_type_to_c(r_type, '') . ' ' . r_name . '0field' . ';' .  string::lf();
		}
		ret .= '} ';
		return ret;
	} case :tct_ref(var ref_name) {
		return func_ref_to_struct_name(ref_name);
	} case :tct_void {
		return 'void ';
	} case :tct_sim {
		return im_t();
	} case :tct_int {
		return int_t();
	} case :tct_string {
		return im_t();
	} case :tct_bool {
		return bool_t();
	} case :tct_var(var vars) {
		return im_t();
	} case :tct_own_var(var vars) {
		return im_t();
	} case :tct_empty {
		return im_t();
	}
}

def get_type_name(type : @tct::meta_type) {
	return get_type_to_c(type, '');
}

def func_ref_to_struct_name(f : ptd::sim()) : ptd::sim() {
	if(f eq 'boolean_t::type') { #TODO drop when all code is rewritten to support ptd::bool()
		return bool_t();
	}
	return im_t(); #return string::replace(f, '::', '0') . '0struct '; #TODO: return correct name also for ptd types
}

#def get_func_type_struct_decl(func : @nlasm::function_t, mod_name : ptd::sim()) : ptd::sim() {
#	var type = func->defines_type as :yes;
#	var c_name = get_function_name(func, mod_name) . '0struct';
#	if (generator_c_struct_dependence_sort::is_divisible(type)) {
#		return 'typedef struct ' . c_name . ' ' . c_name . ';';
#	}
#	var c_def = get_type_to_c(type, '');
#	return 'typedef ' . c_def . ' ' . c_name . ';';
#}

def get_func_type_struct_def(func : @nlasm::function_t, mod_name : ptd::sim()) : ptd::sim() {
	var type = func->defines_type as :yes;
	if (!generator_c_struct_dependence_sort::is_divisible(type)) {
		return '';
	}
	var c_name = get_function_name(func, mod_name) . '0struct';
	var c_def = get_type_to_c(type, c_name);
	return c_def . ';';
}

def get_inline_bin_op(ref state : @generator_c::state_t, left : @nlasm::reg_t, right : @nlasm::reg_t, op : ptd::sim()) : ptd::sim(){
	return get_reg(ref state, left) . ' ' . op . ' ' . get_reg(ref state, right);
}

def reg_suffix(reg : @nlasm::reg_t) : ptd::sim() {
	match (reg->type) case :im {
		return 'im__' . reg->reg_no;
	} case :int {
		return 'int__' . reg->reg_no;
	} case :bool {
		return 'bool__' . reg->reg_no;
	} case :string {
		return 'string__' . reg->reg_no;
	}
}

def get_empty_value(type : @tct::meta_type) : ptd::sim() {
	match (type) case :tct_im {
		return 'NULL';
	} case :tct_arr(var arr_type) {
		return 'NULL';
	} case :tct_own_arr(var arr_type) {
		return 'NULL';
	} case :tct_hash(var hash_type) {
		return 'NULL';
	} case :tct_own_hash(var hash_type) {
		return 'NULL';
	} case :tct_rec(var records) {
		return 'NULL';
	} case :tct_own_rec(var records) {
		return 'NULL';
	} case :tct_ref(var ref_name) {
		return 'NULL';
	} case :tct_void {
		return '';
	} case :tct_sim {
		return 'NULL';
	} case :tct_int {
		return 0;
	} case :tct_string {
		return 'NULL';
	} case :tct_bool {
		return 'false';
	} case :tct_var(var vars) {
		return 'NULL';
	} case :tct_own_var(var vars) {
		return 'NULL';
	} case :tct_empty {
		return 'NULL';
	}
}
