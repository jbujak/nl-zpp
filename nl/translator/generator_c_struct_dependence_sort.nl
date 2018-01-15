use hash;
use tct;
use array;
use string;
use boolean_t;
use ptd;
use nlasm;
use ov;

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

def generator_c_struct_dependence_sort::decl_def_type() {
	return ptd::var({
		decl => ptd::none(),
		def => ptd::none(),
		both => ptd::none(),
		none => ptd::none()
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

def join_type(a : @generator_c_struct_dependence_sort::decl_def_type , b : @generator_c_struct_dependence_sort::decl_def_type)
		: @generator_c_struct_dependence_sort::decl_def_type {
	if (a is :both || b is :both) {
		return :both;
	}
	if (a is :none) {
		return b;
	}
	if (b is :none) {
		return a;
	}
	if (ov::get_element(a) eq ov::get_element(b)) {
		return a;
	}
	return :both;
}

def common_type(a : @generator_c_struct_dependence_sort::decl_def_type , b : @generator_c_struct_dependence_sort::decl_def_type)
		: @generator_c_struct_dependence_sort::decl_def_type {
	if (a is :none || b is :none) {
		return :none;
	}
	if (a is :both) {
		return b;
	}
	if (b is :both) {
		return a;
	}
	if (ov::get_element(a) eq ov::get_element(b)) {
		return a;
	}
	return :none;
}

def split_type(a : @generator_c_struct_dependence_sort::decl_def_type , b : @generator_c_struct_dependence_sort::decl_def_type)
		: @generator_c_struct_dependence_sort::decl_def_type {
	if (ov::get_element(a) eq ov::get_element(b)) {
		return :none;
	}
	if (a is :none) {
		return :none;
	}
	if (b is :none) {
		return a;
	}
	if (b is :both) {
		return :none;
	}
	if (a is :both) {
		if (b is :decl) {
			return :def;
		}
		return :decl;
	}
	return a;
}

def type_to_var(name : ptd::sim(), type : @generator_c_struct_dependence_sort::decl_def_type)
		: @generator_c_struct_dependence_sort::sorted_element {
	if (type is :both) {
		return :both(name);
	}
	if (type is :decl) {
		return :declaration(name);
	}
	if (type is :def) {
		return :definition(name);
	}
	die;
}

def sort_graph_help(graph : @generator_c_struct_dependence_sort::graph,
		ref output : ptd::arr(@generator_c_struct_dependence_sort::sorted_element),
		ref path : ptd::hash(@generator_c_struct_dependence_sort::decl_def_type),
		ref processed : ptd::hash(@generator_c_struct_dependence_sort::decl_def_type),
		current : @generator_c_struct_dependence_sort::sorted_element, ref cycle : @boolean_t::type) : ptd::void() {
	var name;
	var type;
	match (current) case :definition(var n) {
		name = n;
		type = :def;
	} case :declaration(var n) {
		name = n;
		type = :decl;
	} case :both(var n) {
		name = n;
		type = :both;
	}

	var current_type = :none;
	if (hash::has_key(processed, name)) {
		current_type = hash::get_value(processed, name);
		if (current_type is :both || ov::get_element(current_type) eq ov::get_element(type)) {
			return;
		}
	}
	var path_type = :none;
	if (hash::has_key(path, name)) {
		path_type = hash::get_value(path, name);
		if (!common_type(type, path_type) is :none){
			cycle = true;
			return;
		}
	}
	if (hash::get_value(graph, name)->is_divisible && type is :decl) {
		hash::set_value(ref processed, name, join_type(type, current_type));
		array::push(ref output, current);
		return;
	}
	if (!hash::get_value(graph, name)->is_divisible) {
		type = :both;
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