
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "pretty_printer.h"
#include "string.h"
#include "array.h"
#include "ptd.h"
#include "nast.h"
#include "wprinter.h"
#include "boolean_t.h"
#line 1 "pretty_printer.nl"

static ImmT *__const__f = NULL;
void pretty_printer_priv0__const__init();
ImmT pretty_printer_priv0__const__sim(int __nr);
ImmT pretty_printer_priv0__const__sing(int __nr);

ImmT pretty_printer_priv0state_print(ImmT * ___ref___0,ImmT ___nl__1);
ImmT pretty_printer_priv0print_fun_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0print_fun_def_head(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0join_print_var_decl(ImmT ___nl__0);
ImmT pretty_printer_priv0print_var_decl(ImmT ___nl__0);
ImmT pretty_printer_priv0pind(ImmT ___nl__0);
ImmT pretty_printer_priv0join_print_hash_elem(ImmT ___nl__0);
ImmT pretty_printer_priv0print_hash_elem(ImmT ___nl__0);
ImmT pretty_printer_priv0print_variant(ImmT ___nl__0);
ImmT pretty_printer_priv0print_variant_case_decl(ImmT ___nl__0);
ImmT pretty_printer_priv0join_print_fun_arg(ImmT ___nl__0);
ImmT pretty_printer_priv0print_fun_arg(ImmT ___nl__0);
ImmT pretty_printer_priv0count_structs(ImmT ___nl__0);
ImmT pretty_printer_priv0get_compressed_fun_val(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0print_st(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0get_fun_label(ImmT ___nl__0,ImmT ___nl__1);
ImmT pretty_printer_priv0string_to_nl(ImmT ___nl__0);
ImmT pretty_printer_priv0join_print_val(ImmT ___nl__0);
ImmT pretty_printer_priv0is_to_change_ov(ImmT ___nl__0);
ImmT pretty_printer_priv0print_val(ImmT ___nl__0);
ImmT pretty_printer_priv0print_cond_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5);
ImmT pretty_printer_priv0print_loop(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5);
ImmT pretty_printer_priv0print_loop_or_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5,ImmT ___nl__6);
ImmT pretty_printer_priv0print_try_ensure(ImmT ___nl__0,ImmT ___nl__1);
ImmT pretty_printer_priv0print_return(ImmT ___nl__0);
ImmT pretty_printer_priv0print_sim_value(ImmT ___nl__0);
ImmT pretty_printer_priv0print_break();
ImmT pretty_printer_priv0print_continue();
ImmT pretty_printer_priv0print_die(ImmT ___nl__0);
ImmT pretty_printer_priv0print_simple_statement(ImmT ___nl__0);
ImmT pretty_printer_priv0flush_sim_statement(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);


ImmT pretty_printer_priv0state_print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
pretty_printer_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 14
c_rt_lib0move(&___nl__2,___get_global_const(167));
#line 14
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 14
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 14
c_rt_lib0move(&___nl__3,___get_global_const(167));
#line 14
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 14
c_rt_lib0clear(&___nl__3);
#line 14
c_rt_lib0clear(&___nl__2);
#line 14
c_rt_lib0clear(&___nl__1);
#line 14
return NULL;
}

ImmT pretty_printer0struct_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "pretty_printer0struct_t");
return pretty_printer0struct_t();}
ImmT pretty_printer0struct_t(){
pretty_printer_priv0__const__init();
return pretty_printer_priv0__const__sing(0);}
ImmT pretty_printer0struct_t0cal() {
pretty_printer_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 19
c_rt_lib0move(&___nl__3, ptd0sim());
#line 19
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 19
c_rt_lib0clear(&___nl__3);
#line 20
c_rt_lib0move(&___nl__6, ptd0sim());
#line 20
c_rt_lib0move(&___nl__7, ptd0sim());
#line 20
c_rt_lib0move(&___nl__8, ptd0sim());
#line 20
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__6, ___get_global_const(1000), ___nl__7, ___get_global_const(1001), ___nl__8));
#line 20
c_rt_lib0clear(&___nl__6);
#line 20
c_rt_lib0clear(&___nl__7);
#line 20
c_rt_lib0clear(&___nl__8);
#line 20
c_rt_lib0move(&___nl__4, ptd0rec(___nl__5));
#line 20
c_rt_lib0clear(&___nl__5);
#line 20
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 20
c_rt_lib0clear(&___nl__4);
#line 20
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(382), ___nl__2, ___get_global_const(92), ___nl__3));
#line 20
c_rt_lib0clear(&___nl__2);
#line 20
c_rt_lib0clear(&___nl__3);
#line 20
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 20
c_rt_lib0clear(&___nl__1);
#line 20
return ___nl__0;
#line 20
c_rt_lib0clear(&___nl__0);
#line 20
return NULL;
}

ImmT pretty_printer0print_module_to_struct0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "pretty_printer0print_module_to_struct");
return pretty_printer0print_module_to_struct(_tab[0]);}
ImmT pretty_printer0print_module_to_struct(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
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
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 25
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(382), ___nl__2, ___get_global_const(92), ___nl__3));
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__3);
#line 26
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(150)));
#line 26
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 26
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 26
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 26
label_9:
#line 26
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 26
if(c_rt_lib0check_true_native(___nl__7)){ goto label_33;}
#line 26
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 27
c_rt_lib0move(&___nl__8,___get_global_const(382));
#line 27
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__1, ___nl__8));
#line 27
c_rt_lib0move(&___nl__9,___get_global_const(629));
#line 27
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 27
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 27
c_rt_lib0clear(&___nl__10);
#line 27
c_rt_lib0move(&___nl__10,___get_global_const(360));
#line 27
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 27
c_rt_lib0clear(&___nl__10);
#line 27
c_rt_lib0move(&___nl__10, string0lf());
#line 27
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 27
c_rt_lib0clear(&___nl__10);
#line 27
c_rt_lib0delete(array0push(&___nl__8, ___nl__9));
#line 27
c_rt_lib0clear(&___nl__9);
#line 27
c_rt_lib0move(&___nl__9,___get_global_const(382));
#line 27
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__9, ___nl__8));
#line 27
c_rt_lib0clear(&___nl__9);
#line 27
c_rt_lib0clear(&___nl__8);
#line 28
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 28
goto label_9;
#line 28
label_33:
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0clear(&___nl__3);
#line 28
c_rt_lib0clear(&___nl__4);
#line 28
c_rt_lib0clear(&___nl__5);
#line 28
c_rt_lib0clear(&___nl__6);
#line 28
c_rt_lib0clear(&___nl__7);
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(785)));
#line 29
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 29
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 29
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 29
label_44:
#line 29
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 29
if(c_rt_lib0check_true_native(___nl__7)){ goto label_120;}
#line 29
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 30
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 30
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(1, ___get_global_const(167), ___nl__9));
#line 30
c_rt_lib0clear(&___nl__9);
#line 31
c_rt_lib0move(&___nl__9, string0lf());
#line 31
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__8, ___nl__9));
#line 31
c_rt_lib0clear(&___nl__9);
#line 32
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 32
c_rt_lib0delete(pretty_printer_priv0print_fun_def_head(&___nl__8, ___nl__3, ___nl__9));
#line 32
c_rt_lib0clear(&___nl__9);
#line 33
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(167)));
#line 34
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 34
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 34
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(167), ___nl__11);
#line 34
c_rt_lib0clear(&___nl__10);
#line 34
c_rt_lib0clear(&___nl__11);
#line 35
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(201)));
#line 35
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(201)));
#line 35
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(826)));
#line 35
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 35
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 35
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 35
label_69:
#line 35
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 35
if(c_rt_lib0check_true_native(___nl__15)){ goto label_86;}
#line 35
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 36
c_rt_lib0move(&___nl__16, string0lf());
#line 36
c_rt_lib0move(&___nl__18,___get_global_const(1));
#line 36
c_rt_lib0move(&___nl__17, pretty_printer_priv0pind(___nl__18));
#line 36
c_rt_lib0clear(&___nl__18);
#line 36
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 36
c_rt_lib0clear(&___nl__17);
#line 36
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__8, ___nl__16));
#line 36
c_rt_lib0clear(&___nl__16);
#line 37
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 37
c_rt_lib0delete(pretty_printer_priv0print_cmd(&___nl__8, ___nl__11, ___nl__16));
#line 37
c_rt_lib0clear(&___nl__16);
#line 38
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 38
goto label_69;
#line 38
label_86:
#line 38
c_rt_lib0clear(&___nl__10);
#line 38
c_rt_lib0clear(&___nl__11);
#line 38
c_rt_lib0clear(&___nl__12);
#line 38
c_rt_lib0clear(&___nl__13);
#line 38
c_rt_lib0clear(&___nl__14);
#line 38
c_rt_lib0clear(&___nl__15);
#line 39
c_rt_lib0move(&___nl__10,___get_global_const(92));
#line 39
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__1, ___nl__10));
#line 40
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(182)));
#line 40
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(377)));
#line 40
if(c_rt_lib0check_true_native(___nl__12)){ goto label_100;}
#line 40
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 40
goto label_102;
#line 40
label_100:
#line 40
c_rt_lib0move(&___nl__12,___get_global_const(185));
#line 40
label_102:
#line 40
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 40
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 40
c_rt_lib0clear(&___nl__13);
#line 42
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(167)));
#line 42
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__12, ___get_global_const(1000), ___nl__9, ___get_global_const(1001), ___nl__13));
#line 42
c_rt_lib0clear(&___nl__12);
#line 42
c_rt_lib0clear(&___nl__13);
#line 42
c_rt_lib0delete(array0push(&___nl__10, ___nl__11));
#line 42
c_rt_lib0clear(&___nl__11);
#line 42
c_rt_lib0move(&___nl__11,___get_global_const(92));
#line 42
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__11, ___nl__10));
#line 42
c_rt_lib0clear(&___nl__11);
#line 42
c_rt_lib0clear(&___nl__10);
#line 42
c_rt_lib0clear(&___nl__8);
#line 42
c_rt_lib0clear(&___nl__9);
#line 44
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 44
goto label_44;
#line 44
label_120:
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0clear(&___nl__5);
#line 44
c_rt_lib0clear(&___nl__6);
#line 44
c_rt_lib0clear(&___nl__7);
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
return ___nl__1;
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
return NULL;
}

ImmT pretty_printer0print_module_to_str0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "pretty_printer0print_module_to_str");
return pretty_printer0print_module_to_str(_tab[0]);}
ImmT pretty_printer0print_module_to_str(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
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
#line 49
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 49
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(1, ___get_global_const(167), ___nl__2));
#line 49
c_rt_lib0clear(&___nl__2);
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(897)));
#line 50
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__3));
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 50
if(c_rt_lib0check_true_native(___nl__2)){ goto label_16;}
#line 51
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(897)));
#line 51
c_rt_lib0move(&___nl__4, string0lf());
#line 51
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 51
c_rt_lib0clear(&___nl__4);
#line 51
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__3));
#line 51
c_rt_lib0clear(&___nl__3);
#line 52
goto label_42;
#line 52
label_16:
#line 53
c_rt_lib0move(&___nl__3,___get_global_const(1002));
#line 53
c_rt_lib0move(&___nl__4, string0lf());
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0move(&___nl__4,___get_global_const(1003));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0move(&___nl__4, string0lf());
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0move(&___nl__4,___get_global_const(1002));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0move(&___nl__4, string0lf());
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 53
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0move(&___nl__4, string0lf());
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0move(&___nl__4, string0lf());
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__3));
#line 54
c_rt_lib0clear(&___nl__3);
#line 55
goto label_42;
#line 55
label_42:
#line 55
c_rt_lib0clear(&___nl__2);
#line 56
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 57
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(150)));
#line 57
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 57
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 57
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 57
label_49:
#line 57
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 57
if(c_rt_lib0check_true_native(___nl__8)){ goto label_64;}
#line 57
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 58
c_rt_lib0move(&___nl__9,___get_global_const(629));
#line 58
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 58
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 58
c_rt_lib0clear(&___nl__10);
#line 58
c_rt_lib0move(&___nl__10,___get_global_const(360));
#line 58
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 58
c_rt_lib0clear(&___nl__10);
#line 58
c_rt_lib0delete(array0push(&___nl__2, ___nl__9));
#line 58
c_rt_lib0clear(&___nl__9);
#line 59
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 59
goto label_49;
#line 59
label_64:
#line 59
c_rt_lib0clear(&___nl__3);
#line 59
c_rt_lib0clear(&___nl__4);
#line 59
c_rt_lib0clear(&___nl__5);
#line 59
c_rt_lib0clear(&___nl__6);
#line 59
c_rt_lib0clear(&___nl__7);
#line 59
c_rt_lib0clear(&___nl__8);
#line 60
c_rt_lib0move(&___nl__4, string0lf());
#line 60
c_rt_lib0move(&___nl__3, array0join(___nl__4, ___nl__2));
#line 60
c_rt_lib0clear(&___nl__4);
#line 60
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__3));
#line 60
c_rt_lib0clear(&___nl__3);
#line 61
c_rt_lib0move(&___nl__3, string0lf());
#line 61
c_rt_lib0move(&___nl__4, string0lf());
#line 61
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 61
c_rt_lib0clear(&___nl__4);
#line 61
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__3));
#line 61
c_rt_lib0clear(&___nl__3);
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(785)));
#line 62
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 62
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 62
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 62
label_86:
#line 62
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 62
if(c_rt_lib0check_true_native(___nl__8)){ goto label_101;}
#line 62
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 63
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 63
c_rt_lib0delete(pretty_printer_priv0print_fun_def(&___nl__1, ___nl__4, ___nl__9));
#line 63
c_rt_lib0clear(&___nl__9);
#line 64
c_rt_lib0move(&___nl__9, string0lf());
#line 64
c_rt_lib0move(&___nl__10, string0lf());
#line 64
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 64
c_rt_lib0clear(&___nl__10);
#line 64
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__9));
#line 64
c_rt_lib0clear(&___nl__9);
#line 65
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 65
goto label_86;
#line 65
label_101:
#line 65
c_rt_lib0clear(&___nl__3);
#line 65
c_rt_lib0clear(&___nl__4);
#line 65
c_rt_lib0clear(&___nl__5);
#line 65
c_rt_lib0clear(&___nl__6);
#line 65
c_rt_lib0clear(&___nl__7);
#line 65
c_rt_lib0clear(&___nl__8);
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(167)));
#line 66
c_rt_lib0clear(&___nl__0);
#line 66
c_rt_lib0clear(&___nl__1);
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
return ___nl__3;
#line 66
c_rt_lib0clear(&___nl__3);
#line 66
c_rt_lib0clear(&___nl__1);
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
c_rt_lib0clear(&___nl__0);
#line 66
return NULL;
}

ImmT pretty_printer_priv0print_fun_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 70
c_rt_lib0delete(pretty_printer_priv0print_fun_def_head(___ref___0, ___nl__1, ___nl__2));
#line 71
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(201)));
#line 71
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 71
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__3, ___nl__4));
#line 71
c_rt_lib0clear(&___nl__4);
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0clear(&___nl__1);
#line 71
c_rt_lib0clear(&___nl__2);
#line 71
return NULL;
}

ImmT pretty_printer_priv0print_fun_def_head(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
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
#line 75
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 76
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(182)));
#line 76
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(183)));
#line 76
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 78
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(377)));
#line 78
if(c_rt_lib0check_true_native(___nl__5)){ goto label_15;}
#line 78
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 78
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 78
nl_die_arg(___nl__5);
#line 76
label_9:
#line 77
c_rt_lib0move(&___nl__6,___get_global_const(185));
#line 77
c_rt_lib0move(&___nl__6, c_rt_lib0concat_new(___nl__2, ___nl__6));
#line 77
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 77
c_rt_lib0clear(&___nl__6);
#line 78
goto label_17;
#line 78
label_15:
#line 79
goto label_17;
#line 79
label_17:
#line 79
c_rt_lib0clear(&___nl__4);
#line 79
c_rt_lib0clear(&___nl__5);
#line 80
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(93)));
#line 80
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 80
c_rt_lib0clear(&___nl__4);
#line 82
c_rt_lib0move(&___nl__6,___get_global_const(948));
#line 82
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 82
c_rt_lib0clear(&___nl__6);
#line 83
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 84
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__3));
#line 85
c_rt_lib0move(&___nl__9,___get_global_const(371));
#line 85
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 85
c_rt_lib0clear(&___nl__9);
#line 85
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(4, ___nl__5, ___nl__6, ___nl__7, ___nl__8));
#line 85
c_rt_lib0clear(&___nl__5);
#line 85
c_rt_lib0clear(&___nl__6);
#line 85
c_rt_lib0clear(&___nl__7);
#line 85
c_rt_lib0clear(&___nl__8);
#line 87
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 87
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 87
c_rt_lib0clear(&___nl__6);
#line 87
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 87
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 87
label_41:
#line 87
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__6, ___nl__5));
#line 87
if(c_rt_lib0check_true_native(___nl__8)){ goto label_129;}
#line 88
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 88
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__6));
#line 89
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(222)));
#line 89
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(5)));
#line 89
if(c_rt_lib0check_true_native(___nl__11)){ goto label_54;}
#line 91
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(41)));
#line 91
if(c_rt_lib0check_true_native(___nl__11)){ goto label_65;}
#line 91
c_rt_lib0move(&___nl__11,___get_global_const(91));
#line 91
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 91
nl_die_arg(___nl__11);
#line 89
label_54:
#line 90
c_rt_lib0move(&___nl__14,___get_global_const(5));
#line 90
c_rt_lib0move(&___nl__13, wprinter0build_sim(___nl__14));
#line 90
c_rt_lib0clear(&___nl__14);
#line 90
c_rt_lib0move(&___nl__14, wprinter0get_sep());
#line 90
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 90
c_rt_lib0clear(&___nl__13);
#line 90
c_rt_lib0clear(&___nl__14);
#line 90
c_rt_lib0delete(array0append(&___nl__4, ___nl__12));
#line 90
c_rt_lib0clear(&___nl__12);
#line 91
goto label_67;
#line 91
label_65:
#line 92
goto label_67;
#line 92
label_67:
#line 92
c_rt_lib0clear(&___nl__10);
#line 92
c_rt_lib0clear(&___nl__11);
#line 93
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(93)));
#line 93
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 93
c_rt_lib0clear(&___nl__11);
#line 93
c_rt_lib0delete(array0push(&___nl__4, ___nl__10));
#line 93
c_rt_lib0clear(&___nl__10);
#line 94
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 94
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(63)));
#line 94
if(c_rt_lib0check_true_native(___nl__11)){ goto label_83;}
#line 96
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(41)));
#line 96
if(c_rt_lib0check_true_native(___nl__11)){ goto label_100;}
#line 96
c_rt_lib0move(&___nl__11,___get_global_const(91));
#line 96
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 96
nl_die_arg(___nl__11);
#line 94
label_83:
#line 94
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__10, ___get_global_const(63)));
#line 95
c_rt_lib0move(&___nl__14, wprinter0get_sep());
#line 95
c_rt_lib0move(&___nl__16,___get_global_const(417));
#line 95
c_rt_lib0move(&___nl__15, wprinter0build_sim(___nl__16));
#line 95
c_rt_lib0clear(&___nl__16);
#line 95
c_rt_lib0move(&___nl__16, wprinter0get_sep());
#line 95
c_rt_lib0move(&___nl__17, pretty_printer_priv0print_val(___nl__12));
#line 95
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(4, ___nl__14, ___nl__15, ___nl__16, ___nl__17));
#line 95
c_rt_lib0clear(&___nl__14);
#line 95
c_rt_lib0clear(&___nl__15);
#line 95
c_rt_lib0clear(&___nl__16);
#line 95
c_rt_lib0clear(&___nl__17);
#line 95
c_rt_lib0delete(array0append(&___nl__4, ___nl__13));
#line 95
c_rt_lib0clear(&___nl__13);
#line 95
c_rt_lib0clear(&___nl__12);
#line 96
goto label_102;
#line 96
label_100:
#line 97
goto label_102;
#line 97
label_102:
#line 97
c_rt_lib0clear(&___nl__10);
#line 97
c_rt_lib0clear(&___nl__11);
#line 98
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 98
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 98
c_rt_lib0clear(&___nl__11);
#line 98
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 98
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__11));
#line 98
c_rt_lib0clear(&___nl__11);
#line 98
c_rt_lib0move(&___nl__10, c_rt_lib0num_ne(___nl__6, ___nl__10));
#line 98
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 98
if(c_rt_lib0check_true_native(___nl__10)){ goto label_124;}
#line 98
c_rt_lib0move(&___nl__13,___get_global_const(256));
#line 98
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 98
c_rt_lib0clear(&___nl__13);
#line 98
c_rt_lib0move(&___nl__13, wprinter0get_sep());
#line 98
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__12, ___nl__13));
#line 98
c_rt_lib0clear(&___nl__12);
#line 98
c_rt_lib0clear(&___nl__13);
#line 98
c_rt_lib0delete(array0append(&___nl__4, ___nl__11));
#line 98
c_rt_lib0clear(&___nl__11);
#line 98
goto label_124;
#line 98
label_124:
#line 98
c_rt_lib0clear(&___nl__10);
#line 98
c_rt_lib0clear(&___nl__9);
#line 99
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 99
goto label_41;
#line 99
label_129:
#line 99
c_rt_lib0clear(&___nl__5);
#line 99
c_rt_lib0clear(&___nl__6);
#line 99
c_rt_lib0clear(&___nl__7);
#line 99
c_rt_lib0clear(&___nl__8);
#line 100
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 100
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 100
c_rt_lib0clear(&___nl__6);
#line 100
c_rt_lib0delete(array0push(&___nl__4, ___nl__5));
#line 100
c_rt_lib0clear(&___nl__5);
#line 101
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(786)));
#line 101
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(63)));
#line 101
if(c_rt_lib0check_true_native(___nl__6)){ goto label_147;}
#line 108
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(41)));
#line 108
if(c_rt_lib0check_true_native(___nl__6)){ goto label_164;}
#line 108
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 108
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 108
nl_die_arg(___nl__6);
#line 101
label_147:
#line 101
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(63)));
#line 103
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 104
c_rt_lib0move(&___nl__11,___get_global_const(417));
#line 104
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 104
c_rt_lib0clear(&___nl__11);
#line 105
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 106
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_sim_value(___nl__7));
#line 106
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(4, ___nl__9, ___nl__10, ___nl__11, ___nl__12));
#line 106
c_rt_lib0clear(&___nl__9);
#line 106
c_rt_lib0clear(&___nl__10);
#line 106
c_rt_lib0clear(&___nl__11);
#line 106
c_rt_lib0clear(&___nl__12);
#line 106
c_rt_lib0delete(array0append(&___nl__4, ___nl__8));
#line 106
c_rt_lib0clear(&___nl__8);
#line 106
c_rt_lib0clear(&___nl__7);
#line 108
goto label_166;
#line 108
label_164:
#line 109
goto label_166;
#line 109
label_166:
#line 109
c_rt_lib0clear(&___nl__5);
#line 109
c_rt_lib0clear(&___nl__6);
#line 110
c_rt_lib0move(&___nl__5, wprinter0build_pretty_l(___nl__4));
#line 110
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 110
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__5, ___nl__6));
#line 110
c_rt_lib0clear(&___nl__6);
#line 110
c_rt_lib0clear(&___nl__5);
#line 110
c_rt_lib0clear(&___nl__3);
#line 110
c_rt_lib0clear(&___nl__4);
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
c_rt_lib0clear(&___nl__2);
#line 110
return NULL;
}

ImmT pretty_printer_priv0join_print_var_decl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 114
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 115
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 115
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 115
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 115
label_4:
#line 115
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 115
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 116
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 116
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_var_decl(___nl__7));
#line 116
c_rt_lib0clear(&___nl__7);
#line 116
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 116
c_rt_lib0clear(&___nl__6);
#line 117
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 117
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 117
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 117
c_rt_lib0clear(&___nl__7);
#line 117
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 117
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 117
if(c_rt_lib0check_true_native(___nl__6)){ goto label_29;}
#line 117
c_rt_lib0move(&___nl__9,___get_global_const(256));
#line 117
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 117
c_rt_lib0clear(&___nl__9);
#line 117
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 117
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 117
c_rt_lib0clear(&___nl__8);
#line 117
c_rt_lib0clear(&___nl__9);
#line 117
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 117
c_rt_lib0clear(&___nl__7);
#line 117
goto label_29;
#line 117
label_29:
#line 117
c_rt_lib0clear(&___nl__6);
#line 118
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 118
goto label_4;
#line 118
label_33:
#line 118
c_rt_lib0clear(&___nl__2);
#line 118
c_rt_lib0clear(&___nl__3);
#line 118
c_rt_lib0clear(&___nl__4);
#line 118
c_rt_lib0clear(&___nl__5);
#line 119
c_rt_lib0clear(&___nl__0);
#line 119
return ___nl__1;
#line 119
c_rt_lib0clear(&___nl__1);
#line 119
c_rt_lib0clear(&___nl__0);
#line 119
return NULL;
}

ImmT pretty_printer_priv0print_var_decl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
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
#line 123
c_rt_lib0move(&___nl__3,___get_global_const(847));
#line 123
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0move(&___nl__3, wprinter0get_sep());
#line 123
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__2, ___nl__3));
#line 123
c_rt_lib0clear(&___nl__2);
#line 123
c_rt_lib0clear(&___nl__3);
#line 124
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 124
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(63)));
#line 124
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 132
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(41)));
#line 132
if(c_rt_lib0check_true_native(___nl__3)){ goto label_36;}
#line 132
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 132
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 132
nl_die_arg(___nl__3);
#line 124
label_15:
#line 124
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(63)));
#line 126
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 126
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 126
c_rt_lib0clear(&___nl__7);
#line 127
c_rt_lib0move(&___nl__7, wprinter0get_sep());
#line 128
c_rt_lib0move(&___nl__9,___get_global_const(417));
#line 128
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 128
c_rt_lib0clear(&___nl__9);
#line 129
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 130
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__4));
#line 130
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(5, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10));
#line 130
c_rt_lib0clear(&___nl__6);
#line 130
c_rt_lib0clear(&___nl__7);
#line 130
c_rt_lib0clear(&___nl__8);
#line 130
c_rt_lib0clear(&___nl__9);
#line 130
c_rt_lib0clear(&___nl__10);
#line 130
c_rt_lib0delete(array0append(&___nl__1, ___nl__5));
#line 130
c_rt_lib0clear(&___nl__5);
#line 130
c_rt_lib0clear(&___nl__4);
#line 132
goto label_43;
#line 132
label_36:
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 133
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 133
c_rt_lib0clear(&___nl__5);
#line 133
c_rt_lib0delete(array0push(&___nl__1, ___nl__4));
#line 133
c_rt_lib0clear(&___nl__4);
#line 134
goto label_43;
#line 134
label_43:
#line 134
c_rt_lib0clear(&___nl__2);
#line 134
c_rt_lib0clear(&___nl__3);
#line 135
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 135
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(192)));
#line 135
if(c_rt_lib0check_true_native(___nl__3)){ goto label_54;}
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(41)));
#line 137
if(c_rt_lib0check_true_native(___nl__3)){ goto label_71;}
#line 137
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 137
nl_die_arg(___nl__3);
#line 135
label_54:
#line 135
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(192)));
#line 136
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 136
c_rt_lib0move(&___nl__8,___get_global_const(863));
#line 136
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 136
c_rt_lib0clear(&___nl__8);
#line 136
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 136
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__4));
#line 136
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(4, ___nl__6, ___nl__7, ___nl__8, ___nl__9));
#line 136
c_rt_lib0clear(&___nl__6);
#line 136
c_rt_lib0clear(&___nl__7);
#line 136
c_rt_lib0clear(&___nl__8);
#line 136
c_rt_lib0clear(&___nl__9);
#line 136
c_rt_lib0delete(array0append(&___nl__1, ___nl__5));
#line 136
c_rt_lib0clear(&___nl__5);
#line 136
c_rt_lib0clear(&___nl__4);
#line 137
goto label_73;
#line 137
label_71:
#line 138
goto label_73;
#line 138
label_73:
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
c_rt_lib0clear(&___nl__3);
#line 139
c_rt_lib0move(&___nl__2, wprinter0build_pretty_l(___nl__1));
#line 139
c_rt_lib0clear(&___nl__0);
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
return ___nl__2;
#line 139
c_rt_lib0clear(&___nl__2);
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
c_rt_lib0clear(&___nl__0);
#line 139
return NULL;
}

ImmT pretty_printer_priv0pind(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 143
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 144
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 144
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 144
label_3:
#line 144
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__0));
#line 144
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 144
c_rt_lib0move(&___nl__6,___get_global_const(243));
#line 144
c_rt_lib0move(&___nl__5, string0chr(___nl__6));
#line 144
c_rt_lib0clear(&___nl__6);
#line 144
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__5));
#line 144
c_rt_lib0clear(&___nl__5);
#line 144
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 144
goto label_3;
#line 144
label_13:
#line 144
c_rt_lib0clear(&___nl__2);
#line 144
c_rt_lib0clear(&___nl__3);
#line 144
c_rt_lib0clear(&___nl__4);
#line 145
c_rt_lib0clear(&___nl__0);
#line 145
return ___nl__1;
#line 145
c_rt_lib0clear(&___nl__1);
#line 145
c_rt_lib0clear(&___nl__0);
#line 145
return NULL;
}

ImmT pretty_printer_priv0join_print_hash_elem(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 149
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 150
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 150
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 150
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 150
label_4:
#line 150
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 150
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 151
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 151
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_hash_elem(___nl__7));
#line 151
c_rt_lib0clear(&___nl__7);
#line 151
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 151
c_rt_lib0clear(&___nl__6);
#line 152
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 152
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 152
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 152
c_rt_lib0clear(&___nl__7);
#line 152
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 152
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 152
if(c_rt_lib0check_true_native(___nl__6)){ goto label_29;}
#line 152
c_rt_lib0move(&___nl__9,___get_global_const(256));
#line 152
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 152
c_rt_lib0clear(&___nl__9);
#line 152
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 152
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 152
c_rt_lib0clear(&___nl__8);
#line 152
c_rt_lib0clear(&___nl__9);
#line 152
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 152
c_rt_lib0clear(&___nl__7);
#line 152
goto label_29;
#line 152
label_29:
#line 152
c_rt_lib0clear(&___nl__6);
#line 153
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 153
goto label_4;
#line 153
label_33:
#line 153
c_rt_lib0clear(&___nl__2);
#line 153
c_rt_lib0clear(&___nl__3);
#line 153
c_rt_lib0clear(&___nl__4);
#line 153
c_rt_lib0clear(&___nl__5);
#line 154
c_rt_lib0clear(&___nl__0);
#line 154
return ___nl__1;
#line 154
c_rt_lib0clear(&___nl__1);
#line 154
c_rt_lib0clear(&___nl__0);
#line 154
return NULL;
}

ImmT pretty_printer_priv0print_hash_elem(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(205)));
#line 158
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(204)));
#line 158
label_7:
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 158
if(c_rt_lib0check_true_native(___nl__1)){ goto label_28;}
#line 159
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(329)));
#line 159
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(192)));
#line 159
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__2, ___get_global_const(854)));
#line 160
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 160
c_rt_lib0move(&___nl__5,___get_global_const(270));
#line 160
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__2, ___nl__5));
#line 160
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 160
c_rt_lib0move(&___nl__3, pretty_printer_priv0get_compressed_fun_val(___nl__4, ___nl__5, ___nl__6));
#line 160
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0clear(&___nl__5);
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
c_rt_lib0clear(&___nl__0);
#line 160
c_rt_lib0clear(&___nl__1);
#line 160
c_rt_lib0clear(&___nl__2);
#line 160
return ___nl__3;
#line 160
c_rt_lib0clear(&___nl__3);
#line 160
c_rt_lib0clear(&___nl__2);
#line 161
goto label_28;
#line 161
label_28:
#line 161
c_rt_lib0clear(&___nl__1);
#line 163
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(329)));
#line 163
c_rt_lib0move(&___nl__3, pretty_printer_priv0print_val(___nl__4));
#line 163
c_rt_lib0clear(&___nl__4);
#line 164
c_rt_lib0move(&___nl__4, wprinter0get_sep());
#line 165
c_rt_lib0move(&___nl__6,___get_global_const(254));
#line 165
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 165
c_rt_lib0clear(&___nl__6);
#line 166
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 167
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 167
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 167
c_rt_lib0clear(&___nl__8);
#line 167
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(5, ___nl__3, ___nl__4, ___nl__5, ___nl__6, ___nl__7));
#line 167
c_rt_lib0clear(&___nl__3);
#line 167
c_rt_lib0clear(&___nl__4);
#line 167
c_rt_lib0clear(&___nl__5);
#line 167
c_rt_lib0clear(&___nl__6);
#line 167
c_rt_lib0clear(&___nl__7);
#line 167
c_rt_lib0move(&___nl__1, wprinter0build_pretty_l(___nl__2));
#line 167
c_rt_lib0clear(&___nl__2);
#line 167
c_rt_lib0clear(&___nl__0);
#line 167
return ___nl__1;
#line 167
c_rt_lib0clear(&___nl__1);
#line 167
c_rt_lib0clear(&___nl__0);
#line 167
return NULL;
}

ImmT pretty_printer_priv0print_variant(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 172
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 172
c_rt_lib0move(&___nl__3,___get_global_const(7));
#line 172
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__3));
#line 172
c_rt_lib0clear(&___nl__3);
#line 172
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 172
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 172
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(847)));
#line 172
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 172
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(829)));
#line 172
label_9:
#line 172
c_rt_lib0clear(&___nl__2);
#line 172
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 172
if(c_rt_lib0check_true_native(___nl__1)){ goto label_21;}
#line 173
c_rt_lib0move(&___nl__3,___get_global_const(962));
#line 173
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 173
c_rt_lib0clear(&___nl__3);
#line 173
c_rt_lib0clear(&___nl__0);
#line 173
c_rt_lib0clear(&___nl__1);
#line 173
return ___nl__2;
#line 173
c_rt_lib0clear(&___nl__2);
#line 174
goto label_43;
#line 174
label_21:
#line 174
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 174
c_rt_lib0move(&___nl__3,___get_global_const(8));
#line 174
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__3));
#line 174
c_rt_lib0clear(&___nl__3);
#line 174
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 174
if(c_rt_lib0check_true_native(___nl__2)){ goto label_31;}
#line 174
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(847)));
#line 174
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 174
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(829)));
#line 174
label_31:
#line 174
c_rt_lib0clear(&___nl__2);
#line 174
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 174
if(c_rt_lib0check_true_native(___nl__1)){ goto label_43;}
#line 175
c_rt_lib0move(&___nl__3,___get_global_const(963));
#line 175
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 175
c_rt_lib0clear(&___nl__3);
#line 175
c_rt_lib0clear(&___nl__0);
#line 175
c_rt_lib0clear(&___nl__1);
#line 175
return ___nl__2;
#line 175
c_rt_lib0clear(&___nl__2);
#line 176
goto label_43;
#line 176
label_43:
#line 176
c_rt_lib0clear(&___nl__1);
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(847)));
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(204)));
#line 177
if(c_rt_lib0check_true_native(___nl__1)){ goto label_52;}
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(847)));
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(205)));
#line 177
label_52:
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 177
if(c_rt_lib0check_true_native(___nl__1)){ goto label_73;}
#line 178
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(847)));
#line 178
c_rt_lib0move(&___nl__4,___get_global_const(417));
#line 178
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 178
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 178
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0move(&___nl__5,___get_global_const(371));
#line 178
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 178
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 178
c_rt_lib0move(&___nl__2, pretty_printer_priv0get_compressed_fun_val(___nl__3, ___nl__4, ___nl__5));
#line 178
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0clear(&___nl__4);
#line 178
c_rt_lib0clear(&___nl__3);
#line 178
c_rt_lib0clear(&___nl__0);
#line 178
c_rt_lib0clear(&___nl__1);
#line 178
return ___nl__2;
#line 178
c_rt_lib0clear(&___nl__2);
#line 179
goto label_73;
#line 179
label_73:
#line 179
c_rt_lib0clear(&___nl__1);
#line 180
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 181
c_rt_lib0move(&___nl__3,___get_global_const(417));
#line 181
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 181
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 181
c_rt_lib0clear(&___nl__3);
#line 181
c_rt_lib0delete(array0push(&___nl__1, ___nl__2));
#line 181
c_rt_lib0clear(&___nl__2);
#line 183
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(847)));
#line 183
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(192)));
#line 183
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(829)));
#line 183
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 183
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 183
if(c_rt_lib0check_true_native(___nl__2)){ goto label_106;}
#line 182
c_rt_lib0move(&___nl__5,___get_global_const(371));
#line 182
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 182
c_rt_lib0clear(&___nl__5);
#line 182
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(847)));
#line 182
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__6));
#line 182
c_rt_lib0clear(&___nl__6);
#line 182
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 182
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 182
c_rt_lib0clear(&___nl__7);
#line 182
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(3, ___nl__4, ___nl__5, ___nl__6));
#line 182
c_rt_lib0clear(&___nl__4);
#line 182
c_rt_lib0clear(&___nl__5);
#line 182
c_rt_lib0clear(&___nl__6);
#line 182
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 182
c_rt_lib0clear(&___nl__3);
#line 182
goto label_106;
#line 182
label_106:
#line 182
c_rt_lib0clear(&___nl__2);
#line 184
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 184
c_rt_lib0clear(&___nl__0);
#line 184
c_rt_lib0clear(&___nl__1);
#line 184
return ___nl__2;
#line 184
c_rt_lib0clear(&___nl__2);
#line 184
c_rt_lib0clear(&___nl__1);
#line 184
c_rt_lib0clear(&___nl__0);
#line 184
return NULL;
}

ImmT pretty_printer_priv0print_variant_case_decl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 188
c_rt_lib0move(&___nl__3,___get_global_const(417));
#line 188
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 188
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 188
c_rt_lib0clear(&___nl__4);
#line 188
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 188
c_rt_lib0clear(&___nl__3);
#line 188
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 188
c_rt_lib0clear(&___nl__2);
#line 189
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 189
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(192)));
#line 189
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 191
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(41)));
#line 191
if(c_rt_lib0check_true_native(___nl__3)){ goto label_33;}
#line 191
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 191
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 191
nl_die_arg(___nl__3);
#line 189
label_16:
#line 189
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(192)));
#line 190
c_rt_lib0move(&___nl__7,___get_global_const(371));
#line 190
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 190
c_rt_lib0clear(&___nl__7);
#line 190
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_var_decl(___nl__4));
#line 190
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 190
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 190
c_rt_lib0clear(&___nl__9);
#line 190
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(3, ___nl__6, ___nl__7, ___nl__8));
#line 190
c_rt_lib0clear(&___nl__6);
#line 190
c_rt_lib0clear(&___nl__7);
#line 190
c_rt_lib0clear(&___nl__8);
#line 190
c_rt_lib0delete(array0append(&___nl__1, ___nl__5));
#line 190
c_rt_lib0clear(&___nl__5);
#line 190
c_rt_lib0clear(&___nl__4);
#line 191
goto label_35;
#line 191
label_33:
#line 192
goto label_35;
#line 192
label_35:
#line 192
c_rt_lib0clear(&___nl__2);
#line 192
c_rt_lib0clear(&___nl__3);
#line 193
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 193
c_rt_lib0clear(&___nl__0);
#line 193
c_rt_lib0clear(&___nl__1);
#line 193
return ___nl__2;
#line 193
c_rt_lib0clear(&___nl__2);
#line 193
c_rt_lib0clear(&___nl__1);
#line 193
c_rt_lib0clear(&___nl__0);
#line 193
return NULL;
}

ImmT pretty_printer_priv0join_print_fun_arg(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 197
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 198
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 198
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 198
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 198
label_4:
#line 198
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 198
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 199
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 199
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_fun_arg(___nl__7));
#line 199
c_rt_lib0clear(&___nl__7);
#line 199
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 199
c_rt_lib0clear(&___nl__6);
#line 200
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 200
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 200
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 200
c_rt_lib0clear(&___nl__7);
#line 200
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 200
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 200
if(c_rt_lib0check_true_native(___nl__6)){ goto label_29;}
#line 200
c_rt_lib0move(&___nl__9,___get_global_const(256));
#line 200
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 200
c_rt_lib0clear(&___nl__9);
#line 200
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 200
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 200
c_rt_lib0clear(&___nl__8);
#line 200
c_rt_lib0clear(&___nl__9);
#line 200
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 200
c_rt_lib0clear(&___nl__7);
#line 200
goto label_29;
#line 200
label_29:
#line 200
c_rt_lib0clear(&___nl__6);
#line 201
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 201
goto label_4;
#line 201
label_33:
#line 201
c_rt_lib0clear(&___nl__2);
#line 201
c_rt_lib0clear(&___nl__3);
#line 201
c_rt_lib0clear(&___nl__4);
#line 201
c_rt_lib0clear(&___nl__5);
#line 202
c_rt_lib0clear(&___nl__0);
#line 202
return ___nl__1;
#line 202
c_rt_lib0clear(&___nl__1);
#line 202
c_rt_lib0clear(&___nl__0);
#line 202
return NULL;
}

ImmT pretty_printer_priv0print_fun_arg(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 206
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 207
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(222)));
#line 207
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(5)));
#line 207
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 209
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(41)));
#line 209
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 209
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 209
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 209
nl_die_arg(___nl__3);
#line 207
label_9:
#line 208
c_rt_lib0move(&___nl__6,___get_global_const(5));
#line 208
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 208
c_rt_lib0clear(&___nl__6);
#line 208
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 208
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 208
c_rt_lib0clear(&___nl__5);
#line 208
c_rt_lib0clear(&___nl__6);
#line 208
c_rt_lib0delete(array0append(&___nl__1, ___nl__4));
#line 208
c_rt_lib0clear(&___nl__4);
#line 209
goto label_22;
#line 209
label_20:
#line 210
goto label_22;
#line 210
label_22:
#line 210
c_rt_lib0clear(&___nl__2);
#line 210
c_rt_lib0clear(&___nl__3);
#line 211
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 211
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_val(___nl__3));
#line 211
c_rt_lib0clear(&___nl__3);
#line 211
c_rt_lib0delete(array0push(&___nl__1, ___nl__2));
#line 211
c_rt_lib0clear(&___nl__2);
#line 212
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 212
c_rt_lib0clear(&___nl__0);
#line 212
c_rt_lib0clear(&___nl__1);
#line 212
return ___nl__2;
#line 212
c_rt_lib0clear(&___nl__2);
#line 212
c_rt_lib0clear(&___nl__1);
#line 212
c_rt_lib0clear(&___nl__0);
#line 212
return NULL;
}

ImmT pretty_printer_priv0count_structs(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 216
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 217
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 217
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 217
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 217
label_4:
#line 217
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 217
if(c_rt_lib0check_true_native(___nl__6)){ goto label_26;}
#line 217
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(192)));
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(204)));
#line 218
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(192)));
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(205)));
#line 218
label_15:
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 218
if(c_rt_lib0check_true_native(___nl__7)){ goto label_22;}
#line 218
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 218
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__8));
#line 218
c_rt_lib0clear(&___nl__8);
#line 218
goto label_22;
#line 218
label_22:
#line 218
c_rt_lib0clear(&___nl__7);
#line 219
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 219
goto label_4;
#line 219
label_26:
#line 219
c_rt_lib0clear(&___nl__2);
#line 219
c_rt_lib0clear(&___nl__3);
#line 219
c_rt_lib0clear(&___nl__4);
#line 219
c_rt_lib0clear(&___nl__5);
#line 219
c_rt_lib0clear(&___nl__6);
#line 220
c_rt_lib0clear(&___nl__0);
#line 220
return ___nl__1;
#line 220
c_rt_lib0clear(&___nl__1);
#line 220
c_rt_lib0clear(&___nl__0);
#line 220
return NULL;
}

ImmT pretty_printer_priv0get_compressed_fun_val(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 225
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 226
c_rt_lib0copy(&___nl__5, ___nl__2);
#line 227
label_2:
#line 228
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 228
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(204)));
#line 228
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 228
if(c_rt_lib0check_true_native(___nl__6)){ goto label_39;}
#line 229
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 229
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(204)));
#line 230
c_rt_lib0move(&___nl__8,___get_global_const(258));
#line 230
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__8));
#line 230
c_rt_lib0clear(&___nl__8);
#line 231
c_rt_lib0move(&___nl__8,___get_global_const(259));
#line 231
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 231
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 231
c_rt_lib0clear(&___nl__8);
#line 232
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 232
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 232
c_rt_lib0move(&___nl__8, c_rt_lib0num_ne(___nl__8, ___nl__9));
#line 232
c_rt_lib0clear(&___nl__9);
#line 232
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 232
if(c_rt_lib0check_true_native(___nl__8)){ goto label_30;}
#line 233
c_rt_lib0move(&___nl__9, pretty_printer_priv0join_print_val(___nl__7));
#line 233
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 233
c_rt_lib0clear(&___nl__9);
#line 234
c_rt_lib0clear(&___nl__6);
#line 234
c_rt_lib0clear(&___nl__7);
#line 234
c_rt_lib0clear(&___nl__8);
#line 234
goto label_73;
#line 235
goto label_30;
#line 235
label_30:
#line 235
c_rt_lib0clear(&___nl__8);
#line 236
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 236
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 236
c_rt_lib0clear(&___nl__9);
#line 236
c_rt_lib0copy(&___nl__0, ___nl__8);
#line 236
c_rt_lib0clear(&___nl__8);
#line 236
c_rt_lib0clear(&___nl__7);
#line 237
goto label_70;
#line 237
label_39:
#line 237
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 237
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(205)));
#line 237
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 237
if(c_rt_lib0check_true_native(___nl__6)){ goto label_61;}
#line 238
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 238
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(205)));
#line 239
c_rt_lib0move(&___nl__8,___get_global_const(252));
#line 239
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__8));
#line 239
c_rt_lib0clear(&___nl__8);
#line 240
c_rt_lib0move(&___nl__8,___get_global_const(253));
#line 240
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 240
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 240
c_rt_lib0clear(&___nl__8);
#line 241
c_rt_lib0move(&___nl__8, pretty_printer_priv0join_print_hash_elem(___nl__7));
#line 241
c_rt_lib0copy(&___nl__3, ___nl__8);
#line 241
c_rt_lib0clear(&___nl__8);
#line 242
c_rt_lib0clear(&___nl__6);
#line 242
c_rt_lib0clear(&___nl__7);
#line 242
goto label_73;
#line 242
c_rt_lib0clear(&___nl__7);
#line 243
goto label_70;
#line 243
label_61:
#line 244
c_rt_lib0move(&___nl__8, pretty_printer_priv0print_val(___nl__0));
#line 244
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 244
c_rt_lib0clear(&___nl__8);
#line 244
c_rt_lib0copy(&___nl__3, ___nl__7);
#line 244
c_rt_lib0clear(&___nl__7);
#line 245
c_rt_lib0clear(&___nl__6);
#line 245
goto label_73;
#line 246
goto label_70;
#line 246
label_70:
#line 246
c_rt_lib0clear(&___nl__6);
#line 227
goto label_2;
#line 227
label_73:
#line 248
c_rt_lib0move(&___nl__6, wprinter0build_pretty_arr_decl(___nl__3, ___nl__4, ___nl__5));
#line 248
c_rt_lib0clear(&___nl__0);
#line 248
c_rt_lib0clear(&___nl__1);
#line 248
c_rt_lib0clear(&___nl__2);
#line 248
c_rt_lib0clear(&___nl__3);
#line 248
c_rt_lib0clear(&___nl__4);
#line 248
c_rt_lib0clear(&___nl__5);
#line 248
return ___nl__6;
#line 248
c_rt_lib0clear(&___nl__6);
#line 248
c_rt_lib0clear(&___nl__3);
#line 248
c_rt_lib0clear(&___nl__4);
#line 248
c_rt_lib0clear(&___nl__5);
#line 248
c_rt_lib0clear(&___nl__0);
#line 248
c_rt_lib0clear(&___nl__1);
#line 248
c_rt_lib0clear(&___nl__2);
#line 248
return NULL;
}

ImmT pretty_printer_priv0print_st(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 252
c_rt_lib0move(&___nl__3,___get_global_const(571));
#line 252
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__3));
#line 252
c_rt_lib0clear(&___nl__3);
#line 253
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__1, ___nl__2));
#line 253
c_rt_lib0clear(&___nl__1);
#line 253
c_rt_lib0clear(&___nl__2);
#line 253
return NULL;
}

ImmT pretty_printer_priv0get_fun_label(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
pretty_printer_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 257
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 257
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 257
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 257
c_rt_lib0move(&___nl__2,___get_global_const(185));
#line 257
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 257
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 257
goto label_9;
#line 257
label_7:
#line 257
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 257
label_9:
#line 257
c_rt_lib0clear(&___nl__0);
#line 257
c_rt_lib0clear(&___nl__1);
#line 257
return ___nl__2;
#line 257
c_rt_lib0clear(&___nl__2);
#line 257
c_rt_lib0clear(&___nl__0);
#line 257
c_rt_lib0clear(&___nl__1);
#line 257
return NULL;
}

ImmT pretty_printer_priv0string_to_nl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 261
c_rt_lib0move(&___nl__2,___get_global_const(464));
#line 261
c_rt_lib0move(&___nl__3,___get_global_const(1004));
#line 261
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 261
c_rt_lib0clear(&___nl__3);
#line 261
c_rt_lib0clear(&___nl__2);
#line 261
c_rt_lib0clear(&___nl__0);
#line 261
return ___nl__1;
#line 261
c_rt_lib0clear(&___nl__1);
#line 261
c_rt_lib0clear(&___nl__0);
#line 261
return NULL;
}

ImmT pretty_printer_priv0join_print_val(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 265
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 266
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 266
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 266
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 266
label_4:
#line 266
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 266
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 267
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 267
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__7));
#line 267
c_rt_lib0clear(&___nl__7);
#line 267
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 267
c_rt_lib0clear(&___nl__6);
#line 268
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 268
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 268
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 268
c_rt_lib0clear(&___nl__7);
#line 268
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 268
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 268
if(c_rt_lib0check_true_native(___nl__6)){ goto label_29;}
#line 268
c_rt_lib0move(&___nl__9,___get_global_const(256));
#line 268
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 268
c_rt_lib0clear(&___nl__9);
#line 268
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 268
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 268
c_rt_lib0clear(&___nl__8);
#line 268
c_rt_lib0clear(&___nl__9);
#line 268
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 268
c_rt_lib0clear(&___nl__7);
#line 268
goto label_29;
#line 268
label_29:
#line 268
c_rt_lib0clear(&___nl__6);
#line 269
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 269
goto label_4;
#line 269
label_33:
#line 269
c_rt_lib0clear(&___nl__2);
#line 269
c_rt_lib0clear(&___nl__3);
#line 269
c_rt_lib0clear(&___nl__4);
#line 269
c_rt_lib0clear(&___nl__5);
#line 270
c_rt_lib0clear(&___nl__0);
#line 270
return ___nl__1;
#line 270
c_rt_lib0clear(&___nl__1);
#line 270
c_rt_lib0clear(&___nl__0);
#line 270
return NULL;
}

ImmT pretty_printer_priv0is_to_change_ov(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 274
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 274
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(810)));
#line 274
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 274
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 274
if(c_rt_lib0check_true_native(___nl__1)){ goto label_11;}
#line 274
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 274
c_rt_lib0clear(&___nl__0);
#line 274
c_rt_lib0clear(&___nl__1);
#line 274
return ___nl__2;
#line 274
c_rt_lib0clear(&___nl__2);
#line 274
goto label_11;
#line 274
label_11:
#line 274
c_rt_lib0clear(&___nl__1);
#line 275
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 275
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__1, ___get_global_const(810)));
#line 276
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 276
c_rt_lib0move(&___nl__2, array0len(___nl__4));
#line 276
c_rt_lib0clear(&___nl__4);
#line 276
c_rt_lib0move(&___nl__4,___get_global_const(6));
#line 276
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__4));
#line 276
c_rt_lib0clear(&___nl__4);
#line 276
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 276
if(c_rt_lib0check_true_native(___nl__3)){ goto label_32;}
#line 276
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(132)));
#line 276
c_rt_lib0move(&___nl__4,___get_global_const(770));
#line 276
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 276
c_rt_lib0clear(&___nl__4);
#line 276
if(c_rt_lib0check_true_native(___nl__2)){ goto label_32;}
#line 276
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(132)));
#line 276
c_rt_lib0move(&___nl__4,___get_global_const(1005));
#line 276
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 276
c_rt_lib0clear(&___nl__4);
#line 276
label_32:
#line 276
c_rt_lib0clear(&___nl__3);
#line 276
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 276
if(c_rt_lib0check_true_native(___nl__2)){ goto label_106;}
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(93)));
#line 277
c_rt_lib0move(&___nl__5,___get_global_const(884));
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 277
c_rt_lib0clear(&___nl__5);
#line 277
if(c_rt_lib0check_true_native(___nl__3)){ goto label_45;}
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(93)));
#line 277
c_rt_lib0move(&___nl__5,___get_global_const(882));
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 277
c_rt_lib0clear(&___nl__5);
#line 277
label_45:
#line 277
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 277
if(c_rt_lib0check_true_native(___nl__4)){ goto label_55;}
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 277
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 277
c_rt_lib0clear(&___nl__5);
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(198)));
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(192)));
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(769)));
#line 277
label_55:
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 277
if(c_rt_lib0check_true_native(___nl__3)){ goto label_103;}
#line 278
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 278
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 278
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 278
c_rt_lib0clear(&___nl__5);
#line 278
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 278
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(192)));
#line 278
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(769)));
#line 279
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(327)));
#line 279
c_rt_lib0move(&___nl__5, array0len(___nl__7));
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 279
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 279
if(c_rt_lib0check_true_native(___nl__6)){ goto label_85;}
#line 279
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(327)));
#line 279
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 279
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 279
c_rt_lib0clear(&___nl__8);
#line 279
c_rt_lib0move(&___nl__8,___get_global_const(571));
#line 279
c_rt_lib0move(&___nl__5, string0index2(___nl__7, ___nl__8));
#line 279
c_rt_lib0clear(&___nl__8);
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 279
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__5, ___nl__7));
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
label_85:
#line 279
c_rt_lib0clear(&___nl__6);
#line 279
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 279
if(c_rt_lib0check_true_native(___nl__5)){ goto label_99;}
#line 280
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 280
c_rt_lib0clear(&___nl__0);
#line 280
c_rt_lib0clear(&___nl__1);
#line 280
c_rt_lib0clear(&___nl__2);
#line 280
c_rt_lib0clear(&___nl__3);
#line 280
c_rt_lib0clear(&___nl__4);
#line 280
c_rt_lib0clear(&___nl__5);
#line 280
return ___nl__6;
#line 280
c_rt_lib0clear(&___nl__6);
#line 281
goto label_99;
#line 281
label_99:
#line 281
c_rt_lib0clear(&___nl__5);
#line 281
c_rt_lib0clear(&___nl__4);
#line 282
goto label_103;
#line 282
label_103:
#line 282
c_rt_lib0clear(&___nl__3);
#line 283
goto label_106;
#line 283
label_106:
#line 283
c_rt_lib0clear(&___nl__2);
#line 284
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 284
c_rt_lib0clear(&___nl__0);
#line 284
c_rt_lib0clear(&___nl__1);
#line 284
return ___nl__2;
#line 284
c_rt_lib0clear(&___nl__2);
#line 284
c_rt_lib0clear(&___nl__1);
#line 284
c_rt_lib0clear(&___nl__0);
#line 284
return NULL;
}

ImmT pretty_printer_priv0print_val(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
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
#line 288
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 288
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(196)));
#line 288
if(c_rt_lib0check_true_native(___nl__2)){ goto label_38;}
#line 290
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(769)));
#line 290
if(c_rt_lib0check_true_native(___nl__2)){ goto label_49;}
#line 300
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(854)));
#line 300
if(c_rt_lib0check_true_native(___nl__2)){ goto label_121;}
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(839)));
#line 302
if(c_rt_lib0check_true_native(___nl__2)){ goto label_132;}
#line 304
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(847)));
#line 304
if(c_rt_lib0check_true_native(___nl__2)){ goto label_143;}
#line 306
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(853)));
#line 306
if(c_rt_lib0check_true_native(___nl__2)){ goto label_154;}
#line 308
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(852)));
#line 308
if(c_rt_lib0check_true_native(___nl__2)){ goto label_177;}
#line 316
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(208)));
#line 316
if(c_rt_lib0check_true_native(___nl__2)){ goto label_222;}
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(855)));
#line 349
if(c_rt_lib0check_true_native(___nl__2)){ goto label_391;}
#line 364
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(859)));
#line 364
if(c_rt_lib0check_true_native(___nl__2)){ goto label_445;}
#line 366
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(858)));
#line 366
if(c_rt_lib0check_true_native(___nl__2)){ goto label_464;}
#line 368
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(856)));
#line 368
if(c_rt_lib0check_true_native(___nl__2)){ goto label_483;}
#line 370
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(810)));
#line 370
if(c_rt_lib0check_true_native(___nl__2)){ goto label_502;}
#line 394
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(829)));
#line 394
if(c_rt_lib0check_true_native(___nl__2)){ goto label_680;}
#line 396
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(204)));
#line 396
if(c_rt_lib0check_true_native(___nl__2)){ goto label_693;}
#line 398
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(205)));
#line 398
if(c_rt_lib0check_true_native(___nl__2)){ goto label_708;}
#line 400
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(857)));
#line 400
if(c_rt_lib0check_true_native(___nl__2)){ goto label_725;}
#line 400
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 400
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__1));
#line 400
nl_die_arg(___nl__2);
#line 288
label_38:
#line 288
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(196)));
#line 289
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__3));
#line 289
c_rt_lib0clear(&___nl__0);
#line 289
c_rt_lib0clear(&___nl__1);
#line 289
c_rt_lib0clear(&___nl__2);
#line 289
c_rt_lib0clear(&___nl__3);
#line 289
return ___nl__4;
#line 289
c_rt_lib0clear(&___nl__4);
#line 289
c_rt_lib0clear(&___nl__3);
#line 290
goto label_742;
#line 290
label_49:
#line 290
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(769)));
#line 291
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 292
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(327)));
#line 292
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 292
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 292
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 292
label_56:
#line 292
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 292
if(c_rt_lib0check_true_native(___nl__10)){ goto label_68;}
#line 292
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 293
c_rt_lib0move(&___nl__11,___get_global_const(464));
#line 293
c_rt_lib0move(&___nl__12, pretty_printer_priv0string_to_nl(___nl__6));
#line 293
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 293
c_rt_lib0clear(&___nl__12);
#line 293
c_rt_lib0delete(array0push(&___nl__4, ___nl__11));
#line 293
c_rt_lib0clear(&___nl__11);
#line 294
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 294
goto label_56;
#line 294
label_68:
#line 294
c_rt_lib0clear(&___nl__5);
#line 294
c_rt_lib0clear(&___nl__6);
#line 294
c_rt_lib0clear(&___nl__7);
#line 294
c_rt_lib0clear(&___nl__8);
#line 294
c_rt_lib0clear(&___nl__9);
#line 294
c_rt_lib0clear(&___nl__10);
#line 295
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(906)));
#line 295
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(905)));
#line 295
if(c_rt_lib0check_true_native(___nl__6)){ goto label_83;}
#line 296
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(904)));
#line 296
if(c_rt_lib0check_true_native(___nl__6)){ goto label_85;}
#line 296
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 296
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 296
nl_die_arg(___nl__6);
#line 295
label_83:
#line 296
goto label_105;
#line 296
label_85:
#line 297
c_rt_lib0move(&___nl__8, array0len(___nl__4));
#line 297
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 297
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 297
c_rt_lib0clear(&___nl__9);
#line 297
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__4, ___nl__8));
#line 297
c_rt_lib0clear(&___nl__8);
#line 297
c_rt_lib0move(&___nl__8,___get_global_const(464));
#line 297
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 297
c_rt_lib0clear(&___nl__8);
#line 297
c_rt_lib0move(&___nl__9, array0len(___nl__4));
#line 297
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 297
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__10));
#line 297
c_rt_lib0clear(&___nl__10);
#line 297
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 297
c_rt_lib0array_set(&___nl__4, ___nl__9, ___nl__8);
#line 297
c_rt_lib0clear(&___nl__7);
#line 297
c_rt_lib0clear(&___nl__8);
#line 297
c_rt_lib0clear(&___nl__9);
#line 298
goto label_105;
#line 298
label_105:
#line 298
c_rt_lib0clear(&___nl__5);
#line 298
c_rt_lib0clear(&___nl__6);
#line 299
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(906)));
#line 299
c_rt_lib0move(&___nl__5, wprinter0build_str_arr(___nl__4, ___nl__6));
#line 299
c_rt_lib0clear(&___nl__6);
#line 299
c_rt_lib0clear(&___nl__0);
#line 299
c_rt_lib0clear(&___nl__1);
#line 299
c_rt_lib0clear(&___nl__2);
#line 299
c_rt_lib0clear(&___nl__3);
#line 299
c_rt_lib0clear(&___nl__4);
#line 299
return ___nl__5;
#line 299
c_rt_lib0clear(&___nl__5);
#line 299
c_rt_lib0clear(&___nl__4);
#line 299
c_rt_lib0clear(&___nl__3);
#line 300
goto label_742;
#line 300
label_121:
#line 300
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(854)));
#line 301
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__3));
#line 301
c_rt_lib0clear(&___nl__0);
#line 301
c_rt_lib0clear(&___nl__1);
#line 301
c_rt_lib0clear(&___nl__2);
#line 301
c_rt_lib0clear(&___nl__3);
#line 301
return ___nl__4;
#line 301
c_rt_lib0clear(&___nl__4);
#line 301
c_rt_lib0clear(&___nl__3);
#line 302
goto label_742;
#line 302
label_132:
#line 302
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(839)));
#line 303
c_rt_lib0move(&___nl__4, pretty_printer_priv0print_variant(___nl__3));
#line 303
c_rt_lib0clear(&___nl__0);
#line 303
c_rt_lib0clear(&___nl__1);
#line 303
c_rt_lib0clear(&___nl__2);
#line 303
c_rt_lib0clear(&___nl__3);
#line 303
return ___nl__4;
#line 303
c_rt_lib0clear(&___nl__4);
#line 303
c_rt_lib0clear(&___nl__3);
#line 304
goto label_742;
#line 304
label_143:
#line 304
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(847)));
#line 305
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__3));
#line 305
c_rt_lib0clear(&___nl__0);
#line 305
c_rt_lib0clear(&___nl__1);
#line 305
c_rt_lib0clear(&___nl__2);
#line 305
c_rt_lib0clear(&___nl__3);
#line 305
return ___nl__4;
#line 305
c_rt_lib0clear(&___nl__4);
#line 305
c_rt_lib0clear(&___nl__3);
#line 306
goto label_742;
#line 306
label_154:
#line 306
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(853)));
#line 307
c_rt_lib0move(&___nl__7,___get_global_const(371));
#line 307
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 307
c_rt_lib0clear(&___nl__7);
#line 307
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__3));
#line 307
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 307
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 307
c_rt_lib0clear(&___nl__9);
#line 307
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(3, ___nl__6, ___nl__7, ___nl__8));
#line 307
c_rt_lib0clear(&___nl__6);
#line 307
c_rt_lib0clear(&___nl__7);
#line 307
c_rt_lib0clear(&___nl__8);
#line 307
c_rt_lib0move(&___nl__4, wprinter0build_pretty_a(___nl__5));
#line 307
c_rt_lib0clear(&___nl__5);
#line 307
c_rt_lib0clear(&___nl__0);
#line 307
c_rt_lib0clear(&___nl__1);
#line 307
c_rt_lib0clear(&___nl__2);
#line 307
c_rt_lib0clear(&___nl__3);
#line 307
return ___nl__4;
#line 307
c_rt_lib0clear(&___nl__4);
#line 307
c_rt_lib0clear(&___nl__3);
#line 308
goto label_742;
#line 308
label_177:
#line 308
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(852)));
#line 310
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(860)));
#line 310
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__7));
#line 310
c_rt_lib0clear(&___nl__7);
#line 311
c_rt_lib0move(&___nl__7, wprinter0get_sep());
#line 312
c_rt_lib0move(&___nl__11,___get_global_const(1006));
#line 312
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 312
c_rt_lib0clear(&___nl__11);
#line 312
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(861)));
#line 312
c_rt_lib0move(&___nl__11, pretty_printer_priv0print_val(___nl__12));
#line 312
c_rt_lib0clear(&___nl__12);
#line 312
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 312
c_rt_lib0clear(&___nl__10);
#line 312
c_rt_lib0clear(&___nl__11);
#line 312
c_rt_lib0move(&___nl__8, wprinter0build_pretty_op_l(___nl__9));
#line 312
c_rt_lib0clear(&___nl__9);
#line 313
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 314
c_rt_lib0move(&___nl__13,___get_global_const(1007));
#line 314
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 314
c_rt_lib0clear(&___nl__13);
#line 314
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(862)));
#line 314
c_rt_lib0move(&___nl__13, pretty_printer_priv0print_val(___nl__14));
#line 314
c_rt_lib0clear(&___nl__14);
#line 314
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__12, ___nl__13));
#line 314
c_rt_lib0clear(&___nl__12);
#line 314
c_rt_lib0clear(&___nl__13);
#line 314
c_rt_lib0move(&___nl__10, wprinter0build_pretty_op_l(___nl__11));
#line 314
c_rt_lib0clear(&___nl__11);
#line 314
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(5, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10));
#line 314
c_rt_lib0clear(&___nl__6);
#line 314
c_rt_lib0clear(&___nl__7);
#line 314
c_rt_lib0clear(&___nl__8);
#line 314
c_rt_lib0clear(&___nl__9);
#line 314
c_rt_lib0clear(&___nl__10);
#line 314
c_rt_lib0move(&___nl__4, wprinter0build_pretty_a(___nl__5));
#line 314
c_rt_lib0clear(&___nl__5);
#line 314
c_rt_lib0clear(&___nl__0);
#line 314
c_rt_lib0clear(&___nl__1);
#line 314
c_rt_lib0clear(&___nl__2);
#line 314
c_rt_lib0clear(&___nl__3);
#line 314
return ___nl__4;
#line 314
c_rt_lib0clear(&___nl__4);
#line 314
c_rt_lib0clear(&___nl__3);
#line 316
goto label_742;
#line 316
label_222:
#line 316
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(208)));
#line 317
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 318
c_rt_lib0move(&___nl__5,___get_global_const(849));
#line 318
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 318
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 318
if(c_rt_lib0check_true_native(___nl__5)){ goto label_261;}
#line 320
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 320
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 320
c_rt_lib0clear(&___nl__11);
#line 320
c_rt_lib0move(&___nl__12,___get_global_const(258));
#line 320
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 320
c_rt_lib0clear(&___nl__12);
#line 320
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 320
c_rt_lib0clear(&___nl__10);
#line 320
c_rt_lib0clear(&___nl__11);
#line 320
c_rt_lib0move(&___nl__8, wprinter0build_pretty_l(___nl__9));
#line 320
c_rt_lib0clear(&___nl__9);
#line 321
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 321
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 321
c_rt_lib0clear(&___nl__10);
#line 322
c_rt_lib0move(&___nl__11,___get_global_const(259));
#line 322
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 322
c_rt_lib0clear(&___nl__11);
#line 322
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 322
c_rt_lib0clear(&___nl__8);
#line 322
c_rt_lib0clear(&___nl__9);
#line 322
c_rt_lib0clear(&___nl__10);
#line 322
c_rt_lib0move(&___nl__6, wprinter0build_pretty_a(___nl__7));
#line 322
c_rt_lib0clear(&___nl__7);
#line 322
c_rt_lib0clear(&___nl__0);
#line 322
c_rt_lib0clear(&___nl__1);
#line 322
c_rt_lib0clear(&___nl__2);
#line 322
c_rt_lib0clear(&___nl__3);
#line 322
c_rt_lib0clear(&___nl__4);
#line 322
c_rt_lib0clear(&___nl__5);
#line 322
return ___nl__6;
#line 322
c_rt_lib0clear(&___nl__6);
#line 324
goto label_386;
#line 324
label_261:
#line 324
c_rt_lib0move(&___nl__5,___get_global_const(850));
#line 324
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 324
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 324
if(c_rt_lib0check_true_native(___nl__5)){ goto label_298;}
#line 326
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 326
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 326
c_rt_lib0clear(&___nl__11);
#line 326
c_rt_lib0move(&___nl__12,___get_global_const(252));
#line 326
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 326
c_rt_lib0clear(&___nl__12);
#line 326
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 326
c_rt_lib0clear(&___nl__10);
#line 326
c_rt_lib0clear(&___nl__11);
#line 326
c_rt_lib0move(&___nl__8, wprinter0build_pretty_l(___nl__9));
#line 326
c_rt_lib0clear(&___nl__9);
#line 327
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 327
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 327
c_rt_lib0clear(&___nl__10);
#line 328
c_rt_lib0move(&___nl__11,___get_global_const(253));
#line 328
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 328
c_rt_lib0clear(&___nl__11);
#line 328
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 328
c_rt_lib0clear(&___nl__8);
#line 328
c_rt_lib0clear(&___nl__9);
#line 328
c_rt_lib0clear(&___nl__10);
#line 328
c_rt_lib0move(&___nl__6, wprinter0build_pretty_a(___nl__7));
#line 328
c_rt_lib0clear(&___nl__7);
#line 328
c_rt_lib0clear(&___nl__0);
#line 328
c_rt_lib0clear(&___nl__1);
#line 328
c_rt_lib0clear(&___nl__2);
#line 328
c_rt_lib0clear(&___nl__3);
#line 328
c_rt_lib0clear(&___nl__4);
#line 328
c_rt_lib0clear(&___nl__5);
#line 328
return ___nl__6;
#line 328
c_rt_lib0clear(&___nl__6);
#line 330
goto label_386;
#line 330
label_298:
#line 330
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 330
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 330
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 330
if(c_rt_lib0check_true_native(___nl__5)){ goto label_355;}
#line 332
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 332
c_rt_lib0move(&___nl__7, pretty_printer_priv0is_to_change_ov(___nl__8));
#line 332
c_rt_lib0clear(&___nl__8);
#line 332
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 332
if(c_rt_lib0check_true_native(___nl__7)){ goto label_326;}
#line 334
c_rt_lib0move(&___nl__11,___get_global_const(371));
#line 334
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 334
c_rt_lib0clear(&___nl__11);
#line 335
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 335
c_rt_lib0move(&___nl__11, pretty_printer_priv0print_val(___nl__12));
#line 335
c_rt_lib0clear(&___nl__12);
#line 336
c_rt_lib0move(&___nl__13,___get_global_const(260));
#line 336
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 336
c_rt_lib0clear(&___nl__13);
#line 336
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(3, ___nl__10, ___nl__11, ___nl__12));
#line 336
c_rt_lib0clear(&___nl__10);
#line 336
c_rt_lib0clear(&___nl__11);
#line 336
c_rt_lib0clear(&___nl__12);
#line 336
c_rt_lib0move(&___nl__8, wprinter0build_pretty_a(___nl__9));
#line 336
c_rt_lib0clear(&___nl__9);
#line 336
c_rt_lib0copy(&___nl__6, ___nl__8);
#line 336
c_rt_lib0clear(&___nl__8);
#line 338
goto label_333;
#line 338
label_326:
#line 339
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 339
c_rt_lib0move(&___nl__8, pretty_printer_priv0print_val(___nl__9));
#line 339
c_rt_lib0clear(&___nl__9);
#line 339
c_rt_lib0copy(&___nl__6, ___nl__8);
#line 339
c_rt_lib0clear(&___nl__8);
#line 340
goto label_333;
#line 340
label_333:
#line 340
c_rt_lib0clear(&___nl__7);
#line 341
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__4));
#line 341
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 341
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 341
c_rt_lib0clear(&___nl__11);
#line 341
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__6, ___nl__9, ___nl__10));
#line 341
c_rt_lib0clear(&___nl__9);
#line 341
c_rt_lib0clear(&___nl__10);
#line 341
c_rt_lib0move(&___nl__7, wprinter0build_pretty_op_l(___nl__8));
#line 341
c_rt_lib0clear(&___nl__8);
#line 341
c_rt_lib0clear(&___nl__0);
#line 341
c_rt_lib0clear(&___nl__1);
#line 341
c_rt_lib0clear(&___nl__2);
#line 341
c_rt_lib0clear(&___nl__3);
#line 341
c_rt_lib0clear(&___nl__4);
#line 341
c_rt_lib0clear(&___nl__5);
#line 341
c_rt_lib0clear(&___nl__6);
#line 341
return ___nl__7;
#line 341
c_rt_lib0clear(&___nl__7);
#line 341
c_rt_lib0clear(&___nl__6);
#line 342
goto label_386;
#line 342
label_355:
#line 344
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 344
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 344
c_rt_lib0clear(&___nl__11);
#line 344
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 344
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__4));
#line 344
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(3, ___nl__10, ___nl__11, ___nl__12));
#line 344
c_rt_lib0clear(&___nl__10);
#line 344
c_rt_lib0clear(&___nl__11);
#line 344
c_rt_lib0clear(&___nl__12);
#line 344
c_rt_lib0move(&___nl__8, wprinter0build_pretty_op_l(___nl__9));
#line 344
c_rt_lib0clear(&___nl__9);
#line 345
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 346
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 346
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 346
c_rt_lib0clear(&___nl__11);
#line 346
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 346
c_rt_lib0clear(&___nl__8);
#line 346
c_rt_lib0clear(&___nl__9);
#line 346
c_rt_lib0clear(&___nl__10);
#line 346
c_rt_lib0move(&___nl__6, wprinter0build_pretty_op_l(___nl__7));
#line 346
c_rt_lib0clear(&___nl__7);
#line 346
c_rt_lib0clear(&___nl__0);
#line 346
c_rt_lib0clear(&___nl__1);
#line 346
c_rt_lib0clear(&___nl__2);
#line 346
c_rt_lib0clear(&___nl__3);
#line 346
c_rt_lib0clear(&___nl__4);
#line 346
c_rt_lib0clear(&___nl__5);
#line 346
return ___nl__6;
#line 346
c_rt_lib0clear(&___nl__6);
#line 348
goto label_386;
#line 348
label_386:
#line 348
c_rt_lib0clear(&___nl__5);
#line 348
c_rt_lib0clear(&___nl__4);
#line 348
c_rt_lib0clear(&___nl__3);
#line 349
goto label_742;
#line 349
label_391:
#line 349
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(855)));
#line 351
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 351
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(210)));
#line 351
if(c_rt_lib0check_true_native(___nl__6)){ goto label_401;}
#line 353
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(209)));
#line 353
if(c_rt_lib0check_true_native(___nl__6)){ goto label_406;}
#line 353
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 353
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 353
nl_die_arg(___nl__6);
#line 351
label_401:
#line 352
c_rt_lib0move(&___nl__7,___get_global_const(884));
#line 352
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 352
c_rt_lib0clear(&___nl__7);
#line 353
goto label_411;
#line 353
label_406:
#line 354
c_rt_lib0move(&___nl__7,___get_global_const(882));
#line 354
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 354
c_rt_lib0clear(&___nl__7);
#line 355
goto label_411;
#line 355
label_411:
#line 355
c_rt_lib0clear(&___nl__5);
#line 355
c_rt_lib0clear(&___nl__6);
#line 357
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 357
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 357
c_rt_lib0clear(&___nl__8);
#line 358
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 359
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__4));
#line 360
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 361
c_rt_lib0move(&___nl__12,___get_global_const(417));
#line 361
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 361
c_rt_lib0clear(&___nl__12);
#line 362
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(900)));
#line 362
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 362
c_rt_lib0clear(&___nl__13);
#line 362
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11, ___nl__12));
#line 362
c_rt_lib0clear(&___nl__7);
#line 362
c_rt_lib0clear(&___nl__8);
#line 362
c_rt_lib0clear(&___nl__9);
#line 362
c_rt_lib0clear(&___nl__10);
#line 362
c_rt_lib0clear(&___nl__11);
#line 362
c_rt_lib0clear(&___nl__12);
#line 362
c_rt_lib0move(&___nl__5, wprinter0build_pretty_op_l(___nl__6));
#line 362
c_rt_lib0clear(&___nl__6);
#line 362
c_rt_lib0clear(&___nl__0);
#line 362
c_rt_lib0clear(&___nl__1);
#line 362
c_rt_lib0clear(&___nl__2);
#line 362
c_rt_lib0clear(&___nl__3);
#line 362
c_rt_lib0clear(&___nl__4);
#line 362
return ___nl__5;
#line 362
c_rt_lib0clear(&___nl__5);
#line 362
c_rt_lib0clear(&___nl__4);
#line 362
c_rt_lib0clear(&___nl__3);
#line 364
goto label_742;
#line 364
label_445:
#line 364
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(859)));
#line 365
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__3));
#line 365
c_rt_lib0move(&___nl__8,___get_global_const(165));
#line 365
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 365
c_rt_lib0clear(&___nl__8);
#line 365
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 365
c_rt_lib0clear(&___nl__6);
#line 365
c_rt_lib0clear(&___nl__7);
#line 365
c_rt_lib0move(&___nl__4, wprinter0build_pretty_op_l(___nl__5));
#line 365
c_rt_lib0clear(&___nl__5);
#line 365
c_rt_lib0clear(&___nl__0);
#line 365
c_rt_lib0clear(&___nl__1);
#line 365
c_rt_lib0clear(&___nl__2);
#line 365
c_rt_lib0clear(&___nl__3);
#line 365
return ___nl__4;
#line 365
c_rt_lib0clear(&___nl__4);
#line 365
c_rt_lib0clear(&___nl__3);
#line 366
goto label_742;
#line 366
label_464:
#line 366
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(858)));
#line 367
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__3));
#line 367
c_rt_lib0move(&___nl__8,___get_global_const(878));
#line 367
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 367
c_rt_lib0clear(&___nl__8);
#line 367
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 367
c_rt_lib0clear(&___nl__6);
#line 367
c_rt_lib0clear(&___nl__7);
#line 367
c_rt_lib0move(&___nl__4, wprinter0build_pretty_op_l(___nl__5));
#line 367
c_rt_lib0clear(&___nl__5);
#line 367
c_rt_lib0clear(&___nl__0);
#line 367
c_rt_lib0clear(&___nl__1);
#line 367
c_rt_lib0clear(&___nl__2);
#line 367
c_rt_lib0clear(&___nl__3);
#line 367
return ___nl__4;
#line 367
c_rt_lib0clear(&___nl__4);
#line 367
c_rt_lib0clear(&___nl__3);
#line 368
goto label_742;
#line 368
label_483:
#line 368
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(856)));
#line 369
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 369
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 369
c_rt_lib0clear(&___nl__6);
#line 369
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(198)));
#line 369
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__7));
#line 369
c_rt_lib0clear(&___nl__7);
#line 369
c_rt_lib0move(&___nl__4, wprinter0build_pretty_bind(___nl__5, ___nl__6));
#line 369
c_rt_lib0clear(&___nl__6);
#line 369
c_rt_lib0clear(&___nl__5);
#line 369
c_rt_lib0clear(&___nl__0);
#line 369
c_rt_lib0clear(&___nl__1);
#line 369
c_rt_lib0clear(&___nl__2);
#line 369
c_rt_lib0clear(&___nl__3);
#line 369
return ___nl__4;
#line 369
c_rt_lib0clear(&___nl__4);
#line 369
c_rt_lib0clear(&___nl__3);
#line 370
goto label_742;
#line 370
label_502:
#line 370
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(810)));
#line 371
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 371
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(132)));
#line 371
c_rt_lib0move(&___nl__4, pretty_printer_priv0get_fun_label(___nl__5, ___nl__6));
#line 371
c_rt_lib0clear(&___nl__6);
#line 371
c_rt_lib0clear(&___nl__5);
#line 371
c_rt_lib0move(&___nl__5,___get_global_const(371));
#line 371
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 371
c_rt_lib0clear(&___nl__5);
#line 372
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 372
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 372
c_rt_lib0clear(&___nl__6);
#line 372
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 372
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__6));
#line 372
c_rt_lib0clear(&___nl__6);
#line 372
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 372
if(c_rt_lib0check_true_native(___nl__5)){ goto label_551;}
#line 373
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 373
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 373
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__7));
#line 373
c_rt_lib0clear(&___nl__7);
#line 373
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(198)));
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(192)));
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(205)));
#line 374
if(c_rt_lib0check_true_native(___nl__7)){ goto label_530;}
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(192)));
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(204)));
#line 374
label_530:
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 374
if(c_rt_lib0check_true_native(___nl__7)){ goto label_547;}
#line 375
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 375
c_rt_lib0move(&___nl__8, pretty_printer_priv0get_compressed_fun_val(___nl__6, ___nl__4, ___nl__9));
#line 375
c_rt_lib0clear(&___nl__9);
#line 375
c_rt_lib0clear(&___nl__0);
#line 375
c_rt_lib0clear(&___nl__1);
#line 375
c_rt_lib0clear(&___nl__2);
#line 375
c_rt_lib0clear(&___nl__3);
#line 375
c_rt_lib0clear(&___nl__4);
#line 375
c_rt_lib0clear(&___nl__5);
#line 375
c_rt_lib0clear(&___nl__6);
#line 375
c_rt_lib0clear(&___nl__7);
#line 375
return ___nl__8;
#line 375
c_rt_lib0clear(&___nl__8);
#line 376
goto label_547;
#line 376
label_547:
#line 376
c_rt_lib0clear(&___nl__7);
#line 376
c_rt_lib0clear(&___nl__6);
#line 377
goto label_600;
#line 377
label_551:
#line 377
c_rt_lib0move(&___nl__5, pretty_printer_priv0is_to_change_ov(___nl__0));
#line 377
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 377
if(c_rt_lib0check_true_native(___nl__5)){ goto label_600;}
#line 379
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 379
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 379
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__10));
#line 379
c_rt_lib0clear(&___nl__10);
#line 379
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(198)));
#line 379
c_rt_lib0move(&___nl__8, pretty_printer_priv0print_val(___nl__9));
#line 379
c_rt_lib0clear(&___nl__9);
#line 380
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 381
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 381
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 381
c_rt_lib0clear(&___nl__11);
#line 382
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 383
c_rt_lib0move(&___nl__13,___get_global_const(417));
#line 383
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 383
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 383
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__14, ___nl__15));
#line 383
c_rt_lib0clear(&___nl__15);
#line 383
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(198)));
#line 383
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(192)));
#line 383
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__14, ___get_global_const(769)));
#line 383
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(327)));
#line 383
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 383
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__14, ___nl__15));
#line 383
c_rt_lib0clear(&___nl__15);
#line 383
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 383
c_rt_lib0clear(&___nl__14);
#line 383
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 383
c_rt_lib0clear(&___nl__13);
#line 383
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(5, ___nl__8, ___nl__9, ___nl__10, ___nl__11, ___nl__12));
#line 383
c_rt_lib0clear(&___nl__8);
#line 383
c_rt_lib0clear(&___nl__9);
#line 383
c_rt_lib0clear(&___nl__10);
#line 383
c_rt_lib0clear(&___nl__11);
#line 383
c_rt_lib0clear(&___nl__12);
#line 383
c_rt_lib0move(&___nl__6, wprinter0build_pretty_op_l(___nl__7));
#line 383
c_rt_lib0clear(&___nl__7);
#line 383
c_rt_lib0clear(&___nl__0);
#line 383
c_rt_lib0clear(&___nl__1);
#line 383
c_rt_lib0clear(&___nl__2);
#line 383
c_rt_lib0clear(&___nl__3);
#line 383
c_rt_lib0clear(&___nl__4);
#line 383
c_rt_lib0clear(&___nl__5);
#line 383
return ___nl__6;
#line 383
c_rt_lib0clear(&___nl__6);
#line 385
goto label_600;
#line 385
label_600:
#line 385
c_rt_lib0clear(&___nl__5);
#line 386
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__4));
#line 386
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 386
c_rt_lib0clear(&___nl__6);
#line 387
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 387
c_rt_lib0move(&___nl__6, pretty_printer_priv0join_print_fun_arg(___nl__7));
#line 387
c_rt_lib0clear(&___nl__7);
#line 387
c_rt_lib0delete(array0append(&___nl__5, ___nl__6));
#line 387
c_rt_lib0clear(&___nl__6);
#line 388
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 388
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 388
c_rt_lib0clear(&___nl__7);
#line 388
c_rt_lib0delete(array0push(&___nl__5, ___nl__6));
#line 388
c_rt_lib0clear(&___nl__6);
#line 391
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 391
c_rt_lib0move(&___nl__6, pretty_printer_priv0count_structs(___nl__8));
#line 391
c_rt_lib0clear(&___nl__8);
#line 391
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 391
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 391
c_rt_lib0clear(&___nl__9);
#line 391
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__8));
#line 391
c_rt_lib0clear(&___nl__8);
#line 391
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 391
if(c_rt_lib0check_true_native(___nl__7)){ goto label_631;}
#line 391
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 391
c_rt_lib0move(&___nl__6, array0len(___nl__8));
#line 391
c_rt_lib0clear(&___nl__8);
#line 391
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 391
c_rt_lib0move(&___nl__6, c_rt_lib0gt(___nl__6, ___nl__8));
#line 391
c_rt_lib0clear(&___nl__8);
#line 391
label_631:
#line 391
c_rt_lib0clear(&___nl__7);
#line 391
if(c_rt_lib0check_true_native(___nl__6)){ goto label_651;}
#line 392
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 392
c_rt_lib0move(&___nl__6, array0len(___nl__8));
#line 392
c_rt_lib0clear(&___nl__8);
#line 392
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 392
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__8));
#line 392
c_rt_lib0clear(&___nl__8);
#line 392
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 392
if(c_rt_lib0check_true_native(___nl__7)){ goto label_649;}
#line 392
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 392
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 392
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 392
c_rt_lib0clear(&___nl__8);
#line 392
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(198)));
#line 392
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(192)));
#line 392
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(810)));
#line 392
label_649:
#line 392
c_rt_lib0clear(&___nl__7);
#line 392
label_651:
#line 392
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 392
if(c_rt_lib0check_true_native(___nl__6)){ goto label_665;}
#line 389
c_rt_lib0move(&___nl__7, wprinter0build_pretty_op_l(___nl__5));
#line 389
c_rt_lib0clear(&___nl__0);
#line 389
c_rt_lib0clear(&___nl__1);
#line 389
c_rt_lib0clear(&___nl__2);
#line 389
c_rt_lib0clear(&___nl__3);
#line 389
c_rt_lib0clear(&___nl__4);
#line 389
c_rt_lib0clear(&___nl__5);
#line 389
c_rt_lib0clear(&___nl__6);
#line 389
return ___nl__7;
#line 389
c_rt_lib0clear(&___nl__7);
#line 389
goto label_665;
#line 389
label_665:
#line 389
c_rt_lib0clear(&___nl__6);
#line 393
c_rt_lib0move(&___nl__6, wprinter0build_pretty_l(___nl__5));
#line 393
c_rt_lib0clear(&___nl__0);
#line 393
c_rt_lib0clear(&___nl__1);
#line 393
c_rt_lib0clear(&___nl__2);
#line 393
c_rt_lib0clear(&___nl__3);
#line 393
c_rt_lib0clear(&___nl__4);
#line 393
c_rt_lib0clear(&___nl__5);
#line 393
return ___nl__6;
#line 393
c_rt_lib0clear(&___nl__6);
#line 393
c_rt_lib0clear(&___nl__4);
#line 393
c_rt_lib0clear(&___nl__5);
#line 393
c_rt_lib0clear(&___nl__3);
#line 394
goto label_742;
#line 394
label_680:
#line 395
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 395
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 395
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(337), ___nl__5));
#line 395
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(242), ___nl__4, ___get_global_const(1008), ___nl__5));
#line 395
c_rt_lib0clear(&___nl__4);
#line 395
c_rt_lib0clear(&___nl__5);
#line 395
c_rt_lib0clear(&___nl__0);
#line 395
c_rt_lib0clear(&___nl__1);
#line 395
c_rt_lib0clear(&___nl__2);
#line 395
return ___nl__3;
#line 395
c_rt_lib0clear(&___nl__3);
#line 396
goto label_742;
#line 396
label_693:
#line 396
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(204)));
#line 397
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 397
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 397
c_rt_lib0move(&___nl__4, pretty_printer_priv0get_compressed_fun_val(___nl__0, ___nl__5, ___nl__6));
#line 397
c_rt_lib0clear(&___nl__6);
#line 397
c_rt_lib0clear(&___nl__5);
#line 397
c_rt_lib0clear(&___nl__0);
#line 397
c_rt_lib0clear(&___nl__1);
#line 397
c_rt_lib0clear(&___nl__2);
#line 397
c_rt_lib0clear(&___nl__3);
#line 397
return ___nl__4;
#line 397
c_rt_lib0clear(&___nl__4);
#line 397
c_rt_lib0clear(&___nl__3);
#line 398
goto label_742;
#line 398
label_708:
#line 398
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(205)));
#line 399
c_rt_lib0move(&___nl__5, pretty_printer_priv0join_print_hash_elem(___nl__3));
#line 399
c_rt_lib0move(&___nl__6,___get_global_const(252));
#line 399
c_rt_lib0move(&___nl__7,___get_global_const(253));
#line 399
c_rt_lib0move(&___nl__4, wprinter0build_pretty_arr_decl(___nl__5, ___nl__6, ___nl__7));
#line 399
c_rt_lib0clear(&___nl__7);
#line 399
c_rt_lib0clear(&___nl__6);
#line 399
c_rt_lib0clear(&___nl__5);
#line 399
c_rt_lib0clear(&___nl__0);
#line 399
c_rt_lib0clear(&___nl__1);
#line 399
c_rt_lib0clear(&___nl__2);
#line 399
c_rt_lib0clear(&___nl__3);
#line 399
return ___nl__4;
#line 399
c_rt_lib0clear(&___nl__4);
#line 399
c_rt_lib0clear(&___nl__3);
#line 400
goto label_742;
#line 400
label_725:
#line 400
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(857)));
#line 401
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 401
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(132)));
#line 401
c_rt_lib0move(&___nl__5, pretty_printer_priv0get_fun_label(___nl__6, ___nl__7));
#line 401
c_rt_lib0clear(&___nl__7);
#line 401
c_rt_lib0clear(&___nl__6);
#line 401
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 401
c_rt_lib0clear(&___nl__5);
#line 401
c_rt_lib0clear(&___nl__0);
#line 401
c_rt_lib0clear(&___nl__1);
#line 401
c_rt_lib0clear(&___nl__2);
#line 401
c_rt_lib0clear(&___nl__3);
#line 401
return ___nl__4;
#line 401
c_rt_lib0clear(&___nl__4);
#line 401
c_rt_lib0clear(&___nl__3);
#line 402
goto label_742;
#line 402
label_742:
#line 402
c_rt_lib0clear(&___nl__1);
#line 402
c_rt_lib0clear(&___nl__2);
#line 402
c_rt_lib0clear(&___nl__0);
#line 402
return NULL;
}

ImmT pretty_printer_priv0print_cond_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
c_rt_lib0arg_val(___nl__5);
pretty_printer_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 408
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__1));
#line 409
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 410
c_rt_lib0move(&___nl__10, pretty_printer_priv0join_print_var_decl(___nl__3));
#line 410
c_rt_lib0move(&___nl__9, wprinter0build_pretty_l(___nl__10));
#line 410
c_rt_lib0clear(&___nl__10);
#line 410
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(3, ___nl__7, ___nl__8, ___nl__9));
#line 410
c_rt_lib0clear(&___nl__7);
#line 410
c_rt_lib0clear(&___nl__8);
#line 410
c_rt_lib0clear(&___nl__9);
#line 412
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 412
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 412
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 412
c_rt_lib0clear(&___nl__8);
#line 412
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 412
if(c_rt_lib0check_true_native(___nl__7)){ goto label_21;}
#line 412
c_rt_lib0move(&___nl__9,___get_global_const(571));
#line 412
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 412
c_rt_lib0clear(&___nl__9);
#line 412
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 412
c_rt_lib0clear(&___nl__8);
#line 412
goto label_21;
#line 412
label_21:
#line 412
c_rt_lib0clear(&___nl__7);
#line 413
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 413
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 413
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 413
c_rt_lib0clear(&___nl__8);
#line 413
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 413
if(c_rt_lib0check_true_native(___nl__7)){ goto label_35;}
#line 413
c_rt_lib0move(&___nl__9,___get_global_const(371));
#line 413
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 413
c_rt_lib0clear(&___nl__9);
#line 413
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 413
c_rt_lib0clear(&___nl__8);
#line 413
goto label_35;
#line 413
label_35:
#line 413
c_rt_lib0clear(&___nl__7);
#line 414
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 414
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 414
c_rt_lib0clear(&___nl__7);
#line 415
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 415
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 415
c_rt_lib0clear(&___nl__8);
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 415
if(c_rt_lib0check_true_native(___nl__7)){ goto label_52;}
#line 415
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 415
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 415
c_rt_lib0clear(&___nl__9);
#line 415
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 415
c_rt_lib0clear(&___nl__8);
#line 415
goto label_52;
#line 415
label_52:
#line 415
c_rt_lib0clear(&___nl__7);
#line 417
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_simple_statement(___nl__2));
#line 418
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 419
c_rt_lib0move(&___nl__11, wprinter0build_pretty_op_l(___nl__6));
#line 419
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__9, ___nl__10, ___nl__11));
#line 419
c_rt_lib0clear(&___nl__9);
#line 419
c_rt_lib0clear(&___nl__10);
#line 419
c_rt_lib0clear(&___nl__11);
#line 419
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 419
c_rt_lib0clear(&___nl__8);
#line 419
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__7, ___nl__5));
#line 419
c_rt_lib0clear(&___nl__7);
#line 421
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 421
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__7));
#line 421
c_rt_lib0clear(&___nl__7);
#line 421
c_rt_lib0clear(&___nl__6);
#line 421
c_rt_lib0clear(&___nl__1);
#line 421
c_rt_lib0clear(&___nl__2);
#line 421
c_rt_lib0clear(&___nl__3);
#line 421
c_rt_lib0clear(&___nl__4);
#line 421
c_rt_lib0clear(&___nl__5);
#line 421
return NULL;
}

ImmT pretty_printer_priv0print_loop(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
c_rt_lib0arg_val(___nl__5);
pretty_printer_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 426
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__1));
#line 426
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 426
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__7, ___nl__8));
#line 426
c_rt_lib0clear(&___nl__7);
#line 426
c_rt_lib0clear(&___nl__8);
#line 427
c_rt_lib0move(&___nl__7, pretty_printer_priv0join_print_var_decl(___nl__3));
#line 427
c_rt_lib0delete(array0append(&___nl__6, ___nl__7));
#line 427
c_rt_lib0clear(&___nl__7);
#line 428
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 428
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 428
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 428
c_rt_lib0clear(&___nl__8);
#line 428
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 428
if(c_rt_lib0check_true_native(___nl__7)){ goto label_20;}
#line 428
c_rt_lib0move(&___nl__9,___get_global_const(571));
#line 428
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 428
c_rt_lib0clear(&___nl__9);
#line 428
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 428
c_rt_lib0clear(&___nl__8);
#line 428
goto label_20;
#line 428
label_20:
#line 428
c_rt_lib0clear(&___nl__7);
#line 429
c_rt_lib0move(&___nl__8,___get_global_const(371));
#line 429
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 429
c_rt_lib0clear(&___nl__8);
#line 429
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 429
c_rt_lib0clear(&___nl__7);
#line 430
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 431
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(1008)));
#line 431
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(327)));
#line 431
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 431
if(c_rt_lib0check_true_native(___nl__8)){ goto label_38;}
#line 432
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(1008)));
#line 432
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(327)));
#line 432
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(327)));
#line 432
c_rt_lib0delete(array0append(&___nl__6, ___nl__9));
#line 432
c_rt_lib0clear(&___nl__9);
#line 433
goto label_41;
#line 433
label_38:
#line 434
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 435
goto label_41;
#line 435
label_41:
#line 435
c_rt_lib0clear(&___nl__8);
#line 436
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 436
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 436
c_rt_lib0clear(&___nl__9);
#line 436
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 436
c_rt_lib0clear(&___nl__8);
#line 437
c_rt_lib0move(&___nl__8, wprinter0build_pretty_l(___nl__6));
#line 437
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__8, ___nl__5));
#line 437
c_rt_lib0clear(&___nl__8);
#line 438
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__2, ___nl__5));
#line 438
c_rt_lib0clear(&___nl__6);
#line 438
c_rt_lib0clear(&___nl__7);
#line 438
c_rt_lib0clear(&___nl__1);
#line 438
c_rt_lib0clear(&___nl__2);
#line 438
c_rt_lib0clear(&___nl__3);
#line 438
c_rt_lib0clear(&___nl__4);
#line 438
c_rt_lib0clear(&___nl__5);
#line 438
return NULL;
}

ImmT pretty_printer_priv0print_loop_or_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5,ImmT ___nl__6) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
c_rt_lib0arg_val(___nl__5);
c_rt_lib0arg_val(___nl__6);
pretty_printer_priv0__const__init();
ImmT ___nl__7 = NULL;
#line 443
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 443
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 443
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 444
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6));
#line 445
goto label_8;
#line 445
label_5:
#line 446
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6));
#line 447
goto label_8;
#line 447
label_8:
#line 447
c_rt_lib0clear(&___nl__7);
#line 447
c_rt_lib0clear(&___nl__1);
#line 447
c_rt_lib0clear(&___nl__2);
#line 447
c_rt_lib0clear(&___nl__3);
#line 447
c_rt_lib0clear(&___nl__4);
#line 447
c_rt_lib0clear(&___nl__5);
#line 447
c_rt_lib0clear(&___nl__6);
#line 447
return NULL;
}

ImmT pretty_printer_priv0print_try_ensure(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
pretty_printer_priv0__const__init();
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
#line 451
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__1));
#line 451
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__3));
#line 451
c_rt_lib0clear(&___nl__3);
#line 452
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(844)));
#line 452
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 454
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(846)));
#line 454
if(c_rt_lib0check_true_native(___nl__3)){ goto label_23;}
#line 456
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(845)));
#line 456
if(c_rt_lib0check_true_native(___nl__3)){ goto label_34;}
#line 456
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 456
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 456
nl_die_arg(___nl__3);
#line 452
label_12:
#line 452
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(844)));
#line 453
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 453
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_var_decl(___nl__4));
#line 453
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 453
c_rt_lib0clear(&___nl__6);
#line 453
c_rt_lib0clear(&___nl__7);
#line 453
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 453
c_rt_lib0clear(&___nl__5);
#line 453
c_rt_lib0clear(&___nl__4);
#line 454
goto label_59;
#line 454
label_23:
#line 454
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(846)));
#line 455
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 455
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 455
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 455
c_rt_lib0clear(&___nl__6);
#line 455
c_rt_lib0clear(&___nl__7);
#line 455
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 455
c_rt_lib0clear(&___nl__5);
#line 455
c_rt_lib0clear(&___nl__4);
#line 456
goto label_59;
#line 456
label_34:
#line 456
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(845)));
#line 458
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 459
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 459
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 459
c_rt_lib0clear(&___nl__8);
#line 460
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 461
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 461
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 461
c_rt_lib0clear(&___nl__10);
#line 462
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 463
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(231)));
#line 463
c_rt_lib0move(&___nl__11, pretty_printer_priv0print_val(___nl__12));
#line 463
c_rt_lib0clear(&___nl__12);
#line 463
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(6, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11));
#line 463
c_rt_lib0clear(&___nl__6);
#line 463
c_rt_lib0clear(&___nl__7);
#line 463
c_rt_lib0clear(&___nl__8);
#line 463
c_rt_lib0clear(&___nl__9);
#line 463
c_rt_lib0clear(&___nl__10);
#line 463
c_rt_lib0clear(&___nl__11);
#line 463
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 463
c_rt_lib0clear(&___nl__5);
#line 463
c_rt_lib0clear(&___nl__4);
#line 465
goto label_59;
#line 465
label_59:
#line 465
c_rt_lib0clear(&___nl__3);
#line 466
c_rt_lib0move(&___nl__3, wprinter0build_pretty_l(___nl__2));
#line 466
c_rt_lib0clear(&___nl__0);
#line 466
c_rt_lib0clear(&___nl__1);
#line 466
c_rt_lib0clear(&___nl__2);
#line 466
return ___nl__3;
#line 466
c_rt_lib0clear(&___nl__3);
#line 466
c_rt_lib0clear(&___nl__2);
#line 466
c_rt_lib0clear(&___nl__0);
#line 466
c_rt_lib0clear(&___nl__1);
#line 466
return NULL;
}

ImmT pretty_printer_priv0print_return(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 470
c_rt_lib0move(&___nl__3,___get_global_const(90));
#line 470
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 470
c_rt_lib0clear(&___nl__3);
#line 470
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 470
c_rt_lib0clear(&___nl__2);
#line 471
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 471
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(829)));
#line 471
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 471
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 471
if(c_rt_lib0check_true_native(___nl__2)){ goto label_18;}
#line 472
c_rt_lib0move(&___nl__4, wprinter0get_sep());
#line 472
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__0));
#line 472
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__4, ___nl__5));
#line 472
c_rt_lib0clear(&___nl__4);
#line 472
c_rt_lib0clear(&___nl__5);
#line 472
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 472
c_rt_lib0clear(&___nl__3);
#line 473
goto label_18;
#line 473
label_18:
#line 473
c_rt_lib0clear(&___nl__2);
#line 474
c_rt_lib0move(&___nl__2, wprinter0build_pretty_l(___nl__1));
#line 474
c_rt_lib0clear(&___nl__0);
#line 474
c_rt_lib0clear(&___nl__1);
#line 474
return ___nl__2;
#line 474
c_rt_lib0clear(&___nl__2);
#line 474
c_rt_lib0clear(&___nl__1);
#line 474
c_rt_lib0clear(&___nl__0);
#line 474
return NULL;
}

ImmT pretty_printer_priv0print_sim_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 478
c_rt_lib0move(&___nl__1, pretty_printer_priv0print_val(___nl__0));
#line 479
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1008)));
#line 479
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(327)));
#line 479
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 479
if(c_rt_lib0check_true_native(___nl__2)){ goto label_13;}
#line 480
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1008)));
#line 480
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(327)));
#line 480
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(327)));
#line 480
c_rt_lib0move(&___nl__3, wprinter0build_pretty_l(___nl__4));
#line 480
c_rt_lib0clear(&___nl__4);
#line 480
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 480
c_rt_lib0clear(&___nl__3);
#line 481
goto label_13;
#line 481
label_13:
#line 481
c_rt_lib0clear(&___nl__2);
#line 482
c_rt_lib0clear(&___nl__0);
#line 482
return ___nl__1;
#line 482
c_rt_lib0clear(&___nl__1);
#line 482
c_rt_lib0clear(&___nl__0);
#line 482
return NULL;
}

ImmT pretty_printer_priv0print_break(){
pretty_printer_priv0__const__init();
return pretty_printer_priv0__const__sing(1);}
ImmT pretty_printer_priv0print_break0cal() {
pretty_printer_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 486
c_rt_lib0move(&___nl__1,___get_global_const(823));
#line 486
c_rt_lib0move(&___nl__0, wprinter0build_sim(___nl__1));
#line 486
c_rt_lib0clear(&___nl__1);
#line 486
return ___nl__0;
#line 486
c_rt_lib0clear(&___nl__0);
#line 486
return NULL;
}

ImmT pretty_printer_priv0print_continue(){
pretty_printer_priv0__const__init();
return pretty_printer_priv0__const__sing(2);}
ImmT pretty_printer_priv0print_continue0cal() {
pretty_printer_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 490
c_rt_lib0move(&___nl__1,___get_global_const(824));
#line 490
c_rt_lib0move(&___nl__0, wprinter0build_sim(___nl__1));
#line 490
c_rt_lib0clear(&___nl__1);
#line 490
return ___nl__0;
#line 490
c_rt_lib0clear(&___nl__0);
#line 490
return NULL;
}

ImmT pretty_printer_priv0print_die(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 494
c_rt_lib0move(&___nl__3,___get_global_const(217));
#line 494
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 494
c_rt_lib0clear(&___nl__3);
#line 494
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 494
c_rt_lib0clear(&___nl__2);
#line 500
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 500
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 500
c_rt_lib0move(&___nl__2, c_rt_lib0gt(___nl__2, ___nl__3));
#line 500
c_rt_lib0clear(&___nl__3);
#line 500
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 500
if(c_rt_lib0check_true_native(___nl__2)){ goto label_27;}
#line 496
c_rt_lib0move(&___nl__5,___get_global_const(371));
#line 496
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 496
c_rt_lib0clear(&___nl__5);
#line 497
c_rt_lib0move(&___nl__6, pretty_printer_priv0join_print_val(___nl__0));
#line 497
c_rt_lib0move(&___nl__5, wprinter0build_pretty_l(___nl__6));
#line 497
c_rt_lib0clear(&___nl__6);
#line 498
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 498
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 498
c_rt_lib0clear(&___nl__7);
#line 498
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(3, ___nl__4, ___nl__5, ___nl__6));
#line 498
c_rt_lib0clear(&___nl__4);
#line 498
c_rt_lib0clear(&___nl__5);
#line 498
c_rt_lib0clear(&___nl__6);
#line 498
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 498
c_rt_lib0clear(&___nl__3);
#line 498
goto label_27;
#line 498
label_27:
#line 498
c_rt_lib0clear(&___nl__2);
#line 501
c_rt_lib0move(&___nl__2, wprinter0build_pretty_a(___nl__1));
#line 501
c_rt_lib0clear(&___nl__0);
#line 501
c_rt_lib0clear(&___nl__1);
#line 501
return ___nl__2;
#line 501
c_rt_lib0clear(&___nl__2);
#line 501
c_rt_lib0clear(&___nl__1);
#line 501
c_rt_lib0clear(&___nl__0);
#line 501
return NULL;
}

ImmT pretty_printer_priv0print_simple_statement(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 505
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 505
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(192)));
#line 505
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 505
if(c_rt_lib0check_true_native(___nl__1)){ goto label_13;}
#line 506
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 506
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(192)));
#line 506
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_sim_value(___nl__3));
#line 506
c_rt_lib0clear(&___nl__3);
#line 506
c_rt_lib0clear(&___nl__0);
#line 506
c_rt_lib0clear(&___nl__1);
#line 506
return ___nl__2;
#line 506
c_rt_lib0clear(&___nl__2);
#line 507
goto label_100;
#line 507
label_13:
#line 507
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 507
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(90)));
#line 507
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 507
if(c_rt_lib0check_true_native(___nl__1)){ goto label_27;}
#line 508
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 508
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(90)));
#line 508
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_return(___nl__3));
#line 508
c_rt_lib0clear(&___nl__3);
#line 508
c_rt_lib0clear(&___nl__0);
#line 508
c_rt_lib0clear(&___nl__1);
#line 508
return ___nl__2;
#line 508
c_rt_lib0clear(&___nl__2);
#line 509
goto label_100;
#line 509
label_27:
#line 509
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 509
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(823)));
#line 509
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 509
if(c_rt_lib0check_true_native(___nl__1)){ goto label_38;}
#line 510
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_break());
#line 510
c_rt_lib0clear(&___nl__0);
#line 510
c_rt_lib0clear(&___nl__1);
#line 510
return ___nl__2;
#line 510
c_rt_lib0clear(&___nl__2);
#line 511
goto label_100;
#line 511
label_38:
#line 511
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 511
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(824)));
#line 511
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 511
if(c_rt_lib0check_true_native(___nl__1)){ goto label_49;}
#line 512
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_continue());
#line 512
c_rt_lib0clear(&___nl__0);
#line 512
c_rt_lib0clear(&___nl__1);
#line 512
return ___nl__2;
#line 512
c_rt_lib0clear(&___nl__2);
#line 513
goto label_100;
#line 513
label_49:
#line 513
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 513
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(217)));
#line 513
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 513
if(c_rt_lib0check_true_native(___nl__1)){ goto label_63;}
#line 514
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 514
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(217)));
#line 514
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_die(___nl__3));
#line 514
c_rt_lib0clear(&___nl__3);
#line 514
c_rt_lib0clear(&___nl__0);
#line 514
c_rt_lib0clear(&___nl__1);
#line 514
return ___nl__2;
#line 514
c_rt_lib0clear(&___nl__2);
#line 515
goto label_100;
#line 515
label_63:
#line 515
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 515
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(828)));
#line 515
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 515
if(c_rt_lib0check_true_native(___nl__1)){ goto label_79;}
#line 516
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 516
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(828)));
#line 516
c_rt_lib0move(&___nl__4,___get_global_const(828));
#line 516
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_try_ensure(___nl__3, ___nl__4));
#line 516
c_rt_lib0clear(&___nl__4);
#line 516
c_rt_lib0clear(&___nl__3);
#line 516
c_rt_lib0clear(&___nl__0);
#line 516
c_rt_lib0clear(&___nl__1);
#line 516
return ___nl__2;
#line 516
c_rt_lib0clear(&___nl__2);
#line 517
goto label_100;
#line 517
label_79:
#line 517
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 517
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(95)));
#line 517
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 517
if(c_rt_lib0check_true_native(___nl__1)){ goto label_95;}
#line 518
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 518
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(95)));
#line 518
c_rt_lib0move(&___nl__4,___get_global_const(95));
#line 518
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_try_ensure(___nl__3, ___nl__4));
#line 518
c_rt_lib0clear(&___nl__4);
#line 518
c_rt_lib0clear(&___nl__3);
#line 518
c_rt_lib0clear(&___nl__0);
#line 518
c_rt_lib0clear(&___nl__1);
#line 518
return ___nl__2;
#line 518
c_rt_lib0clear(&___nl__2);
#line 519
goto label_100;
#line 519
label_95:
#line 520
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__0));
#line 520
nl_die_arg(___nl__2);
#line 520
c_rt_lib0clear(&___nl__2);
#line 521
goto label_100;
#line 521
label_100:
#line 521
c_rt_lib0clear(&___nl__1);
#line 521
c_rt_lib0clear(&___nl__0);
#line 521
return NULL;
}

ImmT pretty_printer_priv0flush_sim_statement(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 525
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__1, ___nl__2));
#line 526
c_rt_lib0move(&___nl__3,___get_global_const(360));
#line 526
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__3));
#line 526
c_rt_lib0clear(&___nl__3);
#line 526
c_rt_lib0clear(&___nl__1);
#line 526
c_rt_lib0clear(&___nl__2);
#line 526
return NULL;
}

ImmT pretty_printer_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
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
#line 530
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(201)));
#line 530
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(815)));
#line 530
if(c_rt_lib0check_true_native(___nl__4)){ goto label_44;}
#line 540
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(820)));
#line 540
if(c_rt_lib0check_true_native(___nl__4)){ goto label_101;}
#line 542
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(816)));
#line 542
if(c_rt_lib0check_true_native(___nl__4)){ goto label_116;}
#line 561
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(826)));
#line 561
if(c_rt_lib0check_true_native(___nl__4)){ goto label_182;}
#line 568
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(829)));
#line 568
if(c_rt_lib0check_true_native(___nl__4)){ goto label_226;}
#line 570
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(825)));
#line 570
if(c_rt_lib0check_true_native(___nl__4)){ goto label_231;}
#line 581
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(817)));
#line 581
if(c_rt_lib0check_true_native(___nl__4)){ goto label_283;}
#line 583
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(818)));
#line 583
if(c_rt_lib0check_true_native(___nl__4)){ goto label_300;}
#line 586
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(819)));
#line 586
if(c_rt_lib0check_true_native(___nl__4)){ goto label_319;}
#line 588
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(140)));
#line 588
if(c_rt_lib0check_true_native(___nl__4)){ goto label_336;}
#line 591
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(821)));
#line 591
if(c_rt_lib0check_true_native(___nl__4)){ goto label_344;}
#line 593
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(822)));
#line 593
if(c_rt_lib0check_true_native(___nl__4)){ goto label_357;}
#line 595
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(192)));
#line 595
if(c_rt_lib0check_true_native(___nl__4)){ goto label_370;}
#line 597
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(828)));
#line 597
if(c_rt_lib0check_true_native(___nl__4)){ goto label_377;}
#line 599
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(95)));
#line 599
if(c_rt_lib0check_true_native(___nl__4)){ goto label_386;}
#line 601
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(90)));
#line 601
if(c_rt_lib0check_true_native(___nl__4)){ goto label_395;}
#line 603
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(823)));
#line 603
if(c_rt_lib0check_true_native(___nl__4)){ goto label_402;}
#line 605
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(824)));
#line 605
if(c_rt_lib0check_true_native(___nl__4)){ goto label_407;}
#line 607
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(217)));
#line 607
if(c_rt_lib0check_true_native(___nl__4)){ goto label_412;}
#line 609
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(827)));
#line 609
if(c_rt_lib0check_true_native(___nl__4)){ goto label_419;}
#line 609
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 609
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 609
nl_die_arg(___nl__4);
#line 530
label_44:
#line 530
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(815)));
#line 531
c_rt_lib0move(&___nl__6,___get_global_const(815));
#line 531
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(815)));
#line 531
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 531
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(830)));
#line 531
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 531
c_rt_lib0clear(&___nl__9);
#line 531
c_rt_lib0clear(&___nl__8);
#line 531
c_rt_lib0clear(&___nl__7);
#line 531
c_rt_lib0clear(&___nl__6);
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(831)));
#line 532
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 532
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 532
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 532
label_59:
#line 532
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 532
if(c_rt_lib0check_true_native(___nl__11)){ goto label_77;}
#line 532
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 533
c_rt_lib0move(&___nl__12,___get_global_const(571));
#line 533
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__12));
#line 533
c_rt_lib0clear(&___nl__12);
#line 534
c_rt_lib0move(&___nl__12,___get_global_const(831));
#line 534
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(201)));
#line 534
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(0));
#line 534
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(830)));
#line 534
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__12, ___nl__13, ___nl__14, ___nl__15, ___nl__2));
#line 534
c_rt_lib0clear(&___nl__15);
#line 534
c_rt_lib0clear(&___nl__14);
#line 534
c_rt_lib0clear(&___nl__13);
#line 534
c_rt_lib0clear(&___nl__12);
#line 535
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 535
goto label_59;
#line 535
label_77:
#line 535
c_rt_lib0clear(&___nl__6);
#line 535
c_rt_lib0clear(&___nl__7);
#line 535
c_rt_lib0clear(&___nl__8);
#line 535
c_rt_lib0clear(&___nl__9);
#line 535
c_rt_lib0clear(&___nl__10);
#line 535
c_rt_lib0clear(&___nl__11);
#line 536
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(832)));
#line 536
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(201)));
#line 536
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(829)));
#line 536
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 536
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 536
if(c_rt_lib0check_true_native(___nl__6)){ goto label_97;}
#line 537
c_rt_lib0move(&___nl__7,___get_global_const(1009));
#line 537
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__7));
#line 537
c_rt_lib0clear(&___nl__7);
#line 538
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(832)));
#line 538
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__7, ___nl__2));
#line 538
c_rt_lib0clear(&___nl__7);
#line 539
goto label_97;
#line 539
label_97:
#line 539
c_rt_lib0clear(&___nl__6);
#line 539
c_rt_lib0clear(&___nl__5);
#line 540
goto label_426;
#line 540
label_101:
#line 540
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(820)));
#line 541
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(917)));
#line 541
c_rt_lib0move(&___nl__7,___get_global_const(820));
#line 541
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 541
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 541
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(830)));
#line 541
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 541
c_rt_lib0clear(&___nl__10);
#line 541
c_rt_lib0clear(&___nl__9);
#line 541
c_rt_lib0clear(&___nl__8);
#line 541
c_rt_lib0clear(&___nl__7);
#line 541
c_rt_lib0clear(&___nl__6);
#line 541
c_rt_lib0clear(&___nl__5);
#line 542
goto label_426;
#line 542
label_116:
#line 542
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(816)));
#line 544
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(833)));
#line 544
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(192)));
#line 544
if(c_rt_lib0check_true_native(___nl__8)){ goto label_126;}
#line 546
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(827)));
#line 546
if(c_rt_lib0check_true_native(___nl__8)){ goto label_133;}
#line 546
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 546
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 546
nl_die_arg(___nl__8);
#line 544
label_126:
#line 544
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(192)));
#line 545
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__9));
#line 545
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 545
c_rt_lib0clear(&___nl__10);
#line 545
c_rt_lib0clear(&___nl__9);
#line 546
goto label_140;
#line 546
label_133:
#line 546
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(827)));
#line 547
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_var_decl(___nl__9));
#line 547
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 547
c_rt_lib0clear(&___nl__10);
#line 547
c_rt_lib0clear(&___nl__9);
#line 548
goto label_140;
#line 548
label_140:
#line 548
c_rt_lib0clear(&___nl__7);
#line 548
c_rt_lib0clear(&___nl__8);
#line 550
c_rt_lib0move(&___nl__10,___get_global_const(1010));
#line 550
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 550
c_rt_lib0clear(&___nl__10);
#line 552
c_rt_lib0move(&___nl__11,___get_global_const(360));
#line 552
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 552
c_rt_lib0clear(&___nl__11);
#line 553
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 554
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(830)));
#line 554
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_val(___nl__13));
#line 554
c_rt_lib0clear(&___nl__13);
#line 555
c_rt_lib0move(&___nl__14,___get_global_const(360));
#line 555
c_rt_lib0move(&___nl__13, wprinter0build_sim(___nl__14));
#line 555
c_rt_lib0clear(&___nl__14);
#line 556
c_rt_lib0move(&___nl__14, wprinter0get_sep());
#line 557
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(834)));
#line 557
c_rt_lib0move(&___nl__15, pretty_printer_priv0print_val(___nl__16));
#line 557
c_rt_lib0clear(&___nl__16);
#line 558
c_rt_lib0move(&___nl__17,___get_global_const(533));
#line 558
c_rt_lib0move(&___nl__16, wprinter0build_sim(___nl__17));
#line 558
c_rt_lib0clear(&___nl__17);
#line 558
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(9, ___nl__9, ___nl__6, ___nl__10, ___nl__11, ___nl__12, ___nl__13, ___nl__14, ___nl__15, ___nl__16));
#line 558
c_rt_lib0clear(&___nl__9);
#line 558
c_rt_lib0clear(&___nl__10);
#line 558
c_rt_lib0clear(&___nl__11);
#line 558
c_rt_lib0clear(&___nl__12);
#line 558
c_rt_lib0clear(&___nl__13);
#line 558
c_rt_lib0clear(&___nl__14);
#line 558
c_rt_lib0clear(&___nl__15);
#line 558
c_rt_lib0clear(&___nl__16);
#line 558
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 558
c_rt_lib0clear(&___nl__8);
#line 558
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__7, ___nl__2));
#line 558
c_rt_lib0clear(&___nl__7);
#line 560
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 560
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__7, ___nl__2));
#line 560
c_rt_lib0clear(&___nl__7);
#line 560
c_rt_lib0clear(&___nl__6);
#line 560
c_rt_lib0clear(&___nl__5);
#line 561
goto label_426;
#line 561
label_182:
#line 561
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(826)));
#line 562
c_rt_lib0move(&___nl__6,___get_global_const(252));
#line 562
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 562
c_rt_lib0clear(&___nl__6);
#line 563
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 563
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 563
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 563
label_190:
#line 563
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 563
if(c_rt_lib0check_true_native(___nl__10)){ goto label_209;}
#line 563
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 564
c_rt_lib0move(&___nl__11, string0lf());
#line 564
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 564
c_rt_lib0move(&___nl__13, c_rt_lib0add(___nl__2, ___nl__13));
#line 564
c_rt_lib0move(&___nl__12, pretty_printer_priv0pind(___nl__13));
#line 564
c_rt_lib0clear(&___nl__13);
#line 564
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 564
c_rt_lib0clear(&___nl__12);
#line 564
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__11));
#line 564
c_rt_lib0clear(&___nl__11);
#line 565
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 565
c_rt_lib0move(&___nl__11, c_rt_lib0add(___nl__2, ___nl__11));
#line 565
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__6, ___nl__11));
#line 565
c_rt_lib0clear(&___nl__11);
#line 566
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 566
goto label_190;
#line 566
label_209:
#line 566
c_rt_lib0clear(&___nl__6);
#line 566
c_rt_lib0clear(&___nl__7);
#line 566
c_rt_lib0clear(&___nl__8);
#line 566
c_rt_lib0clear(&___nl__9);
#line 566
c_rt_lib0clear(&___nl__10);
#line 567
c_rt_lib0move(&___nl__6, string0lf());
#line 567
c_rt_lib0move(&___nl__7, pretty_printer_priv0pind(___nl__2));
#line 567
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 567
c_rt_lib0clear(&___nl__7);
#line 567
c_rt_lib0move(&___nl__7,___get_global_const(253));
#line 567
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 567
c_rt_lib0clear(&___nl__7);
#line 567
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 567
c_rt_lib0clear(&___nl__6);
#line 567
c_rt_lib0clear(&___nl__5);
#line 568
goto label_426;
#line 568
label_226:
#line 569
c_rt_lib0move(&___nl__5,___get_global_const(360));
#line 569
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__5));
#line 569
c_rt_lib0clear(&___nl__5);
#line 570
goto label_426;
#line 570
label_231:
#line 570
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(825)));
#line 572
c_rt_lib0move(&___nl__9,___get_global_const(1011));
#line 572
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 572
c_rt_lib0clear(&___nl__9);
#line 573
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(198)));
#line 573
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 573
c_rt_lib0clear(&___nl__10);
#line 574
c_rt_lib0move(&___nl__11,___get_global_const(260));
#line 574
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 574
c_rt_lib0clear(&___nl__11);
#line 574
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 574
c_rt_lib0clear(&___nl__8);
#line 574
c_rt_lib0clear(&___nl__9);
#line 574
c_rt_lib0clear(&___nl__10);
#line 574
c_rt_lib0move(&___nl__6, wprinter0build_pretty_a(___nl__7));
#line 574
c_rt_lib0clear(&___nl__7);
#line 574
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__6, ___nl__2));
#line 574
c_rt_lib0clear(&___nl__6);
#line 576
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(838)));
#line 576
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 576
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 576
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 576
label_254:
#line 576
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 576
if(c_rt_lib0check_true_native(___nl__11)){ goto label_274;}
#line 576
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 577
c_rt_lib0move(&___nl__12,___get_global_const(1012));
#line 577
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__12));
#line 577
c_rt_lib0clear(&___nl__12);
#line 578
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(839)));
#line 578
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_variant_case_decl(___nl__13));
#line 578
c_rt_lib0clear(&___nl__13);
#line 578
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 578
c_rt_lib0move(&___nl__13, c_rt_lib0add(___nl__2, ___nl__13));
#line 578
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__12, ___nl__13));
#line 578
c_rt_lib0clear(&___nl__13);
#line 578
c_rt_lib0clear(&___nl__12);
#line 579
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(201)));
#line 579
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__12, ___nl__2));
#line 579
c_rt_lib0clear(&___nl__12);
#line 580
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 580
goto label_254;
#line 580
label_274:
#line 580
c_rt_lib0clear(&___nl__6);
#line 580
c_rt_lib0clear(&___nl__7);
#line 580
c_rt_lib0clear(&___nl__8);
#line 580
c_rt_lib0clear(&___nl__9);
#line 580
c_rt_lib0clear(&___nl__10);
#line 580
c_rt_lib0clear(&___nl__11);
#line 580
c_rt_lib0clear(&___nl__5);
#line 581
goto label_426;
#line 581
label_283:
#line 581
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(817)));
#line 582
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(917)));
#line 582
c_rt_lib0move(&___nl__7,___get_global_const(817));
#line 582
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 582
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(834)));
#line 582
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 582
c_rt_lib0clear(&___nl__10);
#line 582
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(3)));
#line 582
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 582
c_rt_lib0clear(&___nl__10);
#line 582
c_rt_lib0clear(&___nl__9);
#line 582
c_rt_lib0clear(&___nl__8);
#line 582
c_rt_lib0clear(&___nl__7);
#line 582
c_rt_lib0clear(&___nl__6);
#line 582
c_rt_lib0clear(&___nl__5);
#line 583
goto label_426;
#line 583
label_300:
#line 583
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(818)));
#line 584
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(917)));
#line 584
c_rt_lib0move(&___nl__7,___get_global_const(818));
#line 584
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 584
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(329)));
#line 584
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(198)));
#line 584
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 584
c_rt_lib0clear(&___nl__10);
#line 584
c_rt_lib0clear(&___nl__11);
#line 584
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(328)));
#line 584
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 584
c_rt_lib0clear(&___nl__10);
#line 584
c_rt_lib0clear(&___nl__9);
#line 584
c_rt_lib0clear(&___nl__8);
#line 584
c_rt_lib0clear(&___nl__7);
#line 584
c_rt_lib0clear(&___nl__6);
#line 584
c_rt_lib0clear(&___nl__5);
#line 586
goto label_426;
#line 586
label_319:
#line 586
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(819)));
#line 587
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(917)));
#line 587
c_rt_lib0move(&___nl__7,___get_global_const(819));
#line 587
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 587
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(834)));
#line 587
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 587
c_rt_lib0clear(&___nl__10);
#line 587
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(835)));
#line 587
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 587
c_rt_lib0clear(&___nl__10);
#line 587
c_rt_lib0clear(&___nl__9);
#line 587
c_rt_lib0clear(&___nl__8);
#line 587
c_rt_lib0clear(&___nl__7);
#line 587
c_rt_lib0clear(&___nl__6);
#line 587
c_rt_lib0clear(&___nl__5);
#line 588
goto label_426;
#line 588
label_336:
#line 588
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(140)));
#line 589
c_rt_lib0move(&___nl__6,___get_global_const(140));
#line 589
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 589
c_rt_lib0clear(&___nl__6);
#line 590
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__5, ___nl__2));
#line 590
c_rt_lib0clear(&___nl__5);
#line 591
goto label_426;
#line 591
label_344:
#line 591
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(821)));
#line 592
c_rt_lib0move(&___nl__6,___get_global_const(815));
#line 592
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 592
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 592
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(830)));
#line 592
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 592
c_rt_lib0clear(&___nl__9);
#line 592
c_rt_lib0clear(&___nl__8);
#line 592
c_rt_lib0clear(&___nl__7);
#line 592
c_rt_lib0clear(&___nl__6);
#line 592
c_rt_lib0clear(&___nl__5);
#line 593
goto label_426;
#line 593
label_357:
#line 593
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(822)));
#line 594
c_rt_lib0move(&___nl__6,___get_global_const(941));
#line 594
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 594
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 594
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(830)));
#line 594
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 594
c_rt_lib0clear(&___nl__9);
#line 594
c_rt_lib0clear(&___nl__8);
#line 594
c_rt_lib0clear(&___nl__7);
#line 594
c_rt_lib0clear(&___nl__6);
#line 594
c_rt_lib0clear(&___nl__5);
#line 595
goto label_426;
#line 595
label_370:
#line 595
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(192)));
#line 596
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_sim_value(___nl__5));
#line 596
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 596
c_rt_lib0clear(&___nl__6);
#line 596
c_rt_lib0clear(&___nl__5);
#line 597
goto label_426;
#line 597
label_377:
#line 597
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(828)));
#line 598
c_rt_lib0move(&___nl__7,___get_global_const(828));
#line 598
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_try_ensure(___nl__5, ___nl__7));
#line 598
c_rt_lib0clear(&___nl__7);
#line 598
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 598
c_rt_lib0clear(&___nl__6);
#line 598
c_rt_lib0clear(&___nl__5);
#line 599
goto label_426;
#line 599
label_386:
#line 599
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(95)));
#line 600
c_rt_lib0move(&___nl__7,___get_global_const(95));
#line 600
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_try_ensure(___nl__5, ___nl__7));
#line 600
c_rt_lib0clear(&___nl__7);
#line 600
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 600
c_rt_lib0clear(&___nl__6);
#line 600
c_rt_lib0clear(&___nl__5);
#line 601
goto label_426;
#line 601
label_395:
#line 601
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(90)));
#line 602
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_return(___nl__5));
#line 602
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 602
c_rt_lib0clear(&___nl__6);
#line 602
c_rt_lib0clear(&___nl__5);
#line 603
goto label_426;
#line 603
label_402:
#line 604
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_break());
#line 604
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__5, ___nl__2));
#line 604
c_rt_lib0clear(&___nl__5);
#line 605
goto label_426;
#line 605
label_407:
#line 606
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_continue());
#line 606
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__5, ___nl__2));
#line 606
c_rt_lib0clear(&___nl__5);
#line 607
goto label_426;
#line 607
label_412:
#line 607
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(217)));
#line 608
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_die(___nl__5));
#line 608
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 608
c_rt_lib0clear(&___nl__6);
#line 608
c_rt_lib0clear(&___nl__5);
#line 609
goto label_426;
#line 609
label_419:
#line 609
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(827)));
#line 610
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_var_decl(___nl__5));
#line 610
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 610
c_rt_lib0clear(&___nl__6);
#line 610
c_rt_lib0clear(&___nl__5);
#line 611
goto label_426;
#line 611
label_426:
#line 611
c_rt_lib0clear(&___nl__3);
#line 611
c_rt_lib0clear(&___nl__4);
#line 611
c_rt_lib0clear(&___nl__1);
#line 611
c_rt_lib0clear(&___nl__2);
#line 611
return NULL;
}


static ImmT ___const__[4];
static int ___const_init__ = 1;
void pretty_printer_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[3];


for(int i=0;i<3;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 3);
}}
ImmT pretty_printer_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT pretty_printer_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = pretty_printer0struct_t0cal();
	break;
case 1:
	___const__[1] = pretty_printer_priv0print_break0cal();
	break;
case 2:
	___const__[2] = pretty_printer_priv0print_continue0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
