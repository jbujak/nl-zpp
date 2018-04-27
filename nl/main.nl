use ptd;
use hash;
use own;
use boolean_t;
use nl;
###
# (c) Atinea Sp. z o.o.
###

def main::main() {
	var h : own::hash(ptd::int()) = {};
	var s = 'a';
	rep var i (1000) {
		h{s} = i;
		s .= 'a';
	}
}
