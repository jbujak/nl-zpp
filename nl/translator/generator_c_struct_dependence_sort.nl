use hash;
use tct;
use array;
use string;
use boolean_t;
use ptd;
use nlasm;

def generator_c_struct_dependence_sort::result_t(){
	return ptd::var({
			result => ptd::arr(@generator_c_struct_dependence_sort::sorted_element),
			cycle => ptd::none()
		});
}

def generator_c_struct_dependence_sort::graph_node(){
	return ptd::rec({
			pointer => ptd::arr(ptd::sim()),
			struct => ptd::arr(ptd::sim()),
			is_divisible => @boolean_t::type,
		});
}

def generator_c_struct_dependence_sort::graph(){
	return ptd::hash(@generator_c_struct_dependence_sort::graph_node);
}

def generator_c_struct_dependence_sort::sorted_element(){
	return ptd::var({
			definition => ptd::sim(),
			declaration => ptd::sim(),
			both => ptd::sim()
		});
}

def get_module_name(fun : ptd::sim()) : ptd::sim() {
	return (string::split('::', fun))[0];
}

def get_fun_name(fun : ptd::sim()) : ptd::sim() {
	return (string::split('::', fun))[1];
}

def get_required_types_list(type : @tct::meta_type, ref node : @generator_c_struct_dependence_sort::graph_node,
		module : ptd::sim(), is_struct_now : @boolean_t::type) : ptd::void() {
	match (type) case :tct_im {
	} case :tct_arr(var arr_type) {
	} case :tct_own_arr(var arr_type) {
		get_required_types_list(arr_type, ref node, module, false);
	} case :tct_hash(var hash_type) {
	} case :tct_own_hash(var hash_type) {
	} case :tct_rec(var records) {
		forh var r_name, var r_type (records) {
			get_required_types_list(r_type, ref node, module, true);
		}
	} case :tct_own_rec(var records) {
		get_required_types_list(:tct_rec(records), ref node, module, is_struct_now);
	} case :tct_ref(var ref_name) {
		if (get_module_name(ref_name) eq module) {
			if (is_struct_now) {
				array::push(ref node->struct, get_fun_name(ref_name));
			} else {
				array::push(ref node->pointer, get_fun_name(ref_name));
			}
		}
	} case :tct_void {
	} case :tct_sim {
	} case :tct_int {
	} case :tct_string {
	} case :tct_bool {
	} case :tct_var(var vars) {
	} case :tct_own_var(var vars) {
	} case :tct_empty {
	}
}

def generator_c_struct_dependence_sort::is_divisible(type : @tct::meta_type) : @boolean_t::type {
	match (type) case :tct_im {
	} case :tct_arr(var arr_type) {
	} case :tct_own_arr(var arr_type) {
	} case :tct_hash(var hash_type) {
	} case :tct_own_hash(var hash_type) {
	} case :tct_rec(var records) {
		return true;
	} case :tct_own_rec(var records) {
		return true;
	} case :tct_ref(var ref_name) {
	} case :tct_void {
	} case :tct_sim {
	} case :tct_int {
	} case :tct_string {
	} case :tct_bool {
	} case :tct_var(var vars) {
	} case :tct_own_var(var vars) {
	} case :tct_empty {
	}
	return false;
}

def nlasm_to_graph(funs : ptd::arr(@nlasm::function_t), module : ptd::sim()) : @generator_c_struct_dependence_sort::graph {
	var graph : @generator_c_struct_dependence_sort::graph = {};
	fora var func (funs) {
		match (func->access) case :pub {
			match (func->defines_type) case :yes(var type) {
				var node = {pointer => [], struct => [], is_divisible =>
					generator_c_struct_dependence_sort::is_divisible(type)};
				get_required_types_list(type, ref node, module, false);
				hash::set_value(ref graph, func->name, node);
			} case :no {
			}
		} case :priv {
		}
	}
	var graph2 = graph;
	forh var func, var rec (graph2) {
		var a : @generator_c_struct_dependence_sort::graph_node = rec;
		remove_dups(ref a->pointer);
		remove_dups(ref a->struct);
		hash::set_value(ref graph, func, a);
	}
	return graph;
}

def remove_dups(ref a : ptd::arr(ptd::sim())) {
	array::sort(ref a);
	var i = 0;
	loop {
		if (i >= (array::len(a) - 1)) {
			break;
		}
		if (a[i] eq a[i + 1]) {
			array::remove(ref a, i + 1);
		} else {
			i += 1;
		}
	}
}

def t_both() : ptd::sim() {
	return 'both';
}

def t_none() : ptd::sim() {
	return 'none';
}

def t_decl() : ptd::sim() {
	return 'decl';
}

def t_def() : ptd::sim() {
	return 'def';
}

def join_type(a : ptd::sim(), b : ptd::sim()) : ptd::sim() {
	if (a eq t_both() || b eq t_both()) {
		return t_both();
	}
	if (a eq t_none()) {
		return b;
	}
	if (b eq t_none()) {
		return a;
	}
	if (a eq b) {
		return a;
	}
	return t_both();
}

def common_type(a : ptd::sim(), b : ptd::sim()) : ptd::sim() {
	if (a eq t_none() || b eq t_none()) {
		return t_none();
	}
	if (a eq t_both()) {
		return b;
	}
	if (b eq t_both()) {
		return a;
	}
	if (a eq b) {
		return a;
	}
	return t_none();
}

def split_type(a : ptd::sim(), b : ptd::sim()) : ptd::sim() {
	if (a eq b) {
		return t_none();
	}
	if (a eq t_none()) {
		return t_none();
	}
	if (b eq t_none()) {
		return a;
	}
	if (b eq t_both()) {
		return t_none();
	}
	if (a eq t_both()) {
		if (b eq t_decl()) {
			return t_def();
		}
		return t_decl();
	}
	return a;
}

def type_to_var(name : ptd::sim(), type : ptd::sim()) : @generator_c_struct_dependence_sort::sorted_element {
	if (type eq t_both()) {
		return :both(name);
	}
	if (type eq t_decl()) {
		return :declaration(name);
	}
	if (type eq t_def()) {
		return :definition(name);
	}
	die;
}

def sort_graph_help(graph : @generator_c_struct_dependence_sort::graph,
		ref output : ptd::arr(@generator_c_struct_dependence_sort::sorted_element),
		ref path : ptd::hash(ptd::sim()), ref processed : ptd::hash(ptd::sim()),
		current : @generator_c_struct_dependence_sort::sorted_element, ref cycle : @boolean_t::type) : ptd::void() {
	var name;
	var type;
	match (current) case :definition(var n) {
		name = n;
		type = t_def();
	} case :declaration(var n) {
		name = n;
		type = t_decl();
	} case :both(var n) {
		name = n;
		type = t_both();
	}

	var current_type = t_none();
	if (hash::has_key(processed, name)) {
		current_type = hash::get_value(processed, name);
		if (current_type eq t_both() || current_type eq type) {
			return;
		}
	}
	var path_type = t_none();
	if (hash::has_key(path, name)) {
		path_type = hash::get_value(path, name);
		if (common_type(type, path_type) ne t_none()){
			cycle = true;
			return;
		}
	}
	if (hash::get_value(graph, name)->is_divisible && type eq t_decl()) {
		hash::set_value(ref processed, name, join_type(type, current_type));
		array::push(ref output, current);
		return;
	}
	if (!hash::get_value(graph, name)->is_divisible) {
		type = t_both();
		current = :both(name);
	}
	hash::set_value(ref path, name, join_type(type, path_type));
	
	fora var dep (hash::get_value(graph, name)->pointer) {
		sort_graph_help(graph, ref output, ref path, ref processed, :declaration(dep), ref cycle);
	}

	fora var dep (hash::get_value(graph, name)->struct) {
		sort_graph_help(graph, ref output, ref path, ref processed, :both(dep), ref cycle);
	}
	
	hash::set_value(ref processed, name, join_type(type, current_type));
	array::push(ref output, type_to_var(name, split_type(type, current_type)));
	hash::delete(ref path, name);
}

def sort_graph(graph : @generator_c_struct_dependence_sort::graph)
		: @generator_c_struct_dependence_sort::result_t {
	var output = [];
	var path = {};
	var processed = {};
	var cycle = false;
	forh var func, var node (graph) {
		sort_graph_help(graph, ref output, ref path, ref processed, :declaration(func), ref cycle);
	}
	forh var func, var node (graph) {
		sort_graph_help(graph, ref output, ref path, ref processed, :definition(func), ref cycle);
	}
	if (cycle) {
		return :cycle;
	}
	return :result(output);
}

def generator_c_struct_dependence_sort::sort(funs : ptd::arr(@nlasm::function_t), module : ptd::sim())
		: @generator_c_struct_dependence_sort::result_t {
	var graph = nlasm_to_graph(funs, module);
	return sort_graph(graph);
}