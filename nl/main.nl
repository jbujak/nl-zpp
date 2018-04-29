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

def main::hasz_napisowy() {
	return own::hash(ptd::string());
}
def napis() {
	var h : @main::hasz_napisowy = {
		a => 'a',
		b => 'b',
	};
	
	var str = 'a';
	rep var i (1000) {
		h{str} = str;
		str .= 'a';
	}
}
