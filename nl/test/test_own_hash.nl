###
# (c) Atinea Sp. z o.o.
###

use nl;
use ptd;
use own;
use string;

def test_own_hash::test() {
	liczba();
	napis();
	rekord();
	wariant();
}


def test_own_hash::hasz_liczbowy() {
	return own::hash(ptd::int());
}
def liczba() {
	var h : @test_own_hash::hasz_liczbowy = {
		a => 1,
		b => 2,
	};
	die if h->a != 1 || h->b != 2;
	var aa = 'a';
	var bb = 'b';
	die if h{'a'} != 1 || h{'b'} != 2;
	die if h{aa} != 1 || h{bb} != 2;

	rep var i (1000) {
		var nr = i % (string::ord('z') - string::ord('A'));
		nr += string::ord('A');
		h{string::chr(nr)} = nr;
	}
	rep var i (1000) {
		var nr = i % (string::ord('z') - string::ord('A'));
		nr += string::ord('A');
		die if h{string::chr(nr)} != nr;
	}
}

def test_own_hash::hasz_napisowy() {
	return own::hash(ptd::string());
}
def napis() {
	var h : @test_own_hash::hasz_napisowy = {
		a => 'a',
		b => 'b',
	};
	die if h->a ne 'a' || h->b ne 'b';
	var aa = 'a';
	var bb = 'b';
	die if h{'a'} ne 'a' || h{'b'} ne 'b';
	die if h{aa} ne 'a' || h{bb} ne 'b';
	
	var str = 'a';
	rep var i (1000) {
		h{str} = str;
		str .= 'a';
	}
	str = 'a';
	rep var i (1000) {
		die if h{str} ne str;
		str .= 'a';
	}
}

def test_own_hash::hasz_rekordowy() {
	return own::hash(own::rec({liczba => ptd::int(), napis => ptd::string()}));
}
def rekord() {
	var h : @test_own_hash::hasz_rekordowy = {
		a => {
			liczba => 1,
			napis => 'a',
		}
	};
	var a = 'a';
	die if h->a->liczba != 1 || h->a->napis ne 'a';
	die if h{a}->liczba != 1 || h{a}->napis ne 'a';
	die if h{'a'}->liczba != 1 || h{'a'}->napis ne 'a';

	rep var i (1000) {
		var nr = i % (string::ord('z') - string::ord('A'));
		nr += string::ord('A');
		h{string::chr(nr)} = {
			liczba => nr,
			napis => string::chr(nr),
		};
	}
	rep var i (1000) {
		var nr = i % (string::ord('z') - string::ord('A'));
		nr += string::ord('A');
		die if h{string::chr(nr)}->liczba != nr;
		die if h{string::chr(nr)}->napis ne string::chr(nr);
	}
}

def test_own_hash::hasz_wariantowy() {
	return own::hash(ptd::var({liczba => ptd::int(), napis => ptd::string()}));
}

def wariant() {
	var h : @test_own_hash::hasz_wariantowy = {
		a => :liczba(42),
		b => :napis('abcd'),
	};
}
