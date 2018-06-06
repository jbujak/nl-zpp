use own;

def main::main() {
	var a : own::rec({
		b => own::rec({
			c => ptd::int()
		})
	}) = { b => { c => 0 } };
	for (a->b->c = 0; a->b->c < 100000000; a->b->c++) {}
}
