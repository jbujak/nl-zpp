###
# (c) Atinea Sp. z o.o.
###

use ptd;
use own;

def test_own_rec::typ_zewnetrzny() {
	return own::rec({
		rekord_wewnetrzny => @test_own_rec::typ_wewnetrzny,
	});
}

def test_own_rec::typ_wewnetrzny() {
	return own::rec({
		liczba => ptd::int(),
	});
}

def test_own_rec::test() {
	var rekord : @test_own_rec::typ_zewnetrzny = {
		rekord_wewnetrzny => {
			liczba => 1,
		}
	};
	var i = 1;
	for (; rekord->rekord_wewnetrzny->liczba < 100; rekord->rekord_wewnetrzny->liczba++) {
		die if rekord->rekord_wewnetrzny->liczba != i;
		i++;
	}
}
