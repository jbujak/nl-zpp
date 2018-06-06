###
# (c) Atinea Sp. z o.o.
###


use c_std_lib;

def ptd::var(h) {
	forh var item, var value (h) {
	}
	ptd::ensure_only_static_do_not_touch_without_permission(@ptd::meta_type, :ptd_var({}));
}

def ptd::meta_type() {
	return ptd::var({
		});
}
