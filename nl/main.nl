use ptd;
use hash;
use own;

###
# (c) Atinea Sp. z o.o.
###

def main::result_t() {
	return ptd::rec({
			module_name => ptd::sim(),
			functions => own::arr(@main::function_t),
			imports => own::arr(ptd::sim())
		});
}

def main::access_t() {
	return ptd::var({pub => ptd::none(), priv => ptd::none()});
}

def main::arg_type_t() {
	return ptd::var({val => @main::reg_t, ref => @main::reg_t});
}

def main::function_t() {
	return ptd::rec({
			annotation => ptd::var({none => ptd::none(), math => ptd::none(), state => ptd::none()}),
			access => @main::access_t,
			registers => own::arr(@main::reg_t),
			args_type => @main::args_type,
			commands => @main::cmds_t,
			name => ptd::sim(),
			defines_type => ptd::var({no => ptd::none(), yes => @main::var_decl_t}),
			variables => own::arr(@main::var_decl_t),
		});
}

def main::cmds_t() {
	return own::arr(@main::cmd_t);
}

def main::args_type() {
	return own::arr(@main::arg_type_t);
}

def main::reg_t() {
	return ptd::rec({
		type => @main::reg_type,
		reg_no => ptd::sim(),
	});
}

def main::debug_t() {
	return ptd::rec({nast_debug => @main::args_type, instruction_nr => ptd::sim(), declarations => ptd::hash(@main::reg_t)});
}

def main::cmd_t() {
	return ptd::rec({
			debug => @main::debug_t,
			annotation => @main::annotation_t,
			cmd => @main::order_t,
		});
}

def main::annotation_t() {
	return ptd::var({none => ptd::none(), const => own::arr(@main::reg_t)});
}

def main::order_t() {
	return ptd::var({
			arr_decl => ptd::rec({dest => @main::reg_t, src => own::arr(@main::reg_t)}),
			hash_decl => ptd::rec({
					dest => @main::reg_t,
					src => own::arr(ptd::rec({key => ptd::sim(), val => @main::reg_t}))
				}),
			func => ptd::rec({dest => @main::reg_t, module => ptd::sim(), name => ptd::sim()}),
			call => @main::call_t,
			una_op => @main::una_op_t,
			bin_op => @main::bin_op,
			ov_is => ptd::rec({dest => @main::reg_t, src => @main::reg_t, type => ptd::sim()}),
			ov_as => ptd::rec({dest => @main::reg_t, src => @main::reg_t, type => ptd::sim()}),
			return => @main::return,
			die => @main::reg_t,
			move => ptd::rec({dest => @main::reg_t, src => @main::reg_t}),
			load_const => ptd::rec({dest => @main::reg_t, val => ptd::ptd_im()}),
			get_frm_idx => ptd::rec({dest => @main::reg_t, src => @main::reg_t, idx => @main::reg_t}),
			set_at_idx => ptd::rec({src => @main::reg_t, idx => @main::reg_t, val => @main::reg_t}),
			get_val => ptd::rec({dest => @main::reg_t, src => @main::reg_t, key => ptd::sim()}),
			set_val => ptd::rec({src => @main::reg_t, key => ptd::sim(), val => @main::reg_t}),
			ov_mk => @main::ov_mk_t,
			prt_lbl => @main::label_t,
			if_goto => ptd::rec({dest => @main::label_t, src => @main::reg_t}),
			goto => @main::label_t,
			clear => @main::reg_t,
			var_decl => @main::var_decl_t
		});
}

def main::var_decl_t() {
	return ptd::rec({
		type => @main::label_t,
		register => @main::reg_t
	});
}

def main::label_t() {
	return ptd::sim();
}

def main::una_op_t() {
	return ptd::rec({dest => @main::reg_t, src => @main::reg_t, op => ptd::sim()});
}

def main::bin_op() {
	return ptd::rec({dest => @main::reg_t, left => @main::reg_t, right => @main::reg_t, op => ptd::sim()});
}

def main::return() {
	return ptd::var({val => @main::reg_t, emp => ptd::none()});
}

def main::ov_mk_t() {
	return ptd::rec({
			dest => @main::reg_t,
			src => ptd::var({arg => @main::reg_t, emp => ptd::none()}),
			name => ptd::sim()
		});
}

def main::call_t() {
	return ptd::rec({
			dest => @main::reg_t,
			mod => ptd::sim(),
			fun_name => ptd::sim(),
			args => own::arr(ptd::var({val => @main::reg_t, ref => @main::reg_t}))
		});
}

def main::reg_type() {
	return ptd::var({
		im => ptd::none(),
		int => ptd::none(),
		string => ptd::none(),
		bool => ptd::none(),
	});
}

def main::is_empty(reg : @main::reg_t) {
	match (reg->type) case :im {
		return reg->reg_no eq '';
	} case :int {
		return reg->reg_no eq '';
	} case :bool {
		return reg->reg_no eq '';
	} case :string {
		return reg->reg_no eq '';
	}
}



def main::main() {
	var s : ptd::sim();
	s = 'asdf';
	var i : ptd::int();
	i = 44;
	var j : ptd::int() = 99;
	
	var t = false;

	i = i + i;
	j = j * i;
}
