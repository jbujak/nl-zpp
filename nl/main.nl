use ptd;
use hash;
use own;
use boolean_t;
use nl;

###
# (c) Atinea Sp. z o.o.
###

def main::main() {
	anon();
	napis();
	liczba();
	var a : own::arr(ptd::int()) = [];
	rep var i (1000) {
		a []= i;
	}
}

def anon() {
	var h : own::hash(ptd::string()) = {
		a => 'a',
		b => 'b',
	};
	var s = 'a';
	rep var i (1000) {
		h{s} = s;
		s .= 'a';
	}
}


def main::jakis_rec() {
	return ptd::rec({
		a => ptd::int(),
		b => ptd::string()
	});
}

def main::hasz_napisowy() {
	return own::hash(@main::jakis_rec);
}

def napis() {
	var h : @main::hasz_napisowy = {};
	
	var str = 'a';
	rep var i (1000) {
		var to_add : @main::jakis_rec = {
			a => i,
			b => str
		};
		h{str} = to_add;
		str .= 'a';
	}
}

def main::hasz_liczbowy() {
	return own::hash(ptd::int());
}
def liczba() {
	var h : @main::hasz_liczbowy = {
		a => 1,
		b => 2,
	};
	die if h->a != 1 || h->b != 2;
	var aa = 'a';
	var bb = 'b';
	die if h{'a'} != 1 || h{'b'} != 2;
	die if h{aa} != 1 || h{bb} != 2;
}
