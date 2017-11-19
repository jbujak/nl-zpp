use nl;
use ptd;

def main::type() {
	return ptd::rec({
		arr => ptd::arr(ptd::rec({
			field => ptd::int(),
		})),
	});
}

def main::main() {
	var i : ptd::int();
	i = 44;
	var j : ptd::int();

	j = 99;
	i = i + i;
	j = j * i;

	nl::print(j);
}
