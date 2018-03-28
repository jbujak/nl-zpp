use ptd;
use own;
use array;
use hash;
###
# (c) Atinea Sp. z o.o.
###
 
def test_own_to_im::variant() {
    return ptd::var({n => ptd::none(), p => ptd::sim()});
}
 
def test_own_to_im::defi() {
    return own::rec({int => ptd::int(), sim => ptd::sim(), arr => own::arr(ptd::int()), variant => @test_own_to_im::variant, hash => ptd::hash(ptd::sim())});
}
 
def test_own_to_im::defi_defi() {
    return own::rec({d => @test_own_to_im::defi});
}
 
def test_own_to_im::defi_anon() {
    return own::rec({d => own::rec({int => ptd::int(), sim => ptd::sim(), arr => own::arr(ptd::int()), variant => @test_own_to_im::variant, hash => ptd::hash(ptd::sim())})});
}

def check_inner(i) {
	die unless i->int == 1;
	die unless i->sim eq 'STR';
	die unless array::len(i->arr) == 2;
	rep var j (array::len(i->arr)) {
		die unless j == i->arr[j];
	}
	die unless (i->variant as :p) eq 'H';
	die unless hash::size(i->hash) == 1;
	die unless hash::get_value(i->hash, 'kupd') eq 'D';
}

def check_outer(i) {
	check_inner(i->d);
}

def test_own_to_im::test() {
    var anon : own::rec({int => ptd::int(), sim => ptd::sim(), arr => own::arr(ptd::int()), variant => @test_own_to_im::variant, hash => ptd::hash(ptd::sim())}) = {int => 1, sim => 'STR', arr => [0, 1], variant => :p('H'), hash => {kupd => 'D'}};
    var anon_anon : own::rec({d => own::rec({int => ptd::int(), sim => ptd::sim(), arr => own::arr(ptd::int()), variant => @test_own_to_im::variant, hash => ptd::hash(ptd::sim())})}) = {d => {int => 1, sim => 'STR', arr => [0, 1], variant => :p('H'), hash => {kupd => 'D'}}};
    var anon_defi : own::rec({d => @test_own_to_im::defi}) = {d => {int => 1, sim => 'STR', arr => [0, 1], variant => :p('H'), hash => {kupd => 'D'}}};
    var defi : @test_own_to_im::defi = {int => 1, sim => 'STR', arr => [0, 1], variant => :p('H'), hash => {kupd => 'D'}};
    var defi_anon : @test_own_to_im::defi_anon = {d => {int => 1, sim => 'STR', arr => [0, 1], variant => :p('H'), hash => {kupd => 'D'}}};
    var defi_defi : @test_own_to_im::defi_defi = {d => {int => 1, sim => 'STR', arr => [0, 1], variant => :p('H'), hash => {kupd => 'D'}}};
   
	var i = own::to_im(anon);
	check_inner(i);
	i = own::to_im(anon_anon);
	check_outer(i);
	i = own::to_im(anon_defi);
	check_outer(i);
	i = own::to_im(defi);
	check_inner(i);
	i = own::to_im(defi_anon);
	check_outer(i);
	i = own::to_im(defi_defi);
	check_outer(i);
}
