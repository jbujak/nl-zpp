
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "nast.h"
#include "hash.h"
#include "ptd.h"
#include "singleton.h"
#include "tct.h"
#include "nast.h"
#include "tct.h"
#line 1 "nast.nl"

static ImmT *__const__f = NULL;
void nast_priv0__const__init();
ImmT nast_priv0__const__sim(int __nr);
ImmT nast_priv0__const__sing(int __nr);

ImmT  nast_priv0op_def(nast0op_struct_t0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,nast0op_assoc_t0type ___nl__im__3);


ImmT  nast0intepreter_evaluate_max_steps0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0intepreter_evaluate_max_steps");
return nast0intepreter_evaluate_max_steps();
}
ImmT  nast0intepreter_evaluate_max_steps() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
INT  ___nl__int__1 = 0;
#line 12
___nl__int__1 = 500000;
#line 12
c_rt_lib0move(&___nl__im__0, c_rt_lib0int_new(___nl__int__1));
#line 12
//clear ___nl__int__1;
#line 12
return ___nl__im__0;
#line 12
c_rt_lib0clear(&___nl__im__0);
#line 12
//clear ___nl__int__1;
#line 12
return NULL;
}

ImmT  nast0op_assoc_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0op_assoc_t");
return nast0op_assoc_t();
}
ImmT  nast0op_assoc_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 16
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 16
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 16
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 16
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(281), ___nl__im__3, ___get_global_const(282), ___nl__im__4, ___get_global_const(74), ___nl__im__5));
#line 16
c_rt_lib0clear(&___nl__im__3);
#line 16
c_rt_lib0clear(&___nl__im__4);
#line 16
c_rt_lib0clear(&___nl__im__5);
#line 16
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 16
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__6));
#line 16
c_rt_lib0clear(&___nl__im__2);
#line 16
c_rt_lib0clear(&___nl__im__3);
#line 16
c_rt_lib0clear(&___nl__im__4);
#line 16
c_rt_lib0clear(&___nl__im__5);
#line 16
c_rt_lib0clear(&___nl__im__6);
#line 16
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 16
c_rt_lib0clear(&___nl__im__1);
#line 16
c_rt_lib0clear(&___nl__im__2);
#line 16
c_rt_lib0clear(&___nl__im__3);
#line 16
c_rt_lib0clear(&___nl__im__4);
#line 16
c_rt_lib0clear(&___nl__im__5);
#line 16
c_rt_lib0clear(&___nl__im__6);
#line 16
return ___nl__im__0;
#line 16
c_rt_lib0clear(&___nl__im__0);
#line 16
c_rt_lib0clear(&___nl__im__1);
#line 16
c_rt_lib0clear(&___nl__im__2);
#line 16
c_rt_lib0clear(&___nl__im__3);
#line 16
c_rt_lib0clear(&___nl__im__4);
#line 16
c_rt_lib0clear(&___nl__im__5);
#line 16
c_rt_lib0clear(&___nl__im__6);
#line 16
return NULL;
}

ImmT  nast0op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0op_t");
return nast0op_t();
}
ImmT  nast0op_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 20
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 20
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0op_assoc_t0ptr, ___get_global_const(46), ___get_global_const(1064)));
#line 20
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 20
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(1065), ___nl__im__3, ___get_global_const(1066), ___nl__im__4));
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 20
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__5));
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0clear(&___nl__im__5);
#line 20
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0clear(&___nl__im__5);
#line 20
return ___nl__im__0;
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0clear(&___nl__im__5);
#line 20
return NULL;
}

ImmT  nast0op_struct_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0op_struct_t");
return nast0op_struct_t();
}
ImmT  nast0op_struct_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0op_t0ptr, ___get_global_const(46), ___get_global_const(1067)));
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 24
c_rt_lib0copy(&___nl__im__3, ___nl__im__2);
#line 24
c_rt_lib0move(&___nl__im__1, ptd0hash(___nl__im__3));
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 24
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 24
c_rt_lib0clear(&___nl__im__1);
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 24
return ___nl__im__0;
#line 24
c_rt_lib0clear(&___nl__im__0);
#line 24
c_rt_lib0clear(&___nl__im__1);
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 24
return NULL;
}

ImmT  nast_priv0op_def(nast0op_struct_t0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,nast0op_assoc_t0type ___nl__im__3) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__3);
nast_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 28
c_rt_lib0copy(&___nl__im__4, ___nl__im__1);
#line 28
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__2));
#line 28
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(1065), ___nl__im__6, ___get_global_const(1066), ___nl__im__3));
#line 28
c_rt_lib0clear(&___nl__im__6);
#line 28
c_rt_lib0copy(&___nl__im__7, ___nl__im__5);
#line 28
c_rt_lib0delete(hash0set_value(___ref___im__0, ___nl__im__4, ___nl__im__7));
#line 28
c_rt_lib0clear(&___nl__im__4);
#line 28
c_rt_lib0clear(&___nl__im__5);
#line 28
c_rt_lib0clear(&___nl__im__6);
#line 28
c_rt_lib0clear(&___nl__im__7);
#line 28
c_rt_lib0clear(&___nl__im__1);
#line 28
//clear ___nl__int__2;
#line 28
c_rt_lib0clear(&___nl__im__3);
#line 28
c_rt_lib0clear(&___nl__im__4);
#line 28
c_rt_lib0clear(&___nl__im__5);
#line 28
c_rt_lib0clear(&___nl__im__6);
#line 28
c_rt_lib0clear(&___nl__im__7);
#line 28
return NULL;
}

nast0op_struct_t0type nast0get_ternary_ops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_ternary_ops");
return nast0get_ternary_ops();
}
nast0op_struct_t0type nast0get_ternary_ops() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 32
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 33
c_rt_lib0move(&___nl__im__1,___get_global_const(1068));
#line 33
c_rt_lib0copy(&___nl__im__2, ___nl__im__1);
#line 33
___nl__int__3 = 880;
#line 33
___nl__int__4 = ___nl__int__3;
#line 33
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(282)));
#line 33
c_rt_lib0copy(&___nl__im__6, ___nl__im__5);
#line 33
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__2, ___nl__int__4, ___nl__im__6));
#line 33
c_rt_lib0clear(&___nl__im__1);
#line 33
c_rt_lib0clear(&___nl__im__2);
#line 33
//clear ___nl__int__3;
#line 33
//clear ___nl__int__4;
#line 33
c_rt_lib0clear(&___nl__im__5);
#line 33
c_rt_lib0clear(&___nl__im__6);
#line 34
c_rt_lib0copy(&___nl__im__9, ___nl__im__0);
#line 34
c_rt_lib0move(&___nl__im__8, singleton0sigleton_do_not_use_without_approval(___nl__im__9));
#line 34
c_rt_lib0clear(&___nl__im__9);
#line 34
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
c_rt_lib0clear(&___nl__im__1);
#line 34
c_rt_lib0clear(&___nl__im__2);
#line 34
//clear ___nl__int__3;
#line 34
//clear ___nl__int__4;
#line 34
c_rt_lib0clear(&___nl__im__5);
#line 34
c_rt_lib0clear(&___nl__im__6);
#line 34
c_rt_lib0clear(&___nl__im__8);
#line 34
c_rt_lib0clear(&___nl__im__9);
#line 34
return ___nl__im__7;
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
c_rt_lib0clear(&___nl__im__1);
#line 34
c_rt_lib0clear(&___nl__im__2);
#line 34
//clear ___nl__int__3;
#line 34
//clear ___nl__int__4;
#line 34
c_rt_lib0clear(&___nl__im__5);
#line 34
c_rt_lib0clear(&___nl__im__6);
#line 34
c_rt_lib0clear(&___nl__im__7);
#line 34
c_rt_lib0clear(&___nl__im__8);
#line 34
c_rt_lib0clear(&___nl__im__9);
#line 34
return NULL;
}

nast0op_struct_t0type nast0get_unary_ops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_unary_ops");
return nast0get_unary_ops();
}
nast0op_struct_t0type nast0get_unary_ops() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
#line 38
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 39
c_rt_lib0move(&___nl__im__1,___get_global_const(313));
#line 39
c_rt_lib0copy(&___nl__im__2, ___nl__im__1);
#line 39
___nl__int__3 = 1010;
#line 39
___nl__int__4 = ___nl__int__3;
#line 39
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(282)));
#line 39
c_rt_lib0copy(&___nl__im__6, ___nl__im__5);
#line 39
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__2, ___nl__int__4, ___nl__im__6));
#line 39
c_rt_lib0clear(&___nl__im__1);
#line 39
c_rt_lib0clear(&___nl__im__2);
#line 39
//clear ___nl__int__3;
#line 39
//clear ___nl__int__4;
#line 39
c_rt_lib0clear(&___nl__im__5);
#line 39
c_rt_lib0clear(&___nl__im__6);
#line 40
c_rt_lib0move(&___nl__im__7,___get_global_const(1069));
#line 40
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 40
___nl__int__9 = 990;
#line 40
___nl__int__10 = ___nl__int__9;
#line 40
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 40
c_rt_lib0copy(&___nl__im__12, ___nl__im__11);
#line 40
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__8, ___nl__int__10, ___nl__im__12));
#line 40
c_rt_lib0clear(&___nl__im__7);
#line 40
c_rt_lib0clear(&___nl__im__8);
#line 40
//clear ___nl__int__9;
#line 40
//clear ___nl__int__10;
#line 40
c_rt_lib0clear(&___nl__im__11);
#line 40
c_rt_lib0clear(&___nl__im__12);
#line 41
c_rt_lib0move(&___nl__im__13,___get_global_const(202));
#line 41
c_rt_lib0copy(&___nl__im__14, ___nl__im__13);
#line 41
___nl__int__15 = 990;
#line 41
___nl__int__16 = ___nl__int__15;
#line 41
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 41
c_rt_lib0copy(&___nl__im__18, ___nl__im__17);
#line 41
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__14, ___nl__int__16, ___nl__im__18));
#line 41
c_rt_lib0clear(&___nl__im__13);
#line 41
c_rt_lib0clear(&___nl__im__14);
#line 41
//clear ___nl__int__15;
#line 41
//clear ___nl__int__16;
#line 41
c_rt_lib0clear(&___nl__im__17);
#line 41
c_rt_lib0clear(&___nl__im__18);
#line 42
c_rt_lib0move(&___nl__im__19,___get_global_const(344));
#line 42
c_rt_lib0copy(&___nl__im__20, ___nl__im__19);
#line 42
___nl__int__21 = 980;
#line 42
___nl__int__22 = ___nl__int__21;
#line 42
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_none(___get_global_const(282)));
#line 42
c_rt_lib0copy(&___nl__im__24, ___nl__im__23);
#line 42
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__20, ___nl__int__22, ___nl__im__24));
#line 42
c_rt_lib0clear(&___nl__im__19);
#line 42
c_rt_lib0clear(&___nl__im__20);
#line 42
//clear ___nl__int__21;
#line 42
//clear ___nl__int__22;
#line 42
c_rt_lib0clear(&___nl__im__23);
#line 42
c_rt_lib0clear(&___nl__im__24);
#line 43
c_rt_lib0move(&___nl__im__25,___get_global_const(348));
#line 43
c_rt_lib0copy(&___nl__im__26, ___nl__im__25);
#line 43
___nl__int__27 = 980;
#line 43
___nl__int__28 = ___nl__int__27;
#line 43
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_const(282)));
#line 43
c_rt_lib0copy(&___nl__im__30, ___nl__im__29);
#line 43
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__26, ___nl__int__28, ___nl__im__30));
#line 43
c_rt_lib0clear(&___nl__im__25);
#line 43
c_rt_lib0clear(&___nl__im__26);
#line 43
//clear ___nl__int__27;
#line 43
//clear ___nl__int__28;
#line 43
c_rt_lib0clear(&___nl__im__29);
#line 43
c_rt_lib0clear(&___nl__im__30);
#line 44
c_rt_lib0move(&___nl__im__31,___get_global_const(346));
#line 44
c_rt_lib0copy(&___nl__im__32, ___nl__im__31);
#line 44
___nl__int__33 = 980;
#line 44
___nl__int__34 = ___nl__int__33;
#line 44
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_const(282)));
#line 44
c_rt_lib0copy(&___nl__im__36, ___nl__im__35);
#line 44
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__32, ___nl__int__34, ___nl__im__36));
#line 44
c_rt_lib0clear(&___nl__im__31);
#line 44
c_rt_lib0clear(&___nl__im__32);
#line 44
//clear ___nl__int__33;
#line 44
//clear ___nl__int__34;
#line 44
c_rt_lib0clear(&___nl__im__35);
#line 44
c_rt_lib0clear(&___nl__im__36);
#line 45
c_rt_lib0copy(&___nl__im__39, ___nl__im__0);
#line 45
c_rt_lib0move(&___nl__im__38, singleton0sigleton_do_not_use_without_approval(___nl__im__39));
#line 45
c_rt_lib0clear(&___nl__im__39);
#line 45
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 45
c_rt_lib0clear(&___nl__im__0);
#line 45
c_rt_lib0clear(&___nl__im__1);
#line 45
c_rt_lib0clear(&___nl__im__2);
#line 45
//clear ___nl__int__3;
#line 45
//clear ___nl__int__4;
#line 45
c_rt_lib0clear(&___nl__im__5);
#line 45
c_rt_lib0clear(&___nl__im__6);
#line 45
c_rt_lib0clear(&___nl__im__7);
#line 45
c_rt_lib0clear(&___nl__im__8);
#line 45
//clear ___nl__int__9;
#line 45
//clear ___nl__int__10;
#line 45
c_rt_lib0clear(&___nl__im__11);
#line 45
c_rt_lib0clear(&___nl__im__12);
#line 45
c_rt_lib0clear(&___nl__im__13);
#line 45
c_rt_lib0clear(&___nl__im__14);
#line 45
//clear ___nl__int__15;
#line 45
//clear ___nl__int__16;
#line 45
c_rt_lib0clear(&___nl__im__17);
#line 45
c_rt_lib0clear(&___nl__im__18);
#line 45
c_rt_lib0clear(&___nl__im__19);
#line 45
c_rt_lib0clear(&___nl__im__20);
#line 45
//clear ___nl__int__21;
#line 45
//clear ___nl__int__22;
#line 45
c_rt_lib0clear(&___nl__im__23);
#line 45
c_rt_lib0clear(&___nl__im__24);
#line 45
c_rt_lib0clear(&___nl__im__25);
#line 45
c_rt_lib0clear(&___nl__im__26);
#line 45
//clear ___nl__int__27;
#line 45
//clear ___nl__int__28;
#line 45
c_rt_lib0clear(&___nl__im__29);
#line 45
c_rt_lib0clear(&___nl__im__30);
#line 45
c_rt_lib0clear(&___nl__im__31);
#line 45
c_rt_lib0clear(&___nl__im__32);
#line 45
//clear ___nl__int__33;
#line 45
//clear ___nl__int__34;
#line 45
c_rt_lib0clear(&___nl__im__35);
#line 45
c_rt_lib0clear(&___nl__im__36);
#line 45
c_rt_lib0clear(&___nl__im__38);
#line 45
c_rt_lib0clear(&___nl__im__39);
#line 45
return ___nl__im__37;
#line 45
c_rt_lib0clear(&___nl__im__0);
#line 45
c_rt_lib0clear(&___nl__im__1);
#line 45
c_rt_lib0clear(&___nl__im__2);
#line 45
//clear ___nl__int__3;
#line 45
//clear ___nl__int__4;
#line 45
c_rt_lib0clear(&___nl__im__5);
#line 45
c_rt_lib0clear(&___nl__im__6);
#line 45
c_rt_lib0clear(&___nl__im__7);
#line 45
c_rt_lib0clear(&___nl__im__8);
#line 45
//clear ___nl__int__9;
#line 45
//clear ___nl__int__10;
#line 45
c_rt_lib0clear(&___nl__im__11);
#line 45
c_rt_lib0clear(&___nl__im__12);
#line 45
c_rt_lib0clear(&___nl__im__13);
#line 45
c_rt_lib0clear(&___nl__im__14);
#line 45
//clear ___nl__int__15;
#line 45
//clear ___nl__int__16;
#line 45
c_rt_lib0clear(&___nl__im__17);
#line 45
c_rt_lib0clear(&___nl__im__18);
#line 45
c_rt_lib0clear(&___nl__im__19);
#line 45
c_rt_lib0clear(&___nl__im__20);
#line 45
//clear ___nl__int__21;
#line 45
//clear ___nl__int__22;
#line 45
c_rt_lib0clear(&___nl__im__23);
#line 45
c_rt_lib0clear(&___nl__im__24);
#line 45
c_rt_lib0clear(&___nl__im__25);
#line 45
c_rt_lib0clear(&___nl__im__26);
#line 45
//clear ___nl__int__27;
#line 45
//clear ___nl__int__28;
#line 45
c_rt_lib0clear(&___nl__im__29);
#line 45
c_rt_lib0clear(&___nl__im__30);
#line 45
c_rt_lib0clear(&___nl__im__31);
#line 45
c_rt_lib0clear(&___nl__im__32);
#line 45
//clear ___nl__int__33;
#line 45
//clear ___nl__int__34;
#line 45
c_rt_lib0clear(&___nl__im__35);
#line 45
c_rt_lib0clear(&___nl__im__36);
#line 45
c_rt_lib0clear(&___nl__im__37);
#line 45
c_rt_lib0clear(&___nl__im__38);
#line 45
c_rt_lib0clear(&___nl__im__39);
#line 45
return NULL;
}

nast0op_struct_t0type nast0get_bin_ops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_bin_ops");
return nast0get_bin_ops();
}
nast0op_struct_t0type nast0get_bin_ops() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
INT  ___nl__int__45 = 0;
INT  ___nl__int__46 = 0;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
INT  ___nl__int__51 = 0;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
INT  ___nl__int__57 = 0;
INT  ___nl__int__58 = 0;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
INT  ___nl__int__63 = 0;
INT  ___nl__int__64 = 0;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
INT  ___nl__int__75 = 0;
INT  ___nl__int__76 = 0;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
INT  ___nl__int__81 = 0;
INT  ___nl__int__82 = 0;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
INT  ___nl__int__87 = 0;
INT  ___nl__int__88 = 0;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
INT  ___nl__int__93 = 0;
INT  ___nl__int__94 = 0;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
INT  ___nl__int__99 = 0;
INT  ___nl__int__100 = 0;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
INT  ___nl__int__105 = 0;
INT  ___nl__int__106 = 0;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
INT  ___nl__int__111 = 0;
INT  ___nl__int__112 = 0;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
INT  ___nl__int__117 = 0;
INT  ___nl__int__118 = 0;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
INT  ___nl__int__123 = 0;
INT  ___nl__int__124 = 0;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
INT  ___nl__int__129 = 0;
INT  ___nl__int__130 = 0;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
INT  ___nl__int__135 = 0;
INT  ___nl__int__136 = 0;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
INT  ___nl__int__141 = 0;
INT  ___nl__int__142 = 0;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
INT  ___nl__int__147 = 0;
INT  ___nl__int__148 = 0;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
INT  ___nl__int__153 = 0;
INT  ___nl__int__154 = 0;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
#line 49
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 50
c_rt_lib0move(&___nl__im__1,___get_global_const(537));
#line 50
c_rt_lib0copy(&___nl__im__2, ___nl__im__1);
#line 50
___nl__int__3 = 2000;
#line 50
___nl__int__4 = ___nl__int__3;
#line 50
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(281)));
#line 50
c_rt_lib0copy(&___nl__im__6, ___nl__im__5);
#line 50
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__2, ___nl__int__4, ___nl__im__6));
#line 50
c_rt_lib0clear(&___nl__im__1);
#line 50
c_rt_lib0clear(&___nl__im__2);
#line 50
//clear ___nl__int__3;
#line 50
//clear ___nl__int__4;
#line 50
c_rt_lib0clear(&___nl__im__5);
#line 50
c_rt_lib0clear(&___nl__im__6);
#line 51
c_rt_lib0move(&___nl__im__7,___get_global_const(1070));
#line 51
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 51
___nl__int__9 = 1500;
#line 51
___nl__int__10 = ___nl__int__9;
#line 51
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(281)));
#line 51
c_rt_lib0copy(&___nl__im__12, ___nl__im__11);
#line 51
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__8, ___nl__int__10, ___nl__im__12));
#line 51
c_rt_lib0clear(&___nl__im__7);
#line 51
c_rt_lib0clear(&___nl__im__8);
#line 51
//clear ___nl__int__9;
#line 51
//clear ___nl__int__10;
#line 51
c_rt_lib0clear(&___nl__im__11);
#line 51
c_rt_lib0clear(&___nl__im__12);
#line 52
c_rt_lib0move(&___nl__im__13,___get_global_const(1071));
#line 52
c_rt_lib0copy(&___nl__im__14, ___nl__im__13);
#line 52
___nl__int__15 = 1500;
#line 52
___nl__int__16 = ___nl__int__15;
#line 52
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_const(281)));
#line 52
c_rt_lib0copy(&___nl__im__18, ___nl__im__17);
#line 52
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__14, ___nl__int__16, ___nl__im__18));
#line 52
c_rt_lib0clear(&___nl__im__13);
#line 52
c_rt_lib0clear(&___nl__im__14);
#line 52
//clear ___nl__int__15;
#line 52
//clear ___nl__int__16;
#line 52
c_rt_lib0clear(&___nl__im__17);
#line 52
c_rt_lib0clear(&___nl__im__18);
#line 53
c_rt_lib0move(&___nl__im__19,___get_global_const(354));
#line 53
c_rt_lib0copy(&___nl__im__20, ___nl__im__19);
#line 53
___nl__int__21 = 970;
#line 53
___nl__int__22 = ___nl__int__21;
#line 53
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_none(___get_global_const(281)));
#line 53
c_rt_lib0copy(&___nl__im__24, ___nl__im__23);
#line 53
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__20, ___nl__int__22, ___nl__im__24));
#line 53
c_rt_lib0clear(&___nl__im__19);
#line 53
c_rt_lib0clear(&___nl__im__20);
#line 53
//clear ___nl__int__21;
#line 53
//clear ___nl__int__22;
#line 53
c_rt_lib0clear(&___nl__im__23);
#line 53
c_rt_lib0clear(&___nl__im__24);
#line 54
c_rt_lib0move(&___nl__im__25,___get_global_const(110));
#line 54
c_rt_lib0copy(&___nl__im__26, ___nl__im__25);
#line 54
___nl__int__27 = 970;
#line 54
___nl__int__28 = ___nl__int__27;
#line 54
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_const(281)));
#line 54
c_rt_lib0copy(&___nl__im__30, ___nl__im__29);
#line 54
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__26, ___nl__int__28, ___nl__im__30));
#line 54
c_rt_lib0clear(&___nl__im__25);
#line 54
c_rt_lib0clear(&___nl__im__26);
#line 54
//clear ___nl__int__27;
#line 54
//clear ___nl__int__28;
#line 54
c_rt_lib0clear(&___nl__im__29);
#line 54
c_rt_lib0clear(&___nl__im__30);
#line 55
c_rt_lib0move(&___nl__im__31,___get_global_const(357));
#line 55
c_rt_lib0copy(&___nl__im__32, ___nl__im__31);
#line 55
___nl__int__33 = 970;
#line 55
___nl__int__34 = ___nl__int__33;
#line 55
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_const(281)));
#line 55
c_rt_lib0copy(&___nl__im__36, ___nl__im__35);
#line 55
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__32, ___nl__int__34, ___nl__im__36));
#line 55
c_rt_lib0clear(&___nl__im__31);
#line 55
c_rt_lib0clear(&___nl__im__32);
#line 55
//clear ___nl__int__33;
#line 55
//clear ___nl__int__34;
#line 55
c_rt_lib0clear(&___nl__im__35);
#line 55
c_rt_lib0clear(&___nl__im__36);
#line 56
c_rt_lib0move(&___nl__im__37,___get_global_const(348));
#line 56
c_rt_lib0copy(&___nl__im__38, ___nl__im__37);
#line 56
___nl__int__39 = 960;
#line 56
___nl__int__40 = ___nl__int__39;
#line 56
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_none(___get_global_const(281)));
#line 56
c_rt_lib0copy(&___nl__im__42, ___nl__im__41);
#line 56
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__38, ___nl__int__40, ___nl__im__42));
#line 56
c_rt_lib0clear(&___nl__im__37);
#line 56
c_rt_lib0clear(&___nl__im__38);
#line 56
//clear ___nl__int__39;
#line 56
//clear ___nl__int__40;
#line 56
c_rt_lib0clear(&___nl__im__41);
#line 56
c_rt_lib0clear(&___nl__im__42);
#line 57
c_rt_lib0move(&___nl__im__43,___get_global_const(346));
#line 57
c_rt_lib0copy(&___nl__im__44, ___nl__im__43);
#line 57
___nl__int__45 = 960;
#line 57
___nl__int__46 = ___nl__int__45;
#line 57
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_const(281)));
#line 57
c_rt_lib0copy(&___nl__im__48, ___nl__im__47);
#line 57
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__44, ___nl__int__46, ___nl__im__48));
#line 57
c_rt_lib0clear(&___nl__im__43);
#line 57
c_rt_lib0clear(&___nl__im__44);
#line 57
//clear ___nl__int__45;
#line 57
//clear ___nl__int__46;
#line 57
c_rt_lib0clear(&___nl__im__47);
#line 57
c_rt_lib0clear(&___nl__im__48);
#line 58
c_rt_lib0move(&___nl__im__49,___get_global_const(125));
#line 58
c_rt_lib0copy(&___nl__im__50, ___nl__im__49);
#line 58
___nl__int__51 = 960;
#line 58
___nl__int__52 = ___nl__int__51;
#line 58
c_rt_lib0move(&___nl__im__53, c_rt_lib0ov_mk_none(___get_global_const(281)));
#line 58
c_rt_lib0copy(&___nl__im__54, ___nl__im__53);
#line 58
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__50, ___nl__int__52, ___nl__im__54));
#line 58
c_rt_lib0clear(&___nl__im__49);
#line 58
c_rt_lib0clear(&___nl__im__50);
#line 58
//clear ___nl__int__51;
#line 58
//clear ___nl__int__52;
#line 58
c_rt_lib0clear(&___nl__im__53);
#line 58
c_rt_lib0clear(&___nl__im__54);
#line 59
c_rt_lib0move(&___nl__im__55,___get_global_const(368));
#line 59
c_rt_lib0copy(&___nl__im__56, ___nl__im__55);
#line 59
___nl__int__57 = 940;
#line 59
___nl__int__58 = ___nl__int__57;
#line 59
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 59
c_rt_lib0copy(&___nl__im__60, ___nl__im__59);
#line 59
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__56, ___nl__int__58, ___nl__im__60));
#line 59
c_rt_lib0clear(&___nl__im__55);
#line 59
c_rt_lib0clear(&___nl__im__56);
#line 59
//clear ___nl__int__57;
#line 59
//clear ___nl__int__58;
#line 59
c_rt_lib0clear(&___nl__im__59);
#line 59
c_rt_lib0clear(&___nl__im__60);
#line 60
c_rt_lib0move(&___nl__im__61,___get_global_const(358));
#line 60
c_rt_lib0copy(&___nl__im__62, ___nl__im__61);
#line 60
___nl__int__63 = 940;
#line 60
___nl__int__64 = ___nl__int__63;
#line 60
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 60
c_rt_lib0copy(&___nl__im__66, ___nl__im__65);
#line 60
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__62, ___nl__int__64, ___nl__im__66));
#line 60
c_rt_lib0clear(&___nl__im__61);
#line 60
c_rt_lib0clear(&___nl__im__62);
#line 60
//clear ___nl__int__63;
#line 60
//clear ___nl__int__64;
#line 60
c_rt_lib0clear(&___nl__im__65);
#line 60
c_rt_lib0clear(&___nl__im__66);
#line 61
c_rt_lib0move(&___nl__im__67,___get_global_const(360));
#line 61
c_rt_lib0copy(&___nl__im__68, ___nl__im__67);
#line 61
___nl__int__69 = 940;
#line 61
___nl__int__70 = ___nl__int__69;
#line 61
c_rt_lib0move(&___nl__im__71, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 61
c_rt_lib0copy(&___nl__im__72, ___nl__im__71);
#line 61
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__68, ___nl__int__70, ___nl__im__72));
#line 61
c_rt_lib0clear(&___nl__im__67);
#line 61
c_rt_lib0clear(&___nl__im__68);
#line 61
//clear ___nl__int__69;
#line 61
//clear ___nl__int__70;
#line 61
c_rt_lib0clear(&___nl__im__71);
#line 61
c_rt_lib0clear(&___nl__im__72);
#line 62
c_rt_lib0move(&___nl__im__73,___get_global_const(366));
#line 62
c_rt_lib0copy(&___nl__im__74, ___nl__im__73);
#line 62
___nl__int__75 = 940;
#line 62
___nl__int__76 = ___nl__int__75;
#line 62
c_rt_lib0move(&___nl__im__77, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 62
c_rt_lib0copy(&___nl__im__78, ___nl__im__77);
#line 62
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__74, ___nl__int__76, ___nl__im__78));
#line 62
c_rt_lib0clear(&___nl__im__73);
#line 62
c_rt_lib0clear(&___nl__im__74);
#line 62
//clear ___nl__int__75;
#line 62
//clear ___nl__int__76;
#line 62
c_rt_lib0clear(&___nl__im__77);
#line 62
c_rt_lib0clear(&___nl__im__78);
#line 63
c_rt_lib0move(&___nl__im__79,___get_global_const(362));
#line 63
c_rt_lib0copy(&___nl__im__80, ___nl__im__79);
#line 63
___nl__int__81 = 930;
#line 63
___nl__int__82 = ___nl__int__81;
#line 63
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 63
c_rt_lib0copy(&___nl__im__84, ___nl__im__83);
#line 63
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__80, ___nl__int__82, ___nl__im__84));
#line 63
c_rt_lib0clear(&___nl__im__79);
#line 63
c_rt_lib0clear(&___nl__im__80);
#line 63
//clear ___nl__int__81;
#line 63
//clear ___nl__int__82;
#line 63
c_rt_lib0clear(&___nl__im__83);
#line 63
c_rt_lib0clear(&___nl__im__84);
#line 64
c_rt_lib0move(&___nl__im__85,___get_global_const(364));
#line 64
c_rt_lib0copy(&___nl__im__86, ___nl__im__85);
#line 64
___nl__int__87 = 930;
#line 64
___nl__int__88 = ___nl__int__87;
#line 64
c_rt_lib0move(&___nl__im__89, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 64
c_rt_lib0copy(&___nl__im__90, ___nl__im__89);
#line 64
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__86, ___nl__int__88, ___nl__im__90));
#line 64
c_rt_lib0clear(&___nl__im__85);
#line 64
c_rt_lib0clear(&___nl__im__86);
#line 64
//clear ___nl__int__87;
#line 64
//clear ___nl__int__88;
#line 64
c_rt_lib0clear(&___nl__im__89);
#line 64
c_rt_lib0clear(&___nl__im__90);
#line 65
c_rt_lib0move(&___nl__im__91,___get_global_const(350));
#line 65
c_rt_lib0copy(&___nl__im__92, ___nl__im__91);
#line 65
___nl__int__93 = 930;
#line 65
___nl__int__94 = ___nl__int__93;
#line 65
c_rt_lib0move(&___nl__im__95, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 65
c_rt_lib0copy(&___nl__im__96, ___nl__im__95);
#line 65
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__92, ___nl__int__94, ___nl__im__96));
#line 65
c_rt_lib0clear(&___nl__im__91);
#line 65
c_rt_lib0clear(&___nl__im__92);
#line 65
//clear ___nl__int__93;
#line 65
//clear ___nl__int__94;
#line 65
c_rt_lib0clear(&___nl__im__95);
#line 65
c_rt_lib0clear(&___nl__im__96);
#line 66
c_rt_lib0move(&___nl__im__97,___get_global_const(351));
#line 66
c_rt_lib0copy(&___nl__im__98, ___nl__im__97);
#line 66
___nl__int__99 = 930;
#line 66
___nl__int__100 = ___nl__int__99;
#line 66
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 66
c_rt_lib0copy(&___nl__im__102, ___nl__im__101);
#line 66
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__98, ___nl__int__100, ___nl__im__102));
#line 66
c_rt_lib0clear(&___nl__im__97);
#line 66
c_rt_lib0clear(&___nl__im__98);
#line 66
//clear ___nl__int__99;
#line 66
//clear ___nl__int__100;
#line 66
c_rt_lib0clear(&___nl__im__101);
#line 66
c_rt_lib0clear(&___nl__im__102);
#line 67
c_rt_lib0move(&___nl__im__103,___get_global_const(980));
#line 67
c_rt_lib0copy(&___nl__im__104, ___nl__im__103);
#line 67
___nl__int__105 = 900;
#line 67
___nl__int__106 = ___nl__int__105;
#line 67
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_none(___get_global_const(281)));
#line 67
c_rt_lib0copy(&___nl__im__108, ___nl__im__107);
#line 67
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__104, ___nl__int__106, ___nl__im__108));
#line 67
c_rt_lib0clear(&___nl__im__103);
#line 67
c_rt_lib0clear(&___nl__im__104);
#line 67
//clear ___nl__int__105;
#line 67
//clear ___nl__int__106;
#line 67
c_rt_lib0clear(&___nl__im__107);
#line 67
c_rt_lib0clear(&___nl__im__108);
#line 68
c_rt_lib0move(&___nl__im__109,___get_global_const(981));
#line 68
c_rt_lib0copy(&___nl__im__110, ___nl__im__109);
#line 68
___nl__int__111 = 890;
#line 68
___nl__int__112 = ___nl__int__111;
#line 68
c_rt_lib0move(&___nl__im__113, c_rt_lib0ov_mk_none(___get_global_const(281)));
#line 68
c_rt_lib0copy(&___nl__im__114, ___nl__im__113);
#line 68
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__110, ___nl__int__112, ___nl__im__114));
#line 68
c_rt_lib0clear(&___nl__im__109);
#line 68
c_rt_lib0clear(&___nl__im__110);
#line 68
//clear ___nl__int__111;
#line 68
//clear ___nl__int__112;
#line 68
c_rt_lib0clear(&___nl__im__113);
#line 68
c_rt_lib0clear(&___nl__im__114);
#line 69
c_rt_lib0move(&___nl__im__115,___get_global_const(1057));
#line 69
c_rt_lib0copy(&___nl__im__116, ___nl__im__115);
#line 69
___nl__int__117 = 870;
#line 69
___nl__int__118 = ___nl__int__117;
#line 69
c_rt_lib0move(&___nl__im__119, c_rt_lib0ov_mk_none(___get_global_const(282)));
#line 69
c_rt_lib0copy(&___nl__im__120, ___nl__im__119);
#line 69
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__116, ___nl__int__118, ___nl__im__120));
#line 69
c_rt_lib0clear(&___nl__im__115);
#line 69
c_rt_lib0clear(&___nl__im__116);
#line 69
//clear ___nl__int__117;
#line 69
//clear ___nl__int__118;
#line 69
c_rt_lib0clear(&___nl__im__119);
#line 69
c_rt_lib0clear(&___nl__im__120);
#line 70
c_rt_lib0move(&___nl__im__121,___get_global_const(1058));
#line 70
c_rt_lib0copy(&___nl__im__122, ___nl__im__121);
#line 70
___nl__int__123 = 870;
#line 70
___nl__int__124 = ___nl__int__123;
#line 70
c_rt_lib0move(&___nl__im__125, c_rt_lib0ov_mk_none(___get_global_const(282)));
#line 70
c_rt_lib0copy(&___nl__im__126, ___nl__im__125);
#line 70
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__122, ___nl__int__124, ___nl__im__126));
#line 70
c_rt_lib0clear(&___nl__im__121);
#line 70
c_rt_lib0clear(&___nl__im__122);
#line 70
//clear ___nl__int__123;
#line 70
//clear ___nl__int__124;
#line 70
c_rt_lib0clear(&___nl__im__125);
#line 70
c_rt_lib0clear(&___nl__im__126);
#line 71
c_rt_lib0move(&___nl__im__127,___get_global_const(1061));
#line 71
c_rt_lib0copy(&___nl__im__128, ___nl__im__127);
#line 71
___nl__int__129 = 870;
#line 71
___nl__int__130 = ___nl__int__129;
#line 71
c_rt_lib0move(&___nl__im__131, c_rt_lib0ov_mk_none(___get_global_const(282)));
#line 71
c_rt_lib0copy(&___nl__im__132, ___nl__im__131);
#line 71
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__128, ___nl__int__130, ___nl__im__132));
#line 71
c_rt_lib0clear(&___nl__im__127);
#line 71
c_rt_lib0clear(&___nl__im__128);
#line 71
//clear ___nl__int__129;
#line 71
//clear ___nl__int__130;
#line 71
c_rt_lib0clear(&___nl__im__131);
#line 71
c_rt_lib0clear(&___nl__im__132);
#line 72
c_rt_lib0move(&___nl__im__133,___get_global_const(1060));
#line 72
c_rt_lib0copy(&___nl__im__134, ___nl__im__133);
#line 72
___nl__int__135 = 870;
#line 72
___nl__int__136 = ___nl__int__135;
#line 72
c_rt_lib0move(&___nl__im__137, c_rt_lib0ov_mk_none(___get_global_const(282)));
#line 72
c_rt_lib0copy(&___nl__im__138, ___nl__im__137);
#line 72
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__134, ___nl__int__136, ___nl__im__138));
#line 72
c_rt_lib0clear(&___nl__im__133);
#line 72
c_rt_lib0clear(&___nl__im__134);
#line 72
//clear ___nl__int__135;
#line 72
//clear ___nl__int__136;
#line 72
c_rt_lib0clear(&___nl__im__137);
#line 72
c_rt_lib0clear(&___nl__im__138);
#line 73
c_rt_lib0move(&___nl__im__139,___get_global_const(1062));
#line 73
c_rt_lib0copy(&___nl__im__140, ___nl__im__139);
#line 73
___nl__int__141 = 870;
#line 73
___nl__int__142 = ___nl__int__141;
#line 73
c_rt_lib0move(&___nl__im__143, c_rt_lib0ov_mk_none(___get_global_const(282)));
#line 73
c_rt_lib0copy(&___nl__im__144, ___nl__im__143);
#line 73
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__140, ___nl__int__142, ___nl__im__144));
#line 73
c_rt_lib0clear(&___nl__im__139);
#line 73
c_rt_lib0clear(&___nl__im__140);
#line 73
//clear ___nl__int__141;
#line 73
//clear ___nl__int__142;
#line 73
c_rt_lib0clear(&___nl__im__143);
#line 73
c_rt_lib0clear(&___nl__im__144);
#line 74
c_rt_lib0move(&___nl__im__145,___get_global_const(1059));
#line 74
c_rt_lib0copy(&___nl__im__146, ___nl__im__145);
#line 74
___nl__int__147 = 870;
#line 74
___nl__int__148 = ___nl__int__147;
#line 74
c_rt_lib0move(&___nl__im__149, c_rt_lib0ov_mk_none(___get_global_const(282)));
#line 74
c_rt_lib0copy(&___nl__im__150, ___nl__im__149);
#line 74
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__146, ___nl__int__148, ___nl__im__150));
#line 74
c_rt_lib0clear(&___nl__im__145);
#line 74
c_rt_lib0clear(&___nl__im__146);
#line 74
//clear ___nl__int__147;
#line 74
//clear ___nl__int__148;
#line 74
c_rt_lib0clear(&___nl__im__149);
#line 74
c_rt_lib0clear(&___nl__im__150);
#line 75
c_rt_lib0move(&___nl__im__151,___get_global_const(1072));
#line 75
c_rt_lib0copy(&___nl__im__152, ___nl__im__151);
#line 75
___nl__int__153 = 870;
#line 75
___nl__int__154 = ___nl__int__153;
#line 75
c_rt_lib0move(&___nl__im__155, c_rt_lib0ov_mk_none(___get_global_const(282)));
#line 75
c_rt_lib0copy(&___nl__im__156, ___nl__im__155);
#line 75
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__152, ___nl__int__154, ___nl__im__156));
#line 75
c_rt_lib0clear(&___nl__im__151);
#line 75
c_rt_lib0clear(&___nl__im__152);
#line 75
//clear ___nl__int__153;
#line 75
//clear ___nl__int__154;
#line 75
c_rt_lib0clear(&___nl__im__155);
#line 75
c_rt_lib0clear(&___nl__im__156);
#line 76
c_rt_lib0copy(&___nl__im__159, ___nl__im__0);
#line 76
c_rt_lib0move(&___nl__im__158, singleton0sigleton_do_not_use_without_approval(___nl__im__159));
#line 76
c_rt_lib0clear(&___nl__im__159);
#line 76
c_rt_lib0copy(&___nl__im__157, ___nl__im__158);
#line 76
c_rt_lib0clear(&___nl__im__0);
#line 76
c_rt_lib0clear(&___nl__im__1);
#line 76
c_rt_lib0clear(&___nl__im__2);
#line 76
//clear ___nl__int__3;
#line 76
//clear ___nl__int__4;
#line 76
c_rt_lib0clear(&___nl__im__5);
#line 76
c_rt_lib0clear(&___nl__im__6);
#line 76
c_rt_lib0clear(&___nl__im__7);
#line 76
c_rt_lib0clear(&___nl__im__8);
#line 76
//clear ___nl__int__9;
#line 76
//clear ___nl__int__10;
#line 76
c_rt_lib0clear(&___nl__im__11);
#line 76
c_rt_lib0clear(&___nl__im__12);
#line 76
c_rt_lib0clear(&___nl__im__13);
#line 76
c_rt_lib0clear(&___nl__im__14);
#line 76
//clear ___nl__int__15;
#line 76
//clear ___nl__int__16;
#line 76
c_rt_lib0clear(&___nl__im__17);
#line 76
c_rt_lib0clear(&___nl__im__18);
#line 76
c_rt_lib0clear(&___nl__im__19);
#line 76
c_rt_lib0clear(&___nl__im__20);
#line 76
//clear ___nl__int__21;
#line 76
//clear ___nl__int__22;
#line 76
c_rt_lib0clear(&___nl__im__23);
#line 76
c_rt_lib0clear(&___nl__im__24);
#line 76
c_rt_lib0clear(&___nl__im__25);
#line 76
c_rt_lib0clear(&___nl__im__26);
#line 76
//clear ___nl__int__27;
#line 76
//clear ___nl__int__28;
#line 76
c_rt_lib0clear(&___nl__im__29);
#line 76
c_rt_lib0clear(&___nl__im__30);
#line 76
c_rt_lib0clear(&___nl__im__31);
#line 76
c_rt_lib0clear(&___nl__im__32);
#line 76
//clear ___nl__int__33;
#line 76
//clear ___nl__int__34;
#line 76
c_rt_lib0clear(&___nl__im__35);
#line 76
c_rt_lib0clear(&___nl__im__36);
#line 76
c_rt_lib0clear(&___nl__im__37);
#line 76
c_rt_lib0clear(&___nl__im__38);
#line 76
//clear ___nl__int__39;
#line 76
//clear ___nl__int__40;
#line 76
c_rt_lib0clear(&___nl__im__41);
#line 76
c_rt_lib0clear(&___nl__im__42);
#line 76
c_rt_lib0clear(&___nl__im__43);
#line 76
c_rt_lib0clear(&___nl__im__44);
#line 76
//clear ___nl__int__45;
#line 76
//clear ___nl__int__46;
#line 76
c_rt_lib0clear(&___nl__im__47);
#line 76
c_rt_lib0clear(&___nl__im__48);
#line 76
c_rt_lib0clear(&___nl__im__49);
#line 76
c_rt_lib0clear(&___nl__im__50);
#line 76
//clear ___nl__int__51;
#line 76
//clear ___nl__int__52;
#line 76
c_rt_lib0clear(&___nl__im__53);
#line 76
c_rt_lib0clear(&___nl__im__54);
#line 76
c_rt_lib0clear(&___nl__im__55);
#line 76
c_rt_lib0clear(&___nl__im__56);
#line 76
//clear ___nl__int__57;
#line 76
//clear ___nl__int__58;
#line 76
c_rt_lib0clear(&___nl__im__59);
#line 76
c_rt_lib0clear(&___nl__im__60);
#line 76
c_rt_lib0clear(&___nl__im__61);
#line 76
c_rt_lib0clear(&___nl__im__62);
#line 76
//clear ___nl__int__63;
#line 76
//clear ___nl__int__64;
#line 76
c_rt_lib0clear(&___nl__im__65);
#line 76
c_rt_lib0clear(&___nl__im__66);
#line 76
c_rt_lib0clear(&___nl__im__67);
#line 76
c_rt_lib0clear(&___nl__im__68);
#line 76
//clear ___nl__int__69;
#line 76
//clear ___nl__int__70;
#line 76
c_rt_lib0clear(&___nl__im__71);
#line 76
c_rt_lib0clear(&___nl__im__72);
#line 76
c_rt_lib0clear(&___nl__im__73);
#line 76
c_rt_lib0clear(&___nl__im__74);
#line 76
//clear ___nl__int__75;
#line 76
//clear ___nl__int__76;
#line 76
c_rt_lib0clear(&___nl__im__77);
#line 76
c_rt_lib0clear(&___nl__im__78);
#line 76
c_rt_lib0clear(&___nl__im__79);
#line 76
c_rt_lib0clear(&___nl__im__80);
#line 76
//clear ___nl__int__81;
#line 76
//clear ___nl__int__82;
#line 76
c_rt_lib0clear(&___nl__im__83);
#line 76
c_rt_lib0clear(&___nl__im__84);
#line 76
c_rt_lib0clear(&___nl__im__85);
#line 76
c_rt_lib0clear(&___nl__im__86);
#line 76
//clear ___nl__int__87;
#line 76
//clear ___nl__int__88;
#line 76
c_rt_lib0clear(&___nl__im__89);
#line 76
c_rt_lib0clear(&___nl__im__90);
#line 76
c_rt_lib0clear(&___nl__im__91);
#line 76
c_rt_lib0clear(&___nl__im__92);
#line 76
//clear ___nl__int__93;
#line 76
//clear ___nl__int__94;
#line 76
c_rt_lib0clear(&___nl__im__95);
#line 76
c_rt_lib0clear(&___nl__im__96);
#line 76
c_rt_lib0clear(&___nl__im__97);
#line 76
c_rt_lib0clear(&___nl__im__98);
#line 76
//clear ___nl__int__99;
#line 76
//clear ___nl__int__100;
#line 76
c_rt_lib0clear(&___nl__im__101);
#line 76
c_rt_lib0clear(&___nl__im__102);
#line 76
c_rt_lib0clear(&___nl__im__103);
#line 76
c_rt_lib0clear(&___nl__im__104);
#line 76
//clear ___nl__int__105;
#line 76
//clear ___nl__int__106;
#line 76
c_rt_lib0clear(&___nl__im__107);
#line 76
c_rt_lib0clear(&___nl__im__108);
#line 76
c_rt_lib0clear(&___nl__im__109);
#line 76
c_rt_lib0clear(&___nl__im__110);
#line 76
//clear ___nl__int__111;
#line 76
//clear ___nl__int__112;
#line 76
c_rt_lib0clear(&___nl__im__113);
#line 76
c_rt_lib0clear(&___nl__im__114);
#line 76
c_rt_lib0clear(&___nl__im__115);
#line 76
c_rt_lib0clear(&___nl__im__116);
#line 76
//clear ___nl__int__117;
#line 76
//clear ___nl__int__118;
#line 76
c_rt_lib0clear(&___nl__im__119);
#line 76
c_rt_lib0clear(&___nl__im__120);
#line 76
c_rt_lib0clear(&___nl__im__121);
#line 76
c_rt_lib0clear(&___nl__im__122);
#line 76
//clear ___nl__int__123;
#line 76
//clear ___nl__int__124;
#line 76
c_rt_lib0clear(&___nl__im__125);
#line 76
c_rt_lib0clear(&___nl__im__126);
#line 76
c_rt_lib0clear(&___nl__im__127);
#line 76
c_rt_lib0clear(&___nl__im__128);
#line 76
//clear ___nl__int__129;
#line 76
//clear ___nl__int__130;
#line 76
c_rt_lib0clear(&___nl__im__131);
#line 76
c_rt_lib0clear(&___nl__im__132);
#line 76
c_rt_lib0clear(&___nl__im__133);
#line 76
c_rt_lib0clear(&___nl__im__134);
#line 76
//clear ___nl__int__135;
#line 76
//clear ___nl__int__136;
#line 76
c_rt_lib0clear(&___nl__im__137);
#line 76
c_rt_lib0clear(&___nl__im__138);
#line 76
c_rt_lib0clear(&___nl__im__139);
#line 76
c_rt_lib0clear(&___nl__im__140);
#line 76
//clear ___nl__int__141;
#line 76
//clear ___nl__int__142;
#line 76
c_rt_lib0clear(&___nl__im__143);
#line 76
c_rt_lib0clear(&___nl__im__144);
#line 76
c_rt_lib0clear(&___nl__im__145);
#line 76
c_rt_lib0clear(&___nl__im__146);
#line 76
//clear ___nl__int__147;
#line 76
//clear ___nl__int__148;
#line 76
c_rt_lib0clear(&___nl__im__149);
#line 76
c_rt_lib0clear(&___nl__im__150);
#line 76
c_rt_lib0clear(&___nl__im__151);
#line 76
c_rt_lib0clear(&___nl__im__152);
#line 76
//clear ___nl__int__153;
#line 76
//clear ___nl__int__154;
#line 76
c_rt_lib0clear(&___nl__im__155);
#line 76
c_rt_lib0clear(&___nl__im__156);
#line 76
c_rt_lib0clear(&___nl__im__158);
#line 76
c_rt_lib0clear(&___nl__im__159);
#line 76
return ___nl__im__157;
#line 76
c_rt_lib0clear(&___nl__im__0);
#line 76
c_rt_lib0clear(&___nl__im__1);
#line 76
c_rt_lib0clear(&___nl__im__2);
#line 76
//clear ___nl__int__3;
#line 76
//clear ___nl__int__4;
#line 76
c_rt_lib0clear(&___nl__im__5);
#line 76
c_rt_lib0clear(&___nl__im__6);
#line 76
c_rt_lib0clear(&___nl__im__7);
#line 76
c_rt_lib0clear(&___nl__im__8);
#line 76
//clear ___nl__int__9;
#line 76
//clear ___nl__int__10;
#line 76
c_rt_lib0clear(&___nl__im__11);
#line 76
c_rt_lib0clear(&___nl__im__12);
#line 76
c_rt_lib0clear(&___nl__im__13);
#line 76
c_rt_lib0clear(&___nl__im__14);
#line 76
//clear ___nl__int__15;
#line 76
//clear ___nl__int__16;
#line 76
c_rt_lib0clear(&___nl__im__17);
#line 76
c_rt_lib0clear(&___nl__im__18);
#line 76
c_rt_lib0clear(&___nl__im__19);
#line 76
c_rt_lib0clear(&___nl__im__20);
#line 76
//clear ___nl__int__21;
#line 76
//clear ___nl__int__22;
#line 76
c_rt_lib0clear(&___nl__im__23);
#line 76
c_rt_lib0clear(&___nl__im__24);
#line 76
c_rt_lib0clear(&___nl__im__25);
#line 76
c_rt_lib0clear(&___nl__im__26);
#line 76
//clear ___nl__int__27;
#line 76
//clear ___nl__int__28;
#line 76
c_rt_lib0clear(&___nl__im__29);
#line 76
c_rt_lib0clear(&___nl__im__30);
#line 76
c_rt_lib0clear(&___nl__im__31);
#line 76
c_rt_lib0clear(&___nl__im__32);
#line 76
//clear ___nl__int__33;
#line 76
//clear ___nl__int__34;
#line 76
c_rt_lib0clear(&___nl__im__35);
#line 76
c_rt_lib0clear(&___nl__im__36);
#line 76
c_rt_lib0clear(&___nl__im__37);
#line 76
c_rt_lib0clear(&___nl__im__38);
#line 76
//clear ___nl__int__39;
#line 76
//clear ___nl__int__40;
#line 76
c_rt_lib0clear(&___nl__im__41);
#line 76
c_rt_lib0clear(&___nl__im__42);
#line 76
c_rt_lib0clear(&___nl__im__43);
#line 76
c_rt_lib0clear(&___nl__im__44);
#line 76
//clear ___nl__int__45;
#line 76
//clear ___nl__int__46;
#line 76
c_rt_lib0clear(&___nl__im__47);
#line 76
c_rt_lib0clear(&___nl__im__48);
#line 76
c_rt_lib0clear(&___nl__im__49);
#line 76
c_rt_lib0clear(&___nl__im__50);
#line 76
//clear ___nl__int__51;
#line 76
//clear ___nl__int__52;
#line 76
c_rt_lib0clear(&___nl__im__53);
#line 76
c_rt_lib0clear(&___nl__im__54);
#line 76
c_rt_lib0clear(&___nl__im__55);
#line 76
c_rt_lib0clear(&___nl__im__56);
#line 76
//clear ___nl__int__57;
#line 76
//clear ___nl__int__58;
#line 76
c_rt_lib0clear(&___nl__im__59);
#line 76
c_rt_lib0clear(&___nl__im__60);
#line 76
c_rt_lib0clear(&___nl__im__61);
#line 76
c_rt_lib0clear(&___nl__im__62);
#line 76
//clear ___nl__int__63;
#line 76
//clear ___nl__int__64;
#line 76
c_rt_lib0clear(&___nl__im__65);
#line 76
c_rt_lib0clear(&___nl__im__66);
#line 76
c_rt_lib0clear(&___nl__im__67);
#line 76
c_rt_lib0clear(&___nl__im__68);
#line 76
//clear ___nl__int__69;
#line 76
//clear ___nl__int__70;
#line 76
c_rt_lib0clear(&___nl__im__71);
#line 76
c_rt_lib0clear(&___nl__im__72);
#line 76
c_rt_lib0clear(&___nl__im__73);
#line 76
c_rt_lib0clear(&___nl__im__74);
#line 76
//clear ___nl__int__75;
#line 76
//clear ___nl__int__76;
#line 76
c_rt_lib0clear(&___nl__im__77);
#line 76
c_rt_lib0clear(&___nl__im__78);
#line 76
c_rt_lib0clear(&___nl__im__79);
#line 76
c_rt_lib0clear(&___nl__im__80);
#line 76
//clear ___nl__int__81;
#line 76
//clear ___nl__int__82;
#line 76
c_rt_lib0clear(&___nl__im__83);
#line 76
c_rt_lib0clear(&___nl__im__84);
#line 76
c_rt_lib0clear(&___nl__im__85);
#line 76
c_rt_lib0clear(&___nl__im__86);
#line 76
//clear ___nl__int__87;
#line 76
//clear ___nl__int__88;
#line 76
c_rt_lib0clear(&___nl__im__89);
#line 76
c_rt_lib0clear(&___nl__im__90);
#line 76
c_rt_lib0clear(&___nl__im__91);
#line 76
c_rt_lib0clear(&___nl__im__92);
#line 76
//clear ___nl__int__93;
#line 76
//clear ___nl__int__94;
#line 76
c_rt_lib0clear(&___nl__im__95);
#line 76
c_rt_lib0clear(&___nl__im__96);
#line 76
c_rt_lib0clear(&___nl__im__97);
#line 76
c_rt_lib0clear(&___nl__im__98);
#line 76
//clear ___nl__int__99;
#line 76
//clear ___nl__int__100;
#line 76
c_rt_lib0clear(&___nl__im__101);
#line 76
c_rt_lib0clear(&___nl__im__102);
#line 76
c_rt_lib0clear(&___nl__im__103);
#line 76
c_rt_lib0clear(&___nl__im__104);
#line 76
//clear ___nl__int__105;
#line 76
//clear ___nl__int__106;
#line 76
c_rt_lib0clear(&___nl__im__107);
#line 76
c_rt_lib0clear(&___nl__im__108);
#line 76
c_rt_lib0clear(&___nl__im__109);
#line 76
c_rt_lib0clear(&___nl__im__110);
#line 76
//clear ___nl__int__111;
#line 76
//clear ___nl__int__112;
#line 76
c_rt_lib0clear(&___nl__im__113);
#line 76
c_rt_lib0clear(&___nl__im__114);
#line 76
c_rt_lib0clear(&___nl__im__115);
#line 76
c_rt_lib0clear(&___nl__im__116);
#line 76
//clear ___nl__int__117;
#line 76
//clear ___nl__int__118;
#line 76
c_rt_lib0clear(&___nl__im__119);
#line 76
c_rt_lib0clear(&___nl__im__120);
#line 76
c_rt_lib0clear(&___nl__im__121);
#line 76
c_rt_lib0clear(&___nl__im__122);
#line 76
//clear ___nl__int__123;
#line 76
//clear ___nl__int__124;
#line 76
c_rt_lib0clear(&___nl__im__125);
#line 76
c_rt_lib0clear(&___nl__im__126);
#line 76
c_rt_lib0clear(&___nl__im__127);
#line 76
c_rt_lib0clear(&___nl__im__128);
#line 76
//clear ___nl__int__129;
#line 76
//clear ___nl__int__130;
#line 76
c_rt_lib0clear(&___nl__im__131);
#line 76
c_rt_lib0clear(&___nl__im__132);
#line 76
c_rt_lib0clear(&___nl__im__133);
#line 76
c_rt_lib0clear(&___nl__im__134);
#line 76
//clear ___nl__int__135;
#line 76
//clear ___nl__int__136;
#line 76
c_rt_lib0clear(&___nl__im__137);
#line 76
c_rt_lib0clear(&___nl__im__138);
#line 76
c_rt_lib0clear(&___nl__im__139);
#line 76
c_rt_lib0clear(&___nl__im__140);
#line 76
//clear ___nl__int__141;
#line 76
//clear ___nl__int__142;
#line 76
c_rt_lib0clear(&___nl__im__143);
#line 76
c_rt_lib0clear(&___nl__im__144);
#line 76
c_rt_lib0clear(&___nl__im__145);
#line 76
c_rt_lib0clear(&___nl__im__146);
#line 76
//clear ___nl__int__147;
#line 76
//clear ___nl__int__148;
#line 76
c_rt_lib0clear(&___nl__im__149);
#line 76
c_rt_lib0clear(&___nl__im__150);
#line 76
c_rt_lib0clear(&___nl__im__151);
#line 76
c_rt_lib0clear(&___nl__im__152);
#line 76
//clear ___nl__int__153;
#line 76
//clear ___nl__int__154;
#line 76
c_rt_lib0clear(&___nl__im__155);
#line 76
c_rt_lib0clear(&___nl__im__156);
#line 76
c_rt_lib0clear(&___nl__im__157);
#line 76
c_rt_lib0clear(&___nl__im__158);
#line 76
c_rt_lib0clear(&___nl__im__159);
#line 76
return NULL;
}

INT  nast0get_max_precedence0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_max_precedence");
return nast0get_max_precedence();
}
INT  nast0get_max_precedence() {
nast_priv0__const__init();
INT  ___nl__int__0 = 0;
INT  ___nl__int__1 = 0;
#line 80
___nl__int__1 = 2000;
#line 80
___nl__int__0 = ___nl__int__1;
#line 80
//clear ___nl__int__1;
#line 80
return ___nl__int__0;
#line 80
//clear ___nl__int__0;
#line 80
//clear ___nl__int__1;
#line 80
return 0;
}

ImmT  nast0variant_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variant_t");
return nast0variant_t();
}
ImmT  nast0variant_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 84
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 84
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 84
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 84
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(121), ___nl__im__3, ___get_global_const(474), ___nl__im__4));
#line 84
c_rt_lib0clear(&___nl__im__3);
#line 84
c_rt_lib0clear(&___nl__im__4);
#line 84
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 84
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__5));
#line 84
c_rt_lib0clear(&___nl__im__2);
#line 84
c_rt_lib0clear(&___nl__im__3);
#line 84
c_rt_lib0clear(&___nl__im__4);
#line 84
c_rt_lib0clear(&___nl__im__5);
#line 84
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 84
c_rt_lib0clear(&___nl__im__1);
#line 84
c_rt_lib0clear(&___nl__im__2);
#line 84
c_rt_lib0clear(&___nl__im__3);
#line 84
c_rt_lib0clear(&___nl__im__4);
#line 84
c_rt_lib0clear(&___nl__im__5);
#line 84
return ___nl__im__0;
#line 84
c_rt_lib0clear(&___nl__im__0);
#line 84
c_rt_lib0clear(&___nl__im__1);
#line 84
c_rt_lib0clear(&___nl__im__2);
#line 84
c_rt_lib0clear(&___nl__im__3);
#line 84
c_rt_lib0clear(&___nl__im__4);
#line 84
c_rt_lib0clear(&___nl__im__5);
#line 84
return NULL;
}

ImmT  nast0fun_def_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_def_t");
return nast0fun_def_t();
}
ImmT  nast0fun_def_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
#line 89
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nast0variable_type_t0ptr, ___get_global_const(46), ___get_global_const(1074)));
#line 89
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 89
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 89
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 89
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(96), ___nl__im__5, ___get_global_const(464), ___nl__im__6));
#line 89
c_rt_lib0clear(&___nl__im__5);
#line 89
c_rt_lib0clear(&___nl__im__6);
#line 89
c_rt_lib0copy(&___nl__im__7, ___nl__im__4);
#line 89
c_rt_lib0move(&___nl__im__3, ptd0rec(___nl__im__7));
#line 89
c_rt_lib0clear(&___nl__im__4);
#line 89
c_rt_lib0clear(&___nl__im__5);
#line 89
c_rt_lib0clear(&___nl__im__6);
#line 89
c_rt_lib0clear(&___nl__im__7);
#line 90
c_rt_lib0move(&___nl__im__8, ptd0int());
#line 91
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 92
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 92
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 93
c_rt_lib0move(&___nl__im__13, ptd0none());
#line 93
c_rt_lib0move(&___nl__im__14, ptd0none());
#line 93
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(438), ___nl__im__13, ___get_global_const(220), ___nl__im__14));
#line 93
c_rt_lib0clear(&___nl__im__13);
#line 93
c_rt_lib0clear(&___nl__im__14);
#line 93
c_rt_lib0copy(&___nl__im__15, ___nl__im__12);
#line 93
c_rt_lib0move(&___nl__im__11, ptd0var(___nl__im__15));
#line 93
c_rt_lib0clear(&___nl__im__12);
#line 93
c_rt_lib0clear(&___nl__im__13);
#line 93
c_rt_lib0clear(&___nl__im__14);
#line 93
c_rt_lib0clear(&___nl__im__15);
#line 94
c_rt_lib0move(&___nl__im__17, c_rt_lib0func_new(nast0fun_def_arg_t0ptr, ___get_global_const(46), ___get_global_const(1075)));
#line 94
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__17));
#line 94
c_rt_lib0copy(&___nl__im__18, ___nl__im__17);
#line 94
c_rt_lib0move(&___nl__im__16, ptd0arr(___nl__im__18));
#line 94
c_rt_lib0clear(&___nl__im__17);
#line 94
c_rt_lib0clear(&___nl__im__18);
#line 95
c_rt_lib0move(&___nl__im__21, ptd0none());
#line 95
c_rt_lib0move(&___nl__im__22, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 95
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__22));
#line 95
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(2, ___get_global_const(79), ___nl__im__21, ___get_global_const(78), ___nl__im__22));
#line 95
c_rt_lib0clear(&___nl__im__21);
#line 95
c_rt_lib0clear(&___nl__im__22);
#line 95
c_rt_lib0copy(&___nl__im__23, ___nl__im__20);
#line 95
c_rt_lib0move(&___nl__im__19, ptd0var(___nl__im__23));
#line 95
c_rt_lib0clear(&___nl__im__20);
#line 95
c_rt_lib0clear(&___nl__im__21);
#line 95
c_rt_lib0clear(&___nl__im__22);
#line 95
c_rt_lib0clear(&___nl__im__23);
#line 95
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(7, ___get_global_const(398), ___nl__im__3, ___get_global_const(169), ___nl__im__8, ___get_global_const(121), ___nl__im__9, ___get_global_const(237), ___nl__im__10, ___get_global_const(219), ___nl__im__11, ___get_global_const(118), ___nl__im__16, ___get_global_const(181), ___nl__im__19));
#line 95
c_rt_lib0clear(&___nl__im__3);
#line 95
c_rt_lib0clear(&___nl__im__4);
#line 95
c_rt_lib0clear(&___nl__im__5);
#line 95
c_rt_lib0clear(&___nl__im__6);
#line 95
c_rt_lib0clear(&___nl__im__7);
#line 95
c_rt_lib0clear(&___nl__im__8);
#line 95
c_rt_lib0clear(&___nl__im__9);
#line 95
c_rt_lib0clear(&___nl__im__10);
#line 95
c_rt_lib0clear(&___nl__im__11);
#line 95
c_rt_lib0clear(&___nl__im__12);
#line 95
c_rt_lib0clear(&___nl__im__13);
#line 95
c_rt_lib0clear(&___nl__im__14);
#line 95
c_rt_lib0clear(&___nl__im__15);
#line 95
c_rt_lib0clear(&___nl__im__16);
#line 95
c_rt_lib0clear(&___nl__im__17);
#line 95
c_rt_lib0clear(&___nl__im__18);
#line 95
c_rt_lib0clear(&___nl__im__19);
#line 95
c_rt_lib0clear(&___nl__im__20);
#line 95
c_rt_lib0clear(&___nl__im__21);
#line 95
c_rt_lib0clear(&___nl__im__22);
#line 95
c_rt_lib0clear(&___nl__im__23);
#line 95
c_rt_lib0copy(&___nl__im__24, ___nl__im__2);
#line 95
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__24));
#line 95
c_rt_lib0clear(&___nl__im__2);
#line 95
c_rt_lib0clear(&___nl__im__3);
#line 95
c_rt_lib0clear(&___nl__im__4);
#line 95
c_rt_lib0clear(&___nl__im__5);
#line 95
c_rt_lib0clear(&___nl__im__6);
#line 95
c_rt_lib0clear(&___nl__im__7);
#line 95
c_rt_lib0clear(&___nl__im__8);
#line 95
c_rt_lib0clear(&___nl__im__9);
#line 95
c_rt_lib0clear(&___nl__im__10);
#line 95
c_rt_lib0clear(&___nl__im__11);
#line 95
c_rt_lib0clear(&___nl__im__12);
#line 95
c_rt_lib0clear(&___nl__im__13);
#line 95
c_rt_lib0clear(&___nl__im__14);
#line 95
c_rt_lib0clear(&___nl__im__15);
#line 95
c_rt_lib0clear(&___nl__im__16);
#line 95
c_rt_lib0clear(&___nl__im__17);
#line 95
c_rt_lib0clear(&___nl__im__18);
#line 95
c_rt_lib0clear(&___nl__im__19);
#line 95
c_rt_lib0clear(&___nl__im__20);
#line 95
c_rt_lib0clear(&___nl__im__21);
#line 95
c_rt_lib0clear(&___nl__im__22);
#line 95
c_rt_lib0clear(&___nl__im__23);
#line 95
c_rt_lib0clear(&___nl__im__24);
#line 95
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 95
c_rt_lib0clear(&___nl__im__1);
#line 95
c_rt_lib0clear(&___nl__im__2);
#line 95
c_rt_lib0clear(&___nl__im__3);
#line 95
c_rt_lib0clear(&___nl__im__4);
#line 95
c_rt_lib0clear(&___nl__im__5);
#line 95
c_rt_lib0clear(&___nl__im__6);
#line 95
c_rt_lib0clear(&___nl__im__7);
#line 95
c_rt_lib0clear(&___nl__im__8);
#line 95
c_rt_lib0clear(&___nl__im__9);
#line 95
c_rt_lib0clear(&___nl__im__10);
#line 95
c_rt_lib0clear(&___nl__im__11);
#line 95
c_rt_lib0clear(&___nl__im__12);
#line 95
c_rt_lib0clear(&___nl__im__13);
#line 95
c_rt_lib0clear(&___nl__im__14);
#line 95
c_rt_lib0clear(&___nl__im__15);
#line 95
c_rt_lib0clear(&___nl__im__16);
#line 95
c_rt_lib0clear(&___nl__im__17);
#line 95
c_rt_lib0clear(&___nl__im__18);
#line 95
c_rt_lib0clear(&___nl__im__19);
#line 95
c_rt_lib0clear(&___nl__im__20);
#line 95
c_rt_lib0clear(&___nl__im__21);
#line 95
c_rt_lib0clear(&___nl__im__22);
#line 95
c_rt_lib0clear(&___nl__im__23);
#line 95
c_rt_lib0clear(&___nl__im__24);
#line 95
return ___nl__im__0;
#line 95
c_rt_lib0clear(&___nl__im__0);
#line 95
c_rt_lib0clear(&___nl__im__1);
#line 95
c_rt_lib0clear(&___nl__im__2);
#line 95
c_rt_lib0clear(&___nl__im__3);
#line 95
c_rt_lib0clear(&___nl__im__4);
#line 95
c_rt_lib0clear(&___nl__im__5);
#line 95
c_rt_lib0clear(&___nl__im__6);
#line 95
c_rt_lib0clear(&___nl__im__7);
#line 95
c_rt_lib0clear(&___nl__im__8);
#line 95
c_rt_lib0clear(&___nl__im__9);
#line 95
c_rt_lib0clear(&___nl__im__10);
#line 95
c_rt_lib0clear(&___nl__im__11);
#line 95
c_rt_lib0clear(&___nl__im__12);
#line 95
c_rt_lib0clear(&___nl__im__13);
#line 95
c_rt_lib0clear(&___nl__im__14);
#line 95
c_rt_lib0clear(&___nl__im__15);
#line 95
c_rt_lib0clear(&___nl__im__16);
#line 95
c_rt_lib0clear(&___nl__im__17);
#line 95
c_rt_lib0clear(&___nl__im__18);
#line 95
c_rt_lib0clear(&___nl__im__19);
#line 95
c_rt_lib0clear(&___nl__im__20);
#line 95
c_rt_lib0clear(&___nl__im__21);
#line 95
c_rt_lib0clear(&___nl__im__22);
#line 95
c_rt_lib0clear(&___nl__im__23);
#line 95
c_rt_lib0clear(&___nl__im__24);
#line 95
return NULL;
}

ImmT  nast0fun_def_arg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_def_arg_t");
return nast0fun_def_arg_t();
}
ImmT  nast0fun_def_arg_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 101
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0variable_type_t0ptr, ___get_global_const(46), ___get_global_const(1074)));
#line 101
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 102
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 102
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 102
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 102
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(74), ___nl__im__6, ___get_global_const(96), ___nl__im__7));
#line 102
c_rt_lib0clear(&___nl__im__6);
#line 102
c_rt_lib0clear(&___nl__im__7);
#line 102
c_rt_lib0copy(&___nl__im__8, ___nl__im__5);
#line 102
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__8));
#line 102
c_rt_lib0clear(&___nl__im__5);
#line 102
c_rt_lib0clear(&___nl__im__6);
#line 102
c_rt_lib0clear(&___nl__im__7);
#line 102
c_rt_lib0clear(&___nl__im__8);
#line 103
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 104
c_rt_lib0move(&___nl__im__12, ptd0none());
#line 104
c_rt_lib0move(&___nl__im__13, ptd0none());
#line 104
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(74), ___nl__im__12, ___get_global_const(40), ___nl__im__13));
#line 104
c_rt_lib0clear(&___nl__im__12);
#line 104
c_rt_lib0clear(&___nl__im__13);
#line 104
c_rt_lib0copy(&___nl__im__14, ___nl__im__11);
#line 104
c_rt_lib0move(&___nl__im__10, ptd0var(___nl__im__14));
#line 104
c_rt_lib0clear(&___nl__im__11);
#line 104
c_rt_lib0clear(&___nl__im__12);
#line 104
c_rt_lib0clear(&___nl__im__13);
#line 104
c_rt_lib0clear(&___nl__im__14);
#line 104
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(96), ___nl__im__3, ___get_global_const(464), ___nl__im__4, ___get_global_const(121), ___nl__im__9, ___get_global_const(273), ___nl__im__10));
#line 104
c_rt_lib0clear(&___nl__im__3);
#line 104
c_rt_lib0clear(&___nl__im__4);
#line 104
c_rt_lib0clear(&___nl__im__5);
#line 104
c_rt_lib0clear(&___nl__im__6);
#line 104
c_rt_lib0clear(&___nl__im__7);
#line 104
c_rt_lib0clear(&___nl__im__8);
#line 104
c_rt_lib0clear(&___nl__im__9);
#line 104
c_rt_lib0clear(&___nl__im__10);
#line 104
c_rt_lib0clear(&___nl__im__11);
#line 104
c_rt_lib0clear(&___nl__im__12);
#line 104
c_rt_lib0clear(&___nl__im__13);
#line 104
c_rt_lib0clear(&___nl__im__14);
#line 104
c_rt_lib0copy(&___nl__im__15, ___nl__im__2);
#line 104
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__15));
#line 104
c_rt_lib0clear(&___nl__im__2);
#line 104
c_rt_lib0clear(&___nl__im__3);
#line 104
c_rt_lib0clear(&___nl__im__4);
#line 104
c_rt_lib0clear(&___nl__im__5);
#line 104
c_rt_lib0clear(&___nl__im__6);
#line 104
c_rt_lib0clear(&___nl__im__7);
#line 104
c_rt_lib0clear(&___nl__im__8);
#line 104
c_rt_lib0clear(&___nl__im__9);
#line 104
c_rt_lib0clear(&___nl__im__10);
#line 104
c_rt_lib0clear(&___nl__im__11);
#line 104
c_rt_lib0clear(&___nl__im__12);
#line 104
c_rt_lib0clear(&___nl__im__13);
#line 104
c_rt_lib0clear(&___nl__im__14);
#line 104
c_rt_lib0clear(&___nl__im__15);
#line 104
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 104
c_rt_lib0clear(&___nl__im__1);
#line 104
c_rt_lib0clear(&___nl__im__2);
#line 104
c_rt_lib0clear(&___nl__im__3);
#line 104
c_rt_lib0clear(&___nl__im__4);
#line 104
c_rt_lib0clear(&___nl__im__5);
#line 104
c_rt_lib0clear(&___nl__im__6);
#line 104
c_rt_lib0clear(&___nl__im__7);
#line 104
c_rt_lib0clear(&___nl__im__8);
#line 104
c_rt_lib0clear(&___nl__im__9);
#line 104
c_rt_lib0clear(&___nl__im__10);
#line 104
c_rt_lib0clear(&___nl__im__11);
#line 104
c_rt_lib0clear(&___nl__im__12);
#line 104
c_rt_lib0clear(&___nl__im__13);
#line 104
c_rt_lib0clear(&___nl__im__14);
#line 104
c_rt_lib0clear(&___nl__im__15);
#line 104
return ___nl__im__0;
#line 104
c_rt_lib0clear(&___nl__im__0);
#line 104
c_rt_lib0clear(&___nl__im__1);
#line 104
c_rt_lib0clear(&___nl__im__2);
#line 104
c_rt_lib0clear(&___nl__im__3);
#line 104
c_rt_lib0clear(&___nl__im__4);
#line 104
c_rt_lib0clear(&___nl__im__5);
#line 104
c_rt_lib0clear(&___nl__im__6);
#line 104
c_rt_lib0clear(&___nl__im__7);
#line 104
c_rt_lib0clear(&___nl__im__8);
#line 104
c_rt_lib0clear(&___nl__im__9);
#line 104
c_rt_lib0clear(&___nl__im__10);
#line 104
c_rt_lib0clear(&___nl__im__11);
#line 104
c_rt_lib0clear(&___nl__im__12);
#line 104
c_rt_lib0clear(&___nl__im__13);
#line 104
c_rt_lib0clear(&___nl__im__14);
#line 104
c_rt_lib0clear(&___nl__im__15);
#line 104
return NULL;
}

ImmT  nast0module_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0module_t");
return nast0module_t();
}
ImmT  nast0module_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 110
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 111
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 112
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 112
c_rt_lib0move(&___nl__im__9, ptd0int());
#line 112
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_const(121), ___nl__im__8, ___get_global_const(169), ___nl__im__9));
#line 112
c_rt_lib0clear(&___nl__im__8);
#line 112
c_rt_lib0clear(&___nl__im__9);
#line 112
c_rt_lib0copy(&___nl__im__10, ___nl__im__7);
#line 112
c_rt_lib0move(&___nl__im__6, ptd0rec(___nl__im__10));
#line 112
c_rt_lib0clear(&___nl__im__7);
#line 112
c_rt_lib0clear(&___nl__im__8);
#line 112
c_rt_lib0clear(&___nl__im__9);
#line 112
c_rt_lib0clear(&___nl__im__10);
#line 112
c_rt_lib0copy(&___nl__im__11, ___nl__im__6);
#line 112
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__11));
#line 112
c_rt_lib0clear(&___nl__im__6);
#line 112
c_rt_lib0clear(&___nl__im__7);
#line 112
c_rt_lib0clear(&___nl__im__8);
#line 112
c_rt_lib0clear(&___nl__im__9);
#line 112
c_rt_lib0clear(&___nl__im__10);
#line 112
c_rt_lib0clear(&___nl__im__11);
#line 113
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(nast0fun_def_t0ptr, ___get_global_const(46), ___get_global_const(1076)));
#line 113
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__13));
#line 113
c_rt_lib0copy(&___nl__im__14, ___nl__im__13);
#line 113
c_rt_lib0move(&___nl__im__12, ptd0arr(___nl__im__14));
#line 113
c_rt_lib0clear(&___nl__im__13);
#line 113
c_rt_lib0clear(&___nl__im__14);
#line 113
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(121), ___nl__im__3, ___get_global_const(158), ___nl__im__4, ___get_global_const(159), ___nl__im__5, ___get_global_const(160), ___nl__im__12));
#line 113
c_rt_lib0clear(&___nl__im__3);
#line 113
c_rt_lib0clear(&___nl__im__4);
#line 113
c_rt_lib0clear(&___nl__im__5);
#line 113
c_rt_lib0clear(&___nl__im__6);
#line 113
c_rt_lib0clear(&___nl__im__7);
#line 113
c_rt_lib0clear(&___nl__im__8);
#line 113
c_rt_lib0clear(&___nl__im__9);
#line 113
c_rt_lib0clear(&___nl__im__10);
#line 113
c_rt_lib0clear(&___nl__im__11);
#line 113
c_rt_lib0clear(&___nl__im__12);
#line 113
c_rt_lib0clear(&___nl__im__13);
#line 113
c_rt_lib0clear(&___nl__im__14);
#line 113
c_rt_lib0copy(&___nl__im__15, ___nl__im__2);
#line 113
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__15));
#line 113
c_rt_lib0clear(&___nl__im__2);
#line 113
c_rt_lib0clear(&___nl__im__3);
#line 113
c_rt_lib0clear(&___nl__im__4);
#line 113
c_rt_lib0clear(&___nl__im__5);
#line 113
c_rt_lib0clear(&___nl__im__6);
#line 113
c_rt_lib0clear(&___nl__im__7);
#line 113
c_rt_lib0clear(&___nl__im__8);
#line 113
c_rt_lib0clear(&___nl__im__9);
#line 113
c_rt_lib0clear(&___nl__im__10);
#line 113
c_rt_lib0clear(&___nl__im__11);
#line 113
c_rt_lib0clear(&___nl__im__12);
#line 113
c_rt_lib0clear(&___nl__im__13);
#line 113
c_rt_lib0clear(&___nl__im__14);
#line 113
c_rt_lib0clear(&___nl__im__15);
#line 113
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 113
c_rt_lib0clear(&___nl__im__2);
#line 113
c_rt_lib0clear(&___nl__im__3);
#line 113
c_rt_lib0clear(&___nl__im__4);
#line 113
c_rt_lib0clear(&___nl__im__5);
#line 113
c_rt_lib0clear(&___nl__im__6);
#line 113
c_rt_lib0clear(&___nl__im__7);
#line 113
c_rt_lib0clear(&___nl__im__8);
#line 113
c_rt_lib0clear(&___nl__im__9);
#line 113
c_rt_lib0clear(&___nl__im__10);
#line 113
c_rt_lib0clear(&___nl__im__11);
#line 113
c_rt_lib0clear(&___nl__im__12);
#line 113
c_rt_lib0clear(&___nl__im__13);
#line 113
c_rt_lib0clear(&___nl__im__14);
#line 113
c_rt_lib0clear(&___nl__im__15);
#line 113
return ___nl__im__0;
#line 113
c_rt_lib0clear(&___nl__im__0);
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 113
c_rt_lib0clear(&___nl__im__2);
#line 113
c_rt_lib0clear(&___nl__im__3);
#line 113
c_rt_lib0clear(&___nl__im__4);
#line 113
c_rt_lib0clear(&___nl__im__5);
#line 113
c_rt_lib0clear(&___nl__im__6);
#line 113
c_rt_lib0clear(&___nl__im__7);
#line 113
c_rt_lib0clear(&___nl__im__8);
#line 113
c_rt_lib0clear(&___nl__im__9);
#line 113
c_rt_lib0clear(&___nl__im__10);
#line 113
c_rt_lib0clear(&___nl__im__11);
#line 113
c_rt_lib0clear(&___nl__im__12);
#line 113
c_rt_lib0clear(&___nl__im__13);
#line 113
c_rt_lib0clear(&___nl__im__14);
#line 113
c_rt_lib0clear(&___nl__im__15);
#line 113
return NULL;
}

ImmT  nast0variable_type_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variable_type_t");
return nast0variable_type_t();
}
ImmT  nast0variable_type_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 118
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 118
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 118
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 118
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(96), ___nl__im__3, ___get_global_const(74), ___nl__im__4));
#line 118
c_rt_lib0clear(&___nl__im__3);
#line 118
c_rt_lib0clear(&___nl__im__4);
#line 118
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 118
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__5));
#line 118
c_rt_lib0clear(&___nl__im__2);
#line 118
c_rt_lib0clear(&___nl__im__3);
#line 118
c_rt_lib0clear(&___nl__im__4);
#line 118
c_rt_lib0clear(&___nl__im__5);
#line 118
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 118
c_rt_lib0clear(&___nl__im__1);
#line 118
c_rt_lib0clear(&___nl__im__2);
#line 118
c_rt_lib0clear(&___nl__im__3);
#line 118
c_rt_lib0clear(&___nl__im__4);
#line 118
c_rt_lib0clear(&___nl__im__5);
#line 118
return ___nl__im__0;
#line 118
c_rt_lib0clear(&___nl__im__0);
#line 118
c_rt_lib0clear(&___nl__im__1);
#line 118
c_rt_lib0clear(&___nl__im__2);
#line 118
c_rt_lib0clear(&___nl__im__3);
#line 118
c_rt_lib0clear(&___nl__im__4);
#line 118
c_rt_lib0clear(&___nl__im__5);
#line 118
return NULL;
}

ImmT  nast0variable_declaration_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variable_declaration_t");
return nast0variable_declaration_t();
}
ImmT  nast0variable_declaration_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 123
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 124
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0variable_type_t0ptr, ___get_global_const(46), ___get_global_const(1074)));
#line 124
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 125
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 125
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 125
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 125
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_const(74), ___nl__im__7, ___get_global_const(96), ___nl__im__8));
#line 125
c_rt_lib0clear(&___nl__im__7);
#line 125
c_rt_lib0clear(&___nl__im__8);
#line 125
c_rt_lib0copy(&___nl__im__9, ___nl__im__6);
#line 125
c_rt_lib0move(&___nl__im__5, ptd0var(___nl__im__9));
#line 125
c_rt_lib0clear(&___nl__im__6);
#line 125
c_rt_lib0clear(&___nl__im__7);
#line 125
c_rt_lib0clear(&___nl__im__8);
#line 125
c_rt_lib0clear(&___nl__im__9);
#line 126
c_rt_lib0move(&___nl__im__12, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 126
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__12));
#line 126
c_rt_lib0move(&___nl__im__13, ptd0none());
#line 126
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(229), ___nl__im__12, ___get_global_const(74), ___nl__im__13));
#line 126
c_rt_lib0clear(&___nl__im__12);
#line 126
c_rt_lib0clear(&___nl__im__13);
#line 126
c_rt_lib0copy(&___nl__im__14, ___nl__im__11);
#line 126
c_rt_lib0move(&___nl__im__10, ptd0var(___nl__im__14));
#line 126
c_rt_lib0clear(&___nl__im__11);
#line 126
c_rt_lib0clear(&___nl__im__12);
#line 126
c_rt_lib0clear(&___nl__im__13);
#line 126
c_rt_lib0clear(&___nl__im__14);
#line 126
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(121), ___nl__im__3, ___get_global_const(96), ___nl__im__4, ___get_global_const(464), ___nl__im__5, ___get_global_const(229), ___nl__im__10));
#line 126
c_rt_lib0clear(&___nl__im__3);
#line 126
c_rt_lib0clear(&___nl__im__4);
#line 126
c_rt_lib0clear(&___nl__im__5);
#line 126
c_rt_lib0clear(&___nl__im__6);
#line 126
c_rt_lib0clear(&___nl__im__7);
#line 126
c_rt_lib0clear(&___nl__im__8);
#line 126
c_rt_lib0clear(&___nl__im__9);
#line 126
c_rt_lib0clear(&___nl__im__10);
#line 126
c_rt_lib0clear(&___nl__im__11);
#line 126
c_rt_lib0clear(&___nl__im__12);
#line 126
c_rt_lib0clear(&___nl__im__13);
#line 126
c_rt_lib0clear(&___nl__im__14);
#line 126
c_rt_lib0copy(&___nl__im__15, ___nl__im__2);
#line 126
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__15));
#line 126
c_rt_lib0clear(&___nl__im__2);
#line 126
c_rt_lib0clear(&___nl__im__3);
#line 126
c_rt_lib0clear(&___nl__im__4);
#line 126
c_rt_lib0clear(&___nl__im__5);
#line 126
c_rt_lib0clear(&___nl__im__6);
#line 126
c_rt_lib0clear(&___nl__im__7);
#line 126
c_rt_lib0clear(&___nl__im__8);
#line 126
c_rt_lib0clear(&___nl__im__9);
#line 126
c_rt_lib0clear(&___nl__im__10);
#line 126
c_rt_lib0clear(&___nl__im__11);
#line 126
c_rt_lib0clear(&___nl__im__12);
#line 126
c_rt_lib0clear(&___nl__im__13);
#line 126
c_rt_lib0clear(&___nl__im__14);
#line 126
c_rt_lib0clear(&___nl__im__15);
#line 126
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 126
c_rt_lib0clear(&___nl__im__1);
#line 126
c_rt_lib0clear(&___nl__im__2);
#line 126
c_rt_lib0clear(&___nl__im__3);
#line 126
c_rt_lib0clear(&___nl__im__4);
#line 126
c_rt_lib0clear(&___nl__im__5);
#line 126
c_rt_lib0clear(&___nl__im__6);
#line 126
c_rt_lib0clear(&___nl__im__7);
#line 126
c_rt_lib0clear(&___nl__im__8);
#line 126
c_rt_lib0clear(&___nl__im__9);
#line 126
c_rt_lib0clear(&___nl__im__10);
#line 126
c_rt_lib0clear(&___nl__im__11);
#line 126
c_rt_lib0clear(&___nl__im__12);
#line 126
c_rt_lib0clear(&___nl__im__13);
#line 126
c_rt_lib0clear(&___nl__im__14);
#line 126
c_rt_lib0clear(&___nl__im__15);
#line 126
return ___nl__im__0;
#line 126
c_rt_lib0clear(&___nl__im__0);
#line 126
c_rt_lib0clear(&___nl__im__1);
#line 126
c_rt_lib0clear(&___nl__im__2);
#line 126
c_rt_lib0clear(&___nl__im__3);
#line 126
c_rt_lib0clear(&___nl__im__4);
#line 126
c_rt_lib0clear(&___nl__im__5);
#line 126
c_rt_lib0clear(&___nl__im__6);
#line 126
c_rt_lib0clear(&___nl__im__7);
#line 126
c_rt_lib0clear(&___nl__im__8);
#line 126
c_rt_lib0clear(&___nl__im__9);
#line 126
c_rt_lib0clear(&___nl__im__10);
#line 126
c_rt_lib0clear(&___nl__im__11);
#line 126
c_rt_lib0clear(&___nl__im__12);
#line 126
c_rt_lib0clear(&___nl__im__13);
#line 126
c_rt_lib0clear(&___nl__im__14);
#line 126
c_rt_lib0clear(&___nl__im__15);
#line 126
return NULL;
}

ImmT  nast0fun_val_arg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_val_arg_t");
return nast0fun_val_arg_t();
}
ImmT  nast0fun_val_arg_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 131
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 131
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 131
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 131
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 131
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 131
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 131
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_const(74), ___nl__im__7, ___get_global_const(40), ___nl__im__8));
#line 131
c_rt_lib0clear(&___nl__im__7);
#line 131
c_rt_lib0clear(&___nl__im__8);
#line 131
c_rt_lib0copy(&___nl__im__9, ___nl__im__6);
#line 131
c_rt_lib0move(&___nl__im__5, ptd0var(___nl__im__9));
#line 131
c_rt_lib0clear(&___nl__im__6);
#line 131
c_rt_lib0clear(&___nl__im__7);
#line 131
c_rt_lib0clear(&___nl__im__8);
#line 131
c_rt_lib0clear(&___nl__im__9);
#line 131
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(234), ___nl__im__3, ___get_global_const(1077), ___nl__im__4, ___get_global_const(273), ___nl__im__5));
#line 131
c_rt_lib0clear(&___nl__im__3);
#line 131
c_rt_lib0clear(&___nl__im__4);
#line 131
c_rt_lib0clear(&___nl__im__5);
#line 131
c_rt_lib0clear(&___nl__im__6);
#line 131
c_rt_lib0clear(&___nl__im__7);
#line 131
c_rt_lib0clear(&___nl__im__8);
#line 131
c_rt_lib0clear(&___nl__im__9);
#line 131
c_rt_lib0copy(&___nl__im__10, ___nl__im__2);
#line 131
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__10));
#line 131
c_rt_lib0clear(&___nl__im__2);
#line 131
c_rt_lib0clear(&___nl__im__3);
#line 131
c_rt_lib0clear(&___nl__im__4);
#line 131
c_rt_lib0clear(&___nl__im__5);
#line 131
c_rt_lib0clear(&___nl__im__6);
#line 131
c_rt_lib0clear(&___nl__im__7);
#line 131
c_rt_lib0clear(&___nl__im__8);
#line 131
c_rt_lib0clear(&___nl__im__9);
#line 131
c_rt_lib0clear(&___nl__im__10);
#line 131
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 131
c_rt_lib0clear(&___nl__im__1);
#line 131
c_rt_lib0clear(&___nl__im__2);
#line 131
c_rt_lib0clear(&___nl__im__3);
#line 131
c_rt_lib0clear(&___nl__im__4);
#line 131
c_rt_lib0clear(&___nl__im__5);
#line 131
c_rt_lib0clear(&___nl__im__6);
#line 131
c_rt_lib0clear(&___nl__im__7);
#line 131
c_rt_lib0clear(&___nl__im__8);
#line 131
c_rt_lib0clear(&___nl__im__9);
#line 131
c_rt_lib0clear(&___nl__im__10);
#line 131
return ___nl__im__0;
#line 131
c_rt_lib0clear(&___nl__im__0);
#line 131
c_rt_lib0clear(&___nl__im__1);
#line 131
c_rt_lib0clear(&___nl__im__2);
#line 131
c_rt_lib0clear(&___nl__im__3);
#line 131
c_rt_lib0clear(&___nl__im__4);
#line 131
c_rt_lib0clear(&___nl__im__5);
#line 131
c_rt_lib0clear(&___nl__im__6);
#line 131
c_rt_lib0clear(&___nl__im__7);
#line 131
c_rt_lib0clear(&___nl__im__8);
#line 131
c_rt_lib0clear(&___nl__im__9);
#line 131
c_rt_lib0clear(&___nl__im__10);
#line 131
return NULL;
}

ImmT  nast0fun_val_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_val_t");
return nast0fun_val_t();
}
ImmT  nast0fun_val_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 135
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 135
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 135
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nast0fun_val_arg_t0ptr, ___get_global_const(46), ___get_global_const(1078)));
#line 135
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 135
c_rt_lib0copy(&___nl__im__7, ___nl__im__6);
#line 135
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__7));
#line 135
c_rt_lib0clear(&___nl__im__6);
#line 135
c_rt_lib0clear(&___nl__im__7);
#line 135
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(121), ___nl__im__3, ___get_global_const(167), ___nl__im__4, ___get_global_const(118), ___nl__im__5));
#line 135
c_rt_lib0clear(&___nl__im__3);
#line 135
c_rt_lib0clear(&___nl__im__4);
#line 135
c_rt_lib0clear(&___nl__im__5);
#line 135
c_rt_lib0clear(&___nl__im__6);
#line 135
c_rt_lib0clear(&___nl__im__7);
#line 135
c_rt_lib0copy(&___nl__im__8, ___nl__im__2);
#line 135
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__8));
#line 135
c_rt_lib0clear(&___nl__im__2);
#line 135
c_rt_lib0clear(&___nl__im__3);
#line 135
c_rt_lib0clear(&___nl__im__4);
#line 135
c_rt_lib0clear(&___nl__im__5);
#line 135
c_rt_lib0clear(&___nl__im__6);
#line 135
c_rt_lib0clear(&___nl__im__7);
#line 135
c_rt_lib0clear(&___nl__im__8);
#line 135
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 135
c_rt_lib0clear(&___nl__im__1);
#line 135
c_rt_lib0clear(&___nl__im__2);
#line 135
c_rt_lib0clear(&___nl__im__3);
#line 135
c_rt_lib0clear(&___nl__im__4);
#line 135
c_rt_lib0clear(&___nl__im__5);
#line 135
c_rt_lib0clear(&___nl__im__6);
#line 135
c_rt_lib0clear(&___nl__im__7);
#line 135
c_rt_lib0clear(&___nl__im__8);
#line 135
return ___nl__im__0;
#line 135
c_rt_lib0clear(&___nl__im__0);
#line 135
c_rt_lib0clear(&___nl__im__1);
#line 135
c_rt_lib0clear(&___nl__im__2);
#line 135
c_rt_lib0clear(&___nl__im__3);
#line 135
c_rt_lib0clear(&___nl__im__4);
#line 135
c_rt_lib0clear(&___nl__im__5);
#line 135
c_rt_lib0clear(&___nl__im__6);
#line 135
c_rt_lib0clear(&___nl__im__7);
#line 135
c_rt_lib0clear(&___nl__im__8);
#line 135
return NULL;
}

ImmT  nast0hash_elem_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0hash_elem_t");
return nast0hash_elem_t();
}
ImmT  nast0hash_elem_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 139
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 139
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 139
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 139
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 139
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(380), ___nl__im__3, ___get_global_const(234), ___nl__im__4));
#line 139
c_rt_lib0clear(&___nl__im__3);
#line 139
c_rt_lib0clear(&___nl__im__4);
#line 139
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 139
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__5));
#line 139
c_rt_lib0clear(&___nl__im__2);
#line 139
c_rt_lib0clear(&___nl__im__3);
#line 139
c_rt_lib0clear(&___nl__im__4);
#line 139
c_rt_lib0clear(&___nl__im__5);
#line 139
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 139
c_rt_lib0clear(&___nl__im__1);
#line 139
c_rt_lib0clear(&___nl__im__2);
#line 139
c_rt_lib0clear(&___nl__im__3);
#line 139
c_rt_lib0clear(&___nl__im__4);
#line 139
c_rt_lib0clear(&___nl__im__5);
#line 139
return ___nl__im__0;
#line 139
c_rt_lib0clear(&___nl__im__0);
#line 139
c_rt_lib0clear(&___nl__im__1);
#line 139
c_rt_lib0clear(&___nl__im__2);
#line 139
c_rt_lib0clear(&___nl__im__3);
#line 139
c_rt_lib0clear(&___nl__im__4);
#line 139
c_rt_lib0clear(&___nl__im__5);
#line 139
return NULL;
}

ImmT  nast0hash_decl_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0hash_decl_t");
return nast0hash_decl_t();
}
ImmT  nast0hash_decl_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 143
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0hash_elem_t0ptr, ___get_global_const(46), ___get_global_const(1079)));
#line 143
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 143
c_rt_lib0copy(&___nl__im__3, ___nl__im__2);
#line 143
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__3));
#line 143
c_rt_lib0clear(&___nl__im__2);
#line 143
c_rt_lib0clear(&___nl__im__3);
#line 143
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 143
c_rt_lib0clear(&___nl__im__1);
#line 143
c_rt_lib0clear(&___nl__im__2);
#line 143
c_rt_lib0clear(&___nl__im__3);
#line 143
return ___nl__im__0;
#line 143
c_rt_lib0clear(&___nl__im__0);
#line 143
c_rt_lib0clear(&___nl__im__1);
#line 143
c_rt_lib0clear(&___nl__im__2);
#line 143
c_rt_lib0clear(&___nl__im__3);
#line 143
return NULL;
}

ImmT  nast0bin_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0bin_op_t");
return nast0bin_op_t();
}
ImmT  nast0bin_op_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 147
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 147
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 147
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 147
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 147
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 147
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(281), ___nl__im__3, ___get_global_const(282), ___nl__im__4, ___get_global_const(519), ___nl__im__5));
#line 147
c_rt_lib0clear(&___nl__im__3);
#line 147
c_rt_lib0clear(&___nl__im__4);
#line 147
c_rt_lib0clear(&___nl__im__5);
#line 147
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 147
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__6));
#line 147
c_rt_lib0clear(&___nl__im__2);
#line 147
c_rt_lib0clear(&___nl__im__3);
#line 147
c_rt_lib0clear(&___nl__im__4);
#line 147
c_rt_lib0clear(&___nl__im__5);
#line 147
c_rt_lib0clear(&___nl__im__6);
#line 147
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 147
c_rt_lib0clear(&___nl__im__1);
#line 147
c_rt_lib0clear(&___nl__im__2);
#line 147
c_rt_lib0clear(&___nl__im__3);
#line 147
c_rt_lib0clear(&___nl__im__4);
#line 147
c_rt_lib0clear(&___nl__im__5);
#line 147
c_rt_lib0clear(&___nl__im__6);
#line 147
return ___nl__im__0;
#line 147
c_rt_lib0clear(&___nl__im__0);
#line 147
c_rt_lib0clear(&___nl__im__1);
#line 147
c_rt_lib0clear(&___nl__im__2);
#line 147
c_rt_lib0clear(&___nl__im__3);
#line 147
c_rt_lib0clear(&___nl__im__4);
#line 147
c_rt_lib0clear(&___nl__im__5);
#line 147
c_rt_lib0clear(&___nl__im__6);
#line 147
return NULL;
}

ImmT  nast0fun_label_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_label_t");
return nast0fun_label_t();
}
ImmT  nast0fun_label_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 151
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 151
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 151
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(167), ___nl__im__3, ___get_global_const(121), ___nl__im__4));
#line 151
c_rt_lib0clear(&___nl__im__3);
#line 151
c_rt_lib0clear(&___nl__im__4);
#line 151
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 151
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__5));
#line 151
c_rt_lib0clear(&___nl__im__2);
#line 151
c_rt_lib0clear(&___nl__im__3);
#line 151
c_rt_lib0clear(&___nl__im__4);
#line 151
c_rt_lib0clear(&___nl__im__5);
#line 151
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 151
c_rt_lib0clear(&___nl__im__1);
#line 151
c_rt_lib0clear(&___nl__im__2);
#line 151
c_rt_lib0clear(&___nl__im__3);
#line 151
c_rt_lib0clear(&___nl__im__4);
#line 151
c_rt_lib0clear(&___nl__im__5);
#line 151
return ___nl__im__0;
#line 151
c_rt_lib0clear(&___nl__im__0);
#line 151
c_rt_lib0clear(&___nl__im__1);
#line 151
c_rt_lib0clear(&___nl__im__2);
#line 151
c_rt_lib0clear(&___nl__im__3);
#line 151
c_rt_lib0clear(&___nl__im__4);
#line 151
c_rt_lib0clear(&___nl__im__5);
#line 151
return NULL;
}

ImmT  nast0unary_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0unary_op_t");
return nast0unary_op_t();
}
ImmT  nast0unary_op_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 155
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 155
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 155
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 155
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(234), ___nl__im__3, ___get_global_const(519), ___nl__im__4));
#line 155
c_rt_lib0clear(&___nl__im__3);
#line 155
c_rt_lib0clear(&___nl__im__4);
#line 155
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 155
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__5));
#line 155
c_rt_lib0clear(&___nl__im__2);
#line 155
c_rt_lib0clear(&___nl__im__3);
#line 155
c_rt_lib0clear(&___nl__im__4);
#line 155
c_rt_lib0clear(&___nl__im__5);
#line 155
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 155
c_rt_lib0clear(&___nl__im__1);
#line 155
c_rt_lib0clear(&___nl__im__2);
#line 155
c_rt_lib0clear(&___nl__im__3);
#line 155
c_rt_lib0clear(&___nl__im__4);
#line 155
c_rt_lib0clear(&___nl__im__5);
#line 155
return ___nl__im__0;
#line 155
c_rt_lib0clear(&___nl__im__0);
#line 155
c_rt_lib0clear(&___nl__im__1);
#line 155
c_rt_lib0clear(&___nl__im__2);
#line 155
c_rt_lib0clear(&___nl__im__3);
#line 155
c_rt_lib0clear(&___nl__im__4);
#line 155
c_rt_lib0clear(&___nl__im__5);
#line 155
return NULL;
}

ImmT  nast0ternary_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0ternary_op_t");
return nast0ternary_op_t();
}
ImmT  nast0ternary_op_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 159
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 159
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 159
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 159
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 159
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 159
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 159
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 159
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(1054), ___nl__im__3, ___get_global_const(1055), ___nl__im__4, ___get_global_const(1056), ___nl__im__5, ___get_global_const(519), ___nl__im__6));
#line 159
c_rt_lib0clear(&___nl__im__3);
#line 159
c_rt_lib0clear(&___nl__im__4);
#line 159
c_rt_lib0clear(&___nl__im__5);
#line 159
c_rt_lib0clear(&___nl__im__6);
#line 159
c_rt_lib0copy(&___nl__im__7, ___nl__im__2);
#line 159
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__7));
#line 159
c_rt_lib0clear(&___nl__im__2);
#line 159
c_rt_lib0clear(&___nl__im__3);
#line 159
c_rt_lib0clear(&___nl__im__4);
#line 159
c_rt_lib0clear(&___nl__im__5);
#line 159
c_rt_lib0clear(&___nl__im__6);
#line 159
c_rt_lib0clear(&___nl__im__7);
#line 159
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 159
c_rt_lib0clear(&___nl__im__1);
#line 159
c_rt_lib0clear(&___nl__im__2);
#line 159
c_rt_lib0clear(&___nl__im__3);
#line 159
c_rt_lib0clear(&___nl__im__4);
#line 159
c_rt_lib0clear(&___nl__im__5);
#line 159
c_rt_lib0clear(&___nl__im__6);
#line 159
c_rt_lib0clear(&___nl__im__7);
#line 159
return ___nl__im__0;
#line 159
c_rt_lib0clear(&___nl__im__0);
#line 159
c_rt_lib0clear(&___nl__im__1);
#line 159
c_rt_lib0clear(&___nl__im__2);
#line 159
c_rt_lib0clear(&___nl__im__3);
#line 159
c_rt_lib0clear(&___nl__im__4);
#line 159
c_rt_lib0clear(&___nl__im__5);
#line 159
c_rt_lib0clear(&___nl__im__6);
#line 159
c_rt_lib0clear(&___nl__im__7);
#line 159
return NULL;
}

ImmT  nast0value_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0value_t");
return nast0value_t();
}
ImmT  nast0value_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 164
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_const(46), ___get_global_const(910)));
#line 164
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 165
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0value_only_t0ptr, ___get_global_const(46), ___get_global_const(1080)));
#line 165
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 166
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 166
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 166
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(231), ___nl__im__3, ___get_global_const(229), ___nl__im__4, ___get_global_const(96), ___nl__im__5));
#line 166
c_rt_lib0clear(&___nl__im__3);
#line 166
c_rt_lib0clear(&___nl__im__4);
#line 166
c_rt_lib0clear(&___nl__im__5);
#line 166
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 166
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__6));
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
c_rt_lib0clear(&___nl__im__3);
#line 166
c_rt_lib0clear(&___nl__im__4);
#line 166
c_rt_lib0clear(&___nl__im__5);
#line 166
c_rt_lib0clear(&___nl__im__6);
#line 166
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 166
c_rt_lib0clear(&___nl__im__1);
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
c_rt_lib0clear(&___nl__im__3);
#line 166
c_rt_lib0clear(&___nl__im__4);
#line 166
c_rt_lib0clear(&___nl__im__5);
#line 166
c_rt_lib0clear(&___nl__im__6);
#line 166
return ___nl__im__0;
#line 166
c_rt_lib0clear(&___nl__im__0);
#line 166
c_rt_lib0clear(&___nl__im__1);
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
c_rt_lib0clear(&___nl__im__3);
#line 166
c_rt_lib0clear(&___nl__im__4);
#line 166
c_rt_lib0clear(&___nl__im__5);
#line 166
c_rt_lib0clear(&___nl__im__6);
#line 166
return NULL;
}

ImmT  nast0value_only_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0value_only_t");
return nast0value_only_t();
}
ImmT  nast0value_only_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
#line 172
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0ternary_op_t0ptr, ___get_global_const(46), ___get_global_const(1081)));
#line 172
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 173
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 174
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 175
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 175
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 176
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nast0variant_t0ptr, ___get_global_const(46), ___get_global_const(1082)));
#line 176
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 177
c_rt_lib0move(&___nl__im__8, ptd0int());
#line 179
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 179
c_rt_lib0copy(&___nl__im__13, ___nl__im__12);
#line 179
c_rt_lib0move(&___nl__im__11, ptd0arr(___nl__im__13));
#line 179
c_rt_lib0clear(&___nl__im__12);
#line 179
c_rt_lib0clear(&___nl__im__13);
#line 180
c_rt_lib0move(&___nl__im__16, ptd0none());
#line 180
c_rt_lib0move(&___nl__im__17, ptd0none());
#line 180
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(1083), ___nl__im__16, ___get_global_const(1084), ___nl__im__17));
#line 180
c_rt_lib0clear(&___nl__im__16);
#line 180
c_rt_lib0clear(&___nl__im__17);
#line 180
c_rt_lib0copy(&___nl__im__18, ___nl__im__15);
#line 180
c_rt_lib0move(&___nl__im__14, ptd0var(___nl__im__18));
#line 180
c_rt_lib0clear(&___nl__im__15);
#line 180
c_rt_lib0clear(&___nl__im__16);
#line 180
c_rt_lib0clear(&___nl__im__17);
#line 180
c_rt_lib0clear(&___nl__im__18);
#line 180
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_const(377), ___nl__im__11, ___get_global_const(1085), ___nl__im__14));
#line 180
c_rt_lib0clear(&___nl__im__11);
#line 180
c_rt_lib0clear(&___nl__im__12);
#line 180
c_rt_lib0clear(&___nl__im__13);
#line 180
c_rt_lib0clear(&___nl__im__14);
#line 180
c_rt_lib0clear(&___nl__im__15);
#line 180
c_rt_lib0clear(&___nl__im__16);
#line 180
c_rt_lib0clear(&___nl__im__17);
#line 180
c_rt_lib0clear(&___nl__im__18);
#line 180
c_rt_lib0copy(&___nl__im__19, ___nl__im__10);
#line 180
c_rt_lib0move(&___nl__im__9, ptd0rec(___nl__im__19));
#line 180
c_rt_lib0clear(&___nl__im__10);
#line 180
c_rt_lib0clear(&___nl__im__11);
#line 180
c_rt_lib0clear(&___nl__im__12);
#line 180
c_rt_lib0clear(&___nl__im__13);
#line 180
c_rt_lib0clear(&___nl__im__14);
#line 180
c_rt_lib0clear(&___nl__im__15);
#line 180
c_rt_lib0clear(&___nl__im__16);
#line 180
c_rt_lib0clear(&___nl__im__17);
#line 180
c_rt_lib0clear(&___nl__im__18);
#line 180
c_rt_lib0clear(&___nl__im__19);
#line 182
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 182
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__21));
#line 182
c_rt_lib0copy(&___nl__im__22, ___nl__im__21);
#line 182
c_rt_lib0move(&___nl__im__20, ptd0arr(___nl__im__22));
#line 182
c_rt_lib0clear(&___nl__im__21);
#line 182
c_rt_lib0clear(&___nl__im__22);
#line 183
c_rt_lib0move(&___nl__im__23, c_rt_lib0func_new(nast0hash_decl_t0ptr, ___get_global_const(46), ___get_global_const(1086)));
#line 183
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__23));
#line 184
c_rt_lib0move(&___nl__im__24, ptd0string());
#line 185
c_rt_lib0move(&___nl__im__25, c_rt_lib0func_new(nast0bin_op_t0ptr, ___get_global_const(46), ___get_global_const(1087)));
#line 185
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__25));
#line 186
c_rt_lib0move(&___nl__im__26, c_rt_lib0func_new(nast0unary_op_t0ptr, ___get_global_const(46), ___get_global_const(1088)));
#line 186
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__26));
#line 187
c_rt_lib0move(&___nl__im__27, c_rt_lib0func_new(nast0fun_label_t0ptr, ___get_global_const(46), ___get_global_const(1089)));
#line 187
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__27));
#line 188
c_rt_lib0move(&___nl__im__28, c_rt_lib0func_new(nast0fun_val_t0ptr, ___get_global_const(46), ___get_global_const(1090)));
#line 188
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__28));
#line 189
c_rt_lib0move(&___nl__im__29, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 189
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__29));
#line 190
c_rt_lib0move(&___nl__im__30, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 190
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__30));
#line 190
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(16, ___get_global_const(1048), ___nl__im__3, ___get_global_const(1049), ___nl__im__4, ___get_global_const(1027), ___nl__im__5, ___get_global_const(1046), ___nl__im__6, ___get_global_const(522), ___nl__im__7, ___get_global_const(232), ___nl__im__8, ___get_global_const(531), ___nl__im__9, ___get_global_const(240), ___nl__im__20, ___get_global_const(241), ___nl__im__23, ___get_global_const(474), ___nl__im__24, ___get_global_const(244), ___nl__im__25, ___get_global_const(1050), ___nl__im__26, ___get_global_const(1051), ___nl__im__27, ___get_global_const(1008), ___nl__im__28, ___get_global_const(1052), ___nl__im__29, ___get_global_const(1053), ___nl__im__30));
#line 190
c_rt_lib0clear(&___nl__im__3);
#line 190
c_rt_lib0clear(&___nl__im__4);
#line 190
c_rt_lib0clear(&___nl__im__5);
#line 190
c_rt_lib0clear(&___nl__im__6);
#line 190
c_rt_lib0clear(&___nl__im__7);
#line 190
c_rt_lib0clear(&___nl__im__8);
#line 190
c_rt_lib0clear(&___nl__im__9);
#line 190
c_rt_lib0clear(&___nl__im__10);
#line 190
c_rt_lib0clear(&___nl__im__11);
#line 190
c_rt_lib0clear(&___nl__im__12);
#line 190
c_rt_lib0clear(&___nl__im__13);
#line 190
c_rt_lib0clear(&___nl__im__14);
#line 190
c_rt_lib0clear(&___nl__im__15);
#line 190
c_rt_lib0clear(&___nl__im__16);
#line 190
c_rt_lib0clear(&___nl__im__17);
#line 190
c_rt_lib0clear(&___nl__im__18);
#line 190
c_rt_lib0clear(&___nl__im__19);
#line 190
c_rt_lib0clear(&___nl__im__20);
#line 190
c_rt_lib0clear(&___nl__im__21);
#line 190
c_rt_lib0clear(&___nl__im__22);
#line 190
c_rt_lib0clear(&___nl__im__23);
#line 190
c_rt_lib0clear(&___nl__im__24);
#line 190
c_rt_lib0clear(&___nl__im__25);
#line 190
c_rt_lib0clear(&___nl__im__26);
#line 190
c_rt_lib0clear(&___nl__im__27);
#line 190
c_rt_lib0clear(&___nl__im__28);
#line 190
c_rt_lib0clear(&___nl__im__29);
#line 190
c_rt_lib0clear(&___nl__im__30);
#line 190
c_rt_lib0copy(&___nl__im__31, ___nl__im__2);
#line 190
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__31));
#line 190
c_rt_lib0clear(&___nl__im__2);
#line 190
c_rt_lib0clear(&___nl__im__3);
#line 190
c_rt_lib0clear(&___nl__im__4);
#line 190
c_rt_lib0clear(&___nl__im__5);
#line 190
c_rt_lib0clear(&___nl__im__6);
#line 190
c_rt_lib0clear(&___nl__im__7);
#line 190
c_rt_lib0clear(&___nl__im__8);
#line 190
c_rt_lib0clear(&___nl__im__9);
#line 190
c_rt_lib0clear(&___nl__im__10);
#line 190
c_rt_lib0clear(&___nl__im__11);
#line 190
c_rt_lib0clear(&___nl__im__12);
#line 190
c_rt_lib0clear(&___nl__im__13);
#line 190
c_rt_lib0clear(&___nl__im__14);
#line 190
c_rt_lib0clear(&___nl__im__15);
#line 190
c_rt_lib0clear(&___nl__im__16);
#line 190
c_rt_lib0clear(&___nl__im__17);
#line 190
c_rt_lib0clear(&___nl__im__18);
#line 190
c_rt_lib0clear(&___nl__im__19);
#line 190
c_rt_lib0clear(&___nl__im__20);
#line 190
c_rt_lib0clear(&___nl__im__21);
#line 190
c_rt_lib0clear(&___nl__im__22);
#line 190
c_rt_lib0clear(&___nl__im__23);
#line 190
c_rt_lib0clear(&___nl__im__24);
#line 190
c_rt_lib0clear(&___nl__im__25);
#line 190
c_rt_lib0clear(&___nl__im__26);
#line 190
c_rt_lib0clear(&___nl__im__27);
#line 190
c_rt_lib0clear(&___nl__im__28);
#line 190
c_rt_lib0clear(&___nl__im__29);
#line 190
c_rt_lib0clear(&___nl__im__30);
#line 190
c_rt_lib0clear(&___nl__im__31);
#line 190
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 190
c_rt_lib0clear(&___nl__im__1);
#line 190
c_rt_lib0clear(&___nl__im__2);
#line 190
c_rt_lib0clear(&___nl__im__3);
#line 190
c_rt_lib0clear(&___nl__im__4);
#line 190
c_rt_lib0clear(&___nl__im__5);
#line 190
c_rt_lib0clear(&___nl__im__6);
#line 190
c_rt_lib0clear(&___nl__im__7);
#line 190
c_rt_lib0clear(&___nl__im__8);
#line 190
c_rt_lib0clear(&___nl__im__9);
#line 190
c_rt_lib0clear(&___nl__im__10);
#line 190
c_rt_lib0clear(&___nl__im__11);
#line 190
c_rt_lib0clear(&___nl__im__12);
#line 190
c_rt_lib0clear(&___nl__im__13);
#line 190
c_rt_lib0clear(&___nl__im__14);
#line 190
c_rt_lib0clear(&___nl__im__15);
#line 190
c_rt_lib0clear(&___nl__im__16);
#line 190
c_rt_lib0clear(&___nl__im__17);
#line 190
c_rt_lib0clear(&___nl__im__18);
#line 190
c_rt_lib0clear(&___nl__im__19);
#line 190
c_rt_lib0clear(&___nl__im__20);
#line 190
c_rt_lib0clear(&___nl__im__21);
#line 190
c_rt_lib0clear(&___nl__im__22);
#line 190
c_rt_lib0clear(&___nl__im__23);
#line 190
c_rt_lib0clear(&___nl__im__24);
#line 190
c_rt_lib0clear(&___nl__im__25);
#line 190
c_rt_lib0clear(&___nl__im__26);
#line 190
c_rt_lib0clear(&___nl__im__27);
#line 190
c_rt_lib0clear(&___nl__im__28);
#line 190
c_rt_lib0clear(&___nl__im__29);
#line 190
c_rt_lib0clear(&___nl__im__30);
#line 190
c_rt_lib0clear(&___nl__im__31);
#line 190
return ___nl__im__0;
#line 190
c_rt_lib0clear(&___nl__im__0);
#line 190
c_rt_lib0clear(&___nl__im__1);
#line 190
c_rt_lib0clear(&___nl__im__2);
#line 190
c_rt_lib0clear(&___nl__im__3);
#line 190
c_rt_lib0clear(&___nl__im__4);
#line 190
c_rt_lib0clear(&___nl__im__5);
#line 190
c_rt_lib0clear(&___nl__im__6);
#line 190
c_rt_lib0clear(&___nl__im__7);
#line 190
c_rt_lib0clear(&___nl__im__8);
#line 190
c_rt_lib0clear(&___nl__im__9);
#line 190
c_rt_lib0clear(&___nl__im__10);
#line 190
c_rt_lib0clear(&___nl__im__11);
#line 190
c_rt_lib0clear(&___nl__im__12);
#line 190
c_rt_lib0clear(&___nl__im__13);
#line 190
c_rt_lib0clear(&___nl__im__14);
#line 190
c_rt_lib0clear(&___nl__im__15);
#line 190
c_rt_lib0clear(&___nl__im__16);
#line 190
c_rt_lib0clear(&___nl__im__17);
#line 190
c_rt_lib0clear(&___nl__im__18);
#line 190
c_rt_lib0clear(&___nl__im__19);
#line 190
c_rt_lib0clear(&___nl__im__20);
#line 190
c_rt_lib0clear(&___nl__im__21);
#line 190
c_rt_lib0clear(&___nl__im__22);
#line 190
c_rt_lib0clear(&___nl__im__23);
#line 190
c_rt_lib0clear(&___nl__im__24);
#line 190
c_rt_lib0clear(&___nl__im__25);
#line 190
c_rt_lib0clear(&___nl__im__26);
#line 190
c_rt_lib0clear(&___nl__im__27);
#line 190
c_rt_lib0clear(&___nl__im__28);
#line 190
c_rt_lib0clear(&___nl__im__29);
#line 190
c_rt_lib0clear(&___nl__im__30);
#line 190
c_rt_lib0clear(&___nl__im__31);
#line 190
return NULL;
}

ImmT  nast0match_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0match_t");
return nast0match_t();
}
ImmT  nast0match_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 195
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 195
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 195
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nast0match_branch_t0ptr, ___get_global_const(46), ___get_global_const(1091)));
#line 195
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 195
c_rt_lib0copy(&___nl__im__6, ___nl__im__5);
#line 195
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__6));
#line 195
c_rt_lib0clear(&___nl__im__5);
#line 195
c_rt_lib0clear(&___nl__im__6);
#line 195
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(234), ___nl__im__3, ___get_global_const(1036), ___nl__im__4));
#line 195
c_rt_lib0clear(&___nl__im__3);
#line 195
c_rt_lib0clear(&___nl__im__4);
#line 195
c_rt_lib0clear(&___nl__im__5);
#line 195
c_rt_lib0clear(&___nl__im__6);
#line 195
c_rt_lib0copy(&___nl__im__7, ___nl__im__2);
#line 195
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__7));
#line 195
c_rt_lib0clear(&___nl__im__2);
#line 195
c_rt_lib0clear(&___nl__im__3);
#line 195
c_rt_lib0clear(&___nl__im__4);
#line 195
c_rt_lib0clear(&___nl__im__5);
#line 195
c_rt_lib0clear(&___nl__im__6);
#line 195
c_rt_lib0clear(&___nl__im__7);
#line 195
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 195
c_rt_lib0clear(&___nl__im__1);
#line 195
c_rt_lib0clear(&___nl__im__2);
#line 195
c_rt_lib0clear(&___nl__im__3);
#line 195
c_rt_lib0clear(&___nl__im__4);
#line 195
c_rt_lib0clear(&___nl__im__5);
#line 195
c_rt_lib0clear(&___nl__im__6);
#line 195
c_rt_lib0clear(&___nl__im__7);
#line 195
return ___nl__im__0;
#line 195
c_rt_lib0clear(&___nl__im__0);
#line 195
c_rt_lib0clear(&___nl__im__1);
#line 195
c_rt_lib0clear(&___nl__im__2);
#line 195
c_rt_lib0clear(&___nl__im__3);
#line 195
c_rt_lib0clear(&___nl__im__4);
#line 195
c_rt_lib0clear(&___nl__im__5);
#line 195
c_rt_lib0clear(&___nl__im__6);
#line 195
c_rt_lib0clear(&___nl__im__7);
#line 195
return NULL;
}

ImmT  nast0variant_decl_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variant_decl_t");
return nast0variant_decl_t();
}
ImmT  nast0variant_decl_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 200
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 201
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nast0variant_variable_declaration_t0ptr, ___get_global_const(46), ___get_global_const(1092)));
#line 201
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 201
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 201
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(229), ___nl__im__6, ___get_global_const(74), ___nl__im__7));
#line 201
c_rt_lib0clear(&___nl__im__6);
#line 201
c_rt_lib0clear(&___nl__im__7);
#line 201
c_rt_lib0copy(&___nl__im__8, ___nl__im__5);
#line 201
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__8));
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
c_rt_lib0clear(&___nl__im__6);
#line 201
c_rt_lib0clear(&___nl__im__7);
#line 201
c_rt_lib0clear(&___nl__im__8);
#line 201
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(121), ___nl__im__3, ___get_global_const(229), ___nl__im__4));
#line 201
c_rt_lib0clear(&___nl__im__3);
#line 201
c_rt_lib0clear(&___nl__im__4);
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
c_rt_lib0clear(&___nl__im__6);
#line 201
c_rt_lib0clear(&___nl__im__7);
#line 201
c_rt_lib0clear(&___nl__im__8);
#line 201
c_rt_lib0copy(&___nl__im__9, ___nl__im__2);
#line 201
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__9));
#line 201
c_rt_lib0clear(&___nl__im__2);
#line 201
c_rt_lib0clear(&___nl__im__3);
#line 201
c_rt_lib0clear(&___nl__im__4);
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
c_rt_lib0clear(&___nl__im__6);
#line 201
c_rt_lib0clear(&___nl__im__7);
#line 201
c_rt_lib0clear(&___nl__im__8);
#line 201
c_rt_lib0clear(&___nl__im__9);
#line 201
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 201
c_rt_lib0clear(&___nl__im__1);
#line 201
c_rt_lib0clear(&___nl__im__2);
#line 201
c_rt_lib0clear(&___nl__im__3);
#line 201
c_rt_lib0clear(&___nl__im__4);
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
c_rt_lib0clear(&___nl__im__6);
#line 201
c_rt_lib0clear(&___nl__im__7);
#line 201
c_rt_lib0clear(&___nl__im__8);
#line 201
c_rt_lib0clear(&___nl__im__9);
#line 201
return ___nl__im__0;
#line 201
c_rt_lib0clear(&___nl__im__0);
#line 201
c_rt_lib0clear(&___nl__im__1);
#line 201
c_rt_lib0clear(&___nl__im__2);
#line 201
c_rt_lib0clear(&___nl__im__3);
#line 201
c_rt_lib0clear(&___nl__im__4);
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
c_rt_lib0clear(&___nl__im__6);
#line 201
c_rt_lib0clear(&___nl__im__7);
#line 201
c_rt_lib0clear(&___nl__im__8);
#line 201
c_rt_lib0clear(&___nl__im__9);
#line 201
return NULL;
}

ImmT  nast0variant_variable_declaration_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variant_variable_declaration_t");
return nast0variant_variable_declaration_t();
}
ImmT  nast0variant_variable_declaration_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 207
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(46), ___get_global_const(1093)));
#line 207
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 208
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 208
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 208
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(74), ___nl__im__6, ___get_global_const(40), ___nl__im__7));
#line 208
c_rt_lib0clear(&___nl__im__6);
#line 208
c_rt_lib0clear(&___nl__im__7);
#line 208
c_rt_lib0copy(&___nl__im__8, ___nl__im__5);
#line 208
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__8));
#line 208
c_rt_lib0clear(&___nl__im__5);
#line 208
c_rt_lib0clear(&___nl__im__6);
#line 208
c_rt_lib0clear(&___nl__im__7);
#line 208
c_rt_lib0clear(&___nl__im__8);
#line 208
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(462), ___nl__im__3, ___get_global_const(273), ___nl__im__4));
#line 208
c_rt_lib0clear(&___nl__im__3);
#line 208
c_rt_lib0clear(&___nl__im__4);
#line 208
c_rt_lib0clear(&___nl__im__5);
#line 208
c_rt_lib0clear(&___nl__im__6);
#line 208
c_rt_lib0clear(&___nl__im__7);
#line 208
c_rt_lib0clear(&___nl__im__8);
#line 208
c_rt_lib0copy(&___nl__im__9, ___nl__im__2);
#line 208
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__9));
#line 208
c_rt_lib0clear(&___nl__im__2);
#line 208
c_rt_lib0clear(&___nl__im__3);
#line 208
c_rt_lib0clear(&___nl__im__4);
#line 208
c_rt_lib0clear(&___nl__im__5);
#line 208
c_rt_lib0clear(&___nl__im__6);
#line 208
c_rt_lib0clear(&___nl__im__7);
#line 208
c_rt_lib0clear(&___nl__im__8);
#line 208
c_rt_lib0clear(&___nl__im__9);
#line 208
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 208
c_rt_lib0clear(&___nl__im__1);
#line 208
c_rt_lib0clear(&___nl__im__2);
#line 208
c_rt_lib0clear(&___nl__im__3);
#line 208
c_rt_lib0clear(&___nl__im__4);
#line 208
c_rt_lib0clear(&___nl__im__5);
#line 208
c_rt_lib0clear(&___nl__im__6);
#line 208
c_rt_lib0clear(&___nl__im__7);
#line 208
c_rt_lib0clear(&___nl__im__8);
#line 208
c_rt_lib0clear(&___nl__im__9);
#line 208
return ___nl__im__0;
#line 208
c_rt_lib0clear(&___nl__im__0);
#line 208
c_rt_lib0clear(&___nl__im__1);
#line 208
c_rt_lib0clear(&___nl__im__2);
#line 208
c_rt_lib0clear(&___nl__im__3);
#line 208
c_rt_lib0clear(&___nl__im__4);
#line 208
c_rt_lib0clear(&___nl__im__5);
#line 208
c_rt_lib0clear(&___nl__im__6);
#line 208
c_rt_lib0clear(&___nl__im__7);
#line 208
c_rt_lib0clear(&___nl__im__8);
#line 208
c_rt_lib0clear(&___nl__im__9);
#line 208
return NULL;
}

ImmT  nast0match_branch_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0match_branch_t");
return nast0match_branch_t();
}
ImmT  nast0match_branch_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 213
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0variant_decl_t0ptr, ___get_global_const(46), ___get_global_const(1094)));
#line 213
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 213
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 213
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 213
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_const(46), ___get_global_const(910)));
#line 213
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 213
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(522), ___nl__im__3, ___get_global_const(237), ___nl__im__4, ___get_global_const(231), ___nl__im__5));
#line 213
c_rt_lib0clear(&___nl__im__3);
#line 213
c_rt_lib0clear(&___nl__im__4);
#line 213
c_rt_lib0clear(&___nl__im__5);
#line 213
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 213
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__6));
#line 213
c_rt_lib0clear(&___nl__im__2);
#line 213
c_rt_lib0clear(&___nl__im__3);
#line 213
c_rt_lib0clear(&___nl__im__4);
#line 213
c_rt_lib0clear(&___nl__im__5);
#line 213
c_rt_lib0clear(&___nl__im__6);
#line 213
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 213
c_rt_lib0clear(&___nl__im__1);
#line 213
c_rt_lib0clear(&___nl__im__2);
#line 213
c_rt_lib0clear(&___nl__im__3);
#line 213
c_rt_lib0clear(&___nl__im__4);
#line 213
c_rt_lib0clear(&___nl__im__5);
#line 213
c_rt_lib0clear(&___nl__im__6);
#line 213
return ___nl__im__0;
#line 213
c_rt_lib0clear(&___nl__im__0);
#line 213
c_rt_lib0clear(&___nl__im__1);
#line 213
c_rt_lib0clear(&___nl__im__2);
#line 213
c_rt_lib0clear(&___nl__im__3);
#line 213
c_rt_lib0clear(&___nl__im__4);
#line 213
c_rt_lib0clear(&___nl__im__5);
#line 213
c_rt_lib0clear(&___nl__im__6);
#line 213
return NULL;
}

ImmT  nast0fora_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fora_t");
return nast0fora_t();
}
ImmT  nast0fora_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 218
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(46), ___get_global_const(1093)));
#line 218
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 219
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 219
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 220
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 220
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 221
c_rt_lib0move(&___nl__im__6, ptd0bool());
#line 221
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(573), ___nl__im__3, ___get_global_const(237), ___nl__im__4, ___get_global_const(38), ___nl__im__5, ___get_global_const(1095), ___nl__im__6));
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
c_rt_lib0clear(&___nl__im__4);
#line 221
c_rt_lib0clear(&___nl__im__5);
#line 221
c_rt_lib0clear(&___nl__im__6);
#line 221
c_rt_lib0copy(&___nl__im__7, ___nl__im__2);
#line 221
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__7));
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
c_rt_lib0clear(&___nl__im__4);
#line 221
c_rt_lib0clear(&___nl__im__5);
#line 221
c_rt_lib0clear(&___nl__im__6);
#line 221
c_rt_lib0clear(&___nl__im__7);
#line 221
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 221
c_rt_lib0clear(&___nl__im__1);
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
c_rt_lib0clear(&___nl__im__4);
#line 221
c_rt_lib0clear(&___nl__im__5);
#line 221
c_rt_lib0clear(&___nl__im__6);
#line 221
c_rt_lib0clear(&___nl__im__7);
#line 221
return ___nl__im__0;
#line 221
c_rt_lib0clear(&___nl__im__0);
#line 221
c_rt_lib0clear(&___nl__im__1);
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
c_rt_lib0clear(&___nl__im__4);
#line 221
c_rt_lib0clear(&___nl__im__5);
#line 221
c_rt_lib0clear(&___nl__im__6);
#line 221
c_rt_lib0clear(&___nl__im__7);
#line 221
return NULL;
}

ImmT  nast0forh_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0forh_t");
return nast0forh_t();
}
ImmT  nast0forh_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
#line 227
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(46), ___get_global_const(1093)));
#line 227
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 228
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(46), ___get_global_const(1093)));
#line 228
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 229
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 229
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 229
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_const(74), ___nl__im__7, ___get_global_const(40), ___nl__im__8));
#line 229
c_rt_lib0clear(&___nl__im__7);
#line 229
c_rt_lib0clear(&___nl__im__8);
#line 229
c_rt_lib0copy(&___nl__im__9, ___nl__im__6);
#line 229
c_rt_lib0move(&___nl__im__5, ptd0var(___nl__im__9));
#line 229
c_rt_lib0clear(&___nl__im__6);
#line 229
c_rt_lib0clear(&___nl__im__7);
#line 229
c_rt_lib0clear(&___nl__im__8);
#line 229
c_rt_lib0clear(&___nl__im__9);
#line 230
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 230
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 231
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 231
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__11));
#line 232
c_rt_lib0move(&___nl__im__12, ptd0bool());
#line 232
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(6, ___get_global_const(380), ___nl__im__3, ___get_global_const(234), ___nl__im__4, ___get_global_const(1032), ___nl__im__5, ___get_global_const(378), ___nl__im__10, ___get_global_const(237), ___nl__im__11, ___get_global_const(1095), ___nl__im__12));
#line 232
c_rt_lib0clear(&___nl__im__3);
#line 232
c_rt_lib0clear(&___nl__im__4);
#line 232
c_rt_lib0clear(&___nl__im__5);
#line 232
c_rt_lib0clear(&___nl__im__6);
#line 232
c_rt_lib0clear(&___nl__im__7);
#line 232
c_rt_lib0clear(&___nl__im__8);
#line 232
c_rt_lib0clear(&___nl__im__9);
#line 232
c_rt_lib0clear(&___nl__im__10);
#line 232
c_rt_lib0clear(&___nl__im__11);
#line 232
c_rt_lib0clear(&___nl__im__12);
#line 232
c_rt_lib0copy(&___nl__im__13, ___nl__im__2);
#line 232
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__13));
#line 232
c_rt_lib0clear(&___nl__im__2);
#line 232
c_rt_lib0clear(&___nl__im__3);
#line 232
c_rt_lib0clear(&___nl__im__4);
#line 232
c_rt_lib0clear(&___nl__im__5);
#line 232
c_rt_lib0clear(&___nl__im__6);
#line 232
c_rt_lib0clear(&___nl__im__7);
#line 232
c_rt_lib0clear(&___nl__im__8);
#line 232
c_rt_lib0clear(&___nl__im__9);
#line 232
c_rt_lib0clear(&___nl__im__10);
#line 232
c_rt_lib0clear(&___nl__im__11);
#line 232
c_rt_lib0clear(&___nl__im__12);
#line 232
c_rt_lib0clear(&___nl__im__13);
#line 232
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 232
c_rt_lib0clear(&___nl__im__1);
#line 232
c_rt_lib0clear(&___nl__im__2);
#line 232
c_rt_lib0clear(&___nl__im__3);
#line 232
c_rt_lib0clear(&___nl__im__4);
#line 232
c_rt_lib0clear(&___nl__im__5);
#line 232
c_rt_lib0clear(&___nl__im__6);
#line 232
c_rt_lib0clear(&___nl__im__7);
#line 232
c_rt_lib0clear(&___nl__im__8);
#line 232
c_rt_lib0clear(&___nl__im__9);
#line 232
c_rt_lib0clear(&___nl__im__10);
#line 232
c_rt_lib0clear(&___nl__im__11);
#line 232
c_rt_lib0clear(&___nl__im__12);
#line 232
c_rt_lib0clear(&___nl__im__13);
#line 232
return ___nl__im__0;
#line 232
c_rt_lib0clear(&___nl__im__0);
#line 232
c_rt_lib0clear(&___nl__im__1);
#line 232
c_rt_lib0clear(&___nl__im__2);
#line 232
c_rt_lib0clear(&___nl__im__3);
#line 232
c_rt_lib0clear(&___nl__im__4);
#line 232
c_rt_lib0clear(&___nl__im__5);
#line 232
c_rt_lib0clear(&___nl__im__6);
#line 232
c_rt_lib0clear(&___nl__im__7);
#line 232
c_rt_lib0clear(&___nl__im__8);
#line 232
c_rt_lib0clear(&___nl__im__9);
#line 232
c_rt_lib0clear(&___nl__im__10);
#line 232
c_rt_lib0clear(&___nl__im__11);
#line 232
c_rt_lib0clear(&___nl__im__12);
#line 232
c_rt_lib0clear(&___nl__im__13);
#line 232
return NULL;
}

ImmT  nast0rep_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0rep_t");
return nast0rep_t();
}
ImmT  nast0rep_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 238
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(46), ___get_global_const(1093)));
#line 238
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 239
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 239
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 240
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 240
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 241
c_rt_lib0move(&___nl__im__6, ptd0bool());
#line 241
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(573), ___nl__im__3, ___get_global_const(237), ___nl__im__4, ___get_global_const(1033), ___nl__im__5, ___get_global_const(1095), ___nl__im__6));
#line 241
c_rt_lib0clear(&___nl__im__3);
#line 241
c_rt_lib0clear(&___nl__im__4);
#line 241
c_rt_lib0clear(&___nl__im__5);
#line 241
c_rt_lib0clear(&___nl__im__6);
#line 241
c_rt_lib0copy(&___nl__im__7, ___nl__im__2);
#line 241
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__7));
#line 241
c_rt_lib0clear(&___nl__im__2);
#line 241
c_rt_lib0clear(&___nl__im__3);
#line 241
c_rt_lib0clear(&___nl__im__4);
#line 241
c_rt_lib0clear(&___nl__im__5);
#line 241
c_rt_lib0clear(&___nl__im__6);
#line 241
c_rt_lib0clear(&___nl__im__7);
#line 241
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 241
c_rt_lib0clear(&___nl__im__1);
#line 241
c_rt_lib0clear(&___nl__im__2);
#line 241
c_rt_lib0clear(&___nl__im__3);
#line 241
c_rt_lib0clear(&___nl__im__4);
#line 241
c_rt_lib0clear(&___nl__im__5);
#line 241
c_rt_lib0clear(&___nl__im__6);
#line 241
c_rt_lib0clear(&___nl__im__7);
#line 241
return ___nl__im__0;
#line 241
c_rt_lib0clear(&___nl__im__0);
#line 241
c_rt_lib0clear(&___nl__im__1);
#line 241
c_rt_lib0clear(&___nl__im__2);
#line 241
c_rt_lib0clear(&___nl__im__3);
#line 241
c_rt_lib0clear(&___nl__im__4);
#line 241
c_rt_lib0clear(&___nl__im__5);
#line 241
c_rt_lib0clear(&___nl__im__6);
#line 241
c_rt_lib0clear(&___nl__im__7);
#line 241
return NULL;
}

ImmT  nast0while_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0while_t");
return nast0while_t();
}
ImmT  nast0while_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 246
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 246
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 246
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 246
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 246
c_rt_lib0move(&___nl__im__5, ptd0bool());
#line 246
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(1028), ___nl__im__3, ___get_global_const(237), ___nl__im__4, ___get_global_const(1095), ___nl__im__5));
#line 246
c_rt_lib0clear(&___nl__im__3);
#line 246
c_rt_lib0clear(&___nl__im__4);
#line 246
c_rt_lib0clear(&___nl__im__5);
#line 246
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 246
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__6));
#line 246
c_rt_lib0clear(&___nl__im__2);
#line 246
c_rt_lib0clear(&___nl__im__3);
#line 246
c_rt_lib0clear(&___nl__im__4);
#line 246
c_rt_lib0clear(&___nl__im__5);
#line 246
c_rt_lib0clear(&___nl__im__6);
#line 246
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 246
c_rt_lib0clear(&___nl__im__1);
#line 246
c_rt_lib0clear(&___nl__im__2);
#line 246
c_rt_lib0clear(&___nl__im__3);
#line 246
c_rt_lib0clear(&___nl__im__4);
#line 246
c_rt_lib0clear(&___nl__im__5);
#line 246
c_rt_lib0clear(&___nl__im__6);
#line 246
return ___nl__im__0;
#line 246
c_rt_lib0clear(&___nl__im__0);
#line 246
c_rt_lib0clear(&___nl__im__1);
#line 246
c_rt_lib0clear(&___nl__im__2);
#line 246
c_rt_lib0clear(&___nl__im__3);
#line 246
c_rt_lib0clear(&___nl__im__4);
#line 246
c_rt_lib0clear(&___nl__im__5);
#line 246
c_rt_lib0clear(&___nl__im__6);
#line 246
return NULL;
}

ImmT  nast0try_ensure_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0try_ensure_t");
return nast0try_ensure_t();
}
ImmT  nast0try_ensure_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 250
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(46), ___get_global_const(1093)));
#line 250
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 250
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0bin_op_t0ptr, ___get_global_const(46), ___get_global_const(1087)));
#line 250
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 250
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 250
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 250
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(688), ___nl__im__3, ___get_global_const(1041), ___nl__im__4, ___get_global_const(1042), ___nl__im__5));
#line 250
c_rt_lib0clear(&___nl__im__3);
#line 250
c_rt_lib0clear(&___nl__im__4);
#line 250
c_rt_lib0clear(&___nl__im__5);
#line 250
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 250
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__6));
#line 250
c_rt_lib0clear(&___nl__im__2);
#line 250
c_rt_lib0clear(&___nl__im__3);
#line 250
c_rt_lib0clear(&___nl__im__4);
#line 250
c_rt_lib0clear(&___nl__im__5);
#line 250
c_rt_lib0clear(&___nl__im__6);
#line 250
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 250
c_rt_lib0clear(&___nl__im__1);
#line 250
c_rt_lib0clear(&___nl__im__2);
#line 250
c_rt_lib0clear(&___nl__im__3);
#line 250
c_rt_lib0clear(&___nl__im__4);
#line 250
c_rt_lib0clear(&___nl__im__5);
#line 250
c_rt_lib0clear(&___nl__im__6);
#line 250
return ___nl__im__0;
#line 250
c_rt_lib0clear(&___nl__im__0);
#line 250
c_rt_lib0clear(&___nl__im__1);
#line 250
c_rt_lib0clear(&___nl__im__2);
#line 250
c_rt_lib0clear(&___nl__im__3);
#line 250
c_rt_lib0clear(&___nl__im__4);
#line 250
c_rt_lib0clear(&___nl__im__5);
#line 250
c_rt_lib0clear(&___nl__im__6);
#line 250
return NULL;
}

ImmT  nast0if_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0if_t");
return nast0if_t();
}
ImmT  nast0if_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
#line 255
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 255
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 256
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 256
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 257
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 257
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 257
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 257
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 257
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_const(46), ___get_global_const(910)));
#line 257
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 257
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_const(1028), ___nl__im__8, ___get_global_const(237), ___nl__im__9, ___get_global_const(231), ___nl__im__10));
#line 257
c_rt_lib0clear(&___nl__im__8);
#line 257
c_rt_lib0clear(&___nl__im__9);
#line 257
c_rt_lib0clear(&___nl__im__10);
#line 257
c_rt_lib0copy(&___nl__im__11, ___nl__im__7);
#line 257
c_rt_lib0move(&___nl__im__6, ptd0rec(___nl__im__11));
#line 257
c_rt_lib0clear(&___nl__im__7);
#line 257
c_rt_lib0clear(&___nl__im__8);
#line 257
c_rt_lib0clear(&___nl__im__9);
#line 257
c_rt_lib0clear(&___nl__im__10);
#line 257
c_rt_lib0clear(&___nl__im__11);
#line 257
c_rt_lib0copy(&___nl__im__12, ___nl__im__6);
#line 257
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__12));
#line 257
c_rt_lib0clear(&___nl__im__6);
#line 257
c_rt_lib0clear(&___nl__im__7);
#line 257
c_rt_lib0clear(&___nl__im__8);
#line 257
c_rt_lib0clear(&___nl__im__9);
#line 257
c_rt_lib0clear(&___nl__im__10);
#line 257
c_rt_lib0clear(&___nl__im__11);
#line 257
c_rt_lib0clear(&___nl__im__12);
#line 258
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 258
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__13));
#line 258
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(1028), ___nl__im__3, ___get_global_const(1014), ___nl__im__4, ___get_global_const(1029), ___nl__im__5, ___get_global_const(1030), ___nl__im__13));
#line 258
c_rt_lib0clear(&___nl__im__3);
#line 258
c_rt_lib0clear(&___nl__im__4);
#line 258
c_rt_lib0clear(&___nl__im__5);
#line 258
c_rt_lib0clear(&___nl__im__6);
#line 258
c_rt_lib0clear(&___nl__im__7);
#line 258
c_rt_lib0clear(&___nl__im__8);
#line 258
c_rt_lib0clear(&___nl__im__9);
#line 258
c_rt_lib0clear(&___nl__im__10);
#line 258
c_rt_lib0clear(&___nl__im__11);
#line 258
c_rt_lib0clear(&___nl__im__12);
#line 258
c_rt_lib0clear(&___nl__im__13);
#line 258
c_rt_lib0copy(&___nl__im__14, ___nl__im__2);
#line 258
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__14));
#line 258
c_rt_lib0clear(&___nl__im__2);
#line 258
c_rt_lib0clear(&___nl__im__3);
#line 258
c_rt_lib0clear(&___nl__im__4);
#line 258
c_rt_lib0clear(&___nl__im__5);
#line 258
c_rt_lib0clear(&___nl__im__6);
#line 258
c_rt_lib0clear(&___nl__im__7);
#line 258
c_rt_lib0clear(&___nl__im__8);
#line 258
c_rt_lib0clear(&___nl__im__9);
#line 258
c_rt_lib0clear(&___nl__im__10);
#line 258
c_rt_lib0clear(&___nl__im__11);
#line 258
c_rt_lib0clear(&___nl__im__12);
#line 258
c_rt_lib0clear(&___nl__im__13);
#line 258
c_rt_lib0clear(&___nl__im__14);
#line 258
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 258
c_rt_lib0clear(&___nl__im__1);
#line 258
c_rt_lib0clear(&___nl__im__2);
#line 258
c_rt_lib0clear(&___nl__im__3);
#line 258
c_rt_lib0clear(&___nl__im__4);
#line 258
c_rt_lib0clear(&___nl__im__5);
#line 258
c_rt_lib0clear(&___nl__im__6);
#line 258
c_rt_lib0clear(&___nl__im__7);
#line 258
c_rt_lib0clear(&___nl__im__8);
#line 258
c_rt_lib0clear(&___nl__im__9);
#line 258
c_rt_lib0clear(&___nl__im__10);
#line 258
c_rt_lib0clear(&___nl__im__11);
#line 258
c_rt_lib0clear(&___nl__im__12);
#line 258
c_rt_lib0clear(&___nl__im__13);
#line 258
c_rt_lib0clear(&___nl__im__14);
#line 258
return ___nl__im__0;
#line 258
c_rt_lib0clear(&___nl__im__0);
#line 258
c_rt_lib0clear(&___nl__im__1);
#line 258
c_rt_lib0clear(&___nl__im__2);
#line 258
c_rt_lib0clear(&___nl__im__3);
#line 258
c_rt_lib0clear(&___nl__im__4);
#line 258
c_rt_lib0clear(&___nl__im__5);
#line 258
c_rt_lib0clear(&___nl__im__6);
#line 258
c_rt_lib0clear(&___nl__im__7);
#line 258
c_rt_lib0clear(&___nl__im__8);
#line 258
c_rt_lib0clear(&___nl__im__9);
#line 258
c_rt_lib0clear(&___nl__im__10);
#line 258
c_rt_lib0clear(&___nl__im__11);
#line 258
c_rt_lib0clear(&___nl__im__12);
#line 258
c_rt_lib0clear(&___nl__im__13);
#line 258
c_rt_lib0clear(&___nl__im__14);
#line 258
return NULL;
}

ImmT  nast0for_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0for_t");
return nast0for_t();
}
ImmT  nast0for_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 264
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(46), ___get_global_const(1093)));
#line 264
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 264
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 264
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 264
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(260), ___nl__im__5, ___get_global_const(229), ___nl__im__6));
#line 264
c_rt_lib0clear(&___nl__im__5);
#line 264
c_rt_lib0clear(&___nl__im__6);
#line 264
c_rt_lib0copy(&___nl__im__7, ___nl__im__4);
#line 264
c_rt_lib0move(&___nl__im__3, ptd0var(___nl__im__7));
#line 264
c_rt_lib0clear(&___nl__im__4);
#line 264
c_rt_lib0clear(&___nl__im__5);
#line 264
c_rt_lib0clear(&___nl__im__6);
#line 264
c_rt_lib0clear(&___nl__im__7);
#line 265
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 265
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 266
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 266
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 267
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 267
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 267
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(1031), ___nl__im__3, ___get_global_const(573), ___nl__im__8, ___get_global_const(1028), ___nl__im__9, ___get_global_const(237), ___nl__im__10));
#line 267
c_rt_lib0clear(&___nl__im__3);
#line 267
c_rt_lib0clear(&___nl__im__4);
#line 267
c_rt_lib0clear(&___nl__im__5);
#line 267
c_rt_lib0clear(&___nl__im__6);
#line 267
c_rt_lib0clear(&___nl__im__7);
#line 267
c_rt_lib0clear(&___nl__im__8);
#line 267
c_rt_lib0clear(&___nl__im__9);
#line 267
c_rt_lib0clear(&___nl__im__10);
#line 267
c_rt_lib0copy(&___nl__im__11, ___nl__im__2);
#line 267
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__11));
#line 267
c_rt_lib0clear(&___nl__im__2);
#line 267
c_rt_lib0clear(&___nl__im__3);
#line 267
c_rt_lib0clear(&___nl__im__4);
#line 267
c_rt_lib0clear(&___nl__im__5);
#line 267
c_rt_lib0clear(&___nl__im__6);
#line 267
c_rt_lib0clear(&___nl__im__7);
#line 267
c_rt_lib0clear(&___nl__im__8);
#line 267
c_rt_lib0clear(&___nl__im__9);
#line 267
c_rt_lib0clear(&___nl__im__10);
#line 267
c_rt_lib0clear(&___nl__im__11);
#line 267
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 267
c_rt_lib0clear(&___nl__im__1);
#line 267
c_rt_lib0clear(&___nl__im__2);
#line 267
c_rt_lib0clear(&___nl__im__3);
#line 267
c_rt_lib0clear(&___nl__im__4);
#line 267
c_rt_lib0clear(&___nl__im__5);
#line 267
c_rt_lib0clear(&___nl__im__6);
#line 267
c_rt_lib0clear(&___nl__im__7);
#line 267
c_rt_lib0clear(&___nl__im__8);
#line 267
c_rt_lib0clear(&___nl__im__9);
#line 267
c_rt_lib0clear(&___nl__im__10);
#line 267
c_rt_lib0clear(&___nl__im__11);
#line 267
return ___nl__im__0;
#line 267
c_rt_lib0clear(&___nl__im__0);
#line 267
c_rt_lib0clear(&___nl__im__1);
#line 267
c_rt_lib0clear(&___nl__im__2);
#line 267
c_rt_lib0clear(&___nl__im__3);
#line 267
c_rt_lib0clear(&___nl__im__4);
#line 267
c_rt_lib0clear(&___nl__im__5);
#line 267
c_rt_lib0clear(&___nl__im__6);
#line 267
c_rt_lib0clear(&___nl__im__7);
#line 267
c_rt_lib0clear(&___nl__im__8);
#line 267
c_rt_lib0clear(&___nl__im__9);
#line 267
c_rt_lib0clear(&___nl__im__10);
#line 267
c_rt_lib0clear(&___nl__im__11);
#line 267
return NULL;
}

ImmT  nast0place_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0place_t");
return nast0place_t();
}
ImmT  nast0place_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 272
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 272
c_rt_lib0move(&___nl__im__4, ptd0int());
#line 272
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(169), ___nl__im__3, ___get_global_const(1096), ___nl__im__4));
#line 272
c_rt_lib0clear(&___nl__im__3);
#line 272
c_rt_lib0clear(&___nl__im__4);
#line 272
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 272
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__5));
#line 272
c_rt_lib0clear(&___nl__im__2);
#line 272
c_rt_lib0clear(&___nl__im__3);
#line 272
c_rt_lib0clear(&___nl__im__4);
#line 272
c_rt_lib0clear(&___nl__im__5);
#line 272
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 272
c_rt_lib0clear(&___nl__im__1);
#line 272
c_rt_lib0clear(&___nl__im__2);
#line 272
c_rt_lib0clear(&___nl__im__3);
#line 272
c_rt_lib0clear(&___nl__im__4);
#line 272
c_rt_lib0clear(&___nl__im__5);
#line 272
return ___nl__im__0;
#line 272
c_rt_lib0clear(&___nl__im__0);
#line 272
c_rt_lib0clear(&___nl__im__1);
#line 272
c_rt_lib0clear(&___nl__im__2);
#line 272
c_rt_lib0clear(&___nl__im__3);
#line 272
c_rt_lib0clear(&___nl__im__4);
#line 272
c_rt_lib0clear(&___nl__im__5);
#line 272
return NULL;
}

ImmT  nast0debug_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0debug_t");
return nast0debug_t();
}
ImmT  nast0debug_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 276
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0place_t0ptr, ___get_global_const(46), ___get_global_const(1097)));
#line 276
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 276
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0place_t0ptr, ___get_global_const(46), ___get_global_const(1097)));
#line 276
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 276
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(517), ___nl__im__3, ___get_global_const(1083), ___nl__im__4));
#line 276
c_rt_lib0clear(&___nl__im__3);
#line 276
c_rt_lib0clear(&___nl__im__4);
#line 276
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 276
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__5));
#line 276
c_rt_lib0clear(&___nl__im__2);
#line 276
c_rt_lib0clear(&___nl__im__3);
#line 276
c_rt_lib0clear(&___nl__im__4);
#line 276
c_rt_lib0clear(&___nl__im__5);
#line 276
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 276
c_rt_lib0clear(&___nl__im__1);
#line 276
c_rt_lib0clear(&___nl__im__2);
#line 276
c_rt_lib0clear(&___nl__im__3);
#line 276
c_rt_lib0clear(&___nl__im__4);
#line 276
c_rt_lib0clear(&___nl__im__5);
#line 276
return ___nl__im__0;
#line 276
c_rt_lib0clear(&___nl__im__0);
#line 276
c_rt_lib0clear(&___nl__im__1);
#line 276
c_rt_lib0clear(&___nl__im__2);
#line 276
c_rt_lib0clear(&___nl__im__3);
#line 276
c_rt_lib0clear(&___nl__im__4);
#line 276
c_rt_lib0clear(&___nl__im__5);
#line 276
return NULL;
}

nast0debug_t0type nast0empty_debug0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0empty_debug");
return nast0empty_debug();
}
nast0debug_t0type nast0empty_debug() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 280
___nl__int__3 = 1;
#line 280
c_rt_lib0move(&___nl__im__4, c_rt_lib0int_new(___nl__int__3));
#line 280
c_rt_lib0move(&___nl__im__5,___get_global_const(41));
#line 280
c_rt_lib0move(&___nl__im__5, c_rt_lib0unary_minus(___nl__im__5));
#line 280
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(169), ___nl__im__4, ___get_global_const(1096), ___nl__im__5));
#line 280
//clear ___nl__int__3;
#line 280
c_rt_lib0clear(&___nl__im__4);
#line 280
c_rt_lib0clear(&___nl__im__5);
#line 280
___nl__int__7 = 1;
#line 280
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__7));
#line 280
c_rt_lib0move(&___nl__im__9,___get_global_const(41));
#line 280
c_rt_lib0move(&___nl__im__9, c_rt_lib0unary_minus(___nl__im__9));
#line 280
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_const(169), ___nl__im__8, ___get_global_const(1096), ___nl__im__9));
#line 280
//clear ___nl__int__7;
#line 280
c_rt_lib0clear(&___nl__im__8);
#line 280
c_rt_lib0clear(&___nl__im__9);
#line 280
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(517), ___nl__im__2, ___get_global_const(1083), ___nl__im__6));
#line 280
c_rt_lib0clear(&___nl__im__2);
#line 280
//clear ___nl__int__3;
#line 280
c_rt_lib0clear(&___nl__im__4);
#line 280
c_rt_lib0clear(&___nl__im__5);
#line 280
c_rt_lib0clear(&___nl__im__6);
#line 280
//clear ___nl__int__7;
#line 280
c_rt_lib0clear(&___nl__im__8);
#line 280
c_rt_lib0clear(&___nl__im__9);
#line 280
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 280
c_rt_lib0clear(&___nl__im__1);
#line 280
c_rt_lib0clear(&___nl__im__2);
#line 280
//clear ___nl__int__3;
#line 280
c_rt_lib0clear(&___nl__im__4);
#line 280
c_rt_lib0clear(&___nl__im__5);
#line 280
c_rt_lib0clear(&___nl__im__6);
#line 280
//clear ___nl__int__7;
#line 280
c_rt_lib0clear(&___nl__im__8);
#line 280
c_rt_lib0clear(&___nl__im__9);
#line 280
return ___nl__im__0;
#line 280
c_rt_lib0clear(&___nl__im__0);
#line 280
c_rt_lib0clear(&___nl__im__1);
#line 280
c_rt_lib0clear(&___nl__im__2);
#line 280
//clear ___nl__int__3;
#line 280
c_rt_lib0clear(&___nl__im__4);
#line 280
c_rt_lib0clear(&___nl__im__5);
#line 280
c_rt_lib0clear(&___nl__im__6);
#line 280
//clear ___nl__int__7;
#line 280
c_rt_lib0clear(&___nl__im__8);
#line 280
c_rt_lib0clear(&___nl__im__9);
#line 280
return NULL;
}

nast0value_t0type nast0cast_to_value0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nast0cast_to_value");
nast0value_only_t0type var0 = (_tab[0]);
return nast0cast_to_value(var0);
}
nast0value_t0type nast0cast_to_value(nast0value_only_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nast_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 284
c_rt_lib0move(&___nl__im__3, nast0empty_debug());
#line 284
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(15)));
#line 284
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(231), ___nl__im__3, ___get_global_const(229), ___nl__im__0, ___get_global_const(96), ___nl__im__4));
#line 284
c_rt_lib0clear(&___nl__im__3);
#line 284
c_rt_lib0clear(&___nl__im__4);
#line 284
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 284
c_rt_lib0clear(&___nl__im__0);
#line 284
c_rt_lib0clear(&___nl__im__2);
#line 284
c_rt_lib0clear(&___nl__im__3);
#line 284
c_rt_lib0clear(&___nl__im__4);
#line 284
return ___nl__im__1;
#line 284
c_rt_lib0clear(&___nl__im__0);
#line 284
c_rt_lib0clear(&___nl__im__1);
#line 284
c_rt_lib0clear(&___nl__im__2);
#line 284
c_rt_lib0clear(&___nl__im__3);
#line 284
c_rt_lib0clear(&___nl__im__4);
#line 284
return NULL;
}

ImmT  nast0cmd_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0cmd_t");
return nast0cmd_t();
}
ImmT  nast0cmd_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
#line 291
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_const(46), ___get_global_const(910)));
#line 291
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 293
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nast0if_t0ptr, ___get_global_const(46), ___get_global_const(1098)));
#line 293
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 294
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nast0for_t0ptr, ___get_global_const(46), ___get_global_const(1099)));
#line 294
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 295
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nast0fora_t0ptr, ___get_global_const(46), ___get_global_const(1100)));
#line 295
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 296
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(nast0forh_t0ptr, ___get_global_const(46), ___get_global_const(1101)));
#line 296
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 297
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 297
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 298
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(nast0rep_t0ptr, ___get_global_const(46), ___get_global_const(1102)));
#line 298
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__11));
#line 299
c_rt_lib0move(&___nl__im__12, c_rt_lib0func_new(nast0while_t0ptr, ___get_global_const(46), ___get_global_const(1103)));
#line 299
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__12));
#line 300
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(nast0if_mod_t0ptr, ___get_global_const(46), ___get_global_const(1104)));
#line 300
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__13));
#line 301
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(nast0unless_mod_t0ptr, ___get_global_const(46), ___get_global_const(1105)));
#line 301
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__14));
#line 302
c_rt_lib0move(&___nl__im__15, ptd0none());
#line 303
c_rt_lib0move(&___nl__im__16, ptd0none());
#line 304
c_rt_lib0move(&___nl__im__17, c_rt_lib0func_new(nast0match_t0ptr, ___get_global_const(46), ___get_global_const(1106)));
#line 304
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__17));
#line 305
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 305
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__18));
#line 306
c_rt_lib0move(&___nl__im__19, c_rt_lib0func_new(nast0try_ensure_t0ptr, ___get_global_const(46), ___get_global_const(1107)));
#line 306
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__19));
#line 307
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(nast0try_ensure_t0ptr, ___get_global_const(46), ___get_global_const(1107)));
#line 307
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__20));
#line 308
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(46), ___get_global_const(1093)));
#line 308
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__21));
#line 309
c_rt_lib0move(&___nl__im__22, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 309
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__22));
#line 310
c_rt_lib0move(&___nl__im__23, c_rt_lib0func_new(nast0block_t0ptr, ___get_global_const(46), ___get_global_const(332)));
#line 310
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__23));
#line 311
c_rt_lib0move(&___nl__im__24, c_rt_lib0func_new(nast0die_t0ptr, ___get_global_const(46), ___get_global_const(1108)));
#line 311
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__24));
#line 312
c_rt_lib0move(&___nl__im__25, ptd0none());
#line 312
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(20, ___get_global_const(1014), ___nl__im__6, ___get_global_const(1015), ___nl__im__7, ___get_global_const(1016), ___nl__im__8, ___get_global_const(1017), ___nl__im__9, ___get_global_const(175), ___nl__im__10, ___get_global_const(1018), ___nl__im__11, ___get_global_const(1019), ___nl__im__12, ___get_global_const(1020), ___nl__im__13, ___get_global_const(1021), ___nl__im__14, ___get_global_const(1022), ___nl__im__15, ___get_global_const(1023), ___nl__im__16, ___get_global_const(1024), ___nl__im__17, ___get_global_const(229), ___nl__im__18, ___get_global_const(1026), ___nl__im__19, ___get_global_const(123), ___nl__im__20, ___get_global_const(260), ___nl__im__21, ___get_global_const(119), ___nl__im__22, ___get_global_const(1025), ___nl__im__23, ___get_global_const(255), ___nl__im__24, ___get_global_const(1027), ___nl__im__25));
#line 312
c_rt_lib0clear(&___nl__im__6);
#line 312
c_rt_lib0clear(&___nl__im__7);
#line 312
c_rt_lib0clear(&___nl__im__8);
#line 312
c_rt_lib0clear(&___nl__im__9);
#line 312
c_rt_lib0clear(&___nl__im__10);
#line 312
c_rt_lib0clear(&___nl__im__11);
#line 312
c_rt_lib0clear(&___nl__im__12);
#line 312
c_rt_lib0clear(&___nl__im__13);
#line 312
c_rt_lib0clear(&___nl__im__14);
#line 312
c_rt_lib0clear(&___nl__im__15);
#line 312
c_rt_lib0clear(&___nl__im__16);
#line 312
c_rt_lib0clear(&___nl__im__17);
#line 312
c_rt_lib0clear(&___nl__im__18);
#line 312
c_rt_lib0clear(&___nl__im__19);
#line 312
c_rt_lib0clear(&___nl__im__20);
#line 312
c_rt_lib0clear(&___nl__im__21);
#line 312
c_rt_lib0clear(&___nl__im__22);
#line 312
c_rt_lib0clear(&___nl__im__23);
#line 312
c_rt_lib0clear(&___nl__im__24);
#line 312
c_rt_lib0clear(&___nl__im__25);
#line 312
c_rt_lib0copy(&___nl__im__26, ___nl__im__5);
#line 312
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__26));
#line 312
c_rt_lib0clear(&___nl__im__5);
#line 312
c_rt_lib0clear(&___nl__im__6);
#line 312
c_rt_lib0clear(&___nl__im__7);
#line 312
c_rt_lib0clear(&___nl__im__8);
#line 312
c_rt_lib0clear(&___nl__im__9);
#line 312
c_rt_lib0clear(&___nl__im__10);
#line 312
c_rt_lib0clear(&___nl__im__11);
#line 312
c_rt_lib0clear(&___nl__im__12);
#line 312
c_rt_lib0clear(&___nl__im__13);
#line 312
c_rt_lib0clear(&___nl__im__14);
#line 312
c_rt_lib0clear(&___nl__im__15);
#line 312
c_rt_lib0clear(&___nl__im__16);
#line 312
c_rt_lib0clear(&___nl__im__17);
#line 312
c_rt_lib0clear(&___nl__im__18);
#line 312
c_rt_lib0clear(&___nl__im__19);
#line 312
c_rt_lib0clear(&___nl__im__20);
#line 312
c_rt_lib0clear(&___nl__im__21);
#line 312
c_rt_lib0clear(&___nl__im__22);
#line 312
c_rt_lib0clear(&___nl__im__23);
#line 312
c_rt_lib0clear(&___nl__im__24);
#line 312
c_rt_lib0clear(&___nl__im__25);
#line 312
c_rt_lib0clear(&___nl__im__26);
#line 312
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(231), ___nl__im__3, ___get_global_const(237), ___nl__im__4));
#line 312
c_rt_lib0clear(&___nl__im__3);
#line 312
c_rt_lib0clear(&___nl__im__4);
#line 312
c_rt_lib0clear(&___nl__im__5);
#line 312
c_rt_lib0clear(&___nl__im__6);
#line 312
c_rt_lib0clear(&___nl__im__7);
#line 312
c_rt_lib0clear(&___nl__im__8);
#line 312
c_rt_lib0clear(&___nl__im__9);
#line 312
c_rt_lib0clear(&___nl__im__10);
#line 312
c_rt_lib0clear(&___nl__im__11);
#line 312
c_rt_lib0clear(&___nl__im__12);
#line 312
c_rt_lib0clear(&___nl__im__13);
#line 312
c_rt_lib0clear(&___nl__im__14);
#line 312
c_rt_lib0clear(&___nl__im__15);
#line 312
c_rt_lib0clear(&___nl__im__16);
#line 312
c_rt_lib0clear(&___nl__im__17);
#line 312
c_rt_lib0clear(&___nl__im__18);
#line 312
c_rt_lib0clear(&___nl__im__19);
#line 312
c_rt_lib0clear(&___nl__im__20);
#line 312
c_rt_lib0clear(&___nl__im__21);
#line 312
c_rt_lib0clear(&___nl__im__22);
#line 312
c_rt_lib0clear(&___nl__im__23);
#line 312
c_rt_lib0clear(&___nl__im__24);
#line 312
c_rt_lib0clear(&___nl__im__25);
#line 312
c_rt_lib0clear(&___nl__im__26);
#line 312
c_rt_lib0copy(&___nl__im__27, ___nl__im__2);
#line 312
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__27));
#line 312
c_rt_lib0clear(&___nl__im__2);
#line 312
c_rt_lib0clear(&___nl__im__3);
#line 312
c_rt_lib0clear(&___nl__im__4);
#line 312
c_rt_lib0clear(&___nl__im__5);
#line 312
c_rt_lib0clear(&___nl__im__6);
#line 312
c_rt_lib0clear(&___nl__im__7);
#line 312
c_rt_lib0clear(&___nl__im__8);
#line 312
c_rt_lib0clear(&___nl__im__9);
#line 312
c_rt_lib0clear(&___nl__im__10);
#line 312
c_rt_lib0clear(&___nl__im__11);
#line 312
c_rt_lib0clear(&___nl__im__12);
#line 312
c_rt_lib0clear(&___nl__im__13);
#line 312
c_rt_lib0clear(&___nl__im__14);
#line 312
c_rt_lib0clear(&___nl__im__15);
#line 312
c_rt_lib0clear(&___nl__im__16);
#line 312
c_rt_lib0clear(&___nl__im__17);
#line 312
c_rt_lib0clear(&___nl__im__18);
#line 312
c_rt_lib0clear(&___nl__im__19);
#line 312
c_rt_lib0clear(&___nl__im__20);
#line 312
c_rt_lib0clear(&___nl__im__21);
#line 312
c_rt_lib0clear(&___nl__im__22);
#line 312
c_rt_lib0clear(&___nl__im__23);
#line 312
c_rt_lib0clear(&___nl__im__24);
#line 312
c_rt_lib0clear(&___nl__im__25);
#line 312
c_rt_lib0clear(&___nl__im__26);
#line 312
c_rt_lib0clear(&___nl__im__27);
#line 312
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 312
c_rt_lib0clear(&___nl__im__1);
#line 312
c_rt_lib0clear(&___nl__im__2);
#line 312
c_rt_lib0clear(&___nl__im__3);
#line 312
c_rt_lib0clear(&___nl__im__4);
#line 312
c_rt_lib0clear(&___nl__im__5);
#line 312
c_rt_lib0clear(&___nl__im__6);
#line 312
c_rt_lib0clear(&___nl__im__7);
#line 312
c_rt_lib0clear(&___nl__im__8);
#line 312
c_rt_lib0clear(&___nl__im__9);
#line 312
c_rt_lib0clear(&___nl__im__10);
#line 312
c_rt_lib0clear(&___nl__im__11);
#line 312
c_rt_lib0clear(&___nl__im__12);
#line 312
c_rt_lib0clear(&___nl__im__13);
#line 312
c_rt_lib0clear(&___nl__im__14);
#line 312
c_rt_lib0clear(&___nl__im__15);
#line 312
c_rt_lib0clear(&___nl__im__16);
#line 312
c_rt_lib0clear(&___nl__im__17);
#line 312
c_rt_lib0clear(&___nl__im__18);
#line 312
c_rt_lib0clear(&___nl__im__19);
#line 312
c_rt_lib0clear(&___nl__im__20);
#line 312
c_rt_lib0clear(&___nl__im__21);
#line 312
c_rt_lib0clear(&___nl__im__22);
#line 312
c_rt_lib0clear(&___nl__im__23);
#line 312
c_rt_lib0clear(&___nl__im__24);
#line 312
c_rt_lib0clear(&___nl__im__25);
#line 312
c_rt_lib0clear(&___nl__im__26);
#line 312
c_rt_lib0clear(&___nl__im__27);
#line 312
return ___nl__im__0;
#line 312
c_rt_lib0clear(&___nl__im__0);
#line 312
c_rt_lib0clear(&___nl__im__1);
#line 312
c_rt_lib0clear(&___nl__im__2);
#line 312
c_rt_lib0clear(&___nl__im__3);
#line 312
c_rt_lib0clear(&___nl__im__4);
#line 312
c_rt_lib0clear(&___nl__im__5);
#line 312
c_rt_lib0clear(&___nl__im__6);
#line 312
c_rt_lib0clear(&___nl__im__7);
#line 312
c_rt_lib0clear(&___nl__im__8);
#line 312
c_rt_lib0clear(&___nl__im__9);
#line 312
c_rt_lib0clear(&___nl__im__10);
#line 312
c_rt_lib0clear(&___nl__im__11);
#line 312
c_rt_lib0clear(&___nl__im__12);
#line 312
c_rt_lib0clear(&___nl__im__13);
#line 312
c_rt_lib0clear(&___nl__im__14);
#line 312
c_rt_lib0clear(&___nl__im__15);
#line 312
c_rt_lib0clear(&___nl__im__16);
#line 312
c_rt_lib0clear(&___nl__im__17);
#line 312
c_rt_lib0clear(&___nl__im__18);
#line 312
c_rt_lib0clear(&___nl__im__19);
#line 312
c_rt_lib0clear(&___nl__im__20);
#line 312
c_rt_lib0clear(&___nl__im__21);
#line 312
c_rt_lib0clear(&___nl__im__22);
#line 312
c_rt_lib0clear(&___nl__im__23);
#line 312
c_rt_lib0clear(&___nl__im__24);
#line 312
c_rt_lib0clear(&___nl__im__25);
#line 312
c_rt_lib0clear(&___nl__im__26);
#line 312
c_rt_lib0clear(&___nl__im__27);
#line 312
return NULL;
}

ImmT  nast0die_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0die_t");
return nast0die_t();
}
ImmT  nast0die_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 318
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 318
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 318
c_rt_lib0copy(&___nl__im__3, ___nl__im__2);
#line 318
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__3));
#line 318
c_rt_lib0clear(&___nl__im__2);
#line 318
c_rt_lib0clear(&___nl__im__3);
#line 318
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 318
c_rt_lib0clear(&___nl__im__1);
#line 318
c_rt_lib0clear(&___nl__im__2);
#line 318
c_rt_lib0clear(&___nl__im__3);
#line 318
return ___nl__im__0;
#line 318
c_rt_lib0clear(&___nl__im__0);
#line 318
c_rt_lib0clear(&___nl__im__1);
#line 318
c_rt_lib0clear(&___nl__im__2);
#line 318
c_rt_lib0clear(&___nl__im__3);
#line 318
return NULL;
}

ImmT  nast0block_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0block_t");
return nast0block_t();
}
ImmT  nast0block_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 322
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 322
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 322
c_rt_lib0copy(&___nl__im__3, ___nl__im__2);
#line 322
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__3));
#line 322
c_rt_lib0clear(&___nl__im__2);
#line 322
c_rt_lib0clear(&___nl__im__3);
#line 322
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 322
c_rt_lib0clear(&___nl__im__1);
#line 322
c_rt_lib0clear(&___nl__im__2);
#line 322
c_rt_lib0clear(&___nl__im__3);
#line 322
return ___nl__im__0;
#line 322
c_rt_lib0clear(&___nl__im__0);
#line 322
c_rt_lib0clear(&___nl__im__1);
#line 322
c_rt_lib0clear(&___nl__im__2);
#line 322
c_rt_lib0clear(&___nl__im__3);
#line 322
return NULL;
}

ImmT  nast0if_mod_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0if_mod_t");
return nast0if_mod_t();
}
ImmT  nast0if_mod_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 326
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 326
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 326
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 326
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 326
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(1028), ___nl__im__3, ___get_global_const(237), ___nl__im__4));
#line 326
c_rt_lib0clear(&___nl__im__3);
#line 326
c_rt_lib0clear(&___nl__im__4);
#line 326
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 326
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__5));
#line 326
c_rt_lib0clear(&___nl__im__2);
#line 326
c_rt_lib0clear(&___nl__im__3);
#line 326
c_rt_lib0clear(&___nl__im__4);
#line 326
c_rt_lib0clear(&___nl__im__5);
#line 326
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 326
c_rt_lib0clear(&___nl__im__1);
#line 326
c_rt_lib0clear(&___nl__im__2);
#line 326
c_rt_lib0clear(&___nl__im__3);
#line 326
c_rt_lib0clear(&___nl__im__4);
#line 326
c_rt_lib0clear(&___nl__im__5);
#line 326
return ___nl__im__0;
#line 326
c_rt_lib0clear(&___nl__im__0);
#line 326
c_rt_lib0clear(&___nl__im__1);
#line 326
c_rt_lib0clear(&___nl__im__2);
#line 326
c_rt_lib0clear(&___nl__im__3);
#line 326
c_rt_lib0clear(&___nl__im__4);
#line 326
c_rt_lib0clear(&___nl__im__5);
#line 326
return NULL;
}

ImmT  nast0unless_mod_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0unless_mod_t");
return nast0unless_mod_t();
}
ImmT  nast0unless_mod_t() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 330
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1073)));
#line 330
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 330
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 330
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 330
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(1028), ___nl__im__3, ___get_global_const(237), ___nl__im__4));
#line 330
c_rt_lib0clear(&___nl__im__3);
#line 330
c_rt_lib0clear(&___nl__im__4);
#line 330
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 330
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__5));
#line 330
c_rt_lib0clear(&___nl__im__2);
#line 330
c_rt_lib0clear(&___nl__im__3);
#line 330
c_rt_lib0clear(&___nl__im__4);
#line 330
c_rt_lib0clear(&___nl__im__5);
#line 330
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 330
c_rt_lib0clear(&___nl__im__1);
#line 330
c_rt_lib0clear(&___nl__im__2);
#line 330
c_rt_lib0clear(&___nl__im__3);
#line 330
c_rt_lib0clear(&___nl__im__4);
#line 330
c_rt_lib0clear(&___nl__im__5);
#line 330
return ___nl__im__0;
#line 330
c_rt_lib0clear(&___nl__im__0);
#line 330
c_rt_lib0clear(&___nl__im__1);
#line 330
c_rt_lib0clear(&___nl__im__2);
#line 330
c_rt_lib0clear(&___nl__im__3);
#line 330
c_rt_lib0clear(&___nl__im__4);
#line 330
c_rt_lib0clear(&___nl__im__5);
#line 330
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void nast_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT nast_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nast_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
