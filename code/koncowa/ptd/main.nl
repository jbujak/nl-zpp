use ptd;
use nl;
use string;

def main::type() {
	return ptd::arr(ptd::rec({
			b => ptd::sim(),
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
