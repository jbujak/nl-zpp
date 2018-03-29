###
# (c) Atinea Sp. z o.o.
###

use ptd;
use own;

def test_own_var::test() {
	prosty_test();
	zlozony_test();
}

def test_own_var::prosty_wariant() {
	return own::var({
		pusty => ptd::none(),
		liczba => ptd::int(),
		wyrazenie_logiczne => ptd::bool(),
		napis => ptd::string(),
		wartosc_imowa => ptd::ptd_im(),
	});
}

def prosty_test() {
	var wariant1 : @test_own_var::prosty_wariant = :pusty;
	die if !wariant1 is :pusty;
	die if wariant1 is :liczba;

	var wariant2 : @test_own_var::prosty_wariant = :liczba(42);
	die if !wariant2 is :liczba;
	die if wariant2 is :wyrazenie_logiczne;
	die if wariant2 as :liczba != 42;

	var wariant3 : @test_own_var::prosty_wariant = :wyrazenie_logiczne(false);
	die if !wariant3 is :wyrazenie_logiczne;
	die if wariant3 is :napis;
	die if wariant3 as :wyrazenie_logiczne;

	var wariant4 : @test_own_var::prosty_wariant = :napis('costam');
	die if !wariant4 is :napis;
	die if wariant4 is :wartosc_imowa;
	die if wariant4 as :napis ne 'costam';

	var wariant5 : @test_own_var::prosty_wariant = :wartosc_imowa(1234);
	die if !wariant5 is :wartosc_imowa;
	die if wariant5 is :pusty;
	die if wariant5 as :wartosc_imowa != 1234;
}

def test_own_var::zlozony_wariant() {
	return own::var({
		tablica_imowa => ptd::arr(ptd::int()),
		tablica_ownowa => own::arr(ptd::int()),
		rekord_imowy => ptd::rec({pole_imowe => ptd::int()}),
		rekord_ownowy => own::rec({pole_ownowe => ptd::int()}),
		wariant_imowy => ptd::var({wariant_imowy_wewnetrzny => ptd::int()}),
		wariant_ownowy => own::var({wariant_ownowy_wewnetrzny => ptd::int()}),
	});
}

def zlozony_test() {
	var wariant1 : @test_own_var::zlozony_wariant = :tablica_imowa([0]);
	(wariant1 as :tablica_imowa) []= 1;
	die if (wariant1 as :tablica_imowa)[1] != 1;

	var wariant2 : @test_own_var::zlozony_wariant = :tablica_ownowa([2]);
	wariant2 as :tablica_ownowa []= 3;
	die if (wariant2 as :tablica_ownowa)[1] != 3;

	var wariant3 : @test_own_var::zlozony_wariant = :rekord_imowy({pole_imowe => 4});
	(wariant3 as :rekord_imowy)->pole_imowe++;
	die if (wariant3 as :rekord_imowy)->pole_imowe != 5;

	var wariant4 : @test_own_var::zlozony_wariant = :rekord_ownowy({pole_ownowe => 6});
	(wariant4 as :rekord_ownowy)->pole_ownowe++;
	die if (wariant4 as :rekord_ownowy)->pole_ownowe != 7;

	var wariant5 : @test_own_var::zlozony_wariant = :wariant_imowy(:wariant_imowy_wewnetrzny(8));
	((wariant5 as :wariant_imowy) as :wariant_imowy_wewnetrzny)++;
	die if (wariant5 as :wariant_imowy) as :wariant_imowy_wewnetrzny != 9;

	var wariant6 : @test_own_var::zlozony_wariant = :wariant_ownowy(:wariant_ownowy_wewnetrzny(10));
	((wariant6 as :wariant_ownowy) as :wariant_ownowy_wewnetrzny)++;
	die if (wariant6 as :wariant_ownowy) as :wariant_ownowy_wewnetrzny != 11;
}
