###
# (c) Atinea Sp. z o.o.
###


use nassert;

def test_num::test() {
	var a = 0x00;
	nassert::a(a, 0);
	var b = 0xffff;
	nassert::a(65535, b);
	var c = 0xFFFaF2;
	nassert::a(c, 16775922);
	var d = 2633;
}

