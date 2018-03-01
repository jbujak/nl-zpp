use ptd;
use hash;
use own;
use boolean_t;
use nl;
###
# (c) Atinea Sp. z o.o.
###

def main::own_rec() {
	return own::rec({
		ttt => ptd::int()
	});
}

def test_ref(ref im : ptd::ptd_im()) {
	im++;	
}

def test_ref_rec(ref r : @main::own_rec) {
	r->ttt = 42;
}

def main::main() {
	var cos : @main::own_rec = ({
		ttt => 22
	});

	var im = 1;
	test_ref(ref im);
	test_ref_rec(ref cos);

	var ii : ptd::int() = cos->ttt;
	nl::print(ii);
}
