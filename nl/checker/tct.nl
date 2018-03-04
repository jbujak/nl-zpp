###
# (c) Atinea Sp. z o.o.
###


use hash;
use ptd;
use boolean_t;

def tct::arr(arr_type : @tct::meta_type) : @tct::meta_type {
	return :tct_arr(arr_type);
}

def tct::own_arr(arr_type : @tct::meta_type) : @tct::meta_type {
	return :tct_own_arr(arr_type);
}

def tct::rec(h : ptd::hash(@tct::meta_type)) : @tct::meta_type {
	return :tct_rec(h);
}

def tct::own_rec(h : ptd::hash(@tct::meta_type)) : @tct::meta_type {
	return :tct_own_rec(h);
}

def tct::ref(name : ptd::sim()) : @tct::meta_type {
	return :tct_ref(name);
}

def tct::sim() : @tct::meta_type {
	return :tct_sim;
}

def tct::int() : @tct::meta_type {
	return :tct_int;
}

def tct::string() : @tct::meta_type {
	return :tct_string;
}

def tct::none() {
	return :tct_var_none;
}

def tct::void() : @tct::meta_type {
	return :tct_void;
}

def tct::empty() : @tct::meta_type {
	return :tct_empty;
}

def tct::hash(h : @tct::meta_type) : @tct::meta_type {
	return :tct_hash(h);
}

def tct::own_hash(h : @tct::meta_type) : @tct::meta_type {
	return :tct_own_hash(h);
}

def tct::tct_im() : @tct::meta_type {
	return :tct_im;
}

def tct::bool() : @tct::meta_type {
	return :tct_bool;
}

def tct::func() : @tct::meta_type {
	return tct::rec({module => tct::sim(), name => tct::sim()});
}

def tct::var(h) : @tct::meta_type {
	var types = {};
	forh var item, var value (h) {
		var et;
		if (value is :tct_var_none) {
			et = :no_param;
		} else {
			et = :with_param(ptd::ensure(@tct::meta_type, value));
		}
		hash::set_value(ref types, item, et);
	}
	return :tct_var(types);
}

def tct::own_var(h) : @tct::meta_type {
	var types = {};
	forh var item, var value (h) {
		var et;
		if (value is :tct_var_none) {
			et = :no_param;
		} else {
			et = :with_param(ptd::ensure(@tct::meta_type, value));
		}
		hash::set_value(ref types, item, et);
	}
	return :tct_own_var(types);
}

def tct::try_var_as_case(variant : @tct::meta_type, str_case : ptd::sim()) : ptd::var({ok=>@tct::meta_type, err => ptd::sim()}) {
	return :err('') unless variant is :tct_var;
	return :err('') unless hash::has_key(variant as :tct_var, str_case);
	var sub = hash::get_value(variant as :tct_var, str_case);
	return :err('') unless sub is :with_param;
	return :ok(sub as :with_param);
}

def tct::meta_type() {
	return ptd::var({
			tct_rec => ptd::hash(@tct::meta_type),
			tct_own_rec => ptd::hash(@tct::meta_type),
			tct_hash => @tct::meta_type,
			tct_own_hash => @tct::meta_type,
			tct_arr => @tct::meta_type,
			tct_own_arr => @tct::meta_type,
			tct_var => ptd::hash(ptd::var({with_param => @tct::meta_type, no_param => ptd::none()})),
			tct_own_var => ptd::hash(ptd::var({with_param => @tct::meta_type, no_param => ptd::none()})),
			tct_ref => ptd::sim(),
			tct_sim => ptd::none(),
			tct_int => ptd::none(),
			tct_string => ptd::none(),
			tct_bool => ptd::none(),
			tct_empty => ptd::none(),
			tct_void => ptd::none(),
			tct_im => ptd::none()
		});
}

def tct::is_own_type(type : @tct::meta_type, defined_types : ptd::hash(@tct::meta_type)) : @boolean_t::type {
	match (type) case :tct_rec (var p) {
		return false;
	} case :tct_own_rec (var p) {
		return true;
	} case :tct_hash (var p) {
		return false;
	} case :tct_own_hash (var p) {
		return true;
	} case :tct_arr (var p) {
		return false;
	} case :tct_own_arr (var p) {
		return true;
	} case :tct_var (var p) {
		return false;
	} case :tct_own_var (var p) {
		return true;
	} case :tct_ref (var p) {
		return false unless hash::has_key(defined_types, p); #assume somebody else handles the problem
		return tct::is_own_type(defined_types{p}, defined_types);
	} case :tct_sim {
		return false;
	} case :tct_int {
		return false;
	} case :tct_string {
		return false;
	} case :tct_bool {
		return false;
	} case :tct_empty {
		return false;
	} case :tct_void {
		return false;
	} case :tct_im {
		return false;
	}
}
