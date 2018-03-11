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

def main::rec() {
	return ptd::rec({
		ttt => ptd::int()
	});
}

def main::bigger_own() {
	return own::rec({
		fst => @main::rec,
		snd => @main::rec
	});
}

def test_ref(ref im : ptd::ptd_im()) {
	im++;	
}

def test_ref_rec(ref r : @main::own_rec) {
	r->ttt = 42;
}

def test_own_double_pass(ref fst : @main::rec, ref snd : @main::own_rec) {
	var tmp = fst->ttt;
	fst->ttt = snd->ttt;
	snd->ttt = tmp;
}


def foobar(i : ptd::int()) : ptd::int() {
	return i*i;
}



def main::main() {
	var cos : @main::own_rec = ({
		ttt => 22
	});

	var im = 1;
	test_ref(ref im);
	test_ref_rec(ref cos);

	var iii;

	#iii = cos->ttt;

	var not_inittted : ptd::int();
	for (;not_inittted < 42; not_inittted++) {
		foobar(not_inittted);
	}

	iii = cos->ttt;


	var fst : @main::rec = {
		ttt => 1
	};
	var snd : @main::rec = {
		ttt => 2
	};

	var bigger : @main::bigger_own = {
		fst => fst,
		snd => snd
	};

	test_own_double_pass(ref bigger->fst, ref bigger->snd);
	#nl::print(ii);
}
