use ptd;
use own;
use nl;
use string;

def main::type() {
	return own::arr(own::rec({
			b => ptd::int(),
	}));
}

def main::main() {
	var a : @main::type = [];
	rep var i (10000000) {
		a []= { b => i};
		if (a[i]->b % 100000 == 0) {
			nl::print('=');
		}
	}
	nl::print(string::lf());
}
