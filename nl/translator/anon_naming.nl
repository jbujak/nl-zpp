###
# (c) Atinea Sp. z o.o.
###

use ptd;
use tct;
use string;

def get_anon_name_loop(type : @tct::meta_type) : ptd::sim() {
	match (type) case :tct_im {
		return '0im';
	} case :tct_arr(var arr_type) {
		return '0im';
	} case :tct_own_arr(var arr_type) {
		return '00ownarr' . anon_naming::get_anon_name(arr_type);
	} case :tct_hash(var hash_type) {
		return '0im';
	} case :tct_own_hash(var hash_type) {
		return '0im';
	} case :tct_rec(var records) {
		return '0im';
	} case :tct_own_rec(var records) {
		var ret = '0RB';
		forh var r_name, var r_type (records) {
			ret .= anon_naming::get_anon_name(r_type) . '0' . r_name . '0';
		}
		ret .= '0RE';
		return ret;
	} case :tct_ref(var ref_name) {
		return '00ref' . anon_naming::func_ref_to_struct_name(ref_name);
	} case :tct_void {
		return '0void';
	} case :tct_sim {
		return '0im';
	} case :tct_int {
		return '0int';
	} case :tct_string {
		return '0im';
	} case :tct_bool {
		return '0bool';
	} case :tct_var(var vars) {
		return '0im';
	} case :tct_own_var(var vars) {
		return '0im';
	} case :tct_empty {
		return '0im';
	}
}

def anon_naming::get_anon_name(type : @tct::meta_type) : ptd::sim() {
	return 'anon_type0' . get_anon_name_loop(type);
}

def anon_naming::func_ref_to_struct_name(f : ptd::sim()) : ptd::sim() {
	if(f eq 'boolean_t::type') { #TODO drop when all code is rewritten to support ptd::bool()
		return 'bool';
	}
	return string::replace(f, '::', '0') . '00type';
}