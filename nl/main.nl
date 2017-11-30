use ptd;

def main::main() {
	var s : ptd::sim();
	s = 'asdf';
	var i : ptd::int();
	i = 44;
	var j : ptd::int() = 99;

	var a = [1,2,3];
	i = i + a[1];

	i = i + i;
	j = j * i;
}
