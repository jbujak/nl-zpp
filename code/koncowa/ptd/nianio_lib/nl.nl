###
# (c) Atinea Sp. z o.o.
###

use c_std_lib;
use boolean_t;
use c_rt_lib;

def nl::is_array(variable) : @boolean_t::type {
	return c_std_lib::is_array(variable) ? true : false;
}

def nl::is_hash(variable) : @boolean_t::type {
	return c_std_lib::is_hash(variable) ? true : false;
}

def nl::is_sim(variable) : @boolean_t::type {
	return c_std_lib::is_sim(variable) ? true : false;
}

def nl::is_variant(variable) : @boolean_t::type {
	return c_std_lib::is_variant(variable) ? true : false;
}

def nl::print(str) {
	c_std_lib::print(str);
	c_rt_lib::flush();
}

def nl::debug_die(arg) {
	arg;
	die;
}
