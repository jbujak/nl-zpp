###
# (c) Atinea Sp. z o.o.
###

use nl;
use ptd;
use own;
use own_array;
use string;

def test_own_hash::test() {
	liczba();
	napis();
	rekord();
	wariant();
	tablica();
	slownik();
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
	return own::hash(own::var({liczba => ptd::int(), napis => ptd::string()}));
}

def wariant() {
	var h : @test_own_hash::hasz_wariantowy = {
		a => :liczba(42),
		b => :napis('abcd'),
	};
	die if !(h{'a'} is :liczba) || (h{'a'} as :liczba) != 42;
	die if !(h{'b'} is :napis) || (h{'b'} as :napis) ne 'abcd';
	rep var i (string::ord('z') - string::ord('A')) {
		var nr = i + string::ord('A');
		h{string::chr(nr)} = :liczba(i);
	}
	rep var i (string::ord('z') - string::ord('A')) {
		var nr = i + string::ord('A');
		die if !(h{string::chr(nr)} is :liczba) || (h{string::chr(nr)} as :liczba) != i;
	}
}

def test_own_hash::hash_tablicowy() {
	return own::hash(own::arr(ptd::int()));
}

def tablica() {
	var h : @test_own_hash::hash_tablicowy = {
		a => [4],
		b => [2],
	};
	die if h{'a'}[0] != 4 || h{'b'}[0] != 2;
	die if own_array::len(ref h{'a'}) != 1;
	h{'a'} []= 1;
	die if h{'a'}[1] != 1;
	h{'c'} = [11, 12];
	die if h{'c'}[1] != 12;
}

def test_own_hash::hash_slownikowy() {
	return own::hash(own::hash(ptd::int()));
}

def slownik() {
	var h : @test_own_hash::hash_slownikowy = {
		a => { x => 1 },
		b => { y => 2 },
	};
	h{'a'}{'z'} = 3;
	h{'c'}{'z'} = 4;
	die if h{'a'}{'x'} != 1;
	die if h{'b'}{'y'} != 2;
	die if h{'a'}{'z'} != 3;
	die if h{'c'}{'z'} != 4;
}
