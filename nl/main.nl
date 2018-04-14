###
# (c) Atinea Sp. z o.o.
###

use ptd;
use own;

def main::main() {
}

def main::typ_wewnetrzny() {
	return ptd::int();
}
def main::tablica() {
	return own::arr(@main::typ_wewnetrzny);
}

def main::a() {
	return own::rec({a => @main::typ_wewnetrzny});
}
