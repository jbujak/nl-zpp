
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "type_checker.h"
#include "array.h"
#include "ptd.h"
#include "tct.h"
#include "tc_types.h"
#include "hash.h"
#include "enum.h"
#include "string.h"
#include "boolean_t.h"
#include "nast.h"
#include "ptd_parser.h"
#include "ptd_system.h"
#include "singleton.h"
#line 1 "type_checker.nl"

static ImmT *__const__f = NULL;
void type_checker_priv0__const__init();
ImmT type_checker_priv0__const__sim(int __nr);
ImmT type_checker_priv0__const__sing(int __nr);

ImmT type_checker_priv0type_to_ptd(ImmT ___nl__0,ImmT * ___ref___1);
ImmT type_checker_priv0get_fun_def_key(ImmT ___nl__0);
ImmT type_checker_priv0get_fun_key(ImmT ___nl__0,ImmT ___nl__1);
ImmT type_checker_priv0return_type_to_tct(ImmT ___nl__0,ImmT * ___ref___1);
ImmT type_checker_priv0check_types_imported(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);
ImmT type_checker_priv0prepare_def_fun(ImmT ___nl__0,ImmT * ___ref___1);
ImmT type_checker_priv0check_module(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0join_vars(ImmT * ___ref___0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0set_end_function(ImmT * ___ref___0);
ImmT type_checker_priv0check_cmd(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0break_continue_block(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_try_ensure(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_forh(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_fora(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_while(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_rep(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_match(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_val(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_fun_val(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0unary_op_dec_inc(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4);
ImmT type_checker_priv0get_special_functions();
ImmT type_checker_priv0get_special_function_def(ImmT ___nl__0,ImmT ___nl__1);
ImmT type_checker_priv0check_special_function(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT type_checker_priv0rec_get_var_from_lval(ImmT ___nl__0,ImmT * ___ref___1);
ImmT type_checker_priv0mk_new_type_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT type_checker_priv0set_type_to_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT type_checker_priv0set_type_to_lval_spec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5,ImmT * ___ref___6);
ImmT type_checker_priv0get_type_left_side_equation(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0get_type_record_key(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0get_type_from_bin_op_and_check(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0get_print_tct_type_name(ImmT ___nl__0);
ImmT type_checker_priv0get_print_tct_label(ImmT ___nl__0);
ImmT type_checker_priv0get_print_check_info(ImmT ___nl__0);
ImmT type_checker_priv0check_var_decl(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_var_decl_try(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4);
ImmT type_checker_priv0add_var_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT type_checker_priv0set_type_to_variable(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT type_checker_priv0add_var_decl_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT type_checker_priv0add_var_decl_with_type_and_check(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0is_known(ImmT ___nl__0);
ImmT type_checker_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1);
ImmT type_checker_priv0get_fun_module(ImmT ___nl__0,ImmT ___nl__1);
ImmT type_checker_priv0get_function_def(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT type_checker_priv0check_function_exists(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1);
ImmT type_checker_priv0add_warning(ImmT * ___ref___0,ImmT ___nl__1);


ImmT type_checker_priv0type_to_ptd(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 20
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(63)));
#line 20
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 27
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(41)));
#line 27
if(c_rt_lib0check_true_native(___nl__2)){ goto label_46;}
#line 27
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 27
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 27
nl_die_arg(___nl__2);
#line 20
label_7:
#line 20
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(63)));
#line 21
c_rt_lib0move(&___nl__4, ptd_parser0try_value_to_ptd(___nl__3));
#line 21
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(47)));
#line 21
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 24
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 24
if(c_rt_lib0check_true_native(___nl__5)){ goto label_31;}
#line 24
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 24
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 24
nl_die_arg(___nl__5);
#line 21
label_17:
#line 21
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(47)));
#line 22
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__6));
#line 23
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 23
c_rt_lib0clear(&___nl__0);
#line 23
c_rt_lib0clear(&___nl__2);
#line 23
c_rt_lib0clear(&___nl__3);
#line 23
c_rt_lib0clear(&___nl__4);
#line 23
c_rt_lib0clear(&___nl__5);
#line 23
c_rt_lib0clear(&___nl__6);
#line 23
return ___nl__7;
#line 23
c_rt_lib0clear(&___nl__7);
#line 23
c_rt_lib0clear(&___nl__6);
#line 24
goto label_41;
#line 24
label_31:
#line 24
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(48)));
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0clear(&___nl__4);
#line 25
c_rt_lib0clear(&___nl__5);
#line 25
return ___nl__6;
#line 25
c_rt_lib0clear(&___nl__6);
#line 26
goto label_41;
#line 26
label_41:
#line 26
c_rt_lib0clear(&___nl__4);
#line 26
c_rt_lib0clear(&___nl__5);
#line 26
c_rt_lib0clear(&___nl__3);
#line 27
goto label_53;
#line 27
label_46:
#line 28
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
return ___nl__3;
#line 28
c_rt_lib0clear(&___nl__3);
#line 29
goto label_53;
#line 29
label_53:
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
return NULL;
}

ImmT type_checker_priv0get_fun_def_key(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 33
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(182)));
#line 33
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(183)));
#line 33
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 35
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(377)));
#line 35
if(c_rt_lib0check_true_native(___nl__2)){ goto label_16;}
#line 35
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 35
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__1));
#line 35
nl_die_arg(___nl__2);
#line 33
label_8:
#line 34
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
c_rt_lib0clear(&___nl__1);
#line 34
c_rt_lib0clear(&___nl__2);
#line 34
return ___nl__3;
#line 34
c_rt_lib0clear(&___nl__3);
#line 35
goto label_27;
#line 35
label_16:
#line 36
c_rt_lib0move(&___nl__3,___get_global_const(774));
#line 36
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 36
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 36
c_rt_lib0clear(&___nl__4);
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
c_rt_lib0clear(&___nl__1);
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
return ___nl__3;
#line 36
c_rt_lib0clear(&___nl__3);
#line 37
goto label_27;
#line 37
label_27:
#line 37
c_rt_lib0clear(&___nl__1);
#line 37
c_rt_lib0clear(&___nl__2);
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
return NULL;
}

ImmT type_checker_priv0get_fun_key(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 41
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 42
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 42
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 42
c_rt_lib0move(&___nl__4,___get_global_const(774));
#line 42
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 42
c_rt_lib0clear(&___nl__4);
#line 42
goto label_9;
#line 42
label_9:
#line 42
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__0));
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
return ___nl__3;
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
return NULL;
}

ImmT type_checker_priv0return_type_to_tct(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(63)));
#line 47
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(41)));
#line 55
if(c_rt_lib0check_true_native(___nl__2)){ goto label_53;}
#line 55
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 55
nl_die_arg(___nl__2);
#line 47
label_7:
#line 47
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(63)));
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(192)));
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(810)));
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 48
if(c_rt_lib0check_true_native(___nl__4)){ goto label_43;}
#line 49
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(192)));
#line 49
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(810)));
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(132)));
#line 50
c_rt_lib0move(&___nl__8,___get_global_const(676));
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 50
c_rt_lib0clear(&___nl__8);
#line 50
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 50
if(c_rt_lib0check_true_native(___nl__7)){ goto label_25;}
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(93)));
#line 50
c_rt_lib0move(&___nl__8,___get_global_const(776));
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 50
c_rt_lib0clear(&___nl__8);
#line 50
label_25:
#line 50
c_rt_lib0clear(&___nl__7);
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 50
if(c_rt_lib0check_true_native(___nl__6)){ goto label_39;}
#line 51
c_rt_lib0move(&___nl__7, tct0void());
#line 51
c_rt_lib0clear(&___nl__0);
#line 51
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0clear(&___nl__3);
#line 51
c_rt_lib0clear(&___nl__4);
#line 51
c_rt_lib0clear(&___nl__5);
#line 51
c_rt_lib0clear(&___nl__6);
#line 51
return ___nl__7;
#line 51
c_rt_lib0clear(&___nl__7);
#line 52
goto label_39;
#line 52
label_39:
#line 52
c_rt_lib0clear(&___nl__6);
#line 52
c_rt_lib0clear(&___nl__5);
#line 53
goto label_43;
#line 53
label_43:
#line 53
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0move(&___nl__4, type_checker_priv0type_to_ptd(___nl__0, ___ref___1));
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
return ___nl__4;
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0clear(&___nl__3);
#line 55
goto label_60;
#line 55
label_53:
#line 56
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 56
c_rt_lib0clear(&___nl__0);
#line 56
c_rt_lib0clear(&___nl__2);
#line 56
return ___nl__3;
#line 56
c_rt_lib0clear(&___nl__3);
#line 57
goto label_60;
#line 57
label_60:
#line 57
c_rt_lib0clear(&___nl__2);
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
return NULL;
}

ImmT type_checker_priv0check_types_imported(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(796)));
#line 62
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 63
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(797)));
#line 63
if(c_rt_lib0check_true_native(___nl__3)){ goto label_23;}
#line 65
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(798)));
#line 65
if(c_rt_lib0check_true_native(___nl__3)){ goto label_28;}
#line 67
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(799)));
#line 67
if(c_rt_lib0check_true_native(___nl__3)){ goto label_33;}
#line 71
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(800)));
#line 71
if(c_rt_lib0check_true_native(___nl__3)){ goto label_50;}
#line 80
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 80
if(c_rt_lib0check_true_native(___nl__3)){ goto label_90;}
#line 81
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 81
if(c_rt_lib0check_true_native(___nl__3)){ goto label_92;}
#line 82
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 82
if(c_rt_lib0check_true_native(___nl__3)){ goto label_94;}
#line 89
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 89
if(c_rt_lib0check_true_native(___nl__3)){ goto label_126;}
#line 89
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 89
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 89
nl_die_arg(___nl__3);
#line 62
label_21:
#line 63
goto label_128;
#line 63
label_23:
#line 63
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(797)));
#line 64
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__4, ___ref___1, ___ref___2));
#line 64
c_rt_lib0clear(&___nl__4);
#line 65
goto label_128;
#line 65
label_28:
#line 65
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(798)));
#line 66
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__4, ___ref___1, ___ref___2));
#line 66
c_rt_lib0clear(&___nl__4);
#line 67
goto label_128;
#line 67
label_33:
#line 67
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(799)));
#line 68
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 68
label_36:
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 68
if(c_rt_lib0check_true_native(___nl__5)){ goto label_44;}
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 68
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 69
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__6, ___ref___1, ___ref___2));
#line 70
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 70
goto label_36;
#line 70
label_44:
#line 70
c_rt_lib0clear(&___nl__5);
#line 70
c_rt_lib0clear(&___nl__6);
#line 70
c_rt_lib0clear(&___nl__7);
#line 70
c_rt_lib0clear(&___nl__4);
#line 71
goto label_128;
#line 71
label_50:
#line 71
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(800)));
#line 72
c_rt_lib0move(&___nl__6,___get_global_const(185));
#line 72
c_rt_lib0move(&___nl__5, string0index2(___nl__4, ___nl__6));
#line 72
c_rt_lib0clear(&___nl__6);
#line 73
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 73
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__5, ___nl__6));
#line 73
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 73
if(c_rt_lib0check_true_native(___nl__6)){ goto label_76;}
#line 74
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 74
c_rt_lib0move(&___nl__7, string0substr(___nl__4, ___nl__8, ___nl__5));
#line 74
c_rt_lib0clear(&___nl__8);
#line 75
c_rt_lib0move(&___nl__9,___get_global_const(6));
#line 75
c_rt_lib0move(&___nl__9, c_rt_lib0add(___nl__5, ___nl__9));
#line 75
c_rt_lib0move(&___nl__10, string0length(___nl__4));
#line 75
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__5));
#line 75
c_rt_lib0move(&___nl__11,___get_global_const(6));
#line 75
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__11));
#line 75
c_rt_lib0clear(&___nl__11);
#line 75
c_rt_lib0move(&___nl__8, string0substr(___nl__4, ___nl__9, ___nl__10));
#line 75
c_rt_lib0clear(&___nl__10);
#line 75
c_rt_lib0clear(&___nl__9);
#line 76
c_rt_lib0delete(type_checker_priv0check_function_exists(___nl__7, ___nl__8, ___ref___1, ___ref___2));
#line 76
c_rt_lib0clear(&___nl__7);
#line 76
c_rt_lib0clear(&___nl__8);
#line 77
goto label_85;
#line 77
label_76:
#line 78
c_rt_lib0move(&___nl__7,___get_global_const(1164));
#line 78
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 78
c_rt_lib0move(&___nl__8,___get_global_const(806));
#line 78
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 78
c_rt_lib0clear(&___nl__8);
#line 78
c_rt_lib0delete(type_checker_priv0add_error(___ref___2, ___nl__7));
#line 78
c_rt_lib0clear(&___nl__7);
#line 79
goto label_85;
#line 79
label_85:
#line 79
c_rt_lib0clear(&___nl__6);
#line 79
c_rt_lib0clear(&___nl__5);
#line 79
c_rt_lib0clear(&___nl__4);
#line 80
goto label_128;
#line 80
label_90:
#line 81
goto label_128;
#line 81
label_92:
#line 82
goto label_128;
#line 82
label_94:
#line 82
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(803)));
#line 83
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 83
label_97:
#line 83
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 83
if(c_rt_lib0check_true_native(___nl__5)){ goto label_120;}
#line 83
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 83
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 84
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__6, ___get_global_const(807)));
#line 84
if(c_rt_lib0check_true_native(___nl__8)){ goto label_109;}
#line 85
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__6, ___get_global_const(808)));
#line 85
if(c_rt_lib0check_true_native(___nl__8)){ goto label_111;}
#line 85
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 85
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__6));
#line 85
nl_die_arg(___nl__8);
#line 84
label_109:
#line 85
goto label_116;
#line 85
label_111:
#line 85
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__6, ___get_global_const(808)));
#line 86
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__9, ___ref___1, ___ref___2));
#line 86
c_rt_lib0clear(&___nl__9);
#line 87
goto label_116;
#line 87
label_116:
#line 87
c_rt_lib0clear(&___nl__8);
#line 88
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 88
goto label_97;
#line 88
label_120:
#line 88
c_rt_lib0clear(&___nl__5);
#line 88
c_rt_lib0clear(&___nl__6);
#line 88
c_rt_lib0clear(&___nl__7);
#line 88
c_rt_lib0clear(&___nl__4);
#line 89
goto label_128;
#line 89
label_126:
#line 90
goto label_128;
#line 90
label_128:
#line 90
c_rt_lib0clear(&___nl__3);
#line 90
c_rt_lib0clear(&___nl__0);
#line 90
return NULL;
}

ImmT type_checker_priv0prepare_def_fun(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
ImmT ___nl__20 = NULL;
ImmT ___nl__21 = NULL;
ImmT ___nl__22 = NULL;
ImmT ___nl__23 = NULL;
ImmT ___nl__24 = NULL;
#line 94
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 95
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__0));
#line 95
label_2:
#line 95
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 95
if(c_rt_lib0check_true_native(___nl__3)){ goto label_97;}
#line 95
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 95
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__0, ___nl__3));
#line 96
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 96
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 96
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 96
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(784), ___nl__7);
#line 96
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0clear(&___nl__7);
#line 97
c_rt_lib0copy(&___nl__6, ___nl__3);
#line 97
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(132), ___nl__6);
#line 97
c_rt_lib0clear(&___nl__6);
#line 98
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 99
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(785)));
#line 99
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 99
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 99
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__7));
#line 99
label_21:
#line 99
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 99
if(c_rt_lib0check_true_native(___nl__12)){ goto label_86;}
#line 99
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 100
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(0));
#line 101
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(89)));
#line 101
c_rt_lib0move(&___nl__16,___get_global_const(0));
#line 101
c_rt_lib0move(&___nl__17,___get_global_const(1));
#line 101
c_rt_lib0move(&___nl__18, c_rt_lib0array_len(___nl__14));
#line 101
label_30:
#line 101
c_rt_lib0move(&___nl__19, c_rt_lib0ge(___nl__16, ___nl__18));
#line 101
if(c_rt_lib0check_true_native(___nl__19)){ goto label_47;}
#line 101
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__14, ___nl__16));
#line 103
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(93)));
#line 104
c_rt_lib0move(&___nl__22, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(222)));
#line 105
c_rt_lib0move(&___nl__24, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(63)));
#line 105
c_rt_lib0move(&___nl__23, type_checker_priv0type_to_ptd(___nl__24, ___ref___1));
#line 105
c_rt_lib0clear(&___nl__24);
#line 105
c_rt_lib0move(&___nl__20, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__21, ___get_global_const(222), ___nl__22, ___get_global_const(63), ___nl__23));
#line 105
c_rt_lib0clear(&___nl__21);
#line 105
c_rt_lib0clear(&___nl__22);
#line 105
c_rt_lib0clear(&___nl__23);
#line 105
c_rt_lib0delete(array0push(&___nl__13, ___nl__20));
#line 105
c_rt_lib0clear(&___nl__20);
#line 107
c_rt_lib0move(&___nl__16, c_rt_lib0add_mod(___nl__16, ___nl__17));
#line 107
goto label_30;
#line 107
label_47:
#line 107
c_rt_lib0clear(&___nl__14);
#line 107
c_rt_lib0clear(&___nl__15);
#line 107
c_rt_lib0clear(&___nl__16);
#line 107
c_rt_lib0clear(&___nl__17);
#line 107
c_rt_lib0clear(&___nl__18);
#line 107
c_rt_lib0clear(&___nl__19);
#line 109
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(201)));
#line 110
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 111
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 112
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(93)));
#line 114
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(182)));
#line 116
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(786)));
#line 116
c_rt_lib0move(&___nl__20, type_checker_priv0return_type_to_tct(___nl__21, ___ref___1));
#line 116
c_rt_lib0clear(&___nl__21);
#line 116
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(8, ___get_global_const(201), ___nl__15, ___get_global_const(1094), ___nl__16, ___get_global_const(1089), ___nl__17, ___get_global_const(93), ___nl__18, ___get_global_const(132), ___nl__3, ___get_global_const(182), ___nl__19, ___get_global_const(89), ___nl__13, ___get_global_const(786), ___nl__20));
#line 116
c_rt_lib0clear(&___nl__15);
#line 116
c_rt_lib0clear(&___nl__16);
#line 116
c_rt_lib0clear(&___nl__17);
#line 116
c_rt_lib0clear(&___nl__18);
#line 116
c_rt_lib0clear(&___nl__19);
#line 116
c_rt_lib0clear(&___nl__20);
#line 118
c_rt_lib0move(&___nl__15, type_checker_priv0get_fun_def_key(___nl__14));
#line 119
c_rt_lib0move(&___nl__16, hash0has_key(___nl__6, ___nl__15));
#line 119
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 119
if(c_rt_lib0check_true_native(___nl__16)){ goto label_78;}
#line 119
c_rt_lib0move(&___nl__17,___get_global_const(1165));
#line 119
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__15));
#line 119
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__17));
#line 119
c_rt_lib0clear(&___nl__17);
#line 119
goto label_78;
#line 119
label_78:
#line 119
c_rt_lib0clear(&___nl__16);
#line 120
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__15, ___nl__14));
#line 120
c_rt_lib0clear(&___nl__13);
#line 120
c_rt_lib0clear(&___nl__14);
#line 120
c_rt_lib0clear(&___nl__15);
#line 121
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 121
goto label_21;
#line 121
label_86:
#line 121
c_rt_lib0clear(&___nl__7);
#line 121
c_rt_lib0clear(&___nl__8);
#line 121
c_rt_lib0clear(&___nl__9);
#line 121
c_rt_lib0clear(&___nl__10);
#line 121
c_rt_lib0clear(&___nl__11);
#line 121
c_rt_lib0clear(&___nl__12);
#line 122
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__6));
#line 122
c_rt_lib0clear(&___nl__6);
#line 123
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 123
goto label_2;
#line 123
label_97:
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0clear(&___nl__4);
#line 123
c_rt_lib0clear(&___nl__5);
#line 124
c_rt_lib0clear(&___nl__0);
#line 124
return ___nl__2;
#line 124
c_rt_lib0clear(&___nl__2);
#line 124
c_rt_lib0clear(&___nl__0);
#line 124
return NULL;
}

ImmT type_checker0check0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "type_checker0check");
return type_checker0check(_tab[0], _tab[1]);}
ImmT type_checker0check(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 129
c_rt_lib0move(&___nl__2, type_checker0check_modules(___nl__0, ___nl__1));
#line 129
c_rt_lib0clear(&___nl__0);
#line 129
c_rt_lib0clear(&___nl__1);
#line 129
return ___nl__2;
#line 129
c_rt_lib0clear(&___nl__2);
#line 129
c_rt_lib0clear(&___nl__0);
#line 129
c_rt_lib0clear(&___nl__1);
#line 129
return NULL;
}

ImmT type_checker0check_modules0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "type_checker0check_modules");
return type_checker0check_modules(_tab[0], _tab[1]);}
ImmT type_checker0check_modules(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 134
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 134
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0unary_minus(___nl__5));
#line 134
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 134
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(18), ___nl__3, ___get_global_const(113), ___nl__4, ___get_global_const(784), ___nl__5, ___get_global_const(132), ___nl__6));
#line 134
c_rt_lib0clear(&___nl__3);
#line 134
c_rt_lib0clear(&___nl__4);
#line 134
c_rt_lib0clear(&___nl__5);
#line 134
c_rt_lib0clear(&___nl__6);
#line 135
c_rt_lib0move(&___nl__3, type_checker_priv0prepare_def_fun(___nl__1, &___nl__2));
#line 136
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 136
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 136
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(152), ___nl__5, ___get_global_const(154), ___nl__6));
#line 136
c_rt_lib0clear(&___nl__5);
#line 136
c_rt_lib0clear(&___nl__6);
#line 137
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__0));
#line 137
label_17:
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 137
if(c_rt_lib0check_true_native(___nl__5)){ goto label_34;}
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 137
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__0, ___nl__5));
#line 138
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 138
c_rt_lib0move(&___nl__8, c_rt_lib0unary_minus(___nl__8));
#line 138
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 138
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(784), ___nl__9);
#line 138
c_rt_lib0clear(&___nl__8);
#line 138
c_rt_lib0clear(&___nl__9);
#line 139
c_rt_lib0copy(&___nl__8, ___nl__5);
#line 139
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(132), ___nl__8);
#line 139
c_rt_lib0clear(&___nl__8);
#line 140
c_rt_lib0delete(type_checker_priv0check_module(___nl__6, &___nl__3, &___nl__2, &___nl__4));
#line 141
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 141
goto label_17;
#line 141
label_34:
#line 141
c_rt_lib0clear(&___nl__5);
#line 141
c_rt_lib0clear(&___nl__6);
#line 141
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(18)));
#line 142
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(113)));
#line 142
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(18), ___nl__6, ___get_global_const(66), ___nl__4, ___get_global_const(113), ___nl__7));
#line 142
c_rt_lib0clear(&___nl__6);
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0clear(&___nl__0);
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
return ___nl__5;
#line 142
c_rt_lib0clear(&___nl__5);
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0clear(&___nl__0);
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
return NULL;
}

ImmT type_checker_priv0check_module(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
#line 150
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 151
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 151
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 151
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(673), ___nl__8, ___get_global_const(882), ___nl__9));
#line 151
c_rt_lib0clear(&___nl__8);
#line 151
c_rt_lib0clear(&___nl__9);
#line 152
c_rt_lib0move(&___nl__8, tct0empty());
#line 152
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(4, ___get_global_const(66), *___ref___3, ___get_global_const(783), ___nl__6, ___get_global_const(1136), ___nl__7, ___get_global_const(786), ___nl__8));
#line 152
c_rt_lib0clear(&___nl__6);
#line 152
c_rt_lib0clear(&___nl__7);
#line 152
c_rt_lib0clear(&___nl__8);
#line 154
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 154
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(1087), ___nl__5, ___get_global_const(382), ___nl__6, ___get_global_const(1090), *___ref___1));
#line 154
c_rt_lib0clear(&___nl__5);
#line 154
c_rt_lib0clear(&___nl__6);
#line 157
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(150)));
#line 157
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 157
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 157
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 157
label_19:
#line 157
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 157
if(c_rt_lib0check_true_native(___nl__10)){ goto label_36;}
#line 157
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 158
c_rt_lib0move(&___nl__11,___get_global_const(382));
#line 158
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__4, ___nl__11));
#line 158
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(93)));
#line 158
c_rt_lib0move(&___nl__13, c_rt_lib0get_true());
#line 158
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__12, ___nl__13));
#line 158
c_rt_lib0clear(&___nl__13);
#line 158
c_rt_lib0clear(&___nl__12);
#line 158
c_rt_lib0move(&___nl__12,___get_global_const(382));
#line 158
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__12, ___nl__11));
#line 158
c_rt_lib0clear(&___nl__12);
#line 158
c_rt_lib0clear(&___nl__11);
#line 159
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 159
goto label_19;
#line 159
label_36:
#line 159
c_rt_lib0clear(&___nl__5);
#line 159
c_rt_lib0clear(&___nl__6);
#line 159
c_rt_lib0clear(&___nl__7);
#line 159
c_rt_lib0clear(&___nl__8);
#line 159
c_rt_lib0clear(&___nl__9);
#line 159
c_rt_lib0clear(&___nl__10);
#line 160
c_rt_lib0move(&___nl__5,___get_global_const(382));
#line 160
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 160
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 160
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 160
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__6, ___nl__7));
#line 160
c_rt_lib0clear(&___nl__7);
#line 160
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0move(&___nl__6,___get_global_const(382));
#line 160
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 160
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0clear(&___nl__5);
#line 161
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(785)));
#line 161
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 161
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 161
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 161
label_58:
#line 161
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 161
if(c_rt_lib0check_true_native(___nl__10)){ goto label_111;}
#line 161
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 162
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 163
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(89)));
#line 163
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 163
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 163
c_rt_lib0move(&___nl__16, c_rt_lib0array_len(___nl__12));
#line 163
label_67:
#line 163
c_rt_lib0move(&___nl__17, c_rt_lib0ge(___nl__14, ___nl__16));
#line 163
if(c_rt_lib0check_true_native(___nl__17)){ goto label_81;}
#line 163
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__12, ___nl__14));
#line 164
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(63)));
#line 164
c_rt_lib0move(&___nl__18, type_checker_priv0type_to_ptd(___nl__19, ___ref___2));
#line 164
c_rt_lib0clear(&___nl__19);
#line 165
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__18, &___nl__4, ___ref___2));
#line 166
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(93)));
#line 166
c_rt_lib0delete(type_checker_priv0add_var_decl_to_vars(___nl__18, ___nl__19, &___nl__11));
#line 166
c_rt_lib0clear(&___nl__19);
#line 166
c_rt_lib0clear(&___nl__18);
#line 167
c_rt_lib0move(&___nl__14, c_rt_lib0add_mod(___nl__14, ___nl__15));
#line 167
goto label_67;
#line 167
label_81:
#line 167
c_rt_lib0clear(&___nl__12);
#line 167
c_rt_lib0clear(&___nl__13);
#line 167
c_rt_lib0clear(&___nl__14);
#line 167
c_rt_lib0clear(&___nl__15);
#line 167
c_rt_lib0clear(&___nl__16);
#line 167
c_rt_lib0clear(&___nl__17);
#line 168
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(786)));
#line 168
c_rt_lib0move(&___nl__12, type_checker_priv0return_type_to_tct(___nl__13, ___ref___2));
#line 168
c_rt_lib0clear(&___nl__13);
#line 168
c_rt_lib0move(&___nl__13,___get_global_const(1087));
#line 168
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(___nl__4, ___nl__13));
#line 168
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 168
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(786), ___nl__14);
#line 168
c_rt_lib0move(&___nl__15,___get_global_const(1087));
#line 168
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__15, ___nl__13));
#line 168
c_rt_lib0clear(&___nl__15);
#line 168
c_rt_lib0clear(&___nl__12);
#line 168
c_rt_lib0clear(&___nl__13);
#line 168
c_rt_lib0clear(&___nl__14);
#line 169
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1087)));
#line 169
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(786)));
#line 169
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__12, &___nl__4, ___ref___2));
#line 169
c_rt_lib0clear(&___nl__12);
#line 170
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(201)));
#line 170
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__12, &___nl__4, &___nl__11, ___ref___2));
#line 170
c_rt_lib0clear(&___nl__12);
#line 170
c_rt_lib0clear(&___nl__11);
#line 171
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 171
goto label_58;
#line 171
label_111:
#line 171
c_rt_lib0clear(&___nl__5);
#line 171
c_rt_lib0clear(&___nl__6);
#line 171
c_rt_lib0clear(&___nl__7);
#line 171
c_rt_lib0clear(&___nl__8);
#line 171
c_rt_lib0clear(&___nl__9);
#line 171
c_rt_lib0clear(&___nl__10);
#line 172
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1090)));
#line 172
c_rt_lib0copy(___ref___1, ___nl__5);
#line 172
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1087)));
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(66)));
#line 173
c_rt_lib0copy(___ref___3, ___nl__5);
#line 173
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0clear(&___nl__4);
#line 173
c_rt_lib0clear(&___nl__0);
#line 173
return NULL;
}

ImmT type_checker_priv0join_vars(ImmT * ___ref___0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 178
c_rt_lib0move(&___nl__5,___get_global_const(1166));
#line 178
c_rt_lib0move(&___nl__4, hash0has_key(___nl__1, ___nl__5));
#line 178
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 178
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 178
c_rt_lib0clear(&___nl__1);
#line 178
c_rt_lib0clear(&___nl__4);
#line 178
return NULL;
#line 178
goto label_9;
#line 178
label_9:
#line 178
c_rt_lib0clear(&___nl__4);
#line 179
c_rt_lib0move(&___nl__5,___get_global_const(1166));
#line 179
c_rt_lib0move(&___nl__4, hash0has_key(*___ref___0, ___nl__5));
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 179
if(c_rt_lib0check_true_native(___nl__4)){ goto label_21;}
#line 180
c_rt_lib0copy(___ref___0, ___nl__1);
#line 181
c_rt_lib0clear(&___nl__1);
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
return NULL;
#line 182
goto label_21;
#line 182
label_21:
#line 182
c_rt_lib0clear(&___nl__4);
#line 183
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(*___ref___0));
#line 183
label_24:
#line 183
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 183
if(c_rt_lib0check_true_native(___nl__4)){ goto label_54;}
#line 183
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 183
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(*___ref___0, ___nl__4));
#line 184
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(1137)));
#line 184
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(45)));
#line 184
if(c_rt_lib0check_true_native(___nl__8)){ goto label_37;}
#line 188
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(46)));
#line 188
if(c_rt_lib0check_true_native(___nl__8)){ goto label_47;}
#line 188
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 188
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 188
nl_die_arg(___nl__8);
#line 184
label_37:
#line 185
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(63)));
#line 186
c_rt_lib0move(&___nl__10, hash0get_value(___nl__1, ___nl__4));
#line 186
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(63)));
#line 187
c_rt_lib0move(&___nl__11, ptd_system0cross_type(___nl__9, ___nl__10, ___ref___2, ___ref___3));
#line 187
c_rt_lib0delete(type_checker_priv0set_type_to_variable(___ref___0, ___nl__4, ___nl__11));
#line 187
c_rt_lib0clear(&___nl__11);
#line 187
c_rt_lib0clear(&___nl__9);
#line 187
c_rt_lib0clear(&___nl__10);
#line 188
goto label_49;
#line 188
label_47:
#line 189
goto label_49;
#line 189
label_49:
#line 189
c_rt_lib0clear(&___nl__7);
#line 189
c_rt_lib0clear(&___nl__8);
#line 190
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 190
goto label_24;
#line 190
label_54:
#line 190
c_rt_lib0clear(&___nl__4);
#line 190
c_rt_lib0clear(&___nl__5);
#line 190
c_rt_lib0clear(&___nl__6);
#line 190
c_rt_lib0clear(&___nl__1);
#line 190
return NULL;
}

ImmT type_checker_priv0set_end_function(ImmT * ___ref___0) {
type_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 194
c_rt_lib0move(&___nl__1,___get_global_const(1166));
#line 194
c_rt_lib0move(&___nl__2, tct0empty());
#line 194
c_rt_lib0delete(type_checker_priv0set_type_to_variable(___ref___0, ___nl__1, ___nl__2));
#line 194
c_rt_lib0clear(&___nl__2);
#line 194
c_rt_lib0clear(&___nl__1);
#line 194
return NULL;
}

ImmT type_checker_priv0check_cmd(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
ImmT ___nl__20 = NULL;
ImmT ___nl__21 = NULL;
#line 199
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(195)));
#line 199
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(440)));
#line 199
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(134)));
#line 199
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 199
c_rt_lib0hash_set_value_dec(___ref___3, ___get_global_const(784), ___nl__5);
#line 199
c_rt_lib0clear(&___nl__4);
#line 199
c_rt_lib0clear(&___nl__5);
#line 200
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 201
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 202
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 202
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(815)));
#line 202
if(c_rt_lib0check_true_native(___nl__7)){ goto label_53;}
#line 221
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(816)));
#line 221
if(c_rt_lib0check_true_native(___nl__7)){ goto label_135;}
#line 238
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(817)));
#line 238
if(c_rt_lib0check_true_native(___nl__7)){ goto label_202;}
#line 240
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(818)));
#line 240
if(c_rt_lib0check_true_native(___nl__7)){ goto label_207;}
#line 242
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(140)));
#line 242
if(c_rt_lib0check_true_native(___nl__7)){ goto label_212;}
#line 244
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(819)));
#line 244
if(c_rt_lib0check_true_native(___nl__7)){ goto label_217;}
#line 246
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(820)));
#line 246
if(c_rt_lib0check_true_native(___nl__7)){ goto label_222;}
#line 248
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(821)));
#line 248
if(c_rt_lib0check_true_native(___nl__7)){ goto label_227;}
#line 256
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(822)));
#line 256
if(c_rt_lib0check_true_native(___nl__7)){ goto label_256;}
#line 264
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(823)));
#line 264
if(c_rt_lib0check_true_native(___nl__7)){ goto label_285;}
#line 272
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(824)));
#line 272
if(c_rt_lib0check_true_native(___nl__7)){ goto label_320;}
#line 280
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(825)));
#line 280
if(c_rt_lib0check_true_native(___nl__7)){ goto label_355;}
#line 282
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(192)));
#line 282
if(c_rt_lib0check_true_native(___nl__7)){ goto label_360;}
#line 284
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(90)));
#line 284
if(c_rt_lib0check_true_native(___nl__7)){ goto label_365;}
#line 298
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(826)));
#line 298
if(c_rt_lib0check_true_native(___nl__7)){ goto label_448;}
#line 304
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(217)));
#line 304
if(c_rt_lib0check_true_native(___nl__7)){ goto label_482;}
#line 309
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(827)));
#line 309
if(c_rt_lib0check_true_native(___nl__7)){ goto label_503;}
#line 311
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(828)));
#line 311
if(c_rt_lib0check_true_native(___nl__7)){ goto label_512;}
#line 322
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(95)));
#line 322
if(c_rt_lib0check_true_native(___nl__7)){ goto label_566;}
#line 326
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(829)));
#line 326
if(c_rt_lib0check_true_native(___nl__7)){ goto label_575;}
#line 326
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 326
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 326
nl_die_arg(___nl__7);
#line 202
label_53:
#line 202
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(815)));
#line 203
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(830)));
#line 203
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__5, ___ref___3));
#line 203
c_rt_lib0clear(&___nl__10);
#line 206
c_rt_lib0move(&___nl__10, ptd_system0is_condition_type(___nl__9, ___ref___1, ___ref___3));
#line 206
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 206
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 206
if(c_rt_lib0check_true_native(___nl__10)){ goto label_71;}
#line 204
c_rt_lib0move(&___nl__11,___get_global_const(1167));
#line 205
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 205
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 205
c_rt_lib0clear(&___nl__13);
#line 205
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 205
c_rt_lib0clear(&___nl__12);
#line 205
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 205
c_rt_lib0clear(&___nl__11);
#line 205
goto label_71;
#line 205
label_71:
#line 205
c_rt_lib0clear(&___nl__10);
#line 207
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 208
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(815)));
#line 208
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__10, ___ref___3));
#line 208
c_rt_lib0clear(&___nl__11);
#line 209
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(831)));
#line 209
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 209
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 209
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 209
label_81:
#line 209
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 209
if(c_rt_lib0check_true_native(___nl__16)){ goto label_120;}
#line 209
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 210
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(201)));
#line 210
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(195)));
#line 210
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(440)));
#line 210
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(134)));
#line 210
c_rt_lib0copy(&___nl__18, ___nl__17);
#line 210
c_rt_lib0hash_set_value_dec(___ref___3, ___get_global_const(784), ___nl__18);
#line 210
c_rt_lib0clear(&___nl__17);
#line 210
c_rt_lib0clear(&___nl__18);
#line 211
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(830)));
#line 211
c_rt_lib0move(&___nl__17, type_checker_priv0check_val(___nl__18, ___ref___1, &___nl__5, ___ref___3));
#line 211
c_rt_lib0clear(&___nl__18);
#line 214
c_rt_lib0move(&___nl__18, ptd_system0is_condition_type(___nl__17, ___ref___1, ___ref___3));
#line 214
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 214
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 214
if(c_rt_lib0check_true_native(___nl__18)){ goto label_109;}
#line 212
c_rt_lib0move(&___nl__19,___get_global_const(1168));
#line 213
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(63)));
#line 213
c_rt_lib0move(&___nl__20, type_checker_priv0get_print_tct_type_name(___nl__21));
#line 213
c_rt_lib0clear(&___nl__21);
#line 213
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 213
c_rt_lib0clear(&___nl__20);
#line 213
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__19));
#line 213
c_rt_lib0clear(&___nl__19);
#line 213
goto label_109;
#line 213
label_109:
#line 213
c_rt_lib0clear(&___nl__18);
#line 215
c_rt_lib0copy(&___nl__18, ___nl__5);
#line 216
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(201)));
#line 216
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__19, ___ref___1, &___nl__18, ___ref___3));
#line 216
c_rt_lib0clear(&___nl__19);
#line 217
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__10, ___nl__18, ___ref___1, ___ref___3));
#line 217
c_rt_lib0clear(&___nl__17);
#line 217
c_rt_lib0clear(&___nl__18);
#line 218
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 218
goto label_81;
#line 218
label_120:
#line 218
c_rt_lib0clear(&___nl__11);
#line 218
c_rt_lib0clear(&___nl__12);
#line 218
c_rt_lib0clear(&___nl__13);
#line 218
c_rt_lib0clear(&___nl__14);
#line 218
c_rt_lib0clear(&___nl__15);
#line 218
c_rt_lib0clear(&___nl__16);
#line 219
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(832)));
#line 219
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__5, ___ref___3));
#line 219
c_rt_lib0clear(&___nl__11);
#line 220
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 220
c_rt_lib0clear(&___nl__9);
#line 220
c_rt_lib0clear(&___nl__10);
#line 220
c_rt_lib0clear(&___nl__8);
#line 221
goto label_577;
#line 221
label_135:
#line 221
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(816)));
#line 222
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(833)));
#line 222
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(192)));
#line 222
if(c_rt_lib0check_true_native(___nl__10)){ goto label_145;}
#line 224
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(827)));
#line 224
if(c_rt_lib0check_true_native(___nl__10)){ goto label_150;}
#line 224
c_rt_lib0move(&___nl__10,___get_global_const(91));
#line 224
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 224
nl_die_arg(___nl__10);
#line 222
label_145:
#line 222
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(192)));
#line 223
c_rt_lib0delete(type_checker_priv0check_val(___nl__11, ___ref___1, &___nl__5, ___ref___3));
#line 223
c_rt_lib0clear(&___nl__11);
#line 224
goto label_159;
#line 224
label_150:
#line 224
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(827)));
#line 225
c_rt_lib0move(&___nl__12, type_checker_priv0check_var_decl(___nl__11, ___ref___1, &___nl__5, ___ref___3));
#line 225
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(93)));
#line 225
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__12, ___nl__13, &___nl__5));
#line 225
c_rt_lib0clear(&___nl__13);
#line 225
c_rt_lib0clear(&___nl__12);
#line 225
c_rt_lib0clear(&___nl__11);
#line 226
goto label_159;
#line 226
label_159:
#line 226
c_rt_lib0clear(&___nl__9);
#line 226
c_rt_lib0clear(&___nl__10);
#line 227
c_rt_lib0copy(&___nl__9, ___nl__5);
#line 228
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(830)));
#line 228
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(192)));
#line 228
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(829)));
#line 228
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 228
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 228
if(c_rt_lib0check_true_native(___nl__10)){ goto label_190;}
#line 229
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(830)));
#line 229
c_rt_lib0move(&___nl__11, type_checker_priv0check_val(___nl__12, ___ref___1, &___nl__9, ___ref___3));
#line 229
c_rt_lib0clear(&___nl__12);
#line 232
c_rt_lib0move(&___nl__12, ptd_system0is_condition_type(___nl__11, ___ref___1, ___ref___3));
#line 232
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 232
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 232
if(c_rt_lib0check_true_native(___nl__12)){ goto label_185;}
#line 230
c_rt_lib0move(&___nl__13,___get_global_const(1169));
#line 231
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(63)));
#line 231
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_tct_type_name(___nl__15));
#line 231
c_rt_lib0clear(&___nl__15);
#line 231
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 231
c_rt_lib0clear(&___nl__14);
#line 231
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__13));
#line 231
c_rt_lib0clear(&___nl__13);
#line 231
goto label_185;
#line 231
label_185:
#line 231
c_rt_lib0clear(&___nl__12);
#line 233
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__5, ___ref___1, ___ref___3));
#line 233
c_rt_lib0clear(&___nl__11);
#line 234
goto label_190;
#line 234
label_190:
#line 234
c_rt_lib0clear(&___nl__10);
#line 235
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(201)));
#line 235
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__10, ___ref___1, &___nl__9, ___ref___3));
#line 235
c_rt_lib0clear(&___nl__10);
#line 236
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(834)));
#line 236
c_rt_lib0delete(type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__9, ___ref___3));
#line 236
c_rt_lib0clear(&___nl__10);
#line 237
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__9, ___ref___1, ___ref___3));
#line 237
c_rt_lib0clear(&___nl__9);
#line 237
c_rt_lib0clear(&___nl__8);
#line 238
goto label_577;
#line 238
label_202:
#line 238
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(817)));
#line 239
c_rt_lib0delete(type_checker_priv0check_fora(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 239
c_rt_lib0clear(&___nl__8);
#line 240
goto label_577;
#line 240
label_207:
#line 240
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(818)));
#line 241
c_rt_lib0delete(type_checker_priv0check_forh(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 241
c_rt_lib0clear(&___nl__8);
#line 242
goto label_577;
#line 242
label_212:
#line 242
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(140)));
#line 243
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 243
c_rt_lib0clear(&___nl__8);
#line 244
goto label_577;
#line 244
label_217:
#line 244
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(819)));
#line 245
c_rt_lib0delete(type_checker_priv0check_rep(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 245
c_rt_lib0clear(&___nl__8);
#line 246
goto label_577;
#line 246
label_222:
#line 246
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(820)));
#line 247
c_rt_lib0delete(type_checker_priv0check_while(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 247
c_rt_lib0clear(&___nl__8);
#line 248
goto label_577;
#line 248
label_227:
#line 248
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(821)));
#line 249
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(830)));
#line 249
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__5, ___ref___3));
#line 249
c_rt_lib0clear(&___nl__10);
#line 252
c_rt_lib0move(&___nl__10, ptd_system0is_condition_type(___nl__9, ___ref___1, ___ref___3));
#line 252
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 252
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 252
if(c_rt_lib0check_true_native(___nl__10)){ goto label_245;}
#line 250
c_rt_lib0move(&___nl__11,___get_global_const(1170));
#line 251
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 251
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 251
c_rt_lib0clear(&___nl__13);
#line 251
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 251
c_rt_lib0clear(&___nl__12);
#line 251
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 251
c_rt_lib0clear(&___nl__11);
#line 251
goto label_245;
#line 251
label_245:
#line 251
c_rt_lib0clear(&___nl__10);
#line 253
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 254
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(201)));
#line 254
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__10, ___ref___3));
#line 254
c_rt_lib0clear(&___nl__11);
#line 255
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 255
c_rt_lib0clear(&___nl__9);
#line 255
c_rt_lib0clear(&___nl__10);
#line 255
c_rt_lib0clear(&___nl__8);
#line 256
goto label_577;
#line 256
label_256:
#line 256
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(822)));
#line 257
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(830)));
#line 257
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__5, ___ref___3));
#line 257
c_rt_lib0clear(&___nl__10);
#line 260
c_rt_lib0move(&___nl__10, ptd_system0is_condition_type(___nl__9, ___ref___1, ___ref___3));
#line 260
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 260
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 260
if(c_rt_lib0check_true_native(___nl__10)){ goto label_274;}
#line 258
c_rt_lib0move(&___nl__11,___get_global_const(1171));
#line 259
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 259
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 259
c_rt_lib0clear(&___nl__13);
#line 259
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 259
c_rt_lib0clear(&___nl__12);
#line 259
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 259
c_rt_lib0clear(&___nl__11);
#line 259
goto label_274;
#line 259
label_274:
#line 259
c_rt_lib0clear(&___nl__10);
#line 261
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 262
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(201)));
#line 262
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__10, ___ref___3));
#line 262
c_rt_lib0clear(&___nl__11);
#line 263
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 263
c_rt_lib0clear(&___nl__9);
#line 263
c_rt_lib0clear(&___nl__10);
#line 263
c_rt_lib0clear(&___nl__8);
#line 264
goto label_577;
#line 264
label_285:
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1087)));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1136)));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(882)));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 265
if(c_rt_lib0check_true_native(___nl__8)){ goto label_296;}
#line 266
c_rt_lib0move(&___nl__9,___get_global_const(836));
#line 266
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 266
c_rt_lib0clear(&___nl__9);
#line 267
goto label_317;
#line 267
label_296:
#line 268
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1087)));
#line 268
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(1136)));
#line 268
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(673)));
#line 269
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__5, ___ref___1, ___ref___3));
#line 270
c_rt_lib0move(&___nl__10,___get_global_const(1087));
#line 270
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 270
c_rt_lib0move(&___nl__11,___get_global_const(1136));
#line 270
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 270
c_rt_lib0copy(&___nl__12, ___nl__9);
#line 270
c_rt_lib0hash_set_value_dec(&___nl__11, ___get_global_const(673), ___nl__12);
#line 270
c_rt_lib0move(&___nl__13,___get_global_const(1136));
#line 270
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__13, ___nl__11));
#line 270
c_rt_lib0move(&___nl__13,___get_global_const(1087));
#line 270
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__13, ___nl__10));
#line 270
c_rt_lib0clear(&___nl__13);
#line 270
c_rt_lib0clear(&___nl__10);
#line 270
c_rt_lib0clear(&___nl__11);
#line 270
c_rt_lib0clear(&___nl__12);
#line 270
c_rt_lib0clear(&___nl__9);
#line 271
goto label_317;
#line 271
label_317:
#line 271
c_rt_lib0clear(&___nl__8);
#line 272
goto label_577;
#line 272
label_320:
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1087)));
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1136)));
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(882)));
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 273
if(c_rt_lib0check_true_native(___nl__8)){ goto label_331;}
#line 274
c_rt_lib0move(&___nl__9,___get_global_const(837));
#line 274
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 274
c_rt_lib0clear(&___nl__9);
#line 275
goto label_352;
#line 275
label_331:
#line 276
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1087)));
#line 276
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(1136)));
#line 276
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(673)));
#line 277
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__5, ___ref___1, ___ref___3));
#line 278
c_rt_lib0move(&___nl__10,___get_global_const(1087));
#line 278
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 278
c_rt_lib0move(&___nl__11,___get_global_const(1136));
#line 278
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 278
c_rt_lib0copy(&___nl__12, ___nl__9);
#line 278
c_rt_lib0hash_set_value_dec(&___nl__11, ___get_global_const(673), ___nl__12);
#line 278
c_rt_lib0move(&___nl__13,___get_global_const(1136));
#line 278
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__13, ___nl__11));
#line 278
c_rt_lib0move(&___nl__13,___get_global_const(1087));
#line 278
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__13, ___nl__10));
#line 278
c_rt_lib0clear(&___nl__13);
#line 278
c_rt_lib0clear(&___nl__10);
#line 278
c_rt_lib0clear(&___nl__11);
#line 278
c_rt_lib0clear(&___nl__12);
#line 278
c_rt_lib0clear(&___nl__9);
#line 279
goto label_352;
#line 279
label_352:
#line 279
c_rt_lib0clear(&___nl__8);
#line 280
goto label_577;
#line 280
label_355:
#line 280
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(825)));
#line 281
c_rt_lib0delete(type_checker_priv0check_match(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 281
c_rt_lib0clear(&___nl__8);
#line 282
goto label_577;
#line 282
label_360:
#line 282
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(192)));
#line 283
c_rt_lib0delete(type_checker_priv0check_val(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 283
c_rt_lib0clear(&___nl__8);
#line 284
goto label_577;
#line 284
label_365:
#line 284
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(90)));
#line 285
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 286
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1087)));
#line 286
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(786)));
#line 286
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(801)));
#line 286
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 286
if(c_rt_lib0check_true_native(___nl__11)){ goto label_376;}
#line 286
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 286
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(804)));
#line 286
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 286
label_376:
#line 286
c_rt_lib0clear(&___nl__11);
#line 286
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 286
if(c_rt_lib0check_true_native(___nl__10)){ goto label_384;}
#line 287
c_rt_lib0move(&___nl__11,___get_global_const(1172));
#line 287
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 287
c_rt_lib0clear(&___nl__11);
#line 288
goto label_442;
#line 288
label_384:
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1087)));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(786)));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(801)));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 288
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__10));
#line 288
if(c_rt_lib0check_true_native(___nl__12)){ goto label_395;}
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1087)));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(786)));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(796)));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 288
label_395:
#line 288
c_rt_lib0clear(&___nl__12);
#line 288
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 288
if(c_rt_lib0check_true_native(___nl__11)){ goto label_401;}
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(804)));
#line 288
label_401:
#line 288
c_rt_lib0clear(&___nl__11);
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 288
if(c_rt_lib0check_true_native(___nl__10)){ goto label_409;}
#line 290
c_rt_lib0move(&___nl__11,___get_global_const(1173));
#line 290
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 290
c_rt_lib0clear(&___nl__11);
#line 291
goto label_442;
#line 291
label_409:
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1087)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(786)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(801)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 291
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 291
if(c_rt_lib0check_true_native(___nl__11)){ goto label_419;}
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(804)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 291
label_419:
#line 291
c_rt_lib0clear(&___nl__11);
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 291
if(c_rt_lib0check_true_native(___nl__10)){ goto label_442;}
#line 292
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1087)));
#line 292
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(786)));
#line 292
c_rt_lib0move(&___nl__11, ptd_system0check_assignment(___nl__12, ___nl__9, ___ref___1, ___ref___3));
#line 292
c_rt_lib0clear(&___nl__12);
#line 293
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 293
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(47)));
#line 293
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 293
if(c_rt_lib0check_true_native(___nl__12)){ goto label_438;}
#line 294
c_rt_lib0move(&___nl__13,___get_global_const(1174));
#line 294
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_check_info(___nl__11));
#line 294
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 294
c_rt_lib0clear(&___nl__14);
#line 294
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__13));
#line 294
c_rt_lib0clear(&___nl__13);
#line 295
goto label_438;
#line 295
label_438:
#line 295
c_rt_lib0clear(&___nl__12);
#line 295
c_rt_lib0clear(&___nl__11);
#line 296
goto label_442;
#line 296
label_442:
#line 296
c_rt_lib0clear(&___nl__10);
#line 297
c_rt_lib0delete(type_checker_priv0set_end_function(&___nl__5));
#line 297
c_rt_lib0clear(&___nl__9);
#line 297
c_rt_lib0clear(&___nl__8);
#line 298
goto label_577;
#line 298
label_448:
#line 298
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(826)));
#line 299
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 299
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 299
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 299
label_453:
#line 299
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 299
if(c_rt_lib0check_true_native(___nl__13)){ goto label_474;}
#line 299
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 300
c_rt_lib0move(&___nl__14, type_checker_priv0check_cmd(___nl__9, ___ref___1, &___nl__5, ___ref___3));
#line 300
c_rt_lib0move(&___nl__17, c_rt_lib0init_iter(___nl__14));
#line 300
label_459:
#line 300
c_rt_lib0move(&___nl__15, c_rt_lib0is_end_hash(___nl__17));
#line 300
if(c_rt_lib0check_true_native(___nl__15)){ goto label_467;}
#line 300
c_rt_lib0move(&___nl__15, c_rt_lib0get_key_iter(___nl__17));
#line 300
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value(___nl__14, ___nl__15));
#line 301
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__16, ___nl__15, &___nl__5));
#line 302
c_rt_lib0move(&___nl__17, c_rt_lib0next_iter(___nl__17));
#line 302
goto label_459;
#line 302
label_467:
#line 302
c_rt_lib0clear(&___nl__14);
#line 302
c_rt_lib0clear(&___nl__15);
#line 302
c_rt_lib0clear(&___nl__16);
#line 302
c_rt_lib0clear(&___nl__17);
#line 303
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 303
goto label_453;
#line 303
label_474:
#line 303
c_rt_lib0clear(&___nl__9);
#line 303
c_rt_lib0clear(&___nl__10);
#line 303
c_rt_lib0clear(&___nl__11);
#line 303
c_rt_lib0clear(&___nl__12);
#line 303
c_rt_lib0clear(&___nl__13);
#line 303
c_rt_lib0clear(&___nl__8);
#line 304
goto label_577;
#line 304
label_482:
#line 304
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(217)));
#line 305
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 305
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 305
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 305
label_487:
#line 305
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 305
if(c_rt_lib0check_true_native(___nl__13)){ goto label_494;}
#line 305
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 306
c_rt_lib0delete(type_checker_priv0check_val(___nl__9, ___ref___1, &___nl__5, ___ref___3));
#line 307
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 307
goto label_487;
#line 307
label_494:
#line 307
c_rt_lib0clear(&___nl__9);
#line 307
c_rt_lib0clear(&___nl__10);
#line 307
c_rt_lib0clear(&___nl__11);
#line 307
c_rt_lib0clear(&___nl__12);
#line 307
c_rt_lib0clear(&___nl__13);
#line 308
c_rt_lib0delete(type_checker_priv0set_end_function(&___nl__5));
#line 308
c_rt_lib0clear(&___nl__8);
#line 309
goto label_577;
#line 309
label_503:
#line 309
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(827)));
#line 310
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(93)));
#line 310
c_rt_lib0move(&___nl__10, type_checker_priv0check_var_decl(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 310
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__9, ___nl__10));
#line 310
c_rt_lib0clear(&___nl__10);
#line 310
c_rt_lib0clear(&___nl__9);
#line 310
c_rt_lib0clear(&___nl__8);
#line 311
goto label_577;
#line 311
label_512:
#line 311
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(828)));
#line 312
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1087)));
#line 312
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(786)));
#line 312
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(1083)));
#line 312
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__10, ___get_global_const(43), ___nl__11));
#line 312
c_rt_lib0clear(&___nl__10);
#line 312
c_rt_lib0clear(&___nl__11);
#line 314
c_rt_lib0move(&___nl__10, ptd_system0is_try_ensure_type(___nl__9, ___ref___1, ___ref___3));
#line 314
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 314
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 314
if(c_rt_lib0check_true_native(___nl__10)){ goto label_528;}
#line 313
c_rt_lib0move(&___nl__11,___get_global_const(1175));
#line 313
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 313
c_rt_lib0clear(&___nl__11);
#line 313
goto label_528;
#line 313
label_528:
#line 313
c_rt_lib0clear(&___nl__10);
#line 315
c_rt_lib0move(&___nl__10, type_checker_priv0check_try_ensure(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 316
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1087)));
#line 316
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(786)));
#line 316
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_none(___get_global_const(1077)));
#line 316
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__13, ___get_global_const(43), ___nl__14));
#line 316
c_rt_lib0clear(&___nl__13);
#line 316
c_rt_lib0clear(&___nl__14);
#line 316
c_rt_lib0move(&___nl__11, ptd_system0try_get_ensure_sub_types(___nl__12, ___ref___1, ___ref___3));
#line 316
c_rt_lib0clear(&___nl__12);
#line 317
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(47)));
#line 317
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(1176)));
#line 317
c_rt_lib0move(&___nl__12, ptd_system0check_assignment(___nl__13, ___nl__14, ___ref___1, ___ref___3));
#line 317
c_rt_lib0clear(&___nl__14);
#line 317
c_rt_lib0clear(&___nl__13);
#line 318
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 318
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(47)));
#line 318
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 318
if(c_rt_lib0check_true_native(___nl__13)){ goto label_555;}
#line 319
c_rt_lib0move(&___nl__14,___get_global_const(1177));
#line 319
c_rt_lib0move(&___nl__15, type_checker_priv0get_print_check_info(___nl__12));
#line 319
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 319
c_rt_lib0clear(&___nl__15);
#line 319
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__14));
#line 319
c_rt_lib0clear(&___nl__14);
#line 320
goto label_555;
#line 320
label_555:
#line 320
c_rt_lib0clear(&___nl__13);
#line 321
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(673)));
#line 321
c_rt_lib0copy(&___nl__4, ___nl__13);
#line 321
c_rt_lib0clear(&___nl__13);
#line 321
c_rt_lib0clear(&___nl__9);
#line 321
c_rt_lib0clear(&___nl__10);
#line 321
c_rt_lib0clear(&___nl__11);
#line 321
c_rt_lib0clear(&___nl__12);
#line 321
c_rt_lib0clear(&___nl__8);
#line 322
goto label_577;
#line 322
label_566:
#line 322
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(95)));
#line 323
c_rt_lib0move(&___nl__9, type_checker_priv0check_try_ensure(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 325
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(673)));
#line 325
c_rt_lib0copy(&___nl__4, ___nl__10);
#line 325
c_rt_lib0clear(&___nl__10);
#line 325
c_rt_lib0clear(&___nl__9);
#line 325
c_rt_lib0clear(&___nl__8);
#line 326
goto label_577;
#line 326
label_575:
#line 327
goto label_577;
#line 327
label_577:
#line 327
c_rt_lib0clear(&___nl__6);
#line 327
c_rt_lib0clear(&___nl__7);
#line 328
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(*___ref___2));
#line 328
label_581:
#line 328
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 328
if(c_rt_lib0check_true_native(___nl__6)){ goto label_591;}
#line 328
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 328
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(*___ref___2, ___nl__6));
#line 329
c_rt_lib0move(&___nl__9, hash0get_value(___nl__5, ___nl__6));
#line 329
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__6, ___nl__9));
#line 329
c_rt_lib0clear(&___nl__9);
#line 330
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 330
goto label_581;
#line 330
label_591:
#line 330
c_rt_lib0clear(&___nl__6);
#line 330
c_rt_lib0clear(&___nl__7);
#line 330
c_rt_lib0clear(&___nl__8);
#line 331
c_rt_lib0move(&___nl__7,___get_global_const(1166));
#line 331
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__7));
#line 331
c_rt_lib0clear(&___nl__7);
#line 331
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 331
if(c_rt_lib0check_true_native(___nl__6)){ goto label_610;}
#line 332
c_rt_lib0move(&___nl__7,___get_global_const(1166));
#line 332
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 332
c_rt_lib0move(&___nl__10, tct0empty());
#line 332
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(1137), ___nl__9, ___get_global_const(63), ___nl__10));
#line 332
c_rt_lib0clear(&___nl__9);
#line 332
c_rt_lib0clear(&___nl__10);
#line 332
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__7, ___nl__8));
#line 332
c_rt_lib0clear(&___nl__8);
#line 332
c_rt_lib0clear(&___nl__7);
#line 333
goto label_610;
#line 333
label_610:
#line 333
c_rt_lib0clear(&___nl__6);
#line 334
c_rt_lib0clear(&___nl__0);
#line 334
c_rt_lib0clear(&___nl__5);
#line 334
return ___nl__4;
#line 334
c_rt_lib0clear(&___nl__4);
#line 334
c_rt_lib0clear(&___nl__5);
#line 334
c_rt_lib0clear(&___nl__0);
#line 334
return NULL;
}

ImmT type_checker_priv0break_continue_block(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 339
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1087)));
#line 339
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1136)));
#line 340
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 340
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(882), ___nl__6, ___get_global_const(673), *___ref___2));
#line 340
c_rt_lib0clear(&___nl__6);
#line 340
c_rt_lib0move(&___nl__6,___get_global_const(1087));
#line 340
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 340
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 340
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(1136), ___nl__7);
#line 340
c_rt_lib0move(&___nl__8,___get_global_const(1087));
#line 340
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 340
c_rt_lib0clear(&___nl__8);
#line 340
c_rt_lib0clear(&___nl__5);
#line 340
c_rt_lib0clear(&___nl__6);
#line 340
c_rt_lib0clear(&___nl__7);
#line 341
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 342
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1087)));
#line 342
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(1136)));
#line 342
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(673)));
#line 342
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 342
c_rt_lib0clear(&___nl__5);
#line 343
c_rt_lib0move(&___nl__5,___get_global_const(1087));
#line 343
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___1, ___nl__5));
#line 343
c_rt_lib0copy(&___nl__6, ___nl__4);
#line 343
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(1136), ___nl__6);
#line 343
c_rt_lib0move(&___nl__7,___get_global_const(1087));
#line 343
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__7, ___nl__5));
#line 343
c_rt_lib0clear(&___nl__7);
#line 343
c_rt_lib0clear(&___nl__5);
#line 343
c_rt_lib0clear(&___nl__6);
#line 343
c_rt_lib0clear(&___nl__4);
#line 343
c_rt_lib0clear(&___nl__0);
#line 343
return NULL;
}

ImmT type_checker_priv0check_try_ensure(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
#line 348
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 349
c_rt_lib0move(&___nl__6, tct0empty());
#line 349
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(1083)));
#line 349
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__6, ___get_global_const(43), ___nl__7));
#line 349
c_rt_lib0clear(&___nl__6);
#line 349
c_rt_lib0clear(&___nl__7);
#line 350
c_rt_lib0move(&___nl__6, tct0tct_im());
#line 351
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(844)));
#line 351
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 356
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(845)));
#line 356
if(c_rt_lib0check_true_native(___nl__7)){ goto label_36;}
#line 368
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(846)));
#line 368
if(c_rt_lib0check_true_native(___nl__7)){ goto label_85;}
#line 368
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 368
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__0));
#line 368
nl_die_arg(___nl__7);
#line 351
label_16:
#line 351
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(844)));
#line 352
c_rt_lib0move(&___nl__10, c_rt_lib0get_true());
#line 352
c_rt_lib0move(&___nl__9, type_checker_priv0check_var_decl_try(___nl__8, ___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 352
c_rt_lib0clear(&___nl__10);
#line 353
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(93)));
#line 353
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(48)));
#line 353
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__10, ___nl__11));
#line 353
c_rt_lib0clear(&___nl__11);
#line 353
c_rt_lib0clear(&___nl__10);
#line 354
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(47)));
#line 354
c_rt_lib0copy(&___nl__5, ___nl__10);
#line 354
c_rt_lib0clear(&___nl__10);
#line 355
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(48)));
#line 355
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(63)));
#line 355
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 355
c_rt_lib0clear(&___nl__10);
#line 355
c_rt_lib0clear(&___nl__9);
#line 355
c_rt_lib0clear(&___nl__8);
#line 356
goto label_103;
#line 356
label_36:
#line 356
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(845)));
#line 357
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(231)));
#line 357
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 357
c_rt_lib0clear(&___nl__10);
#line 358
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(18)));
#line 358
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 358
c_rt_lib0clear(&___nl__11);
#line 359
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(230)));
#line 359
c_rt_lib0move(&___nl__11, type_checker_priv0get_type_left_side_equation(___nl__12, ___ref___1, ___ref___2, ___ref___3));
#line 359
c_rt_lib0clear(&___nl__12);
#line 360
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(18)));
#line 360
c_rt_lib0move(&___nl__12, array0len(___nl__13));
#line 360
c_rt_lib0clear(&___nl__13);
#line 360
c_rt_lib0move(&___nl__12, c_rt_lib0sub_mod(___nl__12, ___nl__10));
#line 360
c_rt_lib0copy(&___nl__10, ___nl__12);
#line 360
c_rt_lib0clear(&___nl__12);
#line 361
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 361
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__10, ___nl__12));
#line 361
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 361
if(c_rt_lib0check_true_native(___nl__12)){ goto label_78;}
#line 362
c_rt_lib0move(&___nl__13, ptd_system0try_get_ensure_sub_types(___nl__9, ___ref___1, ___ref___3));
#line 363
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(48)));
#line 363
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 363
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(63), ___nl__15);
#line 363
c_rt_lib0clear(&___nl__14);
#line 363
c_rt_lib0clear(&___nl__15);
#line 364
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(230)));
#line 364
c_rt_lib0delete(type_checker_priv0set_type_to_lval(___nl__14, ___nl__11, ___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 364
c_rt_lib0clear(&___nl__14);
#line 365
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(47)));
#line 365
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(43)));
#line 365
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__15, ___get_global_const(43), ___nl__16));
#line 365
c_rt_lib0clear(&___nl__15);
#line 365
c_rt_lib0clear(&___nl__16);
#line 365
c_rt_lib0copy(&___nl__5, ___nl__14);
#line 365
c_rt_lib0clear(&___nl__14);
#line 366
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(48)));
#line 366
c_rt_lib0copy(&___nl__6, ___nl__14);
#line 366
c_rt_lib0clear(&___nl__14);
#line 366
c_rt_lib0clear(&___nl__13);
#line 367
goto label_78;
#line 367
label_78:
#line 367
c_rt_lib0clear(&___nl__12);
#line 367
c_rt_lib0clear(&___nl__9);
#line 367
c_rt_lib0clear(&___nl__10);
#line 367
c_rt_lib0clear(&___nl__11);
#line 367
c_rt_lib0clear(&___nl__8);
#line 368
goto label_103;
#line 368
label_85:
#line 368
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(846)));
#line 369
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__8, ___ref___1, ___ref___2, ___ref___3));
#line 370
c_rt_lib0move(&___nl__10, ptd_system0try_get_ensure_sub_types(___nl__9, ___ref___1, ___ref___3));
#line 371
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(47)));
#line 371
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(43)));
#line 371
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__12, ___get_global_const(43), ___nl__13));
#line 371
c_rt_lib0clear(&___nl__12);
#line 371
c_rt_lib0clear(&___nl__13);
#line 371
c_rt_lib0copy(&___nl__5, ___nl__11);
#line 371
c_rt_lib0clear(&___nl__11);
#line 372
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(48)));
#line 372
c_rt_lib0copy(&___nl__6, ___nl__11);
#line 372
c_rt_lib0clear(&___nl__11);
#line 372
c_rt_lib0clear(&___nl__9);
#line 372
c_rt_lib0clear(&___nl__10);
#line 372
c_rt_lib0clear(&___nl__8);
#line 373
goto label_103;
#line 373
label_103:
#line 373
c_rt_lib0clear(&___nl__7);
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(63)));
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(804)));
#line 374
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 374
if(c_rt_lib0check_true_native(___nl__8)){ goto label_111;}
#line 374
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(804)));
#line 374
label_111:
#line 374
c_rt_lib0clear(&___nl__8);
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 374
if(c_rt_lib0check_true_native(___nl__7)){ goto label_119;}
#line 374
c_rt_lib0move(&___nl__8,___get_global_const(1178));
#line 374
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__8));
#line 374
c_rt_lib0clear(&___nl__8);
#line 374
goto label_119;
#line 374
label_119:
#line 374
c_rt_lib0clear(&___nl__7);
#line 375
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(673), ___nl__4, ___get_global_const(1176), ___nl__5));
#line 375
c_rt_lib0clear(&___nl__0);
#line 375
c_rt_lib0clear(&___nl__4);
#line 375
c_rt_lib0clear(&___nl__5);
#line 375
c_rt_lib0clear(&___nl__6);
#line 375
return ___nl__7;
#line 375
c_rt_lib0clear(&___nl__7);
#line 375
c_rt_lib0clear(&___nl__4);
#line 375
c_rt_lib0clear(&___nl__5);
#line 375
c_rt_lib0clear(&___nl__6);
#line 375
c_rt_lib0clear(&___nl__0);
#line 375
return NULL;
}

ImmT type_checker_priv0check_forh(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 380
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(328)));
#line 380
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 380
c_rt_lib0clear(&___nl__6);
#line 380
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__5, ___ref___1, ___ref___3));
#line 380
c_rt_lib0clear(&___nl__5);
#line 382
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 382
c_rt_lib0move(&___nl__6, tct0hash(___nl__7));
#line 382
c_rt_lib0clear(&___nl__7);
#line 382
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 382
c_rt_lib0clear(&___nl__6);
#line 382
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 382
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 383
goto label_41;
#line 383
label_13:
#line 383
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 383
c_rt_lib0move(&___nl__6, tct0rec(___nl__7));
#line 383
c_rt_lib0clear(&___nl__7);
#line 383
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 383
c_rt_lib0clear(&___nl__6);
#line 383
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 383
if(c_rt_lib0check_true_native(___nl__5)){ goto label_31;}
#line 384
c_rt_lib0move(&___nl__6, type_checker_priv0is_known(___nl__4));
#line 384
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 384
if(c_rt_lib0check_true_native(___nl__6)){ goto label_28;}
#line 384
c_rt_lib0move(&___nl__7,___get_global_const(1179));
#line 384
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__7));
#line 384
c_rt_lib0clear(&___nl__7);
#line 384
goto label_28;
#line 384
label_28:
#line 384
c_rt_lib0clear(&___nl__6);
#line 385
goto label_41;
#line 385
label_31:
#line 386
c_rt_lib0move(&___nl__6,___get_global_const(1180));
#line 387
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 387
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 387
c_rt_lib0clear(&___nl__8);
#line 387
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 387
c_rt_lib0clear(&___nl__7);
#line 387
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 387
c_rt_lib0clear(&___nl__6);
#line 388
goto label_41;
#line 388
label_41:
#line 388
c_rt_lib0clear(&___nl__5);
#line 389
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 389
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(798)));
#line 389
if(c_rt_lib0check_true_native(___nl__5)){ goto label_48;}
#line 389
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 389
goto label_51;
#line 389
label_48:
#line 389
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 389
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(798)));
#line 389
label_51:
#line 389
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 389
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__6);
#line 389
c_rt_lib0clear(&___nl__5);
#line 389
c_rt_lib0clear(&___nl__6);
#line 390
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 391
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(329)));
#line 391
c_rt_lib0move(&___nl__8, tct0sim());
#line 391
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(1083)));
#line 391
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__8, ___get_global_const(43), ___nl__9));
#line 391
c_rt_lib0clear(&___nl__8);
#line 391
c_rt_lib0clear(&___nl__9);
#line 391
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__7, &___nl__5, ___ref___3));
#line 391
c_rt_lib0clear(&___nl__7);
#line 391
c_rt_lib0clear(&___nl__6);
#line 392
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 392
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__4, &___nl__5, ___ref___3));
#line 392
c_rt_lib0clear(&___nl__6);
#line 393
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 393
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 393
c_rt_lib0clear(&___nl__6);
#line 394
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 394
c_rt_lib0clear(&___nl__4);
#line 394
c_rt_lib0clear(&___nl__5);
#line 394
c_rt_lib0clear(&___nl__0);
#line 394
return NULL;
}

ImmT type_checker_priv0check_fora(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 399
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(3)));
#line 399
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 399
c_rt_lib0clear(&___nl__6);
#line 399
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__5, ___ref___1, ___ref___3));
#line 399
c_rt_lib0clear(&___nl__5);
#line 402
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 402
c_rt_lib0move(&___nl__6, tct0arr(___nl__7));
#line 402
c_rt_lib0clear(&___nl__7);
#line 402
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 402
c_rt_lib0clear(&___nl__6);
#line 402
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 402
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 402
if(c_rt_lib0check_true_native(___nl__5)){ goto label_22;}
#line 401
c_rt_lib0move(&___nl__6,___get_global_const(1181));
#line 401
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 401
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 401
c_rt_lib0clear(&___nl__8);
#line 401
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 401
c_rt_lib0clear(&___nl__7);
#line 401
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 401
c_rt_lib0clear(&___nl__6);
#line 401
goto label_22;
#line 401
label_22:
#line 401
c_rt_lib0clear(&___nl__5);
#line 403
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 403
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(797)));
#line 403
if(c_rt_lib0check_true_native(___nl__5)){ goto label_29;}
#line 403
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 403
goto label_32;
#line 403
label_29:
#line 403
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 403
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(797)));
#line 403
label_32:
#line 403
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 403
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__6);
#line 403
c_rt_lib0clear(&___nl__5);
#line 403
c_rt_lib0clear(&___nl__6);
#line 404
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 405
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(834)));
#line 405
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__4, &___nl__5, ___ref___3));
#line 405
c_rt_lib0clear(&___nl__6);
#line 406
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 406
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 406
c_rt_lib0clear(&___nl__6);
#line 407
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 407
c_rt_lib0clear(&___nl__4);
#line 407
c_rt_lib0clear(&___nl__5);
#line 407
c_rt_lib0clear(&___nl__0);
#line 407
return NULL;
}

ImmT type_checker_priv0check_while(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 412
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(830)));
#line 412
c_rt_lib0move(&___nl__4, type_checker_priv0check_val(___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 412
c_rt_lib0clear(&___nl__5);
#line 415
c_rt_lib0move(&___nl__5, ptd_system0is_condition_type(___nl__4, ___ref___1, ___ref___3));
#line 415
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 415
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 415
if(c_rt_lib0check_true_native(___nl__5)){ goto label_16;}
#line 413
c_rt_lib0move(&___nl__6,___get_global_const(1182));
#line 414
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 414
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 414
c_rt_lib0clear(&___nl__8);
#line 414
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 414
c_rt_lib0clear(&___nl__7);
#line 414
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 414
c_rt_lib0clear(&___nl__6);
#line 414
goto label_16;
#line 414
label_16:
#line 414
c_rt_lib0clear(&___nl__5);
#line 416
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 417
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 417
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 417
c_rt_lib0clear(&___nl__6);
#line 418
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 418
c_rt_lib0clear(&___nl__4);
#line 418
c_rt_lib0clear(&___nl__5);
#line 418
c_rt_lib0clear(&___nl__0);
#line 418
return NULL;
}

ImmT type_checker_priv0check_rep(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 423
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(835)));
#line 423
c_rt_lib0move(&___nl__4, type_checker_priv0check_val(___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 423
c_rt_lib0clear(&___nl__5);
#line 425
c_rt_lib0move(&___nl__6, tct0sim());
#line 425
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 425
c_rt_lib0clear(&___nl__6);
#line 425
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 425
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 425
if(c_rt_lib0check_true_native(___nl__5)){ goto label_18;}
#line 424
c_rt_lib0move(&___nl__6,___get_global_const(1183));
#line 424
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 424
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 424
c_rt_lib0clear(&___nl__8);
#line 424
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 424
c_rt_lib0clear(&___nl__7);
#line 424
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 424
c_rt_lib0clear(&___nl__6);
#line 424
goto label_18;
#line 424
label_18:
#line 424
c_rt_lib0clear(&___nl__5);
#line 426
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 427
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(834)));
#line 427
c_rt_lib0move(&___nl__8, tct0sim());
#line 427
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(1083)));
#line 427
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__8, ___get_global_const(43), ___nl__9));
#line 427
c_rt_lib0clear(&___nl__8);
#line 427
c_rt_lib0clear(&___nl__9);
#line 427
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__7, &___nl__5, ___ref___3));
#line 427
c_rt_lib0clear(&___nl__7);
#line 427
c_rt_lib0clear(&___nl__6);
#line 428
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 428
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 428
c_rt_lib0clear(&___nl__6);
#line 429
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 429
c_rt_lib0clear(&___nl__4);
#line 429
c_rt_lib0clear(&___nl__5);
#line 429
c_rt_lib0clear(&___nl__0);
#line 429
return NULL;
}

ImmT type_checker_priv0check_match(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
ImmT ___nl__20 = NULL;
ImmT ___nl__21 = NULL;
ImmT ___nl__22 = NULL;
ImmT ___nl__23 = NULL;
ImmT ___nl__24 = NULL;
ImmT ___nl__25 = NULL;
ImmT ___nl__26 = NULL;
#line 434
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 434
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 434
c_rt_lib0clear(&___nl__6);
#line 434
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__5, ___ref___1, ___ref___3));
#line 434
c_rt_lib0clear(&___nl__5);
#line 436
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(838)));
#line 437
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 438
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 439
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 440
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 440
c_rt_lib0move(&___nl__10, tct0var(___nl__11));
#line 440
c_rt_lib0clear(&___nl__11);
#line 440
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__4, ___nl__10, ___ref___1, ___ref___3));
#line 440
c_rt_lib0clear(&___nl__10);
#line 440
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 440
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 440
if(c_rt_lib0check_true_native(___nl__9)){ goto label_26;}
#line 441
c_rt_lib0move(&___nl__10,___get_global_const(1184));
#line 441
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 441
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 441
c_rt_lib0clear(&___nl__12);
#line 441
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 441
c_rt_lib0clear(&___nl__11);
#line 441
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 441
c_rt_lib0clear(&___nl__10);
#line 442
goto label_26;
#line 442
label_26:
#line 442
c_rt_lib0clear(&___nl__9);
#line 443
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 443
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(803)));
#line 443
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 443
if(c_rt_lib0check_true_native(___nl__9)){ goto label_128;}
#line 444
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 444
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(803)));
#line 444
c_rt_lib0copy(&___nl__8, ___nl__10);
#line 444
c_rt_lib0clear(&___nl__10);
#line 445
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 446
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 446
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 446
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__5));
#line 446
label_40:
#line 446
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 446
if(c_rt_lib0check_true_native(___nl__15)){ goto label_94;}
#line 446
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__5, ___nl__12));
#line 447
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(839)));
#line 447
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(93)));
#line 448
c_rt_lib0move(&___nl__17, hash0has_key(___nl__8, ___nl__16));
#line 448
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 448
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 448
if(c_rt_lib0check_true_native(___nl__17)){ goto label_67;}
#line 450
c_rt_lib0move(&___nl__18, type_checker_priv0is_known(___nl__4));
#line 450
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 450
if(c_rt_lib0check_true_native(___nl__18)){ goto label_61;}
#line 449
c_rt_lib0move(&___nl__19,___get_global_const(1185));
#line 449
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__16));
#line 449
c_rt_lib0move(&___nl__20,___get_global_const(1093));
#line 449
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 449
c_rt_lib0clear(&___nl__20);
#line 449
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__19));
#line 449
c_rt_lib0clear(&___nl__19);
#line 449
goto label_61;
#line 449
label_61:
#line 449
c_rt_lib0clear(&___nl__18);
#line 451
c_rt_lib0clear(&___nl__16);
#line 451
c_rt_lib0clear(&___nl__17);
#line 451
goto label_91;
#line 452
goto label_67;
#line 452
label_67:
#line 452
c_rt_lib0clear(&___nl__17);
#line 453
c_rt_lib0move(&___nl__17, c_rt_lib0get_true());
#line 453
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__16, ___nl__17));
#line 453
c_rt_lib0clear(&___nl__17);
#line 454
c_rt_lib0move(&___nl__17, hash0get_value(___nl__8, ___nl__16));
#line 454
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(808)));
#line 454
if(c_rt_lib0check_true_native(___nl__18)){ goto label_80;}
#line 456
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(807)));
#line 456
if(c_rt_lib0check_true_native(___nl__18)){ goto label_85;}
#line 456
c_rt_lib0move(&___nl__18,___get_global_const(91));
#line 456
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(2, ___nl__18, ___nl__17));
#line 456
nl_die_arg(___nl__18);
#line 454
label_80:
#line 454
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(808)));
#line 455
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__16, ___nl__19));
#line 455
c_rt_lib0clear(&___nl__19);
#line 456
goto label_87;
#line 456
label_85:
#line 457
goto label_87;
#line 457
label_87:
#line 457
c_rt_lib0clear(&___nl__17);
#line 457
c_rt_lib0clear(&___nl__18);
#line 457
c_rt_lib0clear(&___nl__16);
#line 457
label_91:
#line 458
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 458
goto label_40;
#line 458
label_94:
#line 458
c_rt_lib0clear(&___nl__11);
#line 458
c_rt_lib0clear(&___nl__12);
#line 458
c_rt_lib0clear(&___nl__13);
#line 458
c_rt_lib0clear(&___nl__14);
#line 458
c_rt_lib0clear(&___nl__15);
#line 459
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__8));
#line 459
label_101:
#line 459
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 459
if(c_rt_lib0check_true_native(___nl__11)){ goto label_119;}
#line 459
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 459
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__8, ___nl__11));
#line 460
c_rt_lib0move(&___nl__14, hash0has_key(___nl__10, ___nl__11));
#line 460
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 460
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 460
if(c_rt_lib0check_true_native(___nl__14)){ goto label_115;}
#line 461
c_rt_lib0move(&___nl__15,___get_global_const(1186));
#line 461
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__11));
#line 461
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__15));
#line 461
c_rt_lib0clear(&___nl__15);
#line 462
goto label_115;
#line 462
label_115:
#line 462
c_rt_lib0clear(&___nl__14);
#line 463
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 463
goto label_101;
#line 463
label_119:
#line 463
c_rt_lib0clear(&___nl__11);
#line 463
c_rt_lib0clear(&___nl__12);
#line 463
c_rt_lib0clear(&___nl__13);
#line 464
c_rt_lib0move(&___nl__11, c_rt_lib0get_true());
#line 464
c_rt_lib0copy(&___nl__6, ___nl__11);
#line 464
c_rt_lib0clear(&___nl__11);
#line 464
c_rt_lib0clear(&___nl__10);
#line 465
goto label_128;
#line 465
label_128:
#line 465
c_rt_lib0clear(&___nl__9);
#line 466
c_rt_lib0copy(&___nl__9, *___ref___2);
#line 467
c_rt_lib0move(&___nl__10, c_rt_lib0get_true());
#line 468
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 469
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 469
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 469
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__5));
#line 469
label_136:
#line 469
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 469
if(c_rt_lib0check_true_native(___nl__16)){ goto label_301;}
#line 469
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__5, ___nl__13));
#line 470
c_rt_lib0copy(&___nl__17, *___ref___2);
#line 471
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(839)));
#line 471
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__18, ___get_global_const(93)));
#line 473
c_rt_lib0move(&___nl__19, hash0has_key(___nl__11, ___nl__18));
#line 473
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 473
if(c_rt_lib0check_true_native(___nl__19)){ goto label_151;}
#line 472
c_rt_lib0move(&___nl__20,___get_global_const(1187));
#line 472
c_rt_lib0move(&___nl__20, c_rt_lib0concat_add(___nl__20, ___nl__18));
#line 472
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__20));
#line 472
c_rt_lib0clear(&___nl__20);
#line 472
goto label_151;
#line 472
label_151:
#line 472
c_rt_lib0clear(&___nl__19);
#line 474
c_rt_lib0move(&___nl__19,___get_global_const(1));
#line 474
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__18, ___nl__19));
#line 474
c_rt_lib0clear(&___nl__19);
#line 475
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(839)));
#line 475
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__19, ___get_global_const(192)));
#line 475
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(192)));
#line 475
if(c_rt_lib0check_true_native(___nl__20)){ goto label_165;}
#line 490
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(41)));
#line 490
if(c_rt_lib0check_true_native(___nl__20)){ goto label_232;}
#line 490
c_rt_lib0move(&___nl__20,___get_global_const(91));
#line 490
c_rt_lib0move(&___nl__20, c_rt_lib0array_mk(2, ___nl__20, ___nl__19));
#line 490
nl_die_arg(___nl__20);
#line 475
label_165:
#line 475
c_rt_lib0move(&___nl__21, c_rt_lib0priv_as(___nl__19, ___get_global_const(192)));
#line 476
c_rt_lib0delete(type_checker_priv0check_var_decl(___nl__21, ___ref___1, &___nl__17, ___ref___3));
#line 478
c_rt_lib0copy(&___nl__23, ___nl__6);
#line 478
c_rt_lib0move(&___nl__23, c_rt_lib0not(___nl__23));
#line 478
if(c_rt_lib0check_true_native(___nl__23)){ goto label_214;}
#line 479
c_rt_lib0move(&___nl__24, hash0has_key(___nl__8, ___nl__18));
#line 479
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 479
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 479
if(c_rt_lib0check_true_native(___nl__24)){ goto label_185;}
#line 479
c_rt_lib0clear(&___nl__17);
#line 479
c_rt_lib0clear(&___nl__18);
#line 479
c_rt_lib0clear(&___nl__19);
#line 479
c_rt_lib0clear(&___nl__20);
#line 479
c_rt_lib0clear(&___nl__21);
#line 479
c_rt_lib0clear(&___nl__22);
#line 479
c_rt_lib0clear(&___nl__23);
#line 479
c_rt_lib0clear(&___nl__24);
#line 479
goto label_298;
#line 479
goto label_185;
#line 479
label_185:
#line 479
c_rt_lib0clear(&___nl__24);
#line 480
c_rt_lib0move(&___nl__24, hash0has_key(___nl__7, ___nl__18));
#line 480
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 480
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 480
if(c_rt_lib0check_true_native(___nl__24)){ goto label_208;}
#line 481
c_rt_lib0move(&___nl__25,___get_global_const(1188));
#line 481
c_rt_lib0move(&___nl__25, c_rt_lib0concat_add(___nl__25, ___nl__18));
#line 481
c_rt_lib0move(&___nl__26,___get_global_const(1189));
#line 481
c_rt_lib0move(&___nl__25, c_rt_lib0concat_add(___nl__25, ___nl__26));
#line 481
c_rt_lib0clear(&___nl__26);
#line 481
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__25));
#line 481
c_rt_lib0clear(&___nl__25);
#line 482
c_rt_lib0clear(&___nl__17);
#line 482
c_rt_lib0clear(&___nl__18);
#line 482
c_rt_lib0clear(&___nl__19);
#line 482
c_rt_lib0clear(&___nl__20);
#line 482
c_rt_lib0clear(&___nl__21);
#line 482
c_rt_lib0clear(&___nl__22);
#line 482
c_rt_lib0clear(&___nl__23);
#line 482
c_rt_lib0clear(&___nl__24);
#line 482
goto label_298;
#line 483
goto label_208;
#line 483
label_208:
#line 483
c_rt_lib0clear(&___nl__24);
#line 484
c_rt_lib0move(&___nl__24, hash0get_value(___nl__7, ___nl__18));
#line 484
c_rt_lib0copy(&___nl__22, ___nl__24);
#line 484
c_rt_lib0clear(&___nl__24);
#line 485
goto label_219;
#line 485
label_214:
#line 486
c_rt_lib0move(&___nl__24, tct0tct_im());
#line 486
c_rt_lib0copy(&___nl__22, ___nl__24);
#line 486
c_rt_lib0clear(&___nl__24);
#line 487
goto label_219;
#line 487
label_219:
#line 487
c_rt_lib0clear(&___nl__23);
#line 488
c_rt_lib0move(&___nl__23, tct0tct_im());
#line 488
c_rt_lib0move(&___nl__24, c_rt_lib0hash_get_value_dec(___nl__21, ___get_global_const(93)));
#line 488
c_rt_lib0delete(type_checker_priv0add_var_decl_to_vars(___nl__23, ___nl__24, &___nl__17));
#line 488
c_rt_lib0clear(&___nl__24);
#line 488
c_rt_lib0clear(&___nl__23);
#line 489
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__21, ___get_global_const(93)));
#line 489
c_rt_lib0delete(type_checker_priv0set_type_to_variable(&___nl__17, ___nl__23, ___nl__22));
#line 489
c_rt_lib0clear(&___nl__23);
#line 489
c_rt_lib0clear(&___nl__22);
#line 489
c_rt_lib0clear(&___nl__21);
#line 490
goto label_247;
#line 490
label_232:
#line 491
c_rt_lib0move(&___nl__21, hash0has_key(___nl__7, ___nl__18));
#line 491
c_rt_lib0move(&___nl__21, c_rt_lib0not(___nl__21));
#line 491
if(c_rt_lib0check_true_native(___nl__21)){ goto label_244;}
#line 492
c_rt_lib0move(&___nl__22,___get_global_const(1188));
#line 492
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__18));
#line 492
c_rt_lib0move(&___nl__23,___get_global_const(1190));
#line 492
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__23));
#line 492
c_rt_lib0clear(&___nl__23);
#line 492
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__22));
#line 492
c_rt_lib0clear(&___nl__22);
#line 493
goto label_244;
#line 493
label_244:
#line 493
c_rt_lib0clear(&___nl__21);
#line 494
goto label_247;
#line 494
label_247:
#line 494
c_rt_lib0clear(&___nl__19);
#line 494
c_rt_lib0clear(&___nl__20);
#line 495
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(201)));
#line 495
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__19, ___ref___1, &___nl__17, ___ref___3));
#line 495
c_rt_lib0clear(&___nl__19);
#line 496
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(839)));
#line 496
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__19, ___get_global_const(192)));
#line 496
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(192)));
#line 496
if(c_rt_lib0check_true_native(___nl__20)){ goto label_262;}
#line 498
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(41)));
#line 498
if(c_rt_lib0check_true_native(___nl__20)){ goto label_278;}
#line 498
c_rt_lib0move(&___nl__20,___get_global_const(91));
#line 498
c_rt_lib0move(&___nl__20, c_rt_lib0array_mk(2, ___nl__20, ___nl__19));
#line 498
nl_die_arg(___nl__20);
#line 496
label_262:
#line 496
c_rt_lib0move(&___nl__21, c_rt_lib0priv_as(___nl__19, ___get_global_const(192)));
#line 497
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__21, ___get_global_const(93)));
#line 497
c_rt_lib0move(&___nl__22, hash0has_key(___nl__9, ___nl__23));
#line 497
c_rt_lib0clear(&___nl__23);
#line 497
c_rt_lib0move(&___nl__22, c_rt_lib0not(___nl__22));
#line 497
c_rt_lib0move(&___nl__22, c_rt_lib0not(___nl__22));
#line 497
if(c_rt_lib0check_true_native(___nl__22)){ goto label_274;}
#line 497
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__21, ___get_global_const(93)));
#line 497
c_rt_lib0delete(hash0delete(&___nl__17, ___nl__23));
#line 497
c_rt_lib0clear(&___nl__23);
#line 497
goto label_274;
#line 497
label_274:
#line 497
c_rt_lib0clear(&___nl__22);
#line 497
c_rt_lib0clear(&___nl__21);
#line 498
goto label_280;
#line 498
label_278:
#line 499
goto label_280;
#line 499
label_280:
#line 499
c_rt_lib0clear(&___nl__19);
#line 499
c_rt_lib0clear(&___nl__20);
#line 500
c_rt_lib0copy(&___nl__19, ___nl__10);
#line 500
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 500
if(c_rt_lib0check_true_native(___nl__19)){ goto label_288;}
#line 501
c_rt_lib0copy(&___nl__9, ___nl__17);
#line 502
goto label_291;
#line 502
label_288:
#line 503
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__17, ___ref___1, ___ref___3));
#line 504
goto label_291;
#line 504
label_291:
#line 504
c_rt_lib0clear(&___nl__19);
#line 505
c_rt_lib0move(&___nl__19, c_rt_lib0get_false());
#line 505
c_rt_lib0copy(&___nl__10, ___nl__19);
#line 505
c_rt_lib0clear(&___nl__19);
#line 505
c_rt_lib0clear(&___nl__17);
#line 505
c_rt_lib0clear(&___nl__18);
#line 505
label_298:
#line 506
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 506
goto label_136;
#line 506
label_301:
#line 506
c_rt_lib0clear(&___nl__12);
#line 506
c_rt_lib0clear(&___nl__13);
#line 506
c_rt_lib0clear(&___nl__14);
#line 506
c_rt_lib0clear(&___nl__15);
#line 506
c_rt_lib0clear(&___nl__16);
#line 507
c_rt_lib0copy(___ref___2, ___nl__9);
#line 507
c_rt_lib0clear(&___nl__4);
#line 507
c_rt_lib0clear(&___nl__5);
#line 507
c_rt_lib0clear(&___nl__6);
#line 507
c_rt_lib0clear(&___nl__7);
#line 507
c_rt_lib0clear(&___nl__8);
#line 507
c_rt_lib0clear(&___nl__9);
#line 507
c_rt_lib0clear(&___nl__10);
#line 507
c_rt_lib0clear(&___nl__11);
#line 507
c_rt_lib0clear(&___nl__0);
#line 507
return NULL;
}

ImmT type_checker_priv0check_val(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
#line 512
c_rt_lib0move(&___nl__4, tc_types0get_default_type());
#line 513
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 513
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(852)));
#line 513
if(c_rt_lib0check_true_native(___nl__6)){ goto label_39;}
#line 529
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(854)));
#line 529
if(c_rt_lib0check_true_native(___nl__6)){ goto label_101;}
#line 531
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(829)));
#line 531
if(c_rt_lib0check_true_native(___nl__6)){ goto label_110;}
#line 533
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(853)));
#line 533
if(c_rt_lib0check_true_native(___nl__6)){ goto label_117;}
#line 535
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(839)));
#line 535
if(c_rt_lib0check_true_native(___nl__6)){ goto label_129;}
#line 549
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(196)));
#line 549
if(c_rt_lib0check_true_native(___nl__6)){ goto label_195;}
#line 551
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(204)));
#line 551
if(c_rt_lib0check_true_native(___nl__6)){ goto label_204;}
#line 566
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(205)));
#line 566
if(c_rt_lib0check_true_native(___nl__6)){ goto label_279;}
#line 578
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(847)));
#line 578
if(c_rt_lib0check_true_native(___nl__6)){ goto label_331;}
#line 589
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(208)));
#line 589
if(c_rt_lib0check_true_native(___nl__6)){ goto label_402;}
#line 591
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(855)));
#line 591
if(c_rt_lib0check_true_native(___nl__6)){ goto label_414;}
#line 624
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(856)));
#line 624
if(c_rt_lib0check_true_native(___nl__6)){ goto label_595;}
#line 650
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(857)));
#line 650
if(c_rt_lib0check_true_native(___nl__6)){ goto label_750;}
#line 653
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(810)));
#line 653
if(c_rt_lib0check_true_native(___nl__6)){ goto label_764;}
#line 655
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(769)));
#line 655
if(c_rt_lib0check_true_native(___nl__6)){ goto label_771;}
#line 657
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(858)));
#line 657
if(c_rt_lib0check_true_native(___nl__6)){ goto label_780;}
#line 659
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(859)));
#line 659
if(c_rt_lib0check_true_native(___nl__6)){ goto label_794;}
#line 659
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 659
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 659
nl_die_arg(___nl__6);
#line 513
label_39:
#line 513
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(852)));
#line 514
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(860)));
#line 514
c_rt_lib0move(&___nl__8, type_checker_priv0check_val(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 514
c_rt_lib0clear(&___nl__9);
#line 517
c_rt_lib0move(&___nl__9, ptd_system0is_condition_type(___nl__8, ___ref___1, ___ref___3));
#line 517
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 517
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 517
if(c_rt_lib0check_true_native(___nl__9)){ goto label_57;}
#line 515
c_rt_lib0move(&___nl__10,___get_global_const(1191));
#line 516
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 516
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 516
c_rt_lib0clear(&___nl__12);
#line 516
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 516
c_rt_lib0clear(&___nl__11);
#line 516
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 516
c_rt_lib0clear(&___nl__10);
#line 516
goto label_57;
#line 516
label_57:
#line 516
c_rt_lib0clear(&___nl__9);
#line 518
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(861)));
#line 518
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 518
c_rt_lib0clear(&___nl__10);
#line 518
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 519
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 519
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(801)));
#line 519
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 519
if(c_rt_lib0check_true_native(___nl__10)){ goto label_71;}
#line 520
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 520
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__11);
#line 520
c_rt_lib0clear(&___nl__11);
#line 521
goto label_95;
#line 521
label_71:
#line 522
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(862)));
#line 522
c_rt_lib0move(&___nl__11, type_checker_priv0check_val(___nl__12, ___ref___1, ___ref___2, ___ref___3));
#line 522
c_rt_lib0clear(&___nl__12);
#line 522
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(63)));
#line 523
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 523
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(801)));
#line 523
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 523
if(c_rt_lib0check_true_native(___nl__12)){ goto label_84;}
#line 524
c_rt_lib0copy(&___nl__13, ___nl__11);
#line 524
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__13);
#line 524
c_rt_lib0clear(&___nl__13);
#line 525
goto label_91;
#line 525
label_84:
#line 526
c_rt_lib0move(&___nl__13, ptd_system0cross_type(___nl__9, ___nl__11, ___ref___1, ___ref___3));
#line 526
c_rt_lib0copy(&___nl__14, ___nl__13);
#line 526
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__14);
#line 526
c_rt_lib0clear(&___nl__13);
#line 526
c_rt_lib0clear(&___nl__14);
#line 527
goto label_91;
#line 527
label_91:
#line 527
c_rt_lib0clear(&___nl__12);
#line 527
c_rt_lib0clear(&___nl__11);
#line 528
goto label_95;
#line 528
label_95:
#line 528
c_rt_lib0clear(&___nl__10);
#line 528
c_rt_lib0clear(&___nl__8);
#line 528
c_rt_lib0clear(&___nl__9);
#line 528
c_rt_lib0clear(&___nl__7);
#line 529
goto label_808;
#line 529
label_101:
#line 529
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(854)));
#line 530
c_rt_lib0move(&___nl__8, tct0sim());
#line 530
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 530
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__9);
#line 530
c_rt_lib0clear(&___nl__8);
#line 530
c_rt_lib0clear(&___nl__9);
#line 530
c_rt_lib0clear(&___nl__7);
#line 531
goto label_808;
#line 531
label_110:
#line 532
c_rt_lib0move(&___nl__7, tct0empty());
#line 532
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 532
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__8);
#line 532
c_rt_lib0clear(&___nl__7);
#line 532
c_rt_lib0clear(&___nl__8);
#line 533
goto label_808;
#line 533
label_117:
#line 533
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(853)));
#line 534
c_rt_lib0move(&___nl__8, type_checker_priv0check_val(___nl__7, ___ref___1, ___ref___2, ___ref___3));
#line 534
c_rt_lib0clear(&___nl__0);
#line 534
c_rt_lib0clear(&___nl__4);
#line 534
c_rt_lib0clear(&___nl__5);
#line 534
c_rt_lib0clear(&___nl__6);
#line 534
c_rt_lib0clear(&___nl__7);
#line 534
return ___nl__8;
#line 534
c_rt_lib0clear(&___nl__8);
#line 534
c_rt_lib0clear(&___nl__7);
#line 535
goto label_808;
#line 535
label_129:
#line 535
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(839)));
#line 536
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(93)));
#line 536
c_rt_lib0move(&___nl__9,___get_global_const(7));
#line 536
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__9));
#line 536
c_rt_lib0clear(&___nl__9);
#line 536
if(c_rt_lib0check_true_native(___nl__8)){ goto label_140;}
#line 536
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(93)));
#line 536
c_rt_lib0move(&___nl__9,___get_global_const(8));
#line 536
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__9));
#line 536
c_rt_lib0clear(&___nl__9);
#line 536
label_140:
#line 536
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 536
if(c_rt_lib0check_true_native(___nl__8)){ goto label_155;}
#line 537
c_rt_lib0move(&___nl__9, tct0bool());
#line 537
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 537
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__10);
#line 537
c_rt_lib0clear(&___nl__9);
#line 537
c_rt_lib0clear(&___nl__10);
#line 538
c_rt_lib0clear(&___nl__0);
#line 538
c_rt_lib0clear(&___nl__5);
#line 538
c_rt_lib0clear(&___nl__6);
#line 538
c_rt_lib0clear(&___nl__7);
#line 538
c_rt_lib0clear(&___nl__8);
#line 538
return ___nl__4;
#line 539
goto label_155;
#line 539
label_155:
#line 539
c_rt_lib0clear(&___nl__8);
#line 540
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 541
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(847)));
#line 541
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(192)));
#line 541
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(829)));
#line 541
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 541
if(c_rt_lib0check_true_native(___nl__9)){ goto label_169;}
#line 542
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(93)));
#line 542
c_rt_lib0move(&___nl__11, tct0none());
#line 542
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__10, ___nl__11));
#line 542
c_rt_lib0clear(&___nl__11);
#line 542
c_rt_lib0clear(&___nl__10);
#line 543
goto label_185;
#line 543
label_169:
#line 544
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(847)));
#line 544
c_rt_lib0move(&___nl__10, type_checker_priv0check_val(___nl__11, ___ref___1, ___ref___2, ___ref___3));
#line 544
c_rt_lib0clear(&___nl__11);
#line 545
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(93)));
#line 545
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(63)));
#line 545
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__11, ___nl__12));
#line 545
c_rt_lib0clear(&___nl__12);
#line 545
c_rt_lib0clear(&___nl__11);
#line 546
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(43)));
#line 546
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 546
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(43), ___nl__12);
#line 546
c_rt_lib0clear(&___nl__11);
#line 546
c_rt_lib0clear(&___nl__12);
#line 546
c_rt_lib0clear(&___nl__10);
#line 547
goto label_185;
#line 547
label_185:
#line 547
c_rt_lib0clear(&___nl__9);
#line 548
c_rt_lib0move(&___nl__9, tct0var(___nl__8));
#line 548
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 548
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__10);
#line 548
c_rt_lib0clear(&___nl__9);
#line 548
c_rt_lib0clear(&___nl__10);
#line 548
c_rt_lib0clear(&___nl__8);
#line 548
c_rt_lib0clear(&___nl__7);
#line 549
goto label_808;
#line 549
label_195:
#line 549
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(196)));
#line 550
c_rt_lib0move(&___nl__8, tct0sim());
#line 550
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 550
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__9);
#line 550
c_rt_lib0clear(&___nl__8);
#line 550
c_rt_lib0clear(&___nl__9);
#line 550
c_rt_lib0clear(&___nl__7);
#line 551
goto label_808;
#line 551
label_204:
#line 551
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(204)));
#line 552
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 552
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 552
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__8, ___nl__9));
#line 552
c_rt_lib0clear(&___nl__9);
#line 552
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 552
if(c_rt_lib0check_true_native(___nl__8)){ goto label_226;}
#line 553
c_rt_lib0move(&___nl__10, tct0empty());
#line 553
c_rt_lib0move(&___nl__9, tct0arr(___nl__10));
#line 553
c_rt_lib0clear(&___nl__10);
#line 553
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 553
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__10);
#line 553
c_rt_lib0clear(&___nl__9);
#line 553
c_rt_lib0clear(&___nl__10);
#line 554
c_rt_lib0clear(&___nl__0);
#line 554
c_rt_lib0clear(&___nl__5);
#line 554
c_rt_lib0clear(&___nl__6);
#line 554
c_rt_lib0clear(&___nl__7);
#line 554
c_rt_lib0clear(&___nl__8);
#line 554
return ___nl__4;
#line 555
goto label_226;
#line 555
label_226:
#line 555
c_rt_lib0clear(&___nl__8);
#line 556
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 557
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 557
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 557
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__7));
#line 557
label_232:
#line 557
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 557
if(c_rt_lib0check_true_native(___nl__13)){ goto label_241;}
#line 557
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 558
c_rt_lib0move(&___nl__14, type_checker_priv0check_val(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 559
c_rt_lib0delete(array0push(&___nl__8, ___nl__14));
#line 559
c_rt_lib0clear(&___nl__14);
#line 560
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 560
goto label_232;
#line 560
label_241:
#line 560
c_rt_lib0clear(&___nl__9);
#line 560
c_rt_lib0clear(&___nl__10);
#line 560
c_rt_lib0clear(&___nl__11);
#line 560
c_rt_lib0clear(&___nl__12);
#line 560
c_rt_lib0clear(&___nl__13);
#line 561
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 561
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 561
c_rt_lib0clear(&___nl__10);
#line 561
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 562
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 562
label_252:
#line 562
c_rt_lib0move(&___nl__11, array0len(___nl__8));
#line 562
c_rt_lib0move(&___nl__11, c_rt_lib0lt(___nl__10, ___nl__11));
#line 562
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 562
if(c_rt_lib0check_true_native(___nl__11)){ goto label_267;}
#line 563
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 563
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(63)));
#line 563
c_rt_lib0move(&___nl__12, ptd_system0cross_type(___nl__9, ___nl__13, ___ref___1, ___ref___3));
#line 563
c_rt_lib0clear(&___nl__13);
#line 563
c_rt_lib0copy(&___nl__9, ___nl__12);
#line 563
c_rt_lib0clear(&___nl__12);
#line 562
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 562
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__12));
#line 562
c_rt_lib0clear(&___nl__12);
#line 564
goto label_252;
#line 564
label_267:
#line 564
c_rt_lib0clear(&___nl__10);
#line 564
c_rt_lib0clear(&___nl__11);
#line 565
c_rt_lib0move(&___nl__10, tct0arr(___nl__9));
#line 565
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 565
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__11);
#line 565
c_rt_lib0clear(&___nl__10);
#line 565
c_rt_lib0clear(&___nl__11);
#line 565
c_rt_lib0clear(&___nl__8);
#line 565
c_rt_lib0clear(&___nl__9);
#line 565
c_rt_lib0clear(&___nl__7);
#line 566
goto label_808;
#line 566
label_279:
#line 566
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(205)));
#line 567
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 568
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 568
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 568
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__7));
#line 568
label_285:
#line 568
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 568
if(c_rt_lib0check_true_native(___nl__13)){ goto label_300;}
#line 568
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 569
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(329)));
#line 569
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(192)));
#line 569
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__14, ___get_global_const(854)));
#line 570
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(198)));
#line 570
c_rt_lib0move(&___nl__15, type_checker_priv0check_val(___nl__16, ___ref___1, ___ref___2, ___ref___3));
#line 570
c_rt_lib0clear(&___nl__16);
#line 571
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__14, ___nl__15));
#line 571
c_rt_lib0clear(&___nl__14);
#line 571
c_rt_lib0clear(&___nl__15);
#line 572
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 572
goto label_285;
#line 572
label_300:
#line 572
c_rt_lib0clear(&___nl__9);
#line 572
c_rt_lib0clear(&___nl__10);
#line 572
c_rt_lib0clear(&___nl__11);
#line 572
c_rt_lib0clear(&___nl__12);
#line 572
c_rt_lib0clear(&___nl__13);
#line 573
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 574
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__8));
#line 574
label_308:
#line 574
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 574
if(c_rt_lib0check_true_native(___nl__10)){ goto label_318;}
#line 574
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 574
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__8, ___nl__10));
#line 575
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(63)));
#line 575
c_rt_lib0delete(hash0set_value(&___nl__9, ___nl__10, ___nl__13));
#line 575
c_rt_lib0clear(&___nl__13);
#line 576
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 576
goto label_308;
#line 576
label_318:
#line 576
c_rt_lib0clear(&___nl__10);
#line 576
c_rt_lib0clear(&___nl__11);
#line 576
c_rt_lib0clear(&___nl__12);
#line 577
c_rt_lib0move(&___nl__10, tct0rec(___nl__9));
#line 577
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 577
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__11);
#line 577
c_rt_lib0clear(&___nl__10);
#line 577
c_rt_lib0clear(&___nl__11);
#line 577
c_rt_lib0clear(&___nl__8);
#line 577
c_rt_lib0clear(&___nl__9);
#line 577
c_rt_lib0clear(&___nl__7);
#line 578
goto label_808;
#line 578
label_331:
#line 578
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(847)));
#line 579
c_rt_lib0move(&___nl__8, hash0has_key(*___ref___2, ___nl__7));
#line 579
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 579
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 579
if(c_rt_lib0check_true_native(___nl__8)){ goto label_351;}
#line 580
c_rt_lib0move(&___nl__9,___get_global_const(1192));
#line 580
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__7));
#line 580
c_rt_lib0move(&___nl__10,___get_global_const(1093));
#line 580
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 580
c_rt_lib0clear(&___nl__10);
#line 580
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 580
c_rt_lib0clear(&___nl__9);
#line 581
c_rt_lib0clear(&___nl__0);
#line 581
c_rt_lib0clear(&___nl__5);
#line 581
c_rt_lib0clear(&___nl__6);
#line 581
c_rt_lib0clear(&___nl__7);
#line 581
c_rt_lib0clear(&___nl__8);
#line 581
return ___nl__4;
#line 582
goto label_351;
#line 582
label_351:
#line 582
c_rt_lib0clear(&___nl__8);
#line 583
c_rt_lib0move(&___nl__8, hash0get_value(*___ref___2, ___nl__7));
#line 584
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1137)));
#line 584
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(45)));
#line 584
if(c_rt_lib0check_true_native(___nl__10)){ goto label_362;}
#line 586
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(46)));
#line 586
if(c_rt_lib0check_true_native(___nl__10)){ goto label_379;}
#line 586
c_rt_lib0move(&___nl__10,___get_global_const(91));
#line 586
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 586
nl_die_arg(___nl__10);
#line 584
label_362:
#line 585
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 585
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_none(___get_global_const(1083)));
#line 585
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__12, ___get_global_const(43), ___nl__13));
#line 585
c_rt_lib0clear(&___nl__12);
#line 585
c_rt_lib0clear(&___nl__13);
#line 585
c_rt_lib0clear(&___nl__0);
#line 585
c_rt_lib0clear(&___nl__4);
#line 585
c_rt_lib0clear(&___nl__5);
#line 585
c_rt_lib0clear(&___nl__6);
#line 585
c_rt_lib0clear(&___nl__7);
#line 585
c_rt_lib0clear(&___nl__8);
#line 585
c_rt_lib0clear(&___nl__9);
#line 585
c_rt_lib0clear(&___nl__10);
#line 585
return ___nl__11;
#line 585
c_rt_lib0clear(&___nl__11);
#line 586
goto label_396;
#line 586
label_379:
#line 587
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 587
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_none(___get_global_const(1077)));
#line 587
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__12, ___get_global_const(43), ___nl__13));
#line 587
c_rt_lib0clear(&___nl__12);
#line 587
c_rt_lib0clear(&___nl__13);
#line 587
c_rt_lib0clear(&___nl__0);
#line 587
c_rt_lib0clear(&___nl__4);
#line 587
c_rt_lib0clear(&___nl__5);
#line 587
c_rt_lib0clear(&___nl__6);
#line 587
c_rt_lib0clear(&___nl__7);
#line 587
c_rt_lib0clear(&___nl__8);
#line 587
c_rt_lib0clear(&___nl__9);
#line 587
c_rt_lib0clear(&___nl__10);
#line 587
return ___nl__11;
#line 587
c_rt_lib0clear(&___nl__11);
#line 588
goto label_396;
#line 588
label_396:
#line 588
c_rt_lib0clear(&___nl__9);
#line 588
c_rt_lib0clear(&___nl__10);
#line 588
c_rt_lib0clear(&___nl__8);
#line 588
c_rt_lib0clear(&___nl__7);
#line 589
goto label_808;
#line 589
label_402:
#line 589
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(208)));
#line 590
c_rt_lib0move(&___nl__8, type_checker_priv0get_type_from_bin_op_and_check(___nl__7, ___ref___1, ___ref___2, ___ref___3));
#line 590
c_rt_lib0clear(&___nl__0);
#line 590
c_rt_lib0clear(&___nl__4);
#line 590
c_rt_lib0clear(&___nl__5);
#line 590
c_rt_lib0clear(&___nl__6);
#line 590
c_rt_lib0clear(&___nl__7);
#line 590
return ___nl__8;
#line 590
c_rt_lib0clear(&___nl__8);
#line 590
c_rt_lib0clear(&___nl__7);
#line 591
goto label_808;
#line 591
label_414:
#line 591
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(855)));
#line 592
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(230)));
#line 592
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 592
c_rt_lib0clear(&___nl__10);
#line 592
c_rt_lib0move(&___nl__8, ptd_system0can_delete(___nl__9, ___ref___1, ___ref___3));
#line 592
c_rt_lib0clear(&___nl__9);
#line 595
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 595
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(209)));
#line 595
if(c_rt_lib0check_true_native(___nl__11)){ goto label_429;}
#line 597
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(210)));
#line 597
if(c_rt_lib0check_true_native(___nl__11)){ goto label_438;}
#line 597
c_rt_lib0move(&___nl__11,___get_global_const(91));
#line 597
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 597
nl_die_arg(___nl__11);
#line 595
label_429:
#line 596
c_rt_lib0move(&___nl__13, tct0bool());
#line 596
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_none(___get_global_const(1083)));
#line 596
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__13, ___get_global_const(43), ___nl__14));
#line 596
c_rt_lib0clear(&___nl__13);
#line 596
c_rt_lib0clear(&___nl__14);
#line 596
c_rt_lib0copy(&___nl__9, ___nl__12);
#line 596
c_rt_lib0clear(&___nl__12);
#line 597
goto label_447;
#line 597
label_438:
#line 598
c_rt_lib0move(&___nl__13, tct0tct_im());
#line 598
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(43)));
#line 598
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__13, ___get_global_const(43), ___nl__14));
#line 598
c_rt_lib0clear(&___nl__13);
#line 598
c_rt_lib0clear(&___nl__14);
#line 598
c_rt_lib0copy(&___nl__9, ___nl__12);
#line 598
c_rt_lib0clear(&___nl__12);
#line 599
goto label_447;
#line 599
label_447:
#line 599
c_rt_lib0clear(&___nl__10);
#line 599
c_rt_lib0clear(&___nl__11);
#line 600
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 600
c_rt_lib0move(&___nl__11, tct0var(___nl__12));
#line 600
c_rt_lib0clear(&___nl__12);
#line 600
c_rt_lib0move(&___nl__10, ptd_system0is_accepted(___nl__8, ___nl__11, ___ref___1, ___ref___3));
#line 600
c_rt_lib0clear(&___nl__11);
#line 600
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 600
if(c_rt_lib0check_true_native(___nl__10)){ goto label_571;}
#line 601
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 601
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(803)));
#line 601
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 601
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 601
if(c_rt_lib0check_true_native(___nl__11)){ goto label_472;}
#line 601
c_rt_lib0clear(&___nl__0);
#line 601
c_rt_lib0clear(&___nl__4);
#line 601
c_rt_lib0clear(&___nl__5);
#line 601
c_rt_lib0clear(&___nl__6);
#line 601
c_rt_lib0clear(&___nl__7);
#line 601
c_rt_lib0clear(&___nl__8);
#line 601
c_rt_lib0clear(&___nl__10);
#line 601
c_rt_lib0clear(&___nl__11);
#line 601
return ___nl__9;
#line 601
goto label_472;
#line 601
label_472:
#line 601
c_rt_lib0clear(&___nl__11);
#line 602
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 602
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(803)));
#line 603
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(900)));
#line 603
c_rt_lib0move(&___nl__12, hash0has_key(___nl__11, ___nl__13));
#line 603
c_rt_lib0clear(&___nl__13);
#line 603
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 603
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 603
if(c_rt_lib0check_true_native(___nl__12)){ goto label_507;}
#line 604
c_rt_lib0move(&___nl__13,___get_global_const(416));
#line 604
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(900)));
#line 604
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 604
c_rt_lib0clear(&___nl__14);
#line 604
c_rt_lib0move(&___nl__14,___get_global_const(1193));
#line 604
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 604
c_rt_lib0clear(&___nl__14);
#line 605
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 605
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_tct_type_name(___nl__15));
#line 605
c_rt_lib0clear(&___nl__15);
#line 605
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 605
c_rt_lib0clear(&___nl__14);
#line 605
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__13));
#line 605
c_rt_lib0clear(&___nl__13);
#line 606
c_rt_lib0clear(&___nl__0);
#line 606
c_rt_lib0clear(&___nl__4);
#line 606
c_rt_lib0clear(&___nl__5);
#line 606
c_rt_lib0clear(&___nl__6);
#line 606
c_rt_lib0clear(&___nl__7);
#line 606
c_rt_lib0clear(&___nl__8);
#line 606
c_rt_lib0clear(&___nl__10);
#line 606
c_rt_lib0clear(&___nl__11);
#line 606
c_rt_lib0clear(&___nl__12);
#line 606
return ___nl__9;
#line 607
goto label_507;
#line 607
label_507:
#line 607
c_rt_lib0clear(&___nl__12);
#line 608
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 608
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__12, ___get_global_const(209)));
#line 608
if(c_rt_lib0check_true_native(___nl__13)){ goto label_517;}
#line 609
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__12, ___get_global_const(210)));
#line 609
if(c_rt_lib0check_true_native(___nl__13)){ goto label_519;}
#line 609
c_rt_lib0move(&___nl__13,___get_global_const(91));
#line 609
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(2, ___nl__13, ___nl__12));
#line 609
nl_die_arg(___nl__13);
#line 608
label_517:
#line 609
goto label_557;
#line 609
label_519:
#line 610
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(900)));
#line 610
c_rt_lib0move(&___nl__14, hash0get_value(___nl__11, ___nl__15));
#line 610
c_rt_lib0clear(&___nl__15);
#line 611
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__14, ___get_global_const(808)));
#line 611
if(c_rt_lib0check_true_native(___nl__15)){ goto label_530;}
#line 613
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__14, ___get_global_const(807)));
#line 613
if(c_rt_lib0check_true_native(___nl__15)){ goto label_537;}
#line 613
c_rt_lib0move(&___nl__15,___get_global_const(91));
#line 613
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(2, ___nl__15, ___nl__14));
#line 613
nl_die_arg(___nl__15);
#line 611
label_530:
#line 611
c_rt_lib0move(&___nl__16, c_rt_lib0priv_as(___nl__14, ___get_global_const(808)));
#line 612
c_rt_lib0copy(&___nl__17, ___nl__16);
#line 612
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(63), ___nl__17);
#line 612
c_rt_lib0clear(&___nl__17);
#line 612
c_rt_lib0clear(&___nl__16);
#line 613
goto label_553;
#line 613
label_537:
#line 614
c_rt_lib0move(&___nl__16,___get_global_const(416));
#line 614
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(900)));
#line 614
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 614
c_rt_lib0clear(&___nl__17);
#line 614
c_rt_lib0move(&___nl__17,___get_global_const(1194));
#line 614
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 614
c_rt_lib0clear(&___nl__17);
#line 615
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 615
c_rt_lib0move(&___nl__17, type_checker_priv0get_print_tct_type_name(___nl__18));
#line 615
c_rt_lib0clear(&___nl__18);
#line 615
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 615
c_rt_lib0clear(&___nl__17);
#line 615
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__16));
#line 615
c_rt_lib0clear(&___nl__16);
#line 616
goto label_553;
#line 616
label_553:
#line 616
c_rt_lib0clear(&___nl__15);
#line 616
c_rt_lib0clear(&___nl__14);
#line 617
goto label_557;
#line 617
label_557:
#line 617
c_rt_lib0clear(&___nl__12);
#line 617
c_rt_lib0clear(&___nl__13);
#line 618
c_rt_lib0clear(&___nl__0);
#line 618
c_rt_lib0clear(&___nl__4);
#line 618
c_rt_lib0clear(&___nl__5);
#line 618
c_rt_lib0clear(&___nl__6);
#line 618
c_rt_lib0clear(&___nl__7);
#line 618
c_rt_lib0clear(&___nl__8);
#line 618
c_rt_lib0clear(&___nl__10);
#line 618
c_rt_lib0clear(&___nl__11);
#line 618
return ___nl__9;
#line 618
c_rt_lib0clear(&___nl__11);
#line 619
goto label_589;
#line 619
label_571:
#line 620
c_rt_lib0move(&___nl__11,___get_global_const(1195));
#line 621
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 621
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 621
c_rt_lib0clear(&___nl__13);
#line 621
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 621
c_rt_lib0clear(&___nl__12);
#line 621
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 621
c_rt_lib0clear(&___nl__11);
#line 622
c_rt_lib0clear(&___nl__0);
#line 622
c_rt_lib0clear(&___nl__4);
#line 622
c_rt_lib0clear(&___nl__5);
#line 622
c_rt_lib0clear(&___nl__6);
#line 622
c_rt_lib0clear(&___nl__7);
#line 622
c_rt_lib0clear(&___nl__8);
#line 622
c_rt_lib0clear(&___nl__10);
#line 622
return ___nl__9;
#line 623
goto label_589;
#line 623
label_589:
#line 623
c_rt_lib0clear(&___nl__10);
#line 623
c_rt_lib0clear(&___nl__8);
#line 623
c_rt_lib0clear(&___nl__9);
#line 623
c_rt_lib0clear(&___nl__7);
#line 624
goto label_808;
#line 624
label_595:
#line 624
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(856)));
#line 625
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(198)));
#line 625
c_rt_lib0move(&___nl__8, type_checker_priv0check_val(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 625
c_rt_lib0clear(&___nl__9);
#line 626
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 626
c_rt_lib0move(&___nl__10,___get_global_const(294));
#line 626
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__9, ___nl__10));
#line 626
c_rt_lib0clear(&___nl__10);
#line 626
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 626
if(c_rt_lib0check_true_native(___nl__9)){ goto label_634;}
#line 627
c_rt_lib0move(&___nl__10, ptd_system0is_condition_type(___nl__8, ___ref___1, ___ref___3));
#line 627
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 627
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 627
if(c_rt_lib0check_true_native(___nl__10)){ goto label_619;}
#line 628
c_rt_lib0move(&___nl__11,___get_global_const(1196));
#line 629
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 629
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 629
c_rt_lib0clear(&___nl__13);
#line 629
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 629
c_rt_lib0clear(&___nl__12);
#line 629
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 629
c_rt_lib0clear(&___nl__11);
#line 630
goto label_619;
#line 630
label_619:
#line 630
c_rt_lib0clear(&___nl__10);
#line 631
c_rt_lib0move(&___nl__10, tct0bool());
#line 631
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 631
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__11);
#line 631
c_rt_lib0clear(&___nl__10);
#line 631
c_rt_lib0clear(&___nl__11);
#line 632
c_rt_lib0clear(&___nl__0);
#line 632
c_rt_lib0clear(&___nl__5);
#line 632
c_rt_lib0clear(&___nl__6);
#line 632
c_rt_lib0clear(&___nl__7);
#line 632
c_rt_lib0clear(&___nl__8);
#line 632
c_rt_lib0clear(&___nl__9);
#line 632
return ___nl__4;
#line 633
goto label_740;
#line 633
label_634:
#line 633
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 633
c_rt_lib0move(&___nl__10,___get_global_const(267));
#line 633
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__9, ___nl__10));
#line 633
c_rt_lib0clear(&___nl__10);
#line 633
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 633
if(c_rt_lib0check_true_native(___nl__9)){ goto label_681;}
#line 634
c_rt_lib0move(&___nl__11, tct0func());
#line 634
c_rt_lib0move(&___nl__10, ptd_system0is_accepted(___nl__8, ___nl__11, ___ref___1, ___ref___3));
#line 634
c_rt_lib0clear(&___nl__11);
#line 634
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 634
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 634
if(c_rt_lib0check_true_native(___nl__10)){ goto label_662;}
#line 635
c_rt_lib0move(&___nl__11,___get_global_const(1197));
#line 635
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 635
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 635
c_rt_lib0clear(&___nl__12);
#line 635
c_rt_lib0move(&___nl__12,___get_global_const(1198));
#line 635
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 635
c_rt_lib0clear(&___nl__12);
#line 636
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 636
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 636
c_rt_lib0clear(&___nl__13);
#line 636
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 636
c_rt_lib0clear(&___nl__12);
#line 636
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 636
c_rt_lib0clear(&___nl__11);
#line 637
goto label_662;
#line 637
label_662:
#line 637
c_rt_lib0clear(&___nl__10);
#line 638
c_rt_lib0move(&___nl__12, tct0func());
#line 638
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(1, ___get_global_const(5), ___nl__12));
#line 638
c_rt_lib0clear(&___nl__12);
#line 638
c_rt_lib0move(&___nl__10, tct0var(___nl__11));
#line 638
c_rt_lib0clear(&___nl__11);
#line 638
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 638
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__11);
#line 638
c_rt_lib0clear(&___nl__10);
#line 638
c_rt_lib0clear(&___nl__11);
#line 639
c_rt_lib0clear(&___nl__0);
#line 639
c_rt_lib0clear(&___nl__5);
#line 639
c_rt_lib0clear(&___nl__6);
#line 639
c_rt_lib0clear(&___nl__7);
#line 639
c_rt_lib0clear(&___nl__8);
#line 639
c_rt_lib0clear(&___nl__9);
#line 639
return ___nl__4;
#line 640
goto label_740;
#line 640
label_681:
#line 640
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 640
c_rt_lib0move(&___nl__10,___get_global_const(165));
#line 640
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__9, ___nl__10));
#line 640
c_rt_lib0clear(&___nl__10);
#line 640
if(c_rt_lib0check_true_native(___nl__9)){ goto label_691;}
#line 640
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 640
c_rt_lib0move(&___nl__10,___get_global_const(878));
#line 640
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__9, ___nl__10));
#line 640
c_rt_lib0clear(&___nl__10);
#line 640
label_691:
#line 640
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 640
if(c_rt_lib0check_true_native(___nl__9)){ goto label_715;}
#line 641
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(198)));
#line 641
c_rt_lib0move(&___nl__12,___get_global_const(1197));
#line 641
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 641
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 641
c_rt_lib0clear(&___nl__13);
#line 641
c_rt_lib0move(&___nl__13,___get_global_const(1198));
#line 641
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 641
c_rt_lib0clear(&___nl__13);
#line 641
c_rt_lib0move(&___nl__10, type_checker_priv0unary_op_dec_inc(___nl__11, ___nl__12, ___ref___1, ___ref___2, ___ref___3));
#line 641
c_rt_lib0clear(&___nl__12);
#line 641
c_rt_lib0clear(&___nl__11);
#line 641
c_rt_lib0clear(&___nl__0);
#line 641
c_rt_lib0clear(&___nl__4);
#line 641
c_rt_lib0clear(&___nl__5);
#line 641
c_rt_lib0clear(&___nl__6);
#line 641
c_rt_lib0clear(&___nl__7);
#line 641
c_rt_lib0clear(&___nl__8);
#line 641
c_rt_lib0clear(&___nl__9);
#line 641
return ___nl__10;
#line 641
c_rt_lib0clear(&___nl__10);
#line 643
goto label_740;
#line 643
label_715:
#line 644
c_rt_lib0move(&___nl__11, tct0sim());
#line 644
c_rt_lib0move(&___nl__10, ptd_system0is_accepted(___nl__8, ___nl__11, ___ref___1, ___ref___3));
#line 644
c_rt_lib0clear(&___nl__11);
#line 644
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 644
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 644
if(c_rt_lib0check_true_native(___nl__10)){ goto label_737;}
#line 645
c_rt_lib0move(&___nl__11,___get_global_const(1197));
#line 645
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 645
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 645
c_rt_lib0clear(&___nl__12);
#line 645
c_rt_lib0move(&___nl__12,___get_global_const(1198));
#line 645
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 645
c_rt_lib0clear(&___nl__12);
#line 646
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 646
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 646
c_rt_lib0clear(&___nl__13);
#line 646
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 646
c_rt_lib0clear(&___nl__12);
#line 646
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 646
c_rt_lib0clear(&___nl__11);
#line 647
goto label_737;
#line 647
label_737:
#line 647
c_rt_lib0clear(&___nl__10);
#line 648
goto label_740;
#line 648
label_740:
#line 648
c_rt_lib0clear(&___nl__9);
#line 649
c_rt_lib0move(&___nl__9, tct0sim());
#line 649
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 649
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__10);
#line 649
c_rt_lib0clear(&___nl__9);
#line 649
c_rt_lib0clear(&___nl__10);
#line 649
c_rt_lib0clear(&___nl__8);
#line 649
c_rt_lib0clear(&___nl__7);
#line 650
goto label_808;
#line 650
label_750:
#line 650
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(857)));
#line 651
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(132)));
#line 651
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(93)));
#line 651
c_rt_lib0delete(type_checker_priv0check_function_exists(___nl__8, ___nl__9, ___ref___1, ___ref___3));
#line 651
c_rt_lib0clear(&___nl__9);
#line 651
c_rt_lib0clear(&___nl__8);
#line 652
c_rt_lib0move(&___nl__8, tct0func());
#line 652
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 652
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__9);
#line 652
c_rt_lib0clear(&___nl__8);
#line 652
c_rt_lib0clear(&___nl__9);
#line 652
c_rt_lib0clear(&___nl__7);
#line 653
goto label_808;
#line 653
label_764:
#line 653
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(810)));
#line 654
c_rt_lib0move(&___nl__8, type_checker_priv0check_fun_val(___nl__7, ___ref___1, ___ref___2, ___ref___3));
#line 654
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 654
c_rt_lib0clear(&___nl__8);
#line 654
c_rt_lib0clear(&___nl__7);
#line 655
goto label_808;
#line 655
label_771:
#line 655
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(769)));
#line 656
c_rt_lib0move(&___nl__8, tct0sim());
#line 656
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 656
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__9);
#line 656
c_rt_lib0clear(&___nl__8);
#line 656
c_rt_lib0clear(&___nl__9);
#line 656
c_rt_lib0clear(&___nl__7);
#line 657
goto label_808;
#line 657
label_780:
#line 657
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(858)));
#line 658
c_rt_lib0move(&___nl__9,___get_global_const(1199));
#line 658
c_rt_lib0move(&___nl__8, type_checker_priv0unary_op_dec_inc(___nl__7, ___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 658
c_rt_lib0clear(&___nl__9);
#line 658
c_rt_lib0clear(&___nl__0);
#line 658
c_rt_lib0clear(&___nl__4);
#line 658
c_rt_lib0clear(&___nl__5);
#line 658
c_rt_lib0clear(&___nl__6);
#line 658
c_rt_lib0clear(&___nl__7);
#line 658
return ___nl__8;
#line 658
c_rt_lib0clear(&___nl__8);
#line 658
c_rt_lib0clear(&___nl__7);
#line 659
goto label_808;
#line 659
label_794:
#line 659
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(859)));
#line 660
c_rt_lib0move(&___nl__9,___get_global_const(1200));
#line 660
c_rt_lib0move(&___nl__8, type_checker_priv0unary_op_dec_inc(___nl__7, ___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 660
c_rt_lib0clear(&___nl__9);
#line 660
c_rt_lib0clear(&___nl__0);
#line 660
c_rt_lib0clear(&___nl__4);
#line 660
c_rt_lib0clear(&___nl__5);
#line 660
c_rt_lib0clear(&___nl__6);
#line 660
c_rt_lib0clear(&___nl__7);
#line 660
return ___nl__8;
#line 660
c_rt_lib0clear(&___nl__8);
#line 660
c_rt_lib0clear(&___nl__7);
#line 661
goto label_808;
#line 661
label_808:
#line 661
c_rt_lib0clear(&___nl__5);
#line 661
c_rt_lib0clear(&___nl__6);
#line 662
c_rt_lib0clear(&___nl__0);
#line 662
return ___nl__4;
#line 662
c_rt_lib0clear(&___nl__4);
#line 662
c_rt_lib0clear(&___nl__0);
#line 662
return NULL;
}

ImmT type_checker_priv0check_fun_val(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
ImmT ___nl__20 = NULL;
ImmT ___nl__21 = NULL;
ImmT ___nl__22 = NULL;
ImmT ___nl__23 = NULL;
ImmT ___nl__24 = NULL;
ImmT ___nl__25 = NULL;
ImmT ___nl__26 = NULL;
#line 668
c_rt_lib0move(&___nl__4, tc_types0get_default_type());
#line 669
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 670
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 670
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 670
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 670
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 670
label_6:
#line 670
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 670
if(c_rt_lib0check_true_native(___nl__11)){ goto label_17;}
#line 670
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 671
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(198)));
#line 671
c_rt_lib0move(&___nl__12, type_checker_priv0check_val(___nl__13, ___ref___1, ___ref___2, ___ref___3));
#line 671
c_rt_lib0clear(&___nl__13);
#line 671
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 671
c_rt_lib0clear(&___nl__12);
#line 672
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 672
goto label_6;
#line 672
label_17:
#line 672
c_rt_lib0clear(&___nl__6);
#line 672
c_rt_lib0clear(&___nl__7);
#line 672
c_rt_lib0clear(&___nl__8);
#line 672
c_rt_lib0clear(&___nl__9);
#line 672
c_rt_lib0clear(&___nl__10);
#line 672
c_rt_lib0clear(&___nl__11);
#line 673
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 673
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 673
c_rt_lib0move(&___nl__6, type_checker_priv0get_special_function_def(___nl__7, ___nl__8));
#line 673
c_rt_lib0clear(&___nl__8);
#line 673
c_rt_lib0clear(&___nl__7);
#line 674
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 675
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(182)));
#line 675
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(183)));
#line 675
if(c_rt_lib0check_true_native(___nl__9)){ goto label_38;}
#line 681
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(377)));
#line 681
if(c_rt_lib0check_true_native(___nl__9)){ goto label_74;}
#line 681
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 681
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 681
nl_die_arg(___nl__9);
#line 675
label_38:
#line 676
c_rt_lib0move(&___nl__10, c_rt_lib0get_true());
#line 676
c_rt_lib0copy(&___nl__7, ___nl__10);
#line 676
c_rt_lib0clear(&___nl__10);
#line 677
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(382)));
#line 677
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 677
c_rt_lib0move(&___nl__10, hash0has_key(___nl__11, ___nl__12));
#line 677
c_rt_lib0clear(&___nl__12);
#line 677
c_rt_lib0clear(&___nl__11);
#line 677
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 677
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 677
if(c_rt_lib0check_true_native(___nl__10)){ goto label_71;}
#line 678
c_rt_lib0move(&___nl__11,___get_global_const(792));
#line 678
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 678
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 678
c_rt_lib0clear(&___nl__12);
#line 678
c_rt_lib0move(&___nl__12,___get_global_const(793));
#line 678
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 678
c_rt_lib0clear(&___nl__12);
#line 678
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 678
c_rt_lib0clear(&___nl__11);
#line 679
c_rt_lib0move(&___nl__11,___get_global_const(382));
#line 679
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___1, ___nl__11));
#line 679
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 679
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 679
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__12, ___nl__13));
#line 679
c_rt_lib0clear(&___nl__13);
#line 679
c_rt_lib0clear(&___nl__12);
#line 679
c_rt_lib0move(&___nl__12,___get_global_const(382));
#line 679
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__11));
#line 679
c_rt_lib0clear(&___nl__12);
#line 679
c_rt_lib0clear(&___nl__11);
#line 680
goto label_71;
#line 680
label_71:
#line 680
c_rt_lib0clear(&___nl__10);
#line 681
goto label_102;
#line 681
label_74:
#line 682
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 682
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 682
c_rt_lib0move(&___nl__10, type_checker_priv0check_function_exists(___nl__11, ___nl__12, ___ref___1, ___ref___3));
#line 682
c_rt_lib0clear(&___nl__12);
#line 682
c_rt_lib0clear(&___nl__11);
#line 682
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 682
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 682
if(c_rt_lib0check_true_native(___nl__10)){ goto label_92;}
#line 682
c_rt_lib0clear(&___nl__0);
#line 682
c_rt_lib0clear(&___nl__5);
#line 682
c_rt_lib0clear(&___nl__6);
#line 682
c_rt_lib0clear(&___nl__7);
#line 682
c_rt_lib0clear(&___nl__8);
#line 682
c_rt_lib0clear(&___nl__9);
#line 682
c_rt_lib0clear(&___nl__10);
#line 682
return ___nl__4;
#line 682
goto label_92;
#line 682
label_92:
#line 682
c_rt_lib0clear(&___nl__10);
#line 683
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 683
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 683
c_rt_lib0move(&___nl__10, type_checker_priv0get_function_def(___nl__11, ___nl__12, *___ref___1));
#line 683
c_rt_lib0clear(&___nl__12);
#line 683
c_rt_lib0clear(&___nl__11);
#line 683
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 683
c_rt_lib0clear(&___nl__10);
#line 684
goto label_102;
#line 684
label_102:
#line 684
c_rt_lib0clear(&___nl__8);
#line 684
c_rt_lib0clear(&___nl__9);
#line 685
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 685
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 685
c_rt_lib0clear(&___nl__9);
#line 685
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(89)));
#line 685
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 685
c_rt_lib0clear(&___nl__10);
#line 685
c_rt_lib0move(&___nl__8, c_rt_lib0num_ne(___nl__8, ___nl__9));
#line 685
c_rt_lib0clear(&___nl__9);
#line 685
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 685
if(c_rt_lib0check_true_native(___nl__8)){ goto label_140;}
#line 686
c_rt_lib0move(&___nl__9,___get_global_const(1201));
#line 686
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 686
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 686
c_rt_lib0clear(&___nl__11);
#line 686
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 686
c_rt_lib0clear(&___nl__10);
#line 686
c_rt_lib0move(&___nl__10,___get_global_const(1202));
#line 686
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 686
c_rt_lib0clear(&___nl__10);
#line 687
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 687
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 687
c_rt_lib0move(&___nl__10, type_checker_priv0get_function_name(___nl__11, ___nl__12));
#line 687
c_rt_lib0clear(&___nl__12);
#line 687
c_rt_lib0clear(&___nl__11);
#line 687
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 687
c_rt_lib0clear(&___nl__10);
#line 687
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 687
c_rt_lib0clear(&___nl__9);
#line 688
c_rt_lib0clear(&___nl__0);
#line 688
c_rt_lib0clear(&___nl__5);
#line 688
c_rt_lib0clear(&___nl__6);
#line 688
c_rt_lib0clear(&___nl__7);
#line 688
c_rt_lib0clear(&___nl__8);
#line 688
return ___nl__4;
#line 689
goto label_140;
#line 689
label_140:
#line 689
c_rt_lib0clear(&___nl__8);
#line 690
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 691
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 691
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 691
c_rt_lib0clear(&___nl__10);
#line 691
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 691
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 691
label_148:
#line 691
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__10, ___nl__9));
#line 691
if(c_rt_lib0check_true_native(___nl__12)){ goto label_319;}
#line 692
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 692
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__13, ___nl__10));
#line 693
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(89)));
#line 693
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__14, ___nl__10));
#line 697
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(222)));
#line 697
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(222)));
#line 697
c_rt_lib0move(&___nl__15, enum0eq(___nl__16, ___nl__17));
#line 697
c_rt_lib0clear(&___nl__17);
#line 697
c_rt_lib0clear(&___nl__16);
#line 697
if(c_rt_lib0check_true_native(___nl__15)){ goto label_175;}
#line 698
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(222)));
#line 698
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_none(___get_global_const(1203)));
#line 698
c_rt_lib0move(&___nl__15, enum0eq(___nl__17, ___nl__18));
#line 698
c_rt_lib0clear(&___nl__18);
#line 698
c_rt_lib0clear(&___nl__17);
#line 698
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__15));
#line 698
if(c_rt_lib0check_true_native(___nl__16)){ goto label_173;}
#line 698
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(222)));
#line 698
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 698
c_rt_lib0move(&___nl__15, enum0eq(___nl__17, ___nl__18));
#line 698
c_rt_lib0clear(&___nl__18);
#line 698
c_rt_lib0clear(&___nl__17);
#line 698
label_173:
#line 698
c_rt_lib0clear(&___nl__16);
#line 698
label_175:
#line 698
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 698
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 698
if(c_rt_lib0check_true_native(___nl__15)){ goto label_196;}
#line 694
c_rt_lib0move(&___nl__16,___get_global_const(1204));
#line 694
c_rt_lib0move(&___nl__17,___get_global_const(1));
#line 694
c_rt_lib0move(&___nl__17, c_rt_lib0add(___nl__10, ___nl__17));
#line 694
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 694
c_rt_lib0clear(&___nl__17);
#line 694
c_rt_lib0move(&___nl__17,___get_global_const(1205));
#line 694
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 694
c_rt_lib0clear(&___nl__17);
#line 694
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(93)));
#line 694
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 694
c_rt_lib0clear(&___nl__17);
#line 695
c_rt_lib0move(&___nl__17,___get_global_const(1206));
#line 695
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 695
c_rt_lib0clear(&___nl__17);
#line 695
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__16));
#line 695
c_rt_lib0clear(&___nl__16);
#line 695
goto label_196;
#line 695
label_196:
#line 695
c_rt_lib0clear(&___nl__15);
#line 700
c_rt_lib0copy(&___nl__16, ___nl__7);
#line 700
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 700
if(c_rt_lib0check_true_native(___nl__16)){ goto label_214;}
#line 701
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(___nl__5, ___nl__10));
#line 702
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_none(___get_global_const(1083)));
#line 702
c_rt_lib0copy(&___nl__19, ___nl__18);
#line 702
c_rt_lib0hash_set_value_dec(&___nl__17, ___get_global_const(43), ___nl__19);
#line 702
c_rt_lib0clear(&___nl__18);
#line 702
c_rt_lib0clear(&___nl__19);
#line 703
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(63)));
#line 703
c_rt_lib0move(&___nl__18, ptd_system0is_accepted_info(___nl__17, ___nl__19, ___ref___1, ___ref___3));
#line 703
c_rt_lib0clear(&___nl__19);
#line 703
c_rt_lib0copy(&___nl__15, ___nl__18);
#line 703
c_rt_lib0clear(&___nl__18);
#line 703
c_rt_lib0clear(&___nl__17);
#line 704
goto label_276;
#line 704
label_214:
#line 705
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(222)));
#line 705
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__17, ___get_global_const(5)));
#line 705
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 705
if(c_rt_lib0check_true_native(___nl__17)){ goto label_266;}
#line 706
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(18)));
#line 706
c_rt_lib0move(&___nl__18, array0len(___nl__19));
#line 706
c_rt_lib0clear(&___nl__19);
#line 707
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(198)));
#line 707
c_rt_lib0move(&___nl__19, type_checker_priv0rec_get_var_from_lval(___nl__20, ___ref___3));
#line 707
c_rt_lib0clear(&___nl__20);
#line 708
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(18)));
#line 708
c_rt_lib0move(&___nl__20, array0len(___nl__21));
#line 708
c_rt_lib0clear(&___nl__21);
#line 708
c_rt_lib0move(&___nl__20, c_rt_lib0num_eq(___nl__18, ___nl__20));
#line 708
c_rt_lib0move(&___nl__20, c_rt_lib0not(___nl__20));
#line 708
if(c_rt_lib0check_true_native(___nl__20)){ goto label_261;}
#line 709
c_rt_lib0move(&___nl__22,___get_global_const(0));
#line 709
c_rt_lib0move(&___nl__21, c_rt_lib0array_get(___nl__19, ___nl__22));
#line 709
c_rt_lib0clear(&___nl__22);
#line 709
c_rt_lib0move(&___nl__21, c_rt_lib0priv_as(___nl__21, ___get_global_const(847)));
#line 710
c_rt_lib0move(&___nl__22, hash0has_key(___nl__8, ___nl__21));
#line 710
c_rt_lib0move(&___nl__22, c_rt_lib0not(___nl__22));
#line 710
if(c_rt_lib0check_true_native(___nl__22)){ goto label_243;}
#line 711
c_rt_lib0move(&___nl__23,___get_global_const(1207));
#line 711
c_rt_lib0move(&___nl__23, c_rt_lib0concat_add(___nl__23, ___nl__21));
#line 711
c_rt_lib0delete(type_checker_priv0add_warning(___ref___3, ___nl__23));
#line 711
c_rt_lib0clear(&___nl__23);
#line 712
goto label_243;
#line 712
label_243:
#line 712
c_rt_lib0clear(&___nl__22);
#line 713
c_rt_lib0move(&___nl__22,___get_global_const(0));
#line 713
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__21, ___nl__22));
#line 713
c_rt_lib0clear(&___nl__22);
#line 714
c_rt_lib0move(&___nl__22, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(198)));
#line 714
c_rt_lib0move(&___nl__23, c_rt_lib0array_get(___nl__5, ___nl__10));
#line 715
c_rt_lib0move(&___nl__25, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(63)));
#line 715
c_rt_lib0move(&___nl__26, c_rt_lib0ov_mk_none(___get_global_const(1077)));
#line 715
c_rt_lib0move(&___nl__24, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__25, ___get_global_const(43), ___nl__26));
#line 715
c_rt_lib0clear(&___nl__25);
#line 715
c_rt_lib0clear(&___nl__26);
#line 715
c_rt_lib0delete(type_checker_priv0set_type_to_lval(___nl__22, ___nl__23, ___nl__24, ___ref___1, ___ref___2, ___ref___3));
#line 715
c_rt_lib0clear(&___nl__24);
#line 715
c_rt_lib0clear(&___nl__23);
#line 715
c_rt_lib0clear(&___nl__22);
#line 715
c_rt_lib0clear(&___nl__21);
#line 716
goto label_261;
#line 716
label_261:
#line 716
c_rt_lib0clear(&___nl__20);
#line 716
c_rt_lib0clear(&___nl__18);
#line 716
c_rt_lib0clear(&___nl__19);
#line 717
goto label_266;
#line 717
label_266:
#line 717
c_rt_lib0clear(&___nl__17);
#line 718
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(63)));
#line 718
c_rt_lib0move(&___nl__19, c_rt_lib0array_get(___nl__5, ___nl__10));
#line 718
c_rt_lib0move(&___nl__17, ptd_system0check_assignment(___nl__18, ___nl__19, ___ref___1, ___ref___3));
#line 718
c_rt_lib0clear(&___nl__19);
#line 718
c_rt_lib0clear(&___nl__18);
#line 718
c_rt_lib0copy(&___nl__15, ___nl__17);
#line 718
c_rt_lib0clear(&___nl__17);
#line 720
goto label_276;
#line 720
label_276:
#line 720
c_rt_lib0clear(&___nl__16);
#line 721
c_rt_lib0copy(&___nl__16, ___nl__15);
#line 721
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__16, ___get_global_const(47)));
#line 721
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 721
if(c_rt_lib0check_true_native(___nl__16)){ goto label_312;}
#line 722
c_rt_lib0move(&___nl__17,___get_global_const(1208));
#line 722
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 722
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 722
c_rt_lib0move(&___nl__18, type_checker_priv0get_function_name(___nl__19, ___nl__20));
#line 722
c_rt_lib0clear(&___nl__20);
#line 722
c_rt_lib0clear(&___nl__19);
#line 722
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 722
c_rt_lib0clear(&___nl__18);
#line 723
c_rt_lib0move(&___nl__18,___get_global_const(1209));
#line 723
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 723
c_rt_lib0clear(&___nl__18);
#line 723
c_rt_lib0move(&___nl__18,___get_global_const(1));
#line 723
c_rt_lib0move(&___nl__18, c_rt_lib0add(___nl__10, ___nl__18));
#line 723
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 723
c_rt_lib0clear(&___nl__18);
#line 723
c_rt_lib0move(&___nl__18,___get_global_const(1205));
#line 723
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 723
c_rt_lib0clear(&___nl__18);
#line 723
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(93)));
#line 723
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 723
c_rt_lib0clear(&___nl__18);
#line 723
c_rt_lib0move(&___nl__18,___get_global_const(1210));
#line 723
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 723
c_rt_lib0clear(&___nl__18);
#line 724
c_rt_lib0move(&___nl__18, type_checker_priv0get_print_check_info(___nl__15));
#line 724
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 724
c_rt_lib0clear(&___nl__18);
#line 724
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__17));
#line 724
c_rt_lib0clear(&___nl__17);
#line 725
goto label_312;
#line 725
label_312:
#line 725
c_rt_lib0clear(&___nl__16);
#line 725
c_rt_lib0clear(&___nl__13);
#line 725
c_rt_lib0clear(&___nl__14);
#line 725
c_rt_lib0clear(&___nl__15);
#line 726
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 726
goto label_148;
#line 726
label_319:
#line 726
c_rt_lib0clear(&___nl__9);
#line 726
c_rt_lib0clear(&___nl__10);
#line 726
c_rt_lib0clear(&___nl__11);
#line 726
c_rt_lib0clear(&___nl__12);
#line 727
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(786)));
#line 727
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(1077)));
#line 727
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__11, ___get_global_const(43), ___nl__12));
#line 727
c_rt_lib0clear(&___nl__11);
#line 727
c_rt_lib0clear(&___nl__12);
#line 727
c_rt_lib0move(&___nl__9, type_checker_priv0check_special_function(___nl__10, ___nl__0, ___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 727
c_rt_lib0clear(&___nl__10);
#line 727
c_rt_lib0clear(&___nl__0);
#line 727
c_rt_lib0clear(&___nl__4);
#line 727
c_rt_lib0clear(&___nl__5);
#line 727
c_rt_lib0clear(&___nl__6);
#line 727
c_rt_lib0clear(&___nl__7);
#line 727
c_rt_lib0clear(&___nl__8);
#line 727
return ___nl__9;
#line 727
c_rt_lib0clear(&___nl__9);
#line 727
c_rt_lib0clear(&___nl__4);
#line 727
c_rt_lib0clear(&___nl__5);
#line 727
c_rt_lib0clear(&___nl__6);
#line 727
c_rt_lib0clear(&___nl__7);
#line 727
c_rt_lib0clear(&___nl__8);
#line 727
c_rt_lib0clear(&___nl__0);
#line 727
return NULL;
}

ImmT type_checker_priv0unary_op_dec_inc(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 733
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__0, ___ref___2, ___ref___3, ___ref___4));
#line 734
c_rt_lib0move(&___nl__7, tct0sim());
#line 734
c_rt_lib0move(&___nl__6, ptd_system0is_accepted(___nl__5, ___nl__7, ___ref___2, ___ref___4));
#line 734
c_rt_lib0clear(&___nl__7);
#line 734
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 734
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 734
if(c_rt_lib0check_true_native(___nl__6)){ goto label_14;}
#line 735
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(63)));
#line 735
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 735
c_rt_lib0clear(&___nl__8);
#line 735
c_rt_lib0move(&___nl__7, c_rt_lib0concat_new(___nl__1, ___nl__7));
#line 735
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__7));
#line 735
c_rt_lib0clear(&___nl__7);
#line 736
goto label_14;
#line 736
label_14:
#line 736
c_rt_lib0clear(&___nl__6);
#line 737
c_rt_lib0move(&___nl__6, tct0sim());
#line 737
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 737
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(63), ___nl__7);
#line 737
c_rt_lib0clear(&___nl__6);
#line 737
c_rt_lib0clear(&___nl__7);
#line 738
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___4, ___get_global_const(18)));
#line 738
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 738
c_rt_lib0clear(&___nl__7);
#line 739
c_rt_lib0move(&___nl__7, type_checker_priv0get_type_left_side_equation(___nl__0, ___ref___2, ___ref___3, ___ref___4));
#line 740
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___4, ___get_global_const(18)));
#line 740
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 740
c_rt_lib0clear(&___nl__9);
#line 740
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__6));
#line 740
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 740
c_rt_lib0move(&___nl__8, c_rt_lib0gt(___nl__8, ___nl__9));
#line 740
c_rt_lib0clear(&___nl__9);
#line 740
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 740
if(c_rt_lib0check_true_native(___nl__8)){ goto label_41;}
#line 741
c_rt_lib0clear(&___nl__0);
#line 741
c_rt_lib0clear(&___nl__1);
#line 741
c_rt_lib0clear(&___nl__5);
#line 741
c_rt_lib0clear(&___nl__6);
#line 741
c_rt_lib0clear(&___nl__8);
#line 741
return ___nl__7;
#line 742
goto label_41;
#line 742
label_41:
#line 742
c_rt_lib0clear(&___nl__8);
#line 743
c_rt_lib0move(&___nl__8, type_checker_priv0set_type_to_lval(___nl__0, ___nl__7, ___nl__5, ___ref___2, ___ref___3, ___ref___4));
#line 743
c_rt_lib0clear(&___nl__0);
#line 743
c_rt_lib0clear(&___nl__1);
#line 743
c_rt_lib0clear(&___nl__5);
#line 743
c_rt_lib0clear(&___nl__6);
#line 743
c_rt_lib0clear(&___nl__7);
#line 743
return ___nl__8;
#line 743
c_rt_lib0clear(&___nl__8);
#line 743
c_rt_lib0clear(&___nl__5);
#line 743
c_rt_lib0clear(&___nl__6);
#line 743
c_rt_lib0clear(&___nl__7);
#line 743
c_rt_lib0clear(&___nl__0);
#line 743
c_rt_lib0clear(&___nl__1);
#line 743
return NULL;
}

ImmT type_checker_priv0get_special_functions(){
type_checker_priv0__const__init();
return type_checker_priv0__const__sing(0);}
ImmT type_checker_priv0get_special_functions0cal() {
type_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 747
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 748
c_rt_lib0move(&___nl__1,___get_global_const(768));
#line 749
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 750
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 750
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 750
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 750
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 750
c_rt_lib0clear(&___nl__6);
#line 750
c_rt_lib0clear(&___nl__7);
#line 750
c_rt_lib0clear(&___nl__8);
#line 750
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 750
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 750
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 750
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 750
c_rt_lib0clear(&___nl__7);
#line 750
c_rt_lib0clear(&___nl__8);
#line 750
c_rt_lib0clear(&___nl__9);
#line 750
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 750
c_rt_lib0clear(&___nl__5);
#line 750
c_rt_lib0clear(&___nl__6);
#line 750
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 750
c_rt_lib0clear(&___nl__3);
#line 750
c_rt_lib0clear(&___nl__4);
#line 750
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 750
c_rt_lib0clear(&___nl__2);
#line 750
c_rt_lib0clear(&___nl__1);
#line 752
c_rt_lib0move(&___nl__1,___get_global_const(1211));
#line 753
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 754
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 754
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 754
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 754
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 754
c_rt_lib0clear(&___nl__6);
#line 754
c_rt_lib0clear(&___nl__7);
#line 754
c_rt_lib0clear(&___nl__8);
#line 754
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 754
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 754
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 754
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 754
c_rt_lib0clear(&___nl__7);
#line 754
c_rt_lib0clear(&___nl__8);
#line 754
c_rt_lib0clear(&___nl__9);
#line 754
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 754
c_rt_lib0clear(&___nl__5);
#line 754
c_rt_lib0clear(&___nl__6);
#line 754
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 754
c_rt_lib0clear(&___nl__3);
#line 754
c_rt_lib0clear(&___nl__4);
#line 754
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 754
c_rt_lib0clear(&___nl__2);
#line 754
c_rt_lib0clear(&___nl__1);
#line 756
c_rt_lib0move(&___nl__1,___get_global_const(1212));
#line 757
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 758
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 758
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 758
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 758
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 758
c_rt_lib0clear(&___nl__6);
#line 758
c_rt_lib0clear(&___nl__7);
#line 758
c_rt_lib0clear(&___nl__8);
#line 758
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 758
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 758
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 758
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 758
c_rt_lib0clear(&___nl__7);
#line 758
c_rt_lib0clear(&___nl__8);
#line 758
c_rt_lib0clear(&___nl__9);
#line 758
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 758
c_rt_lib0clear(&___nl__5);
#line 758
c_rt_lib0clear(&___nl__6);
#line 758
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 758
c_rt_lib0clear(&___nl__3);
#line 758
c_rt_lib0clear(&___nl__4);
#line 758
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 758
c_rt_lib0clear(&___nl__2);
#line 758
c_rt_lib0clear(&___nl__1);
#line 760
c_rt_lib0move(&___nl__1,___get_global_const(724));
#line 761
c_rt_lib0move(&___nl__3, tct0void());
#line 763
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 763
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 763
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 763
c_rt_lib0clear(&___nl__8);
#line 763
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 763
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 763
c_rt_lib0clear(&___nl__6);
#line 763
c_rt_lib0clear(&___nl__7);
#line 763
c_rt_lib0clear(&___nl__8);
#line 764
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 764
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 764
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 764
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 764
c_rt_lib0clear(&___nl__7);
#line 764
c_rt_lib0clear(&___nl__8);
#line 764
c_rt_lib0clear(&___nl__9);
#line 764
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 764
c_rt_lib0clear(&___nl__5);
#line 764
c_rt_lib0clear(&___nl__6);
#line 764
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 764
c_rt_lib0clear(&___nl__3);
#line 764
c_rt_lib0clear(&___nl__4);
#line 764
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 764
c_rt_lib0clear(&___nl__2);
#line 764
c_rt_lib0clear(&___nl__1);
#line 767
c_rt_lib0move(&___nl__1,___get_global_const(1213));
#line 768
c_rt_lib0move(&___nl__3, tct0void());
#line 770
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 770
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 770
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 770
c_rt_lib0clear(&___nl__8);
#line 770
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 770
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 770
c_rt_lib0clear(&___nl__6);
#line 770
c_rt_lib0clear(&___nl__7);
#line 770
c_rt_lib0clear(&___nl__8);
#line 771
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 771
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 771
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 771
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 771
c_rt_lib0clear(&___nl__7);
#line 771
c_rt_lib0clear(&___nl__8);
#line 771
c_rt_lib0clear(&___nl__9);
#line 772
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 772
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 772
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 772
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__8, ___get_global_const(63), ___nl__9, ___get_global_const(93), ___nl__10));
#line 772
c_rt_lib0clear(&___nl__8);
#line 772
c_rt_lib0clear(&___nl__9);
#line 772
c_rt_lib0clear(&___nl__10);
#line 772
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 772
c_rt_lib0clear(&___nl__5);
#line 772
c_rt_lib0clear(&___nl__6);
#line 772
c_rt_lib0clear(&___nl__7);
#line 772
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 772
c_rt_lib0clear(&___nl__3);
#line 772
c_rt_lib0clear(&___nl__4);
#line 772
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 772
c_rt_lib0clear(&___nl__2);
#line 772
c_rt_lib0clear(&___nl__1);
#line 775
c_rt_lib0move(&___nl__1,___get_global_const(1214));
#line 776
c_rt_lib0move(&___nl__3, tct0void());
#line 778
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 778
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 778
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 778
c_rt_lib0clear(&___nl__8);
#line 778
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 778
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 778
c_rt_lib0clear(&___nl__6);
#line 778
c_rt_lib0clear(&___nl__7);
#line 778
c_rt_lib0clear(&___nl__8);
#line 779
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 779
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 779
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 779
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 779
c_rt_lib0clear(&___nl__7);
#line 779
c_rt_lib0clear(&___nl__8);
#line 779
c_rt_lib0clear(&___nl__9);
#line 779
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 779
c_rt_lib0clear(&___nl__5);
#line 779
c_rt_lib0clear(&___nl__6);
#line 779
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 779
c_rt_lib0clear(&___nl__3);
#line 779
c_rt_lib0clear(&___nl__4);
#line 779
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 779
c_rt_lib0clear(&___nl__2);
#line 779
c_rt_lib0clear(&___nl__1);
#line 784
c_rt_lib0move(&___nl__1,___get_global_const(726));
#line 785
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 787
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 787
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 787
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 787
c_rt_lib0clear(&___nl__8);
#line 787
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 787
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 787
c_rt_lib0clear(&___nl__6);
#line 787
c_rt_lib0clear(&___nl__7);
#line 787
c_rt_lib0clear(&___nl__8);
#line 788
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 788
c_rt_lib0move(&___nl__8, tct0sim());
#line 788
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 788
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 788
c_rt_lib0clear(&___nl__7);
#line 788
c_rt_lib0clear(&___nl__8);
#line 788
c_rt_lib0clear(&___nl__9);
#line 789
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 789
c_rt_lib0move(&___nl__9, tct0sim());
#line 789
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 789
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__8, ___get_global_const(63), ___nl__9, ___get_global_const(93), ___nl__10));
#line 789
c_rt_lib0clear(&___nl__8);
#line 789
c_rt_lib0clear(&___nl__9);
#line 789
c_rt_lib0clear(&___nl__10);
#line 789
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 789
c_rt_lib0clear(&___nl__5);
#line 789
c_rt_lib0clear(&___nl__6);
#line 789
c_rt_lib0clear(&___nl__7);
#line 789
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 789
c_rt_lib0clear(&___nl__3);
#line 789
c_rt_lib0clear(&___nl__4);
#line 789
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 789
c_rt_lib0clear(&___nl__2);
#line 789
c_rt_lib0clear(&___nl__1);
#line 792
c_rt_lib0move(&___nl__1,___get_global_const(1215));
#line 793
c_rt_lib0move(&___nl__3, tct0sim());
#line 795
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 795
c_rt_lib0move(&___nl__7, tct0sim());
#line 795
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 795
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 795
c_rt_lib0clear(&___nl__6);
#line 795
c_rt_lib0clear(&___nl__7);
#line 795
c_rt_lib0clear(&___nl__8);
#line 796
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 796
c_rt_lib0move(&___nl__9, tct0sim());
#line 796
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 796
c_rt_lib0clear(&___nl__9);
#line 796
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 796
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 796
c_rt_lib0clear(&___nl__7);
#line 796
c_rt_lib0clear(&___nl__8);
#line 796
c_rt_lib0clear(&___nl__9);
#line 796
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 796
c_rt_lib0clear(&___nl__5);
#line 796
c_rt_lib0clear(&___nl__6);
#line 796
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 796
c_rt_lib0clear(&___nl__3);
#line 796
c_rt_lib0clear(&___nl__4);
#line 796
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 796
c_rt_lib0clear(&___nl__2);
#line 796
c_rt_lib0clear(&___nl__1);
#line 799
c_rt_lib0move(&___nl__1,___get_global_const(727));
#line 800
c_rt_lib0move(&___nl__3, tct0void());
#line 802
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 802
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 802
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 802
c_rt_lib0clear(&___nl__8);
#line 802
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 802
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 802
c_rt_lib0clear(&___nl__6);
#line 802
c_rt_lib0clear(&___nl__7);
#line 802
c_rt_lib0clear(&___nl__8);
#line 803
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 803
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 803
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 803
c_rt_lib0clear(&___nl__9);
#line 803
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 803
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 803
c_rt_lib0clear(&___nl__7);
#line 803
c_rt_lib0clear(&___nl__8);
#line 803
c_rt_lib0clear(&___nl__9);
#line 803
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 803
c_rt_lib0clear(&___nl__5);
#line 803
c_rt_lib0clear(&___nl__6);
#line 803
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 803
c_rt_lib0clear(&___nl__3);
#line 803
c_rt_lib0clear(&___nl__4);
#line 803
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 803
c_rt_lib0clear(&___nl__2);
#line 803
c_rt_lib0clear(&___nl__1);
#line 806
c_rt_lib0move(&___nl__1,___get_global_const(728));
#line 807
c_rt_lib0move(&___nl__3, tct0sim());
#line 808
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 808
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 808
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 808
c_rt_lib0clear(&___nl__8);
#line 808
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 808
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 808
c_rt_lib0clear(&___nl__6);
#line 808
c_rt_lib0clear(&___nl__7);
#line 808
c_rt_lib0clear(&___nl__8);
#line 808
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 808
c_rt_lib0clear(&___nl__5);
#line 808
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 808
c_rt_lib0clear(&___nl__3);
#line 808
c_rt_lib0clear(&___nl__4);
#line 808
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 808
c_rt_lib0clear(&___nl__2);
#line 808
c_rt_lib0clear(&___nl__1);
#line 810
c_rt_lib0move(&___nl__1,___get_global_const(729));
#line 811
c_rt_lib0move(&___nl__3, tct0void());
#line 812
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 812
c_rt_lib0move(&___nl__8, tct0sim());
#line 812
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 812
c_rt_lib0clear(&___nl__8);
#line 812
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 812
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 812
c_rt_lib0clear(&___nl__6);
#line 812
c_rt_lib0clear(&___nl__7);
#line 812
c_rt_lib0clear(&___nl__8);
#line 812
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 812
c_rt_lib0clear(&___nl__5);
#line 812
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 812
c_rt_lib0clear(&___nl__3);
#line 812
c_rt_lib0clear(&___nl__4);
#line 812
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 812
c_rt_lib0clear(&___nl__2);
#line 812
c_rt_lib0clear(&___nl__1);
#line 814
c_rt_lib0move(&___nl__1,___get_global_const(725));
#line 815
c_rt_lib0move(&___nl__3, tct0void());
#line 816
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 816
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 816
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 816
c_rt_lib0clear(&___nl__8);
#line 816
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 816
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 816
c_rt_lib0clear(&___nl__6);
#line 816
c_rt_lib0clear(&___nl__7);
#line 816
c_rt_lib0clear(&___nl__8);
#line 816
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 816
c_rt_lib0clear(&___nl__5);
#line 816
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 816
c_rt_lib0clear(&___nl__3);
#line 816
c_rt_lib0clear(&___nl__4);
#line 816
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 816
c_rt_lib0clear(&___nl__2);
#line 816
c_rt_lib0clear(&___nl__1);
#line 818
c_rt_lib0move(&___nl__1,___get_global_const(732));
#line 819
c_rt_lib0move(&___nl__3, tct0void());
#line 821
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 821
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 821
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 821
c_rt_lib0clear(&___nl__8);
#line 821
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 821
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 821
c_rt_lib0clear(&___nl__6);
#line 821
c_rt_lib0clear(&___nl__7);
#line 821
c_rt_lib0clear(&___nl__8);
#line 822
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 822
c_rt_lib0move(&___nl__8, tct0sim());
#line 822
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 822
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 822
c_rt_lib0clear(&___nl__7);
#line 822
c_rt_lib0clear(&___nl__8);
#line 822
c_rt_lib0clear(&___nl__9);
#line 823
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 823
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 823
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 823
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__8, ___get_global_const(63), ___nl__9, ___get_global_const(93), ___nl__10));
#line 823
c_rt_lib0clear(&___nl__8);
#line 823
c_rt_lib0clear(&___nl__9);
#line 823
c_rt_lib0clear(&___nl__10);
#line 823
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 823
c_rt_lib0clear(&___nl__5);
#line 823
c_rt_lib0clear(&___nl__6);
#line 823
c_rt_lib0clear(&___nl__7);
#line 823
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 823
c_rt_lib0clear(&___nl__3);
#line 823
c_rt_lib0clear(&___nl__4);
#line 823
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 823
c_rt_lib0clear(&___nl__2);
#line 823
c_rt_lib0clear(&___nl__1);
#line 826
c_rt_lib0move(&___nl__1,___get_global_const(730));
#line 827
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 829
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 829
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 829
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 829
c_rt_lib0clear(&___nl__8);
#line 829
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 829
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 829
c_rt_lib0clear(&___nl__6);
#line 829
c_rt_lib0clear(&___nl__7);
#line 829
c_rt_lib0clear(&___nl__8);
#line 830
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 830
c_rt_lib0move(&___nl__8, tct0sim());
#line 830
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 830
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 830
c_rt_lib0clear(&___nl__7);
#line 830
c_rt_lib0clear(&___nl__8);
#line 830
c_rt_lib0clear(&___nl__9);
#line 830
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 830
c_rt_lib0clear(&___nl__5);
#line 830
c_rt_lib0clear(&___nl__6);
#line 830
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 830
c_rt_lib0clear(&___nl__3);
#line 830
c_rt_lib0clear(&___nl__4);
#line 830
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 830
c_rt_lib0clear(&___nl__2);
#line 830
c_rt_lib0clear(&___nl__1);
#line 833
c_rt_lib0move(&___nl__1,___get_global_const(731));
#line 834
c_rt_lib0move(&___nl__3, tct0bool());
#line 836
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 836
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 836
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 836
c_rt_lib0clear(&___nl__8);
#line 836
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 836
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 836
c_rt_lib0clear(&___nl__6);
#line 836
c_rt_lib0clear(&___nl__7);
#line 836
c_rt_lib0clear(&___nl__8);
#line 837
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 837
c_rt_lib0move(&___nl__8, tct0sim());
#line 837
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 837
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 837
c_rt_lib0clear(&___nl__7);
#line 837
c_rt_lib0clear(&___nl__8);
#line 837
c_rt_lib0clear(&___nl__9);
#line 837
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 837
c_rt_lib0clear(&___nl__5);
#line 837
c_rt_lib0clear(&___nl__6);
#line 837
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 837
c_rt_lib0clear(&___nl__3);
#line 837
c_rt_lib0clear(&___nl__4);
#line 837
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 837
c_rt_lib0clear(&___nl__2);
#line 837
c_rt_lib0clear(&___nl__1);
#line 840
c_rt_lib0move(&___nl__1,___get_global_const(733));
#line 841
c_rt_lib0move(&___nl__3, tct0void());
#line 843
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 843
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 843
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 843
c_rt_lib0clear(&___nl__8);
#line 843
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 843
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 843
c_rt_lib0clear(&___nl__6);
#line 843
c_rt_lib0clear(&___nl__7);
#line 843
c_rt_lib0clear(&___nl__8);
#line 844
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 844
c_rt_lib0move(&___nl__8, tct0sim());
#line 844
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 844
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 844
c_rt_lib0clear(&___nl__7);
#line 844
c_rt_lib0clear(&___nl__8);
#line 844
c_rt_lib0clear(&___nl__9);
#line 844
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 844
c_rt_lib0clear(&___nl__5);
#line 844
c_rt_lib0clear(&___nl__6);
#line 844
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 844
c_rt_lib0clear(&___nl__3);
#line 844
c_rt_lib0clear(&___nl__4);
#line 844
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 844
c_rt_lib0clear(&___nl__2);
#line 844
c_rt_lib0clear(&___nl__1);
#line 847
c_rt_lib0move(&___nl__1,___get_global_const(734));
#line 848
c_rt_lib0move(&___nl__3, tct0sim());
#line 849
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 849
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 849
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 849
c_rt_lib0clear(&___nl__8);
#line 849
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 849
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 849
c_rt_lib0clear(&___nl__6);
#line 849
c_rt_lib0clear(&___nl__7);
#line 849
c_rt_lib0clear(&___nl__8);
#line 849
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 849
c_rt_lib0clear(&___nl__5);
#line 849
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 849
c_rt_lib0clear(&___nl__3);
#line 849
c_rt_lib0clear(&___nl__4);
#line 849
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 849
c_rt_lib0clear(&___nl__2);
#line 849
c_rt_lib0clear(&___nl__1);
#line 851
c_rt_lib0move(&___nl__1,___get_global_const(1216));
#line 852
c_rt_lib0move(&___nl__4, tct0tct_im());
#line 852
c_rt_lib0move(&___nl__3, tct0arr(___nl__4));
#line 852
c_rt_lib0clear(&___nl__4);
#line 853
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 853
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 853
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 853
c_rt_lib0clear(&___nl__8);
#line 853
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 853
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 853
c_rt_lib0clear(&___nl__6);
#line 853
c_rt_lib0clear(&___nl__7);
#line 853
c_rt_lib0clear(&___nl__8);
#line 853
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 853
c_rt_lib0clear(&___nl__5);
#line 853
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 853
c_rt_lib0clear(&___nl__3);
#line 853
c_rt_lib0clear(&___nl__4);
#line 853
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 853
c_rt_lib0clear(&___nl__2);
#line 853
c_rt_lib0clear(&___nl__1);
#line 855
c_rt_lib0move(&___nl__1,___get_global_const(735));
#line 856
c_rt_lib0move(&___nl__4, tct0sim());
#line 856
c_rt_lib0move(&___nl__3, tct0arr(___nl__4));
#line 856
c_rt_lib0clear(&___nl__4);
#line 857
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 857
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 857
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 857
c_rt_lib0clear(&___nl__8);
#line 857
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 857
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 857
c_rt_lib0clear(&___nl__6);
#line 857
c_rt_lib0clear(&___nl__7);
#line 857
c_rt_lib0clear(&___nl__8);
#line 857
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 857
c_rt_lib0clear(&___nl__5);
#line 857
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 857
c_rt_lib0clear(&___nl__3);
#line 857
c_rt_lib0clear(&___nl__4);
#line 857
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 857
c_rt_lib0clear(&___nl__2);
#line 857
c_rt_lib0clear(&___nl__1);
#line 859
c_rt_lib0move(&___nl__1,___get_global_const(1217));
#line 860
c_rt_lib0move(&___nl__3, tct0void());
#line 862
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 862
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 862
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 862
c_rt_lib0clear(&___nl__8);
#line 862
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 862
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 862
c_rt_lib0clear(&___nl__6);
#line 862
c_rt_lib0clear(&___nl__7);
#line 862
c_rt_lib0clear(&___nl__8);
#line 863
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 863
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 863
c_rt_lib0move(&___nl__8, tct0hash(___nl__9));
#line 863
c_rt_lib0clear(&___nl__9);
#line 863
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 863
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 863
c_rt_lib0clear(&___nl__7);
#line 863
c_rt_lib0clear(&___nl__8);
#line 863
c_rt_lib0clear(&___nl__9);
#line 863
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 863
c_rt_lib0clear(&___nl__5);
#line 863
c_rt_lib0clear(&___nl__6);
#line 863
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 863
c_rt_lib0clear(&___nl__3);
#line 863
c_rt_lib0clear(&___nl__4);
#line 863
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 863
c_rt_lib0clear(&___nl__2);
#line 863
c_rt_lib0clear(&___nl__1);
#line 866
c_rt_lib0move(&___nl__1,___get_global_const(749));
#line 867
c_rt_lib0move(&___nl__3, tct0bool());
#line 868
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 868
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 868
c_rt_lib0move(&___nl__7, tct0var(___nl__8));
#line 868
c_rt_lib0clear(&___nl__8);
#line 868
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 868
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 868
c_rt_lib0clear(&___nl__6);
#line 868
c_rt_lib0clear(&___nl__7);
#line 868
c_rt_lib0clear(&___nl__8);
#line 868
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 868
c_rt_lib0move(&___nl__8, tct0sim());
#line 868
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 868
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 868
c_rt_lib0clear(&___nl__7);
#line 868
c_rt_lib0clear(&___nl__8);
#line 868
c_rt_lib0clear(&___nl__9);
#line 868
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 868
c_rt_lib0clear(&___nl__5);
#line 868
c_rt_lib0clear(&___nl__6);
#line 868
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 868
c_rt_lib0clear(&___nl__3);
#line 868
c_rt_lib0clear(&___nl__4);
#line 868
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 868
c_rt_lib0clear(&___nl__2);
#line 868
c_rt_lib0clear(&___nl__1);
#line 870
c_rt_lib0move(&___nl__1,___get_global_const(750));
#line 871
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 872
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 872
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 872
c_rt_lib0move(&___nl__7, tct0var(___nl__8));
#line 872
c_rt_lib0clear(&___nl__8);
#line 872
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 872
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 872
c_rt_lib0clear(&___nl__6);
#line 872
c_rt_lib0clear(&___nl__7);
#line 872
c_rt_lib0clear(&___nl__8);
#line 872
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 872
c_rt_lib0move(&___nl__8, tct0sim());
#line 872
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 872
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 872
c_rt_lib0clear(&___nl__7);
#line 872
c_rt_lib0clear(&___nl__8);
#line 872
c_rt_lib0clear(&___nl__9);
#line 872
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 872
c_rt_lib0clear(&___nl__5);
#line 872
c_rt_lib0clear(&___nl__6);
#line 872
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 872
c_rt_lib0clear(&___nl__3);
#line 872
c_rt_lib0clear(&___nl__4);
#line 872
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 872
c_rt_lib0clear(&___nl__2);
#line 872
c_rt_lib0clear(&___nl__1);
#line 874
c_rt_lib0move(&___nl__1,___get_global_const(1218));
#line 874
c_rt_lib0move(&___nl__3, tct0sim());
#line 874
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 874
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 874
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 874
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 874
c_rt_lib0clear(&___nl__6);
#line 874
c_rt_lib0clear(&___nl__7);
#line 874
c_rt_lib0clear(&___nl__8);
#line 874
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 874
c_rt_lib0clear(&___nl__5);
#line 874
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 874
c_rt_lib0clear(&___nl__3);
#line 874
c_rt_lib0clear(&___nl__4);
#line 874
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 874
c_rt_lib0clear(&___nl__2);
#line 874
c_rt_lib0clear(&___nl__1);
#line 875
c_rt_lib0move(&___nl__1,___get_global_const(736));
#line 875
c_rt_lib0move(&___nl__3, tct0sim());
#line 875
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 875
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 875
c_rt_lib0clear(&___nl__3);
#line 875
c_rt_lib0clear(&___nl__4);
#line 875
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 875
c_rt_lib0clear(&___nl__2);
#line 875
c_rt_lib0clear(&___nl__1);
#line 876
c_rt_lib0move(&___nl__1,___get_global_const(738));
#line 876
c_rt_lib0move(&___nl__3, tct0sim());
#line 876
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 876
c_rt_lib0move(&___nl__7, tct0sim());
#line 876
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 876
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 876
c_rt_lib0clear(&___nl__6);
#line 876
c_rt_lib0clear(&___nl__7);
#line 876
c_rt_lib0clear(&___nl__8);
#line 876
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 876
c_rt_lib0clear(&___nl__5);
#line 876
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 876
c_rt_lib0clear(&___nl__3);
#line 876
c_rt_lib0clear(&___nl__4);
#line 876
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 876
c_rt_lib0clear(&___nl__2);
#line 876
c_rt_lib0clear(&___nl__1);
#line 877
c_rt_lib0move(&___nl__1,___get_global_const(739));
#line 878
c_rt_lib0move(&___nl__3, tct0sim());
#line 880
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 880
c_rt_lib0move(&___nl__7, tct0sim());
#line 880
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 880
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 880
c_rt_lib0clear(&___nl__6);
#line 880
c_rt_lib0clear(&___nl__7);
#line 880
c_rt_lib0clear(&___nl__8);
#line 881
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 881
c_rt_lib0move(&___nl__8, tct0sim());
#line 881
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 881
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 881
c_rt_lib0clear(&___nl__7);
#line 881
c_rt_lib0clear(&___nl__8);
#line 881
c_rt_lib0clear(&___nl__9);
#line 882
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 882
c_rt_lib0move(&___nl__9, tct0sim());
#line 882
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 882
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__8, ___get_global_const(63), ___nl__9, ___get_global_const(93), ___nl__10));
#line 882
c_rt_lib0clear(&___nl__8);
#line 882
c_rt_lib0clear(&___nl__9);
#line 882
c_rt_lib0clear(&___nl__10);
#line 882
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 882
c_rt_lib0clear(&___nl__5);
#line 882
c_rt_lib0clear(&___nl__6);
#line 882
c_rt_lib0clear(&___nl__7);
#line 882
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 882
c_rt_lib0clear(&___nl__3);
#line 882
c_rt_lib0clear(&___nl__4);
#line 882
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 882
c_rt_lib0clear(&___nl__2);
#line 882
c_rt_lib0clear(&___nl__1);
#line 885
c_rt_lib0move(&___nl__1,___get_global_const(1219));
#line 886
c_rt_lib0move(&___nl__3, tct0sim());
#line 888
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 888
c_rt_lib0move(&___nl__7, tct0sim());
#line 888
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 888
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 888
c_rt_lib0clear(&___nl__6);
#line 888
c_rt_lib0clear(&___nl__7);
#line 888
c_rt_lib0clear(&___nl__8);
#line 889
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 889
c_rt_lib0move(&___nl__8, tct0sim());
#line 889
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 889
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 889
c_rt_lib0clear(&___nl__7);
#line 889
c_rt_lib0clear(&___nl__8);
#line 889
c_rt_lib0clear(&___nl__9);
#line 890
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 890
c_rt_lib0move(&___nl__9, tct0sim());
#line 890
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 890
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__8, ___get_global_const(63), ___nl__9, ___get_global_const(93), ___nl__10));
#line 890
c_rt_lib0clear(&___nl__8);
#line 890
c_rt_lib0clear(&___nl__9);
#line 890
c_rt_lib0clear(&___nl__10);
#line 890
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 890
c_rt_lib0clear(&___nl__5);
#line 890
c_rt_lib0clear(&___nl__6);
#line 890
c_rt_lib0clear(&___nl__7);
#line 890
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 890
c_rt_lib0clear(&___nl__3);
#line 890
c_rt_lib0clear(&___nl__4);
#line 890
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 890
c_rt_lib0clear(&___nl__2);
#line 890
c_rt_lib0clear(&___nl__1);
#line 893
c_rt_lib0move(&___nl__1,___get_global_const(743));
#line 893
c_rt_lib0move(&___nl__3, tct0sim());
#line 893
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 893
c_rt_lib0move(&___nl__7, tct0sim());
#line 893
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 893
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 893
c_rt_lib0clear(&___nl__6);
#line 893
c_rt_lib0clear(&___nl__7);
#line 893
c_rt_lib0clear(&___nl__8);
#line 893
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 893
c_rt_lib0clear(&___nl__5);
#line 893
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 893
c_rt_lib0clear(&___nl__3);
#line 893
c_rt_lib0clear(&___nl__4);
#line 893
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 893
c_rt_lib0clear(&___nl__2);
#line 893
c_rt_lib0clear(&___nl__1);
#line 894
c_rt_lib0move(&___nl__1,___get_global_const(742));
#line 894
c_rt_lib0move(&___nl__3, tct0sim());
#line 894
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 894
c_rt_lib0move(&___nl__7, tct0sim());
#line 894
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 894
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 894
c_rt_lib0clear(&___nl__6);
#line 894
c_rt_lib0clear(&___nl__7);
#line 894
c_rt_lib0clear(&___nl__8);
#line 894
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 894
c_rt_lib0clear(&___nl__5);
#line 894
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 894
c_rt_lib0clear(&___nl__3);
#line 894
c_rt_lib0clear(&___nl__4);
#line 894
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 894
c_rt_lib0clear(&___nl__2);
#line 894
c_rt_lib0clear(&___nl__1);
#line 895
c_rt_lib0move(&___nl__1,___get_global_const(1220));
#line 896
c_rt_lib0move(&___nl__4, tct0sim());
#line 896
c_rt_lib0move(&___nl__3, tct0arr(___nl__4));
#line 896
c_rt_lib0clear(&___nl__4);
#line 897
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 897
c_rt_lib0move(&___nl__7, tct0sim());
#line 897
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 897
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 897
c_rt_lib0clear(&___nl__6);
#line 897
c_rt_lib0clear(&___nl__7);
#line 897
c_rt_lib0clear(&___nl__8);
#line 897
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 897
c_rt_lib0move(&___nl__8, tct0sim());
#line 897
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 897
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 897
c_rt_lib0clear(&___nl__7);
#line 897
c_rt_lib0clear(&___nl__8);
#line 897
c_rt_lib0clear(&___nl__9);
#line 897
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 897
c_rt_lib0clear(&___nl__5);
#line 897
c_rt_lib0clear(&___nl__6);
#line 897
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 897
c_rt_lib0clear(&___nl__3);
#line 897
c_rt_lib0clear(&___nl__4);
#line 897
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 897
c_rt_lib0clear(&___nl__2);
#line 897
c_rt_lib0clear(&___nl__1);
#line 899
c_rt_lib0move(&___nl__1,___get_global_const(1221));
#line 900
c_rt_lib0move(&___nl__3, tct0sim());
#line 902
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 902
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 902
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 902
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 902
c_rt_lib0clear(&___nl__6);
#line 902
c_rt_lib0clear(&___nl__7);
#line 902
c_rt_lib0clear(&___nl__8);
#line 903
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 903
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 903
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 903
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 903
c_rt_lib0clear(&___nl__7);
#line 903
c_rt_lib0clear(&___nl__8);
#line 903
c_rt_lib0clear(&___nl__9);
#line 904
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 904
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 904
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 904
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__8, ___get_global_const(63), ___nl__9, ___get_global_const(93), ___nl__10));
#line 904
c_rt_lib0clear(&___nl__8);
#line 904
c_rt_lib0clear(&___nl__9);
#line 904
c_rt_lib0clear(&___nl__10);
#line 904
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 904
c_rt_lib0clear(&___nl__5);
#line 904
c_rt_lib0clear(&___nl__6);
#line 904
c_rt_lib0clear(&___nl__7);
#line 904
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 904
c_rt_lib0clear(&___nl__3);
#line 904
c_rt_lib0clear(&___nl__4);
#line 904
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 904
c_rt_lib0clear(&___nl__2);
#line 904
c_rt_lib0clear(&___nl__1);
#line 907
c_rt_lib0move(&___nl__1,___get_global_const(1222));
#line 908
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 909
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 909
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 909
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 909
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 909
c_rt_lib0clear(&___nl__6);
#line 909
c_rt_lib0clear(&___nl__7);
#line 909
c_rt_lib0clear(&___nl__8);
#line 909
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 909
c_rt_lib0clear(&___nl__5);
#line 909
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1119), ___nl__4));
#line 909
c_rt_lib0clear(&___nl__3);
#line 909
c_rt_lib0clear(&___nl__4);
#line 909
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 909
c_rt_lib0clear(&___nl__2);
#line 909
c_rt_lib0clear(&___nl__1);
#line 911
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 911
c_rt_lib0clear(&___nl__0);
#line 911
return ___nl__1;
#line 911
c_rt_lib0clear(&___nl__1);
#line 911
c_rt_lib0clear(&___nl__0);
#line 911
return NULL;
}

ImmT type_checker_priv0get_special_function_def(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 915
c_rt_lib0move(&___nl__2, type_checker_priv0get_special_functions());
#line 917
c_rt_lib0move(&___nl__5, nast0empty_debug());
#line 917
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(829)));
#line 917
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__5, ___get_global_const(201), ___nl__6));
#line 917
c_rt_lib0clear(&___nl__5);
#line 917
c_rt_lib0clear(&___nl__6);
#line 918
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 919
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 922
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(183)));
#line 923
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 924
c_rt_lib0move(&___nl__9, tct0empty());
#line 924
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(8, ___get_global_const(201), ___nl__4, ___get_global_const(1094), ___nl__5, ___get_global_const(1089), ___nl__6, ___get_global_const(93), ___nl__1, ___get_global_const(132), ___nl__0, ___get_global_const(182), ___nl__7, ___get_global_const(89), ___nl__8, ___get_global_const(786), ___nl__9));
#line 924
c_rt_lib0clear(&___nl__4);
#line 924
c_rt_lib0clear(&___nl__5);
#line 924
c_rt_lib0clear(&___nl__6);
#line 924
c_rt_lib0clear(&___nl__7);
#line 924
c_rt_lib0clear(&___nl__8);
#line 924
c_rt_lib0clear(&___nl__9);
#line 926
c_rt_lib0move(&___nl__4, type_checker_priv0get_function_name(___nl__0, ___nl__1));
#line 926
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 926
c_rt_lib0clear(&___nl__4);
#line 927
c_rt_lib0move(&___nl__4, hash0has_key(___nl__2, ___nl__1));
#line 927
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 927
if(c_rt_lib0check_true_native(___nl__4)){ goto label_37;}
#line 928
c_rt_lib0move(&___nl__5, hash0get_value(___nl__2, ___nl__1));
#line 929
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(1119)));
#line 929
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 929
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(89), ___nl__7);
#line 929
c_rt_lib0clear(&___nl__6);
#line 929
c_rt_lib0clear(&___nl__7);
#line 930
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(250)));
#line 930
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 930
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(786), ___nl__7);
#line 930
c_rt_lib0clear(&___nl__6);
#line 930
c_rt_lib0clear(&___nl__7);
#line 930
c_rt_lib0clear(&___nl__5);
#line 931
goto label_44;
#line 931
label_37:
#line 932
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(377)));
#line 932
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 932
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(182), ___nl__6);
#line 932
c_rt_lib0clear(&___nl__5);
#line 932
c_rt_lib0clear(&___nl__6);
#line 933
goto label_44;
#line 933
label_44:
#line 933
c_rt_lib0clear(&___nl__4);
#line 934
c_rt_lib0clear(&___nl__0);
#line 934
c_rt_lib0clear(&___nl__1);
#line 934
c_rt_lib0clear(&___nl__2);
#line 934
return ___nl__3;
#line 934
c_rt_lib0clear(&___nl__2);
#line 934
c_rt_lib0clear(&___nl__3);
#line 934
c_rt_lib0clear(&___nl__0);
#line 934
c_rt_lib0clear(&___nl__1);
#line 934
return NULL;
}

ImmT type_checker_priv0check_special_function(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
type_checker_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
#line 940
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(132)));
#line 940
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(93)));
#line 940
c_rt_lib0move(&___nl__6, type_checker_priv0get_function_name(___nl__7, ___nl__8));
#line 940
c_rt_lib0clear(&___nl__8);
#line 940
c_rt_lib0clear(&___nl__7);
#line 941
c_rt_lib0move(&___nl__7,___get_global_const(768));
#line 941
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 941
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 941
c_rt_lib0move(&___nl__7,___get_global_const(1212));
#line 941
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 941
label_10:
#line 941
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 941
if(c_rt_lib0check_true_native(___nl__7)){ goto label_68;}
#line 942
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 942
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 942
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__10));
#line 942
c_rt_lib0clear(&___nl__10);
#line 942
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(198)));
#line 942
c_rt_lib0move(&___nl__8, ptd_parser0try_value_to_ptd(___nl__9));
#line 942
c_rt_lib0clear(&___nl__9);
#line 942
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(47)));
#line 942
if(c_rt_lib0check_true_native(___nl__9)){ goto label_27;}
#line 945
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 945
if(c_rt_lib0check_true_native(___nl__9)){ goto label_37;}
#line 945
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 945
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 945
nl_die_arg(___nl__9);
#line 942
label_27:
#line 942
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(47)));
#line 943
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__10));
#line 944
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 944
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 944
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__12);
#line 944
c_rt_lib0clear(&___nl__11);
#line 944
c_rt_lib0clear(&___nl__12);
#line 944
c_rt_lib0clear(&___nl__10);
#line 945
goto label_64;
#line 945
label_37:
#line 945
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 946
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 946
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__2, ___nl__13));
#line 946
c_rt_lib0clear(&___nl__13);
#line 946
c_rt_lib0move(&___nl__11, ptd_system0cast_type(___nl__10, ___nl__12, ___ref___3, ___ref___5));
#line 946
c_rt_lib0clear(&___nl__12);
#line 947
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 947
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(47)));
#line 947
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 947
if(c_rt_lib0check_true_native(___nl__12)){ goto label_55;}
#line 948
c_rt_lib0move(&___nl__13,___get_global_const(1223));
#line 948
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_check_info(___nl__11));
#line 948
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 948
c_rt_lib0clear(&___nl__14);
#line 948
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__13));
#line 948
c_rt_lib0clear(&___nl__13);
#line 949
goto label_55;
#line 949
label_55:
#line 949
c_rt_lib0clear(&___nl__12);
#line 950
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 950
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__12);
#line 950
c_rt_lib0clear(&___nl__12);
#line 951
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__10, ___ref___3, ___ref___5));
#line 951
c_rt_lib0clear(&___nl__11);
#line 951
c_rt_lib0clear(&___nl__10);
#line 952
goto label_64;
#line 952
label_64:
#line 952
c_rt_lib0clear(&___nl__8);
#line 952
c_rt_lib0clear(&___nl__9);
#line 953
goto label_68;
#line 953
label_68:
#line 953
c_rt_lib0clear(&___nl__7);
#line 954
c_rt_lib0move(&___nl__7,___get_global_const(1211));
#line 954
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 954
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 954
if(c_rt_lib0check_true_native(___nl__7)){ goto label_157;}
#line 955
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 955
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 955
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__10));
#line 955
c_rt_lib0clear(&___nl__10);
#line 955
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(198)));
#line 955
c_rt_lib0move(&___nl__8, ptd_parser0try_value_to_ptd(___nl__9));
#line 955
c_rt_lib0clear(&___nl__9);
#line 955
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(47)));
#line 955
if(c_rt_lib0check_true_native(___nl__9)){ goto label_88;}
#line 958
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 958
if(c_rt_lib0check_true_native(___nl__9)){ goto label_98;}
#line 958
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 958
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 958
nl_die_arg(___nl__9);
#line 955
label_88:
#line 955
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(47)));
#line 956
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__10));
#line 957
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 957
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 957
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__12);
#line 957
c_rt_lib0clear(&___nl__11);
#line 957
c_rt_lib0clear(&___nl__12);
#line 957
c_rt_lib0clear(&___nl__10);
#line 958
goto label_153;
#line 958
label_98:
#line 958
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 959
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(132)));
#line 959
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(93)));
#line 959
c_rt_lib0move(&___nl__11, type_checker_priv0get_function_def(___nl__12, ___nl__13, *___ref___3));
#line 959
c_rt_lib0clear(&___nl__13);
#line 959
c_rt_lib0clear(&___nl__12);
#line 960
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(786)));
#line 960
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_none(___get_global_const(1077)));
#line 960
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__13, ___get_global_const(43), ___nl__14));
#line 960
c_rt_lib0clear(&___nl__13);
#line 960
c_rt_lib0clear(&___nl__14);
#line 961
c_rt_lib0move(&___nl__13, ptd_system0can_delete(___nl__12, ___ref___3, ___ref___5));
#line 961
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(63)));
#line 961
c_rt_lib0copy(&___nl__14, ___nl__13);
#line 961
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__14);
#line 961
c_rt_lib0clear(&___nl__13);
#line 961
c_rt_lib0clear(&___nl__14);
#line 962
c_rt_lib0move(&___nl__13, ptd_system0is_try_ensure_type(___nl__0, ___ref___3, ___ref___5));
#line 962
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 962
if(c_rt_lib0check_true_native(___nl__13)){ goto label_141;}
#line 963
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 963
c_rt_lib0move(&___nl__18,___get_global_const(47));
#line 963
c_rt_lib0move(&___nl__16, tct0try_var_as_case(___nl__17, ___nl__18));
#line 963
c_rt_lib0clear(&___nl__18);
#line 963
c_rt_lib0clear(&___nl__17);
#line 963
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__16, ___get_global_const(48)));
#line 963
if(c_rt_lib0check_true_native(___nl__15)){ goto label_128;}
#line 963
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__16));
#line 963
nl_die_arg(___nl__16);
#line 963
label_128:
#line 963
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__16, ___get_global_const(48)));
#line 963
c_rt_lib0clear(&___nl__15);
#line 963
c_rt_lib0clear(&___nl__16);
#line 964
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(2, ___get_global_const(48), ___nl__10, ___get_global_const(47), ___nl__14));
#line 964
c_rt_lib0move(&___nl__15, tct0var(___nl__16));
#line 964
c_rt_lib0clear(&___nl__16);
#line 964
c_rt_lib0copy(&___nl__16, ___nl__15);
#line 964
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__16);
#line 964
c_rt_lib0clear(&___nl__15);
#line 964
c_rt_lib0clear(&___nl__16);
#line 964
c_rt_lib0clear(&___nl__14);
#line 965
goto label_146;
#line 965
label_141:
#line 966
c_rt_lib0move(&___nl__14,___get_global_const(1224));
#line 966
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__14));
#line 966
c_rt_lib0clear(&___nl__14);
#line 967
goto label_146;
#line 967
label_146:
#line 967
c_rt_lib0clear(&___nl__13);
#line 968
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__10, ___ref___3, ___ref___5));
#line 968
c_rt_lib0clear(&___nl__11);
#line 968
c_rt_lib0clear(&___nl__12);
#line 968
c_rt_lib0clear(&___nl__10);
#line 969
goto label_153;
#line 969
label_153:
#line 969
c_rt_lib0clear(&___nl__8);
#line 969
c_rt_lib0clear(&___nl__9);
#line 970
goto label_157;
#line 970
label_157:
#line 970
c_rt_lib0clear(&___nl__7);
#line 971
c_rt_lib0move(&___nl__7,___get_global_const(724));
#line 971
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 971
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 971
if(c_rt_lib0check_true_native(___nl__7)){ goto label_198;}
#line 972
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 972
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 972
c_rt_lib0clear(&___nl__10);
#line 972
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 972
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 972
c_rt_lib0clear(&___nl__9);
#line 972
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 972
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_arr(___nl__2, ___nl__10));
#line 972
c_rt_lib0copy(&___nl__11, ___nl__8);
#line 972
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(63), ___nl__11);
#line 972
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__2, ___nl__10, ___nl__9));
#line 972
c_rt_lib0clear(&___nl__8);
#line 972
c_rt_lib0clear(&___nl__9);
#line 972
c_rt_lib0clear(&___nl__10);
#line 972
c_rt_lib0clear(&___nl__11);
#line 973
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 973
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 973
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 973
c_rt_lib0clear(&___nl__9);
#line 973
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(198)));
#line 973
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 973
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 973
c_rt_lib0clear(&___nl__10);
#line 973
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 973
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 973
c_rt_lib0clear(&___nl__11);
#line 973
c_rt_lib0move(&___nl__12, tct0empty());
#line 973
c_rt_lib0move(&___nl__11, tct0arr(___nl__12));
#line 973
c_rt_lib0clear(&___nl__12);
#line 973
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 973
c_rt_lib0clear(&___nl__11);
#line 973
c_rt_lib0clear(&___nl__10);
#line 973
c_rt_lib0clear(&___nl__9);
#line 973
c_rt_lib0clear(&___nl__8);
#line 975
goto label_198;
#line 975
label_198:
#line 975
c_rt_lib0clear(&___nl__7);
#line 976
c_rt_lib0move(&___nl__7,___get_global_const(1213));
#line 976
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 976
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 976
if(c_rt_lib0check_true_native(___nl__7)){ goto label_239;}
#line 977
c_rt_lib0move(&___nl__10,___get_global_const(6));
#line 977
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 977
c_rt_lib0clear(&___nl__10);
#line 977
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 977
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 977
c_rt_lib0clear(&___nl__9);
#line 977
c_rt_lib0move(&___nl__10,___get_global_const(6));
#line 977
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_arr(___nl__2, ___nl__10));
#line 977
c_rt_lib0copy(&___nl__11, ___nl__8);
#line 977
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(63), ___nl__11);
#line 977
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__2, ___nl__10, ___nl__9));
#line 977
c_rt_lib0clear(&___nl__8);
#line 977
c_rt_lib0clear(&___nl__9);
#line 977
c_rt_lib0clear(&___nl__10);
#line 977
c_rt_lib0clear(&___nl__11);
#line 978
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 978
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 978
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 978
c_rt_lib0clear(&___nl__9);
#line 978
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(198)));
#line 978
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 978
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 978
c_rt_lib0clear(&___nl__10);
#line 978
c_rt_lib0move(&___nl__11,___get_global_const(6));
#line 978
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 978
c_rt_lib0clear(&___nl__11);
#line 978
c_rt_lib0move(&___nl__12, tct0empty());
#line 978
c_rt_lib0move(&___nl__11, tct0arr(___nl__12));
#line 978
c_rt_lib0clear(&___nl__12);
#line 978
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 978
c_rt_lib0clear(&___nl__11);
#line 978
c_rt_lib0clear(&___nl__10);
#line 978
c_rt_lib0clear(&___nl__9);
#line 978
c_rt_lib0clear(&___nl__8);
#line 980
goto label_239;
#line 980
label_239:
#line 980
c_rt_lib0clear(&___nl__7);
#line 981
c_rt_lib0move(&___nl__7,___get_global_const(727));
#line 981
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 981
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 981
if(c_rt_lib0check_true_native(___nl__7)){ goto label_265;}
#line 982
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 982
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 982
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 982
c_rt_lib0clear(&___nl__9);
#line 982
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(198)));
#line 982
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 982
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 982
c_rt_lib0clear(&___nl__10);
#line 982
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 982
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 982
c_rt_lib0clear(&___nl__11);
#line 982
c_rt_lib0move(&___nl__12, tct0empty());
#line 982
c_rt_lib0move(&___nl__11, tct0arr(___nl__12));
#line 982
c_rt_lib0clear(&___nl__12);
#line 982
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 982
c_rt_lib0clear(&___nl__11);
#line 982
c_rt_lib0clear(&___nl__10);
#line 982
c_rt_lib0clear(&___nl__9);
#line 982
c_rt_lib0clear(&___nl__8);
#line 984
goto label_265;
#line 984
label_265:
#line 984
c_rt_lib0clear(&___nl__7);
#line 985
c_rt_lib0move(&___nl__7,___get_global_const(726));
#line 985
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 985
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 985
if(c_rt_lib0check_true_native(___nl__7)){ goto label_282;}
#line 986
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 986
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__2, ___nl__9));
#line 986
c_rt_lib0clear(&___nl__9);
#line 986
c_rt_lib0clear(&___nl__0);
#line 986
c_rt_lib0clear(&___nl__1);
#line 986
c_rt_lib0clear(&___nl__2);
#line 986
c_rt_lib0clear(&___nl__6);
#line 986
c_rt_lib0clear(&___nl__7);
#line 986
return ___nl__8;
#line 986
c_rt_lib0clear(&___nl__8);
#line 987
goto label_282;
#line 987
label_282:
#line 987
c_rt_lib0clear(&___nl__7);
#line 988
c_rt_lib0move(&___nl__7,___get_global_const(732));
#line 988
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 988
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 988
if(c_rt_lib0check_true_native(___nl__7)){ goto label_323;}
#line 989
c_rt_lib0move(&___nl__10,___get_global_const(6));
#line 989
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 989
c_rt_lib0clear(&___nl__10);
#line 989
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 989
c_rt_lib0move(&___nl__8, tct0hash(___nl__9));
#line 989
c_rt_lib0clear(&___nl__9);
#line 989
c_rt_lib0move(&___nl__10,___get_global_const(6));
#line 989
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_arr(___nl__2, ___nl__10));
#line 989
c_rt_lib0copy(&___nl__11, ___nl__8);
#line 989
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(63), ___nl__11);
#line 989
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__2, ___nl__10, ___nl__9));
#line 989
c_rt_lib0clear(&___nl__8);
#line 989
c_rt_lib0clear(&___nl__9);
#line 989
c_rt_lib0clear(&___nl__10);
#line 989
c_rt_lib0clear(&___nl__11);
#line 990
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 990
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 990
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 990
c_rt_lib0clear(&___nl__9);
#line 990
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(198)));
#line 990
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 990
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 990
c_rt_lib0clear(&___nl__10);
#line 990
c_rt_lib0move(&___nl__11,___get_global_const(6));
#line 990
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 990
c_rt_lib0clear(&___nl__11);
#line 990
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 990
c_rt_lib0move(&___nl__11, tct0rec(___nl__12));
#line 990
c_rt_lib0clear(&___nl__12);
#line 990
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 990
c_rt_lib0clear(&___nl__11);
#line 990
c_rt_lib0clear(&___nl__10);
#line 990
c_rt_lib0clear(&___nl__9);
#line 990
c_rt_lib0clear(&___nl__8);
#line 992
goto label_323;
#line 992
label_323:
#line 992
c_rt_lib0clear(&___nl__7);
#line 993
c_rt_lib0move(&___nl__7,___get_global_const(733));
#line 993
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 993
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 993
if(c_rt_lib0check_true_native(___nl__7)){ goto label_367;}
#line 994
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 994
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 994
c_rt_lib0clear(&___nl__10);
#line 994
c_rt_lib0move(&___nl__8, ptd_system0can_delete(___nl__9, ___ref___3, ___ref___5));
#line 994
c_rt_lib0clear(&___nl__9);
#line 995
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 995
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(799)));
#line 995
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 995
if(c_rt_lib0check_true_native(___nl__9)){ goto label_363;}
#line 996
c_rt_lib0copy(&___nl__10, ___nl__8);
#line 997
c_rt_lib0move(&___nl__13, tct0empty());
#line 997
c_rt_lib0move(&___nl__12, tct0hash(___nl__13));
#line 997
c_rt_lib0clear(&___nl__13);
#line 997
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 997
c_rt_lib0move(&___nl__11, ptd_system0cross_type(___nl__12, ___nl__13, ___ref___3, ___ref___5));
#line 997
c_rt_lib0clear(&___nl__13);
#line 997
c_rt_lib0clear(&___nl__12);
#line 997
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 997
c_rt_lib0hash_set_value_dec(&___nl__10, ___get_global_const(63), ___nl__12);
#line 997
c_rt_lib0clear(&___nl__11);
#line 997
c_rt_lib0clear(&___nl__12);
#line 998
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 998
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 998
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__11, ___nl__12));
#line 998
c_rt_lib0clear(&___nl__12);
#line 998
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(198)));
#line 998
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 998
c_rt_lib0move(&___nl__12, tct0rec(___nl__13));
#line 998
c_rt_lib0clear(&___nl__13);
#line 998
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__11, ___nl__8, ___nl__10, ___nl__12, ___ref___3, ___ref___4, ___ref___5));
#line 998
c_rt_lib0clear(&___nl__12);
#line 998
c_rt_lib0clear(&___nl__11);
#line 998
c_rt_lib0clear(&___nl__10);
#line 999
goto label_363;
#line 999
label_363:
#line 999
c_rt_lib0clear(&___nl__9);
#line 999
c_rt_lib0clear(&___nl__8);
#line 1000
goto label_367;
#line 1000
label_367:
#line 1000
c_rt_lib0clear(&___nl__7);
#line 1001
c_rt_lib0move(&___nl__7,___get_global_const(730));
#line 1001
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 1001
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1001
if(c_rt_lib0check_true_native(___nl__7)){ goto label_398;}
#line 1002
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 1002
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 1002
c_rt_lib0clear(&___nl__10);
#line 1002
c_rt_lib0move(&___nl__8, ptd_system0can_delete(___nl__9, ___ref___3, ___ref___5));
#line 1002
c_rt_lib0clear(&___nl__9);
#line 1003
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(43)));
#line 1003
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 1003
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(43), ___nl__10);
#line 1003
c_rt_lib0clear(&___nl__9);
#line 1003
c_rt_lib0clear(&___nl__10);
#line 1004
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 1004
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(798)));
#line 1004
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1004
if(c_rt_lib0check_true_native(___nl__9)){ goto label_394;}
#line 1004
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 1004
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(798)));
#line 1004
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 1004
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__11);
#line 1004
c_rt_lib0clear(&___nl__10);
#line 1004
c_rt_lib0clear(&___nl__11);
#line 1004
goto label_394;
#line 1004
label_394:
#line 1004
c_rt_lib0clear(&___nl__9);
#line 1004
c_rt_lib0clear(&___nl__8);
#line 1005
goto label_398;
#line 1005
label_398:
#line 1005
c_rt_lib0clear(&___nl__7);
#line 1006
c_rt_lib0move(&___nl__7,___get_global_const(1216));
#line 1006
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 1006
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1006
if(c_rt_lib0check_true_native(___nl__7)){ goto label_431;}
#line 1007
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 1007
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 1007
c_rt_lib0clear(&___nl__10);
#line 1007
c_rt_lib0move(&___nl__8, ptd_system0can_delete(___nl__9, ___ref___3, ___ref___5));
#line 1007
c_rt_lib0clear(&___nl__9);
#line 1008
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(43)));
#line 1008
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 1008
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(43), ___nl__10);
#line 1008
c_rt_lib0clear(&___nl__9);
#line 1008
c_rt_lib0clear(&___nl__10);
#line 1009
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 1009
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(798)));
#line 1009
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1009
if(c_rt_lib0check_true_native(___nl__9)){ goto label_427;}
#line 1009
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 1009
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(798)));
#line 1009
c_rt_lib0move(&___nl__10, tct0arr(___nl__11));
#line 1009
c_rt_lib0clear(&___nl__11);
#line 1009
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 1009
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__11);
#line 1009
c_rt_lib0clear(&___nl__10);
#line 1009
c_rt_lib0clear(&___nl__11);
#line 1009
goto label_427;
#line 1009
label_427:
#line 1009
c_rt_lib0clear(&___nl__9);
#line 1009
c_rt_lib0clear(&___nl__8);
#line 1010
goto label_431;
#line 1010
label_431:
#line 1010
c_rt_lib0clear(&___nl__7);
#line 1011
c_rt_lib0move(&___nl__7,___get_global_const(1217));
#line 1011
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 1011
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1011
if(c_rt_lib0check_true_native(___nl__7)){ goto label_457;}
#line 1012
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 1012
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 1012
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 1012
c_rt_lib0clear(&___nl__9);
#line 1012
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(198)));
#line 1012
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 1012
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 1012
c_rt_lib0clear(&___nl__10);
#line 1012
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 1012
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 1012
c_rt_lib0clear(&___nl__11);
#line 1012
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 1012
c_rt_lib0move(&___nl__11, tct0rec(___nl__12));
#line 1012
c_rt_lib0clear(&___nl__12);
#line 1012
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 1012
c_rt_lib0clear(&___nl__11);
#line 1012
c_rt_lib0clear(&___nl__10);
#line 1012
c_rt_lib0clear(&___nl__9);
#line 1012
c_rt_lib0clear(&___nl__8);
#line 1014
goto label_457;
#line 1014
label_457:
#line 1014
c_rt_lib0clear(&___nl__7);
#line 1016
c_rt_lib0move(&___nl__7,___get_global_const(750));
#line 1016
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 1016
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1016
if(c_rt_lib0check_true_native(___nl__7)){ goto label_471;}
#line 1017
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 1017
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 1017
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 1017
c_rt_lib0clear(&___nl__10);
#line 1017
c_rt_lib0delete(ptd_system0check_assignment(___nl__8, ___nl__9, ___ref___3, ___ref___5));
#line 1017
c_rt_lib0clear(&___nl__9);
#line 1017
c_rt_lib0clear(&___nl__8);
#line 1018
goto label_471;
#line 1018
label_471:
#line 1018
c_rt_lib0clear(&___nl__7);
#line 1019
c_rt_lib0move(&___nl__7,___get_global_const(1218));
#line 1019
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 1019
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1019
if(c_rt_lib0check_true_native(___nl__7)){ goto label_485;}
#line 1020
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 1020
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 1020
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 1020
c_rt_lib0clear(&___nl__10);
#line 1020
c_rt_lib0delete(ptd_system0check_assignment(___nl__8, ___nl__9, ___ref___3, ___ref___5));
#line 1020
c_rt_lib0clear(&___nl__9);
#line 1020
c_rt_lib0clear(&___nl__8);
#line 1021
goto label_485;
#line 1021
label_485:
#line 1021
c_rt_lib0clear(&___nl__7);
#line 1022
c_rt_lib0move(&___nl__7,___get_global_const(1225));
#line 1022
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 1022
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1022
if(c_rt_lib0check_true_native(___nl__7)){ goto label_502;}
#line 1023
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 1023
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__2, ___nl__9));
#line 1023
c_rt_lib0clear(&___nl__9);
#line 1023
c_rt_lib0clear(&___nl__0);
#line 1023
c_rt_lib0clear(&___nl__1);
#line 1023
c_rt_lib0clear(&___nl__2);
#line 1023
c_rt_lib0clear(&___nl__6);
#line 1023
c_rt_lib0clear(&___nl__7);
#line 1023
return ___nl__8;
#line 1023
c_rt_lib0clear(&___nl__8);
#line 1024
goto label_502;
#line 1024
label_502:
#line 1024
c_rt_lib0clear(&___nl__7);
#line 1025
c_rt_lib0clear(&___nl__1);
#line 1025
c_rt_lib0clear(&___nl__2);
#line 1025
c_rt_lib0clear(&___nl__6);
#line 1025
return ___nl__0;
#line 1025
c_rt_lib0clear(&___nl__6);
#line 1025
c_rt_lib0clear(&___nl__0);
#line 1025
c_rt_lib0clear(&___nl__1);
#line 1025
c_rt_lib0clear(&___nl__2);
#line 1025
return NULL;
}

ImmT type_checker_priv0rec_get_var_from_lval(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1029
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 1030
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1030
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(847)));
#line 1030
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1030
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 1031
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1031
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(847)));
#line 1031
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(847), ___nl__4));
#line 1031
c_rt_lib0delete(array0push(&___nl__2, ___nl__4));
#line 1031
c_rt_lib0clear(&___nl__4);
#line 1032
goto label_88;
#line 1032
label_11:
#line 1032
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1032
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(208)));
#line 1032
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1032
if(c_rt_lib0check_true_native(___nl__3)){ goto label_83;}
#line 1033
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1033
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(208)));
#line 1034
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 1034
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 1034
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 1034
c_rt_lib0clear(&___nl__6);
#line 1034
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1034
if(c_rt_lib0check_true_native(___nl__5)){ goto label_36;}
#line 1035
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 1035
c_rt_lib0move(&___nl__6, type_checker_priv0rec_get_var_from_lval(___nl__7, ___ref___1));
#line 1035
c_rt_lib0clear(&___nl__7);
#line 1035
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 1035
c_rt_lib0clear(&___nl__6);
#line 1036
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(231)));
#line 1036
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(192)));
#line 1036
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(854)));
#line 1036
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(1072), ___nl__6));
#line 1036
c_rt_lib0delete(array0push(&___nl__2, ___nl__6));
#line 1036
c_rt_lib0clear(&___nl__6);
#line 1037
goto label_79;
#line 1037
label_36:
#line 1037
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 1037
c_rt_lib0move(&___nl__6,___get_global_const(849));
#line 1037
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 1037
c_rt_lib0clear(&___nl__6);
#line 1037
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1037
if(c_rt_lib0check_true_native(___nl__5)){ goto label_52;}
#line 1038
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 1038
c_rt_lib0move(&___nl__6, type_checker_priv0rec_get_var_from_lval(___nl__7, ___ref___1));
#line 1038
c_rt_lib0clear(&___nl__7);
#line 1038
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 1038
c_rt_lib0clear(&___nl__6);
#line 1039
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(327)));
#line 1039
c_rt_lib0delete(array0push(&___nl__2, ___nl__6));
#line 1039
c_rt_lib0clear(&___nl__6);
#line 1040
goto label_79;
#line 1040
label_52:
#line 1040
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 1040
c_rt_lib0move(&___nl__6,___get_global_const(850));
#line 1040
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 1040
c_rt_lib0clear(&___nl__6);
#line 1040
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1040
if(c_rt_lib0check_true_native(___nl__5)){ goto label_68;}
#line 1041
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 1041
c_rt_lib0move(&___nl__6, type_checker_priv0rec_get_var_from_lval(___nl__7, ___ref___1));
#line 1041
c_rt_lib0clear(&___nl__7);
#line 1041
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 1041
c_rt_lib0clear(&___nl__6);
#line 1042
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(1140)));
#line 1042
c_rt_lib0delete(array0push(&___nl__2, ___nl__6));
#line 1042
c_rt_lib0clear(&___nl__6);
#line 1043
goto label_79;
#line 1043
label_68:
#line 1044
c_rt_lib0move(&___nl__6,___get_global_const(1226));
#line 1044
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 1044
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1044
c_rt_lib0clear(&___nl__7);
#line 1044
c_rt_lib0move(&___nl__7,___get_global_const(1227));
#line 1044
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1044
c_rt_lib0clear(&___nl__7);
#line 1044
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__6));
#line 1044
c_rt_lib0clear(&___nl__6);
#line 1045
goto label_79;
#line 1045
label_79:
#line 1045
c_rt_lib0clear(&___nl__5);
#line 1045
c_rt_lib0clear(&___nl__4);
#line 1046
goto label_88;
#line 1046
label_83:
#line 1047
c_rt_lib0move(&___nl__4,___get_global_const(1228));
#line 1047
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__4));
#line 1047
c_rt_lib0clear(&___nl__4);
#line 1048
goto label_88;
#line 1048
label_88:
#line 1048
c_rt_lib0clear(&___nl__3);
#line 1049
c_rt_lib0clear(&___nl__0);
#line 1049
return ___nl__2;
#line 1049
c_rt_lib0clear(&___nl__2);
#line 1049
c_rt_lib0clear(&___nl__0);
#line 1049
return NULL;
}

ImmT type_checker_priv0mk_new_type_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
type_checker_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
#line 1054
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 1054
c_rt_lib0move(&___nl__8, array0len(___nl__0));
#line 1054
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 1054
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 1054
c_rt_lib0clear(&___nl__9);
#line 1054
c_rt_lib0move(&___nl__6, array0subarray(___nl__0, ___nl__7, ___nl__8));
#line 1054
c_rt_lib0clear(&___nl__8);
#line 1054
c_rt_lib0clear(&___nl__7);
#line 1054
c_rt_lib0copy(&___nl__0, ___nl__6);
#line 1054
c_rt_lib0clear(&___nl__6);
#line 1055
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 1055
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 1055
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__7));
#line 1055
c_rt_lib0clear(&___nl__7);
#line 1055
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1055
if(c_rt_lib0check_true_native(___nl__6)){ goto label_89;}
#line 1056
c_rt_lib0move(&___nl__7, type_checker_priv0is_known(___nl__2));
#line 1056
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1056
if(c_rt_lib0check_true_native(___nl__7)){ goto label_47;}
#line 1057
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1057
c_rt_lib0move(&___nl__8, ptd_system0check_assignment(___nl__9, ___nl__1, ___ref___4, ___ref___5));
#line 1057
c_rt_lib0clear(&___nl__9);
#line 1058
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 1058
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(47)));
#line 1058
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1058
if(c_rt_lib0check_true_native(___nl__9)){ goto label_33;}
#line 1059
c_rt_lib0move(&___nl__10,___get_global_const(1229));
#line 1059
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_check_info(___nl__8));
#line 1059
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 1059
c_rt_lib0clear(&___nl__11);
#line 1059
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__10));
#line 1059
c_rt_lib0clear(&___nl__10);
#line 1060
goto label_33;
#line 1060
label_33:
#line 1060
c_rt_lib0clear(&___nl__9);
#line 1061
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1061
c_rt_lib0clear(&___nl__0);
#line 1061
c_rt_lib0clear(&___nl__1);
#line 1061
c_rt_lib0clear(&___nl__2);
#line 1061
c_rt_lib0clear(&___nl__3);
#line 1061
c_rt_lib0clear(&___nl__6);
#line 1061
c_rt_lib0clear(&___nl__7);
#line 1061
c_rt_lib0clear(&___nl__8);
#line 1061
return ___nl__9;
#line 1061
c_rt_lib0clear(&___nl__9);
#line 1061
c_rt_lib0clear(&___nl__8);
#line 1062
goto label_86;
#line 1062
label_47:
#line 1063
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 1063
c_rt_lib0delete(ptd_system0check_assignment(___nl__8, ___nl__1, ___ref___4, ___ref___5));
#line 1063
c_rt_lib0clear(&___nl__8);
#line 1064
c_rt_lib0move(&___nl__8, ptd_system0can_create(___nl__2, ___ref___4, ___ref___5));
#line 1064
c_rt_lib0copy(&___nl__2, ___nl__8);
#line 1064
c_rt_lib0clear(&___nl__8);
#line 1065
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1065
c_rt_lib0move(&___nl__8, ptd_system0is_equal(___nl__9, ___nl__3));
#line 1065
c_rt_lib0clear(&___nl__9);
#line 1065
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1065
if(c_rt_lib0check_true_native(___nl__8)){ goto label_70;}
#line 1065
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 1065
c_rt_lib0clear(&___nl__0);
#line 1065
c_rt_lib0clear(&___nl__1);
#line 1065
c_rt_lib0clear(&___nl__2);
#line 1065
c_rt_lib0clear(&___nl__3);
#line 1065
c_rt_lib0clear(&___nl__6);
#line 1065
c_rt_lib0clear(&___nl__7);
#line 1065
c_rt_lib0clear(&___nl__8);
#line 1065
return ___nl__9;
#line 1065
c_rt_lib0clear(&___nl__9);
#line 1065
goto label_70;
#line 1065
label_70:
#line 1065
c_rt_lib0clear(&___nl__8);
#line 1066
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1066
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 1066
c_rt_lib0move(&___nl__8, ptd_system0cross_type(___nl__9, ___nl__10, ___ref___4, ___ref___5));
#line 1066
c_rt_lib0clear(&___nl__10);
#line 1066
c_rt_lib0clear(&___nl__9);
#line 1066
c_rt_lib0clear(&___nl__0);
#line 1066
c_rt_lib0clear(&___nl__1);
#line 1066
c_rt_lib0clear(&___nl__2);
#line 1066
c_rt_lib0clear(&___nl__3);
#line 1066
c_rt_lib0clear(&___nl__6);
#line 1066
c_rt_lib0clear(&___nl__7);
#line 1066
return ___nl__8;
#line 1066
c_rt_lib0clear(&___nl__8);
#line 1067
goto label_86;
#line 1067
label_86:
#line 1067
c_rt_lib0clear(&___nl__7);
#line 1068
goto label_280;
#line 1068
label_89:
#line 1069
c_rt_lib0move(&___nl__7, ptd_system0can_create(___nl__2, ___ref___4, ___ref___5));
#line 1069
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 1069
c_rt_lib0clear(&___nl__7);
#line 1070
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 1070
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__8));
#line 1070
c_rt_lib0clear(&___nl__8);
#line 1070
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(847)));
#line 1070
if(c_rt_lib0check_true_native(___nl__8)){ goto label_107;}
#line 1072
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(327)));
#line 1072
if(c_rt_lib0check_true_native(___nl__8)){ goto label_114;}
#line 1076
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(1140)));
#line 1076
if(c_rt_lib0check_true_native(___nl__8)){ goto label_153;}
#line 1080
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(1072)));
#line 1080
if(c_rt_lib0check_true_native(___nl__8)){ goto label_192;}
#line 1080
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 1080
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 1080
nl_die_arg(___nl__8);
#line 1070
label_107:
#line 1070
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(847)));
#line 1071
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(1, ___nl__0));
#line 1071
nl_die_arg(___nl__10);
#line 1071
c_rt_lib0clear(&___nl__10);
#line 1071
c_rt_lib0clear(&___nl__9);
#line 1072
goto label_276;
#line 1072
label_114:
#line 1073
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1073
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(797)));
#line 1073
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1073
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1073
if(c_rt_lib0check_true_native(___nl__9)){ goto label_132;}
#line 1073
c_rt_lib0move(&___nl__10, tct0tct_im());
#line 1073
c_rt_lib0clear(&___nl__0);
#line 1073
c_rt_lib0clear(&___nl__1);
#line 1073
c_rt_lib0clear(&___nl__2);
#line 1073
c_rt_lib0clear(&___nl__3);
#line 1073
c_rt_lib0clear(&___nl__6);
#line 1073
c_rt_lib0clear(&___nl__7);
#line 1073
c_rt_lib0clear(&___nl__8);
#line 1073
c_rt_lib0clear(&___nl__9);
#line 1073
return ___nl__10;
#line 1073
c_rt_lib0clear(&___nl__10);
#line 1073
goto label_132;
#line 1073
label_132:
#line 1073
c_rt_lib0clear(&___nl__9);
#line 1074
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1074
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(797)));
#line 1074
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 1074
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(63), ___nl__10);
#line 1074
c_rt_lib0clear(&___nl__9);
#line 1074
c_rt_lib0clear(&___nl__10);
#line 1075
c_rt_lib0move(&___nl__10, type_checker_priv0mk_new_type_lval(___nl__0, ___nl__1, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 1075
c_rt_lib0move(&___nl__9, tct0arr(___nl__10));
#line 1075
c_rt_lib0clear(&___nl__10);
#line 1075
c_rt_lib0clear(&___nl__0);
#line 1075
c_rt_lib0clear(&___nl__1);
#line 1075
c_rt_lib0clear(&___nl__2);
#line 1075
c_rt_lib0clear(&___nl__3);
#line 1075
c_rt_lib0clear(&___nl__6);
#line 1075
c_rt_lib0clear(&___nl__7);
#line 1075
c_rt_lib0clear(&___nl__8);
#line 1075
return ___nl__9;
#line 1075
c_rt_lib0clear(&___nl__9);
#line 1076
goto label_276;
#line 1076
label_153:
#line 1077
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1077
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(798)));
#line 1077
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1077
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1077
if(c_rt_lib0check_true_native(___nl__9)){ goto label_171;}
#line 1077
c_rt_lib0move(&___nl__10, tct0tct_im());
#line 1077
c_rt_lib0clear(&___nl__0);
#line 1077
c_rt_lib0clear(&___nl__1);
#line 1077
c_rt_lib0clear(&___nl__2);
#line 1077
c_rt_lib0clear(&___nl__3);
#line 1077
c_rt_lib0clear(&___nl__6);
#line 1077
c_rt_lib0clear(&___nl__7);
#line 1077
c_rt_lib0clear(&___nl__8);
#line 1077
c_rt_lib0clear(&___nl__9);
#line 1077
return ___nl__10;
#line 1077
c_rt_lib0clear(&___nl__10);
#line 1077
goto label_171;
#line 1077
label_171:
#line 1077
c_rt_lib0clear(&___nl__9);
#line 1078
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1078
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(798)));
#line 1078
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 1078
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(63), ___nl__10);
#line 1078
c_rt_lib0clear(&___nl__9);
#line 1078
c_rt_lib0clear(&___nl__10);
#line 1079
c_rt_lib0move(&___nl__10, type_checker_priv0mk_new_type_lval(___nl__0, ___nl__1, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 1079
c_rt_lib0move(&___nl__9, tct0hash(___nl__10));
#line 1079
c_rt_lib0clear(&___nl__10);
#line 1079
c_rt_lib0clear(&___nl__0);
#line 1079
c_rt_lib0clear(&___nl__1);
#line 1079
c_rt_lib0clear(&___nl__2);
#line 1079
c_rt_lib0clear(&___nl__3);
#line 1079
c_rt_lib0clear(&___nl__6);
#line 1079
c_rt_lib0clear(&___nl__7);
#line 1079
c_rt_lib0clear(&___nl__8);
#line 1079
return ___nl__9;
#line 1079
c_rt_lib0clear(&___nl__9);
#line 1080
goto label_276;
#line 1080
label_192:
#line 1080
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(1072)));
#line 1081
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1081
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(799)));
#line 1081
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1081
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1081
if(c_rt_lib0check_true_native(___nl__10)){ goto label_212;}
#line 1081
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1081
c_rt_lib0clear(&___nl__0);
#line 1081
c_rt_lib0clear(&___nl__1);
#line 1081
c_rt_lib0clear(&___nl__2);
#line 1081
c_rt_lib0clear(&___nl__3);
#line 1081
c_rt_lib0clear(&___nl__6);
#line 1081
c_rt_lib0clear(&___nl__7);
#line 1081
c_rt_lib0clear(&___nl__8);
#line 1081
c_rt_lib0clear(&___nl__9);
#line 1081
c_rt_lib0clear(&___nl__10);
#line 1081
return ___nl__11;
#line 1081
c_rt_lib0clear(&___nl__11);
#line 1081
goto label_212;
#line 1081
label_212:
#line 1081
c_rt_lib0clear(&___nl__10);
#line 1082
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1082
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(799)));
#line 1083
c_rt_lib0move(&___nl__11, hash0has_key(___nl__10, ___nl__9));
#line 1083
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 1083
if(c_rt_lib0check_true_native(___nl__11)){ goto label_228;}
#line 1084
c_rt_lib0move(&___nl__12, hash0get_value(___nl__10, ___nl__9));
#line 1084
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 1084
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(63), ___nl__13);
#line 1084
c_rt_lib0clear(&___nl__12);
#line 1084
c_rt_lib0clear(&___nl__13);
#line 1085
c_rt_lib0move(&___nl__12, type_checker_priv0mk_new_type_lval(___nl__0, ___nl__1, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 1085
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__9, ___nl__12));
#line 1085
c_rt_lib0clear(&___nl__12);
#line 1087
goto label_259;
#line 1087
label_228:
#line 1088
c_rt_lib0move(&___nl__12, array0len(___nl__0));
#line 1088
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 1088
c_rt_lib0move(&___nl__12, c_rt_lib0num_ne(___nl__12, ___nl__13));
#line 1088
c_rt_lib0clear(&___nl__13);
#line 1088
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 1088
if(c_rt_lib0check_true_native(___nl__12)){ goto label_250;}
#line 1089
c_rt_lib0move(&___nl__13, tct0tct_im());
#line 1089
c_rt_lib0clear(&___nl__0);
#line 1089
c_rt_lib0clear(&___nl__1);
#line 1089
c_rt_lib0clear(&___nl__2);
#line 1089
c_rt_lib0clear(&___nl__3);
#line 1089
c_rt_lib0clear(&___nl__6);
#line 1089
c_rt_lib0clear(&___nl__7);
#line 1089
c_rt_lib0clear(&___nl__8);
#line 1089
c_rt_lib0clear(&___nl__9);
#line 1089
c_rt_lib0clear(&___nl__10);
#line 1089
c_rt_lib0clear(&___nl__11);
#line 1089
c_rt_lib0clear(&___nl__12);
#line 1089
return ___nl__13;
#line 1089
c_rt_lib0clear(&___nl__13);
#line 1090
goto label_250;
#line 1090
label_250:
#line 1090
c_rt_lib0clear(&___nl__12);
#line 1091
c_rt_lib0move(&___nl__12, tct0tct_im());
#line 1091
c_rt_lib0delete(ptd_system0check_assignment(___nl__12, ___nl__1, ___ref___4, ___ref___5));
#line 1091
c_rt_lib0clear(&___nl__12);
#line 1092
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 1092
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__9, ___nl__12));
#line 1092
c_rt_lib0clear(&___nl__12);
#line 1093
goto label_259;
#line 1093
label_259:
#line 1093
c_rt_lib0clear(&___nl__11);
#line 1094
c_rt_lib0move(&___nl__11, tct0rec(___nl__10));
#line 1094
c_rt_lib0clear(&___nl__0);
#line 1094
c_rt_lib0clear(&___nl__1);
#line 1094
c_rt_lib0clear(&___nl__2);
#line 1094
c_rt_lib0clear(&___nl__3);
#line 1094
c_rt_lib0clear(&___nl__6);
#line 1094
c_rt_lib0clear(&___nl__7);
#line 1094
c_rt_lib0clear(&___nl__8);
#line 1094
c_rt_lib0clear(&___nl__9);
#line 1094
c_rt_lib0clear(&___nl__10);
#line 1094
return ___nl__11;
#line 1094
c_rt_lib0clear(&___nl__11);
#line 1094
c_rt_lib0clear(&___nl__10);
#line 1094
c_rt_lib0clear(&___nl__9);
#line 1095
goto label_276;
#line 1095
label_276:
#line 1095
c_rt_lib0clear(&___nl__7);
#line 1095
c_rt_lib0clear(&___nl__8);
#line 1096
goto label_280;
#line 1096
label_280:
#line 1096
c_rt_lib0clear(&___nl__6);
#line 1096
c_rt_lib0clear(&___nl__0);
#line 1096
c_rt_lib0clear(&___nl__1);
#line 1096
c_rt_lib0clear(&___nl__2);
#line 1096
c_rt_lib0clear(&___nl__3);
#line 1096
return NULL;
}

ImmT type_checker_priv0set_type_to_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
type_checker_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 1101
c_rt_lib0move(&___nl__6, ptd_system0can_delete(___nl__1, ___ref___3, ___ref___5));
#line 1102
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1102
c_rt_lib0move(&___nl__7, type_checker_priv0set_type_to_lval_spec(___nl__0, ___nl__1, ___nl__2, ___nl__8, ___ref___3, ___ref___4, ___ref___5));
#line 1102
c_rt_lib0clear(&___nl__8);
#line 1102
c_rt_lib0clear(&___nl__0);
#line 1102
c_rt_lib0clear(&___nl__1);
#line 1102
c_rt_lib0clear(&___nl__2);
#line 1102
c_rt_lib0clear(&___nl__6);
#line 1102
return ___nl__7;
#line 1102
c_rt_lib0clear(&___nl__7);
#line 1102
c_rt_lib0clear(&___nl__6);
#line 1102
c_rt_lib0clear(&___nl__0);
#line 1102
c_rt_lib0clear(&___nl__1);
#line 1102
c_rt_lib0clear(&___nl__2);
#line 1102
return NULL;
}

ImmT type_checker_priv0set_type_to_lval_spec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5,ImmT * ___ref___6) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
type_checker_priv0__const__init();
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
#line 1108
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___6, ___get_global_const(18)));
#line 1108
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 1108
c_rt_lib0clear(&___nl__8);
#line 1109
c_rt_lib0move(&___nl__8, type_checker_priv0rec_get_var_from_lval(___nl__0, ___ref___6));
#line 1110
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___6, ___get_global_const(18)));
#line 1110
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 1110
c_rt_lib0clear(&___nl__10);
#line 1110
c_rt_lib0move(&___nl__9, c_rt_lib0num_ne(___nl__7, ___nl__9));
#line 1110
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1110
if(c_rt_lib0check_true_native(___nl__9)){ goto label_18;}
#line 1110
c_rt_lib0clear(&___nl__0);
#line 1110
c_rt_lib0clear(&___nl__2);
#line 1110
c_rt_lib0clear(&___nl__3);
#line 1110
c_rt_lib0clear(&___nl__7);
#line 1110
c_rt_lib0clear(&___nl__8);
#line 1110
c_rt_lib0clear(&___nl__9);
#line 1110
return ___nl__1;
#line 1110
goto label_18;
#line 1110
label_18:
#line 1110
c_rt_lib0clear(&___nl__9);
#line 1111
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 1111
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 1111
c_rt_lib0clear(&___nl__10);
#line 1111
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(847)));
#line 1112
c_rt_lib0move(&___nl__10, hash0has_key(*___ref___5, ___nl__9));
#line 1112
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1112
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1112
if(c_rt_lib0check_true_native(___nl__10)){ goto label_44;}
#line 1113
c_rt_lib0move(&___nl__11,___get_global_const(1230));
#line 1113
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__9));
#line 1113
c_rt_lib0move(&___nl__12,___get_global_const(1231));
#line 1113
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 1113
c_rt_lib0clear(&___nl__12);
#line 1113
c_rt_lib0delete(type_checker_priv0add_error(___ref___6, ___nl__11));
#line 1113
c_rt_lib0clear(&___nl__11);
#line 1114
c_rt_lib0clear(&___nl__0);
#line 1114
c_rt_lib0clear(&___nl__2);
#line 1114
c_rt_lib0clear(&___nl__3);
#line 1114
c_rt_lib0clear(&___nl__7);
#line 1114
c_rt_lib0clear(&___nl__8);
#line 1114
c_rt_lib0clear(&___nl__9);
#line 1114
c_rt_lib0clear(&___nl__10);
#line 1114
return ___nl__1;
#line 1115
goto label_44;
#line 1115
label_44:
#line 1115
c_rt_lib0clear(&___nl__10);
#line 1116
c_rt_lib0move(&___nl__10, hash0get_value(*___ref___5, ___nl__9));
#line 1117
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(1137)));
#line 1117
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(45)));
#line 1117
if(c_rt_lib0check_true_native(___nl__12)){ goto label_55;}
#line 1122
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(46)));
#line 1122
if(c_rt_lib0check_true_native(___nl__12)){ goto label_77;}
#line 1122
c_rt_lib0move(&___nl__12,___get_global_const(91));
#line 1122
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 1122
nl_die_arg(___nl__12);
#line 1117
label_55:
#line 1118
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(63)));
#line 1118
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_none(___get_global_const(1083)));
#line 1118
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__15, ___get_global_const(43), ___nl__16));
#line 1118
c_rt_lib0clear(&___nl__15);
#line 1118
c_rt_lib0clear(&___nl__16);
#line 1118
c_rt_lib0move(&___nl__13, type_checker_priv0mk_new_type_lval(___nl__8, ___nl__2, ___nl__14, ___nl__3, ___ref___4, ___ref___6));
#line 1118
c_rt_lib0clear(&___nl__14);
#line 1120
c_rt_lib0delete(type_checker_priv0set_type_to_variable(___ref___5, ___nl__9, ___nl__13));
#line 1121
c_rt_lib0clear(&___nl__0);
#line 1121
c_rt_lib0clear(&___nl__1);
#line 1121
c_rt_lib0clear(&___nl__3);
#line 1121
c_rt_lib0clear(&___nl__7);
#line 1121
c_rt_lib0clear(&___nl__8);
#line 1121
c_rt_lib0clear(&___nl__9);
#line 1121
c_rt_lib0clear(&___nl__10);
#line 1121
c_rt_lib0clear(&___nl__11);
#line 1121
c_rt_lib0clear(&___nl__12);
#line 1121
c_rt_lib0clear(&___nl__13);
#line 1121
return ___nl__2;
#line 1121
c_rt_lib0clear(&___nl__13);
#line 1122
goto label_96;
#line 1122
label_77:
#line 1123
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(63)));
#line 1123
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_none(___get_global_const(1077)));
#line 1123
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__14, ___get_global_const(43), ___nl__15));
#line 1123
c_rt_lib0clear(&___nl__14);
#line 1123
c_rt_lib0clear(&___nl__15);
#line 1123
c_rt_lib0delete(type_checker_priv0mk_new_type_lval(___nl__8, ___nl__2, ___nl__13, ___nl__3, ___ref___4, ___ref___6));
#line 1123
c_rt_lib0clear(&___nl__13);
#line 1124
c_rt_lib0clear(&___nl__0);
#line 1124
c_rt_lib0clear(&___nl__2);
#line 1124
c_rt_lib0clear(&___nl__3);
#line 1124
c_rt_lib0clear(&___nl__7);
#line 1124
c_rt_lib0clear(&___nl__8);
#line 1124
c_rt_lib0clear(&___nl__9);
#line 1124
c_rt_lib0clear(&___nl__10);
#line 1124
c_rt_lib0clear(&___nl__11);
#line 1124
c_rt_lib0clear(&___nl__12);
#line 1124
return ___nl__1;
#line 1125
goto label_96;
#line 1125
label_96:
#line 1125
c_rt_lib0clear(&___nl__11);
#line 1125
c_rt_lib0clear(&___nl__12);
#line 1125
c_rt_lib0clear(&___nl__7);
#line 1125
c_rt_lib0clear(&___nl__8);
#line 1125
c_rt_lib0clear(&___nl__9);
#line 1125
c_rt_lib0clear(&___nl__10);
#line 1125
c_rt_lib0clear(&___nl__0);
#line 1125
c_rt_lib0clear(&___nl__1);
#line 1125
c_rt_lib0clear(&___nl__2);
#line 1125
c_rt_lib0clear(&___nl__3);
#line 1125
return NULL;
}

ImmT type_checker_priv0get_type_left_side_equation(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 1130
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1130
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(208)));
#line 1130
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 1130
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 1130
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1130
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(208)));
#line 1130
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 1130
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 1130
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__6));
#line 1130
c_rt_lib0clear(&___nl__6);
#line 1130
label_10:
#line 1130
c_rt_lib0clear(&___nl__5);
#line 1130
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1130
if(c_rt_lib0check_true_native(___nl__4)){ goto label_23;}
#line 1131
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1131
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(208)));
#line 1131
c_rt_lib0move(&___nl__5, type_checker_priv0get_type_record_key(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 1131
c_rt_lib0clear(&___nl__6);
#line 1131
c_rt_lib0clear(&___nl__0);
#line 1131
c_rt_lib0clear(&___nl__4);
#line 1131
return ___nl__5;
#line 1131
c_rt_lib0clear(&___nl__5);
#line 1132
goto label_30;
#line 1132
label_23:
#line 1133
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 1133
c_rt_lib0clear(&___nl__0);
#line 1133
c_rt_lib0clear(&___nl__4);
#line 1133
return ___nl__5;
#line 1133
c_rt_lib0clear(&___nl__5);
#line 1134
goto label_30;
#line 1134
label_30:
#line 1134
c_rt_lib0clear(&___nl__4);
#line 1134
c_rt_lib0clear(&___nl__0);
#line 1134
return NULL;
}

ImmT type_checker_priv0get_type_record_key(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 1139
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 1139
c_rt_lib0move(&___nl__4, type_checker_priv0check_val(___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 1139
c_rt_lib0clear(&___nl__5);
#line 1140
c_rt_lib0move(&___nl__5, ptd_system0can_delete(___nl__4, ___ref___1, ___ref___3));
#line 1140
c_rt_lib0copy(&___nl__4, ___nl__5);
#line 1140
c_rt_lib0clear(&___nl__5);
#line 1141
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 1141
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(799)));
#line 1141
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1141
if(c_rt_lib0check_true_native(___nl__5)){ goto label_56;}
#line 1142
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 1142
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(799)));
#line 1143
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 1143
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(192)));
#line 1143
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(854)));
#line 1144
c_rt_lib0move(&___nl__8, hash0has_key(___nl__6, ___nl__7));
#line 1144
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1144
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1144
if(c_rt_lib0check_true_native(___nl__8)){ goto label_41;}
#line 1145
c_rt_lib0move(&___nl__9, type_checker_priv0is_known(___nl__4));
#line 1145
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1145
if(c_rt_lib0check_true_native(___nl__9)){ goto label_27;}
#line 1145
c_rt_lib0move(&___nl__10,___get_global_const(1232));
#line 1145
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__7));
#line 1145
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1145
c_rt_lib0clear(&___nl__10);
#line 1145
goto label_27;
#line 1145
label_27:
#line 1145
c_rt_lib0clear(&___nl__9);
#line 1146
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 1146
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 1146
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__10);
#line 1146
c_rt_lib0clear(&___nl__9);
#line 1146
c_rt_lib0clear(&___nl__10);
#line 1147
c_rt_lib0clear(&___nl__0);
#line 1147
c_rt_lib0clear(&___nl__5);
#line 1147
c_rt_lib0clear(&___nl__6);
#line 1147
c_rt_lib0clear(&___nl__7);
#line 1147
c_rt_lib0clear(&___nl__8);
#line 1147
return ___nl__4;
#line 1148
goto label_41;
#line 1148
label_41:
#line 1148
c_rt_lib0clear(&___nl__8);
#line 1149
c_rt_lib0move(&___nl__8, hash0get_value(___nl__6, ___nl__7));
#line 1149
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 1149
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__9);
#line 1149
c_rt_lib0clear(&___nl__8);
#line 1149
c_rt_lib0clear(&___nl__9);
#line 1150
c_rt_lib0clear(&___nl__0);
#line 1150
c_rt_lib0clear(&___nl__5);
#line 1150
c_rt_lib0clear(&___nl__6);
#line 1150
c_rt_lib0clear(&___nl__7);
#line 1150
return ___nl__4;
#line 1150
c_rt_lib0clear(&___nl__6);
#line 1150
c_rt_lib0clear(&___nl__7);
#line 1151
goto label_56;
#line 1151
label_56:
#line 1151
c_rt_lib0clear(&___nl__5);
#line 1152
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 1152
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(798)));
#line 1152
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1152
if(c_rt_lib0check_true_native(___nl__5)){ goto label_72;}
#line 1153
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 1153
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(798)));
#line 1153
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 1153
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__7);
#line 1153
c_rt_lib0clear(&___nl__6);
#line 1153
c_rt_lib0clear(&___nl__7);
#line 1154
c_rt_lib0clear(&___nl__0);
#line 1154
c_rt_lib0clear(&___nl__5);
#line 1154
return ___nl__4;
#line 1155
goto label_72;
#line 1155
label_72:
#line 1155
c_rt_lib0clear(&___nl__5);
#line 1156
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 1156
c_rt_lib0move(&___nl__6, tct0rec(___nl__7));
#line 1156
c_rt_lib0clear(&___nl__7);
#line 1156
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 1156
c_rt_lib0clear(&___nl__6);
#line 1156
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1156
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1156
if(c_rt_lib0check_true_native(___nl__5)){ goto label_91;}
#line 1157
c_rt_lib0move(&___nl__6,___get_global_const(1233));
#line 1158
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 1158
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 1158
c_rt_lib0clear(&___nl__8);
#line 1158
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1158
c_rt_lib0clear(&___nl__7);
#line 1158
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 1158
c_rt_lib0clear(&___nl__6);
#line 1159
goto label_91;
#line 1159
label_91:
#line 1159
c_rt_lib0clear(&___nl__5);
#line 1160
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 1160
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 1160
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__6);
#line 1160
c_rt_lib0clear(&___nl__5);
#line 1160
c_rt_lib0clear(&___nl__6);
#line 1161
c_rt_lib0clear(&___nl__0);
#line 1161
return ___nl__4;
#line 1161
c_rt_lib0clear(&___nl__4);
#line 1161
c_rt_lib0clear(&___nl__0);
#line 1161
return NULL;
}

ImmT type_checker_priv0get_type_from_bin_op_and_check(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
#line 1166
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 1167
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 1167
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 1167
c_rt_lib0clear(&___nl__6);
#line 1168
c_rt_lib0move(&___nl__6,___get_global_const(863));
#line 1168
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__6));
#line 1168
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1168
if(c_rt_lib0check_true_native(___nl__6)){ goto label_69;}
#line 1169
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(63)));
#line 1169
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(801)));
#line 1169
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1169
if(c_rt_lib0check_true_native(___nl__7)){ goto label_28;}
#line 1170
c_rt_lib0move(&___nl__8,___get_global_const(1234));
#line 1170
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__8));
#line 1170
c_rt_lib0clear(&___nl__8);
#line 1171
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 1171
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(1083)));
#line 1171
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__9, ___get_global_const(43), ___nl__10));
#line 1171
c_rt_lib0clear(&___nl__9);
#line 1171
c_rt_lib0clear(&___nl__10);
#line 1171
c_rt_lib0clear(&___nl__0);
#line 1171
c_rt_lib0clear(&___nl__4);
#line 1171
c_rt_lib0clear(&___nl__5);
#line 1171
c_rt_lib0clear(&___nl__6);
#line 1171
c_rt_lib0clear(&___nl__7);
#line 1171
return ___nl__8;
#line 1171
c_rt_lib0clear(&___nl__8);
#line 1172
goto label_28;
#line 1172
label_28:
#line 1172
c_rt_lib0clear(&___nl__7);
#line 1173
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(18)));
#line 1173
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 1173
c_rt_lib0clear(&___nl__8);
#line 1174
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 1174
c_rt_lib0move(&___nl__8, type_checker_priv0get_type_left_side_equation(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 1174
c_rt_lib0clear(&___nl__9);
#line 1175
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(18)));
#line 1175
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 1175
c_rt_lib0clear(&___nl__10);
#line 1175
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__7));
#line 1175
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 1175
c_rt_lib0move(&___nl__9, c_rt_lib0gt(___nl__9, ___nl__10));
#line 1175
c_rt_lib0clear(&___nl__10);
#line 1175
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1175
if(c_rt_lib0check_true_native(___nl__9)){ goto label_53;}
#line 1175
c_rt_lib0clear(&___nl__0);
#line 1175
c_rt_lib0clear(&___nl__4);
#line 1175
c_rt_lib0clear(&___nl__5);
#line 1175
c_rt_lib0clear(&___nl__6);
#line 1175
c_rt_lib0clear(&___nl__7);
#line 1175
c_rt_lib0clear(&___nl__9);
#line 1175
return ___nl__8;
#line 1175
goto label_53;
#line 1175
label_53:
#line 1175
c_rt_lib0clear(&___nl__9);
#line 1176
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 1176
c_rt_lib0move(&___nl__9, type_checker_priv0set_type_to_lval(___nl__10, ___nl__8, ___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 1176
c_rt_lib0clear(&___nl__10);
#line 1176
c_rt_lib0clear(&___nl__0);
#line 1176
c_rt_lib0clear(&___nl__4);
#line 1176
c_rt_lib0clear(&___nl__5);
#line 1176
c_rt_lib0clear(&___nl__6);
#line 1176
c_rt_lib0clear(&___nl__7);
#line 1176
c_rt_lib0clear(&___nl__8);
#line 1176
return ___nl__9;
#line 1176
c_rt_lib0clear(&___nl__9);
#line 1176
c_rt_lib0clear(&___nl__7);
#line 1176
c_rt_lib0clear(&___nl__8);
#line 1177
goto label_69;
#line 1177
label_69:
#line 1177
c_rt_lib0clear(&___nl__6);
#line 1178
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 1178
c_rt_lib0move(&___nl__7, type_checker_priv0check_val(___nl__8, ___ref___1, ___ref___2, ___ref___3));
#line 1178
c_rt_lib0clear(&___nl__8);
#line 1178
c_rt_lib0move(&___nl__6, ptd_system0can_delete(___nl__7, ___ref___1, ___ref___3));
#line 1178
c_rt_lib0clear(&___nl__7);
#line 1180
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 1180
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(43)));
#line 1180
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__8, ___get_global_const(43), ___nl__9));
#line 1180
c_rt_lib0clear(&___nl__8);
#line 1180
c_rt_lib0clear(&___nl__9);
#line 1181
c_rt_lib0move(&___nl__8,___get_global_const(848));
#line 1181
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__4, ___nl__8));
#line 1181
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1181
if(c_rt_lib0check_true_native(___nl__8)){ goto label_95;}
#line 1182
c_rt_lib0move(&___nl__9, type_checker_priv0get_type_record_key(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 1182
c_rt_lib0clear(&___nl__0);
#line 1182
c_rt_lib0clear(&___nl__4);
#line 1182
c_rt_lib0clear(&___nl__5);
#line 1182
c_rt_lib0clear(&___nl__6);
#line 1182
c_rt_lib0clear(&___nl__7);
#line 1182
c_rt_lib0clear(&___nl__8);
#line 1182
return ___nl__9;
#line 1182
c_rt_lib0clear(&___nl__9);
#line 1183
goto label_95;
#line 1183
label_95:
#line 1183
c_rt_lib0clear(&___nl__8);
#line 1184
c_rt_lib0move(&___nl__8,___get_global_const(849));
#line 1184
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__4, ___nl__8));
#line 1184
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1184
if(c_rt_lib0check_true_native(___nl__8)){ goto label_159;}
#line 1185
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1185
c_rt_lib0move(&___nl__10, tct0arr(___nl__11));
#line 1185
c_rt_lib0clear(&___nl__11);
#line 1185
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__6, ___nl__10, ___ref___1, ___ref___3));
#line 1185
c_rt_lib0clear(&___nl__10);
#line 1185
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1185
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1185
if(c_rt_lib0check_true_native(___nl__9)){ goto label_125;}
#line 1186
c_rt_lib0move(&___nl__10,___get_global_const(1235));
#line 1187
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1187
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 1187
c_rt_lib0clear(&___nl__12);
#line 1187
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 1187
c_rt_lib0clear(&___nl__11);
#line 1187
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1187
c_rt_lib0clear(&___nl__10);
#line 1188
c_rt_lib0clear(&___nl__0);
#line 1188
c_rt_lib0clear(&___nl__4);
#line 1188
c_rt_lib0clear(&___nl__5);
#line 1188
c_rt_lib0clear(&___nl__6);
#line 1188
c_rt_lib0clear(&___nl__8);
#line 1188
c_rt_lib0clear(&___nl__9);
#line 1188
return ___nl__7;
#line 1189
goto label_125;
#line 1189
label_125:
#line 1189
c_rt_lib0clear(&___nl__9);
#line 1190
c_rt_lib0move(&___nl__10, tct0sim());
#line 1190
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 1190
c_rt_lib0clear(&___nl__10);
#line 1190
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1190
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1190
if(c_rt_lib0check_true_native(___nl__9)){ goto label_137;}
#line 1191
c_rt_lib0move(&___nl__10,___get_global_const(1236));
#line 1191
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1191
c_rt_lib0clear(&___nl__10);
#line 1192
goto label_137;
#line 1192
label_137:
#line 1192
c_rt_lib0clear(&___nl__9);
#line 1193
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1193
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(797)));
#line 1193
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1193
if(c_rt_lib0check_true_native(___nl__9)){ goto label_150;}
#line 1193
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1193
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(797)));
#line 1193
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 1193
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(63), ___nl__11);
#line 1193
c_rt_lib0clear(&___nl__10);
#line 1193
c_rt_lib0clear(&___nl__11);
#line 1193
goto label_150;
#line 1193
label_150:
#line 1193
c_rt_lib0clear(&___nl__9);
#line 1194
c_rt_lib0clear(&___nl__0);
#line 1194
c_rt_lib0clear(&___nl__4);
#line 1194
c_rt_lib0clear(&___nl__5);
#line 1194
c_rt_lib0clear(&___nl__7);
#line 1194
c_rt_lib0clear(&___nl__8);
#line 1194
return ___nl__6;
#line 1195
goto label_159;
#line 1195
label_159:
#line 1195
c_rt_lib0clear(&___nl__8);
#line 1196
c_rt_lib0move(&___nl__8,___get_global_const(850));
#line 1196
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__4, ___nl__8));
#line 1196
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1196
if(c_rt_lib0check_true_native(___nl__8)){ goto label_218;}
#line 1197
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1197
c_rt_lib0move(&___nl__10, tct0hash(___nl__11));
#line 1197
c_rt_lib0clear(&___nl__11);
#line 1197
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__6, ___nl__10, ___ref___1, ___ref___3));
#line 1197
c_rt_lib0clear(&___nl__10);
#line 1197
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1197
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1197
if(c_rt_lib0check_true_native(___nl__9)){ goto label_184;}
#line 1198
c_rt_lib0move(&___nl__10,___get_global_const(1237));
#line 1198
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1198
c_rt_lib0clear(&___nl__10);
#line 1199
c_rt_lib0clear(&___nl__0);
#line 1199
c_rt_lib0clear(&___nl__4);
#line 1199
c_rt_lib0clear(&___nl__5);
#line 1199
c_rt_lib0clear(&___nl__6);
#line 1199
c_rt_lib0clear(&___nl__8);
#line 1199
c_rt_lib0clear(&___nl__9);
#line 1199
return ___nl__7;
#line 1200
goto label_184;
#line 1200
label_184:
#line 1200
c_rt_lib0clear(&___nl__9);
#line 1201
c_rt_lib0move(&___nl__10, tct0sim());
#line 1201
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 1201
c_rt_lib0clear(&___nl__10);
#line 1201
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1201
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1201
if(c_rt_lib0check_true_native(___nl__9)){ goto label_196;}
#line 1202
c_rt_lib0move(&___nl__10,___get_global_const(1238));
#line 1202
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1202
c_rt_lib0clear(&___nl__10);
#line 1203
goto label_196;
#line 1203
label_196:
#line 1203
c_rt_lib0clear(&___nl__9);
#line 1204
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1204
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(798)));
#line 1204
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1204
if(c_rt_lib0check_true_native(___nl__9)){ goto label_209;}
#line 1204
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1204
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(798)));
#line 1204
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 1204
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(63), ___nl__11);
#line 1204
c_rt_lib0clear(&___nl__10);
#line 1204
c_rt_lib0clear(&___nl__11);
#line 1204
goto label_209;
#line 1204
label_209:
#line 1204
c_rt_lib0clear(&___nl__9);
#line 1205
c_rt_lib0clear(&___nl__0);
#line 1205
c_rt_lib0clear(&___nl__4);
#line 1205
c_rt_lib0clear(&___nl__5);
#line 1205
c_rt_lib0clear(&___nl__7);
#line 1205
c_rt_lib0clear(&___nl__8);
#line 1205
return ___nl__6;
#line 1206
goto label_218;
#line 1206
label_218:
#line 1206
c_rt_lib0clear(&___nl__8);
#line 1207
c_rt_lib0move(&___nl__8,___get_global_const(892));
#line 1207
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__4, ___nl__8));
#line 1207
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1207
if(c_rt_lib0check_true_native(___nl__8)){ goto label_279;}
#line 1208
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1208
c_rt_lib0move(&___nl__10, tct0arr(___nl__11));
#line 1208
c_rt_lib0clear(&___nl__11);
#line 1208
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__6, ___nl__10, ___ref___1, ___ref___3));
#line 1208
c_rt_lib0clear(&___nl__10);
#line 1208
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1208
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1208
if(c_rt_lib0check_true_native(___nl__9)){ goto label_243;}
#line 1209
c_rt_lib0move(&___nl__10,___get_global_const(1239));
#line 1209
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1209
c_rt_lib0clear(&___nl__10);
#line 1210
c_rt_lib0clear(&___nl__0);
#line 1210
c_rt_lib0clear(&___nl__4);
#line 1210
c_rt_lib0clear(&___nl__5);
#line 1210
c_rt_lib0clear(&___nl__6);
#line 1210
c_rt_lib0clear(&___nl__8);
#line 1210
c_rt_lib0clear(&___nl__9);
#line 1210
return ___nl__7;
#line 1211
goto label_243;
#line 1211
label_243:
#line 1211
c_rt_lib0clear(&___nl__9);
#line 1212
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(63)));
#line 1212
c_rt_lib0move(&___nl__9, tct0arr(___nl__10));
#line 1212
c_rt_lib0clear(&___nl__10);
#line 1212
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 1212
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(63), ___nl__10);
#line 1212
c_rt_lib0clear(&___nl__9);
#line 1212
c_rt_lib0clear(&___nl__10);
#line 1213
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 1213
c_rt_lib0move(&___nl__11, tct0empty());
#line 1213
c_rt_lib0move(&___nl__10, tct0arr(___nl__11));
#line 1213
c_rt_lib0clear(&___nl__11);
#line 1213
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__9, ___nl__6, ___nl__5, ___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 1213
c_rt_lib0clear(&___nl__10);
#line 1213
c_rt_lib0clear(&___nl__9);
#line 1215
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1215
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(797)));
#line 1215
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1215
if(c_rt_lib0check_true_native(___nl__9)){ goto label_270;}
#line 1215
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1215
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(797)));
#line 1215
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 1215
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(63), ___nl__11);
#line 1215
c_rt_lib0clear(&___nl__10);
#line 1215
c_rt_lib0clear(&___nl__11);
#line 1215
goto label_270;
#line 1215
label_270:
#line 1215
c_rt_lib0clear(&___nl__9);
#line 1216
c_rt_lib0clear(&___nl__0);
#line 1216
c_rt_lib0clear(&___nl__4);
#line 1216
c_rt_lib0clear(&___nl__5);
#line 1216
c_rt_lib0clear(&___nl__7);
#line 1216
c_rt_lib0clear(&___nl__8);
#line 1216
return ___nl__6;
#line 1218
goto label_279;
#line 1218
label_279:
#line 1218
c_rt_lib0clear(&___nl__8);
#line 1219
c_rt_lib0move(&___nl__8, tc_types0get_bin_op_def(___nl__4));
#line 1220
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1130)));
#line 1220
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__6, ___nl__10, ___ref___1, ___ref___3));
#line 1220
c_rt_lib0clear(&___nl__10);
#line 1220
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1220
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1220
if(c_rt_lib0check_true_native(___nl__9)){ goto label_296;}
#line 1221
c_rt_lib0move(&___nl__10,___get_global_const(1240));
#line 1221
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__4));
#line 1221
c_rt_lib0move(&___nl__11,___get_global_const(464));
#line 1221
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 1221
c_rt_lib0clear(&___nl__11);
#line 1221
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1221
c_rt_lib0clear(&___nl__10);
#line 1222
goto label_296;
#line 1222
label_296:
#line 1222
c_rt_lib0clear(&___nl__9);
#line 1223
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1131)));
#line 1223
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 1223
c_rt_lib0clear(&___nl__10);
#line 1223
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1223
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1223
if(c_rt_lib0check_true_native(___nl__9)){ goto label_312;}
#line 1224
c_rt_lib0move(&___nl__10,___get_global_const(1241));
#line 1224
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__4));
#line 1224
c_rt_lib0move(&___nl__11,___get_global_const(464));
#line 1224
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 1224
c_rt_lib0clear(&___nl__11);
#line 1224
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1224
c_rt_lib0clear(&___nl__10);
#line 1225
goto label_312;
#line 1225
label_312:
#line 1225
c_rt_lib0clear(&___nl__9);
#line 1226
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(341)));
#line 1226
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(1083)));
#line 1226
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__10, ___get_global_const(43), ___nl__11));
#line 1226
c_rt_lib0clear(&___nl__10);
#line 1226
c_rt_lib0clear(&___nl__11);
#line 1226
c_rt_lib0clear(&___nl__0);
#line 1226
c_rt_lib0clear(&___nl__4);
#line 1226
c_rt_lib0clear(&___nl__5);
#line 1226
c_rt_lib0clear(&___nl__6);
#line 1226
c_rt_lib0clear(&___nl__7);
#line 1226
c_rt_lib0clear(&___nl__8);
#line 1226
return ___nl__9;
#line 1226
c_rt_lib0clear(&___nl__9);
#line 1226
c_rt_lib0clear(&___nl__4);
#line 1226
c_rt_lib0clear(&___nl__5);
#line 1226
c_rt_lib0clear(&___nl__6);
#line 1226
c_rt_lib0clear(&___nl__7);
#line 1226
c_rt_lib0clear(&___nl__8);
#line 1226
c_rt_lib0clear(&___nl__0);
#line 1226
return NULL;
}

ImmT type_checker_priv0get_print_tct_type_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 1230
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 1230
if(c_rt_lib0check_true_native(___nl__1)){ goto label_21;}
#line 1232
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(796)));
#line 1232
if(c_rt_lib0check_true_native(___nl__1)){ goto label_28;}
#line 1234
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 1234
if(c_rt_lib0check_true_native(___nl__1)){ goto label_35;}
#line 1236
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 1236
if(c_rt_lib0check_true_native(___nl__1)){ goto label_42;}
#line 1238
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(800)));
#line 1238
if(c_rt_lib0check_true_native(___nl__1)){ goto label_49;}
#line 1240
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(797)));
#line 1240
if(c_rt_lib0check_true_native(___nl__1)){ goto label_60;}
#line 1242
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 1242
if(c_rt_lib0check_true_native(___nl__1)){ goto label_76;}
#line 1252
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(799)));
#line 1252
if(c_rt_lib0check_true_native(___nl__1)){ goto label_131;}
#line 1258
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(798)));
#line 1258
if(c_rt_lib0check_true_native(___nl__1)){ goto label_167;}
#line 1258
c_rt_lib0move(&___nl__1,___get_global_const(91));
#line 1258
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 1258
nl_die_arg(___nl__1);
#line 1230
label_21:
#line 1231
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 1231
c_rt_lib0clear(&___nl__0);
#line 1231
c_rt_lib0clear(&___nl__1);
#line 1231
return ___nl__2;
#line 1231
c_rt_lib0clear(&___nl__2);
#line 1232
goto label_183;
#line 1232
label_28:
#line 1233
c_rt_lib0move(&___nl__2,___get_global_const(1242));
#line 1233
c_rt_lib0clear(&___nl__0);
#line 1233
c_rt_lib0clear(&___nl__1);
#line 1233
return ___nl__2;
#line 1233
c_rt_lib0clear(&___nl__2);
#line 1234
goto label_183;
#line 1234
label_35:
#line 1235
c_rt_lib0move(&___nl__2,___get_global_const(1243));
#line 1235
c_rt_lib0clear(&___nl__0);
#line 1235
c_rt_lib0clear(&___nl__1);
#line 1235
return ___nl__2;
#line 1235
c_rt_lib0clear(&___nl__2);
#line 1236
goto label_183;
#line 1236
label_42:
#line 1237
c_rt_lib0move(&___nl__2,___get_global_const(1244));
#line 1237
c_rt_lib0clear(&___nl__0);
#line 1237
c_rt_lib0clear(&___nl__1);
#line 1237
return ___nl__2;
#line 1237
c_rt_lib0clear(&___nl__2);
#line 1238
goto label_183;
#line 1238
label_49:
#line 1238
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(800)));
#line 1239
c_rt_lib0move(&___nl__3,___get_global_const(267));
#line 1239
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 1239
c_rt_lib0clear(&___nl__0);
#line 1239
c_rt_lib0clear(&___nl__1);
#line 1239
c_rt_lib0clear(&___nl__2);
#line 1239
return ___nl__3;
#line 1239
c_rt_lib0clear(&___nl__3);
#line 1239
c_rt_lib0clear(&___nl__2);
#line 1240
goto label_183;
#line 1240
label_60:
#line 1240
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(797)));
#line 1241
c_rt_lib0move(&___nl__3,___get_global_const(1245));
#line 1241
c_rt_lib0move(&___nl__4, type_checker_priv0get_print_tct_type_name(___nl__2));
#line 1241
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1241
c_rt_lib0clear(&___nl__4);
#line 1241
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 1241
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1241
c_rt_lib0clear(&___nl__4);
#line 1241
c_rt_lib0clear(&___nl__0);
#line 1241
c_rt_lib0clear(&___nl__1);
#line 1241
c_rt_lib0clear(&___nl__2);
#line 1241
return ___nl__3;
#line 1241
c_rt_lib0clear(&___nl__3);
#line 1241
c_rt_lib0clear(&___nl__2);
#line 1242
goto label_183;
#line 1242
label_76:
#line 1242
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(803)));
#line 1243
c_rt_lib0move(&___nl__3,___get_global_const(1246));
#line 1244
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__2));
#line 1244
label_80:
#line 1244
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 1244
if(c_rt_lib0check_true_native(___nl__4)){ goto label_116;}
#line 1244
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 1244
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__2, ___nl__4));
#line 1245
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(808)));
#line 1245
if(c_rt_lib0check_true_native(___nl__7)){ goto label_92;}
#line 1247
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(807)));
#line 1247
if(c_rt_lib0check_true_native(___nl__7)){ goto label_106;}
#line 1247
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 1247
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__5));
#line 1247
nl_die_arg(___nl__7);
#line 1245
label_92:
#line 1245
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(808)));
#line 1246
c_rt_lib0move(&___nl__9,___get_global_const(270));
#line 1246
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__4, ___nl__9));
#line 1246
c_rt_lib0move(&___nl__10, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 1246
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1246
c_rt_lib0clear(&___nl__10);
#line 1246
c_rt_lib0move(&___nl__10,___get_global_const(271));
#line 1246
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1246
c_rt_lib0clear(&___nl__10);
#line 1246
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 1246
c_rt_lib0clear(&___nl__9);
#line 1246
c_rt_lib0clear(&___nl__8);
#line 1247
goto label_112;
#line 1247
label_106:
#line 1248
c_rt_lib0move(&___nl__8,___get_global_const(271));
#line 1248
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__4, ___nl__8));
#line 1248
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 1248
c_rt_lib0clear(&___nl__8);
#line 1249
goto label_112;
#line 1249
label_112:
#line 1249
c_rt_lib0clear(&___nl__7);
#line 1250
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 1250
goto label_80;
#line 1250
label_116:
#line 1250
c_rt_lib0clear(&___nl__4);
#line 1250
c_rt_lib0clear(&___nl__5);
#line 1250
c_rt_lib0clear(&___nl__6);
#line 1251
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 1251
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__3, ___nl__4));
#line 1251
c_rt_lib0clear(&___nl__0);
#line 1251
c_rt_lib0clear(&___nl__1);
#line 1251
c_rt_lib0clear(&___nl__2);
#line 1251
c_rt_lib0clear(&___nl__3);
#line 1251
return ___nl__4;
#line 1251
c_rt_lib0clear(&___nl__4);
#line 1251
c_rt_lib0clear(&___nl__3);
#line 1251
c_rt_lib0clear(&___nl__2);
#line 1252
goto label_183;
#line 1252
label_131:
#line 1252
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(799)));
#line 1253
c_rt_lib0move(&___nl__3,___get_global_const(1247));
#line 1254
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__2));
#line 1254
label_135:
#line 1254
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 1254
if(c_rt_lib0check_true_native(___nl__4)){ goto label_152;}
#line 1254
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 1254
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__2, ___nl__4));
#line 1255
c_rt_lib0move(&___nl__7,___get_global_const(270));
#line 1255
c_rt_lib0move(&___nl__7, c_rt_lib0concat_new(___nl__4, ___nl__7));
#line 1255
c_rt_lib0move(&___nl__8, type_checker_priv0get_print_tct_type_name(___nl__5));
#line 1255
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 1255
c_rt_lib0clear(&___nl__8);
#line 1255
c_rt_lib0move(&___nl__8,___get_global_const(271));
#line 1255
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 1255
c_rt_lib0clear(&___nl__8);
#line 1255
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__7));
#line 1255
c_rt_lib0clear(&___nl__7);
#line 1256
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 1256
goto label_135;
#line 1256
label_152:
#line 1256
c_rt_lib0clear(&___nl__4);
#line 1256
c_rt_lib0clear(&___nl__5);
#line 1256
c_rt_lib0clear(&___nl__6);
#line 1257
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 1257
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__3, ___nl__4));
#line 1257
c_rt_lib0clear(&___nl__0);
#line 1257
c_rt_lib0clear(&___nl__1);
#line 1257
c_rt_lib0clear(&___nl__2);
#line 1257
c_rt_lib0clear(&___nl__3);
#line 1257
return ___nl__4;
#line 1257
c_rt_lib0clear(&___nl__4);
#line 1257
c_rt_lib0clear(&___nl__3);
#line 1257
c_rt_lib0clear(&___nl__2);
#line 1258
goto label_183;
#line 1258
label_167:
#line 1258
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(798)));
#line 1259
c_rt_lib0move(&___nl__3,___get_global_const(1248));
#line 1259
c_rt_lib0move(&___nl__4, type_checker_priv0get_print_tct_type_name(___nl__2));
#line 1259
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1259
c_rt_lib0clear(&___nl__4);
#line 1259
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 1259
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1259
c_rt_lib0clear(&___nl__4);
#line 1259
c_rt_lib0clear(&___nl__0);
#line 1259
c_rt_lib0clear(&___nl__1);
#line 1259
c_rt_lib0clear(&___nl__2);
#line 1259
return ___nl__3;
#line 1259
c_rt_lib0clear(&___nl__3);
#line 1259
c_rt_lib0clear(&___nl__2);
#line 1260
goto label_183;
#line 1260
label_183:
#line 1260
c_rt_lib0clear(&___nl__1);
#line 1260
c_rt_lib0clear(&___nl__0);
#line 1260
return NULL;
}

ImmT type_checker_priv0get_print_tct_label(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 1264
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 1264
if(c_rt_lib0check_true_native(___nl__1)){ goto label_21;}
#line 1266
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(796)));
#line 1266
if(c_rt_lib0check_true_native(___nl__1)){ goto label_28;}
#line 1268
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 1268
if(c_rt_lib0check_true_native(___nl__1)){ goto label_35;}
#line 1270
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 1270
if(c_rt_lib0check_true_native(___nl__1)){ goto label_42;}
#line 1272
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(800)));
#line 1272
if(c_rt_lib0check_true_native(___nl__1)){ goto label_49;}
#line 1274
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(797)));
#line 1274
if(c_rt_lib0check_true_native(___nl__1)){ goto label_59;}
#line 1276
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 1276
if(c_rt_lib0check_true_native(___nl__1)){ goto label_69;}
#line 1278
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(799)));
#line 1278
if(c_rt_lib0check_true_native(___nl__1)){ goto label_79;}
#line 1280
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(798)));
#line 1280
if(c_rt_lib0check_true_native(___nl__1)){ goto label_89;}
#line 1280
c_rt_lib0move(&___nl__1,___get_global_const(91));
#line 1280
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 1280
nl_die_arg(___nl__1);
#line 1264
label_21:
#line 1265
c_rt_lib0move(&___nl__2,___get_global_const(1249));
#line 1265
c_rt_lib0clear(&___nl__0);
#line 1265
c_rt_lib0clear(&___nl__1);
#line 1265
return ___nl__2;
#line 1265
c_rt_lib0clear(&___nl__2);
#line 1266
goto label_99;
#line 1266
label_28:
#line 1267
c_rt_lib0move(&___nl__2,___get_global_const(767));
#line 1267
c_rt_lib0clear(&___nl__0);
#line 1267
c_rt_lib0clear(&___nl__1);
#line 1267
return ___nl__2;
#line 1267
c_rt_lib0clear(&___nl__2);
#line 1268
goto label_99;
#line 1268
label_35:
#line 1269
c_rt_lib0move(&___nl__2,___get_global_const(1250));
#line 1269
c_rt_lib0clear(&___nl__0);
#line 1269
c_rt_lib0clear(&___nl__1);
#line 1269
return ___nl__2;
#line 1269
c_rt_lib0clear(&___nl__2);
#line 1270
goto label_99;
#line 1270
label_42:
#line 1271
c_rt_lib0move(&___nl__2,___get_global_const(762));
#line 1271
c_rt_lib0clear(&___nl__0);
#line 1271
c_rt_lib0clear(&___nl__1);
#line 1271
return ___nl__2;
#line 1271
c_rt_lib0clear(&___nl__2);
#line 1272
goto label_99;
#line 1272
label_49:
#line 1272
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(800)));
#line 1273
c_rt_lib0move(&___nl__3,___get_global_const(1251));
#line 1273
c_rt_lib0clear(&___nl__0);
#line 1273
c_rt_lib0clear(&___nl__1);
#line 1273
c_rt_lib0clear(&___nl__2);
#line 1273
return ___nl__3;
#line 1273
c_rt_lib0clear(&___nl__3);
#line 1273
c_rt_lib0clear(&___nl__2);
#line 1274
goto label_99;
#line 1274
label_59:
#line 1274
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(797)));
#line 1275
c_rt_lib0move(&___nl__3,___get_global_const(764));
#line 1275
c_rt_lib0clear(&___nl__0);
#line 1275
c_rt_lib0clear(&___nl__1);
#line 1275
c_rt_lib0clear(&___nl__2);
#line 1275
return ___nl__3;
#line 1275
c_rt_lib0clear(&___nl__3);
#line 1275
c_rt_lib0clear(&___nl__2);
#line 1276
goto label_99;
#line 1276
label_69:
#line 1276
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(803)));
#line 1277
c_rt_lib0move(&___nl__3,___get_global_const(766));
#line 1277
c_rt_lib0clear(&___nl__0);
#line 1277
c_rt_lib0clear(&___nl__1);
#line 1277
c_rt_lib0clear(&___nl__2);
#line 1277
return ___nl__3;
#line 1277
c_rt_lib0clear(&___nl__3);
#line 1277
c_rt_lib0clear(&___nl__2);
#line 1278
goto label_99;
#line 1278
label_79:
#line 1278
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(799)));
#line 1279
c_rt_lib0move(&___nl__3,___get_global_const(1252));
#line 1279
c_rt_lib0clear(&___nl__0);
#line 1279
c_rt_lib0clear(&___nl__1);
#line 1279
c_rt_lib0clear(&___nl__2);
#line 1279
return ___nl__3;
#line 1279
c_rt_lib0clear(&___nl__3);
#line 1279
c_rt_lib0clear(&___nl__2);
#line 1280
goto label_99;
#line 1280
label_89:
#line 1280
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(798)));
#line 1281
c_rt_lib0move(&___nl__3,___get_global_const(763));
#line 1281
c_rt_lib0clear(&___nl__0);
#line 1281
c_rt_lib0clear(&___nl__1);
#line 1281
c_rt_lib0clear(&___nl__2);
#line 1281
return ___nl__3;
#line 1281
c_rt_lib0clear(&___nl__3);
#line 1281
c_rt_lib0clear(&___nl__2);
#line 1282
goto label_99;
#line 1282
label_99:
#line 1282
c_rt_lib0clear(&___nl__1);
#line 1282
c_rt_lib0clear(&___nl__0);
#line 1282
return NULL;
}

ImmT type_checker_priv0get_print_check_info(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
#line 1286
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(48)));
#line 1286
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 1288
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(47)));
#line 1288
if(c_rt_lib0check_true_native(___nl__1)){ goto label_12;}
#line 1288
c_rt_lib0move(&___nl__1,___get_global_const(91));
#line 1288
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 1288
nl_die_arg(___nl__1);
#line 1286
label_7:
#line 1287
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 1287
nl_die_arg(___nl__2);
#line 1287
c_rt_lib0clear(&___nl__2);
#line 1288
goto label_362;
#line 1288
label_12:
#line 1288
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(47)));
#line 1289
c_rt_lib0move(&___nl__3,___get_global_const(571));
#line 1290
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(689)));
#line 1290
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 1290
c_rt_lib0clear(&___nl__5);
#line 1290
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 1290
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__5));
#line 1290
c_rt_lib0clear(&___nl__5);
#line 1290
label_21:
#line 1290
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 1290
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__4, ___nl__5));
#line 1290
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1290
if(c_rt_lib0check_true_native(___nl__5)){ goto label_81;}
#line 1291
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(689)));
#line 1291
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__4));
#line 1291
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(1019)));
#line 1291
if(c_rt_lib0check_true_native(___nl__7)){ goto label_39;}
#line 1293
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(1026)));
#line 1293
if(c_rt_lib0check_true_native(___nl__7)){ goto label_44;}
#line 1295
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(1020)));
#line 1295
if(c_rt_lib0check_true_native(___nl__7)){ goto label_55;}
#line 1297
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(1024)));
#line 1297
if(c_rt_lib0check_true_native(___nl__7)){ goto label_66;}
#line 1297
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 1297
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 1297
nl_die_arg(___nl__7);
#line 1291
label_39:
#line 1292
c_rt_lib0move(&___nl__8,___get_global_const(764));
#line 1292
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 1292
c_rt_lib0clear(&___nl__8);
#line 1293
goto label_71;
#line 1293
label_44:
#line 1293
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(1026)));
#line 1294
c_rt_lib0move(&___nl__9,___get_global_const(1246));
#line 1294
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__8));
#line 1294
c_rt_lib0move(&___nl__10,___get_global_const(260));
#line 1294
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1294
c_rt_lib0clear(&___nl__10);
#line 1294
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 1294
c_rt_lib0clear(&___nl__9);
#line 1294
c_rt_lib0clear(&___nl__8);
#line 1295
goto label_71;
#line 1295
label_55:
#line 1295
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(1020)));
#line 1296
c_rt_lib0move(&___nl__9,___get_global_const(1247));
#line 1296
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__8));
#line 1296
c_rt_lib0move(&___nl__10,___get_global_const(260));
#line 1296
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1296
c_rt_lib0clear(&___nl__10);
#line 1296
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 1296
c_rt_lib0clear(&___nl__9);
#line 1296
c_rt_lib0clear(&___nl__8);
#line 1297
goto label_71;
#line 1297
label_66:
#line 1298
c_rt_lib0move(&___nl__8,___get_global_const(763));
#line 1298
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 1298
c_rt_lib0clear(&___nl__8);
#line 1299
goto label_71;
#line 1299
label_71:
#line 1299
c_rt_lib0clear(&___nl__6);
#line 1299
c_rt_lib0clear(&___nl__7);
#line 1300
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 1300
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 1300
c_rt_lib0clear(&___nl__6);
#line 1290
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 1290
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__6));
#line 1290
c_rt_lib0clear(&___nl__6);
#line 1301
goto label_21;
#line 1301
label_81:
#line 1301
c_rt_lib0clear(&___nl__4);
#line 1301
c_rt_lib0clear(&___nl__5);
#line 1302
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1302
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(799)));
#line 1302
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 1302
if(c_rt_lib0check_true_native(___nl__5)){ goto label_90;}
#line 1302
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(278)));
#line 1302
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(799)));
#line 1302
label_90:
#line 1302
c_rt_lib0clear(&___nl__5);
#line 1302
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1302
if(c_rt_lib0check_true_native(___nl__4)){ goto label_191;}
#line 1303
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1303
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(799)));
#line 1303
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 1303
label_97:
#line 1303
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 1303
if(c_rt_lib0check_true_native(___nl__6)){ goto label_137;}
#line 1303
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 1303
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 1304
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(278)));
#line 1304
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(799)));
#line 1304
c_rt_lib0move(&___nl__9, hash0has_key(___nl__10, ___nl__6));
#line 1304
c_rt_lib0clear(&___nl__10);
#line 1304
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1304
if(c_rt_lib0check_true_native(___nl__9)){ goto label_111;}
#line 1304
c_rt_lib0clear(&___nl__9);
#line 1304
goto label_134;
#line 1304
goto label_111;
#line 1304
label_111:
#line 1304
c_rt_lib0clear(&___nl__9);
#line 1305
c_rt_lib0move(&___nl__9,___get_global_const(1253));
#line 1305
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__3, ___nl__9));
#line 1305
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1305
c_rt_lib0move(&___nl__10,___get_global_const(1254));
#line 1305
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1305
c_rt_lib0clear(&___nl__10);
#line 1305
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1306
c_rt_lib0move(&___nl__10,___get_global_const(1255));
#line 1306
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1306
c_rt_lib0clear(&___nl__10);
#line 1306
c_rt_lib0clear(&___nl__0);
#line 1306
c_rt_lib0clear(&___nl__1);
#line 1306
c_rt_lib0clear(&___nl__2);
#line 1306
c_rt_lib0clear(&___nl__3);
#line 1306
c_rt_lib0clear(&___nl__4);
#line 1306
c_rt_lib0clear(&___nl__5);
#line 1306
c_rt_lib0clear(&___nl__6);
#line 1306
c_rt_lib0clear(&___nl__7);
#line 1306
c_rt_lib0clear(&___nl__8);
#line 1306
return ___nl__9;
#line 1306
c_rt_lib0clear(&___nl__9);
#line 1306
label_134:
#line 1307
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 1307
goto label_97;
#line 1307
label_137:
#line 1307
c_rt_lib0clear(&___nl__5);
#line 1307
c_rt_lib0clear(&___nl__6);
#line 1307
c_rt_lib0clear(&___nl__7);
#line 1307
c_rt_lib0clear(&___nl__8);
#line 1308
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(278)));
#line 1308
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(799)));
#line 1308
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 1308
label_145:
#line 1308
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 1308
if(c_rt_lib0check_true_native(___nl__6)){ goto label_185;}
#line 1308
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 1308
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 1309
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1309
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(799)));
#line 1309
c_rt_lib0move(&___nl__9, hash0has_key(___nl__10, ___nl__6));
#line 1309
c_rt_lib0clear(&___nl__10);
#line 1309
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1309
if(c_rt_lib0check_true_native(___nl__9)){ goto label_159;}
#line 1309
c_rt_lib0clear(&___nl__9);
#line 1309
goto label_182;
#line 1309
goto label_159;
#line 1309
label_159:
#line 1309
c_rt_lib0clear(&___nl__9);
#line 1310
c_rt_lib0move(&___nl__9,___get_global_const(1256));
#line 1310
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__3, ___nl__9));
#line 1310
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1310
c_rt_lib0move(&___nl__10,___get_global_const(1257));
#line 1310
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1310
c_rt_lib0clear(&___nl__10);
#line 1310
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1311
c_rt_lib0move(&___nl__10,___get_global_const(1255));
#line 1311
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1311
c_rt_lib0clear(&___nl__10);
#line 1311
c_rt_lib0clear(&___nl__0);
#line 1311
c_rt_lib0clear(&___nl__1);
#line 1311
c_rt_lib0clear(&___nl__2);
#line 1311
c_rt_lib0clear(&___nl__3);
#line 1311
c_rt_lib0clear(&___nl__4);
#line 1311
c_rt_lib0clear(&___nl__5);
#line 1311
c_rt_lib0clear(&___nl__6);
#line 1311
c_rt_lib0clear(&___nl__7);
#line 1311
c_rt_lib0clear(&___nl__8);
#line 1311
return ___nl__9;
#line 1311
c_rt_lib0clear(&___nl__9);
#line 1311
label_182:
#line 1312
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 1312
goto label_145;
#line 1312
label_185:
#line 1312
c_rt_lib0clear(&___nl__5);
#line 1312
c_rt_lib0clear(&___nl__6);
#line 1312
c_rt_lib0clear(&___nl__7);
#line 1312
c_rt_lib0clear(&___nl__8);
#line 1313
goto label_353;
#line 1313
label_191:
#line 1313
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1313
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(803)));
#line 1313
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 1313
if(c_rt_lib0check_true_native(___nl__5)){ goto label_198;}
#line 1313
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(278)));
#line 1313
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(803)));
#line 1313
label_198:
#line 1313
c_rt_lib0clear(&___nl__5);
#line 1313
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1313
if(c_rt_lib0check_true_native(___nl__4)){ goto label_332;}
#line 1314
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1314
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(803)));
#line 1314
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 1314
label_205:
#line 1314
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 1314
if(c_rt_lib0check_true_native(___nl__6)){ goto label_326;}
#line 1314
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 1314
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 1315
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(278)));
#line 1315
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(803)));
#line 1316
c_rt_lib0move(&___nl__10, hash0has_key(___nl__9, ___nl__6));
#line 1316
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1316
if(c_rt_lib0check_true_native(___nl__10)){ goto label_296;}
#line 1317
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__7, ___get_global_const(807)));
#line 1317
if(c_rt_lib0check_true_native(___nl__11)){ goto label_222;}
#line 1322
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__7, ___get_global_const(808)));
#line 1322
if(c_rt_lib0check_true_native(___nl__11)){ goto label_256;}
#line 1322
c_rt_lib0move(&___nl__11,___get_global_const(91));
#line 1322
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__7));
#line 1322
nl_die_arg(___nl__11);
#line 1317
label_222:
#line 1318
c_rt_lib0move(&___nl__12, hash0get_value(___nl__9, ___nl__6));
#line 1318
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(808)));
#line 1318
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 1318
if(c_rt_lib0check_true_native(___nl__12)){ goto label_253;}
#line 1319
c_rt_lib0move(&___nl__13,___get_global_const(1258));
#line 1319
c_rt_lib0move(&___nl__13, c_rt_lib0concat_new(___nl__3, ___nl__13));
#line 1319
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__6));
#line 1319
c_rt_lib0move(&___nl__14,___get_global_const(1259));
#line 1319
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 1319
c_rt_lib0clear(&___nl__14);
#line 1319
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__6));
#line 1320
c_rt_lib0move(&___nl__14,___get_global_const(1260));
#line 1320
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 1320
c_rt_lib0clear(&___nl__14);
#line 1320
c_rt_lib0clear(&___nl__0);
#line 1320
c_rt_lib0clear(&___nl__1);
#line 1320
c_rt_lib0clear(&___nl__2);
#line 1320
c_rt_lib0clear(&___nl__3);
#line 1320
c_rt_lib0clear(&___nl__4);
#line 1320
c_rt_lib0clear(&___nl__5);
#line 1320
c_rt_lib0clear(&___nl__6);
#line 1320
c_rt_lib0clear(&___nl__7);
#line 1320
c_rt_lib0clear(&___nl__8);
#line 1320
c_rt_lib0clear(&___nl__9);
#line 1320
c_rt_lib0clear(&___nl__10);
#line 1320
c_rt_lib0clear(&___nl__11);
#line 1320
c_rt_lib0clear(&___nl__12);
#line 1320
return ___nl__13;
#line 1320
c_rt_lib0clear(&___nl__13);
#line 1321
goto label_253;
#line 1321
label_253:
#line 1321
c_rt_lib0clear(&___nl__12);
#line 1322
goto label_293;
#line 1322
label_256:
#line 1322
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__7, ___get_global_const(808)));
#line 1323
c_rt_lib0move(&___nl__13, hash0get_value(___nl__9, ___nl__6));
#line 1323
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(807)));
#line 1323
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 1323
if(c_rt_lib0check_true_native(___nl__13)){ goto label_289;}
#line 1324
c_rt_lib0move(&___nl__14,___get_global_const(1258));
#line 1324
c_rt_lib0move(&___nl__14, c_rt_lib0concat_new(___nl__3, ___nl__14));
#line 1324
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__6));
#line 1324
c_rt_lib0move(&___nl__15,___get_global_const(1261));
#line 1324
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 1324
c_rt_lib0clear(&___nl__15);
#line 1324
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__6));
#line 1325
c_rt_lib0move(&___nl__15,___get_global_const(1262));
#line 1325
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 1325
c_rt_lib0clear(&___nl__15);
#line 1325
c_rt_lib0clear(&___nl__0);
#line 1325
c_rt_lib0clear(&___nl__1);
#line 1325
c_rt_lib0clear(&___nl__2);
#line 1325
c_rt_lib0clear(&___nl__3);
#line 1325
c_rt_lib0clear(&___nl__4);
#line 1325
c_rt_lib0clear(&___nl__5);
#line 1325
c_rt_lib0clear(&___nl__6);
#line 1325
c_rt_lib0clear(&___nl__7);
#line 1325
c_rt_lib0clear(&___nl__8);
#line 1325
c_rt_lib0clear(&___nl__9);
#line 1325
c_rt_lib0clear(&___nl__10);
#line 1325
c_rt_lib0clear(&___nl__11);
#line 1325
c_rt_lib0clear(&___nl__12);
#line 1325
c_rt_lib0clear(&___nl__13);
#line 1325
return ___nl__14;
#line 1325
c_rt_lib0clear(&___nl__14);
#line 1326
goto label_289;
#line 1326
label_289:
#line 1326
c_rt_lib0clear(&___nl__13);
#line 1326
c_rt_lib0clear(&___nl__12);
#line 1327
goto label_293;
#line 1327
label_293:
#line 1327
c_rt_lib0clear(&___nl__11);
#line 1328
goto label_321;
#line 1328
label_296:
#line 1329
c_rt_lib0move(&___nl__11,___get_global_const(1263));
#line 1329
c_rt_lib0move(&___nl__11, c_rt_lib0concat_new(___nl__3, ___nl__11));
#line 1329
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__6));
#line 1329
c_rt_lib0move(&___nl__12,___get_global_const(1264));
#line 1329
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 1329
c_rt_lib0clear(&___nl__12);
#line 1329
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__6));
#line 1330
c_rt_lib0move(&___nl__12,___get_global_const(1255));
#line 1330
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 1330
c_rt_lib0clear(&___nl__12);
#line 1330
c_rt_lib0clear(&___nl__0);
#line 1330
c_rt_lib0clear(&___nl__1);
#line 1330
c_rt_lib0clear(&___nl__2);
#line 1330
c_rt_lib0clear(&___nl__3);
#line 1330
c_rt_lib0clear(&___nl__4);
#line 1330
c_rt_lib0clear(&___nl__5);
#line 1330
c_rt_lib0clear(&___nl__6);
#line 1330
c_rt_lib0clear(&___nl__7);
#line 1330
c_rt_lib0clear(&___nl__8);
#line 1330
c_rt_lib0clear(&___nl__9);
#line 1330
c_rt_lib0clear(&___nl__10);
#line 1330
return ___nl__11;
#line 1330
c_rt_lib0clear(&___nl__11);
#line 1331
goto label_321;
#line 1331
label_321:
#line 1331
c_rt_lib0clear(&___nl__10);
#line 1331
c_rt_lib0clear(&___nl__9);
#line 1332
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 1332
goto label_205;
#line 1332
label_326:
#line 1332
c_rt_lib0clear(&___nl__5);
#line 1332
c_rt_lib0clear(&___nl__6);
#line 1332
c_rt_lib0clear(&___nl__7);
#line 1332
c_rt_lib0clear(&___nl__8);
#line 1333
goto label_353;
#line 1333
label_332:
#line 1334
c_rt_lib0move(&___nl__5,___get_global_const(371));
#line 1334
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1334
c_rt_lib0move(&___nl__6, type_checker_priv0get_print_tct_label(___nl__7));
#line 1334
c_rt_lib0clear(&___nl__7);
#line 1334
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1334
c_rt_lib0clear(&___nl__6);
#line 1334
c_rt_lib0move(&___nl__6,___get_global_const(1265));
#line 1334
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1334
c_rt_lib0clear(&___nl__6);
#line 1334
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(278)));
#line 1334
c_rt_lib0move(&___nl__6, type_checker_priv0get_print_tct_label(___nl__7));
#line 1334
c_rt_lib0clear(&___nl__7);
#line 1334
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1334
c_rt_lib0clear(&___nl__6);
#line 1334
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 1334
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1334
c_rt_lib0clear(&___nl__6);
#line 1334
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__5));
#line 1334
c_rt_lib0clear(&___nl__5);
#line 1335
goto label_353;
#line 1335
label_353:
#line 1335
c_rt_lib0clear(&___nl__4);
#line 1336
c_rt_lib0clear(&___nl__0);
#line 1336
c_rt_lib0clear(&___nl__1);
#line 1336
c_rt_lib0clear(&___nl__2);
#line 1336
return ___nl__3;
#line 1336
c_rt_lib0clear(&___nl__3);
#line 1336
c_rt_lib0clear(&___nl__2);
#line 1337
goto label_362;
#line 1337
label_362:
#line 1337
c_rt_lib0clear(&___nl__1);
#line 1337
c_rt_lib0clear(&___nl__0);
#line 1337
return NULL;
}

ImmT type_checker_priv0check_var_decl(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1342
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 1342
c_rt_lib0move(&___nl__4, type_checker_priv0check_var_decl_try(___nl__0, ___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 1342
c_rt_lib0clear(&___nl__5);
#line 1342
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(48)));
#line 1342
c_rt_lib0clear(&___nl__0);
#line 1342
return ___nl__4;
#line 1342
c_rt_lib0clear(&___nl__4);
#line 1342
c_rt_lib0clear(&___nl__0);
#line 1342
return NULL;
}

ImmT type_checker_priv0check_var_decl_try(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
#line 1347
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 1347
c_rt_lib0move(&___nl__5, hash0has_key(*___ref___3, ___nl__6));
#line 1347
c_rt_lib0clear(&___nl__6);
#line 1347
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1347
if(c_rt_lib0check_true_native(___nl__5)){ goto label_15;}
#line 1347
c_rt_lib0move(&___nl__6,___get_global_const(1266));
#line 1347
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 1347
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1347
c_rt_lib0clear(&___nl__7);
#line 1347
c_rt_lib0move(&___nl__7,___get_global_const(1267));
#line 1347
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1347
c_rt_lib0clear(&___nl__7);
#line 1347
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__6));
#line 1347
c_rt_lib0clear(&___nl__6);
#line 1347
goto label_15;
#line 1347
label_15:
#line 1347
c_rt_lib0clear(&___nl__5);
#line 1349
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 1349
c_rt_lib0move(&___nl__8, tct0empty());
#line 1349
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(1137), ___nl__7, ___get_global_const(63), ___nl__8));
#line 1349
c_rt_lib0clear(&___nl__7);
#line 1349
c_rt_lib0clear(&___nl__8);
#line 1350
c_rt_lib0move(&___nl__8, tct0empty());
#line 1350
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(1083)));
#line 1350
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__8, ___get_global_const(43), ___nl__9));
#line 1350
c_rt_lib0clear(&___nl__8);
#line 1350
c_rt_lib0clear(&___nl__9);
#line 1350
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(48), ___nl__6, ___get_global_const(47), ___nl__7));
#line 1350
c_rt_lib0clear(&___nl__6);
#line 1350
c_rt_lib0clear(&___nl__7);
#line 1352
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 1352
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(63)));
#line 1352
if(c_rt_lib0check_true_native(___nl__7)){ goto label_38;}
#line 1361
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(41)));
#line 1361
if(c_rt_lib0check_true_native(___nl__7)){ goto label_94;}
#line 1361
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 1361
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 1361
nl_die_arg(___nl__7);
#line 1352
label_38:
#line 1352
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(63)));
#line 1353
c_rt_lib0move(&___nl__9, ptd_parser0try_value_to_ptd(___nl__8));
#line 1353
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(47)));
#line 1353
if(c_rt_lib0check_true_native(___nl__10)){ goto label_48;}
#line 1356
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(48)));
#line 1356
if(c_rt_lib0check_true_native(___nl__10)){ goto label_64;}
#line 1356
c_rt_lib0move(&___nl__10,___get_global_const(91));
#line 1356
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 1356
nl_die_arg(___nl__10);
#line 1353
label_48:
#line 1353
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(47)));
#line 1354
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__11));
#line 1355
c_rt_lib0move(&___nl__12, tct0tct_im());
#line 1355
c_rt_lib0move(&___nl__13,___get_global_const(48));
#line 1355
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(___nl__5, ___nl__13));
#line 1355
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 1355
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(63), ___nl__14);
#line 1355
c_rt_lib0move(&___nl__15,___get_global_const(48));
#line 1355
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__15, ___nl__13));
#line 1355
c_rt_lib0clear(&___nl__15);
#line 1355
c_rt_lib0clear(&___nl__12);
#line 1355
c_rt_lib0clear(&___nl__13);
#line 1355
c_rt_lib0clear(&___nl__14);
#line 1355
c_rt_lib0clear(&___nl__11);
#line 1356
goto label_78;
#line 1356
label_64:
#line 1356
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(48)));
#line 1357
c_rt_lib0move(&___nl__12,___get_global_const(48));
#line 1357
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(___nl__5, ___nl__12));
#line 1357
c_rt_lib0copy(&___nl__13, ___nl__11);
#line 1357
c_rt_lib0hash_set_value_dec(&___nl__12, ___get_global_const(63), ___nl__13);
#line 1357
c_rt_lib0move(&___nl__14,___get_global_const(48));
#line 1357
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__14, ___nl__12));
#line 1357
c_rt_lib0clear(&___nl__14);
#line 1357
c_rt_lib0clear(&___nl__12);
#line 1357
c_rt_lib0clear(&___nl__13);
#line 1358
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__11, ___ref___2, ___ref___4));
#line 1358
c_rt_lib0clear(&___nl__11);
#line 1359
goto label_78;
#line 1359
label_78:
#line 1359
c_rt_lib0clear(&___nl__9);
#line 1359
c_rt_lib0clear(&___nl__10);
#line 1360
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 1360
c_rt_lib0move(&___nl__10,___get_global_const(48));
#line 1360
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__5, ___nl__10));
#line 1360
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 1360
c_rt_lib0hash_set_value_dec(&___nl__10, ___get_global_const(1137), ___nl__11);
#line 1360
c_rt_lib0move(&___nl__12,___get_global_const(48));
#line 1360
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__12, ___nl__10));
#line 1360
c_rt_lib0clear(&___nl__12);
#line 1360
c_rt_lib0clear(&___nl__9);
#line 1360
c_rt_lib0clear(&___nl__10);
#line 1360
c_rt_lib0clear(&___nl__11);
#line 1360
c_rt_lib0clear(&___nl__8);
#line 1361
goto label_96;
#line 1361
label_94:
#line 1362
goto label_96;
#line 1362
label_96:
#line 1362
c_rt_lib0clear(&___nl__6);
#line 1362
c_rt_lib0clear(&___nl__7);
#line 1363
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1363
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(192)));
#line 1363
if(c_rt_lib0check_true_native(___nl__7)){ goto label_107;}
#line 1383
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(41)));
#line 1383
if(c_rt_lib0check_true_native(___nl__7)){ goto label_195;}
#line 1383
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 1383
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 1383
nl_die_arg(___nl__7);
#line 1363
label_107:
#line 1363
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(192)));
#line 1364
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__8, ___ref___2, ___ref___3, ___ref___4));
#line 1365
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 1365
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(801)));
#line 1365
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1365
if(c_rt_lib0check_true_native(___nl__10)){ goto label_126;}
#line 1366
c_rt_lib0move(&___nl__11,___get_global_const(1234));
#line 1366
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__11));
#line 1366
c_rt_lib0clear(&___nl__11);
#line 1367
c_rt_lib0clear(&___nl__0);
#line 1367
c_rt_lib0clear(&___nl__1);
#line 1367
c_rt_lib0clear(&___nl__6);
#line 1367
c_rt_lib0clear(&___nl__7);
#line 1367
c_rt_lib0clear(&___nl__8);
#line 1367
c_rt_lib0clear(&___nl__9);
#line 1367
c_rt_lib0clear(&___nl__10);
#line 1367
return ___nl__5;
#line 1368
goto label_126;
#line 1368
label_126:
#line 1368
c_rt_lib0clear(&___nl__10);
#line 1369
c_rt_lib0copy(&___nl__10, ___nl__1);
#line 1369
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1369
if(c_rt_lib0check_true_native(___nl__10)){ goto label_148;}
#line 1370
c_rt_lib0move(&___nl__11, ptd_system0try_get_ensure_sub_types(___nl__9, ___ref___2, ___ref___4));
#line 1371
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(47)));
#line 1371
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(43)));
#line 1371
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__13, ___get_global_const(43), ___nl__14));
#line 1371
c_rt_lib0clear(&___nl__13);
#line 1371
c_rt_lib0clear(&___nl__14);
#line 1371
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 1371
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(47), ___nl__13);
#line 1371
c_rt_lib0clear(&___nl__12);
#line 1371
c_rt_lib0clear(&___nl__13);
#line 1372
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(48)));
#line 1372
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 1372
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(63), ___nl__13);
#line 1372
c_rt_lib0clear(&___nl__12);
#line 1372
c_rt_lib0clear(&___nl__13);
#line 1372
c_rt_lib0clear(&___nl__11);
#line 1373
goto label_148;
#line 1373
label_148:
#line 1373
c_rt_lib0clear(&___nl__10);
#line 1374
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(48)));
#line 1374
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(63)));
#line 1374
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(804)));
#line 1374
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1374
if(c_rt_lib0check_true_native(___nl__10)){ goto label_170;}
#line 1375
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1375
c_rt_lib0delete(ptd_system0check_assignment(___nl__11, ___nl__9, ___ref___2, ___ref___4));
#line 1375
c_rt_lib0clear(&___nl__11);
#line 1376
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 1376
c_rt_lib0move(&___nl__12,___get_global_const(48));
#line 1376
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(___nl__5, ___nl__12));
#line 1376
c_rt_lib0copy(&___nl__13, ___nl__11);
#line 1376
c_rt_lib0hash_set_value_dec(&___nl__12, ___get_global_const(63), ___nl__13);
#line 1376
c_rt_lib0move(&___nl__14,___get_global_const(48));
#line 1376
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__14, ___nl__12));
#line 1376
c_rt_lib0clear(&___nl__14);
#line 1376
c_rt_lib0clear(&___nl__11);
#line 1376
c_rt_lib0clear(&___nl__12);
#line 1376
c_rt_lib0clear(&___nl__13);
#line 1377
goto label_190;
#line 1377
label_170:
#line 1378
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(48)));
#line 1378
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(63)));
#line 1378
c_rt_lib0move(&___nl__11, ptd_system0check_assignment(___nl__12, ___nl__9, ___ref___2, ___ref___4));
#line 1378
c_rt_lib0clear(&___nl__12);
#line 1379
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 1379
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(47)));
#line 1379
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 1379
if(c_rt_lib0check_true_native(___nl__12)){ goto label_186;}
#line 1380
c_rt_lib0move(&___nl__13,___get_global_const(1268));
#line 1380
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_check_info(___nl__11));
#line 1380
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 1380
c_rt_lib0clear(&___nl__14);
#line 1380
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__13));
#line 1380
c_rt_lib0clear(&___nl__13);
#line 1381
goto label_186;
#line 1381
label_186:
#line 1381
c_rt_lib0clear(&___nl__12);
#line 1381
c_rt_lib0clear(&___nl__11);
#line 1382
goto label_190;
#line 1382
label_190:
#line 1382
c_rt_lib0clear(&___nl__10);
#line 1382
c_rt_lib0clear(&___nl__9);
#line 1382
c_rt_lib0clear(&___nl__8);
#line 1383
goto label_197;
#line 1383
label_195:
#line 1384
goto label_197;
#line 1384
label_197:
#line 1384
c_rt_lib0clear(&___nl__6);
#line 1384
c_rt_lib0clear(&___nl__7);
#line 1385
c_rt_lib0clear(&___nl__0);
#line 1385
c_rt_lib0clear(&___nl__1);
#line 1385
return ___nl__5;
#line 1385
c_rt_lib0clear(&___nl__5);
#line 1385
c_rt_lib0clear(&___nl__0);
#line 1385
c_rt_lib0clear(&___nl__1);
#line 1385
return NULL;
}

ImmT type_checker_priv0add_var_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
#line 1389
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__1, ___nl__0));
#line 1389
c_rt_lib0clear(&___nl__0);
#line 1389
c_rt_lib0clear(&___nl__1);
#line 1389
return NULL;
}

ImmT type_checker_priv0set_type_to_variable(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
type_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 1393
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 1393
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(1137), ___nl__4, ___get_global_const(63), ___nl__2));
#line 1393
c_rt_lib0clear(&___nl__4);
#line 1393
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__3, ___nl__1, ___ref___0));
#line 1393
c_rt_lib0clear(&___nl__3);
#line 1393
c_rt_lib0clear(&___nl__1);
#line 1393
c_rt_lib0clear(&___nl__2);
#line 1393
return NULL;
}

ImmT type_checker_priv0add_var_decl_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1397
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 1397
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(796)));
#line 1397
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 1397
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 1397
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(804)));
#line 1397
label_5:
#line 1397
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1397
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 1398
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 1398
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(1137), ___nl__5, ___get_global_const(63), ___nl__0));
#line 1398
c_rt_lib0clear(&___nl__5);
#line 1398
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__4, ___nl__1, ___ref___2));
#line 1398
c_rt_lib0clear(&___nl__4);
#line 1399
goto label_21;
#line 1399
label_14:
#line 1400
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 1400
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(1137), ___nl__5, ___get_global_const(63), ___nl__0));
#line 1400
c_rt_lib0clear(&___nl__5);
#line 1400
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__4, ___nl__1, ___ref___2));
#line 1400
c_rt_lib0clear(&___nl__4);
#line 1401
goto label_21;
#line 1401
label_21:
#line 1401
c_rt_lib0clear(&___nl__3);
#line 1401
c_rt_lib0clear(&___nl__0);
#line 1401
c_rt_lib0clear(&___nl__1);
#line 1401
return NULL;
}

ImmT type_checker_priv0add_var_decl_with_type_and_check(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1406
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 1406
c_rt_lib0move(&___nl__4, hash0has_key(*___ref___2, ___nl__5));
#line 1406
c_rt_lib0clear(&___nl__5);
#line 1406
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1406
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 1406
c_rt_lib0move(&___nl__5,___get_global_const(1192));
#line 1406
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 1406
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1406
c_rt_lib0clear(&___nl__6);
#line 1406
c_rt_lib0move(&___nl__6,___get_global_const(1267));
#line 1406
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1406
c_rt_lib0clear(&___nl__6);
#line 1406
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__5));
#line 1406
c_rt_lib0clear(&___nl__5);
#line 1406
goto label_15;
#line 1406
label_15:
#line 1406
c_rt_lib0clear(&___nl__4);
#line 1407
c_rt_lib0move(&___nl__4, type_checker_priv0is_known(___nl__1));
#line 1407
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1407
if(c_rt_lib0check_true_native(___nl__4)){ goto label_30;}
#line 1408
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 1408
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 1408
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1137), ___nl__6, ___get_global_const(63), ___nl__7));
#line 1408
c_rt_lib0clear(&___nl__6);
#line 1408
c_rt_lib0clear(&___nl__7);
#line 1408
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 1408
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__5, ___nl__6, ___ref___2));
#line 1408
c_rt_lib0clear(&___nl__6);
#line 1408
c_rt_lib0clear(&___nl__5);
#line 1409
goto label_41;
#line 1409
label_30:
#line 1410
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 1410
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 1410
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1137), ___nl__6, ___get_global_const(63), ___nl__7));
#line 1410
c_rt_lib0clear(&___nl__6);
#line 1410
c_rt_lib0clear(&___nl__7);
#line 1410
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 1410
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__5, ___nl__6, ___ref___2));
#line 1410
c_rt_lib0clear(&___nl__6);
#line 1410
c_rt_lib0clear(&___nl__5);
#line 1411
goto label_41;
#line 1411
label_41:
#line 1411
c_rt_lib0clear(&___nl__4);
#line 1411
c_rt_lib0clear(&___nl__0);
#line 1411
c_rt_lib0clear(&___nl__1);
#line 1411
return NULL;
}

ImmT type_checker_priv0is_known(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 1415
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 1415
c_rt_lib0move(&___nl__1, ptd_system0is_known(___nl__2));
#line 1415
c_rt_lib0clear(&___nl__2);
#line 1415
c_rt_lib0clear(&___nl__0);
#line 1415
return ___nl__1;
#line 1415
c_rt_lib0clear(&___nl__1);
#line 1415
c_rt_lib0clear(&___nl__0);
#line 1415
return NULL;
}

ImmT type_checker_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 1419
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 1419
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__0, ___nl__2));
#line 1419
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 1419
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 1419
goto label_8;
#line 1419
label_5:
#line 1419
c_rt_lib0move(&___nl__2,___get_global_const(185));
#line 1419
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__0, ___nl__2));
#line 1419
label_8:
#line 1419
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 1419
c_rt_lib0clear(&___nl__0);
#line 1419
c_rt_lib0clear(&___nl__1);
#line 1419
return ___nl__2;
#line 1419
c_rt_lib0clear(&___nl__2);
#line 1419
c_rt_lib0clear(&___nl__0);
#line 1419
c_rt_lib0clear(&___nl__1);
#line 1419
return NULL;
}

ImmT type_checker_priv0get_fun_module(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 1423
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 1423
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__0, ___nl__2));
#line 1423
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 1423
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 1423
goto label_7;
#line 1423
label_5:
#line 1423
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 1423
label_7:
#line 1423
c_rt_lib0clear(&___nl__0);
#line 1423
c_rt_lib0clear(&___nl__1);
#line 1423
return ___nl__2;
#line 1423
c_rt_lib0clear(&___nl__2);
#line 1423
c_rt_lib0clear(&___nl__0);
#line 1423
c_rt_lib0clear(&___nl__1);
#line 1423
return NULL;
}

ImmT type_checker_priv0get_function_def(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
type_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1428
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1090)));
#line 1428
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1087)));
#line 1428
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(783)));
#line 1428
c_rt_lib0move(&___nl__6, type_checker_priv0get_fun_module(___nl__0, ___nl__7));
#line 1428
c_rt_lib0clear(&___nl__7);
#line 1428
c_rt_lib0move(&___nl__4, hash0get_value(___nl__5, ___nl__6));
#line 1428
c_rt_lib0clear(&___nl__6);
#line 1428
c_rt_lib0clear(&___nl__5);
#line 1429
c_rt_lib0move(&___nl__5, type_checker_priv0get_fun_key(___nl__1, ___nl__0));
#line 1429
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__5));
#line 1429
c_rt_lib0clear(&___nl__5);
#line 1429
c_rt_lib0clear(&___nl__4);
#line 1429
c_rt_lib0clear(&___nl__0);
#line 1429
c_rt_lib0clear(&___nl__1);
#line 1429
c_rt_lib0clear(&___nl__2);
#line 1429
return ___nl__3;
#line 1429
c_rt_lib0clear(&___nl__3);
#line 1429
c_rt_lib0clear(&___nl__0);
#line 1429
c_rt_lib0clear(&___nl__1);
#line 1429
c_rt_lib0clear(&___nl__2);
#line 1429
return NULL;
}

ImmT type_checker_priv0check_function_exists(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 1434
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1087)));
#line 1434
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(783)));
#line 1434
c_rt_lib0move(&___nl__4, type_checker_priv0get_fun_module(___nl__0, ___nl__5));
#line 1434
c_rt_lib0clear(&___nl__5);
#line 1435
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(382)));
#line 1435
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__4));
#line 1435
c_rt_lib0clear(&___nl__6);
#line 1435
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1435
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 1435
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(382)));
#line 1435
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__4));
#line 1435
c_rt_lib0clear(&___nl__6);
#line 1435
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1435
label_13:
#line 1435
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1435
if(c_rt_lib0check_true_native(___nl__5)){ goto label_49;}
#line 1436
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(382)));
#line 1436
c_rt_lib0move(&___nl__6, hash0has_key(___nl__7, ___nl__4));
#line 1436
c_rt_lib0clear(&___nl__7);
#line 1436
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1436
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1436
if(c_rt_lib0check_true_native(___nl__6)){ goto label_30;}
#line 1436
c_rt_lib0move(&___nl__7,___get_global_const(792));
#line 1436
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 1436
c_rt_lib0move(&___nl__8,___get_global_const(793));
#line 1436
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 1436
c_rt_lib0clear(&___nl__8);
#line 1436
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__7));
#line 1436
c_rt_lib0clear(&___nl__7);
#line 1436
goto label_30;
#line 1436
label_30:
#line 1436
c_rt_lib0clear(&___nl__6);
#line 1437
c_rt_lib0move(&___nl__6,___get_global_const(382));
#line 1437
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___2, ___nl__6));
#line 1437
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 1437
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__4, ___nl__7));
#line 1437
c_rt_lib0clear(&___nl__7);
#line 1437
c_rt_lib0move(&___nl__7,___get_global_const(382));
#line 1437
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__7, ___nl__6));
#line 1437
c_rt_lib0clear(&___nl__7);
#line 1437
c_rt_lib0clear(&___nl__6);
#line 1438
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 1438
c_rt_lib0clear(&___nl__0);
#line 1438
c_rt_lib0clear(&___nl__1);
#line 1438
c_rt_lib0clear(&___nl__4);
#line 1438
c_rt_lib0clear(&___nl__5);
#line 1438
return ___nl__6;
#line 1438
c_rt_lib0clear(&___nl__6);
#line 1439
goto label_64;
#line 1439
label_49:
#line 1439
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1090)));
#line 1439
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__4));
#line 1439
c_rt_lib0clear(&___nl__6);
#line 1439
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1439
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1439
if(c_rt_lib0check_true_native(___nl__5)){ goto label_64;}
#line 1440
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 1440
c_rt_lib0clear(&___nl__0);
#line 1440
c_rt_lib0clear(&___nl__1);
#line 1440
c_rt_lib0clear(&___nl__4);
#line 1440
c_rt_lib0clear(&___nl__5);
#line 1440
return ___nl__6;
#line 1440
c_rt_lib0clear(&___nl__6);
#line 1441
goto label_64;
#line 1441
label_64:
#line 1441
c_rt_lib0clear(&___nl__5);
#line 1442
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1090)));
#line 1442
c_rt_lib0move(&___nl__6, hash0get_value(___nl__7, ___nl__4));
#line 1442
c_rt_lib0clear(&___nl__7);
#line 1442
c_rt_lib0move(&___nl__7, type_checker_priv0get_fun_key(___nl__1, ___nl__0));
#line 1442
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__7));
#line 1442
c_rt_lib0clear(&___nl__7);
#line 1442
c_rt_lib0clear(&___nl__6);
#line 1442
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1442
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1442
if(c_rt_lib0check_true_native(___nl__5)){ goto label_93;}
#line 1443
c_rt_lib0move(&___nl__6,___get_global_const(1092));
#line 1443
c_rt_lib0move(&___nl__7, type_checker_priv0get_function_name(___nl__0, ___nl__1));
#line 1443
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1443
c_rt_lib0clear(&___nl__7);
#line 1443
c_rt_lib0move(&___nl__7,___get_global_const(1093));
#line 1443
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1443
c_rt_lib0clear(&___nl__7);
#line 1443
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 1443
c_rt_lib0clear(&___nl__6);
#line 1444
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 1444
c_rt_lib0clear(&___nl__0);
#line 1444
c_rt_lib0clear(&___nl__1);
#line 1444
c_rt_lib0clear(&___nl__4);
#line 1444
c_rt_lib0clear(&___nl__5);
#line 1444
return ___nl__6;
#line 1444
c_rt_lib0clear(&___nl__6);
#line 1445
goto label_93;
#line 1445
label_93:
#line 1445
c_rt_lib0clear(&___nl__5);
#line 1446
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 1446
c_rt_lib0clear(&___nl__0);
#line 1446
c_rt_lib0clear(&___nl__1);
#line 1446
c_rt_lib0clear(&___nl__4);
#line 1446
return ___nl__5;
#line 1446
c_rt_lib0clear(&___nl__5);
#line 1446
c_rt_lib0clear(&___nl__4);
#line 1446
c_rt_lib0clear(&___nl__0);
#line 1446
c_rt_lib0clear(&___nl__1);
#line 1446
return NULL;
}

ImmT type_checker_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1450
c_rt_lib0move(&___nl__2,___get_global_const(18));
#line 1450
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 1450
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(784)));
#line 1450
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(132)));
#line 1450
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 1450
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 1450
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(112)));
#line 1450
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(5, ___get_global_const(137), ___nl__1, ___get_global_const(134), ___nl__4, ___get_global_const(132), ___nl__5, ___get_global_const(179), ___nl__6, ___get_global_const(63), ___nl__7));
#line 1450
c_rt_lib0clear(&___nl__4);
#line 1450
c_rt_lib0clear(&___nl__5);
#line 1450
c_rt_lib0clear(&___nl__6);
#line 1450
c_rt_lib0clear(&___nl__7);
#line 1450
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 1450
c_rt_lib0clear(&___nl__3);
#line 1450
c_rt_lib0move(&___nl__3,___get_global_const(18));
#line 1450
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 1450
c_rt_lib0clear(&___nl__3);
#line 1450
c_rt_lib0clear(&___nl__2);
#line 1450
c_rt_lib0clear(&___nl__1);
#line 1450
return NULL;
}

ImmT type_checker_priv0add_warning(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1454
c_rt_lib0move(&___nl__2,___get_global_const(113));
#line 1454
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 1454
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(784)));
#line 1454
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(132)));
#line 1454
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 1454
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 1454
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(177)));
#line 1454
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(5, ___get_global_const(137), ___nl__1, ___get_global_const(134), ___nl__4, ___get_global_const(132), ___nl__5, ___get_global_const(179), ___nl__6, ___get_global_const(63), ___nl__7));
#line 1454
c_rt_lib0clear(&___nl__4);
#line 1454
c_rt_lib0clear(&___nl__5);
#line 1454
c_rt_lib0clear(&___nl__6);
#line 1454
c_rt_lib0clear(&___nl__7);
#line 1454
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 1454
c_rt_lib0clear(&___nl__3);
#line 1454
c_rt_lib0move(&___nl__3,___get_global_const(113));
#line 1454
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 1454
c_rt_lib0clear(&___nl__3);
#line 1454
c_rt_lib0clear(&___nl__2);
#line 1454
c_rt_lib0clear(&___nl__1);
#line 1454
return NULL;
}


static ImmT ___const__[2];
static int ___const_init__ = 1;
void type_checker_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[1];


for(int i=0;i<1;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 1);
}}
ImmT type_checker_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT type_checker_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = type_checker_priv0get_special_functions0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
