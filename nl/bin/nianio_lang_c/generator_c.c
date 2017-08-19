
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "generator_c.h"
#include "ptd.h"
#include "nlasm.h"
#include "string.h"
#include "array.h"
#include "hash.h"
#include "ov.h"
#include "singleton.h"
#include "nl.h"
#include "boolean_t.h"
#include "string_utils.h"
#include "generator_c.h"
#include "boolean_t.h"
#line 1 "generator_c.nl"

static ImmT *__const__f = NULL;
void generator_c_priv0__const__init();
ImmT generator_c_priv0__const__sim(int __nr);
ImmT generator_c_priv0__const__sing(int __nr);

ImmT generator_c_priv0get_bin_ops();
ImmT generator_c_priv0get_bin_ops_mod();
ImmT generator_c_priv0get_unary_ops();
ImmT generator_c_priv0gen_unary_ops();
ImmT generator_c_priv0gen_bin_ops();
ImmT generator_c_priv0gen_bin_ops_mod();
ImmT generator_c_priv0print(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0print_to_header(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0println_to_header(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0arg_t();
ImmT generator_c_priv0println(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_reg(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_reg_ref(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_string(ImmT ___nl__0);
ImmT generator_c_priv0generate_global_const_files(ImmT * ___ref___0);
ImmT generator_c_priv0get_include(ImmT ___nl__0);
ImmT generator_c_priv0get_cr();
ImmT generator_c_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_c_priv0get_function_header(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_c_priv0get_const(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0insert_const_to_modules_hash(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0get_global_const(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0get_const_sim(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_const_singleton(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_func_ptr_header(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_c_priv0print_mod(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0print_init_const(ImmT * ___ref___0);
ImmT generator_c_priv0print_function_block(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0is_singleton_use_function(ImmT ___nl__0);
ImmT generator_c_priv0move_args_to_register(ImmT * ___ref___0);
ImmT generator_c_priv0move_register_to_ref_args(ImmT * ___ref___0);
ImmT generator_c_priv0get_fun_lib(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_c_priv0get_module_name(ImmT ___nl__0);
ImmT generator_c_priv0get_fun_name(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0get_lib_fun(ImmT ___nl__0);
ImmT generator_c_priv0generate_imm(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_func_pointer(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_assign(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0generate_call(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0create_sim(ImmT ___nl__0);
ImmT generator_c_priv0create_sim_to_memory(ImmT ___nl__0,ImmT ___nl__1);


ImmT generator_c_priv0get_bin_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(0);}
ImmT generator_c_priv0get_bin_ops0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 18
c_rt_lib0move(&___nl__1, generator_c_priv0gen_bin_ops());
#line 18
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 18
c_rt_lib0clear(&___nl__1);
#line 18
return ___nl__0;
#line 18
c_rt_lib0clear(&___nl__0);
#line 18
return NULL;
}

ImmT generator_c_priv0get_bin_ops_mod(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(1);}
ImmT generator_c_priv0get_bin_ops_mod0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 22
c_rt_lib0move(&___nl__1, generator_c_priv0gen_bin_ops_mod());
#line 22
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 22
c_rt_lib0clear(&___nl__1);
#line 22
return ___nl__0;
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
return NULL;
}

ImmT generator_c_priv0get_unary_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(2);}
ImmT generator_c_priv0get_unary_ops0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 26
c_rt_lib0move(&___nl__1, generator_c_priv0gen_unary_ops());
#line 26
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 26
c_rt_lib0clear(&___nl__1);
#line 26
return ___nl__0;
#line 26
c_rt_lib0clear(&___nl__0);
#line 26
return NULL;
}

ImmT generator_c_priv0gen_unary_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(3);}
ImmT generator_c_priv0gen_unary_ops0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 30
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 31
c_rt_lib0move(&___nl__1,___get_global_const(294));
#line 31
c_rt_lib0move(&___nl__2,___get_global_const(295));
#line 31
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 31
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0clear(&___nl__1);
#line 32
c_rt_lib0move(&___nl__1,___get_global_const(296));
#line 32
c_rt_lib0move(&___nl__2,___get_global_const(297));
#line 32
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__1);
#line 33
c_rt_lib0move(&___nl__1,___get_global_const(298));
#line 33
c_rt_lib0move(&___nl__2,___get_global_const(299));
#line 33
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 33
c_rt_lib0clear(&___nl__2);
#line 33
c_rt_lib0clear(&___nl__1);
#line 34
return ___nl__0;
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
return NULL;
}

ImmT generator_c_priv0gen_bin_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(4);}
ImmT generator_c_priv0gen_bin_ops0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 38
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 39
c_rt_lib0move(&___nl__1,___get_global_const(300));
#line 39
c_rt_lib0move(&___nl__2,___get_global_const(300));
#line 39
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
c_rt_lib0clear(&___nl__1);
#line 40
c_rt_lib0move(&___nl__1,___get_global_const(301));
#line 40
c_rt_lib0move(&___nl__2,___get_global_const(301));
#line 40
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 40
c_rt_lib0clear(&___nl__2);
#line 40
c_rt_lib0clear(&___nl__1);
#line 41
c_rt_lib0move(&___nl__1,___get_global_const(298));
#line 41
c_rt_lib0move(&___nl__2,___get_global_const(302));
#line 41
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
c_rt_lib0clear(&___nl__1);
#line 42
c_rt_lib0move(&___nl__1,___get_global_const(296));
#line 42
c_rt_lib0move(&___nl__2,___get_global_const(303));
#line 42
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0move(&___nl__1,___get_global_const(304));
#line 43
c_rt_lib0move(&___nl__2,___get_global_const(305));
#line 43
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0move(&___nl__1,___get_global_const(77));
#line 44
c_rt_lib0move(&___nl__2,___get_global_const(306));
#line 44
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0move(&___nl__1,___get_global_const(307));
#line 45
c_rt_lib0move(&___nl__2,___get_global_const(222));
#line 45
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0clear(&___nl__1);
#line 46
c_rt_lib0move(&___nl__1,___get_global_const(308));
#line 46
c_rt_lib0move(&___nl__2,___get_global_const(309));
#line 46
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 46
c_rt_lib0clear(&___nl__2);
#line 46
c_rt_lib0clear(&___nl__1);
#line 47
c_rt_lib0move(&___nl__1,___get_global_const(310));
#line 47
c_rt_lib0move(&___nl__2,___get_global_const(311));
#line 47
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0clear(&___nl__1);
#line 48
c_rt_lib0move(&___nl__1,___get_global_const(312));
#line 48
c_rt_lib0move(&___nl__2,___get_global_const(313));
#line 48
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 48
c_rt_lib0clear(&___nl__2);
#line 48
c_rt_lib0clear(&___nl__1);
#line 49
c_rt_lib0move(&___nl__1,___get_global_const(314));
#line 49
c_rt_lib0move(&___nl__2,___get_global_const(315));
#line 49
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__1);
#line 50
c_rt_lib0move(&___nl__1,___get_global_const(316));
#line 50
c_rt_lib0move(&___nl__2,___get_global_const(317));
#line 50
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 50
c_rt_lib0clear(&___nl__2);
#line 50
c_rt_lib0clear(&___nl__1);
#line 51
c_rt_lib0move(&___nl__1,___get_global_const(318));
#line 51
c_rt_lib0move(&___nl__2,___get_global_const(319));
#line 51
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 51
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0clear(&___nl__1);
#line 52
c_rt_lib0move(&___nl__1,___get_global_const(97));
#line 52
c_rt_lib0move(&___nl__2,___get_global_const(320));
#line 52
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0clear(&___nl__1);
#line 53
return ___nl__0;
#line 53
c_rt_lib0clear(&___nl__0);
#line 53
return NULL;
}

ImmT generator_c_priv0gen_bin_ops_mod(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(5);}
ImmT generator_c_priv0gen_bin_ops_mod0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 57
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 58
c_rt_lib0move(&___nl__1,___get_global_const(298));
#line 58
c_rt_lib0move(&___nl__2,___get_global_const(321));
#line 58
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__1);
#line 59
c_rt_lib0move(&___nl__1,___get_global_const(296));
#line 59
c_rt_lib0move(&___nl__2,___get_global_const(322));
#line 59
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__1);
#line 60
c_rt_lib0move(&___nl__1,___get_global_const(304));
#line 60
c_rt_lib0move(&___nl__2,___get_global_const(323));
#line 60
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 60
c_rt_lib0clear(&___nl__2);
#line 60
c_rt_lib0clear(&___nl__1);
#line 61
c_rt_lib0move(&___nl__1,___get_global_const(77));
#line 61
c_rt_lib0move(&___nl__2,___get_global_const(324));
#line 61
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 61
c_rt_lib0clear(&___nl__2);
#line 61
c_rt_lib0clear(&___nl__1);
#line 62
c_rt_lib0move(&___nl__1,___get_global_const(307));
#line 62
c_rt_lib0move(&___nl__2,___get_global_const(325));
#line 62
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
c_rt_lib0clear(&___nl__1);
#line 63
c_rt_lib0move(&___nl__1,___get_global_const(97));
#line 63
c_rt_lib0move(&___nl__2,___get_global_const(326));
#line 63
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 63
c_rt_lib0clear(&___nl__2);
#line 63
c_rt_lib0clear(&___nl__1);
#line 64
return ___nl__0;
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
return NULL;
}

ImmT generator_c0const_dict0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0const_dict");
return generator_c0const_dict();}
ImmT generator_c0const_dict(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(6);}
ImmT generator_c0const_dict0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 68
c_rt_lib0move(&___nl__3, ptd0sim());
#line 68
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 68
c_rt_lib0clear(&___nl__3);
#line 68
c_rt_lib0move(&___nl__4, ptd0sim());
#line 68
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 68
c_rt_lib0clear(&___nl__4);
#line 68
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__2, ___get_global_const(328), ___nl__3));
#line 68
c_rt_lib0clear(&___nl__2);
#line 68
c_rt_lib0clear(&___nl__3);
#line 68
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 68
c_rt_lib0clear(&___nl__1);
#line 68
return ___nl__0;
#line 68
c_rt_lib0clear(&___nl__0);
#line 68
return NULL;
}

ImmT generator_c0fun_args_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0fun_args_t");
return generator_c0fun_args_t();}
ImmT generator_c0fun_args_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(7);}
ImmT generator_c0fun_args_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 72
c_rt_lib0move(&___nl__3, ptd0none());
#line 72
c_rt_lib0move(&___nl__4, ptd0none());
#line 72
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(198), ___nl__3, ___get_global_const(5), ___nl__4));
#line 72
c_rt_lib0clear(&___nl__3);
#line 72
c_rt_lib0clear(&___nl__4);
#line 72
c_rt_lib0move(&___nl__1, ptd0var(___nl__2));
#line 72
c_rt_lib0clear(&___nl__2);
#line 72
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 72
c_rt_lib0clear(&___nl__1);
#line 72
return ___nl__0;
#line 72
c_rt_lib0clear(&___nl__0);
#line 72
return NULL;
}

ImmT generator_c0const_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0const_t");
return generator_c0const_t();}
ImmT generator_c0const_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(8);}
ImmT generator_c0const_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 76
c_rt_lib0move(&___nl__3, ptd0sim());
#line 76
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 76
c_rt_lib0clear(&___nl__3);
#line 76
c_rt_lib0move(&___nl__4, ptd0sim());
#line 76
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 76
c_rt_lib0clear(&___nl__4);
#line 76
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__2, ___get_global_const(328), ___nl__3));
#line 76
c_rt_lib0clear(&___nl__2);
#line 76
c_rt_lib0clear(&___nl__3);
#line 76
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 76
c_rt_lib0clear(&___nl__1);
#line 76
return ___nl__0;
#line 76
c_rt_lib0clear(&___nl__0);
#line 76
return NULL;
}

ImmT generator_c0global_const_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0global_const_t");
return generator_c0global_const_t();}
ImmT generator_c0global_const_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(9);}
ImmT generator_c0global_const_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 81
c_rt_lib0move(&___nl__5, ptd0sim());
#line 81
c_rt_lib0move(&___nl__6, ptd0sim());
#line 81
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(329), ___nl__5, ___get_global_const(330), ___nl__6));
#line 81
c_rt_lib0clear(&___nl__5);
#line 81
c_rt_lib0clear(&___nl__6);
#line 81
c_rt_lib0move(&___nl__3, ptd0rec(___nl__4));
#line 81
c_rt_lib0clear(&___nl__4);
#line 81
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 81
c_rt_lib0clear(&___nl__3);
#line 82
c_rt_lib0move(&___nl__4, ptd0sim());
#line 82
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 82
c_rt_lib0clear(&___nl__4);
#line 83
c_rt_lib0move(&___nl__5, ptd0sim());
#line 83
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 83
c_rt_lib0clear(&___nl__5);
#line 84
c_rt_lib0move(&___nl__7, ptd0sim());
#line 84
c_rt_lib0move(&___nl__6, ptd0hash(___nl__7));
#line 84
c_rt_lib0clear(&___nl__7);
#line 84
c_rt_lib0move(&___nl__5, ptd0hash(___nl__6));
#line 84
c_rt_lib0clear(&___nl__6);
#line 84
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(327), ___nl__2, ___get_global_const(328), ___nl__3, ___get_global_const(331), ___nl__4, ___get_global_const(332), ___nl__5));
#line 84
c_rt_lib0clear(&___nl__2);
#line 84
c_rt_lib0clear(&___nl__3);
#line 84
c_rt_lib0clear(&___nl__4);
#line 84
c_rt_lib0clear(&___nl__5);
#line 84
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 84
c_rt_lib0clear(&___nl__1);
#line 84
return ___nl__0;
#line 84
c_rt_lib0clear(&___nl__0);
#line 84
return NULL;
}

ImmT generator_c0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0state_t");
return generator_c0state_t();}
ImmT generator_c0state_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(10);}
ImmT generator_c0state_t0cal() {
generator_c_priv0__const__init();
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
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(generator_c0global_const_t0ptr, ___get_global_const(333), ___get_global_const(334)));
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 91
c_rt_lib0move(&___nl__3, ptd0sim());
#line 92
c_rt_lib0move(&___nl__4, ptd0sim());
#line 93
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 93
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 93
c_rt_lib0move(&___nl__5, ptd0hash(___nl__6));
#line 93
c_rt_lib0clear(&___nl__6);
#line 94
c_rt_lib0move(&___nl__6, ptd0sim());
#line 95
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(generator_c0fun_args_t0ptr, ___get_global_const(333), ___get_global_const(335)));
#line 95
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 97
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_const(333), ___get_global_const(336)));
#line 97
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 98
c_rt_lib0move(&___nl__11, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_const(333), ___get_global_const(336)));
#line 98
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__11));
#line 99
c_rt_lib0move(&___nl__12, ptd0sim());
#line 99
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(3, ___get_global_const(337), ___nl__10, ___get_global_const(338), ___nl__11, ___get_global_const(339), ___nl__12));
#line 99
c_rt_lib0clear(&___nl__10);
#line 99
c_rt_lib0clear(&___nl__11);
#line 99
c_rt_lib0clear(&___nl__12);
#line 99
c_rt_lib0move(&___nl__8, ptd0rec(___nl__9));
#line 99
c_rt_lib0clear(&___nl__9);
#line 99
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(7, ___get_global_const(159), ___nl__2, ___get_global_const(340), ___nl__3, ___get_global_const(341), ___nl__4, ___get_global_const(342), ___nl__5, ___get_global_const(343), ___nl__6, ___get_global_const(344), ___nl__7, ___get_global_const(196), ___nl__8));
#line 99
c_rt_lib0clear(&___nl__2);
#line 99
c_rt_lib0clear(&___nl__3);
#line 99
c_rt_lib0clear(&___nl__4);
#line 99
c_rt_lib0clear(&___nl__5);
#line 99
c_rt_lib0clear(&___nl__6);
#line 99
c_rt_lib0clear(&___nl__7);
#line 99
c_rt_lib0clear(&___nl__8);
#line 99
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 99
c_rt_lib0clear(&___nl__1);
#line 99
return ___nl__0;
#line 99
c_rt_lib0clear(&___nl__0);
#line 99
return NULL;
}

ImmT generator_c0get_empty_state0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0get_empty_state");
return generator_c0get_empty_state();}
ImmT generator_c0get_empty_state(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(11);}
ImmT generator_c0get_empty_state0cal() {
generator_c_priv0__const__init();
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
#line 106
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 106
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 106
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 106
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(327), ___nl__2, ___get_global_const(328), ___nl__3, ___get_global_const(331), ___nl__4, ___get_global_const(332), ___nl__5));
#line 106
c_rt_lib0clear(&___nl__2);
#line 106
c_rt_lib0clear(&___nl__3);
#line 106
c_rt_lib0clear(&___nl__4);
#line 106
c_rt_lib0clear(&___nl__5);
#line 107
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 108
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 109
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 110
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 110
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 110
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 110
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__8, ___get_global_const(328), ___nl__9));
#line 110
c_rt_lib0clear(&___nl__8);
#line 110
c_rt_lib0clear(&___nl__9);
#line 110
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 110
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 110
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__9, ___get_global_const(328), ___nl__10));
#line 110
c_rt_lib0clear(&___nl__9);
#line 110
c_rt_lib0clear(&___nl__10);
#line 110
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(339), ___nl__6, ___get_global_const(337), ___nl__7, ___get_global_const(338), ___nl__8));
#line 110
c_rt_lib0clear(&___nl__6);
#line 110
c_rt_lib0clear(&___nl__7);
#line 110
c_rt_lib0clear(&___nl__8);
#line 111
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 112
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 112
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(7, ___get_global_const(159), ___nl__1, ___get_global_const(341), ___nl__2, ___get_global_const(340), ___nl__3, ___get_global_const(344), ___nl__4, ___get_global_const(196), ___nl__5, ___get_global_const(343), ___nl__6, ___get_global_const(342), ___nl__7));
#line 112
c_rt_lib0clear(&___nl__1);
#line 112
c_rt_lib0clear(&___nl__2);
#line 112
c_rt_lib0clear(&___nl__3);
#line 112
c_rt_lib0clear(&___nl__4);
#line 112
c_rt_lib0clear(&___nl__5);
#line 112
c_rt_lib0clear(&___nl__6);
#line 112
c_rt_lib0clear(&___nl__7);
#line 112
return ___nl__0;
#line 112
c_rt_lib0clear(&___nl__0);
#line 112
return NULL;
}

ImmT generator_c_priv0print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 117
c_rt_lib0move(&___nl__2,___get_global_const(341));
#line 117
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 117
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 117
c_rt_lib0move(&___nl__3,___get_global_const(341));
#line 117
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 117
c_rt_lib0clear(&___nl__3);
#line 117
c_rt_lib0clear(&___nl__2);
#line 117
c_rt_lib0clear(&___nl__1);
#line 117
return NULL;
}

ImmT generator_c_priv0print_to_header(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 121
c_rt_lib0move(&___nl__2,___get_global_const(340));
#line 121
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 121
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 121
c_rt_lib0move(&___nl__3,___get_global_const(340));
#line 121
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 121
c_rt_lib0clear(&___nl__3);
#line 121
c_rt_lib0clear(&___nl__2);
#line 121
c_rt_lib0clear(&___nl__1);
#line 121
return NULL;
}

ImmT generator_c_priv0println_to_header(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 125
c_rt_lib0move(&___nl__2, string0lf());
#line 125
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 125
c_rt_lib0move(&___nl__3,___get_global_const(340));
#line 125
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 125
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 125
c_rt_lib0move(&___nl__4,___get_global_const(340));
#line 125
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 125
c_rt_lib0clear(&___nl__4);
#line 125
c_rt_lib0clear(&___nl__2);
#line 125
c_rt_lib0clear(&___nl__3);
#line 125
c_rt_lib0clear(&___nl__1);
#line 125
return NULL;
}

ImmT generator_c_priv0arg_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(12);}
ImmT generator_c_priv0arg_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 129
c_rt_lib0move(&___nl__0,___get_global_const(345));
#line 129
return ___nl__0;
#line 129
c_rt_lib0clear(&___nl__0);
#line 129
return NULL;
}

ImmT generator_c_priv0println(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 133
c_rt_lib0move(&___nl__2,___get_global_const(341));
#line 133
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 133
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 133
c_rt_lib0move(&___nl__3,___get_global_const(341));
#line 133
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 133
c_rt_lib0clear(&___nl__3);
#line 133
c_rt_lib0clear(&___nl__2);
#line 134
c_rt_lib0move(&___nl__2, string0lf());
#line 134
c_rt_lib0move(&___nl__3,___get_global_const(341));
#line 134
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 134
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 134
c_rt_lib0move(&___nl__4,___get_global_const(341));
#line 134
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 134
c_rt_lib0clear(&___nl__4);
#line 134
c_rt_lib0clear(&___nl__2);
#line 134
c_rt_lib0clear(&___nl__3);
#line 134
c_rt_lib0clear(&___nl__1);
#line 134
return NULL;
}

ImmT generator_c_priv0get_reg(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 138
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 139
c_rt_lib0move(&___nl__3, array0len(___nl__2));
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0gt(___nl__3, ___nl__1));
#line 139
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 139
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__1));
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(5)));
#line 139
label_7:
#line 139
c_rt_lib0clear(&___nl__4);
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 139
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 140
c_rt_lib0move(&___nl__4,___get_global_const(346));
#line 140
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 140
c_rt_lib0clear(&___nl__1);
#line 140
c_rt_lib0clear(&___nl__2);
#line 140
c_rt_lib0clear(&___nl__3);
#line 140
return ___nl__4;
#line 140
c_rt_lib0clear(&___nl__4);
#line 141
goto label_19;
#line 141
label_19:
#line 141
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0move(&___nl__3,___get_global_const(347));
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
return ___nl__3;
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
return NULL;
}

ImmT generator_c_priv0get_reg_ref(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 147
c_rt_lib0move(&___nl__3, array0len(___nl__2));
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0gt(___nl__3, ___nl__1));
#line 147
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 147
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__1));
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(5)));
#line 147
label_7:
#line 147
c_rt_lib0clear(&___nl__4);
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 147
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 148
c_rt_lib0move(&___nl__4,___get_global_const(348));
#line 148
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 148
c_rt_lib0clear(&___nl__1);
#line 148
c_rt_lib0clear(&___nl__2);
#line 148
c_rt_lib0clear(&___nl__3);
#line 148
return ___nl__4;
#line 148
c_rt_lib0clear(&___nl__4);
#line 149
goto label_19;
#line 149
label_19:
#line 149
c_rt_lib0clear(&___nl__3);
#line 150
c_rt_lib0move(&___nl__3,___get_global_const(349));
#line 150
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 150
c_rt_lib0clear(&___nl__1);
#line 150
c_rt_lib0clear(&___nl__2);
#line 150
return ___nl__3;
#line 150
c_rt_lib0clear(&___nl__3);
#line 150
c_rt_lib0clear(&___nl__2);
#line 150
c_rt_lib0clear(&___nl__1);
#line 150
return NULL;
}

ImmT generator_c_priv0get_string(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 154
c_rt_lib0move(&___nl__1,___get_global_const(235));
#line 154
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 154
c_rt_lib0move(&___nl__2,___get_global_const(235));
#line 154
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 154
c_rt_lib0clear(&___nl__2);
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

ImmT generator_c0module_out_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0module_out_t");
return generator_c0module_out_t();}
ImmT generator_c0module_out_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(13);}
ImmT generator_c0module_out_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 158
c_rt_lib0move(&___nl__2, ptd0sim());
#line 158
c_rt_lib0move(&___nl__3, ptd0sim());
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(34), ___nl__2, ___get_global_const(40), ___nl__3));
#line 158
c_rt_lib0clear(&___nl__2);
#line 158
c_rt_lib0clear(&___nl__3);
#line 158
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 158
c_rt_lib0clear(&___nl__1);
#line 158
return ___nl__0;
#line 158
c_rt_lib0clear(&___nl__0);
#line 158
return NULL;
}

ImmT generator_c0out_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0out_t");
return generator_c0out_t();}
ImmT generator_c0out_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(14);}
ImmT generator_c0out_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 162
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(generator_c0module_out_t0ptr, ___get_global_const(333), ___get_global_const(350)));
#line 162
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 162
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 162
c_rt_lib0clear(&___nl__3);
#line 162
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(generator_c0module_out_t0ptr, ___get_global_const(333), ___get_global_const(350)));
#line 162
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 162
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(157), ___nl__2, ___get_global_const(159), ___nl__3));
#line 162
c_rt_lib0clear(&___nl__2);
#line 162
c_rt_lib0clear(&___nl__3);
#line 162
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 162
c_rt_lib0clear(&___nl__1);
#line 162
return ___nl__0;
#line 162
c_rt_lib0clear(&___nl__0);
#line 162
return NULL;
}

ImmT generator_c0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "generator_c0generate");
return generator_c0generate(_tab[0], &_tab[1]);}
ImmT generator_c0generate(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
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
#line 166
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 167
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 168
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__0));
#line 168
label_3:
#line 168
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 168
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 168
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 168
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__0, ___nl__4));
#line 169
c_rt_lib0delete(array0push(&___nl__3, ___nl__4));
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 170
goto label_3;
#line 170
label_11:
#line 170
c_rt_lib0clear(&___nl__4);
#line 170
c_rt_lib0clear(&___nl__5);
#line 170
c_rt_lib0clear(&___nl__6);
#line 171
c_rt_lib0delete(array0sort(&___nl__3));
#line 172
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 172
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 172
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 172
label_19:
#line 172
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 172
if(c_rt_lib0check_true_native(___nl__8)){ goto label_92;}
#line 172
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 173
c_rt_lib0move(&___nl__9, hash0get_value(___nl__0, ___nl__4));
#line 174
c_rt_lib0delete(generator_c0clear_module_from_state(___ref___1, ___nl__4));
#line 175
c_rt_lib0move(&___nl__10,___get_global_const(159));
#line 175
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 175
c_rt_lib0move(&___nl__11,___get_global_const(332));
#line 175
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 175
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 175
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__4, ___nl__12));
#line 175
c_rt_lib0clear(&___nl__12);
#line 175
c_rt_lib0move(&___nl__12,___get_global_const(332));
#line 175
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 175
c_rt_lib0move(&___nl__12,___get_global_const(159));
#line 175
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__10));
#line 175
c_rt_lib0clear(&___nl__12);
#line 175
c_rt_lib0clear(&___nl__10);
#line 175
c_rt_lib0clear(&___nl__11);
#line 176
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 176
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 176
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(341), ___nl__11);
#line 176
c_rt_lib0clear(&___nl__10);
#line 176
c_rt_lib0clear(&___nl__11);
#line 177
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 177
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 177
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(340), ___nl__11);
#line 177
c_rt_lib0clear(&___nl__10);
#line 177
c_rt_lib0clear(&___nl__11);
#line 178
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(0));
#line 178
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 178
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(344), ___nl__11);
#line 178
c_rt_lib0clear(&___nl__10);
#line 178
c_rt_lib0clear(&___nl__11);
#line 179
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 179
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(0));
#line 179
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(0));
#line 179
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__13, ___get_global_const(328), ___nl__14));
#line 179
c_rt_lib0clear(&___nl__13);
#line 179
c_rt_lib0clear(&___nl__14);
#line 179
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(0));
#line 179
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(0));
#line 179
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__14, ___get_global_const(328), ___nl__15));
#line 179
c_rt_lib0clear(&___nl__14);
#line 179
c_rt_lib0clear(&___nl__15);
#line 179
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(3, ___get_global_const(339), ___nl__11, ___get_global_const(337), ___nl__12, ___get_global_const(338), ___nl__13));
#line 179
c_rt_lib0clear(&___nl__11);
#line 179
c_rt_lib0clear(&___nl__12);
#line 179
c_rt_lib0clear(&___nl__13);
#line 179
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 179
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(196), ___nl__11);
#line 179
c_rt_lib0clear(&___nl__10);
#line 179
c_rt_lib0clear(&___nl__11);
#line 180
c_rt_lib0copy(&___nl__10, ___nl__4);
#line 180
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(343), ___nl__10);
#line 180
c_rt_lib0clear(&___nl__10);
#line 181
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 181
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 181
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(342), ___nl__11);
#line 181
c_rt_lib0clear(&___nl__10);
#line 181
c_rt_lib0clear(&___nl__11);
#line 182
c_rt_lib0delete(generator_c_priv0print_mod(___ref___1, ___nl__9));
#line 183
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(341)));
#line 183
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(340)));
#line 183
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(34), ___nl__11, ___get_global_const(40), ___nl__12));
#line 183
c_rt_lib0clear(&___nl__11);
#line 183
c_rt_lib0clear(&___nl__12);
#line 183
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__4, ___nl__10));
#line 183
c_rt_lib0clear(&___nl__10);
#line 183
c_rt_lib0clear(&___nl__9);
#line 184
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 184
goto label_19;
#line 184
label_92:
#line 184
c_rt_lib0clear(&___nl__4);
#line 184
c_rt_lib0clear(&___nl__5);
#line 184
c_rt_lib0clear(&___nl__6);
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0clear(&___nl__8);
#line 185
c_rt_lib0move(&___nl__5, generator_c_priv0generate_global_const_files(___ref___1));
#line 185
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(157), ___nl__2, ___get_global_const(159), ___nl__5));
#line 185
c_rt_lib0clear(&___nl__5);
#line 185
c_rt_lib0clear(&___nl__0);
#line 185
c_rt_lib0clear(&___nl__2);
#line 185
c_rt_lib0clear(&___nl__3);
#line 185
return ___nl__4;
#line 185
c_rt_lib0clear(&___nl__4);
#line 185
c_rt_lib0clear(&___nl__2);
#line 185
c_rt_lib0clear(&___nl__3);
#line 185
c_rt_lib0clear(&___nl__0);
#line 185
return NULL;
}

ImmT generator_c_priv0generate_global_const_files(ImmT * ___ref___0) {
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 189
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 189
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 189
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(341), ___nl__2);
#line 189
c_rt_lib0clear(&___nl__1);
#line 189
c_rt_lib0clear(&___nl__2);
#line 190
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 190
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 190
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(340), ___nl__2);
#line 190
c_rt_lib0clear(&___nl__1);
#line 190
c_rt_lib0clear(&___nl__2);
#line 191
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 191
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 191
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(344), ___nl__2);
#line 191
c_rt_lib0clear(&___nl__1);
#line 191
c_rt_lib0clear(&___nl__2);
#line 192
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 192
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 192
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 192
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__4, ___get_global_const(328), ___nl__5));
#line 192
c_rt_lib0clear(&___nl__4);
#line 192
c_rt_lib0clear(&___nl__5);
#line 192
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 192
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 192
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__5, ___get_global_const(328), ___nl__6));
#line 192
c_rt_lib0clear(&___nl__5);
#line 192
c_rt_lib0clear(&___nl__6);
#line 192
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(339), ___nl__2, ___get_global_const(337), ___nl__3, ___get_global_const(338), ___nl__4));
#line 192
c_rt_lib0clear(&___nl__2);
#line 192
c_rt_lib0clear(&___nl__3);
#line 192
c_rt_lib0clear(&___nl__4);
#line 192
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 192
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(196), ___nl__2);
#line 192
c_rt_lib0clear(&___nl__1);
#line 192
c_rt_lib0clear(&___nl__2);
#line 193
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 193
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 193
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(343), ___nl__2);
#line 193
c_rt_lib0clear(&___nl__1);
#line 193
c_rt_lib0clear(&___nl__2);
#line 194
c_rt_lib0move(&___nl__1, generator_c_priv0get_cr());
#line 194
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__1));
#line 194
c_rt_lib0clear(&___nl__1);
#line 195
c_rt_lib0move(&___nl__1,___get_global_const(351));
#line 195
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__1));
#line 195
c_rt_lib0clear(&___nl__1);
#line 196
c_rt_lib0move(&___nl__2,___get_global_const(225));
#line 196
c_rt_lib0move(&___nl__1, generator_c_priv0get_include(___nl__2));
#line 196
c_rt_lib0clear(&___nl__2);
#line 196
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__1));
#line 196
c_rt_lib0clear(&___nl__1);
#line 197
c_rt_lib0move(&___nl__1, generator_c_priv0get_cr());
#line 197
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__1));
#line 197
c_rt_lib0clear(&___nl__1);
#line 198
c_rt_lib0move(&___nl__2,___get_global_const(352));
#line 198
c_rt_lib0move(&___nl__1, generator_c_priv0get_include(___nl__2));
#line 198
c_rt_lib0clear(&___nl__2);
#line 198
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__1));
#line 198
c_rt_lib0clear(&___nl__1);
#line 199
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(159)));
#line 199
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(327)));
#line 200
c_rt_lib0move(&___nl__2, array0len(___nl__1));
#line 201
c_rt_lib0move(&___nl__3,___get_global_const(353));
#line 201
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__3));
#line 201
c_rt_lib0clear(&___nl__3);
#line 202
c_rt_lib0move(&___nl__3, generator_c_priv0arg_t());
#line 202
c_rt_lib0move(&___nl__4,___get_global_const(354));
#line 202
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 202
c_rt_lib0clear(&___nl__4);
#line 202
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__3));
#line 202
c_rt_lib0clear(&___nl__3);
#line 203
c_rt_lib0move(&___nl__3,___get_global_const(355));
#line 204
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 204
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 204
c_rt_lib0clear(&___nl__4);
#line 204
c_rt_lib0move(&___nl__4,___get_global_const(356));
#line 204
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 204
c_rt_lib0clear(&___nl__4);
#line 204
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 204
c_rt_lib0clear(&___nl__3);
#line 207
c_rt_lib0move(&___nl__3,___get_global_const(357));
#line 207
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 211
c_rt_lib0move(&___nl__4,___get_global_const(358));
#line 211
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 211
c_rt_lib0clear(&___nl__4);
#line 211
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 211
c_rt_lib0clear(&___nl__3);
#line 213
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 213
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 213
label_88:
#line 213
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 213
if(c_rt_lib0check_true_native(___nl__5)){ goto label_105;}
#line 214
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 214
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(329)));
#line 214
c_rt_lib0move(&___nl__8,___get_global_const(359));
#line 214
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__3));
#line 214
c_rt_lib0move(&___nl__6, generator_c_priv0create_sim_to_memory(___nl__7, ___nl__8));
#line 214
c_rt_lib0clear(&___nl__8);
#line 214
c_rt_lib0clear(&___nl__7);
#line 214
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 214
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 214
c_rt_lib0clear(&___nl__7);
#line 214
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__6));
#line 214
c_rt_lib0clear(&___nl__6);
#line 215
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 215
goto label_88;
#line 215
label_105:
#line 215
c_rt_lib0clear(&___nl__3);
#line 215
c_rt_lib0clear(&___nl__4);
#line 215
c_rt_lib0clear(&___nl__5);
#line 216
c_rt_lib0move(&___nl__3,___get_global_const(361));
#line 217
c_rt_lib0move(&___nl__5,___get_global_const(362));
#line 217
c_rt_lib0move(&___nl__4, generator_c_priv0get_lib_fun(___nl__5));
#line 217
c_rt_lib0clear(&___nl__5);
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0move(&___nl__4,___get_global_const(363));
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0move(&___nl__4,___get_global_const(364));
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 217
c_rt_lib0clear(&___nl__4);
#line 218
c_rt_lib0move(&___nl__4,___get_global_const(365));
#line 218
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 218
c_rt_lib0clear(&___nl__4);
#line 218
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 218
c_rt_lib0move(&___nl__4,___get_global_const(366));
#line 218
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 218
c_rt_lib0clear(&___nl__4);
#line 218
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 218
c_rt_lib0clear(&___nl__3);
#line 220
c_rt_lib0move(&___nl__3, generator_c_priv0arg_t());
#line 220
c_rt_lib0move(&___nl__4,___get_global_const(367));
#line 220
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 220
c_rt_lib0clear(&___nl__4);
#line 221
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 221
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 221
c_rt_lib0clear(&___nl__4);
#line 221
c_rt_lib0move(&___nl__4,___get_global_const(368));
#line 221
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 221
c_rt_lib0clear(&___nl__4);
#line 222
c_rt_lib0move(&___nl__5,___get_global_const(369));
#line 222
c_rt_lib0move(&___nl__7,___get_global_const(370));
#line 222
c_rt_lib0move(&___nl__8,___get_global_const(371));
#line 222
c_rt_lib0move(&___nl__9, generator_c_priv0arg_t());
#line 222
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 222
c_rt_lib0clear(&___nl__9);
#line 222
c_rt_lib0move(&___nl__9,___get_global_const(372));
#line 222
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 222
c_rt_lib0clear(&___nl__9);
#line 222
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__7, ___nl__8));
#line 222
c_rt_lib0clear(&___nl__7);
#line 222
c_rt_lib0clear(&___nl__8);
#line 222
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_lib(___nl__5, ___nl__6));
#line 222
c_rt_lib0clear(&___nl__6);
#line 222
c_rt_lib0clear(&___nl__5);
#line 222
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 222
c_rt_lib0clear(&___nl__4);
#line 222
c_rt_lib0move(&___nl__4,___get_global_const(373));
#line 222
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 222
c_rt_lib0clear(&___nl__4);
#line 222
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 222
c_rt_lib0clear(&___nl__3);
#line 225
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(341)));
#line 225
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(340)));
#line 225
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(34), ___nl__4, ___get_global_const(40), ___nl__5));
#line 225
c_rt_lib0clear(&___nl__4);
#line 225
c_rt_lib0clear(&___nl__5);
#line 225
c_rt_lib0clear(&___nl__1);
#line 225
c_rt_lib0clear(&___nl__2);
#line 225
return ___nl__3;
#line 225
c_rt_lib0clear(&___nl__3);
#line 225
c_rt_lib0clear(&___nl__1);
#line 225
c_rt_lib0clear(&___nl__2);
#line 225
return NULL;
}

ImmT generator_c_priv0get_include(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 229
c_rt_lib0move(&___nl__1,___get_global_const(374));
#line 229
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 229
c_rt_lib0move(&___nl__2,___get_global_const(375));
#line 229
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 229
c_rt_lib0clear(&___nl__2);
#line 229
c_rt_lib0clear(&___nl__0);
#line 229
return ___nl__1;
#line 229
c_rt_lib0clear(&___nl__1);
#line 229
c_rt_lib0clear(&___nl__0);
#line 229
return NULL;
}

ImmT generator_c_priv0get_cr(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(15);}
ImmT generator_c_priv0get_cr0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 233
c_rt_lib0move(&___nl__0,___get_global_const(376));
#line 233
return ___nl__0;
#line 233
c_rt_lib0clear(&___nl__0);
#line 233
return NULL;
}

ImmT generator_c_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 242
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(182)));
#line 242
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(183)));
#line 242
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 244
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(377)));
#line 244
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 244
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 244
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 244
nl_die_arg(___nl__4);
#line 242
label_8:
#line 243
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 244
goto label_16;
#line 244
label_11:
#line 245
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 245
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 245
c_rt_lib0clear(&___nl__5);
#line 246
goto label_16;
#line 246
label_16:
#line 246
c_rt_lib0clear(&___nl__3);
#line 246
c_rt_lib0clear(&___nl__4);
#line 247
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 247
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_name(___nl__2, ___nl__4, ___nl__1));
#line 247
c_rt_lib0clear(&___nl__4);
#line 247
c_rt_lib0clear(&___nl__0);
#line 247
c_rt_lib0clear(&___nl__1);
#line 247
c_rt_lib0clear(&___nl__2);
#line 247
return ___nl__3;
#line 247
c_rt_lib0clear(&___nl__3);
#line 247
c_rt_lib0clear(&___nl__2);
#line 247
c_rt_lib0clear(&___nl__0);
#line 247
c_rt_lib0clear(&___nl__1);
#line 247
return NULL;
}

ImmT generator_c_priv0get_function_header(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 251
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 252
c_rt_lib0move(&___nl__3, generator_c_priv0get_function_name(___nl__0, ___nl__1));
#line 253
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 253
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 253
c_rt_lib0move(&___nl__5,___get_global_const(371));
#line 253
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 253
c_rt_lib0clear(&___nl__5);
#line 253
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 253
c_rt_lib0clear(&___nl__4);
#line 254
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 255
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 255
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 255
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 255
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 255
label_14:
#line 255
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 255
if(c_rt_lib0check_true_native(___nl__10)){ goto label_61;}
#line 255
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 256
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 256
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__11, ___nl__4));
#line 256
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 256
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 256
if(c_rt_lib0check_true_native(___nl__11)){ goto label_27;}
#line 256
c_rt_lib0move(&___nl__12,___get_global_const(256));
#line 256
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__12));
#line 256
c_rt_lib0clear(&___nl__12);
#line 256
goto label_27;
#line 256
label_27:
#line 256
c_rt_lib0clear(&___nl__11);
#line 257
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(198)));
#line 257
if(c_rt_lib0check_true_native(___nl__11)){ goto label_36;}
#line 259
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(5)));
#line 259
if(c_rt_lib0check_true_native(___nl__11)){ goto label_45;}
#line 259
c_rt_lib0move(&___nl__11,___get_global_const(91));
#line 259
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__6));
#line 259
nl_die_arg(___nl__11);
#line 257
label_36:
#line 258
c_rt_lib0move(&___nl__12, generator_c_priv0arg_t());
#line 258
c_rt_lib0move(&___nl__13,___get_global_const(347));
#line 258
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 258
c_rt_lib0clear(&___nl__13);
#line 258
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__4));
#line 258
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__12));
#line 258
c_rt_lib0clear(&___nl__12);
#line 259
goto label_54;
#line 259
label_45:
#line 260
c_rt_lib0move(&___nl__12, generator_c_priv0arg_t());
#line 260
c_rt_lib0move(&___nl__13,___get_global_const(378));
#line 260
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 260
c_rt_lib0clear(&___nl__13);
#line 260
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__4));
#line 260
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__12));
#line 260
c_rt_lib0clear(&___nl__12);
#line 261
goto label_54;
#line 261
label_54:
#line 261
c_rt_lib0clear(&___nl__11);
#line 262
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 262
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__11));
#line 262
c_rt_lib0clear(&___nl__11);
#line 263
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 263
goto label_14;
#line 263
label_61:
#line 263
c_rt_lib0clear(&___nl__5);
#line 263
c_rt_lib0clear(&___nl__6);
#line 263
c_rt_lib0clear(&___nl__7);
#line 263
c_rt_lib0clear(&___nl__8);
#line 263
c_rt_lib0clear(&___nl__9);
#line 263
c_rt_lib0clear(&___nl__10);
#line 264
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 264
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__5));
#line 264
c_rt_lib0clear(&___nl__5);
#line 265
c_rt_lib0clear(&___nl__0);
#line 265
c_rt_lib0clear(&___nl__1);
#line 265
c_rt_lib0clear(&___nl__3);
#line 265
c_rt_lib0clear(&___nl__4);
#line 265
return ___nl__2;
#line 265
c_rt_lib0clear(&___nl__2);
#line 265
c_rt_lib0clear(&___nl__3);
#line 265
c_rt_lib0clear(&___nl__4);
#line 265
c_rt_lib0clear(&___nl__0);
#line 265
c_rt_lib0clear(&___nl__1);
#line 265
return NULL;
}

ImmT generator_c_priv0get_const(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 269
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 269
c_rt_lib0move(&___nl__2, c_rt_lib0unary_minus(___nl__2));
#line 270
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(328)));
#line 270
c_rt_lib0move(&___nl__3, hash0has_key(___nl__4, ___nl__1));
#line 270
c_rt_lib0clear(&___nl__4);
#line 270
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 270
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 270
if(c_rt_lib0check_true_native(___nl__3)){ goto label_28;}
#line 271
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(327)));
#line 271
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 271
c_rt_lib0clear(&___nl__5);
#line 271
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 271
c_rt_lib0clear(&___nl__4);
#line 272
c_rt_lib0move(&___nl__4,___get_global_const(327));
#line 272
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 272
c_rt_lib0delete(array0push(&___nl__4, ___nl__1));
#line 272
c_rt_lib0move(&___nl__5,___get_global_const(327));
#line 272
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 272
c_rt_lib0clear(&___nl__5);
#line 272
c_rt_lib0clear(&___nl__4);
#line 273
c_rt_lib0move(&___nl__4,___get_global_const(328));
#line 273
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 273
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__1, ___nl__2));
#line 273
c_rt_lib0move(&___nl__5,___get_global_const(328));
#line 273
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 273
c_rt_lib0clear(&___nl__5);
#line 273
c_rt_lib0clear(&___nl__4);
#line 274
goto label_35;
#line 274
label_28:
#line 275
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(328)));
#line 275
c_rt_lib0move(&___nl__4, hash0get_value(___nl__5, ___nl__1));
#line 275
c_rt_lib0clear(&___nl__5);
#line 275
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 275
c_rt_lib0clear(&___nl__4);
#line 276
goto label_35;
#line 276
label_35:
#line 276
c_rt_lib0clear(&___nl__3);
#line 277
c_rt_lib0clear(&___nl__1);
#line 277
return ___nl__2;
#line 277
c_rt_lib0clear(&___nl__2);
#line 277
c_rt_lib0clear(&___nl__1);
#line 277
return NULL;
}

ImmT generator_c_priv0insert_const_to_modules_hash(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
generator_c_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 281
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(332)));
#line 281
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__2));
#line 281
c_rt_lib0clear(&___nl__4);
#line 282
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 282
c_rt_lib0delete(hash0set_value(&___nl__3, ___nl__1, ___nl__4));
#line 282
c_rt_lib0clear(&___nl__4);
#line 283
c_rt_lib0move(&___nl__4,___get_global_const(332));
#line 283
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 283
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__2, ___nl__3));
#line 283
c_rt_lib0move(&___nl__5,___get_global_const(332));
#line 283
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 283
c_rt_lib0clear(&___nl__5);
#line 283
c_rt_lib0clear(&___nl__4);
#line 283
c_rt_lib0clear(&___nl__3);
#line 283
c_rt_lib0clear(&___nl__1);
#line 283
c_rt_lib0clear(&___nl__2);
#line 283
return NULL;
}

ImmT generator_c_priv0get_global_const(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
generator_c_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 287
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 287
c_rt_lib0move(&___nl__3, c_rt_lib0unary_minus(___nl__3));
#line 288
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(328)));
#line 288
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__1));
#line 288
c_rt_lib0clear(&___nl__5);
#line 288
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 288
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 288
if(c_rt_lib0check_true_native(___nl__4)){ goto label_77;}
#line 289
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(331)));
#line 289
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 289
c_rt_lib0clear(&___nl__6);
#line 289
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 289
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 289
c_rt_lib0clear(&___nl__6);
#line 289
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 289
if(c_rt_lib0check_true_native(___nl__5)){ goto label_48;}
#line 290
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(331)));
#line 290
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(331)));
#line 290
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 290
c_rt_lib0clear(&___nl__8);
#line 290
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 290
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 290
c_rt_lib0clear(&___nl__8);
#line 290
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__7));
#line 290
c_rt_lib0clear(&___nl__7);
#line 290
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 290
c_rt_lib0clear(&___nl__6);
#line 291
c_rt_lib0move(&___nl__6,___get_global_const(331));
#line 291
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 291
c_rt_lib0delete(array0pop(&___nl__6));
#line 291
c_rt_lib0move(&___nl__7,___get_global_const(331));
#line 291
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 291
c_rt_lib0clear(&___nl__7);
#line 291
c_rt_lib0clear(&___nl__6);
#line 292
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 292
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(329), ___nl__1, ___get_global_const(330), ___nl__7));
#line 292
c_rt_lib0clear(&___nl__7);
#line 292
c_rt_lib0move(&___nl__7,___get_global_const(327));
#line 292
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 292
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 292
c_rt_lib0array_set(&___nl__7, ___nl__3, ___nl__8);
#line 292
c_rt_lib0move(&___nl__9,___get_global_const(327));
#line 292
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__9, ___nl__7));
#line 292
c_rt_lib0clear(&___nl__9);
#line 292
c_rt_lib0clear(&___nl__6);
#line 292
c_rt_lib0clear(&___nl__7);
#line 292
c_rt_lib0clear(&___nl__8);
#line 293
goto label_66;
#line 293
label_48:
#line 294
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(327)));
#line 294
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 294
c_rt_lib0clear(&___nl__7);
#line 294
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 294
c_rt_lib0clear(&___nl__6);
#line 295
c_rt_lib0move(&___nl__6,___get_global_const(327));
#line 295
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 295
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 295
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(329), ___nl__1, ___get_global_const(330), ___nl__8));
#line 295
c_rt_lib0clear(&___nl__8);
#line 295
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 295
c_rt_lib0clear(&___nl__7);
#line 295
c_rt_lib0move(&___nl__7,___get_global_const(327));
#line 295
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 295
c_rt_lib0clear(&___nl__7);
#line 295
c_rt_lib0clear(&___nl__6);
#line 296
goto label_66;
#line 296
label_66:
#line 296
c_rt_lib0clear(&___nl__5);
#line 297
c_rt_lib0delete(generator_c_priv0insert_const_to_modules_hash(___ref___0, ___nl__1, ___nl__2));
#line 298
c_rt_lib0move(&___nl__5,___get_global_const(328));
#line 298
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 298
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__1, ___nl__3));
#line 298
c_rt_lib0move(&___nl__6,___get_global_const(328));
#line 298
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 298
c_rt_lib0clear(&___nl__6);
#line 298
c_rt_lib0clear(&___nl__5);
#line 299
goto label_113;
#line 299
label_77:
#line 300
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(328)));
#line 300
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__1));
#line 300
c_rt_lib0clear(&___nl__6);
#line 300
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 300
c_rt_lib0clear(&___nl__5);
#line 301
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(332)));
#line 301
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__2));
#line 301
c_rt_lib0clear(&___nl__6);
#line 302
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__1));
#line 302
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 302
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 302
if(c_rt_lib0check_true_native(___nl__6)){ goto label_109;}
#line 303
c_rt_lib0move(&___nl__7,___get_global_const(327));
#line 303
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 303
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_arr(___nl__7, ___nl__3));
#line 303
c_rt_lib0move(&___nl__9,___get_global_const(330));
#line 303
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__8, ___nl__9));
#line 303
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 303
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 303
c_rt_lib0move(&___nl__11,___get_global_const(330));
#line 303
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__8, ___nl__11, ___nl__9));
#line 303
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__7, ___nl__3, ___nl__8));
#line 303
c_rt_lib0move(&___nl__11,___get_global_const(327));
#line 303
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__7));
#line 303
c_rt_lib0clear(&___nl__11);
#line 303
c_rt_lib0clear(&___nl__7);
#line 303
c_rt_lib0clear(&___nl__8);
#line 303
c_rt_lib0clear(&___nl__9);
#line 303
c_rt_lib0clear(&___nl__10);
#line 304
c_rt_lib0delete(generator_c_priv0insert_const_to_modules_hash(___ref___0, ___nl__1, ___nl__2));
#line 305
goto label_109;
#line 305
label_109:
#line 305
c_rt_lib0clear(&___nl__6);
#line 305
c_rt_lib0clear(&___nl__5);
#line 306
goto label_113;
#line 306
label_113:
#line 306
c_rt_lib0clear(&___nl__4);
#line 307
c_rt_lib0clear(&___nl__1);
#line 307
c_rt_lib0clear(&___nl__2);
#line 307
return ___nl__3;
#line 307
c_rt_lib0clear(&___nl__3);
#line 307
c_rt_lib0clear(&___nl__1);
#line 307
c_rt_lib0clear(&___nl__2);
#line 307
return NULL;
}

ImmT generator_c0clear_module_from_state0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "generator_c0clear_module_from_state");
return generator_c0clear_module_from_state(&_tab[0], _tab[1]);}
ImmT generator_c0clear_module_from_state(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 311
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(159)));
#line 311
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(332)));
#line 311
c_rt_lib0move(&___nl__2, hash0has_key(___nl__3, ___nl__1));
#line 311
c_rt_lib0clear(&___nl__3);
#line 311
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 311
if(c_rt_lib0check_true_native(___nl__2)){ goto label_99;}
#line 312
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(159)));
#line 312
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(332)));
#line 312
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__1));
#line 312
c_rt_lib0clear(&___nl__4);
#line 313
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 313
label_11:
#line 313
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 313
if(c_rt_lib0check_true_native(___nl__4)){ goto label_81;}
#line 313
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 313
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 314
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(159)));
#line 314
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(328)));
#line 314
c_rt_lib0move(&___nl__7, hash0get_value(___nl__8, ___nl__4));
#line 314
c_rt_lib0clear(&___nl__8);
#line 315
c_rt_lib0move(&___nl__8,___get_global_const(159));
#line 315
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___0, ___nl__8));
#line 315
c_rt_lib0move(&___nl__9,___get_global_const(327));
#line 315
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__8, ___nl__9));
#line 315
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_arr(___nl__9, ___nl__7));
#line 315
c_rt_lib0move(&___nl__11,___get_global_const(330));
#line 315
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 315
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 315
c_rt_lib0move(&___nl__11, c_rt_lib0sub_mod(___nl__11, ___nl__12));
#line 315
c_rt_lib0move(&___nl__13,___get_global_const(330));
#line 315
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__13, ___nl__11));
#line 315
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__9, ___nl__7, ___nl__10));
#line 315
c_rt_lib0move(&___nl__13,___get_global_const(327));
#line 315
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__8, ___nl__13, ___nl__9));
#line 315
c_rt_lib0move(&___nl__13,___get_global_const(159));
#line 315
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__13, ___nl__8));
#line 315
c_rt_lib0clear(&___nl__13);
#line 315
c_rt_lib0clear(&___nl__8);
#line 315
c_rt_lib0clear(&___nl__9);
#line 315
c_rt_lib0clear(&___nl__10);
#line 315
c_rt_lib0clear(&___nl__11);
#line 315
c_rt_lib0clear(&___nl__12);
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(159)));
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(327)));
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__7));
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(330)));
#line 316
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__8, ___nl__9));
#line 316
c_rt_lib0clear(&___nl__9);
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 316
if(c_rt_lib0check_true_native(___nl__8)){ goto label_76;}
#line 317
c_rt_lib0move(&___nl__9,___get_global_const(159));
#line 317
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 317
c_rt_lib0move(&___nl__10,___get_global_const(328));
#line 317
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__9, ___nl__10));
#line 317
c_rt_lib0delete(hash0delete(&___nl__10, ___nl__4));
#line 317
c_rt_lib0move(&___nl__11,___get_global_const(328));
#line 317
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__9, ___nl__11, ___nl__10));
#line 317
c_rt_lib0move(&___nl__11,___get_global_const(159));
#line 317
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__9));
#line 317
c_rt_lib0clear(&___nl__11);
#line 317
c_rt_lib0clear(&___nl__9);
#line 317
c_rt_lib0clear(&___nl__10);
#line 318
c_rt_lib0move(&___nl__9,___get_global_const(159));
#line 318
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 318
c_rt_lib0move(&___nl__10,___get_global_const(331));
#line 318
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__9, ___nl__10));
#line 318
c_rt_lib0delete(array0push(&___nl__10, ___nl__7));
#line 318
c_rt_lib0move(&___nl__11,___get_global_const(331));
#line 318
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__9, ___nl__11, ___nl__10));
#line 318
c_rt_lib0move(&___nl__11,___get_global_const(159));
#line 318
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__9));
#line 318
c_rt_lib0clear(&___nl__11);
#line 318
c_rt_lib0clear(&___nl__9);
#line 318
c_rt_lib0clear(&___nl__10);
#line 319
goto label_76;
#line 319
label_76:
#line 319
c_rt_lib0clear(&___nl__8);
#line 319
c_rt_lib0clear(&___nl__7);
#line 320
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 320
goto label_11;
#line 320
label_81:
#line 320
c_rt_lib0clear(&___nl__4);
#line 320
c_rt_lib0clear(&___nl__5);
#line 320
c_rt_lib0clear(&___nl__6);
#line 321
c_rt_lib0move(&___nl__4,___get_global_const(159));
#line 321
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 321
c_rt_lib0move(&___nl__5,___get_global_const(332));
#line 321
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 321
c_rt_lib0delete(hash0delete(&___nl__5, ___nl__1));
#line 321
c_rt_lib0move(&___nl__6,___get_global_const(332));
#line 321
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 321
c_rt_lib0move(&___nl__6,___get_global_const(159));
#line 321
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 321
c_rt_lib0clear(&___nl__6);
#line 321
c_rt_lib0clear(&___nl__4);
#line 321
c_rt_lib0clear(&___nl__5);
#line 321
c_rt_lib0clear(&___nl__3);
#line 322
goto label_99;
#line 322
label_99:
#line 322
c_rt_lib0clear(&___nl__2);
#line 322
c_rt_lib0clear(&___nl__1);
#line 322
return NULL;
}

ImmT generator_c_priv0get_const_sim(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 326
c_rt_lib0move(&___nl__3,___get_global_const(159));
#line 326
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 326
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 326
c_rt_lib0move(&___nl__2, generator_c_priv0get_global_const(&___nl__3, ___nl__1, ___nl__4));
#line 326
c_rt_lib0clear(&___nl__4);
#line 326
c_rt_lib0move(&___nl__4,___get_global_const(159));
#line 326
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 326
c_rt_lib0clear(&___nl__4);
#line 326
c_rt_lib0clear(&___nl__3);
#line 327
c_rt_lib0move(&___nl__3,___get_global_const(379));
#line 327
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 327
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 327
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 327
c_rt_lib0clear(&___nl__4);
#line 327
c_rt_lib0clear(&___nl__1);
#line 327
c_rt_lib0clear(&___nl__2);
#line 327
return ___nl__3;
#line 327
c_rt_lib0clear(&___nl__3);
#line 327
c_rt_lib0clear(&___nl__2);
#line 327
c_rt_lib0clear(&___nl__1);
#line 327
return NULL;
}

ImmT generator_c_priv0get_const_singleton(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 331
c_rt_lib0move(&___nl__3,___get_global_const(196));
#line 331
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 331
c_rt_lib0move(&___nl__4,___get_global_const(338));
#line 331
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 331
c_rt_lib0move(&___nl__2, generator_c_priv0get_const(&___nl__4, ___nl__1));
#line 331
c_rt_lib0move(&___nl__5,___get_global_const(338));
#line 331
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 331
c_rt_lib0move(&___nl__5,___get_global_const(196));
#line 331
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 331
c_rt_lib0clear(&___nl__5);
#line 331
c_rt_lib0clear(&___nl__3);
#line 331
c_rt_lib0clear(&___nl__4);
#line 332
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 332
c_rt_lib0move(&___nl__5,___get_global_const(380));
#line 332
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 332
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_name(___nl__4, ___nl__5, ___nl__6));
#line 332
c_rt_lib0clear(&___nl__6);
#line 332
c_rt_lib0clear(&___nl__5);
#line 332
c_rt_lib0clear(&___nl__4);
#line 332
c_rt_lib0move(&___nl__4,___get_global_const(371));
#line 332
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 332
c_rt_lib0clear(&___nl__4);
#line 332
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 332
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 332
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 332
c_rt_lib0clear(&___nl__4);
#line 332
c_rt_lib0clear(&___nl__1);
#line 332
c_rt_lib0clear(&___nl__2);
#line 332
return ___nl__3;
#line 332
c_rt_lib0clear(&___nl__3);
#line 332
c_rt_lib0clear(&___nl__2);
#line 332
c_rt_lib0clear(&___nl__1);
#line 332
return NULL;
}

ImmT generator_c_priv0get_func_ptr_header(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 336
c_rt_lib0move(&___nl__2, generator_c_priv0arg_t());
#line 336
c_rt_lib0move(&___nl__3, generator_c_priv0get_function_name(___nl__0, ___nl__1));
#line 336
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 336
c_rt_lib0clear(&___nl__3);
#line 336
c_rt_lib0move(&___nl__3,___get_global_const(381));
#line 336
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 336
c_rt_lib0clear(&___nl__3);
#line 336
c_rt_lib0clear(&___nl__0);
#line 336
c_rt_lib0clear(&___nl__1);
#line 336
return ___nl__2;
#line 336
c_rt_lib0clear(&___nl__2);
#line 336
c_rt_lib0clear(&___nl__0);
#line 336
c_rt_lib0clear(&___nl__1);
#line 336
return NULL;
}

ImmT generator_c_priv0print_mod(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 340
c_rt_lib0move(&___nl__2, generator_c_priv0get_cr());
#line 340
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__2));
#line 340
c_rt_lib0clear(&___nl__2);
#line 341
c_rt_lib0move(&___nl__2,___get_global_const(351));
#line 341
c_rt_lib0move(&___nl__3, string0lf());
#line 341
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 341
c_rt_lib0clear(&___nl__3);
#line 341
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__2));
#line 341
c_rt_lib0clear(&___nl__2);
#line 342
c_rt_lib0move(&___nl__3,___get_global_const(225));
#line 342
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 342
c_rt_lib0clear(&___nl__3);
#line 342
c_rt_lib0move(&___nl__3, string0lf());
#line 342
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 342
c_rt_lib0clear(&___nl__3);
#line 342
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__2));
#line 342
c_rt_lib0clear(&___nl__2);
#line 343
c_rt_lib0move(&___nl__2, generator_c_priv0get_cr());
#line 343
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__2));
#line 343
c_rt_lib0clear(&___nl__2);
#line 344
c_rt_lib0move(&___nl__3,___get_global_const(225));
#line 344
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 344
c_rt_lib0clear(&___nl__3);
#line 344
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 344
c_rt_lib0clear(&___nl__2);
#line 345
c_rt_lib0move(&___nl__3,___get_global_const(352));
#line 345
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 345
c_rt_lib0clear(&___nl__3);
#line 345
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 345
c_rt_lib0clear(&___nl__2);
#line 346
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 346
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 346
c_rt_lib0clear(&___nl__3);
#line 346
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 346
c_rt_lib0clear(&___nl__2);
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(382)));
#line 347
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 347
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 347
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 347
label_39:
#line 347
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 347
if(c_rt_lib0check_true_native(___nl__7)){ goto label_48;}
#line 347
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 348
c_rt_lib0move(&___nl__8, generator_c_priv0get_include(___nl__3));
#line 348
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__8));
#line 348
c_rt_lib0clear(&___nl__8);
#line 349
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 349
goto label_39;
#line 349
label_48:
#line 349
c_rt_lib0clear(&___nl__2);
#line 349
c_rt_lib0clear(&___nl__3);
#line 349
c_rt_lib0clear(&___nl__4);
#line 349
c_rt_lib0clear(&___nl__5);
#line 349
c_rt_lib0clear(&___nl__6);
#line 349
c_rt_lib0clear(&___nl__7);
#line 350
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(341)));
#line 351
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 351
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 351
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(341), ___nl__4);
#line 351
c_rt_lib0clear(&___nl__3);
#line 351
c_rt_lib0clear(&___nl__4);
#line 352
c_rt_lib0move(&___nl__3,___get_global_const(383));
#line 352
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 352
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 352
c_rt_lib0clear(&___nl__4);
#line 352
c_rt_lib0move(&___nl__4,___get_global_const(384));
#line 352
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 352
c_rt_lib0clear(&___nl__4);
#line 352
c_rt_lib0move(&___nl__4, string0lf());
#line 352
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 352
c_rt_lib0clear(&___nl__4);
#line 352
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 352
c_rt_lib0clear(&___nl__3);
#line 353
c_rt_lib0move(&___nl__3,___get_global_const(385));
#line 353
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 353
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 353
c_rt_lib0clear(&___nl__4);
#line 353
c_rt_lib0move(&___nl__4,___get_global_const(386));
#line 353
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 353
c_rt_lib0clear(&___nl__4);
#line 353
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 353
c_rt_lib0clear(&___nl__3);
#line 354
c_rt_lib0move(&___nl__3,___get_global_const(387));
#line 354
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 354
c_rt_lib0move(&___nl__6,___get_global_const(388));
#line 354
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 354
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_name(___nl__5, ___nl__6, ___nl__7));
#line 354
c_rt_lib0clear(&___nl__7);
#line 354
c_rt_lib0clear(&___nl__6);
#line 354
c_rt_lib0clear(&___nl__5);
#line 354
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 354
c_rt_lib0clear(&___nl__4);
#line 354
c_rt_lib0move(&___nl__4,___get_global_const(389));
#line 354
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 354
c_rt_lib0clear(&___nl__4);
#line 354
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 354
c_rt_lib0clear(&___nl__3);
#line 355
c_rt_lib0move(&___nl__3, generator_c_priv0arg_t());
#line 355
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 355
c_rt_lib0move(&___nl__6,___get_global_const(390));
#line 355
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 355
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_name(___nl__5, ___nl__6, ___nl__7));
#line 355
c_rt_lib0clear(&___nl__7);
#line 355
c_rt_lib0clear(&___nl__6);
#line 355
c_rt_lib0clear(&___nl__5);
#line 355
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 355
c_rt_lib0clear(&___nl__4);
#line 355
c_rt_lib0move(&___nl__4,___get_global_const(391));
#line 355
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 355
c_rt_lib0clear(&___nl__4);
#line 355
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 355
c_rt_lib0clear(&___nl__3);
#line 356
c_rt_lib0move(&___nl__3, generator_c_priv0arg_t());
#line 356
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 356
c_rt_lib0move(&___nl__6,___get_global_const(380));
#line 356
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 356
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_name(___nl__5, ___nl__6, ___nl__7));
#line 356
c_rt_lib0clear(&___nl__7);
#line 356
c_rt_lib0clear(&___nl__6);
#line 356
c_rt_lib0clear(&___nl__5);
#line 356
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 356
c_rt_lib0clear(&___nl__4);
#line 356
c_rt_lib0move(&___nl__4,___get_global_const(391));
#line 356
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 356
c_rt_lib0clear(&___nl__4);
#line 356
c_rt_lib0move(&___nl__4, string0lf());
#line 356
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 356
c_rt_lib0clear(&___nl__4);
#line 356
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 356
c_rt_lib0clear(&___nl__3);
#line 357
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(92)));
#line 357
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 357
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 357
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 357
label_134:
#line 357
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 357
if(c_rt_lib0check_true_native(___nl__8)){ goto label_181;}
#line 357
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 358
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 358
c_rt_lib0move(&___nl__9, generator_c_priv0get_function_header(___nl__4, ___nl__10));
#line 358
c_rt_lib0clear(&___nl__10);
#line 359
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(182)));
#line 359
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(183)));
#line 359
if(c_rt_lib0check_true_native(___nl__11)){ goto label_149;}
#line 362
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(377)));
#line 362
if(c_rt_lib0check_true_native(___nl__11)){ goto label_169;}
#line 362
c_rt_lib0move(&___nl__11,___get_global_const(91));
#line 362
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 362
nl_die_arg(___nl__11);
#line 359
label_149:
#line 360
c_rt_lib0move(&___nl__12,___get_global_const(360));
#line 360
c_rt_lib0move(&___nl__12, c_rt_lib0concat_new(___nl__9, ___nl__12));
#line 360
c_rt_lib0move(&___nl__13, string0lf());
#line 360
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 360
c_rt_lib0clear(&___nl__13);
#line 360
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__12));
#line 360
c_rt_lib0clear(&___nl__12);
#line 361
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 361
c_rt_lib0move(&___nl__12, generator_c_priv0get_func_ptr_header(___nl__4, ___nl__13));
#line 361
c_rt_lib0clear(&___nl__13);
#line 361
c_rt_lib0move(&___nl__13,___get_global_const(360));
#line 361
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 361
c_rt_lib0clear(&___nl__13);
#line 361
c_rt_lib0move(&___nl__13, string0lf());
#line 361
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 361
c_rt_lib0clear(&___nl__13);
#line 361
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__12));
#line 361
c_rt_lib0clear(&___nl__12);
#line 362
goto label_175;
#line 362
label_169:
#line 363
c_rt_lib0move(&___nl__12,___get_global_const(360));
#line 363
c_rt_lib0move(&___nl__12, c_rt_lib0concat_new(___nl__9, ___nl__12));
#line 363
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__12));
#line 363
c_rt_lib0clear(&___nl__12);
#line 364
goto label_175;
#line 364
label_175:
#line 364
c_rt_lib0clear(&___nl__10);
#line 364
c_rt_lib0clear(&___nl__11);
#line 364
c_rt_lib0clear(&___nl__9);
#line 365
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 365
goto label_134;
#line 365
label_181:
#line 365
c_rt_lib0clear(&___nl__3);
#line 365
c_rt_lib0clear(&___nl__4);
#line 365
c_rt_lib0clear(&___nl__5);
#line 365
c_rt_lib0clear(&___nl__6);
#line 365
c_rt_lib0clear(&___nl__7);
#line 365
c_rt_lib0clear(&___nl__8);
#line 366
c_rt_lib0move(&___nl__3, string0lf());
#line 366
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 366
c_rt_lib0clear(&___nl__3);
#line 367
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(92)));
#line 367
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 367
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 367
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 367
label_195:
#line 367
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 367
if(c_rt_lib0check_true_native(___nl__8)){ goto label_352;}
#line 367
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 368
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(182)));
#line 368
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(183)));
#line 368
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 368
if(c_rt_lib0check_true_native(___nl__9)){ goto label_295;}
#line 369
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 369
c_rt_lib0move(&___nl__10, generator_c_priv0get_function_name(___nl__4, ___nl__11));
#line 369
c_rt_lib0clear(&___nl__11);
#line 370
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 370
c_rt_lib0move(&___nl__11, generator_c_priv0get_func_ptr_header(___nl__4, ___nl__12));
#line 370
c_rt_lib0clear(&___nl__12);
#line 370
c_rt_lib0move(&___nl__12,___get_global_const(252));
#line 370
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 370
c_rt_lib0clear(&___nl__12);
#line 370
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 370
c_rt_lib0clear(&___nl__11);
#line 371
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(188)));
#line 371
c_rt_lib0move(&___nl__11, array0len(___nl__12));
#line 371
c_rt_lib0clear(&___nl__12);
#line 372
c_rt_lib0move(&___nl__13,___get_global_const(392));
#line 372
c_rt_lib0move(&___nl__15,___get_global_const(393));
#line 372
c_rt_lib0move(&___nl__16, generator_c_priv0get_string(___nl__10));
#line 372
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(3, ___nl__15, ___nl__11, ___nl__16));
#line 372
c_rt_lib0clear(&___nl__15);
#line 372
c_rt_lib0clear(&___nl__16);
#line 372
c_rt_lib0move(&___nl__12, generator_c_priv0get_fun_lib(___nl__13, ___nl__14));
#line 372
c_rt_lib0clear(&___nl__14);
#line 372
c_rt_lib0clear(&___nl__13);
#line 372
c_rt_lib0move(&___nl__13,___get_global_const(360));
#line 372
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 372
c_rt_lib0clear(&___nl__13);
#line 372
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__12));
#line 372
c_rt_lib0clear(&___nl__12);
#line 373
c_rt_lib0move(&___nl__12,___get_global_const(394));
#line 373
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__10));
#line 373
c_rt_lib0move(&___nl__13,___get_global_const(371));
#line 373
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 373
c_rt_lib0clear(&___nl__13);
#line 373
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__12));
#line 373
c_rt_lib0clear(&___nl__12);
#line 374
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 374
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 374
label_240:
#line 374
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__12, ___nl__11));
#line 374
if(c_rt_lib0check_true_native(___nl__14)){ goto label_285;}
#line 375
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 375
c_rt_lib0move(&___nl__15, c_rt_lib0gt(___nl__12, ___nl__15));
#line 375
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 375
if(c_rt_lib0check_true_native(___nl__15)){ goto label_251;}
#line 375
c_rt_lib0move(&___nl__16,___get_global_const(271));
#line 375
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__16));
#line 375
c_rt_lib0clear(&___nl__16);
#line 375
goto label_251;
#line 375
label_251:
#line 375
c_rt_lib0clear(&___nl__15);
#line 376
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(188)));
#line 376
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__15, ___nl__12));
#line 376
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(198)));
#line 376
if(c_rt_lib0check_true_native(___nl__16)){ goto label_262;}
#line 378
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(5)));
#line 378
if(c_rt_lib0check_true_native(___nl__16)){ goto label_271;}
#line 378
c_rt_lib0move(&___nl__16,___get_global_const(91));
#line 378
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__15));
#line 378
nl_die_arg(___nl__16);
#line 376
label_262:
#line 377
c_rt_lib0move(&___nl__17,___get_global_const(395));
#line 377
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__12));
#line 377
c_rt_lib0move(&___nl__18,___get_global_const(259));
#line 377
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 377
c_rt_lib0clear(&___nl__18);
#line 377
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__17));
#line 377
c_rt_lib0clear(&___nl__17);
#line 378
goto label_280;
#line 378
label_271:
#line 379
c_rt_lib0move(&___nl__17,___get_global_const(396));
#line 379
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__12));
#line 379
c_rt_lib0move(&___nl__18,___get_global_const(259));
#line 379
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 379
c_rt_lib0clear(&___nl__18);
#line 379
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__17));
#line 379
c_rt_lib0clear(&___nl__17);
#line 380
goto label_280;
#line 380
label_280:
#line 380
c_rt_lib0clear(&___nl__15);
#line 380
c_rt_lib0clear(&___nl__16);
#line 381
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 381
goto label_240;
#line 381
label_285:
#line 381
c_rt_lib0clear(&___nl__12);
#line 381
c_rt_lib0clear(&___nl__13);
#line 381
c_rt_lib0clear(&___nl__14);
#line 382
c_rt_lib0move(&___nl__12,___get_global_const(397));
#line 382
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__12));
#line 382
c_rt_lib0clear(&___nl__12);
#line 382
c_rt_lib0clear(&___nl__10);
#line 382
c_rt_lib0clear(&___nl__11);
#line 383
goto label_295;
#line 383
label_295:
#line 383
c_rt_lib0clear(&___nl__9);
#line 384
c_rt_lib0move(&___nl__9, generator_c_priv0is_singleton_use_function(___nl__4));
#line 384
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 384
if(c_rt_lib0check_true_native(___nl__9)){ goto label_340;}
#line 385
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 385
c_rt_lib0move(&___nl__10, generator_c_priv0get_function_name(___nl__4, ___nl__11));
#line 385
c_rt_lib0clear(&___nl__11);
#line 386
c_rt_lib0move(&___nl__11, generator_c_priv0arg_t());
#line 386
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__10));
#line 386
c_rt_lib0move(&___nl__12,___get_global_const(398));
#line 386
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 386
c_rt_lib0clear(&___nl__12);
#line 386
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 386
c_rt_lib0clear(&___nl__11);
#line 387
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 387
c_rt_lib0move(&___nl__13,___get_global_const(388));
#line 387
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 387
c_rt_lib0move(&___nl__11, generator_c_priv0get_fun_name(___nl__12, ___nl__13, ___nl__14));
#line 387
c_rt_lib0clear(&___nl__14);
#line 387
c_rt_lib0clear(&___nl__13);
#line 387
c_rt_lib0clear(&___nl__12);
#line 387
c_rt_lib0move(&___nl__12,___get_global_const(389));
#line 387
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 387
c_rt_lib0clear(&___nl__12);
#line 387
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 387
c_rt_lib0clear(&___nl__11);
#line 388
c_rt_lib0move(&___nl__11,___get_global_const(394));
#line 388
c_rt_lib0move(&___nl__12, generator_c_priv0get_const_singleton(___ref___0, ___nl__10));
#line 388
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 388
c_rt_lib0clear(&___nl__12);
#line 388
c_rt_lib0move(&___nl__12,___get_global_const(399));
#line 388
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 388
c_rt_lib0clear(&___nl__12);
#line 388
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 388
c_rt_lib0clear(&___nl__11);
#line 389
c_rt_lib0move(&___nl__11, generator_c_priv0arg_t());
#line 389
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__10));
#line 389
c_rt_lib0move(&___nl__12,___get_global_const(400));
#line 389
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 389
c_rt_lib0clear(&___nl__12);
#line 389
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__11));
#line 389
c_rt_lib0clear(&___nl__11);
#line 389
c_rt_lib0clear(&___nl__10);
#line 390
goto label_347;
#line 390
label_340:
#line 391
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 391
c_rt_lib0move(&___nl__10, generator_c_priv0get_function_header(___nl__4, ___nl__11));
#line 391
c_rt_lib0clear(&___nl__11);
#line 391
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__10));
#line 391
c_rt_lib0clear(&___nl__10);
#line 392
goto label_347;
#line 392
label_347:
#line 392
c_rt_lib0clear(&___nl__9);
#line 393
c_rt_lib0delete(generator_c_priv0print_function_block(___ref___0, ___nl__4));
#line 394
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 394
goto label_195;
#line 394
label_352:
#line 394
c_rt_lib0clear(&___nl__3);
#line 394
c_rt_lib0clear(&___nl__4);
#line 394
c_rt_lib0clear(&___nl__5);
#line 394
c_rt_lib0clear(&___nl__6);
#line 394
c_rt_lib0clear(&___nl__7);
#line 394
c_rt_lib0clear(&___nl__8);
#line 395
c_rt_lib0delete(generator_c_priv0print_init_const(___ref___0));
#line 396
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(342)));
#line 396
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 396
label_362:
#line 396
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 396
if(c_rt_lib0check_true_native(___nl__4)){ goto label_375;}
#line 396
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 396
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 397
c_rt_lib0move(&___nl__7, generator_c_priv0get_include(___nl__4));
#line 397
c_rt_lib0move(&___nl__8, string0lf());
#line 397
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 397
c_rt_lib0clear(&___nl__8);
#line 397
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__7));
#line 397
c_rt_lib0clear(&___nl__7);
#line 398
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 398
goto label_362;
#line 398
label_375:
#line 398
c_rt_lib0clear(&___nl__3);
#line 398
c_rt_lib0clear(&___nl__4);
#line 398
c_rt_lib0clear(&___nl__5);
#line 398
c_rt_lib0clear(&___nl__6);
#line 399
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(341)));
#line 399
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__3));
#line 399
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 399
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(341), ___nl__4);
#line 399
c_rt_lib0clear(&___nl__3);
#line 399
c_rt_lib0clear(&___nl__4);
#line 399
c_rt_lib0clear(&___nl__2);
#line 399
c_rt_lib0clear(&___nl__1);
#line 399
return NULL;
}

ImmT generator_c_priv0print_init_const(ImmT * ___ref___0) {
generator_c_priv0__const__init();
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
#line 403
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(196)));
#line 403
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(337)));
#line 403
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(327)));
#line 404
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(196)));
#line 404
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(338)));
#line 404
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(327)));
#line 405
c_rt_lib0move(&___nl__3, array0len(___nl__1));
#line 406
c_rt_lib0move(&___nl__4, array0len(___nl__2));
#line 407
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(196)));
#line 407
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(339)));
#line 408
c_rt_lib0move(&___nl__6, c_rt_lib0add(___nl__3, ___nl__4));
#line 408
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__5));
#line 409
c_rt_lib0move(&___nl__7,___get_global_const(355));
#line 410
c_rt_lib0move(&___nl__8, generator_c_priv0arg_t());
#line 410
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 410
c_rt_lib0clear(&___nl__8);
#line 410
c_rt_lib0move(&___nl__8,___get_global_const(401));
#line 410
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 410
c_rt_lib0clear(&___nl__8);
#line 410
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 410
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__6));
#line 410
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 410
c_rt_lib0clear(&___nl__8);
#line 410
c_rt_lib0move(&___nl__8,___get_global_const(402));
#line 410
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 410
c_rt_lib0clear(&___nl__8);
#line 410
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 410
c_rt_lib0clear(&___nl__7);
#line 412
c_rt_lib0move(&___nl__7,___get_global_const(387));
#line 412
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 412
c_rt_lib0move(&___nl__10,___get_global_const(388));
#line 412
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 412
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_name(___nl__9, ___nl__10, ___nl__11));
#line 412
c_rt_lib0clear(&___nl__11);
#line 412
c_rt_lib0clear(&___nl__10);
#line 412
c_rt_lib0clear(&___nl__9);
#line 412
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 412
c_rt_lib0clear(&___nl__8);
#line 412
c_rt_lib0move(&___nl__8,___get_global_const(403));
#line 412
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 412
c_rt_lib0clear(&___nl__8);
#line 415
c_rt_lib0move(&___nl__8, c_rt_lib0add(___nl__3, ___nl__4));
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 415
c_rt_lib0clear(&___nl__8);
#line 415
c_rt_lib0move(&___nl__8,___get_global_const(404));
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 415
c_rt_lib0clear(&___nl__8);
#line 415
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 415
c_rt_lib0clear(&___nl__7);
#line 417
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 417
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 417
label_51:
#line 417
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__7, ___nl__3));
#line 417
if(c_rt_lib0check_true_native(___nl__9)){ goto label_71;}
#line 418
c_rt_lib0move(&___nl__10,___get_global_const(401));
#line 418
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__7));
#line 418
c_rt_lib0move(&___nl__11,___get_global_const(405));
#line 418
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 418
c_rt_lib0clear(&___nl__11);
#line 418
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__1, ___nl__7));
#line 418
c_rt_lib0move(&___nl__11, generator_c_priv0create_sim(___nl__12));
#line 418
c_rt_lib0clear(&___nl__12);
#line 418
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 418
c_rt_lib0clear(&___nl__11);
#line 418
c_rt_lib0move(&___nl__11,___get_global_const(360));
#line 418
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 418
c_rt_lib0clear(&___nl__11);
#line 418
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__10));
#line 418
c_rt_lib0clear(&___nl__10);
#line 419
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 419
goto label_51;
#line 419
label_71:
#line 419
c_rt_lib0clear(&___nl__7);
#line 419
c_rt_lib0clear(&___nl__8);
#line 419
c_rt_lib0clear(&___nl__9);
#line 420
c_rt_lib0move(&___nl__7,___get_global_const(406));
#line 420
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__3));
#line 421
c_rt_lib0move(&___nl__8,___get_global_const(407));
#line 421
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 421
c_rt_lib0clear(&___nl__8);
#line 421
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__6));
#line 421
c_rt_lib0move(&___nl__8,___get_global_const(408));
#line 421
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 421
c_rt_lib0clear(&___nl__8);
#line 422
c_rt_lib0move(&___nl__9,___get_global_const(409));
#line 422
c_rt_lib0move(&___nl__8, generator_c_priv0get_lib_fun(___nl__9));
#line 422
c_rt_lib0clear(&___nl__9);
#line 422
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 422
c_rt_lib0clear(&___nl__8);
#line 422
c_rt_lib0move(&___nl__8,___get_global_const(410));
#line 422
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 422
c_rt_lib0clear(&___nl__8);
#line 422
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__6));
#line 422
c_rt_lib0move(&___nl__8,___get_global_const(411));
#line 422
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 422
c_rt_lib0clear(&___nl__8);
#line 422
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 422
c_rt_lib0clear(&___nl__7);
#line 424
c_rt_lib0move(&___nl__7, generator_c_priv0arg_t());
#line 424
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 424
c_rt_lib0move(&___nl__10,___get_global_const(390));
#line 424
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 424
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_name(___nl__9, ___nl__10, ___nl__11));
#line 424
c_rt_lib0clear(&___nl__11);
#line 424
c_rt_lib0clear(&___nl__10);
#line 424
c_rt_lib0clear(&___nl__9);
#line 424
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 424
c_rt_lib0clear(&___nl__8);
#line 424
c_rt_lib0move(&___nl__8,___get_global_const(412));
#line 424
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 424
c_rt_lib0clear(&___nl__8);
#line 425
c_rt_lib0move(&___nl__8, generator_c_priv0arg_t());
#line 425
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 425
c_rt_lib0clear(&___nl__8);
#line 425
c_rt_lib0move(&___nl__8,___get_global_const(368));
#line 425
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 425
c_rt_lib0clear(&___nl__8);
#line 426
c_rt_lib0move(&___nl__9,___get_global_const(369));
#line 426
c_rt_lib0move(&___nl__11,___get_global_const(370));
#line 426
c_rt_lib0move(&___nl__12,___get_global_const(413));
#line 426
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__11, ___nl__12));
#line 426
c_rt_lib0clear(&___nl__11);
#line 426
c_rt_lib0clear(&___nl__12);
#line 426
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_lib(___nl__9, ___nl__10));
#line 426
c_rt_lib0clear(&___nl__10);
#line 426
c_rt_lib0clear(&___nl__9);
#line 426
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 426
c_rt_lib0clear(&___nl__8);
#line 426
c_rt_lib0move(&___nl__8,___get_global_const(373));
#line 426
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 426
c_rt_lib0clear(&___nl__8);
#line 426
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 426
c_rt_lib0clear(&___nl__7);
#line 429
c_rt_lib0move(&___nl__7, generator_c_priv0arg_t());
#line 429
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 429
c_rt_lib0move(&___nl__10,___get_global_const(380));
#line 429
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 429
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_name(___nl__9, ___nl__10, ___nl__11));
#line 429
c_rt_lib0clear(&___nl__11);
#line 429
c_rt_lib0clear(&___nl__10);
#line 429
c_rt_lib0clear(&___nl__9);
#line 429
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 429
c_rt_lib0clear(&___nl__8);
#line 429
c_rt_lib0move(&___nl__8,___get_global_const(414));
#line 429
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 429
c_rt_lib0clear(&___nl__8);
#line 429
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__3));
#line 430
c_rt_lib0move(&___nl__8,___get_global_const(415));
#line 430
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 430
c_rt_lib0clear(&___nl__8);
#line 430
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 430
c_rt_lib0clear(&___nl__7);
#line 432
c_rt_lib0move(&___nl__7, array0len(___nl__2));
#line 432
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 432
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 432
label_155:
#line 432
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__8, ___nl__7));
#line 432
if(c_rt_lib0check_true_native(___nl__10)){ goto label_185;}
#line 433
c_rt_lib0move(&___nl__11,___get_global_const(416));
#line 433
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 433
c_rt_lib0move(&___nl__12,___get_global_const(417));
#line 433
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 433
c_rt_lib0clear(&___nl__12);
#line 433
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 433
c_rt_lib0clear(&___nl__11);
#line 434
c_rt_lib0move(&___nl__11,___get_global_const(418));
#line 434
c_rt_lib0move(&___nl__12, c_rt_lib0add(___nl__8, ___nl__3));
#line 434
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 434
c_rt_lib0clear(&___nl__12);
#line 434
c_rt_lib0move(&___nl__12,___get_global_const(405));
#line 434
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 434
c_rt_lib0clear(&___nl__12);
#line 434
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__2, ___nl__8));
#line 434
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 434
c_rt_lib0clear(&___nl__12);
#line 434
c_rt_lib0move(&___nl__12,___get_global_const(419));
#line 434
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 434
c_rt_lib0clear(&___nl__12);
#line 434
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 434
c_rt_lib0clear(&___nl__11);
#line 435
c_rt_lib0move(&___nl__11,___get_global_const(420));
#line 435
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 435
c_rt_lib0clear(&___nl__11);
#line 436
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 436
goto label_155;
#line 436
label_185:
#line 436
c_rt_lib0clear(&___nl__7);
#line 436
c_rt_lib0clear(&___nl__8);
#line 436
c_rt_lib0clear(&___nl__9);
#line 436
c_rt_lib0clear(&___nl__10);
#line 437
c_rt_lib0move(&___nl__7,___get_global_const(421));
#line 440
c_rt_lib0move(&___nl__8, generator_c_priv0arg_t());
#line 440
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 440
c_rt_lib0clear(&___nl__8);
#line 440
c_rt_lib0move(&___nl__8,___get_global_const(368));
#line 440
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 440
c_rt_lib0clear(&___nl__8);
#line 441
c_rt_lib0move(&___nl__9,___get_global_const(369));
#line 441
c_rt_lib0move(&___nl__11,___get_global_const(370));
#line 441
c_rt_lib0move(&___nl__12,___get_global_const(422));
#line 441
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__3));
#line 441
c_rt_lib0move(&___nl__13,___get_global_const(259));
#line 441
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 441
c_rt_lib0clear(&___nl__13);
#line 441
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__11, ___nl__12));
#line 441
c_rt_lib0clear(&___nl__11);
#line 441
c_rt_lib0clear(&___nl__12);
#line 441
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_lib(___nl__9, ___nl__10));
#line 441
c_rt_lib0clear(&___nl__10);
#line 441
c_rt_lib0clear(&___nl__9);
#line 441
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 441
c_rt_lib0clear(&___nl__8);
#line 441
c_rt_lib0move(&___nl__8,___get_global_const(373));
#line 441
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 441
c_rt_lib0clear(&___nl__8);
#line 441
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 441
c_rt_lib0clear(&___nl__7);
#line 441
c_rt_lib0clear(&___nl__1);
#line 441
c_rt_lib0clear(&___nl__2);
#line 441
c_rt_lib0clear(&___nl__3);
#line 441
c_rt_lib0clear(&___nl__4);
#line 441
c_rt_lib0clear(&___nl__5);
#line 441
c_rt_lib0clear(&___nl__6);
#line 441
return NULL;
}

ImmT generator_c_priv0print_function_block(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 447
c_rt_lib0move(&___nl__2,___get_global_const(423));
#line 447
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 447
c_rt_lib0clear(&___nl__2);
#line 448
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(188)));
#line 448
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 448
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(344), ___nl__3);
#line 448
c_rt_lib0clear(&___nl__2);
#line 448
c_rt_lib0clear(&___nl__3);
#line 449
c_rt_lib0delete(generator_c_priv0move_args_to_register(___ref___0));
#line 450
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 450
c_rt_lib0move(&___nl__4,___get_global_const(388));
#line 450
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 450
c_rt_lib0move(&___nl__2, generator_c_priv0get_fun_name(___nl__3, ___nl__4, ___nl__5));
#line 450
c_rt_lib0clear(&___nl__5);
#line 450
c_rt_lib0clear(&___nl__4);
#line 450
c_rt_lib0clear(&___nl__3);
#line 450
c_rt_lib0move(&___nl__3,___get_global_const(389));
#line 450
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 450
c_rt_lib0clear(&___nl__3);
#line 450
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 450
c_rt_lib0clear(&___nl__2);
#line 451
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(188)));
#line 451
c_rt_lib0move(&___nl__2, array0len(___nl__3));
#line 451
c_rt_lib0clear(&___nl__3);
#line 451
label_24:
#line 451
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(189)));
#line 451
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 451
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 451
if(c_rt_lib0check_true_native(___nl__3)){ goto label_42;}
#line 452
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 452
c_rt_lib0move(&___nl__5, generator_c_priv0get_reg(___ref___0, ___nl__2));
#line 452
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 452
c_rt_lib0clear(&___nl__5);
#line 452
c_rt_lib0move(&___nl__5,___get_global_const(424));
#line 452
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 452
c_rt_lib0clear(&___nl__5);
#line 452
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__4));
#line 452
c_rt_lib0clear(&___nl__4);
#line 451
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 451
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__4));
#line 451
c_rt_lib0clear(&___nl__4);
#line 453
goto label_24;
#line 453
label_42:
#line 453
c_rt_lib0clear(&___nl__2);
#line 453
c_rt_lib0clear(&___nl__3);
#line 454
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(187)));
#line 454
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 454
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 454
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 454
label_49:
#line 454
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 454
if(c_rt_lib0check_true_native(___nl__7)){ goto label_213;}
#line 454
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 455
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(200)));
#line 455
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(41)));
#line 455
if(c_rt_lib0check_true_native(___nl__9)){ goto label_61;}
#line 457
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(196)));
#line 457
if(c_rt_lib0check_true_native(___nl__9)){ goto label_64;}
#line 457
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 457
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 457
nl_die_arg(___nl__9);
#line 455
label_61:
#line 456
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 457
goto label_207;
#line 457
label_64:
#line 457
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(196)));
#line 458
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(201)));
#line 458
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(199)));
#line 458
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 458
if(c_rt_lib0check_true_native(___nl__11)){ goto label_89;}
#line 459
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(201)));
#line 459
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(199)));
#line 459
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(198)));
#line 460
c_rt_lib0move(&___nl__13, nl0is_sim(___nl__12));
#line 460
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 460
if(c_rt_lib0check_true_native(___nl__13)){ goto label_85;}
#line 461
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 462
c_rt_lib0clear(&___nl__8);
#line 462
c_rt_lib0clear(&___nl__9);
#line 462
c_rt_lib0clear(&___nl__10);
#line 462
c_rt_lib0clear(&___nl__11);
#line 462
c_rt_lib0clear(&___nl__12);
#line 462
c_rt_lib0clear(&___nl__13);
#line 462
goto label_210;
#line 463
goto label_85;
#line 463
label_85:
#line 463
c_rt_lib0clear(&___nl__13);
#line 463
c_rt_lib0clear(&___nl__12);
#line 464
goto label_89;
#line 464
label_89:
#line 464
c_rt_lib0clear(&___nl__11);
#line 465
c_rt_lib0move(&___nl__11, array0len(___nl__10));
#line 466
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 466
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__11, ___nl__12));
#line 466
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 466
if(c_rt_lib0check_true_native(___nl__12)){ goto label_104;}
#line 467
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 468
c_rt_lib0clear(&___nl__8);
#line 468
c_rt_lib0clear(&___nl__9);
#line 468
c_rt_lib0clear(&___nl__10);
#line 468
c_rt_lib0clear(&___nl__11);
#line 468
c_rt_lib0clear(&___nl__12);
#line 468
goto label_210;
#line 469
goto label_202;
#line 469
label_104:
#line 470
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(196)));
#line 470
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(339)));
#line 471
c_rt_lib0move(&___nl__14,___get_global_const(425));
#line 471
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__13));
#line 471
c_rt_lib0move(&___nl__15,___get_global_const(426));
#line 471
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 471
c_rt_lib0clear(&___nl__15);
#line 471
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__14));
#line 471
c_rt_lib0clear(&___nl__14);
#line 472
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 473
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 473
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 473
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__10));
#line 473
label_118:
#line 473
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 473
if(c_rt_lib0check_true_native(___nl__18)){ goto label_145;}
#line 473
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__10, ___nl__15));
#line 474
c_rt_lib0move(&___nl__20,___get_global_const(369));
#line 474
c_rt_lib0move(&___nl__22,___get_global_const(427));
#line 474
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__13));
#line 474
c_rt_lib0move(&___nl__23,___get_global_const(259));
#line 474
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__23));
#line 474
c_rt_lib0clear(&___nl__23);
#line 474
c_rt_lib0move(&___nl__23, generator_c_priv0get_reg(___ref___0, ___nl__14));
#line 474
c_rt_lib0move(&___nl__21, c_rt_lib0array_mk(2, ___nl__22, ___nl__23));
#line 474
c_rt_lib0clear(&___nl__22);
#line 474
c_rt_lib0clear(&___nl__23);
#line 474
c_rt_lib0move(&___nl__19, generator_c_priv0get_fun_lib(___nl__20, ___nl__21));
#line 474
c_rt_lib0clear(&___nl__21);
#line 474
c_rt_lib0clear(&___nl__20);
#line 474
c_rt_lib0move(&___nl__20,___get_global_const(360));
#line 474
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 474
c_rt_lib0clear(&___nl__20);
#line 474
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__19));
#line 474
c_rt_lib0clear(&___nl__19);
#line 475
c_rt_lib0move(&___nl__19,___get_global_const(1));
#line 475
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__19));
#line 475
c_rt_lib0clear(&___nl__19);
#line 476
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 476
goto label_118;
#line 476
label_145:
#line 476
c_rt_lib0clear(&___nl__14);
#line 476
c_rt_lib0clear(&___nl__15);
#line 476
c_rt_lib0clear(&___nl__16);
#line 476
c_rt_lib0clear(&___nl__17);
#line 476
c_rt_lib0clear(&___nl__18);
#line 477
c_rt_lib0move(&___nl__14,___get_global_const(253));
#line 477
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__14));
#line 477
c_rt_lib0clear(&___nl__14);
#line 478
c_rt_lib0move(&___nl__13, c_rt_lib0sub_mod(___nl__13, ___nl__11));
#line 479
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 479
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 479
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__10));
#line 479
label_158:
#line 479
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 479
if(c_rt_lib0check_true_native(___nl__18)){ goto label_185;}
#line 479
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__10, ___nl__15));
#line 480
c_rt_lib0move(&___nl__20,___get_global_const(369));
#line 480
c_rt_lib0move(&___nl__22, generator_c_priv0get_reg_ref(___ref___0, ___nl__14));
#line 480
c_rt_lib0move(&___nl__23,___get_global_const(428));
#line 480
c_rt_lib0move(&___nl__23, c_rt_lib0concat_add(___nl__23, ___nl__13));
#line 480
c_rt_lib0move(&___nl__24,___get_global_const(259));
#line 480
c_rt_lib0move(&___nl__23, c_rt_lib0concat_add(___nl__23, ___nl__24));
#line 480
c_rt_lib0clear(&___nl__24);
#line 480
c_rt_lib0move(&___nl__21, c_rt_lib0array_mk(2, ___nl__22, ___nl__23));
#line 480
c_rt_lib0clear(&___nl__22);
#line 480
c_rt_lib0clear(&___nl__23);
#line 480
c_rt_lib0move(&___nl__19, generator_c_priv0get_fun_lib(___nl__20, ___nl__21));
#line 480
c_rt_lib0clear(&___nl__21);
#line 480
c_rt_lib0clear(&___nl__20);
#line 481
c_rt_lib0move(&___nl__20,___get_global_const(360));
#line 481
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 481
c_rt_lib0clear(&___nl__20);
#line 481
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__19));
#line 481
c_rt_lib0clear(&___nl__19);
#line 482
c_rt_lib0move(&___nl__19,___get_global_const(1));
#line 482
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__19));
#line 482
c_rt_lib0clear(&___nl__19);
#line 483
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 483
goto label_158;
#line 483
label_185:
#line 483
c_rt_lib0clear(&___nl__14);
#line 483
c_rt_lib0clear(&___nl__15);
#line 483
c_rt_lib0clear(&___nl__16);
#line 483
c_rt_lib0clear(&___nl__17);
#line 483
c_rt_lib0clear(&___nl__18);
#line 484
c_rt_lib0move(&___nl__14,___get_global_const(196));
#line 484
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(*___ref___0, ___nl__14));
#line 484
c_rt_lib0copy(&___nl__15, ___nl__13);
#line 484
c_rt_lib0hash_set_value_dec(&___nl__14, ___get_global_const(339), ___nl__15);
#line 484
c_rt_lib0move(&___nl__16,___get_global_const(196));
#line 484
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__16, ___nl__14));
#line 484
c_rt_lib0clear(&___nl__16);
#line 484
c_rt_lib0clear(&___nl__14);
#line 484
c_rt_lib0clear(&___nl__15);
#line 484
c_rt_lib0clear(&___nl__13);
#line 485
goto label_202;
#line 485
label_202:
#line 485
c_rt_lib0clear(&___nl__12);
#line 485
c_rt_lib0clear(&___nl__11);
#line 485
c_rt_lib0clear(&___nl__10);
#line 486
goto label_207;
#line 486
label_207:
#line 486
c_rt_lib0clear(&___nl__8);
#line 486
c_rt_lib0clear(&___nl__9);
#line 486
label_210:
#line 487
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 487
goto label_49;
#line 487
label_213:
#line 487
c_rt_lib0clear(&___nl__2);
#line 487
c_rt_lib0clear(&___nl__3);
#line 487
c_rt_lib0clear(&___nl__4);
#line 487
c_rt_lib0clear(&___nl__5);
#line 487
c_rt_lib0clear(&___nl__6);
#line 487
c_rt_lib0clear(&___nl__7);
#line 488
c_rt_lib0move(&___nl__2,___get_global_const(253));
#line 488
c_rt_lib0move(&___nl__3, string0lf());
#line 488
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 488
c_rt_lib0clear(&___nl__3);
#line 488
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 488
c_rt_lib0clear(&___nl__2);
#line 488
c_rt_lib0clear(&___nl__1);
#line 488
return NULL;
}

ImmT generator_c_priv0is_singleton_use_function(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
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
#line 492
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 492
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 492
c_rt_lib0clear(&___nl__2);
#line 492
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 492
c_rt_lib0move(&___nl__1, c_rt_lib0gt(___nl__1, ___nl__2));
#line 492
c_rt_lib0clear(&___nl__2);
#line 492
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 492
if(c_rt_lib0check_true_native(___nl__1)){ goto label_14;}
#line 492
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 492
c_rt_lib0clear(&___nl__0);
#line 492
c_rt_lib0clear(&___nl__1);
#line 492
return ___nl__2;
#line 492
c_rt_lib0clear(&___nl__2);
#line 492
goto label_14;
#line 492
label_14:
#line 492
c_rt_lib0clear(&___nl__1);
#line 493
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(200)));
#line 493
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(168)));
#line 494
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 496
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(187)));
#line 496
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 496
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 496
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 496
label_23:
#line 496
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 496
if(c_rt_lib0check_true_native(___nl__9)){ goto label_213;}
#line 496
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 497
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 498
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 498
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(206)));
#line 498
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 498
if(c_rt_lib0check_true_native(___nl__11)){ goto label_72;}
#line 499
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 499
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(206)));
#line 500
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(224)));
#line 500
c_rt_lib0move(&___nl__14,___get_global_const(429));
#line 500
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__13, ___nl__14));
#line 500
c_rt_lib0clear(&___nl__14);
#line 500
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 500
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 500
if(c_rt_lib0check_true_native(___nl__13)){ goto label_47;}
#line 500
c_rt_lib0clear(&___nl__10);
#line 500
c_rt_lib0clear(&___nl__11);
#line 500
c_rt_lib0clear(&___nl__12);
#line 500
c_rt_lib0clear(&___nl__13);
#line 500
goto label_210;
#line 500
goto label_47;
#line 500
label_47:
#line 500
c_rt_lib0clear(&___nl__13);
#line 501
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(222)));
#line 501
c_rt_lib0move(&___nl__14,___get_global_const(338));
#line 501
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__13, ___nl__14));
#line 501
c_rt_lib0clear(&___nl__14);
#line 501
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 501
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 501
if(c_rt_lib0check_true_native(___nl__13)){ goto label_62;}
#line 501
c_rt_lib0clear(&___nl__10);
#line 501
c_rt_lib0clear(&___nl__11);
#line 501
c_rt_lib0clear(&___nl__12);
#line 501
c_rt_lib0clear(&___nl__13);
#line 501
goto label_210;
#line 501
goto label_62;
#line 501
label_62:
#line 501
c_rt_lib0clear(&___nl__13);
#line 502
c_rt_lib0move(&___nl__13, c_rt_lib0get_true());
#line 502
c_rt_lib0copy(&___nl__2, ___nl__13);
#line 502
c_rt_lib0clear(&___nl__13);
#line 503
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(197)));
#line 503
c_rt_lib0copy(&___nl__3, ___nl__13);
#line 503
c_rt_lib0clear(&___nl__13);
#line 503
c_rt_lib0clear(&___nl__12);
#line 504
goto label_207;
#line 504
label_72:
#line 504
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 504
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(90)));
#line 504
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 504
if(c_rt_lib0check_true_native(___nl__11)){ goto label_171;}
#line 505
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 505
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(90)));
#line 506
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 506
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(198)));
#line 506
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 506
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 506
if(c_rt_lib0check_true_native(___nl__13)){ goto label_102;}
#line 506
c_rt_lib0move(&___nl__14, c_rt_lib0get_false());
#line 506
c_rt_lib0clear(&___nl__0);
#line 506
c_rt_lib0clear(&___nl__1);
#line 506
c_rt_lib0clear(&___nl__2);
#line 506
c_rt_lib0clear(&___nl__3);
#line 506
c_rt_lib0clear(&___nl__4);
#line 506
c_rt_lib0clear(&___nl__5);
#line 506
c_rt_lib0clear(&___nl__6);
#line 506
c_rt_lib0clear(&___nl__7);
#line 506
c_rt_lib0clear(&___nl__8);
#line 506
c_rt_lib0clear(&___nl__9);
#line 506
c_rt_lib0clear(&___nl__10);
#line 506
c_rt_lib0clear(&___nl__11);
#line 506
c_rt_lib0clear(&___nl__12);
#line 506
c_rt_lib0clear(&___nl__13);
#line 506
return ___nl__14;
#line 506
c_rt_lib0clear(&___nl__14);
#line 506
goto label_102;
#line 506
label_102:
#line 506
c_rt_lib0clear(&___nl__13);
#line 507
c_rt_lib0copy(&___nl__13, ___nl__1);
#line 507
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 507
if(c_rt_lib0check_true_native(___nl__13)){ goto label_125;}
#line 507
c_rt_lib0move(&___nl__14, c_rt_lib0get_true());
#line 507
c_rt_lib0clear(&___nl__0);
#line 507
c_rt_lib0clear(&___nl__1);
#line 507
c_rt_lib0clear(&___nl__2);
#line 507
c_rt_lib0clear(&___nl__3);
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
c_rt_lib0clear(&___nl__12);
#line 507
c_rt_lib0clear(&___nl__13);
#line 507
return ___nl__14;
#line 507
c_rt_lib0clear(&___nl__14);
#line 507
goto label_125;
#line 507
label_125:
#line 507
c_rt_lib0clear(&___nl__13);
#line 508
c_rt_lib0copy(&___nl__13, ___nl__2);
#line 508
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 508
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 508
if(c_rt_lib0check_true_native(___nl__13)){ goto label_149;}
#line 508
c_rt_lib0move(&___nl__14, c_rt_lib0get_false());
#line 508
c_rt_lib0clear(&___nl__0);
#line 508
c_rt_lib0clear(&___nl__1);
#line 508
c_rt_lib0clear(&___nl__2);
#line 508
c_rt_lib0clear(&___nl__3);
#line 508
c_rt_lib0clear(&___nl__4);
#line 508
c_rt_lib0clear(&___nl__5);
#line 508
c_rt_lib0clear(&___nl__6);
#line 508
c_rt_lib0clear(&___nl__7);
#line 508
c_rt_lib0clear(&___nl__8);
#line 508
c_rt_lib0clear(&___nl__9);
#line 508
c_rt_lib0clear(&___nl__10);
#line 508
c_rt_lib0clear(&___nl__11);
#line 508
c_rt_lib0clear(&___nl__12);
#line 508
c_rt_lib0clear(&___nl__13);
#line 508
return ___nl__14;
#line 508
c_rt_lib0clear(&___nl__14);
#line 508
goto label_149;
#line 508
label_149:
#line 508
c_rt_lib0clear(&___nl__13);
#line 509
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 509
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__13, ___get_global_const(198)));
#line 509
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__13, ___nl__3));
#line 509
c_rt_lib0clear(&___nl__0);
#line 509
c_rt_lib0clear(&___nl__1);
#line 509
c_rt_lib0clear(&___nl__2);
#line 509
c_rt_lib0clear(&___nl__3);
#line 509
c_rt_lib0clear(&___nl__4);
#line 509
c_rt_lib0clear(&___nl__5);
#line 509
c_rt_lib0clear(&___nl__6);
#line 509
c_rt_lib0clear(&___nl__7);
#line 509
c_rt_lib0clear(&___nl__8);
#line 509
c_rt_lib0clear(&___nl__9);
#line 509
c_rt_lib0clear(&___nl__10);
#line 509
c_rt_lib0clear(&___nl__11);
#line 509
c_rt_lib0clear(&___nl__12);
#line 509
return ___nl__13;
#line 509
c_rt_lib0clear(&___nl__13);
#line 509
c_rt_lib0clear(&___nl__12);
#line 510
goto label_207;
#line 510
label_171:
#line 510
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 510
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(218)));
#line 510
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 510
if(c_rt_lib0check_true_native(___nl__11)){ goto label_177;}
#line 511
goto label_207;
#line 511
label_177:
#line 511
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 511
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(221)));
#line 511
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 511
if(c_rt_lib0check_true_native(___nl__11)){ goto label_183;}
#line 512
goto label_207;
#line 512
label_183:
#line 513
c_rt_lib0copy(&___nl__12, ___nl__2);
#line 513
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 513
if(c_rt_lib0check_true_native(___nl__12)){ goto label_204;}
#line 513
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 513
c_rt_lib0clear(&___nl__0);
#line 513
c_rt_lib0clear(&___nl__1);
#line 513
c_rt_lib0clear(&___nl__2);
#line 513
c_rt_lib0clear(&___nl__3);
#line 513
c_rt_lib0clear(&___nl__4);
#line 513
c_rt_lib0clear(&___nl__5);
#line 513
c_rt_lib0clear(&___nl__6);
#line 513
c_rt_lib0clear(&___nl__7);
#line 513
c_rt_lib0clear(&___nl__8);
#line 513
c_rt_lib0clear(&___nl__9);
#line 513
c_rt_lib0clear(&___nl__10);
#line 513
c_rt_lib0clear(&___nl__11);
#line 513
c_rt_lib0clear(&___nl__12);
#line 513
return ___nl__13;
#line 513
c_rt_lib0clear(&___nl__13);
#line 513
goto label_204;
#line 513
label_204:
#line 513
c_rt_lib0clear(&___nl__12);
#line 514
goto label_207;
#line 514
label_207:
#line 514
c_rt_lib0clear(&___nl__11);
#line 514
c_rt_lib0clear(&___nl__10);
#line 514
label_210:
#line 515
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 515
goto label_23;
#line 515
label_213:
#line 515
c_rt_lib0clear(&___nl__4);
#line 515
c_rt_lib0clear(&___nl__5);
#line 515
c_rt_lib0clear(&___nl__6);
#line 515
c_rt_lib0clear(&___nl__7);
#line 515
c_rt_lib0clear(&___nl__8);
#line 515
c_rt_lib0clear(&___nl__9);
#line 516
c_rt_lib0move(&___nl__4, c_rt_lib0get_false());
#line 516
c_rt_lib0clear(&___nl__0);
#line 516
c_rt_lib0clear(&___nl__1);
#line 516
c_rt_lib0clear(&___nl__2);
#line 516
c_rt_lib0clear(&___nl__3);
#line 516
return ___nl__4;
#line 516
c_rt_lib0clear(&___nl__4);
#line 516
c_rt_lib0clear(&___nl__1);
#line 516
c_rt_lib0clear(&___nl__2);
#line 516
c_rt_lib0clear(&___nl__3);
#line 516
c_rt_lib0clear(&___nl__0);
#line 516
return NULL;
}

ImmT generator_c_priv0move_args_to_register(ImmT * ___ref___0) {
generator_c_priv0__const__init();
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
#line 520
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 520
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 520
c_rt_lib0clear(&___nl__2);
#line 520
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 520
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 520
label_5:
#line 520
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 520
if(c_rt_lib0check_true_native(___nl__4)){ goto label_38;}
#line 521
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 521
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__2));
#line 521
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(198)));
#line 521
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 524
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 524
if(c_rt_lib0check_true_native(___nl__6)){ goto label_31;}
#line 524
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 524
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 524
nl_die_arg(___nl__6);
#line 521
label_17:
#line 522
c_rt_lib0move(&___nl__8,___get_global_const(430));
#line 522
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__2));
#line 522
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 522
c_rt_lib0clear(&___nl__10);
#line 522
c_rt_lib0move(&___nl__7, generator_c_priv0get_fun_lib(___nl__8, ___nl__9));
#line 522
c_rt_lib0clear(&___nl__9);
#line 522
c_rt_lib0clear(&___nl__8);
#line 522
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 522
c_rt_lib0clear(&___nl__7);
#line 523
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 523
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 523
c_rt_lib0clear(&___nl__7);
#line 524
goto label_33;
#line 524
label_31:
#line 525
goto label_33;
#line 525
label_33:
#line 525
c_rt_lib0clear(&___nl__5);
#line 525
c_rt_lib0clear(&___nl__6);
#line 526
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 526
goto label_5;
#line 526
label_38:
#line 526
c_rt_lib0clear(&___nl__1);
#line 526
c_rt_lib0clear(&___nl__2);
#line 526
c_rt_lib0clear(&___nl__3);
#line 526
c_rt_lib0clear(&___nl__4);
#line 526
return NULL;
}

ImmT generator_c_priv0move_register_to_ref_args(ImmT * ___ref___0) {
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 530
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 530
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 530
c_rt_lib0clear(&___nl__2);
#line 530
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 530
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 530
label_5:
#line 530
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 530
if(c_rt_lib0check_true_native(___nl__4)){ goto label_26;}
#line 531
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 531
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__2));
#line 531
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(198)));
#line 531
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 532
if(c_rt_lib0check_true_native(___nl__6)){ goto label_19;}
#line 532
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 532
nl_die_arg(___nl__6);
#line 531
label_17:
#line 532
goto label_21;
#line 532
label_19:
#line 533
goto label_21;
#line 533
label_21:
#line 533
c_rt_lib0clear(&___nl__5);
#line 533
c_rt_lib0clear(&___nl__6);
#line 534
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 534
goto label_5;
#line 534
label_26:
#line 534
c_rt_lib0clear(&___nl__1);
#line 534
c_rt_lib0clear(&___nl__2);
#line 534
c_rt_lib0clear(&___nl__3);
#line 534
c_rt_lib0clear(&___nl__4);
#line 534
return NULL;
}

ImmT generator_c_priv0get_fun_lib(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 538
c_rt_lib0move(&___nl__2, generator_c_priv0get_lib_fun(___nl__0));
#line 538
c_rt_lib0move(&___nl__3,___get_global_const(371));
#line 538
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 538
c_rt_lib0clear(&___nl__3);
#line 539
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 540
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 540
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 540
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__1));
#line 540
label_8:
#line 540
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 540
if(c_rt_lib0check_true_native(___nl__8)){ goto label_29;}
#line 540
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 541
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 541
c_rt_lib0move(&___nl__9, c_rt_lib0num_eq(___nl__9, ___nl__3));
#line 541
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 541
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 541
if(c_rt_lib0check_true_native(___nl__9)){ goto label_21;}
#line 541
c_rt_lib0move(&___nl__10,___get_global_const(271));
#line 541
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__10));
#line 541
c_rt_lib0clear(&___nl__10);
#line 541
goto label_21;
#line 541
label_21:
#line 541
c_rt_lib0clear(&___nl__9);
#line 542
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 543
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 543
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 543
c_rt_lib0clear(&___nl__9);
#line 544
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 544
goto label_8;
#line 544
label_29:
#line 544
c_rt_lib0clear(&___nl__4);
#line 544
c_rt_lib0clear(&___nl__5);
#line 544
c_rt_lib0clear(&___nl__6);
#line 544
c_rt_lib0clear(&___nl__7);
#line 544
c_rt_lib0clear(&___nl__8);
#line 545
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 545
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__2, ___nl__4));
#line 545
c_rt_lib0clear(&___nl__0);
#line 545
c_rt_lib0clear(&___nl__1);
#line 545
c_rt_lib0clear(&___nl__2);
#line 545
c_rt_lib0clear(&___nl__3);
#line 545
return ___nl__4;
#line 545
c_rt_lib0clear(&___nl__4);
#line 545
c_rt_lib0clear(&___nl__2);
#line 545
c_rt_lib0clear(&___nl__3);
#line 545
c_rt_lib0clear(&___nl__0);
#line 545
c_rt_lib0clear(&___nl__1);
#line 545
return NULL;
}

ImmT generator_c_priv0get_module_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 549
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 549
c_rt_lib0move(&___nl__3,___get_global_const(431));
#line 549
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 549
c_rt_lib0clear(&___nl__3);
#line 549
c_rt_lib0clear(&___nl__2);
#line 549
c_rt_lib0clear(&___nl__0);
#line 549
return ___nl__1;
#line 549
c_rt_lib0clear(&___nl__1);
#line 549
c_rt_lib0clear(&___nl__0);
#line 549
return NULL;
}

ImmT generator_c_priv0get_fun_name(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
generator_c_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 553
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 553
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__0, ___nl__3));
#line 553
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 553
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 553
c_rt_lib0move(&___nl__4,___get_global_const(223));
#line 553
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__2, ___nl__4));
#line 553
c_rt_lib0copy(&___nl__0, ___nl__4);
#line 553
c_rt_lib0clear(&___nl__4);
#line 553
goto label_9;
#line 553
label_9:
#line 553
c_rt_lib0clear(&___nl__3);
#line 554
c_rt_lib0move(&___nl__3, generator_c_priv0get_module_name(___nl__0));
#line 554
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 554
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 554
c_rt_lib0clear(&___nl__4);
#line 554
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 554
c_rt_lib0move(&___nl__6,___get_global_const(431));
#line 554
c_rt_lib0move(&___nl__4, string0replace(___nl__1, ___nl__5, ___nl__6));
#line 554
c_rt_lib0clear(&___nl__6);
#line 554
c_rt_lib0clear(&___nl__5);
#line 554
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 554
c_rt_lib0clear(&___nl__4);
#line 554
c_rt_lib0clear(&___nl__0);
#line 554
c_rt_lib0clear(&___nl__1);
#line 554
c_rt_lib0clear(&___nl__2);
#line 554
return ___nl__3;
#line 554
c_rt_lib0clear(&___nl__3);
#line 554
c_rt_lib0clear(&___nl__0);
#line 554
c_rt_lib0clear(&___nl__1);
#line 554
c_rt_lib0clear(&___nl__2);
#line 554
return NULL;
}

ImmT generator_c_priv0get_lib_fun(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 558
c_rt_lib0move(&___nl__2,___get_global_const(225));
#line 558
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 558
c_rt_lib0move(&___nl__1, generator_c_priv0get_fun_name(___nl__2, ___nl__0, ___nl__3));
#line 558
c_rt_lib0clear(&___nl__3);
#line 558
c_rt_lib0clear(&___nl__2);
#line 558
c_rt_lib0clear(&___nl__0);
#line 558
return ___nl__1;
#line 558
c_rt_lib0clear(&___nl__1);
#line 558
c_rt_lib0clear(&___nl__0);
#line 558
return NULL;
}

ImmT generator_c_priv0generate_imm(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 562
c_rt_lib0move(&___nl__2, nl0is_hash(___nl__1));
#line 562
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 562
if(c_rt_lib0check_true_native(___nl__2)){ goto label_40;}
#line 563
c_rt_lib0move(&___nl__4,___get_global_const(432));
#line 563
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 563
c_rt_lib0clear(&___nl__4);
#line 563
c_rt_lib0move(&___nl__4,___get_global_const(371));
#line 563
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 563
c_rt_lib0clear(&___nl__4);
#line 563
c_rt_lib0move(&___nl__4, hash0size(___nl__1));
#line 563
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 563
c_rt_lib0clear(&___nl__4);
#line 563
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 563
c_rt_lib0clear(&___nl__3);
#line 564
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__1));
#line 564
label_15:
#line 564
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 564
if(c_rt_lib0check_true_native(___nl__3)){ goto label_32;}
#line 564
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 564
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__1, ___nl__3));
#line 565
c_rt_lib0move(&___nl__6,___get_global_const(271));
#line 565
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 565
c_rt_lib0clear(&___nl__6);
#line 566
c_rt_lib0move(&___nl__6, generator_c_priv0get_const_sim(___ref___0, ___nl__3));
#line 566
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 566
c_rt_lib0clear(&___nl__6);
#line 567
c_rt_lib0move(&___nl__6,___get_global_const(271));
#line 567
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 567
c_rt_lib0clear(&___nl__6);
#line 568
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__4));
#line 569
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 569
goto label_15;
#line 569
label_32:
#line 569
c_rt_lib0clear(&___nl__3);
#line 569
c_rt_lib0clear(&___nl__4);
#line 569
c_rt_lib0clear(&___nl__5);
#line 570
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 570
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 570
c_rt_lib0clear(&___nl__3);
#line 571
goto label_215;
#line 571
label_40:
#line 571
c_rt_lib0move(&___nl__2, nl0is_array(___nl__1));
#line 571
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 571
if(c_rt_lib0check_true_native(___nl__2)){ goto label_78;}
#line 572
c_rt_lib0move(&___nl__4,___get_global_const(433));
#line 572
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 572
c_rt_lib0clear(&___nl__4);
#line 572
c_rt_lib0move(&___nl__4,___get_global_const(371));
#line 572
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 572
c_rt_lib0clear(&___nl__4);
#line 572
c_rt_lib0move(&___nl__4, array0len(___nl__1));
#line 572
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 572
c_rt_lib0clear(&___nl__4);
#line 572
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 572
c_rt_lib0clear(&___nl__3);
#line 573
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 573
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 573
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 573
label_58:
#line 573
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 573
if(c_rt_lib0check_true_native(___nl__7)){ goto label_68;}
#line 573
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 574
c_rt_lib0move(&___nl__8,___get_global_const(271));
#line 574
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__8));
#line 574
c_rt_lib0clear(&___nl__8);
#line 575
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__3));
#line 576
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 576
goto label_58;
#line 576
label_68:
#line 576
c_rt_lib0clear(&___nl__3);
#line 576
c_rt_lib0clear(&___nl__4);
#line 576
c_rt_lib0clear(&___nl__5);
#line 576
c_rt_lib0clear(&___nl__6);
#line 576
c_rt_lib0clear(&___nl__7);
#line 577
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 577
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 577
c_rt_lib0clear(&___nl__3);
#line 578
goto label_215;
#line 578
label_78:
#line 578
c_rt_lib0move(&___nl__2, nl0is_variant(___nl__1));
#line 578
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 578
if(c_rt_lib0check_true_native(___nl__2)){ goto label_198;}
#line 580
c_rt_lib0move(&___nl__5, ptd0sim());
#line 580
c_rt_lib0move(&___nl__6, ov0get_element(___nl__1));
#line 580
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__6));
#line 580
c_rt_lib0clear(&___nl__6);
#line 580
c_rt_lib0clear(&___nl__5);
#line 580
c_rt_lib0move(&___nl__3, generator_c_priv0get_const_sim(___ref___0, ___nl__4));
#line 580
c_rt_lib0clear(&___nl__4);
#line 581
c_rt_lib0move(&___nl__4, ov0has_value(___nl__1));
#line 581
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 581
if(c_rt_lib0check_true_native(___nl__4)){ goto label_180;}
#line 582
c_rt_lib0move(&___nl__6,___get_global_const(434));
#line 582
c_rt_lib0move(&___nl__5, generator_c_priv0get_lib_fun(___nl__6));
#line 582
c_rt_lib0clear(&___nl__6);
#line 582
c_rt_lib0move(&___nl__6,___get_global_const(371));
#line 582
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 582
c_rt_lib0clear(&___nl__6);
#line 582
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 582
c_rt_lib0move(&___nl__6,___get_global_const(271));
#line 582
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 582
c_rt_lib0clear(&___nl__6);
#line 582
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 582
c_rt_lib0clear(&___nl__5);
#line 584
c_rt_lib0move(&___nl__5, ov0get_value(___nl__1));
#line 585
c_rt_lib0copy(&___nl__6, ___nl__1);
#line 585
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(5)));
#line 585
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__6));
#line 585
if(c_rt_lib0check_true_native(___nl__10)){ goto label_110;}
#line 585
c_rt_lib0move(&___nl__6, nl0is_hash(___nl__5));
#line 585
label_110:
#line 585
c_rt_lib0clear(&___nl__10);
#line 585
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__6));
#line 585
if(c_rt_lib0check_true_native(___nl__9)){ goto label_118;}
#line 585
c_rt_lib0move(&___nl__6, hash0size(___nl__5));
#line 585
c_rt_lib0move(&___nl__10,___get_global_const(6));
#line 585
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__10));
#line 585
c_rt_lib0clear(&___nl__10);
#line 585
label_118:
#line 585
c_rt_lib0clear(&___nl__9);
#line 585
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__6));
#line 585
if(c_rt_lib0check_true_native(___nl__8)){ goto label_125;}
#line 585
c_rt_lib0move(&___nl__9,___get_global_const(93));
#line 585
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__9));
#line 585
c_rt_lib0clear(&___nl__9);
#line 585
label_125:
#line 585
c_rt_lib0clear(&___nl__8);
#line 585
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 585
if(c_rt_lib0check_true_native(___nl__7)){ goto label_132;}
#line 585
c_rt_lib0move(&___nl__8,___get_global_const(132));
#line 585
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__8));
#line 585
c_rt_lib0clear(&___nl__8);
#line 585
label_132:
#line 585
c_rt_lib0clear(&___nl__7);
#line 585
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 585
if(c_rt_lib0check_true_native(___nl__6)){ goto label_170;}
#line 586
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(93)));
#line 586
c_rt_lib0move(&___nl__7, nl0is_sim(___nl__9));
#line 586
c_rt_lib0clear(&___nl__9);
#line 586
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 586
if(c_rt_lib0check_true_native(___nl__8)){ goto label_144;}
#line 586
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(132)));
#line 586
c_rt_lib0move(&___nl__7, nl0is_sim(___nl__9));
#line 586
c_rt_lib0clear(&___nl__9);
#line 586
label_144:
#line 586
c_rt_lib0clear(&___nl__8);
#line 586
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 586
if(c_rt_lib0check_true_native(___nl__7)){ goto label_164;}
#line 587
c_rt_lib0move(&___nl__10, ptd0sim());
#line 587
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(132)));
#line 587
c_rt_lib0move(&___nl__9, ptd0ensure(___nl__10, ___nl__11));
#line 587
c_rt_lib0clear(&___nl__11);
#line 587
c_rt_lib0clear(&___nl__10);
#line 587
c_rt_lib0move(&___nl__11, ptd0sim());
#line 587
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(93)));
#line 587
c_rt_lib0move(&___nl__10, ptd0ensure(___nl__11, ___nl__12));
#line 587
c_rt_lib0clear(&___nl__12);
#line 587
c_rt_lib0clear(&___nl__11);
#line 587
c_rt_lib0move(&___nl__8, generator_c_priv0get_func_pointer(___ref___0, ___nl__9, ___nl__10));
#line 587
c_rt_lib0clear(&___nl__10);
#line 587
c_rt_lib0clear(&___nl__9);
#line 587
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__8));
#line 587
c_rt_lib0clear(&___nl__8);
#line 588
goto label_167;
#line 588
label_164:
#line 589
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__5));
#line 590
goto label_167;
#line 590
label_167:
#line 590
c_rt_lib0clear(&___nl__7);
#line 591
goto label_173;
#line 591
label_170:
#line 592
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__5));
#line 593
goto label_173;
#line 593
label_173:
#line 593
c_rt_lib0clear(&___nl__6);
#line 595
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 595
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 595
c_rt_lib0clear(&___nl__6);
#line 595
c_rt_lib0clear(&___nl__5);
#line 596
goto label_194;
#line 596
label_180:
#line 597
c_rt_lib0move(&___nl__6,___get_global_const(435));
#line 597
c_rt_lib0move(&___nl__5, generator_c_priv0get_lib_fun(___nl__6));
#line 597
c_rt_lib0clear(&___nl__6);
#line 597
c_rt_lib0move(&___nl__6,___get_global_const(371));
#line 597
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 597
c_rt_lib0clear(&___nl__6);
#line 597
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 597
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 597
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 597
c_rt_lib0clear(&___nl__6);
#line 597
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 597
c_rt_lib0clear(&___nl__5);
#line 598
goto label_194;
#line 598
label_194:
#line 598
c_rt_lib0clear(&___nl__4);
#line 598
c_rt_lib0clear(&___nl__3);
#line 599
goto label_215;
#line 599
label_198:
#line 599
c_rt_lib0move(&___nl__2, nl0is_sim(___nl__1));
#line 599
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 599
if(c_rt_lib0check_true_native(___nl__2)){ goto label_210;}
#line 600
c_rt_lib0move(&___nl__5, ptd0sim());
#line 600
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__1));
#line 600
c_rt_lib0clear(&___nl__5);
#line 600
c_rt_lib0move(&___nl__3, generator_c_priv0get_const_sim(___ref___0, ___nl__4));
#line 600
c_rt_lib0clear(&___nl__4);
#line 600
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 600
c_rt_lib0clear(&___nl__3);
#line 601
goto label_215;
#line 601
label_210:
#line 602
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 602
nl_die_arg(___nl__3);
#line 602
c_rt_lib0clear(&___nl__3);
#line 603
goto label_215;
#line 603
label_215:
#line 603
c_rt_lib0clear(&___nl__2);
#line 603
c_rt_lib0clear(&___nl__1);
#line 603
return NULL;
}

ImmT generator_c_priv0get_func_pointer(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
generator_c_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 608
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 608
c_rt_lib0move(&___nl__4,___get_global_const(342));
#line 608
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 608
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 608
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__4, ___nl__1, ___nl__5));
#line 608
c_rt_lib0move(&___nl__6,___get_global_const(342));
#line 608
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 608
c_rt_lib0clear(&___nl__6);
#line 608
c_rt_lib0clear(&___nl__3);
#line 608
c_rt_lib0clear(&___nl__4);
#line 608
c_rt_lib0clear(&___nl__5);
#line 609
c_rt_lib0move(&___nl__4,___get_global_const(436));
#line 610
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 610
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_name(___nl__1, ___nl__2, ___nl__7));
#line 610
c_rt_lib0clear(&___nl__7);
#line 610
c_rt_lib0move(&___nl__7,___get_global_const(437));
#line 610
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 610
c_rt_lib0clear(&___nl__7);
#line 611
c_rt_lib0move(&___nl__7, generator_c_priv0get_const_sim(___ref___0, ___nl__1));
#line 612
c_rt_lib0move(&___nl__8, generator_c_priv0get_const_sim(___ref___0, ___nl__2));
#line 612
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(3, ___nl__6, ___nl__7, ___nl__8));
#line 612
c_rt_lib0clear(&___nl__6);
#line 612
c_rt_lib0clear(&___nl__7);
#line 612
c_rt_lib0clear(&___nl__8);
#line 612
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_lib(___nl__4, ___nl__5));
#line 612
c_rt_lib0clear(&___nl__5);
#line 612
c_rt_lib0clear(&___nl__4);
#line 612
c_rt_lib0clear(&___nl__1);
#line 612
c_rt_lib0clear(&___nl__2);
#line 612
return ___nl__3;
#line 612
c_rt_lib0clear(&___nl__3);
#line 612
c_rt_lib0clear(&___nl__1);
#line 612
c_rt_lib0clear(&___nl__2);
#line 612
return NULL;
}

ImmT generator_c_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 617
c_rt_lib0move(&___nl__2,___get_global_const(438));
#line 617
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(195)));
#line 617
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(439)));
#line 617
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(440)));
#line 617
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(134)));
#line 617
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 617
c_rt_lib0clear(&___nl__3);
#line 617
c_rt_lib0move(&___nl__3, string0lf());
#line 617
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 617
c_rt_lib0clear(&___nl__3);
#line 617
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__2));
#line 617
c_rt_lib0clear(&___nl__2);
#line 618
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(201)));
#line 618
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(204)));
#line 618
if(c_rt_lib0check_true_native(___nl__3)){ goto label_58;}
#line 623
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(205)));
#line 623
if(c_rt_lib0check_true_native(___nl__3)){ goto label_97;}
#line 631
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(88)));
#line 631
if(c_rt_lib0check_true_native(___nl__3)){ goto label_143;}
#line 634
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(206)));
#line 634
if(c_rt_lib0check_true_native(___nl__3)){ goto label_158;}
#line 636
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(207)));
#line 636
if(c_rt_lib0check_true_native(___nl__3)){ goto label_163;}
#line 640
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(208)));
#line 640
if(c_rt_lib0check_true_native(___nl__3)){ goto label_186;}
#line 647
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(209)));
#line 647
if(c_rt_lib0check_true_native(___nl__3)){ goto label_238;}
#line 650
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(210)));
#line 650
if(c_rt_lib0check_true_native(___nl__3)){ goto label_261;}
#line 653
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(90)));
#line 653
if(c_rt_lib0check_true_native(___nl__3)){ goto label_284;}
#line 661
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(217)));
#line 661
if(c_rt_lib0check_true_native(___nl__3)){ goto label_313;}
#line 663
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(211)));
#line 663
if(c_rt_lib0check_true_native(___nl__3)){ goto label_326;}
#line 667
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(199)));
#line 667
if(c_rt_lib0check_true_native(___nl__3)){ goto label_360;}
#line 672
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(212)));
#line 672
if(c_rt_lib0check_true_native(___nl__3)){ goto label_401;}
#line 675
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(213)));
#line 675
if(c_rt_lib0check_true_native(___nl__3)){ goto label_424;}
#line 681
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(214)));
#line 681
if(c_rt_lib0check_true_native(___nl__3)){ goto label_447;}
#line 684
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(215)));
#line 684
if(c_rt_lib0check_true_native(___nl__3)){ goto label_470;}
#line 690
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(216)));
#line 690
if(c_rt_lib0check_true_native(___nl__3)){ goto label_493;}
#line 704
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(218)));
#line 704
if(c_rt_lib0check_true_native(___nl__3)){ goto label_589;}
#line 707
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(219)));
#line 707
if(c_rt_lib0check_true_native(___nl__3)){ goto label_608;}
#line 712
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(220)));
#line 712
if(c_rt_lib0check_true_native(___nl__3)){ goto label_643;}
#line 714
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(221)));
#line 714
if(c_rt_lib0check_true_native(___nl__3)){ goto label_651;}
#line 714
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 714
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 714
nl_die_arg(___nl__3);
#line 618
label_58:
#line 618
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(204)));
#line 619
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 619
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 619
c_rt_lib0clear(&___nl__7);
#line 619
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 619
c_rt_lib0clear(&___nl__6);
#line 620
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 620
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 620
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 620
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 620
label_69:
#line 620
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 620
if(c_rt_lib0check_true_native(___nl__11)){ goto label_78;}
#line 620
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 620
c_rt_lib0move(&___nl__12, generator_c_priv0get_reg(___ref___0, ___nl__7));
#line 620
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 620
c_rt_lib0clear(&___nl__12);
#line 620
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 620
goto label_69;
#line 620
label_78:
#line 620
c_rt_lib0clear(&___nl__6);
#line 620
c_rt_lib0clear(&___nl__7);
#line 620
c_rt_lib0clear(&___nl__8);
#line 620
c_rt_lib0clear(&___nl__9);
#line 620
c_rt_lib0clear(&___nl__10);
#line 620
c_rt_lib0clear(&___nl__11);
#line 621
c_rt_lib0move(&___nl__7,___get_global_const(441));
#line 621
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__7, ___nl__5));
#line 621
c_rt_lib0clear(&___nl__7);
#line 622
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 622
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 622
c_rt_lib0clear(&___nl__8);
#line 622
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 622
c_rt_lib0clear(&___nl__7);
#line 622
c_rt_lib0clear(&___nl__5);
#line 622
c_rt_lib0clear(&___nl__6);
#line 622
c_rt_lib0clear(&___nl__4);
#line 623
goto label_664;
#line 623
label_97:
#line 623
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(205)));
#line 624
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 624
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 624
c_rt_lib0clear(&___nl__7);
#line 624
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 624
c_rt_lib0clear(&___nl__6);
#line 625
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 625
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 625
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 625
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 625
label_108:
#line 625
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 625
if(c_rt_lib0check_true_native(___nl__11)){ goto label_124;}
#line 625
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 626
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(329)));
#line 626
c_rt_lib0move(&___nl__12, generator_c_priv0get_const_sim(___ref___0, ___nl__13));
#line 626
c_rt_lib0clear(&___nl__13);
#line 626
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 626
c_rt_lib0clear(&___nl__12);
#line 627
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(198)));
#line 627
c_rt_lib0move(&___nl__12, generator_c_priv0get_reg(___ref___0, ___nl__13));
#line 627
c_rt_lib0clear(&___nl__13);
#line 627
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 627
c_rt_lib0clear(&___nl__12);
#line 628
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 628
goto label_108;
#line 628
label_124:
#line 628
c_rt_lib0clear(&___nl__6);
#line 628
c_rt_lib0clear(&___nl__7);
#line 628
c_rt_lib0clear(&___nl__8);
#line 628
c_rt_lib0clear(&___nl__9);
#line 628
c_rt_lib0clear(&___nl__10);
#line 628
c_rt_lib0clear(&___nl__11);
#line 629
c_rt_lib0move(&___nl__7,___get_global_const(442));
#line 629
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__7, ___nl__5));
#line 629
c_rt_lib0clear(&___nl__7);
#line 630
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 630
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 630
c_rt_lib0clear(&___nl__8);
#line 630
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 630
c_rt_lib0clear(&___nl__7);
#line 630
c_rt_lib0clear(&___nl__5);
#line 630
c_rt_lib0clear(&___nl__6);
#line 630
c_rt_lib0clear(&___nl__4);
#line 631
goto label_664;
#line 631
label_143:
#line 631
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(88)));
#line 632
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(132)));
#line 632
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 632
c_rt_lib0move(&___nl__5, generator_c_priv0get_func_pointer(___ref___0, ___nl__6, ___nl__7));
#line 632
c_rt_lib0clear(&___nl__7);
#line 632
c_rt_lib0clear(&___nl__6);
#line 633
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 633
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 633
c_rt_lib0clear(&___nl__7);
#line 633
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 633
c_rt_lib0clear(&___nl__6);
#line 633
c_rt_lib0clear(&___nl__5);
#line 633
c_rt_lib0clear(&___nl__4);
#line 634
goto label_664;
#line 634
label_158:
#line 634
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(206)));
#line 635
c_rt_lib0delete(generator_c_priv0generate_call(___ref___0, ___nl__4));
#line 635
c_rt_lib0clear(&___nl__4);
#line 636
goto label_664;
#line 636
label_163:
#line 636
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(207)));
#line 637
c_rt_lib0move(&___nl__6, generator_c_priv0get_unary_ops());
#line 637
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 637
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__7));
#line 637
c_rt_lib0clear(&___nl__7);
#line 637
c_rt_lib0clear(&___nl__6);
#line 638
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 638
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 638
c_rt_lib0clear(&___nl__9);
#line 638
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 638
c_rt_lib0clear(&___nl__8);
#line 638
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__5, ___nl__7));
#line 638
c_rt_lib0clear(&___nl__7);
#line 639
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 639
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 639
c_rt_lib0clear(&___nl__8);
#line 639
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 639
c_rt_lib0clear(&___nl__7);
#line 639
c_rt_lib0clear(&___nl__5);
#line 639
c_rt_lib0clear(&___nl__6);
#line 639
c_rt_lib0clear(&___nl__4);
#line 640
goto label_664;
#line 640
label_186:
#line 640
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(208)));
#line 641
c_rt_lib0move(&___nl__6, generator_c_priv0get_bin_ops());
#line 641
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 641
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__7));
#line 641
c_rt_lib0clear(&___nl__7);
#line 641
c_rt_lib0clear(&___nl__6);
#line 642
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 642
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 642
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 642
c_rt_lib0clear(&___nl__8);
#line 642
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 642
if(c_rt_lib0check_true_native(___nl__7)){ goto label_204;}
#line 642
c_rt_lib0move(&___nl__8, generator_c_priv0get_bin_ops_mod());
#line 642
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 642
c_rt_lib0move(&___nl__6, hash0has_key(___nl__8, ___nl__9));
#line 642
c_rt_lib0clear(&___nl__9);
#line 642
c_rt_lib0clear(&___nl__8);
#line 642
label_204:
#line 642
c_rt_lib0clear(&___nl__7);
#line 642
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 642
if(c_rt_lib0check_true_native(___nl__6)){ goto label_216;}
#line 643
c_rt_lib0move(&___nl__8, generator_c_priv0get_bin_ops_mod());
#line 643
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 643
c_rt_lib0move(&___nl__7, hash0get_value(___nl__8, ___nl__9));
#line 643
c_rt_lib0clear(&___nl__9);
#line 643
c_rt_lib0clear(&___nl__8);
#line 643
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 643
c_rt_lib0clear(&___nl__7);
#line 644
goto label_216;
#line 644
label_216:
#line 644
c_rt_lib0clear(&___nl__6);
#line 645
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 645
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 645
c_rt_lib0clear(&___nl__9);
#line 645
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(231)));
#line 645
c_rt_lib0move(&___nl__9, generator_c_priv0get_reg(___ref___0, ___nl__10));
#line 645
c_rt_lib0clear(&___nl__10);
#line 645
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 645
c_rt_lib0clear(&___nl__8);
#line 645
c_rt_lib0clear(&___nl__9);
#line 645
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__5, ___nl__7));
#line 645
c_rt_lib0clear(&___nl__7);
#line 646
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 646
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 646
c_rt_lib0clear(&___nl__8);
#line 646
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 646
c_rt_lib0clear(&___nl__7);
#line 646
c_rt_lib0clear(&___nl__5);
#line 646
c_rt_lib0clear(&___nl__6);
#line 646
c_rt_lib0clear(&___nl__4);
#line 647
goto label_664;
#line 647
label_238:
#line 647
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(209)));
#line 648
c_rt_lib0move(&___nl__6,___get_global_const(444));
#line 648
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 648
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 648
c_rt_lib0clear(&___nl__9);
#line 648
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 648
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 648
c_rt_lib0clear(&___nl__10);
#line 648
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 648
c_rt_lib0clear(&___nl__8);
#line 648
c_rt_lib0clear(&___nl__9);
#line 648
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 648
c_rt_lib0clear(&___nl__7);
#line 648
c_rt_lib0clear(&___nl__6);
#line 649
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 649
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 649
c_rt_lib0clear(&___nl__7);
#line 649
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 649
c_rt_lib0clear(&___nl__6);
#line 649
c_rt_lib0clear(&___nl__5);
#line 649
c_rt_lib0clear(&___nl__4);
#line 650
goto label_664;
#line 650
label_261:
#line 650
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(210)));
#line 651
c_rt_lib0move(&___nl__6,___get_global_const(445));
#line 651
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 651
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 651
c_rt_lib0clear(&___nl__9);
#line 651
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 651
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 651
c_rt_lib0clear(&___nl__10);
#line 651
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 651
c_rt_lib0clear(&___nl__8);
#line 651
c_rt_lib0clear(&___nl__9);
#line 651
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 651
c_rt_lib0clear(&___nl__7);
#line 651
c_rt_lib0clear(&___nl__6);
#line 652
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 652
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 652
c_rt_lib0clear(&___nl__7);
#line 652
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 652
c_rt_lib0clear(&___nl__6);
#line 652
c_rt_lib0clear(&___nl__5);
#line 652
c_rt_lib0clear(&___nl__4);
#line 653
goto label_664;
#line 653
label_284:
#line 653
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(90)));
#line 654
c_rt_lib0delete(generator_c_priv0move_register_to_ref_args(___ref___0));
#line 655
c_rt_lib0move(&___nl__5,___get_global_const(394));
#line 655
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 655
c_rt_lib0clear(&___nl__5);
#line 656
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(198)));
#line 656
if(c_rt_lib0check_true_native(___nl__5)){ goto label_297;}
#line 658
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(288)));
#line 658
if(c_rt_lib0check_true_native(___nl__5)){ goto label_304;}
#line 658
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 658
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 658
nl_die_arg(___nl__5);
#line 656
label_297:
#line 656
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(198)));
#line 657
c_rt_lib0move(&___nl__7, generator_c_priv0get_reg(___ref___0, ___nl__6));
#line 657
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 657
c_rt_lib0clear(&___nl__7);
#line 657
c_rt_lib0clear(&___nl__6);
#line 658
goto label_309;
#line 658
label_304:
#line 659
c_rt_lib0move(&___nl__6,___get_global_const(446));
#line 659
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 659
c_rt_lib0clear(&___nl__6);
#line 660
goto label_309;
#line 660
label_309:
#line 660
c_rt_lib0clear(&___nl__5);
#line 660
c_rt_lib0clear(&___nl__4);
#line 661
goto label_664;
#line 661
label_313:
#line 661
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(217)));
#line 662
c_rt_lib0move(&___nl__5,___get_global_const(447));
#line 662
c_rt_lib0move(&___nl__6, generator_c_priv0get_reg(___ref___0, ___nl__4));
#line 662
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 662
c_rt_lib0clear(&___nl__6);
#line 662
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 662
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 662
c_rt_lib0clear(&___nl__6);
#line 662
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 662
c_rt_lib0clear(&___nl__5);
#line 662
c_rt_lib0clear(&___nl__4);
#line 663
goto label_664;
#line 663
label_326:
#line 663
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(211)));
#line 664
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 664
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 664
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 664
c_rt_lib0clear(&___nl__6);
#line 664
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 664
if(c_rt_lib0check_true_native(___nl__5)){ goto label_341;}
#line 664
c_rt_lib0clear(&___nl__1);
#line 664
c_rt_lib0clear(&___nl__2);
#line 664
c_rt_lib0clear(&___nl__3);
#line 664
c_rt_lib0clear(&___nl__4);
#line 664
c_rt_lib0clear(&___nl__5);
#line 664
return NULL;
#line 664
goto label_341;
#line 664
label_341:
#line 664
c_rt_lib0clear(&___nl__5);
#line 665
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 665
c_rt_lib0move(&___nl__6, generator_c_priv0get_reg_ref(___ref___0, ___nl__7));
#line 665
c_rt_lib0clear(&___nl__7);
#line 665
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 665
c_rt_lib0move(&___nl__7, generator_c_priv0get_reg(___ref___0, ___nl__8));
#line 665
c_rt_lib0clear(&___nl__8);
#line 665
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 665
c_rt_lib0clear(&___nl__6);
#line 665
c_rt_lib0clear(&___nl__7);
#line 666
c_rt_lib0move(&___nl__7,___get_global_const(369));
#line 666
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__7, ___nl__5));
#line 666
c_rt_lib0clear(&___nl__7);
#line 666
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 666
c_rt_lib0clear(&___nl__6);
#line 666
c_rt_lib0clear(&___nl__5);
#line 666
c_rt_lib0clear(&___nl__4);
#line 667
goto label_664;
#line 667
label_360:
#line 667
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(199)));
#line 668
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 668
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 668
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 668
c_rt_lib0clear(&___nl__6);
#line 668
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 668
if(c_rt_lib0check_true_native(___nl__5)){ goto label_375;}
#line 668
c_rt_lib0clear(&___nl__1);
#line 668
c_rt_lib0clear(&___nl__2);
#line 668
c_rt_lib0clear(&___nl__3);
#line 668
c_rt_lib0clear(&___nl__4);
#line 668
c_rt_lib0clear(&___nl__5);
#line 668
return NULL;
#line 668
goto label_375;
#line 668
label_375:
#line 668
c_rt_lib0clear(&___nl__5);
#line 669
c_rt_lib0move(&___nl__6,___get_global_const(211));
#line 669
c_rt_lib0move(&___nl__5, generator_c_priv0get_lib_fun(___nl__6));
#line 669
c_rt_lib0clear(&___nl__6);
#line 669
c_rt_lib0move(&___nl__6,___get_global_const(371));
#line 669
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 669
c_rt_lib0clear(&___nl__6);
#line 669
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 669
c_rt_lib0move(&___nl__6, generator_c_priv0get_reg_ref(___ref___0, ___nl__7));
#line 669
c_rt_lib0clear(&___nl__7);
#line 669
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 669
c_rt_lib0clear(&___nl__6);
#line 669
c_rt_lib0move(&___nl__6,___get_global_const(256));
#line 669
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 669
c_rt_lib0clear(&___nl__6);
#line 669
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 669
c_rt_lib0clear(&___nl__5);
#line 670
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 670
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__5));
#line 670
c_rt_lib0clear(&___nl__5);
#line 671
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 671
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 671
c_rt_lib0clear(&___nl__5);
#line 671
c_rt_lib0clear(&___nl__4);
#line 672
goto label_664;
#line 672
label_401:
#line 672
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(212)));
#line 673
c_rt_lib0move(&___nl__6,___get_global_const(448));
#line 673
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 673
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 673
c_rt_lib0clear(&___nl__9);
#line 673
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(232)));
#line 673
c_rt_lib0move(&___nl__9, generator_c_priv0get_reg(___ref___0, ___nl__10));
#line 673
c_rt_lib0clear(&___nl__10);
#line 673
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 673
c_rt_lib0clear(&___nl__8);
#line 673
c_rt_lib0clear(&___nl__9);
#line 673
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 673
c_rt_lib0clear(&___nl__7);
#line 673
c_rt_lib0clear(&___nl__6);
#line 674
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 674
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 674
c_rt_lib0clear(&___nl__7);
#line 674
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 674
c_rt_lib0clear(&___nl__6);
#line 674
c_rt_lib0clear(&___nl__5);
#line 674
c_rt_lib0clear(&___nl__4);
#line 675
goto label_664;
#line 675
label_424:
#line 675
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(213)));
#line 676
c_rt_lib0move(&___nl__6,___get_global_const(449));
#line 677
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 677
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg_ref(___ref___0, ___nl__9));
#line 677
c_rt_lib0clear(&___nl__9);
#line 678
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(232)));
#line 678
c_rt_lib0move(&___nl__9, generator_c_priv0get_reg(___ref___0, ___nl__10));
#line 678
c_rt_lib0clear(&___nl__10);
#line 679
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 679
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__11));
#line 679
c_rt_lib0clear(&___nl__11);
#line 679
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 679
c_rt_lib0clear(&___nl__8);
#line 679
c_rt_lib0clear(&___nl__9);
#line 679
c_rt_lib0clear(&___nl__10);
#line 679
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 679
c_rt_lib0clear(&___nl__7);
#line 679
c_rt_lib0clear(&___nl__6);
#line 679
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 679
c_rt_lib0clear(&___nl__5);
#line 679
c_rt_lib0clear(&___nl__4);
#line 681
goto label_664;
#line 681
label_447:
#line 681
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(214)));
#line 682
c_rt_lib0move(&___nl__6,___get_global_const(450));
#line 682
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 682
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 682
c_rt_lib0clear(&___nl__9);
#line 682
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(329)));
#line 682
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 682
c_rt_lib0clear(&___nl__10);
#line 682
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 682
c_rt_lib0clear(&___nl__8);
#line 682
c_rt_lib0clear(&___nl__9);
#line 682
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 682
c_rt_lib0clear(&___nl__7);
#line 682
c_rt_lib0clear(&___nl__6);
#line 683
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 683
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 683
c_rt_lib0clear(&___nl__7);
#line 683
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 683
c_rt_lib0clear(&___nl__6);
#line 683
c_rt_lib0clear(&___nl__5);
#line 683
c_rt_lib0clear(&___nl__4);
#line 684
goto label_664;
#line 684
label_470:
#line 684
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(215)));
#line 685
c_rt_lib0move(&___nl__6,___get_global_const(451));
#line 686
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 686
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg_ref(___ref___0, ___nl__9));
#line 686
c_rt_lib0clear(&___nl__9);
#line 687
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(329)));
#line 687
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 687
c_rt_lib0clear(&___nl__10);
#line 688
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 688
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__11));
#line 688
c_rt_lib0clear(&___nl__11);
#line 688
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 688
c_rt_lib0clear(&___nl__8);
#line 688
c_rt_lib0clear(&___nl__9);
#line 688
c_rt_lib0clear(&___nl__10);
#line 688
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 688
c_rt_lib0clear(&___nl__7);
#line 688
c_rt_lib0clear(&___nl__6);
#line 688
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 688
c_rt_lib0clear(&___nl__5);
#line 688
c_rt_lib0clear(&___nl__4);
#line 690
goto label_664;
#line 690
label_493:
#line 690
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(216)));
#line 692
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 692
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(288)));
#line 692
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 692
if(c_rt_lib0check_true_native(___nl__7)){ goto label_503;}
#line 692
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 692
c_rt_lib0move(&___nl__8,___get_global_const(7));
#line 692
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 692
c_rt_lib0clear(&___nl__8);
#line 692
label_503:
#line 692
c_rt_lib0clear(&___nl__7);
#line 692
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 692
if(c_rt_lib0check_true_native(___nl__6)){ goto label_515;}
#line 693
c_rt_lib0move(&___nl__8,___get_global_const(452));
#line 693
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 693
c_rt_lib0move(&___nl__7, generator_c_priv0get_fun_lib(___nl__8, ___nl__9));
#line 693
c_rt_lib0clear(&___nl__9);
#line 693
c_rt_lib0clear(&___nl__8);
#line 693
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 693
c_rt_lib0clear(&___nl__7);
#line 694
goto label_579;
#line 694
label_515:
#line 694
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 694
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(288)));
#line 694
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 694
if(c_rt_lib0check_true_native(___nl__7)){ goto label_524;}
#line 694
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 694
c_rt_lib0move(&___nl__8,___get_global_const(8));
#line 694
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 694
c_rt_lib0clear(&___nl__8);
#line 694
label_524:
#line 694
c_rt_lib0clear(&___nl__7);
#line 694
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 694
if(c_rt_lib0check_true_native(___nl__6)){ goto label_536;}
#line 695
c_rt_lib0move(&___nl__8,___get_global_const(453));
#line 695
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 695
c_rt_lib0move(&___nl__7, generator_c_priv0get_fun_lib(___nl__8, ___nl__9));
#line 695
c_rt_lib0clear(&___nl__9);
#line 695
c_rt_lib0clear(&___nl__8);
#line 695
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 695
c_rt_lib0clear(&___nl__7);
#line 696
goto label_579;
#line 696
label_536:
#line 697
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 697
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(233)));
#line 697
if(c_rt_lib0check_true_native(___nl__8)){ goto label_545;}
#line 699
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(288)));
#line 699
if(c_rt_lib0check_true_native(___nl__8)){ goto label_562;}
#line 699
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 699
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 699
nl_die_arg(___nl__8);
#line 697
label_545:
#line 697
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(233)));
#line 698
c_rt_lib0move(&___nl__11,___get_global_const(454));
#line 698
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 698
c_rt_lib0move(&___nl__13, generator_c_priv0get_const_sim(___ref___0, ___nl__14));
#line 698
c_rt_lib0clear(&___nl__14);
#line 698
c_rt_lib0move(&___nl__14, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 698
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 698
c_rt_lib0clear(&___nl__13);
#line 698
c_rt_lib0clear(&___nl__14);
#line 698
c_rt_lib0move(&___nl__10, generator_c_priv0get_fun_lib(___nl__11, ___nl__12));
#line 698
c_rt_lib0clear(&___nl__12);
#line 698
c_rt_lib0clear(&___nl__11);
#line 698
c_rt_lib0copy(&___nl__5, ___nl__10);
#line 698
c_rt_lib0clear(&___nl__10);
#line 698
c_rt_lib0clear(&___nl__9);
#line 699
goto label_575;
#line 699
label_562:
#line 700
c_rt_lib0move(&___nl__10,___get_global_const(435));
#line 700
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 700
c_rt_lib0move(&___nl__12, generator_c_priv0get_const_sim(___ref___0, ___nl__13));
#line 700
c_rt_lib0clear(&___nl__13);
#line 700
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(1, ___nl__12));
#line 700
c_rt_lib0clear(&___nl__12);
#line 700
c_rt_lib0move(&___nl__9, generator_c_priv0get_fun_lib(___nl__10, ___nl__11));
#line 700
c_rt_lib0clear(&___nl__11);
#line 700
c_rt_lib0clear(&___nl__10);
#line 700
c_rt_lib0copy(&___nl__5, ___nl__9);
#line 700
c_rt_lib0clear(&___nl__9);
#line 701
goto label_575;
#line 701
label_575:
#line 701
c_rt_lib0clear(&___nl__7);
#line 701
c_rt_lib0clear(&___nl__8);
#line 702
goto label_579;
#line 702
label_579:
#line 702
c_rt_lib0clear(&___nl__6);
#line 703
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 703
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 703
c_rt_lib0clear(&___nl__7);
#line 703
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 703
c_rt_lib0clear(&___nl__6);
#line 703
c_rt_lib0clear(&___nl__5);
#line 703
c_rt_lib0clear(&___nl__4);
#line 704
goto label_664;
#line 704
label_589:
#line 704
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(218)));
#line 705
c_rt_lib0move(&___nl__5,___get_global_const(455));
#line 705
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 705
c_rt_lib0move(&___nl__6,___get_global_const(417));
#line 705
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 705
c_rt_lib0clear(&___nl__6);
#line 705
c_rt_lib0move(&___nl__6, string0lf());
#line 705
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 705
c_rt_lib0clear(&___nl__6);
#line 705
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 705
c_rt_lib0clear(&___nl__5);
#line 706
c_rt_lib0clear(&___nl__1);
#line 706
c_rt_lib0clear(&___nl__2);
#line 706
c_rt_lib0clear(&___nl__3);
#line 706
c_rt_lib0clear(&___nl__4);
#line 706
return NULL;
#line 706
c_rt_lib0clear(&___nl__4);
#line 707
goto label_664;
#line 707
label_608:
#line 707
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(219)));
#line 708
c_rt_lib0move(&___nl__5,___get_global_const(456));
#line 708
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 708
c_rt_lib0clear(&___nl__5);
#line 709
c_rt_lib0move(&___nl__6,___get_global_const(457));
#line 709
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 709
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 709
c_rt_lib0clear(&___nl__9);
#line 709
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 709
c_rt_lib0clear(&___nl__8);
#line 709
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 709
c_rt_lib0clear(&___nl__7);
#line 709
c_rt_lib0clear(&___nl__6);
#line 709
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 709
c_rt_lib0clear(&___nl__5);
#line 710
c_rt_lib0move(&___nl__5,___get_global_const(458));
#line 710
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 710
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 710
c_rt_lib0clear(&___nl__6);
#line 710
c_rt_lib0move(&___nl__6,___get_global_const(399));
#line 710
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 710
c_rt_lib0clear(&___nl__6);
#line 710
c_rt_lib0move(&___nl__6, string0lf());
#line 710
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 710
c_rt_lib0clear(&___nl__6);
#line 710
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 710
c_rt_lib0clear(&___nl__5);
#line 711
c_rt_lib0clear(&___nl__1);
#line 711
c_rt_lib0clear(&___nl__2);
#line 711
c_rt_lib0clear(&___nl__3);
#line 711
c_rt_lib0clear(&___nl__4);
#line 711
return NULL;
#line 711
c_rt_lib0clear(&___nl__4);
#line 712
goto label_664;
#line 712
label_643:
#line 712
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(220)));
#line 713
c_rt_lib0move(&___nl__5,___get_global_const(459));
#line 713
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 713
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 713
c_rt_lib0clear(&___nl__5);
#line 713
c_rt_lib0clear(&___nl__4);
#line 714
goto label_664;
#line 714
label_651:
#line 714
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(221)));
#line 715
c_rt_lib0move(&___nl__6,___get_global_const(221));
#line 715
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg_ref(___ref___0, ___nl__4));
#line 715
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 715
c_rt_lib0clear(&___nl__8);
#line 715
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 715
c_rt_lib0clear(&___nl__7);
#line 715
c_rt_lib0clear(&___nl__6);
#line 715
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 715
c_rt_lib0clear(&___nl__5);
#line 715
c_rt_lib0clear(&___nl__4);
#line 716
goto label_664;
#line 716
label_664:
#line 716
c_rt_lib0clear(&___nl__2);
#line 716
c_rt_lib0clear(&___nl__3);
#line 717
c_rt_lib0move(&___nl__2,___get_global_const(360));
#line 717
c_rt_lib0move(&___nl__3, string0lf());
#line 717
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 717
c_rt_lib0clear(&___nl__3);
#line 717
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__2));
#line 717
c_rt_lib0clear(&___nl__2);
#line 717
c_rt_lib0clear(&___nl__1);
#line 717
return NULL;
}

ImmT generator_c_priv0get_assign(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
generator_c_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 721
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 721
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 721
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 721
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 722
c_rt_lib0move(&___nl__5,___get_global_const(152));
#line 722
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__2));
#line 722
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_lib(___nl__5, ___nl__6));
#line 722
c_rt_lib0clear(&___nl__6);
#line 722
c_rt_lib0clear(&___nl__5);
#line 722
c_rt_lib0clear(&___nl__1);
#line 722
c_rt_lib0clear(&___nl__2);
#line 722
c_rt_lib0clear(&___nl__3);
#line 722
return ___nl__4;
#line 722
c_rt_lib0clear(&___nl__4);
#line 723
goto label_29;
#line 723
label_15:
#line 724
c_rt_lib0move(&___nl__5,___get_global_const(211));
#line 724
c_rt_lib0move(&___nl__7, generator_c_priv0get_reg_ref(___ref___0, ___nl__1));
#line 724
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__7, ___nl__2));
#line 724
c_rt_lib0clear(&___nl__7);
#line 724
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_lib(___nl__5, ___nl__6));
#line 724
c_rt_lib0clear(&___nl__6);
#line 724
c_rt_lib0clear(&___nl__5);
#line 724
c_rt_lib0clear(&___nl__1);
#line 724
c_rt_lib0clear(&___nl__2);
#line 724
c_rt_lib0clear(&___nl__3);
#line 724
return ___nl__4;
#line 724
c_rt_lib0clear(&___nl__4);
#line 725
goto label_29;
#line 725
label_29:
#line 725
c_rt_lib0clear(&___nl__3);
#line 725
c_rt_lib0clear(&___nl__1);
#line 725
c_rt_lib0clear(&___nl__2);
#line 725
return NULL;
}

ImmT generator_c_priv0generate_call(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 729
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(222)));
#line 729
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(224)));
#line 729
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 729
c_rt_lib0move(&___nl__2, generator_c_priv0get_fun_name(___nl__3, ___nl__4, ___nl__5));
#line 729
c_rt_lib0clear(&___nl__5);
#line 729
c_rt_lib0clear(&___nl__4);
#line 729
c_rt_lib0clear(&___nl__3);
#line 729
c_rt_lib0move(&___nl__3,___get_global_const(371));
#line 729
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 729
c_rt_lib0clear(&___nl__3);
#line 730
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 730
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 730
c_rt_lib0clear(&___nl__4);
#line 730
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 730
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 730
label_15:
#line 730
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__3));
#line 730
if(c_rt_lib0check_true_native(___nl__6)){ goto label_57;}
#line 731
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 731
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__7, ___nl__4));
#line 731
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 731
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 731
if(c_rt_lib0check_true_native(___nl__7)){ goto label_27;}
#line 731
c_rt_lib0move(&___nl__8,___get_global_const(271));
#line 731
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__8));
#line 731
c_rt_lib0clear(&___nl__8);
#line 731
goto label_27;
#line 731
label_27:
#line 731
c_rt_lib0clear(&___nl__7);
#line 732
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 732
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__4));
#line 732
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(198)));
#line 732
if(c_rt_lib0check_true_native(___nl__8)){ goto label_38;}
#line 734
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(5)));
#line 734
if(c_rt_lib0check_true_native(___nl__8)){ goto label_45;}
#line 734
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 734
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 734
nl_die_arg(___nl__8);
#line 732
label_38:
#line 732
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(198)));
#line 733
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 733
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__10));
#line 733
c_rt_lib0clear(&___nl__10);
#line 733
c_rt_lib0clear(&___nl__9);
#line 734
goto label_52;
#line 734
label_45:
#line 734
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(5)));
#line 735
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg_ref(___ref___0, ___nl__9));
#line 735
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__10));
#line 735
c_rt_lib0clear(&___nl__10);
#line 735
c_rt_lib0clear(&___nl__9);
#line 736
goto label_52;
#line 736
label_52:
#line 736
c_rt_lib0clear(&___nl__7);
#line 736
c_rt_lib0clear(&___nl__8);
#line 737
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 737
goto label_15;
#line 737
label_57:
#line 737
c_rt_lib0clear(&___nl__3);
#line 737
c_rt_lib0clear(&___nl__4);
#line 737
c_rt_lib0clear(&___nl__5);
#line 737
c_rt_lib0clear(&___nl__6);
#line 738
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 738
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 738
c_rt_lib0clear(&___nl__3);
#line 739
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(197)));
#line 739
c_rt_lib0move(&___nl__3, generator_c_priv0get_assign(___ref___0, ___nl__4, ___nl__2));
#line 739
c_rt_lib0clear(&___nl__4);
#line 739
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 739
c_rt_lib0clear(&___nl__3);
#line 739
c_rt_lib0clear(&___nl__2);
#line 739
c_rt_lib0clear(&___nl__1);
#line 739
return NULL;
}

ImmT generator_c_priv0create_sim(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 743
c_rt_lib0move(&___nl__1, string_utils0is_integer(___nl__0));
#line 743
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 743
if(c_rt_lib0check_true_native(___nl__1)){ goto label_18;}
#line 744
c_rt_lib0move(&___nl__3,___get_global_const(460));
#line 744
c_rt_lib0move(&___nl__2, generator_c_priv0get_lib_fun(___nl__3));
#line 744
c_rt_lib0clear(&___nl__3);
#line 744
c_rt_lib0move(&___nl__3,___get_global_const(371));
#line 744
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 744
c_rt_lib0clear(&___nl__3);
#line 744
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 744
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 744
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 744
c_rt_lib0clear(&___nl__3);
#line 744
c_rt_lib0clear(&___nl__0);
#line 744
c_rt_lib0clear(&___nl__1);
#line 744
return ___nl__2;
#line 744
c_rt_lib0clear(&___nl__2);
#line 745
goto label_99;
#line 745
label_18:
#line 745
c_rt_lib0move(&___nl__1, string_utils0is_float(___nl__0));
#line 745
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 745
if(c_rt_lib0check_true_native(___nl__1)){ goto label_37;}
#line 746
c_rt_lib0move(&___nl__3,___get_global_const(461));
#line 746
c_rt_lib0move(&___nl__2, generator_c_priv0get_lib_fun(___nl__3));
#line 746
c_rt_lib0clear(&___nl__3);
#line 746
c_rt_lib0move(&___nl__3,___get_global_const(371));
#line 746
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 746
c_rt_lib0clear(&___nl__3);
#line 746
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 746
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 746
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 746
c_rt_lib0clear(&___nl__3);
#line 746
c_rt_lib0clear(&___nl__0);
#line 746
c_rt_lib0clear(&___nl__1);
#line 746
return ___nl__2;
#line 746
c_rt_lib0clear(&___nl__2);
#line 747
goto label_99;
#line 747
label_37:
#line 748
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 748
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__0, ___nl__2));
#line 749
c_rt_lib0move(&___nl__4,___get_global_const(96));
#line 749
c_rt_lib0move(&___nl__5,___get_global_const(264));
#line 749
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 749
c_rt_lib0clear(&___nl__5);
#line 749
c_rt_lib0clear(&___nl__4);
#line 749
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 749
c_rt_lib0clear(&___nl__3);
#line 750
c_rt_lib0move(&___nl__4, string0lf());
#line 750
c_rt_lib0move(&___nl__5,___get_global_const(272));
#line 750
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 750
c_rt_lib0clear(&___nl__5);
#line 750
c_rt_lib0clear(&___nl__4);
#line 750
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 750
c_rt_lib0clear(&___nl__3);
#line 751
c_rt_lib0move(&___nl__4, string0r());
#line 751
c_rt_lib0move(&___nl__5,___get_global_const(462));
#line 751
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 751
c_rt_lib0clear(&___nl__5);
#line 751
c_rt_lib0clear(&___nl__4);
#line 751
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 751
c_rt_lib0clear(&___nl__3);
#line 752
c_rt_lib0move(&___nl__4, string0tab());
#line 752
c_rt_lib0move(&___nl__5,___get_global_const(463));
#line 752
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 752
c_rt_lib0clear(&___nl__5);
#line 752
c_rt_lib0clear(&___nl__4);
#line 752
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 752
c_rt_lib0clear(&___nl__3);
#line 753
c_rt_lib0move(&___nl__4,___get_global_const(235));
#line 753
c_rt_lib0move(&___nl__5,___get_global_const(269));
#line 753
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 753
c_rt_lib0clear(&___nl__5);
#line 753
c_rt_lib0clear(&___nl__4);
#line 753
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 753
c_rt_lib0clear(&___nl__3);
#line 754
c_rt_lib0move(&___nl__4,___get_global_const(464));
#line 754
c_rt_lib0move(&___nl__5,___get_global_const(465));
#line 754
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 754
c_rt_lib0clear(&___nl__5);
#line 754
c_rt_lib0clear(&___nl__4);
#line 754
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 754
c_rt_lib0clear(&___nl__3);
#line 755
c_rt_lib0move(&___nl__4,___get_global_const(466));
#line 755
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 755
c_rt_lib0clear(&___nl__4);
#line 755
c_rt_lib0move(&___nl__4,___get_global_const(467));
#line 755
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 755
c_rt_lib0clear(&___nl__4);
#line 755
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 755
c_rt_lib0move(&___nl__4,___get_global_const(468));
#line 755
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 755
c_rt_lib0clear(&___nl__4);
#line 755
c_rt_lib0clear(&___nl__0);
#line 755
c_rt_lib0clear(&___nl__1);
#line 755
c_rt_lib0clear(&___nl__2);
#line 755
return ___nl__3;
#line 755
c_rt_lib0clear(&___nl__3);
#line 755
c_rt_lib0clear(&___nl__2);
#line 756
goto label_99;
#line 756
label_99:
#line 756
c_rt_lib0clear(&___nl__1);
#line 756
c_rt_lib0clear(&___nl__0);
#line 756
return NULL;
}

ImmT generator_c_priv0create_sim_to_memory(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 760
c_rt_lib0move(&___nl__2, string_utils0is_integer(___nl__0));
#line 760
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 760
if(c_rt_lib0check_true_native(___nl__2)){ goto label_23;}
#line 761
c_rt_lib0move(&___nl__4,___get_global_const(469));
#line 761
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 761
c_rt_lib0clear(&___nl__4);
#line 761
c_rt_lib0move(&___nl__4,___get_global_const(371));
#line 761
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 761
c_rt_lib0clear(&___nl__4);
#line 761
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 761
c_rt_lib0move(&___nl__4,___get_global_const(256));
#line 761
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 761
c_rt_lib0clear(&___nl__4);
#line 761
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 761
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 761
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 761
c_rt_lib0clear(&___nl__4);
#line 761
c_rt_lib0clear(&___nl__0);
#line 761
c_rt_lib0clear(&___nl__1);
#line 761
c_rt_lib0clear(&___nl__2);
#line 761
return ___nl__3;
#line 761
c_rt_lib0clear(&___nl__3);
#line 762
goto label_123;
#line 762
label_23:
#line 762
c_rt_lib0move(&___nl__2, string_utils0is_float(___nl__0));
#line 762
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 762
if(c_rt_lib0check_true_native(___nl__2)){ goto label_47;}
#line 763
c_rt_lib0move(&___nl__4,___get_global_const(470));
#line 763
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 763
c_rt_lib0clear(&___nl__4);
#line 763
c_rt_lib0move(&___nl__4,___get_global_const(371));
#line 763
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 763
c_rt_lib0clear(&___nl__4);
#line 763
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 763
c_rt_lib0move(&___nl__4,___get_global_const(256));
#line 763
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 763
c_rt_lib0clear(&___nl__4);
#line 763
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 763
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 763
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 763
c_rt_lib0clear(&___nl__4);
#line 763
c_rt_lib0clear(&___nl__0);
#line 763
c_rt_lib0clear(&___nl__1);
#line 763
c_rt_lib0clear(&___nl__2);
#line 763
return ___nl__3;
#line 763
c_rt_lib0clear(&___nl__3);
#line 764
goto label_123;
#line 764
label_47:
#line 765
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 765
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__0, ___nl__3));
#line 766
c_rt_lib0move(&___nl__5,___get_global_const(96));
#line 766
c_rt_lib0move(&___nl__6,___get_global_const(264));
#line 766
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 766
c_rt_lib0clear(&___nl__6);
#line 766
c_rt_lib0clear(&___nl__5);
#line 766
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 766
c_rt_lib0clear(&___nl__4);
#line 767
c_rt_lib0move(&___nl__5, string0lf());
#line 767
c_rt_lib0move(&___nl__6,___get_global_const(272));
#line 767
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 767
c_rt_lib0clear(&___nl__6);
#line 767
c_rt_lib0clear(&___nl__5);
#line 767
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 767
c_rt_lib0clear(&___nl__4);
#line 768
c_rt_lib0move(&___nl__5, string0r());
#line 768
c_rt_lib0move(&___nl__6,___get_global_const(462));
#line 768
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 768
c_rt_lib0clear(&___nl__6);
#line 768
c_rt_lib0clear(&___nl__5);
#line 768
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 768
c_rt_lib0clear(&___nl__4);
#line 769
c_rt_lib0move(&___nl__5, string0tab());
#line 769
c_rt_lib0move(&___nl__6,___get_global_const(463));
#line 769
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 769
c_rt_lib0clear(&___nl__6);
#line 769
c_rt_lib0clear(&___nl__5);
#line 769
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 769
c_rt_lib0clear(&___nl__4);
#line 770
c_rt_lib0move(&___nl__5,___get_global_const(235));
#line 770
c_rt_lib0move(&___nl__6,___get_global_const(269));
#line 770
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 770
c_rt_lib0clear(&___nl__6);
#line 770
c_rt_lib0clear(&___nl__5);
#line 770
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 770
c_rt_lib0clear(&___nl__4);
#line 771
c_rt_lib0move(&___nl__5,___get_global_const(464));
#line 771
c_rt_lib0move(&___nl__6,___get_global_const(465));
#line 771
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 771
c_rt_lib0clear(&___nl__6);
#line 771
c_rt_lib0clear(&___nl__5);
#line 771
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 771
c_rt_lib0clear(&___nl__4);
#line 772
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 772
c_rt_lib0move(&___nl__5, string0chr(___nl__6));
#line 772
c_rt_lib0clear(&___nl__6);
#line 772
c_rt_lib0move(&___nl__6,___get_global_const(471));
#line 772
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 772
c_rt_lib0clear(&___nl__6);
#line 772
c_rt_lib0clear(&___nl__5);
#line 772
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 772
c_rt_lib0clear(&___nl__4);
#line 773
c_rt_lib0move(&___nl__5,___get_global_const(472));
#line 773
c_rt_lib0move(&___nl__4, generator_c_priv0get_lib_fun(___nl__5));
#line 773
c_rt_lib0clear(&___nl__5);
#line 773
c_rt_lib0move(&___nl__5,___get_global_const(467));
#line 773
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 773
c_rt_lib0clear(&___nl__5);
#line 773
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 773
c_rt_lib0move(&___nl__5,___get_global_const(473));
#line 773
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 773
c_rt_lib0clear(&___nl__5);
#line 773
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 773
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 773
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 773
c_rt_lib0clear(&___nl__5);
#line 773
c_rt_lib0clear(&___nl__0);
#line 773
c_rt_lib0clear(&___nl__1);
#line 773
c_rt_lib0clear(&___nl__2);
#line 773
c_rt_lib0clear(&___nl__3);
#line 773
return ___nl__4;
#line 773
c_rt_lib0clear(&___nl__4);
#line 773
c_rt_lib0clear(&___nl__3);
#line 774
goto label_123;
#line 774
label_123:
#line 774
c_rt_lib0clear(&___nl__2);
#line 774
c_rt_lib0clear(&___nl__0);
#line 774
c_rt_lib0clear(&___nl__1);
#line 774
return NULL;
}


static ImmT ___const__[17];
static int ___const_init__ = 1;
void generator_c_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[16];


for(int i=0;i<16;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 16);
}}
ImmT generator_c_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_c_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = generator_c_priv0get_bin_ops0cal();
	break;
case 1:
	___const__[1] = generator_c_priv0get_bin_ops_mod0cal();
	break;
case 2:
	___const__[2] = generator_c_priv0get_unary_ops0cal();
	break;
case 3:
	___const__[3] = generator_c_priv0gen_unary_ops0cal();
	break;
case 4:
	___const__[4] = generator_c_priv0gen_bin_ops0cal();
	break;
case 5:
	___const__[5] = generator_c_priv0gen_bin_ops_mod0cal();
	break;
case 6:
	___const__[6] = generator_c0const_dict0cal();
	break;
case 7:
	___const__[7] = generator_c0fun_args_t0cal();
	break;
case 8:
	___const__[8] = generator_c0const_t0cal();
	break;
case 9:
	___const__[9] = generator_c0global_const_t0cal();
	break;
case 10:
	___const__[10] = generator_c0state_t0cal();
	break;
case 11:
	___const__[11] = generator_c0get_empty_state0cal();
	break;
case 12:
	___const__[12] = generator_c_priv0arg_t0cal();
	break;
case 13:
	___const__[13] = generator_c0module_out_t0cal();
	break;
case 14:
	___const__[14] = generator_c0out_t0cal();
	break;
case 15:
	___const__[15] = generator_c_priv0get_cr0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
