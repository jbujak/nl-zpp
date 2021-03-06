
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "post_processing_t.h"
#include "ptd.h"
#include "nlasm.h"
#include "boolean_t.h"
#include "interpreter.h"
#include "nlasm.h"
#include "post_processing_t.h"
#include "interpreter.h"
#include "boolean_t.h"
#line 1 "post_processing_t.nl"

static ImmT *__const__f = NULL;
void post_processing_t_priv0__const__init();
ImmT post_processing_t_priv0__const__sim(int __nr);
ImmT post_processing_t_priv0__const__sing(int __nr);



ImmT  post_processing_t0fun_tree_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0fun_tree_t");
return post_processing_t0fun_tree_t();
}
ImmT  post_processing_t0fun_tree_t() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 12
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 12
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 12
c_rt_lib0clear(&___nl__im__5);
#line 12
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__4));
#line 12
c_rt_lib0clear(&___nl__im__4);
#line 12
c_rt_lib0clear(&___nl__im__5);
#line 12
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 12
c_rt_lib0clear(&___nl__im__3);
#line 12
c_rt_lib0clear(&___nl__im__4);
#line 12
c_rt_lib0clear(&___nl__im__5);
#line 12
c_rt_lib0move(&___nl__im__1, ptd0hash(___nl__im__2));
#line 12
c_rt_lib0clear(&___nl__im__2);
#line 12
c_rt_lib0clear(&___nl__im__3);
#line 12
c_rt_lib0clear(&___nl__im__4);
#line 12
c_rt_lib0clear(&___nl__im__5);
#line 12
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 12
c_rt_lib0clear(&___nl__im__1);
#line 12
c_rt_lib0clear(&___nl__im__2);
#line 12
c_rt_lib0clear(&___nl__im__3);
#line 12
c_rt_lib0clear(&___nl__im__4);
#line 12
c_rt_lib0clear(&___nl__im__5);
#line 12
return ___nl__im__0;
#line 12
c_rt_lib0clear(&___nl__im__0);
#line 12
c_rt_lib0clear(&___nl__im__1);
#line 12
c_rt_lib0clear(&___nl__im__2);
#line 12
c_rt_lib0clear(&___nl__im__3);
#line 12
c_rt_lib0clear(&___nl__im__4);
#line 12
c_rt_lib0clear(&___nl__im__5);
#line 12
return NULL;
}

ImmT  post_processing_t0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0state_t");
return post_processing_t0state_t();
}
ImmT  post_processing_t0state_t() {
post_processing_t_priv0__const__init();
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
#line 17
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0result_t0ptr, ___get_global_const(316), ___get_global_const(1225)));
#line 17
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 17
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__4));
#line 17
c_rt_lib0clear(&___nl__im__4);
#line 18
c_rt_lib0move(&___nl__im__6, ptd0int());
#line 18
c_rt_lib0move(&___nl__im__5, ptd0hash(___nl__im__6));
#line 18
c_rt_lib0clear(&___nl__im__6);
#line 19
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(post_processing_t0math_funs_t0ptr, ___get_global_const(1226), ___get_global_const(1227)));
#line 19
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 20
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(post_processing_t0fun_tree_t0ptr, ___get_global_const(1226), ___get_global_const(1228)));
#line 20
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 21
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(post_processing_t0math_funs_t0ptr, ___get_global_const(1226), ___get_global_const(1227)));
#line 21
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 22
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(post_processing_t0optimization_t0ptr, ___get_global_const(1226), ___get_global_const(1229)));
#line 22
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 23
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(interpreter0state_t0ptr, ___get_global_const(886), ___get_global_const(1132)));
#line 23
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__11));
#line 23
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(7, ___get_global_const(214), ___nl__im__3, ___get_global_const(1223), ___nl__im__5, ___get_global_const(1222), ___nl__im__7, ___get_global_const(1221), ___nl__im__8, ___get_global_const(1224), ___nl__im__9, ___get_global_const(100), ___nl__im__10, ___get_global_const(215), ___nl__im__11));
#line 23
c_rt_lib0clear(&___nl__im__3);
#line 23
c_rt_lib0clear(&___nl__im__4);
#line 23
c_rt_lib0clear(&___nl__im__5);
#line 23
c_rt_lib0clear(&___nl__im__6);
#line 23
c_rt_lib0clear(&___nl__im__7);
#line 23
c_rt_lib0clear(&___nl__im__8);
#line 23
c_rt_lib0clear(&___nl__im__9);
#line 23
c_rt_lib0clear(&___nl__im__10);
#line 23
c_rt_lib0clear(&___nl__im__11);
#line 23
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 23
c_rt_lib0clear(&___nl__im__2);
#line 23
c_rt_lib0clear(&___nl__im__3);
#line 23
c_rt_lib0clear(&___nl__im__4);
#line 23
c_rt_lib0clear(&___nl__im__5);
#line 23
c_rt_lib0clear(&___nl__im__6);
#line 23
c_rt_lib0clear(&___nl__im__7);
#line 23
c_rt_lib0clear(&___nl__im__8);
#line 23
c_rt_lib0clear(&___nl__im__9);
#line 23
c_rt_lib0clear(&___nl__im__10);
#line 23
c_rt_lib0clear(&___nl__im__11);
#line 23
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 23
c_rt_lib0clear(&___nl__im__1);
#line 23
c_rt_lib0clear(&___nl__im__2);
#line 23
c_rt_lib0clear(&___nl__im__3);
#line 23
c_rt_lib0clear(&___nl__im__4);
#line 23
c_rt_lib0clear(&___nl__im__5);
#line 23
c_rt_lib0clear(&___nl__im__6);
#line 23
c_rt_lib0clear(&___nl__im__7);
#line 23
c_rt_lib0clear(&___nl__im__8);
#line 23
c_rt_lib0clear(&___nl__im__9);
#line 23
c_rt_lib0clear(&___nl__im__10);
#line 23
c_rt_lib0clear(&___nl__im__11);
#line 23
return ___nl__im__0;
#line 23
c_rt_lib0clear(&___nl__im__0);
#line 23
c_rt_lib0clear(&___nl__im__1);
#line 23
c_rt_lib0clear(&___nl__im__2);
#line 23
c_rt_lib0clear(&___nl__im__3);
#line 23
c_rt_lib0clear(&___nl__im__4);
#line 23
c_rt_lib0clear(&___nl__im__5);
#line 23
c_rt_lib0clear(&___nl__im__6);
#line 23
c_rt_lib0clear(&___nl__im__7);
#line 23
c_rt_lib0clear(&___nl__im__8);
#line 23
c_rt_lib0clear(&___nl__im__9);
#line 23
c_rt_lib0clear(&___nl__im__10);
#line 23
c_rt_lib0clear(&___nl__im__11);
#line 23
return NULL;
}

ImmT  post_processing_t0math_funs_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0math_funs_t");
return post_processing_t0math_funs_t();
}
ImmT  post_processing_t0math_funs_t() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 28
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(95), ___get_global_const(96)));
#line 28
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 28
c_rt_lib0move(&___nl__im__1, ptd0hash(___nl__im__2));
#line 28
c_rt_lib0clear(&___nl__im__2);
#line 28
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 28
c_rt_lib0clear(&___nl__im__1);
#line 28
c_rt_lib0clear(&___nl__im__2);
#line 28
return ___nl__im__0;
#line 28
c_rt_lib0clear(&___nl__im__0);
#line 28
c_rt_lib0clear(&___nl__im__1);
#line 28
c_rt_lib0clear(&___nl__im__2);
#line 28
return NULL;
}

ImmT  post_processing_t0reg_const0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0reg_const");
return post_processing_t0reg_const();
}
ImmT  post_processing_t0reg_const() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 32
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 32
c_rt_lib0move(&___nl__im__4, ptd0int());
#line 32
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(79), ___nl__im__3, ___get_global_const(78), ___nl__im__4));
#line 32
c_rt_lib0clear(&___nl__im__3);
#line 32
c_rt_lib0clear(&___nl__im__4);
#line 32
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__2));
#line 32
c_rt_lib0clear(&___nl__im__2);
#line 32
c_rt_lib0clear(&___nl__im__3);
#line 32
c_rt_lib0clear(&___nl__im__4);
#line 32
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 32
c_rt_lib0clear(&___nl__im__1);
#line 32
c_rt_lib0clear(&___nl__im__2);
#line 32
c_rt_lib0clear(&___nl__im__3);
#line 32
c_rt_lib0clear(&___nl__im__4);
#line 32
return ___nl__im__0;
#line 32
c_rt_lib0clear(&___nl__im__0);
#line 32
c_rt_lib0clear(&___nl__im__1);
#line 32
c_rt_lib0clear(&___nl__im__2);
#line 32
c_rt_lib0clear(&___nl__im__3);
#line 32
c_rt_lib0clear(&___nl__im__4);
#line 32
return NULL;
}

ImmT  post_processing_t0reg_val_const0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0reg_val_const");
return post_processing_t0reg_val_const();
}
ImmT  post_processing_t0reg_val_const() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 36
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 36
c_rt_lib0move(&___nl__im__6, ptd0int());
#line 36
c_rt_lib0move(&___nl__im__7, ptd0ptd_im());
#line 36
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(227), ___nl__im__6, ___get_global_const(226), ___nl__im__7));
#line 36
c_rt_lib0clear(&___nl__im__6);
#line 36
c_rt_lib0clear(&___nl__im__7);
#line 36
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 36
c_rt_lib0clear(&___nl__im__5);
#line 36
c_rt_lib0clear(&___nl__im__6);
#line 36
c_rt_lib0clear(&___nl__im__7);
#line 36
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(79), ___nl__im__3, ___get_global_const(78), ___nl__im__4));
#line 36
c_rt_lib0clear(&___nl__im__3);
#line 36
c_rt_lib0clear(&___nl__im__4);
#line 36
c_rt_lib0clear(&___nl__im__5);
#line 36
c_rt_lib0clear(&___nl__im__6);
#line 36
c_rt_lib0clear(&___nl__im__7);
#line 36
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__2));
#line 36
c_rt_lib0clear(&___nl__im__2);
#line 36
c_rt_lib0clear(&___nl__im__3);
#line 36
c_rt_lib0clear(&___nl__im__4);
#line 36
c_rt_lib0clear(&___nl__im__5);
#line 36
c_rt_lib0clear(&___nl__im__6);
#line 36
c_rt_lib0clear(&___nl__im__7);
#line 36
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 36
c_rt_lib0clear(&___nl__im__1);
#line 36
c_rt_lib0clear(&___nl__im__2);
#line 36
c_rt_lib0clear(&___nl__im__3);
#line 36
c_rt_lib0clear(&___nl__im__4);
#line 36
c_rt_lib0clear(&___nl__im__5);
#line 36
c_rt_lib0clear(&___nl__im__6);
#line 36
c_rt_lib0clear(&___nl__im__7);
#line 36
return ___nl__im__0;
#line 36
c_rt_lib0clear(&___nl__im__0);
#line 36
c_rt_lib0clear(&___nl__im__1);
#line 36
c_rt_lib0clear(&___nl__im__2);
#line 36
c_rt_lib0clear(&___nl__im__3);
#line 36
c_rt_lib0clear(&___nl__im__4);
#line 36
c_rt_lib0clear(&___nl__im__5);
#line 36
c_rt_lib0clear(&___nl__im__6);
#line 36
c_rt_lib0clear(&___nl__im__7);
#line 36
return NULL;
}

ImmT  post_processing_t0optimization_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0optimization_t");
return post_processing_t0optimization_t();
}
ImmT  post_processing_t0optimization_t() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 40
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 40
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 40
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 40
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 40
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 40
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(5, ___get_global_const(83), ___nl__im__3, ___get_global_const(84), ___nl__im__4, ___get_global_const(85), ___nl__im__5, ___get_global_const(86), ___nl__im__6, ___get_global_const(87), ___nl__im__7));
#line 40
c_rt_lib0clear(&___nl__im__3);
#line 40
c_rt_lib0clear(&___nl__im__4);
#line 40
c_rt_lib0clear(&___nl__im__5);
#line 40
c_rt_lib0clear(&___nl__im__6);
#line 40
c_rt_lib0clear(&___nl__im__7);
#line 40
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__2));
#line 40
c_rt_lib0clear(&___nl__im__2);
#line 40
c_rt_lib0clear(&___nl__im__3);
#line 40
c_rt_lib0clear(&___nl__im__4);
#line 40
c_rt_lib0clear(&___nl__im__5);
#line 40
c_rt_lib0clear(&___nl__im__6);
#line 40
c_rt_lib0clear(&___nl__im__7);
#line 40
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 40
c_rt_lib0clear(&___nl__im__1);
#line 40
c_rt_lib0clear(&___nl__im__2);
#line 40
c_rt_lib0clear(&___nl__im__3);
#line 40
c_rt_lib0clear(&___nl__im__4);
#line 40
c_rt_lib0clear(&___nl__im__5);
#line 40
c_rt_lib0clear(&___nl__im__6);
#line 40
c_rt_lib0clear(&___nl__im__7);
#line 40
return ___nl__im__0;
#line 40
c_rt_lib0clear(&___nl__im__0);
#line 40
c_rt_lib0clear(&___nl__im__1);
#line 40
c_rt_lib0clear(&___nl__im__2);
#line 40
c_rt_lib0clear(&___nl__im__3);
#line 40
c_rt_lib0clear(&___nl__im__4);
#line 40
c_rt_lib0clear(&___nl__im__5);
#line 40
c_rt_lib0clear(&___nl__im__6);
#line 40
c_rt_lib0clear(&___nl__im__7);
#line 40
return NULL;
}

ImmT  post_processing_t0const_reg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0const_reg_t");
return post_processing_t0const_reg_t();
}
ImmT  post_processing_t0const_reg_t() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 44
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(post_processing_t0reg_const0ptr, ___get_global_const(1226), ___get_global_const(1230)));
#line 44
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 44
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0move(&___nl__im__6, ptd0int());
#line 44
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(224), ___nl__im__4, ___get_global_const(223), ___nl__im__6));
#line 44
c_rt_lib0clear(&___nl__im__4);
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0clear(&___nl__im__6);
#line 44
c_rt_lib0move(&___nl__im__2, ptd0rec(___nl__im__3));
#line 44
c_rt_lib0clear(&___nl__im__3);
#line 44
c_rt_lib0clear(&___nl__im__4);
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0clear(&___nl__im__6);
#line 44
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__2));
#line 44
c_rt_lib0clear(&___nl__im__2);
#line 44
c_rt_lib0clear(&___nl__im__3);
#line 44
c_rt_lib0clear(&___nl__im__4);
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0clear(&___nl__im__6);
#line 44
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 44
c_rt_lib0clear(&___nl__im__1);
#line 44
c_rt_lib0clear(&___nl__im__2);
#line 44
c_rt_lib0clear(&___nl__im__3);
#line 44
c_rt_lib0clear(&___nl__im__4);
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0clear(&___nl__im__6);
#line 44
return ___nl__im__0;
#line 44
c_rt_lib0clear(&___nl__im__0);
#line 44
c_rt_lib0clear(&___nl__im__1);
#line 44
c_rt_lib0clear(&___nl__im__2);
#line 44
c_rt_lib0clear(&___nl__im__3);
#line 44
c_rt_lib0clear(&___nl__im__4);
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0clear(&___nl__im__6);
#line 44
return NULL;
}

ImmT  post_processing_t0const_reg_val_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0const_reg_val_t");
return post_processing_t0const_reg_val_t();
}
ImmT  post_processing_t0const_reg_val_t() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 48
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(post_processing_t0reg_val_const0ptr, ___get_global_const(1226), ___get_global_const(1231)));
#line 48
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 48
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 48
c_rt_lib0clear(&___nl__im__5);
#line 48
c_rt_lib0move(&___nl__im__6, ptd0int());
#line 48
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(224), ___nl__im__4, ___get_global_const(223), ___nl__im__6));
#line 48
c_rt_lib0clear(&___nl__im__4);
#line 48
c_rt_lib0clear(&___nl__im__5);
#line 48
c_rt_lib0clear(&___nl__im__6);
#line 48
c_rt_lib0move(&___nl__im__2, ptd0rec(___nl__im__3));
#line 48
c_rt_lib0clear(&___nl__im__3);
#line 48
c_rt_lib0clear(&___nl__im__4);
#line 48
c_rt_lib0clear(&___nl__im__5);
#line 48
c_rt_lib0clear(&___nl__im__6);
#line 48
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__2));
#line 48
c_rt_lib0clear(&___nl__im__2);
#line 48
c_rt_lib0clear(&___nl__im__3);
#line 48
c_rt_lib0clear(&___nl__im__4);
#line 48
c_rt_lib0clear(&___nl__im__5);
#line 48
c_rt_lib0clear(&___nl__im__6);
#line 48
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 48
c_rt_lib0clear(&___nl__im__1);
#line 48
c_rt_lib0clear(&___nl__im__2);
#line 48
c_rt_lib0clear(&___nl__im__3);
#line 48
c_rt_lib0clear(&___nl__im__4);
#line 48
c_rt_lib0clear(&___nl__im__5);
#line 48
c_rt_lib0clear(&___nl__im__6);
#line 48
return ___nl__im__0;
#line 48
c_rt_lib0clear(&___nl__im__0);
#line 48
c_rt_lib0clear(&___nl__im__1);
#line 48
c_rt_lib0clear(&___nl__im__2);
#line 48
c_rt_lib0clear(&___nl__im__3);
#line 48
c_rt_lib0clear(&___nl__im__4);
#line 48
c_rt_lib0clear(&___nl__im__5);
#line 48
c_rt_lib0clear(&___nl__im__6);
#line 48
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void post_processing_t_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT post_processing_t_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT post_processing_t_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
