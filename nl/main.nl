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
	var rec : @main::type;
	rec = {
		arr => [{field => 1}, {field => 2}],
	};

	var i : ptd::int();
	i = 4;
	i = i + i;
	var j : ptd::int();
	j = 9;
	j = j * i;

	rec->arr[1]->field = 3;
	nl::print(rec->arr[1]->field);
	nl::print(j);
}
