
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "generator_c_struct_dependence_sort.h"
#include "hash.h"
#include "tct.h"
#include "array.h"
#include "string.h"
#include "boolean_t.h"
#include "ptd.h"
#include "nlasm.h"
#include "ov.h"
#include "anon_naming.h"
#include "generator_c_struct_dependence_sort.h"
#include "tct.h"
#include "boolean_t.h"
#line 1 "generator_c_struct_dependence_sort.nl"

static ImmT *__const__f = NULL;
void generator_c_struct_dependence_sort_priv0__const__init();
ImmT generator_c_struct_dependence_sort_priv0__const__sim(int __nr);
ImmT generator_c_struct_dependence_sort_priv0__const__sing(int __nr);

ImmT  generator_c_struct_dependence_sort_priv0get_module_name(ImmT  ___nl__im__0);
ImmT  generator_c_struct_dependence_sort_priv0get_fun_name(ImmT  ___nl__im__0);
ImmT  generator_c_struct_dependence_sort_priv0get_name(tct0meta_type0type ___nl__im__0);
ImmT  generator_c_struct_dependence_sort_priv0get_required_types_list(tct0meta_type0type ___nl__im__0,generator_c_struct_dependence_sort0graph_node0type* ___ref___im__1,ImmT  ___nl__im__2);
generator_c_struct_dependence_sort0graph0type generator_c_struct_dependence_sort_priv0in_funs_to_graph(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_c_struct_dependence_sort_priv0remove_dups(ImmT * ___ref___im__0);
generator_c_struct_dependence_sort0decl_def_type0type generator_c_struct_dependence_sort_priv0join_type(generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1);
generator_c_struct_dependence_sort0decl_def_type0type generator_c_struct_dependence_sort_priv0common_type(generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1);
generator_c_struct_dependence_sort0decl_def_type0type generator_c_struct_dependence_sort_priv0split_type(generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1);
generator_c_struct_dependence_sort0sorted_element0type generator_c_struct_dependence_sort_priv0type_to_var(ImmT  ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1);
ImmT  generator_c_struct_dependence_sort_priv0sort_graph_help(generator_c_struct_dependence_sort0graph0type ___nl__im__0,ImmT * ___ref___im__1,ImmT * ___ref___im__2,ImmT * ___ref___im__3,generator_c_struct_dependence_sort0sorted_element0type ___nl__im__4,bool* ___ref___bool__5);
generator_c_struct_dependence_sort0result_t0type generator_c_struct_dependence_sort_priv0sort_graph(generator_c_struct_dependence_sort0graph0type ___nl__im__0);
ImmT  generator_c_struct_dependence_sort_priv0anon_add(tct0meta_type0type ___nl__im__0,ImmT * ___ref___im__1);
ImmT  generator_c_struct_dependence_sort_priv0deep_anon_add(tct0meta_type0type ___nl__im__0,ImmT * ___ref___im__1);
ImmT  generator_c_struct_dependence_sort_priv0get_anons(ImmT  ___nl__im__0);
ImmT  generator_c_struct_dependence_sort_priv0nlasm_to_type_hash(ImmT  ___nl__im__0);


ImmT  generator_c_struct_dependence_sort0result_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0result_t");
return generator_c_struct_dependence_sort0result_t();
}
ImmT  generator_c_struct_dependence_sort0result_t() {
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 13
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(generator_c_struct_dependence_sort0result_element0ptr, ___get_global_const(682), ___get_global_const(683)));
#line 13
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 13
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 13
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__5));
#line 13
c_rt_lib0clear(&___nl__im__4);
#line 13
c_rt_lib0clear(&___nl__im__5);
#line 14
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 14
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(458), ___nl__im__3, ___get_global_const(459), ___nl__im__6));
#line 14
c_rt_lib0clear(&___nl__im__3);
#line 14
c_rt_lib0clear(&___nl__im__4);
#line 14
c_rt_lib0clear(&___nl__im__5);
#line 14
c_rt_lib0clear(&___nl__im__6);
#line 14
c_rt_lib0copy(&___nl__im__7, ___nl__im__2);
#line 14
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__7));
#line 14
c_rt_lib0clear(&___nl__im__2);
#line 14
c_rt_lib0clear(&___nl__im__3);
#line 14
c_rt_lib0clear(&___nl__im__4);
#line 14
c_rt_lib0clear(&___nl__im__5);
#line 14
c_rt_lib0clear(&___nl__im__6);
#line 14
c_rt_lib0clear(&___nl__im__7);
#line 14
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 14
c_rt_lib0clear(&___nl__im__1);
#line 14
c_rt_lib0clear(&___nl__im__2);
#line 14
c_rt_lib0clear(&___nl__im__3);
#line 14
c_rt_lib0clear(&___nl__im__4);
#line 14
c_rt_lib0clear(&___nl__im__5);
#line 14
c_rt_lib0clear(&___nl__im__6);
#line 14
c_rt_lib0clear(&___nl__im__7);
#line 14
return ___nl__im__0;
#line 14
c_rt_lib0clear(&___nl__im__0);
#line 14
c_rt_lib0clear(&___nl__im__1);
#line 14
c_rt_lib0clear(&___nl__im__2);
#line 14
c_rt_lib0clear(&___nl__im__3);
#line 14
c_rt_lib0clear(&___nl__im__4);
#line 14
c_rt_lib0clear(&___nl__im__5);
#line 14
c_rt_lib0clear(&___nl__im__6);
#line 14
c_rt_lib0clear(&___nl__im__7);
#line 14
return NULL;
}

ImmT  generator_c_struct_dependence_sort0result_element0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0result_element");
return generator_c_struct_dependence_sort0result_element();
}
ImmT  generator_c_struct_dependence_sort0result_element() {
generator_c_struct_dependence_sort_priv0__const__init();
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
#line 20
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 21
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 21
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 23
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 24
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 25
c_rt_lib0move(&___nl__im__9, ptd0none());
#line 25
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_const(461), ___nl__im__7, ___get_global_const(462), ___nl__im__8, ___get_global_const(463), ___nl__im__9));
#line 25
c_rt_lib0clear(&___nl__im__7);
#line 25
c_rt_lib0clear(&___nl__im__8);
#line 25
c_rt_lib0clear(&___nl__im__9);
#line 25
c_rt_lib0copy(&___nl__im__10, ___nl__im__6);
#line 25
c_rt_lib0move(&___nl__im__5, ptd0var(___nl__im__10));
#line 25
c_rt_lib0clear(&___nl__im__6);
#line 25
c_rt_lib0clear(&___nl__im__7);
#line 25
c_rt_lib0clear(&___nl__im__8);
#line 25
c_rt_lib0clear(&___nl__im__9);
#line 25
c_rt_lib0clear(&___nl__im__10);
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(121), ___nl__im__3, ___get_global_const(464), ___nl__im__4, ___get_global_const(460), ___nl__im__5));
#line 25
c_rt_lib0clear(&___nl__im__3);
#line 25
c_rt_lib0clear(&___nl__im__4);
#line 25
c_rt_lib0clear(&___nl__im__5);
#line 25
c_rt_lib0clear(&___nl__im__6);
#line 25
c_rt_lib0clear(&___nl__im__7);
#line 25
c_rt_lib0clear(&___nl__im__8);
#line 25
c_rt_lib0clear(&___nl__im__9);
#line 25
c_rt_lib0clear(&___nl__im__10);
#line 25
c_rt_lib0copy(&___nl__im__11, ___nl__im__2);
#line 25
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__11));
#line 25
c_rt_lib0clear(&___nl__im__2);
#line 25
c_rt_lib0clear(&___nl__im__3);
#line 25
c_rt_lib0clear(&___nl__im__4);
#line 25
c_rt_lib0clear(&___nl__im__5);
#line 25
c_rt_lib0clear(&___nl__im__6);
#line 25
c_rt_lib0clear(&___nl__im__7);
#line 25
c_rt_lib0clear(&___nl__im__8);
#line 25
c_rt_lib0clear(&___nl__im__9);
#line 25
c_rt_lib0clear(&___nl__im__10);
#line 25
c_rt_lib0clear(&___nl__im__11);
#line 25
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 25
c_rt_lib0clear(&___nl__im__1);
#line 25
c_rt_lib0clear(&___nl__im__2);
#line 25
c_rt_lib0clear(&___nl__im__3);
#line 25
c_rt_lib0clear(&___nl__im__4);
#line 25
c_rt_lib0clear(&___nl__im__5);
#line 25
c_rt_lib0clear(&___nl__im__6);
#line 25
c_rt_lib0clear(&___nl__im__7);
#line 25
c_rt_lib0clear(&___nl__im__8);
#line 25
c_rt_lib0clear(&___nl__im__9);
#line 25
c_rt_lib0clear(&___nl__im__10);
#line 25
c_rt_lib0clear(&___nl__im__11);
#line 25
return ___nl__im__0;
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
c_rt_lib0clear(&___nl__im__1);
#line 25
c_rt_lib0clear(&___nl__im__2);
#line 25
c_rt_lib0clear(&___nl__im__3);
#line 25
c_rt_lib0clear(&___nl__im__4);
#line 25
c_rt_lib0clear(&___nl__im__5);
#line 25
c_rt_lib0clear(&___nl__im__6);
#line 25
c_rt_lib0clear(&___nl__im__7);
#line 25
c_rt_lib0clear(&___nl__im__8);
#line 25
c_rt_lib0clear(&___nl__im__9);
#line 25
c_rt_lib0clear(&___nl__im__10);
#line 25
c_rt_lib0clear(&___nl__im__11);
#line 25
return NULL;
}

ImmT  generator_c_struct_dependence_sort0graph_node0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0graph_node");
return generator_c_struct_dependence_sort0graph_node();
}
ImmT  generator_c_struct_dependence_sort0graph_node() {
generator_c_struct_dependence_sort_priv0__const__init();
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
#line 32
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 32
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 32
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__5));
#line 32
c_rt_lib0clear(&___nl__im__4);
#line 32
c_rt_lib0clear(&___nl__im__5);
#line 33
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 33
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 33
c_rt_lib0move(&___nl__im__6, ptd0arr(___nl__im__8));
#line 33
c_rt_lib0clear(&___nl__im__7);
#line 33
c_rt_lib0clear(&___nl__im__8);
#line 34
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(95), ___get_global_const(96)));
#line 34
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 35
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 35
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 35
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(684), ___nl__im__3, ___get_global_const(685), ___nl__im__6, ___get_global_const(686), ___nl__im__9, ___get_global_const(96), ___nl__im__10));
#line 35
c_rt_lib0clear(&___nl__im__3);
#line 35
c_rt_lib0clear(&___nl__im__4);
#line 35
c_rt_lib0clear(&___nl__im__5);
#line 35
c_rt_lib0clear(&___nl__im__6);
#line 35
c_rt_lib0clear(&___nl__im__7);
#line 35
c_rt_lib0clear(&___nl__im__8);
#line 35
c_rt_lib0clear(&___nl__im__9);
#line 35
c_rt_lib0clear(&___nl__im__10);
#line 35
c_rt_lib0copy(&___nl__im__11, ___nl__im__2);
#line 35
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__11));
#line 35
c_rt_lib0clear(&___nl__im__2);
#line 35
c_rt_lib0clear(&___nl__im__3);
#line 35
c_rt_lib0clear(&___nl__im__4);
#line 35
c_rt_lib0clear(&___nl__im__5);
#line 35
c_rt_lib0clear(&___nl__im__6);
#line 35
c_rt_lib0clear(&___nl__im__7);
#line 35
c_rt_lib0clear(&___nl__im__8);
#line 35
c_rt_lib0clear(&___nl__im__9);
#line 35
c_rt_lib0clear(&___nl__im__10);
#line 35
c_rt_lib0clear(&___nl__im__11);
#line 35
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 35
c_rt_lib0clear(&___nl__im__1);
#line 35
c_rt_lib0clear(&___nl__im__2);
#line 35
c_rt_lib0clear(&___nl__im__3);
#line 35
c_rt_lib0clear(&___nl__im__4);
#line 35
c_rt_lib0clear(&___nl__im__5);
#line 35
c_rt_lib0clear(&___nl__im__6);
#line 35
c_rt_lib0clear(&___nl__im__7);
#line 35
c_rt_lib0clear(&___nl__im__8);
#line 35
c_rt_lib0clear(&___nl__im__9);
#line 35
c_rt_lib0clear(&___nl__im__10);
#line 35
c_rt_lib0clear(&___nl__im__11);
#line 35
return ___nl__im__0;
#line 35
c_rt_lib0clear(&___nl__im__0);
#line 35
c_rt_lib0clear(&___nl__im__1);
#line 35
c_rt_lib0clear(&___nl__im__2);
#line 35
c_rt_lib0clear(&___nl__im__3);
#line 35
c_rt_lib0clear(&___nl__im__4);
#line 35
c_rt_lib0clear(&___nl__im__5);
#line 35
c_rt_lib0clear(&___nl__im__6);
#line 35
c_rt_lib0clear(&___nl__im__7);
#line 35
c_rt_lib0clear(&___nl__im__8);
#line 35
c_rt_lib0clear(&___nl__im__9);
#line 35
c_rt_lib0clear(&___nl__im__10);
#line 35
c_rt_lib0clear(&___nl__im__11);
#line 35
return NULL;
}

ImmT  generator_c_struct_dependence_sort0graph0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0graph");
return generator_c_struct_dependence_sort0graph();
}
ImmT  generator_c_struct_dependence_sort0graph() {
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 40
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(generator_c_struct_dependence_sort0graph_node0ptr, ___get_global_const(682), ___get_global_const(687)));
#line 40
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 40
c_rt_lib0copy(&___nl__im__3, ___nl__im__2);
#line 40
c_rt_lib0move(&___nl__im__1, ptd0hash(___nl__im__3));
#line 40
c_rt_lib0clear(&___nl__im__2);
#line 40
c_rt_lib0clear(&___nl__im__3);
#line 40
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 40
c_rt_lib0clear(&___nl__im__1);
#line 40
c_rt_lib0clear(&___nl__im__2);
#line 40
c_rt_lib0clear(&___nl__im__3);
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
return NULL;
}

ImmT  generator_c_struct_dependence_sort0sorted_element0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0sorted_element");
return generator_c_struct_dependence_sort0sorted_element();
}
ImmT  generator_c_struct_dependence_sort0sorted_element() {
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 45
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 46
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 47
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 47
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(461), ___nl__im__3, ___get_global_const(462), ___nl__im__4, ___get_global_const(463), ___nl__im__5));
#line 47
c_rt_lib0clear(&___nl__im__3);
#line 47
c_rt_lib0clear(&___nl__im__4);
#line 47
c_rt_lib0clear(&___nl__im__5);
#line 47
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 47
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__6));
#line 47
c_rt_lib0clear(&___nl__im__2);
#line 47
c_rt_lib0clear(&___nl__im__3);
#line 47
c_rt_lib0clear(&___nl__im__4);
#line 47
c_rt_lib0clear(&___nl__im__5);
#line 47
c_rt_lib0clear(&___nl__im__6);
#line 47
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 47
c_rt_lib0clear(&___nl__im__1);
#line 47
c_rt_lib0clear(&___nl__im__2);
#line 47
c_rt_lib0clear(&___nl__im__3);
#line 47
c_rt_lib0clear(&___nl__im__4);
#line 47
c_rt_lib0clear(&___nl__im__5);
#line 47
c_rt_lib0clear(&___nl__im__6);
#line 47
return ___nl__im__0;
#line 47
c_rt_lib0clear(&___nl__im__0);
#line 47
c_rt_lib0clear(&___nl__im__1);
#line 47
c_rt_lib0clear(&___nl__im__2);
#line 47
c_rt_lib0clear(&___nl__im__3);
#line 47
c_rt_lib0clear(&___nl__im__4);
#line 47
c_rt_lib0clear(&___nl__im__5);
#line 47
c_rt_lib0clear(&___nl__im__6);
#line 47
return NULL;
}

ImmT  generator_c_struct_dependence_sort0decl_def_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0decl_def_type");
return generator_c_struct_dependence_sort0decl_def_type();
}
ImmT  generator_c_struct_dependence_sort0decl_def_type() {
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 53
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 54
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 55
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 56
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 56
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(688), ___nl__im__3, ___get_global_const(689), ___nl__im__4, ___get_global_const(463), ___nl__im__5, ___get_global_const(74), ___nl__im__6));
#line 56
c_rt_lib0clear(&___nl__im__3);
#line 56
c_rt_lib0clear(&___nl__im__4);
#line 56
c_rt_lib0clear(&___nl__im__5);
#line 56
c_rt_lib0clear(&___nl__im__6);
#line 56
c_rt_lib0copy(&___nl__im__7, ___nl__im__2);
#line 56
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__7));
#line 56
c_rt_lib0clear(&___nl__im__2);
#line 56
c_rt_lib0clear(&___nl__im__3);
#line 56
c_rt_lib0clear(&___nl__im__4);
#line 56
c_rt_lib0clear(&___nl__im__5);
#line 56
c_rt_lib0clear(&___nl__im__6);
#line 56
c_rt_lib0clear(&___nl__im__7);
#line 56
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 56
c_rt_lib0clear(&___nl__im__1);
#line 56
c_rt_lib0clear(&___nl__im__2);
#line 56
c_rt_lib0clear(&___nl__im__3);
#line 56
c_rt_lib0clear(&___nl__im__4);
#line 56
c_rt_lib0clear(&___nl__im__5);
#line 56
c_rt_lib0clear(&___nl__im__6);
#line 56
c_rt_lib0clear(&___nl__im__7);
#line 56
return ___nl__im__0;
#line 56
c_rt_lib0clear(&___nl__im__0);
#line 56
c_rt_lib0clear(&___nl__im__1);
#line 56
c_rt_lib0clear(&___nl__im__2);
#line 56
c_rt_lib0clear(&___nl__im__3);
#line 56
c_rt_lib0clear(&___nl__im__4);
#line 56
c_rt_lib0clear(&___nl__im__5);
#line 56
c_rt_lib0clear(&___nl__im__6);
#line 56
c_rt_lib0clear(&___nl__im__7);
#line 56
return NULL;
}

ImmT  generator_c_struct_dependence_sort_priv0get_module_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
#line 61
c_rt_lib0move(&___nl__im__4,___get_global_const(35));
#line 61
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 61
c_rt_lib0copy(&___nl__im__6, ___nl__im__0);
#line 61
c_rt_lib0move(&___nl__im__3, string0split(___nl__im__5, ___nl__im__6));
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 61
c_rt_lib0clear(&___nl__im__5);
#line 61
c_rt_lib0clear(&___nl__im__6);
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 61
c_rt_lib0clear(&___nl__im__5);
#line 61
c_rt_lib0clear(&___nl__im__6);
#line 61
___nl__int__7 = 0;
#line 61
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_get(___nl__im__3, ___nl__int__7));
#line 61
c_rt_lib0clear(&___nl__im__3);
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 61
c_rt_lib0clear(&___nl__im__5);
#line 61
c_rt_lib0clear(&___nl__im__6);
#line 61
//clear ___nl__int__7;
#line 61
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 61
c_rt_lib0clear(&___nl__im__0);
#line 61
c_rt_lib0clear(&___nl__im__2);
#line 61
c_rt_lib0clear(&___nl__im__3);
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 61
c_rt_lib0clear(&___nl__im__5);
#line 61
c_rt_lib0clear(&___nl__im__6);
#line 61
//clear ___nl__int__7;
#line 61
return ___nl__im__1;
#line 61
c_rt_lib0clear(&___nl__im__0);
#line 61
c_rt_lib0clear(&___nl__im__1);
#line 61
c_rt_lib0clear(&___nl__im__2);
#line 61
c_rt_lib0clear(&___nl__im__3);
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 61
c_rt_lib0clear(&___nl__im__5);
#line 61
c_rt_lib0clear(&___nl__im__6);
#line 61
//clear ___nl__int__7;
#line 61
return NULL;
}

ImmT  generator_c_struct_dependence_sort_priv0get_fun_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
#line 65
c_rt_lib0move(&___nl__im__4,___get_global_const(35));
#line 65
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 65
c_rt_lib0copy(&___nl__im__6, ___nl__im__0);
#line 65
c_rt_lib0move(&___nl__im__3, string0split(___nl__im__5, ___nl__im__6));
#line 65
c_rt_lib0clear(&___nl__im__4);
#line 65
c_rt_lib0clear(&___nl__im__5);
#line 65
c_rt_lib0clear(&___nl__im__6);
#line 65
c_rt_lib0clear(&___nl__im__4);
#line 65
c_rt_lib0clear(&___nl__im__5);
#line 65
c_rt_lib0clear(&___nl__im__6);
#line 65
___nl__int__7 = 1;
#line 65
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_get(___nl__im__3, ___nl__int__7));
#line 65
c_rt_lib0clear(&___nl__im__3);
#line 65
c_rt_lib0clear(&___nl__im__4);
#line 65
c_rt_lib0clear(&___nl__im__5);
#line 65
c_rt_lib0clear(&___nl__im__6);
#line 65
//clear ___nl__int__7;
#line 65
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 65
c_rt_lib0clear(&___nl__im__0);
#line 65
c_rt_lib0clear(&___nl__im__2);
#line 65
c_rt_lib0clear(&___nl__im__3);
#line 65
c_rt_lib0clear(&___nl__im__4);
#line 65
c_rt_lib0clear(&___nl__im__5);
#line 65
c_rt_lib0clear(&___nl__im__6);
#line 65
//clear ___nl__int__7;
#line 65
return ___nl__im__1;
#line 65
c_rt_lib0clear(&___nl__im__0);
#line 65
c_rt_lib0clear(&___nl__im__1);
#line 65
c_rt_lib0clear(&___nl__im__2);
#line 65
c_rt_lib0clear(&___nl__im__3);
#line 65
c_rt_lib0clear(&___nl__im__4);
#line 65
c_rt_lib0clear(&___nl__im__5);
#line 65
c_rt_lib0clear(&___nl__im__6);
#line 65
//clear ___nl__int__7;
#line 65
return NULL;
}

ImmT  generator_c_struct_dependence_sort_priv0get_name(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 69
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 69
___nl__bool__1 = !___nl__bool__1;
#line 69
if(___nl__bool__1){ goto label_2;}
#line 70
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 70
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 70
c_rt_lib0move(&___nl__im__3, generator_c_struct_dependence_sort_priv0get_fun_name(___nl__im__5));
#line 70
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 70
c_rt_lib0copy(&___nl__im__2, ___nl__im__3);
#line 70
c_rt_lib0clear(&___nl__im__0);
#line 70
//clear ___nl__bool__1;
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 70
return ___nl__im__2;
#line 71
goto label_1;
#line 71
label_2:
#line 71
label_1:
#line 72
c_rt_lib0copy(&___nl__im__8, ___nl__im__0);
#line 72
c_rt_lib0move(&___nl__im__7, anon_naming0get_anon_name(___nl__im__8));
#line 72
c_rt_lib0clear(&___nl__im__8);
#line 72
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 72
c_rt_lib0clear(&___nl__im__0);
#line 72
//clear ___nl__bool__1;
#line 72
c_rt_lib0clear(&___nl__im__2);
#line 72
c_rt_lib0clear(&___nl__im__3);
#line 72
c_rt_lib0clear(&___nl__im__4);
#line 72
c_rt_lib0clear(&___nl__im__5);
#line 72
c_rt_lib0clear(&___nl__im__7);
#line 72
c_rt_lib0clear(&___nl__im__8);
#line 72
return ___nl__im__6;
#line 72
c_rt_lib0clear(&___nl__im__0);
#line 72
//clear ___nl__bool__1;
#line 72
c_rt_lib0clear(&___nl__im__2);
#line 72
c_rt_lib0clear(&___nl__im__3);
#line 72
c_rt_lib0clear(&___nl__im__4);
#line 72
c_rt_lib0clear(&___nl__im__5);
#line 72
c_rt_lib0clear(&___nl__im__6);
#line 72
c_rt_lib0clear(&___nl__im__7);
#line 72
c_rt_lib0clear(&___nl__im__8);
#line 72
return NULL;
}

ImmT  generator_c_struct_dependence_sort_priv0get_required_types_list(tct0meta_type0type ___nl__im__0,generator_c_struct_dependence_sort0graph_node0type* ___ref___im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__2);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__string__13 = NULL;
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
ImmT  ___nl__string__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__string__35 = NULL;
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__string__47 = NULL;
ImmT  ___nl__string__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__string__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__string__62 = NULL;
ImmT  ___nl__im__63 = NULL;
bool  ___nl__bool__64 = false;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
bool  ___nl__bool__67 = false;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
#line 77
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(0));
#line 77
if(___nl__bool__3){ goto label_2;}
#line 78
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(1));
#line 78
if(___nl__bool__3){ goto label_3;}
#line 79
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 79
if(___nl__bool__3){ goto label_4;}
#line 82
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(3));
#line 82
if(___nl__bool__3){ goto label_5;}
#line 83
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 83
if(___nl__bool__3){ goto label_6;}
#line 86
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(5));
#line 86
if(___nl__bool__3){ goto label_7;}
#line 87
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 87
if(___nl__bool__3){ goto label_8;}
#line 92
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 92
if(___nl__bool__3){ goto label_9;}
#line 96
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(8));
#line 96
if(___nl__bool__3){ goto label_10;}
#line 97
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(9));
#line 97
if(___nl__bool__3){ goto label_11;}
#line 98
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(10));
#line 98
if(___nl__bool__3){ goto label_12;}
#line 99
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(11));
#line 99
if(___nl__bool__3){ goto label_13;}
#line 100
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(12));
#line 100
if(___nl__bool__3){ goto label_14;}
#line 101
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 101
if(___nl__bool__3){ goto label_15;}
#line 102
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 102
if(___nl__bool__3){ goto label_16;}
#line 110
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(15));
#line 110
if(___nl__bool__3){ goto label_17;}
#line 110
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 110
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__0));
#line 110
nl_die_arg(___nl__im__4);
#line 77
label_2:
#line 78
goto label_1;
#line 78
label_3:
#line 78
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(1)));
#line 78
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 79
goto label_1;
#line 79
label_4:
#line 79
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 79
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 80
c_rt_lib0move(&___nl__im__9,___get_global_const(685));
#line 80
c_rt_lib0move(&___nl__im__9, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__9));
#line 80
c_rt_lib0copy(&___nl__im__11, ___nl__im__0);
#line 80
c_rt_lib0move(&___nl__im__10, generator_c_struct_dependence_sort_priv0get_name(___nl__im__11));
#line 80
c_rt_lib0clear(&___nl__im__11);
#line 80
c_rt_lib0copy(&___nl__im__12, ___nl__im__10);
#line 80
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__12));
#line 80
c_rt_lib0move(&___nl__string__13,___get_global_const(685));
#line 80
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__13, ___nl__im__9));
#line 80
c_rt_lib0clear(&___nl__im__9);
#line 80
c_rt_lib0clear(&___nl__im__10);
#line 80
c_rt_lib0clear(&___nl__im__11);
#line 80
c_rt_lib0clear(&___nl__im__12);
#line 80
c_rt_lib0clear(&___nl__string__13);
#line 81
c_rt_lib0copy(&___nl__im__14, ___nl__im__7);
#line 81
c_rt_lib0copy(&___nl__im__15, ___nl__im__2);
#line 81
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__14, ___ref___im__1, ___nl__im__15));
#line 81
c_rt_lib0clear(&___nl__im__14);
#line 81
c_rt_lib0clear(&___nl__im__15);
#line 82
goto label_1;
#line 82
label_5:
#line 82
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(3)));
#line 82
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 83
goto label_1;
#line 83
label_6:
#line 83
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 83
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 84
c_rt_lib0move(&___nl__im__20,___get_global_const(685));
#line 84
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__20));
#line 84
c_rt_lib0copy(&___nl__im__22, ___nl__im__0);
#line 84
c_rt_lib0move(&___nl__im__21, generator_c_struct_dependence_sort_priv0get_name(___nl__im__22));
#line 84
c_rt_lib0clear(&___nl__im__22);
#line 84
c_rt_lib0copy(&___nl__im__23, ___nl__im__21);
#line 84
c_rt_lib0delete(array0push(&___nl__im__20, ___nl__im__23));
#line 84
c_rt_lib0move(&___nl__string__24,___get_global_const(685));
#line 84
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__24, ___nl__im__20));
#line 84
c_rt_lib0clear(&___nl__im__20);
#line 84
c_rt_lib0clear(&___nl__im__21);
#line 84
c_rt_lib0clear(&___nl__im__22);
#line 84
c_rt_lib0clear(&___nl__im__23);
#line 84
c_rt_lib0clear(&___nl__string__24);
#line 85
c_rt_lib0copy(&___nl__im__25, ___nl__im__18);
#line 85
c_rt_lib0copy(&___nl__im__26, ___nl__im__2);
#line 85
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__25, ___ref___im__1, ___nl__im__26));
#line 85
c_rt_lib0clear(&___nl__im__25);
#line 85
c_rt_lib0clear(&___nl__im__26);
#line 86
goto label_1;
#line 86
label_7:
#line 86
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(5)));
#line 86
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 87
goto label_1;
#line 87
label_8:
#line 87
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 87
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 88
c_rt_lib0move(&___nl__im__31,___get_global_const(685));
#line 88
c_rt_lib0move(&___nl__im__31, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__31));
#line 88
c_rt_lib0copy(&___nl__im__33, ___nl__im__0);
#line 88
c_rt_lib0move(&___nl__im__32, generator_c_struct_dependence_sort_priv0get_name(___nl__im__33));
#line 88
c_rt_lib0clear(&___nl__im__33);
#line 88
c_rt_lib0copy(&___nl__im__34, ___nl__im__32);
#line 88
c_rt_lib0delete(array0push(&___nl__im__31, ___nl__im__34));
#line 88
c_rt_lib0move(&___nl__string__35,___get_global_const(685));
#line 88
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__35, ___nl__im__31));
#line 88
c_rt_lib0clear(&___nl__im__31);
#line 88
c_rt_lib0clear(&___nl__im__32);
#line 88
c_rt_lib0clear(&___nl__im__33);
#line 88
c_rt_lib0clear(&___nl__im__34);
#line 88
c_rt_lib0clear(&___nl__string__35);
#line 89
c_rt_lib0move(&___nl__im__39, c_rt_lib0init_iter(___nl__im__29));
#line 89
label_20:
#line 89
___nl__bool__37 = c_rt_lib0is_end_hash(___nl__im__39);
#line 89
if(___nl__bool__37){ goto label_18;}
#line 89
c_rt_lib0move(&___nl__im__36, c_rt_lib0get_key_iter(___nl__im__39));
#line 89
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value(___nl__im__29, ___nl__im__36));
#line 90
c_rt_lib0copy(&___nl__im__40, ___nl__im__38);
#line 90
c_rt_lib0copy(&___nl__im__41, ___nl__im__2);
#line 90
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__40, ___ref___im__1, ___nl__im__41));
#line 90
c_rt_lib0clear(&___nl__im__40);
#line 90
c_rt_lib0clear(&___nl__im__41);
#line 90
label_19:
#line 91
c_rt_lib0move(&___nl__im__39, c_rt_lib0next_iter(___nl__im__39));
#line 91
goto label_20;
#line 91
label_18:
#line 92
goto label_1;
#line 92
label_9:
#line 92
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 92
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 93
c_rt_lib0copy(&___nl__im__46, ___nl__im__42);
#line 93
c_rt_lib0move(&___nl__im__45, generator_c_struct_dependence_sort_priv0get_module_name(___nl__im__46));
#line 93
c_rt_lib0clear(&___nl__im__46);
#line 93
c_rt_lib0copy(&___nl__string__47, ___nl__im__45);
#line 93
c_rt_lib0copy(&___nl__string__48, ___nl__im__2);
#line 93
___nl__bool__44 = c_rt_lib0eq(___nl__string__47, ___nl__string__48);
#line 93
c_rt_lib0clear(&___nl__im__45);
#line 93
c_rt_lib0clear(&___nl__im__46);
#line 93
c_rt_lib0clear(&___nl__string__47);
#line 93
c_rt_lib0clear(&___nl__string__48);
#line 93
___nl__bool__44 = !___nl__bool__44;
#line 93
if(___nl__bool__44){ goto label_22;}
#line 94
c_rt_lib0move(&___nl__im__49,___get_global_const(685));
#line 94
c_rt_lib0move(&___nl__im__49, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__49));
#line 94
c_rt_lib0copy(&___nl__im__51, ___nl__im__42);
#line 94
c_rt_lib0move(&___nl__im__50, generator_c_struct_dependence_sort_priv0get_fun_name(___nl__im__51));
#line 94
c_rt_lib0clear(&___nl__im__51);
#line 94
c_rt_lib0copy(&___nl__im__52, ___nl__im__50);
#line 94
c_rt_lib0delete(array0push(&___nl__im__49, ___nl__im__52));
#line 94
c_rt_lib0move(&___nl__string__53,___get_global_const(685));
#line 94
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__53, ___nl__im__49));
#line 94
c_rt_lib0clear(&___nl__im__49);
#line 94
c_rt_lib0clear(&___nl__im__50);
#line 94
c_rt_lib0clear(&___nl__im__51);
#line 94
c_rt_lib0clear(&___nl__im__52);
#line 94
c_rt_lib0clear(&___nl__string__53);
#line 95
goto label_21;
#line 95
label_22:
#line 95
label_21:
#line 96
goto label_1;
#line 96
label_10:
#line 97
goto label_1;
#line 97
label_11:
#line 98
goto label_1;
#line 98
label_12:
#line 99
goto label_1;
#line 99
label_13:
#line 100
goto label_1;
#line 100
label_14:
#line 101
goto label_1;
#line 101
label_15:
#line 101
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 101
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 102
goto label_1;
#line 102
label_16:
#line 102
c_rt_lib0move(&___nl__im__57, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 102
c_rt_lib0copy(&___nl__im__56, ___nl__im__57);
#line 103
c_rt_lib0move(&___nl__im__58,___get_global_const(685));
#line 103
c_rt_lib0move(&___nl__im__58, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__58));
#line 103
c_rt_lib0copy(&___nl__im__60, ___nl__im__0);
#line 103
c_rt_lib0move(&___nl__im__59, generator_c_struct_dependence_sort_priv0get_name(___nl__im__60));
#line 103
c_rt_lib0clear(&___nl__im__60);
#line 103
c_rt_lib0copy(&___nl__im__61, ___nl__im__59);
#line 103
c_rt_lib0delete(array0push(&___nl__im__58, ___nl__im__61));
#line 103
c_rt_lib0move(&___nl__string__62,___get_global_const(685));
#line 103
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__62, ___nl__im__58));
#line 103
c_rt_lib0clear(&___nl__im__58);
#line 103
c_rt_lib0clear(&___nl__im__59);
#line 103
c_rt_lib0clear(&___nl__im__60);
#line 103
c_rt_lib0clear(&___nl__im__61);
#line 103
c_rt_lib0clear(&___nl__string__62);
#line 104
c_rt_lib0move(&___nl__im__66, c_rt_lib0init_iter(___nl__im__56));
#line 104
label_25:
#line 104
___nl__bool__64 = c_rt_lib0is_end_hash(___nl__im__66);
#line 104
if(___nl__bool__64){ goto label_23;}
#line 104
c_rt_lib0move(&___nl__im__63, c_rt_lib0get_key_iter(___nl__im__66));
#line 104
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value(___nl__im__56, ___nl__im__63));
#line 105
___nl__bool__67 = c_rt_lib0priv_is(___nl__im__65, ___get_global_const(28));
#line 105
if(___nl__bool__67){ goto label_27;}
#line 107
___nl__bool__67 = c_rt_lib0priv_is(___nl__im__65, ___get_global_const(29));
#line 107
if(___nl__bool__67){ goto label_28;}
#line 107
c_rt_lib0move(&___nl__im__68,___get_global_const(16));
#line 107
c_rt_lib0move(&___nl__im__68, c_rt_lib0array_mk(2, ___nl__im__68, ___nl__im__65));
#line 107
nl_die_arg(___nl__im__68);
#line 105
label_27:
#line 105
c_rt_lib0move(&___nl__im__70, c_rt_lib0priv_as(___nl__im__65, ___get_global_const(28)));
#line 105
c_rt_lib0copy(&___nl__im__69, ___nl__im__70);
#line 106
c_rt_lib0copy(&___nl__im__71, ___nl__im__69);
#line 106
c_rt_lib0copy(&___nl__im__72, ___nl__im__2);
#line 106
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__71, ___ref___im__1, ___nl__im__72));
#line 106
c_rt_lib0clear(&___nl__im__71);
#line 106
c_rt_lib0clear(&___nl__im__72);
#line 107
goto label_26;
#line 107
label_28:
#line 108
goto label_26;
#line 108
label_26:
#line 108
label_24:
#line 109
c_rt_lib0move(&___nl__im__66, c_rt_lib0next_iter(___nl__im__66));
#line 109
goto label_25;
#line 109
label_23:
#line 110
goto label_1;
#line 110
label_17:
#line 111
goto label_1;
#line 111
label_1:
#line 111
c_rt_lib0clear(&___nl__im__0);
#line 111
c_rt_lib0clear(&___nl__im__2);
#line 111
//clear ___nl__bool__3;
#line 111
c_rt_lib0clear(&___nl__im__4);
#line 111
c_rt_lib0clear(&___nl__im__5);
#line 111
c_rt_lib0clear(&___nl__im__6);
#line 111
c_rt_lib0clear(&___nl__im__7);
#line 111
c_rt_lib0clear(&___nl__im__8);
#line 111
c_rt_lib0clear(&___nl__im__9);
#line 111
c_rt_lib0clear(&___nl__im__10);
#line 111
c_rt_lib0clear(&___nl__im__11);
#line 111
c_rt_lib0clear(&___nl__im__12);
#line 111
c_rt_lib0clear(&___nl__string__13);
#line 111
c_rt_lib0clear(&___nl__im__14);
#line 111
c_rt_lib0clear(&___nl__im__15);
#line 111
c_rt_lib0clear(&___nl__im__16);
#line 111
c_rt_lib0clear(&___nl__im__17);
#line 111
c_rt_lib0clear(&___nl__im__18);
#line 111
c_rt_lib0clear(&___nl__im__19);
#line 111
c_rt_lib0clear(&___nl__im__20);
#line 111
c_rt_lib0clear(&___nl__im__21);
#line 111
c_rt_lib0clear(&___nl__im__22);
#line 111
c_rt_lib0clear(&___nl__im__23);
#line 111
c_rt_lib0clear(&___nl__string__24);
#line 111
c_rt_lib0clear(&___nl__im__25);
#line 111
c_rt_lib0clear(&___nl__im__26);
#line 111
c_rt_lib0clear(&___nl__im__27);
#line 111
c_rt_lib0clear(&___nl__im__28);
#line 111
c_rt_lib0clear(&___nl__im__29);
#line 111
c_rt_lib0clear(&___nl__im__30);
#line 111
c_rt_lib0clear(&___nl__im__31);
#line 111
c_rt_lib0clear(&___nl__im__32);
#line 111
c_rt_lib0clear(&___nl__im__33);
#line 111
c_rt_lib0clear(&___nl__im__34);
#line 111
c_rt_lib0clear(&___nl__string__35);
#line 111
c_rt_lib0clear(&___nl__im__36);
#line 111
//clear ___nl__bool__37;
#line 111
c_rt_lib0clear(&___nl__im__38);
#line 111
c_rt_lib0clear(&___nl__im__39);
#line 111
c_rt_lib0clear(&___nl__im__40);
#line 111
c_rt_lib0clear(&___nl__im__41);
#line 111
c_rt_lib0clear(&___nl__im__42);
#line 111
c_rt_lib0clear(&___nl__im__43);
#line 111
//clear ___nl__bool__44;
#line 111
c_rt_lib0clear(&___nl__im__45);
#line 111
c_rt_lib0clear(&___nl__im__46);
#line 111
c_rt_lib0clear(&___nl__string__47);
#line 111
c_rt_lib0clear(&___nl__string__48);
#line 111
c_rt_lib0clear(&___nl__im__49);
#line 111
c_rt_lib0clear(&___nl__im__50);
#line 111
c_rt_lib0clear(&___nl__im__51);
#line 111
c_rt_lib0clear(&___nl__im__52);
#line 111
c_rt_lib0clear(&___nl__string__53);
#line 111
c_rt_lib0clear(&___nl__im__54);
#line 111
c_rt_lib0clear(&___nl__im__55);
#line 111
c_rt_lib0clear(&___nl__im__56);
#line 111
c_rt_lib0clear(&___nl__im__57);
#line 111
c_rt_lib0clear(&___nl__im__58);
#line 111
c_rt_lib0clear(&___nl__im__59);
#line 111
c_rt_lib0clear(&___nl__im__60);
#line 111
c_rt_lib0clear(&___nl__im__61);
#line 111
c_rt_lib0clear(&___nl__string__62);
#line 111
c_rt_lib0clear(&___nl__im__63);
#line 111
//clear ___nl__bool__64;
#line 111
c_rt_lib0clear(&___nl__im__65);
#line 111
c_rt_lib0clear(&___nl__im__66);
#line 111
//clear ___nl__bool__67;
#line 111
c_rt_lib0clear(&___nl__im__68);
#line 111
c_rt_lib0clear(&___nl__im__69);
#line 111
c_rt_lib0clear(&___nl__im__70);
#line 111
c_rt_lib0clear(&___nl__im__71);
#line 111
c_rt_lib0clear(&___nl__im__72);
#line 111
return NULL;
}

bool generator_c_struct_dependence_sort0is_divisible0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "generator_c_struct_dependence_sort0is_divisible");
tct0meta_type0type var0 = (_tab[0]);
return generator_c_struct_dependence_sort0is_divisible(var0);
}
bool generator_c_struct_dependence_sort0is_divisible(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__1 = false;
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
bool  ___nl__bool__15 = false;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
bool  ___nl__bool__24 = false;
bool  ___nl__bool__25 = false;
bool  ___nl__bool__26 = false;
#line 115
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(0));
#line 115
if(___nl__bool__1){ goto label_2;}
#line 116
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(1));
#line 116
if(___nl__bool__1){ goto label_3;}
#line 117
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 117
if(___nl__bool__1){ goto label_4;}
#line 118
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(3));
#line 118
if(___nl__bool__1){ goto label_5;}
#line 119
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 119
if(___nl__bool__1){ goto label_6;}
#line 120
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(5));
#line 120
if(___nl__bool__1){ goto label_7;}
#line 121
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 121
if(___nl__bool__1){ goto label_8;}
#line 123
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 123
if(___nl__bool__1){ goto label_9;}
#line 124
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(8));
#line 124
if(___nl__bool__1){ goto label_10;}
#line 125
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(9));
#line 125
if(___nl__bool__1){ goto label_11;}
#line 126
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(10));
#line 126
if(___nl__bool__1){ goto label_12;}
#line 127
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(11));
#line 127
if(___nl__bool__1){ goto label_13;}
#line 128
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(12));
#line 128
if(___nl__bool__1){ goto label_14;}
#line 129
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 129
if(___nl__bool__1){ goto label_15;}
#line 130
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 130
if(___nl__bool__1){ goto label_16;}
#line 132
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(15));
#line 132
if(___nl__bool__1){ goto label_17;}
#line 132
c_rt_lib0move(&___nl__im__2,___get_global_const(16));
#line 132
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 132
nl_die_arg(___nl__im__2);
#line 115
label_2:
#line 116
goto label_1;
#line 116
label_3:
#line 116
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(1)));
#line 116
c_rt_lib0copy(&___nl__im__3, ___nl__im__4);
#line 117
goto label_1;
#line 117
label_4:
#line 117
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 117
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 118
goto label_1;
#line 118
label_5:
#line 118
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(3)));
#line 118
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 119
goto label_1;
#line 119
label_6:
#line 119
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 119
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 120
goto label_1;
#line 120
label_7:
#line 120
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(5)));
#line 120
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 121
goto label_1;
#line 121
label_8:
#line 121
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 121
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 122
___nl__bool__16 = true;
#line 122
___nl__bool__15 = ___nl__bool__16;
#line 122
c_rt_lib0clear(&___nl__im__0);
#line 122
//clear ___nl__bool__1;
#line 122
c_rt_lib0clear(&___nl__im__2);
#line 122
c_rt_lib0clear(&___nl__im__3);
#line 122
c_rt_lib0clear(&___nl__im__4);
#line 122
c_rt_lib0clear(&___nl__im__5);
#line 122
c_rt_lib0clear(&___nl__im__6);
#line 122
c_rt_lib0clear(&___nl__im__7);
#line 122
c_rt_lib0clear(&___nl__im__8);
#line 122
c_rt_lib0clear(&___nl__im__9);
#line 122
c_rt_lib0clear(&___nl__im__10);
#line 122
c_rt_lib0clear(&___nl__im__11);
#line 122
c_rt_lib0clear(&___nl__im__12);
#line 122
c_rt_lib0clear(&___nl__im__13);
#line 122
c_rt_lib0clear(&___nl__im__14);
#line 122
//clear ___nl__bool__16;
#line 122
return ___nl__bool__15;
#line 123
goto label_1;
#line 123
label_9:
#line 123
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 123
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 124
goto label_1;
#line 124
label_10:
#line 125
goto label_1;
#line 125
label_11:
#line 126
goto label_1;
#line 126
label_12:
#line 127
goto label_1;
#line 127
label_13:
#line 128
goto label_1;
#line 128
label_14:
#line 129
goto label_1;
#line 129
label_15:
#line 129
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 129
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 130
goto label_1;
#line 130
label_16:
#line 130
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 130
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 131
___nl__bool__24 = true;
#line 131
___nl__bool__23 = ___nl__bool__24;
#line 131
c_rt_lib0clear(&___nl__im__0);
#line 131
//clear ___nl__bool__1;
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
c_rt_lib0clear(&___nl__im__11);
#line 131
c_rt_lib0clear(&___nl__im__12);
#line 131
c_rt_lib0clear(&___nl__im__13);
#line 131
c_rt_lib0clear(&___nl__im__14);
#line 131
//clear ___nl__bool__15;
#line 131
//clear ___nl__bool__16;
#line 131
c_rt_lib0clear(&___nl__im__17);
#line 131
c_rt_lib0clear(&___nl__im__18);
#line 131
c_rt_lib0clear(&___nl__im__19);
#line 131
c_rt_lib0clear(&___nl__im__20);
#line 131
c_rt_lib0clear(&___nl__im__21);
#line 131
c_rt_lib0clear(&___nl__im__22);
#line 131
//clear ___nl__bool__24;
#line 131
return ___nl__bool__23;
#line 132
goto label_1;
#line 132
label_17:
#line 133
goto label_1;
#line 133
label_1:
#line 134
___nl__bool__26 = false;
#line 134
___nl__bool__25 = ___nl__bool__26;
#line 134
c_rt_lib0clear(&___nl__im__0);
#line 134
//clear ___nl__bool__1;
#line 134
c_rt_lib0clear(&___nl__im__2);
#line 134
c_rt_lib0clear(&___nl__im__3);
#line 134
c_rt_lib0clear(&___nl__im__4);
#line 134
c_rt_lib0clear(&___nl__im__5);
#line 134
c_rt_lib0clear(&___nl__im__6);
#line 134
c_rt_lib0clear(&___nl__im__7);
#line 134
c_rt_lib0clear(&___nl__im__8);
#line 134
c_rt_lib0clear(&___nl__im__9);
#line 134
c_rt_lib0clear(&___nl__im__10);
#line 134
c_rt_lib0clear(&___nl__im__11);
#line 134
c_rt_lib0clear(&___nl__im__12);
#line 134
c_rt_lib0clear(&___nl__im__13);
#line 134
c_rt_lib0clear(&___nl__im__14);
#line 134
//clear ___nl__bool__15;
#line 134
//clear ___nl__bool__16;
#line 134
c_rt_lib0clear(&___nl__im__17);
#line 134
c_rt_lib0clear(&___nl__im__18);
#line 134
c_rt_lib0clear(&___nl__im__19);
#line 134
c_rt_lib0clear(&___nl__im__20);
#line 134
c_rt_lib0clear(&___nl__im__21);
#line 134
c_rt_lib0clear(&___nl__im__22);
#line 134
//clear ___nl__bool__23;
#line 134
//clear ___nl__bool__24;
#line 134
//clear ___nl__bool__26;
#line 134
return ___nl__bool__25;
#line 134
c_rt_lib0clear(&___nl__im__0);
#line 134
//clear ___nl__bool__1;
#line 134
c_rt_lib0clear(&___nl__im__2);
#line 134
c_rt_lib0clear(&___nl__im__3);
#line 134
c_rt_lib0clear(&___nl__im__4);
#line 134
c_rt_lib0clear(&___nl__im__5);
#line 134
c_rt_lib0clear(&___nl__im__6);
#line 134
c_rt_lib0clear(&___nl__im__7);
#line 134
c_rt_lib0clear(&___nl__im__8);
#line 134
c_rt_lib0clear(&___nl__im__9);
#line 134
c_rt_lib0clear(&___nl__im__10);
#line 134
c_rt_lib0clear(&___nl__im__11);
#line 134
c_rt_lib0clear(&___nl__im__12);
#line 134
c_rt_lib0clear(&___nl__im__13);
#line 134
c_rt_lib0clear(&___nl__im__14);
#line 134
//clear ___nl__bool__15;
#line 134
//clear ___nl__bool__16;
#line 134
c_rt_lib0clear(&___nl__im__17);
#line 134
c_rt_lib0clear(&___nl__im__18);
#line 134
c_rt_lib0clear(&___nl__im__19);
#line 134
c_rt_lib0clear(&___nl__im__20);
#line 134
c_rt_lib0clear(&___nl__im__21);
#line 134
c_rt_lib0clear(&___nl__im__22);
#line 134
//clear ___nl__bool__23;
#line 134
//clear ___nl__bool__24;
#line 134
//clear ___nl__bool__25;
#line 134
//clear ___nl__bool__26;
#line 134
return NULL;
}

generator_c_struct_dependence_sort0graph0type generator_c_struct_dependence_sort_priv0in_funs_to_graph(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
ImmT  ___nl__string__24 = NULL;
bool  ___nl__bool__25 = false;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
ImmT  ___nl__string__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__string__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__string__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
#line 138
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 139
c_rt_lib0move(&___nl__im__6, c_rt_lib0init_iter(___nl__im__0));
#line 139
label_3:
#line 139
___nl__bool__4 = c_rt_lib0is_end_hash(___nl__im__6);
#line 139
if(___nl__bool__4){ goto label_1;}
#line 139
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_key_iter(___nl__im__6));
#line 139
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__3));
#line 140
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 140
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 141
c_rt_lib0copy(&___nl__im__11, ___nl__im__5);
#line 141
___nl__bool__10 = generator_c_struct_dependence_sort0is_divisible(___nl__im__11);
#line 141
c_rt_lib0clear(&___nl__im__11);
#line 141
c_rt_lib0move(&___nl__im__12, c_rt_lib0bool_to_nl_native(___nl__bool__10));
#line 141
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(4, ___get_global_const(684), ___nl__im__8, ___get_global_const(685), ___nl__im__9, ___get_global_const(686), ___nl__im__12, ___get_global_const(96), ___nl__im__5));
#line 141
c_rt_lib0clear(&___nl__im__8);
#line 141
c_rt_lib0clear(&___nl__im__9);
#line 141
//clear ___nl__bool__10;
#line 141
c_rt_lib0clear(&___nl__im__11);
#line 141
c_rt_lib0clear(&___nl__im__12);
#line 142
c_rt_lib0copy(&___nl__im__13, ___nl__im__5);
#line 142
c_rt_lib0copy(&___nl__im__14, ___nl__im__1);
#line 142
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__13, &___nl__im__7, ___nl__im__14));
#line 142
c_rt_lib0clear(&___nl__im__13);
#line 142
c_rt_lib0clear(&___nl__im__14);
#line 143
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(684)));
#line 143
c_rt_lib0copy(&___nl__im__18, ___nl__im__17);
#line 143
___nl__int__16 = c_rt_lib0array_len(___nl__im__18);
#line 143
c_rt_lib0clear(&___nl__im__17);
#line 143
c_rt_lib0clear(&___nl__im__18);
#line 143
___nl__int__19 = 0;
#line 143
___nl__int__20 = ___nl__int__16 > ___nl__int__19;
#line 143
___nl__bool__15 = ___nl__int__20;
#line 143
//clear ___nl__int__16;
#line 143
c_rt_lib0clear(&___nl__im__17);
#line 143
c_rt_lib0clear(&___nl__im__18);
#line 143
//clear ___nl__int__19;
#line 143
//clear ___nl__int__20;
#line 143
___nl__bool__15 = !___nl__bool__15;
#line 143
if(___nl__bool__15){ goto label_5;}
#line 144
c_rt_lib0move(&___nl__im__21,___get_global_const(684));
#line 144
c_rt_lib0move(&___nl__im__21, c_rt_lib0get_ref_hash(___nl__im__7, ___nl__im__21));
#line 144
___nl__int__22 = 0;
#line 144
___nl__int__23 = ___nl__int__22;
#line 144
c_rt_lib0delete(array0remove(&___nl__im__21, ___nl__int__23));
#line 144
c_rt_lib0move(&___nl__string__24,___get_global_const(684));
#line 144
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__7, ___nl__string__24, ___nl__im__21));
#line 144
c_rt_lib0clear(&___nl__im__21);
#line 144
//clear ___nl__int__22;
#line 144
//clear ___nl__int__23;
#line 144
c_rt_lib0clear(&___nl__string__24);
#line 145
goto label_4;
#line 145
label_5:
#line 145
label_4:
#line 146
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(685)));
#line 146
c_rt_lib0copy(&___nl__im__28, ___nl__im__27);
#line 146
___nl__int__26 = c_rt_lib0array_len(___nl__im__28);
#line 146
c_rt_lib0clear(&___nl__im__27);
#line 146
c_rt_lib0clear(&___nl__im__28);
#line 146
___nl__int__29 = 0;
#line 146
___nl__int__30 = ___nl__int__26 > ___nl__int__29;
#line 146
___nl__bool__25 = ___nl__int__30;
#line 146
//clear ___nl__int__26;
#line 146
c_rt_lib0clear(&___nl__im__27);
#line 146
c_rt_lib0clear(&___nl__im__28);
#line 146
//clear ___nl__int__29;
#line 146
//clear ___nl__int__30;
#line 146
___nl__bool__25 = !___nl__bool__25;
#line 146
if(___nl__bool__25){ goto label_7;}
#line 147
c_rt_lib0move(&___nl__im__31,___get_global_const(685));
#line 147
c_rt_lib0move(&___nl__im__31, c_rt_lib0get_ref_hash(___nl__im__7, ___nl__im__31));
#line 147
___nl__int__32 = 0;
#line 147
___nl__int__33 = ___nl__int__32;
#line 147
c_rt_lib0delete(array0remove(&___nl__im__31, ___nl__int__33));
#line 147
c_rt_lib0move(&___nl__string__34,___get_global_const(685));
#line 147
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__7, ___nl__string__34, ___nl__im__31));
#line 147
c_rt_lib0clear(&___nl__im__31);
#line 147
//clear ___nl__int__32;
#line 147
//clear ___nl__int__33;
#line 147
c_rt_lib0clear(&___nl__string__34);
#line 148
goto label_6;
#line 148
label_7:
#line 148
label_6:
#line 149
c_rt_lib0copy(&___nl__im__35, ___nl__im__3);
#line 149
c_rt_lib0copy(&___nl__im__36, ___nl__im__7);
#line 149
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__35, ___nl__im__36));
#line 149
c_rt_lib0clear(&___nl__im__35);
#line 149
c_rt_lib0clear(&___nl__im__36);
#line 149
label_2:
#line 150
c_rt_lib0move(&___nl__im__6, c_rt_lib0next_iter(___nl__im__6));
#line 150
goto label_3;
#line 150
label_1:
#line 151
c_rt_lib0copy(&___nl__im__37, ___nl__im__2);
#line 152
c_rt_lib0move(&___nl__im__41, c_rt_lib0init_iter(___nl__im__37));
#line 152
label_10:
#line 152
___nl__bool__39 = c_rt_lib0is_end_hash(___nl__im__41);
#line 152
if(___nl__bool__39){ goto label_8;}
#line 152
c_rt_lib0move(&___nl__im__38, c_rt_lib0get_key_iter(___nl__im__41));
#line 152
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value(___nl__im__37, ___nl__im__38));
#line 153
c_rt_lib0copy(&___nl__im__42, ___nl__im__40);
#line 154
c_rt_lib0move(&___nl__im__43,___get_global_const(684));
#line 154
c_rt_lib0move(&___nl__im__43, c_rt_lib0get_ref_hash(___nl__im__42, ___nl__im__43));
#line 154
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0remove_dups(&___nl__im__43));
#line 154
c_rt_lib0move(&___nl__string__44,___get_global_const(684));
#line 154
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__42, ___nl__string__44, ___nl__im__43));
#line 154
c_rt_lib0clear(&___nl__im__43);
#line 154
c_rt_lib0clear(&___nl__string__44);
#line 155
c_rt_lib0move(&___nl__im__45,___get_global_const(685));
#line 155
c_rt_lib0move(&___nl__im__45, c_rt_lib0get_ref_hash(___nl__im__42, ___nl__im__45));
#line 155
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0remove_dups(&___nl__im__45));
#line 155
c_rt_lib0move(&___nl__string__46,___get_global_const(685));
#line 155
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__42, ___nl__string__46, ___nl__im__45));
#line 155
c_rt_lib0clear(&___nl__im__45);
#line 155
c_rt_lib0clear(&___nl__string__46);
#line 156
c_rt_lib0copy(&___nl__im__47, ___nl__im__38);
#line 156
c_rt_lib0copy(&___nl__im__48, ___nl__im__42);
#line 156
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__47, ___nl__im__48));
#line 156
c_rt_lib0clear(&___nl__im__47);
#line 156
c_rt_lib0clear(&___nl__im__48);
#line 156
label_9:
#line 157
c_rt_lib0move(&___nl__im__41, c_rt_lib0next_iter(___nl__im__41));
#line 157
goto label_10;
#line 157
label_8:
#line 158
c_rt_lib0copy(&___nl__im__49, ___nl__im__2);
#line 158
c_rt_lib0clear(&___nl__im__0);
#line 158
c_rt_lib0clear(&___nl__im__1);
#line 158
c_rt_lib0clear(&___nl__im__2);
#line 158
c_rt_lib0clear(&___nl__im__3);
#line 158
//clear ___nl__bool__4;
#line 158
c_rt_lib0clear(&___nl__im__5);
#line 158
c_rt_lib0clear(&___nl__im__6);
#line 158
c_rt_lib0clear(&___nl__im__7);
#line 158
c_rt_lib0clear(&___nl__im__8);
#line 158
c_rt_lib0clear(&___nl__im__9);
#line 158
//clear ___nl__bool__10;
#line 158
c_rt_lib0clear(&___nl__im__11);
#line 158
c_rt_lib0clear(&___nl__im__12);
#line 158
c_rt_lib0clear(&___nl__im__13);
#line 158
c_rt_lib0clear(&___nl__im__14);
#line 158
//clear ___nl__bool__15;
#line 158
//clear ___nl__int__16;
#line 158
c_rt_lib0clear(&___nl__im__17);
#line 158
c_rt_lib0clear(&___nl__im__18);
#line 158
//clear ___nl__int__19;
#line 158
//clear ___nl__int__20;
#line 158
c_rt_lib0clear(&___nl__im__21);
#line 158
//clear ___nl__int__22;
#line 158
//clear ___nl__int__23;
#line 158
c_rt_lib0clear(&___nl__string__24);
#line 158
//clear ___nl__bool__25;
#line 158
//clear ___nl__int__26;
#line 158
c_rt_lib0clear(&___nl__im__27);
#line 158
c_rt_lib0clear(&___nl__im__28);
#line 158
//clear ___nl__int__29;
#line 158
//clear ___nl__int__30;
#line 158
c_rt_lib0clear(&___nl__im__31);
#line 158
//clear ___nl__int__32;
#line 158
//clear ___nl__int__33;
#line 158
c_rt_lib0clear(&___nl__string__34);
#line 158
c_rt_lib0clear(&___nl__im__35);
#line 158
c_rt_lib0clear(&___nl__im__36);
#line 158
c_rt_lib0clear(&___nl__im__37);
#line 158
c_rt_lib0clear(&___nl__im__38);
#line 158
//clear ___nl__bool__39;
#line 158
c_rt_lib0clear(&___nl__im__40);
#line 158
c_rt_lib0clear(&___nl__im__41);
#line 158
c_rt_lib0clear(&___nl__im__42);
#line 158
c_rt_lib0clear(&___nl__im__43);
#line 158
c_rt_lib0clear(&___nl__string__44);
#line 158
c_rt_lib0clear(&___nl__im__45);
#line 158
c_rt_lib0clear(&___nl__string__46);
#line 158
c_rt_lib0clear(&___nl__im__47);
#line 158
c_rt_lib0clear(&___nl__im__48);
#line 158
return ___nl__im__49;
#line 158
c_rt_lib0clear(&___nl__im__0);
#line 158
c_rt_lib0clear(&___nl__im__1);
#line 158
c_rt_lib0clear(&___nl__im__2);
#line 158
c_rt_lib0clear(&___nl__im__3);
#line 158
//clear ___nl__bool__4;
#line 158
c_rt_lib0clear(&___nl__im__5);
#line 158
c_rt_lib0clear(&___nl__im__6);
#line 158
c_rt_lib0clear(&___nl__im__7);
#line 158
c_rt_lib0clear(&___nl__im__8);
#line 158
c_rt_lib0clear(&___nl__im__9);
#line 158
//clear ___nl__bool__10;
#line 158
c_rt_lib0clear(&___nl__im__11);
#line 158
c_rt_lib0clear(&___nl__im__12);
#line 158
c_rt_lib0clear(&___nl__im__13);
#line 158
c_rt_lib0clear(&___nl__im__14);
#line 158
//clear ___nl__bool__15;
#line 158
//clear ___nl__int__16;
#line 158
c_rt_lib0clear(&___nl__im__17);
#line 158
c_rt_lib0clear(&___nl__im__18);
#line 158
//clear ___nl__int__19;
#line 158
//clear ___nl__int__20;
#line 158
c_rt_lib0clear(&___nl__im__21);
#line 158
//clear ___nl__int__22;
#line 158
//clear ___nl__int__23;
#line 158
c_rt_lib0clear(&___nl__string__24);
#line 158
//clear ___nl__bool__25;
#line 158
//clear ___nl__int__26;
#line 158
c_rt_lib0clear(&___nl__im__27);
#line 158
c_rt_lib0clear(&___nl__im__28);
#line 158
//clear ___nl__int__29;
#line 158
//clear ___nl__int__30;
#line 158
c_rt_lib0clear(&___nl__im__31);
#line 158
//clear ___nl__int__32;
#line 158
//clear ___nl__int__33;
#line 158
c_rt_lib0clear(&___nl__string__34);
#line 158
c_rt_lib0clear(&___nl__im__35);
#line 158
c_rt_lib0clear(&___nl__im__36);
#line 158
c_rt_lib0clear(&___nl__im__37);
#line 158
c_rt_lib0clear(&___nl__im__38);
#line 158
//clear ___nl__bool__39;
#line 158
c_rt_lib0clear(&___nl__im__40);
#line 158
c_rt_lib0clear(&___nl__im__41);
#line 158
c_rt_lib0clear(&___nl__im__42);
#line 158
c_rt_lib0clear(&___nl__im__43);
#line 158
c_rt_lib0clear(&___nl__string__44);
#line 158
c_rt_lib0clear(&___nl__im__45);
#line 158
c_rt_lib0clear(&___nl__string__46);
#line 158
c_rt_lib0clear(&___nl__im__47);
#line 158
c_rt_lib0clear(&___nl__im__48);
#line 158
c_rt_lib0clear(&___nl__im__49);
#line 158
return NULL;
}

ImmT  generator_c_struct_dependence_sort_priv0remove_dups(ImmT * ___ref___im__0) {
generator_c_struct_dependence_sort_priv0__const__init();
INT  ___nl__int__1 = 0;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
ImmT  ___nl__string__13 = NULL;
ImmT  ___nl__string__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
#line 162
c_rt_lib0delete(array0sort(___ref___im__0));
#line 163
___nl__int__1 = 0;
#line 164
label_2:
#line 165
c_rt_lib0copy(&___nl__im__5, (*___ref___im__0));
#line 165
___nl__int__4 = c_rt_lib0array_len(___nl__im__5);
#line 165
c_rt_lib0clear(&___nl__im__5);
#line 165
___nl__int__6 = 1;
#line 165
___nl__int__3 = ___nl__int__4 - ___nl__int__6;
#line 165
//clear ___nl__int__4;
#line 165
c_rt_lib0clear(&___nl__im__5);
#line 165
//clear ___nl__int__6;
#line 165
//clear ___nl__int__4;
#line 165
c_rt_lib0clear(&___nl__im__5);
#line 165
//clear ___nl__int__6;
#line 165
___nl__int__7 = ___nl__int__1 >= ___nl__int__3;
#line 165
___nl__bool__2 = ___nl__int__7;
#line 165
//clear ___nl__int__3;
#line 165
//clear ___nl__int__4;
#line 165
c_rt_lib0clear(&___nl__im__5);
#line 165
//clear ___nl__int__6;
#line 165
//clear ___nl__int__7;
#line 165
___nl__bool__2 = !___nl__bool__2;
#line 165
if(___nl__bool__2){ goto label_4;}
#line 166
goto label_1;
#line 167
goto label_3;
#line 167
label_4:
#line 167
label_3:
#line 168
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get((*___ref___im__0), ___nl__int__1));
#line 168
___nl__int__12 = 1;
#line 168
___nl__int__11 = ___nl__int__1 + ___nl__int__12;
#line 168
//clear ___nl__int__12;
#line 168
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get((*___ref___im__0), ___nl__int__11));
#line 168
//clear ___nl__int__11;
#line 168
//clear ___nl__int__12;
#line 168
c_rt_lib0copy(&___nl__string__13, ___nl__im__9);
#line 168
c_rt_lib0copy(&___nl__string__14, ___nl__im__10);
#line 168
___nl__bool__8 = c_rt_lib0eq(___nl__string__13, ___nl__string__14);
#line 168
c_rt_lib0clear(&___nl__im__9);
#line 168
c_rt_lib0clear(&___nl__im__10);
#line 168
//clear ___nl__int__11;
#line 168
//clear ___nl__int__12;
#line 168
c_rt_lib0clear(&___nl__string__13);
#line 168
c_rt_lib0clear(&___nl__string__14);
#line 168
___nl__bool__8 = !___nl__bool__8;
#line 168
if(___nl__bool__8){ goto label_6;}
#line 169
___nl__int__16 = 1;
#line 169
___nl__int__15 = ___nl__int__1 + ___nl__int__16;
#line 169
//clear ___nl__int__16;
#line 169
___nl__int__17 = ___nl__int__15;
#line 169
c_rt_lib0delete(array0remove(___ref___im__0, ___nl__int__17));
#line 169
//clear ___nl__int__15;
#line 169
//clear ___nl__int__16;
#line 169
//clear ___nl__int__17;
#line 170
goto label_5;
#line 170
label_6:
#line 171
___nl__int__18 = 1;
#line 171
___nl__int__1 = ___nl__int__1 + ___nl__int__18;
#line 171
//clear ___nl__int__18;
#line 172
goto label_5;
#line 172
label_5:
#line 164
goto label_2;
#line 164
label_1:
#line 164
//clear ___nl__int__1;
#line 164
//clear ___nl__bool__2;
#line 164
//clear ___nl__int__3;
#line 164
//clear ___nl__int__4;
#line 164
c_rt_lib0clear(&___nl__im__5);
#line 164
//clear ___nl__int__6;
#line 164
//clear ___nl__int__7;
#line 164
//clear ___nl__bool__8;
#line 164
c_rt_lib0clear(&___nl__im__9);
#line 164
c_rt_lib0clear(&___nl__im__10);
#line 164
//clear ___nl__int__11;
#line 164
//clear ___nl__int__12;
#line 164
c_rt_lib0clear(&___nl__string__13);
#line 164
c_rt_lib0clear(&___nl__string__14);
#line 164
//clear ___nl__int__15;
#line 164
//clear ___nl__int__16;
#line 164
//clear ___nl__int__17;
#line 164
//clear ___nl__int__18;
#line 164
return NULL;
}

generator_c_struct_dependence_sort0decl_def_type0type generator_c_struct_dependence_sort_priv0join_type(generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__string__15 = NULL;
ImmT  ___nl__string__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 178
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(463));
#line 178
if(___nl__bool__2){ goto label_3;}
#line 178
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(463));
#line 178
label_3:
#line 178
//clear ___nl__bool__3;
#line 178
___nl__bool__2 = !___nl__bool__2;
#line 178
if(___nl__bool__2){ goto label_2;}
#line 179
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(463)));
#line 179
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 179
c_rt_lib0clear(&___nl__im__0);
#line 179
c_rt_lib0clear(&___nl__im__1);
#line 179
//clear ___nl__bool__2;
#line 179
//clear ___nl__bool__3;
#line 179
c_rt_lib0clear(&___nl__im__5);
#line 179
return ___nl__im__4;
#line 180
goto label_1;
#line 180
label_2:
#line 180
label_1:
#line 181
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(74));
#line 181
___nl__bool__6 = !___nl__bool__6;
#line 181
if(___nl__bool__6){ goto label_5;}
#line 182
c_rt_lib0copy(&___nl__im__7, ___nl__im__1);
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
c_rt_lib0clear(&___nl__im__1);
#line 182
//clear ___nl__bool__2;
#line 182
//clear ___nl__bool__3;
#line 182
c_rt_lib0clear(&___nl__im__4);
#line 182
c_rt_lib0clear(&___nl__im__5);
#line 182
//clear ___nl__bool__6;
#line 182
return ___nl__im__7;
#line 183
goto label_4;
#line 183
label_5:
#line 183
label_4:
#line 184
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(74));
#line 184
___nl__bool__8 = !___nl__bool__8;
#line 184
if(___nl__bool__8){ goto label_7;}
#line 185
c_rt_lib0copy(&___nl__im__9, ___nl__im__0);
#line 185
c_rt_lib0clear(&___nl__im__0);
#line 185
c_rt_lib0clear(&___nl__im__1);
#line 185
//clear ___nl__bool__2;
#line 185
//clear ___nl__bool__3;
#line 185
c_rt_lib0clear(&___nl__im__4);
#line 185
c_rt_lib0clear(&___nl__im__5);
#line 185
//clear ___nl__bool__6;
#line 185
c_rt_lib0clear(&___nl__im__7);
#line 185
//clear ___nl__bool__8;
#line 185
return ___nl__im__9;
#line 186
goto label_6;
#line 186
label_7:
#line 186
label_6:
#line 187
c_rt_lib0copy(&___nl__im__12, ___nl__im__0);
#line 187
c_rt_lib0move(&___nl__im__11, ov0get_element(___nl__im__12));
#line 187
c_rt_lib0clear(&___nl__im__12);
#line 187
c_rt_lib0copy(&___nl__im__14, ___nl__im__1);
#line 187
c_rt_lib0move(&___nl__im__13, ov0get_element(___nl__im__14));
#line 187
c_rt_lib0clear(&___nl__im__14);
#line 187
c_rt_lib0copy(&___nl__string__15, ___nl__im__11);
#line 187
c_rt_lib0copy(&___nl__string__16, ___nl__im__13);
#line 187
___nl__bool__10 = c_rt_lib0eq(___nl__string__15, ___nl__string__16);
#line 187
c_rt_lib0clear(&___nl__im__11);
#line 187
c_rt_lib0clear(&___nl__im__12);
#line 187
c_rt_lib0clear(&___nl__im__13);
#line 187
c_rt_lib0clear(&___nl__im__14);
#line 187
c_rt_lib0clear(&___nl__string__15);
#line 187
c_rt_lib0clear(&___nl__string__16);
#line 187
___nl__bool__10 = !___nl__bool__10;
#line 187
if(___nl__bool__10){ goto label_9;}
#line 188
c_rt_lib0copy(&___nl__im__17, ___nl__im__0);
#line 188
c_rt_lib0clear(&___nl__im__0);
#line 188
c_rt_lib0clear(&___nl__im__1);
#line 188
//clear ___nl__bool__2;
#line 188
//clear ___nl__bool__3;
#line 188
c_rt_lib0clear(&___nl__im__4);
#line 188
c_rt_lib0clear(&___nl__im__5);
#line 188
//clear ___nl__bool__6;
#line 188
c_rt_lib0clear(&___nl__im__7);
#line 188
//clear ___nl__bool__8;
#line 188
c_rt_lib0clear(&___nl__im__9);
#line 188
//clear ___nl__bool__10;
#line 188
c_rt_lib0clear(&___nl__im__11);
#line 188
c_rt_lib0clear(&___nl__im__12);
#line 188
c_rt_lib0clear(&___nl__im__13);
#line 188
c_rt_lib0clear(&___nl__im__14);
#line 188
c_rt_lib0clear(&___nl__string__15);
#line 188
c_rt_lib0clear(&___nl__string__16);
#line 188
return ___nl__im__17;
#line 189
goto label_8;
#line 189
label_9:
#line 189
label_8:
#line 190
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_const(463)));
#line 190
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 190
c_rt_lib0clear(&___nl__im__0);
#line 190
c_rt_lib0clear(&___nl__im__1);
#line 190
//clear ___nl__bool__2;
#line 190
//clear ___nl__bool__3;
#line 190
c_rt_lib0clear(&___nl__im__4);
#line 190
c_rt_lib0clear(&___nl__im__5);
#line 190
//clear ___nl__bool__6;
#line 190
c_rt_lib0clear(&___nl__im__7);
#line 190
//clear ___nl__bool__8;
#line 190
c_rt_lib0clear(&___nl__im__9);
#line 190
//clear ___nl__bool__10;
#line 190
c_rt_lib0clear(&___nl__im__11);
#line 190
c_rt_lib0clear(&___nl__im__12);
#line 190
c_rt_lib0clear(&___nl__im__13);
#line 190
c_rt_lib0clear(&___nl__im__14);
#line 190
c_rt_lib0clear(&___nl__string__15);
#line 190
c_rt_lib0clear(&___nl__string__16);
#line 190
c_rt_lib0clear(&___nl__im__17);
#line 190
c_rt_lib0clear(&___nl__im__19);
#line 190
return ___nl__im__18;
#line 190
c_rt_lib0clear(&___nl__im__0);
#line 190
c_rt_lib0clear(&___nl__im__1);
#line 190
//clear ___nl__bool__2;
#line 190
//clear ___nl__bool__3;
#line 190
c_rt_lib0clear(&___nl__im__4);
#line 190
c_rt_lib0clear(&___nl__im__5);
#line 190
//clear ___nl__bool__6;
#line 190
c_rt_lib0clear(&___nl__im__7);
#line 190
//clear ___nl__bool__8;
#line 190
c_rt_lib0clear(&___nl__im__9);
#line 190
//clear ___nl__bool__10;
#line 190
c_rt_lib0clear(&___nl__im__11);
#line 190
c_rt_lib0clear(&___nl__im__12);
#line 190
c_rt_lib0clear(&___nl__im__13);
#line 190
c_rt_lib0clear(&___nl__im__14);
#line 190
c_rt_lib0clear(&___nl__string__15);
#line 190
c_rt_lib0clear(&___nl__string__16);
#line 190
c_rt_lib0clear(&___nl__im__17);
#line 190
c_rt_lib0clear(&___nl__im__18);
#line 190
c_rt_lib0clear(&___nl__im__19);
#line 190
return NULL;
}

generator_c_struct_dependence_sort0decl_def_type0type generator_c_struct_dependence_sort_priv0common_type(generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__string__15 = NULL;
ImmT  ___nl__string__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 195
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(74));
#line 195
if(___nl__bool__2){ goto label_3;}
#line 195
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(74));
#line 195
label_3:
#line 195
//clear ___nl__bool__3;
#line 195
___nl__bool__2 = !___nl__bool__2;
#line 195
if(___nl__bool__2){ goto label_2;}
#line 196
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 196
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 196
c_rt_lib0clear(&___nl__im__0);
#line 196
c_rt_lib0clear(&___nl__im__1);
#line 196
//clear ___nl__bool__2;
#line 196
//clear ___nl__bool__3;
#line 196
c_rt_lib0clear(&___nl__im__5);
#line 196
return ___nl__im__4;
#line 197
goto label_1;
#line 197
label_2:
#line 197
label_1:
#line 198
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(463));
#line 198
___nl__bool__6 = !___nl__bool__6;
#line 198
if(___nl__bool__6){ goto label_5;}
#line 199
c_rt_lib0copy(&___nl__im__7, ___nl__im__1);
#line 199
c_rt_lib0clear(&___nl__im__0);
#line 199
c_rt_lib0clear(&___nl__im__1);
#line 199
//clear ___nl__bool__2;
#line 199
//clear ___nl__bool__3;
#line 199
c_rt_lib0clear(&___nl__im__4);
#line 199
c_rt_lib0clear(&___nl__im__5);
#line 199
//clear ___nl__bool__6;
#line 199
return ___nl__im__7;
#line 200
goto label_4;
#line 200
label_5:
#line 200
label_4:
#line 201
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(463));
#line 201
___nl__bool__8 = !___nl__bool__8;
#line 201
if(___nl__bool__8){ goto label_7;}
#line 202
c_rt_lib0copy(&___nl__im__9, ___nl__im__0);
#line 202
c_rt_lib0clear(&___nl__im__0);
#line 202
c_rt_lib0clear(&___nl__im__1);
#line 202
//clear ___nl__bool__2;
#line 202
//clear ___nl__bool__3;
#line 202
c_rt_lib0clear(&___nl__im__4);
#line 202
c_rt_lib0clear(&___nl__im__5);
#line 202
//clear ___nl__bool__6;
#line 202
c_rt_lib0clear(&___nl__im__7);
#line 202
//clear ___nl__bool__8;
#line 202
return ___nl__im__9;
#line 203
goto label_6;
#line 203
label_7:
#line 203
label_6:
#line 204
c_rt_lib0copy(&___nl__im__12, ___nl__im__0);
#line 204
c_rt_lib0move(&___nl__im__11, ov0get_element(___nl__im__12));
#line 204
c_rt_lib0clear(&___nl__im__12);
#line 204
c_rt_lib0copy(&___nl__im__14, ___nl__im__1);
#line 204
c_rt_lib0move(&___nl__im__13, ov0get_element(___nl__im__14));
#line 204
c_rt_lib0clear(&___nl__im__14);
#line 204
c_rt_lib0copy(&___nl__string__15, ___nl__im__11);
#line 204
c_rt_lib0copy(&___nl__string__16, ___nl__im__13);
#line 204
___nl__bool__10 = c_rt_lib0eq(___nl__string__15, ___nl__string__16);
#line 204
c_rt_lib0clear(&___nl__im__11);
#line 204
c_rt_lib0clear(&___nl__im__12);
#line 204
c_rt_lib0clear(&___nl__im__13);
#line 204
c_rt_lib0clear(&___nl__im__14);
#line 204
c_rt_lib0clear(&___nl__string__15);
#line 204
c_rt_lib0clear(&___nl__string__16);
#line 204
___nl__bool__10 = !___nl__bool__10;
#line 204
if(___nl__bool__10){ goto label_9;}
#line 205
c_rt_lib0copy(&___nl__im__17, ___nl__im__0);
#line 205
c_rt_lib0clear(&___nl__im__0);
#line 205
c_rt_lib0clear(&___nl__im__1);
#line 205
//clear ___nl__bool__2;
#line 205
//clear ___nl__bool__3;
#line 205
c_rt_lib0clear(&___nl__im__4);
#line 205
c_rt_lib0clear(&___nl__im__5);
#line 205
//clear ___nl__bool__6;
#line 205
c_rt_lib0clear(&___nl__im__7);
#line 205
//clear ___nl__bool__8;
#line 205
c_rt_lib0clear(&___nl__im__9);
#line 205
//clear ___nl__bool__10;
#line 205
c_rt_lib0clear(&___nl__im__11);
#line 205
c_rt_lib0clear(&___nl__im__12);
#line 205
c_rt_lib0clear(&___nl__im__13);
#line 205
c_rt_lib0clear(&___nl__im__14);
#line 205
c_rt_lib0clear(&___nl__string__15);
#line 205
c_rt_lib0clear(&___nl__string__16);
#line 205
return ___nl__im__17;
#line 206
goto label_8;
#line 206
label_9:
#line 206
label_8:
#line 207
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 207
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 207
c_rt_lib0clear(&___nl__im__0);
#line 207
c_rt_lib0clear(&___nl__im__1);
#line 207
//clear ___nl__bool__2;
#line 207
//clear ___nl__bool__3;
#line 207
c_rt_lib0clear(&___nl__im__4);
#line 207
c_rt_lib0clear(&___nl__im__5);
#line 207
//clear ___nl__bool__6;
#line 207
c_rt_lib0clear(&___nl__im__7);
#line 207
//clear ___nl__bool__8;
#line 207
c_rt_lib0clear(&___nl__im__9);
#line 207
//clear ___nl__bool__10;
#line 207
c_rt_lib0clear(&___nl__im__11);
#line 207
c_rt_lib0clear(&___nl__im__12);
#line 207
c_rt_lib0clear(&___nl__im__13);
#line 207
c_rt_lib0clear(&___nl__im__14);
#line 207
c_rt_lib0clear(&___nl__string__15);
#line 207
c_rt_lib0clear(&___nl__string__16);
#line 207
c_rt_lib0clear(&___nl__im__17);
#line 207
c_rt_lib0clear(&___nl__im__19);
#line 207
return ___nl__im__18;
#line 207
c_rt_lib0clear(&___nl__im__0);
#line 207
c_rt_lib0clear(&___nl__im__1);
#line 207
//clear ___nl__bool__2;
#line 207
//clear ___nl__bool__3;
#line 207
c_rt_lib0clear(&___nl__im__4);
#line 207
c_rt_lib0clear(&___nl__im__5);
#line 207
//clear ___nl__bool__6;
#line 207
c_rt_lib0clear(&___nl__im__7);
#line 207
//clear ___nl__bool__8;
#line 207
c_rt_lib0clear(&___nl__im__9);
#line 207
//clear ___nl__bool__10;
#line 207
c_rt_lib0clear(&___nl__im__11);
#line 207
c_rt_lib0clear(&___nl__im__12);
#line 207
c_rt_lib0clear(&___nl__im__13);
#line 207
c_rt_lib0clear(&___nl__im__14);
#line 207
c_rt_lib0clear(&___nl__string__15);
#line 207
c_rt_lib0clear(&___nl__string__16);
#line 207
c_rt_lib0clear(&___nl__im__17);
#line 207
c_rt_lib0clear(&___nl__im__18);
#line 207
c_rt_lib0clear(&___nl__im__19);
#line 207
return NULL;
}

generator_c_struct_dependence_sort0decl_def_type0type generator_c_struct_dependence_sort_priv0split_type(generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__string__7 = NULL;
ImmT  ___nl__string__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
#line 212
c_rt_lib0copy(&___nl__im__4, ___nl__im__0);
#line 212
c_rt_lib0move(&___nl__im__3, ov0get_element(___nl__im__4));
#line 212
c_rt_lib0clear(&___nl__im__4);
#line 212
c_rt_lib0copy(&___nl__im__6, ___nl__im__1);
#line 212
c_rt_lib0move(&___nl__im__5, ov0get_element(___nl__im__6));
#line 212
c_rt_lib0clear(&___nl__im__6);
#line 212
c_rt_lib0copy(&___nl__string__7, ___nl__im__3);
#line 212
c_rt_lib0copy(&___nl__string__8, ___nl__im__5);
#line 212
___nl__bool__2 = c_rt_lib0eq(___nl__string__7, ___nl__string__8);
#line 212
c_rt_lib0clear(&___nl__im__3);
#line 212
c_rt_lib0clear(&___nl__im__4);
#line 212
c_rt_lib0clear(&___nl__im__5);
#line 212
c_rt_lib0clear(&___nl__im__6);
#line 212
c_rt_lib0clear(&___nl__string__7);
#line 212
c_rt_lib0clear(&___nl__string__8);
#line 212
___nl__bool__2 = !___nl__bool__2;
#line 212
if(___nl__bool__2){ goto label_2;}
#line 213
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 213
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 213
c_rt_lib0clear(&___nl__im__0);
#line 213
c_rt_lib0clear(&___nl__im__1);
#line 213
//clear ___nl__bool__2;
#line 213
c_rt_lib0clear(&___nl__im__3);
#line 213
c_rt_lib0clear(&___nl__im__4);
#line 213
c_rt_lib0clear(&___nl__im__5);
#line 213
c_rt_lib0clear(&___nl__im__6);
#line 213
c_rt_lib0clear(&___nl__string__7);
#line 213
c_rt_lib0clear(&___nl__string__8);
#line 213
c_rt_lib0clear(&___nl__im__10);
#line 213
return ___nl__im__9;
#line 214
goto label_1;
#line 214
label_2:
#line 214
label_1:
#line 215
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(74));
#line 215
___nl__bool__11 = !___nl__bool__11;
#line 215
if(___nl__bool__11){ goto label_4;}
#line 216
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 216
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 216
c_rt_lib0clear(&___nl__im__0);
#line 216
c_rt_lib0clear(&___nl__im__1);
#line 216
//clear ___nl__bool__2;
#line 216
c_rt_lib0clear(&___nl__im__3);
#line 216
c_rt_lib0clear(&___nl__im__4);
#line 216
c_rt_lib0clear(&___nl__im__5);
#line 216
c_rt_lib0clear(&___nl__im__6);
#line 216
c_rt_lib0clear(&___nl__string__7);
#line 216
c_rt_lib0clear(&___nl__string__8);
#line 216
c_rt_lib0clear(&___nl__im__9);
#line 216
c_rt_lib0clear(&___nl__im__10);
#line 216
//clear ___nl__bool__11;
#line 216
c_rt_lib0clear(&___nl__im__13);
#line 216
return ___nl__im__12;
#line 217
goto label_3;
#line 217
label_4:
#line 217
label_3:
#line 218
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(74));
#line 218
___nl__bool__14 = !___nl__bool__14;
#line 218
if(___nl__bool__14){ goto label_6;}
#line 219
c_rt_lib0copy(&___nl__im__15, ___nl__im__0);
#line 219
c_rt_lib0clear(&___nl__im__0);
#line 219
c_rt_lib0clear(&___nl__im__1);
#line 219
//clear ___nl__bool__2;
#line 219
c_rt_lib0clear(&___nl__im__3);
#line 219
c_rt_lib0clear(&___nl__im__4);
#line 219
c_rt_lib0clear(&___nl__im__5);
#line 219
c_rt_lib0clear(&___nl__im__6);
#line 219
c_rt_lib0clear(&___nl__string__7);
#line 219
c_rt_lib0clear(&___nl__string__8);
#line 219
c_rt_lib0clear(&___nl__im__9);
#line 219
c_rt_lib0clear(&___nl__im__10);
#line 219
//clear ___nl__bool__11;
#line 219
c_rt_lib0clear(&___nl__im__12);
#line 219
c_rt_lib0clear(&___nl__im__13);
#line 219
//clear ___nl__bool__14;
#line 219
return ___nl__im__15;
#line 220
goto label_5;
#line 220
label_6:
#line 220
label_5:
#line 221
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(463));
#line 221
___nl__bool__16 = !___nl__bool__16;
#line 221
if(___nl__bool__16){ goto label_8;}
#line 222
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 222
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 222
c_rt_lib0clear(&___nl__im__0);
#line 222
c_rt_lib0clear(&___nl__im__1);
#line 222
//clear ___nl__bool__2;
#line 222
c_rt_lib0clear(&___nl__im__3);
#line 222
c_rt_lib0clear(&___nl__im__4);
#line 222
c_rt_lib0clear(&___nl__im__5);
#line 222
c_rt_lib0clear(&___nl__im__6);
#line 222
c_rt_lib0clear(&___nl__string__7);
#line 222
c_rt_lib0clear(&___nl__string__8);
#line 222
c_rt_lib0clear(&___nl__im__9);
#line 222
c_rt_lib0clear(&___nl__im__10);
#line 222
//clear ___nl__bool__11;
#line 222
c_rt_lib0clear(&___nl__im__12);
#line 222
c_rt_lib0clear(&___nl__im__13);
#line 222
//clear ___nl__bool__14;
#line 222
c_rt_lib0clear(&___nl__im__15);
#line 222
//clear ___nl__bool__16;
#line 222
c_rt_lib0clear(&___nl__im__18);
#line 222
return ___nl__im__17;
#line 223
goto label_7;
#line 223
label_8:
#line 223
label_7:
#line 224
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(463));
#line 224
___nl__bool__19 = !___nl__bool__19;
#line 224
if(___nl__bool__19){ goto label_10;}
#line 225
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(688));
#line 225
___nl__bool__20 = !___nl__bool__20;
#line 225
if(___nl__bool__20){ goto label_12;}
#line 226
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(689)));
#line 226
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 226
c_rt_lib0clear(&___nl__im__0);
#line 226
c_rt_lib0clear(&___nl__im__1);
#line 226
//clear ___nl__bool__2;
#line 226
c_rt_lib0clear(&___nl__im__3);
#line 226
c_rt_lib0clear(&___nl__im__4);
#line 226
c_rt_lib0clear(&___nl__im__5);
#line 226
c_rt_lib0clear(&___nl__im__6);
#line 226
c_rt_lib0clear(&___nl__string__7);
#line 226
c_rt_lib0clear(&___nl__string__8);
#line 226
c_rt_lib0clear(&___nl__im__9);
#line 226
c_rt_lib0clear(&___nl__im__10);
#line 226
//clear ___nl__bool__11;
#line 226
c_rt_lib0clear(&___nl__im__12);
#line 226
c_rt_lib0clear(&___nl__im__13);
#line 226
//clear ___nl__bool__14;
#line 226
c_rt_lib0clear(&___nl__im__15);
#line 226
//clear ___nl__bool__16;
#line 226
c_rt_lib0clear(&___nl__im__17);
#line 226
c_rt_lib0clear(&___nl__im__18);
#line 226
//clear ___nl__bool__19;
#line 226
//clear ___nl__bool__20;
#line 226
c_rt_lib0clear(&___nl__im__22);
#line 226
return ___nl__im__21;
#line 227
goto label_11;
#line 227
label_12:
#line 227
label_11:
#line 228
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(688)));
#line 228
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 228
c_rt_lib0clear(&___nl__im__0);
#line 228
c_rt_lib0clear(&___nl__im__1);
#line 228
//clear ___nl__bool__2;
#line 228
c_rt_lib0clear(&___nl__im__3);
#line 228
c_rt_lib0clear(&___nl__im__4);
#line 228
c_rt_lib0clear(&___nl__im__5);
#line 228
c_rt_lib0clear(&___nl__im__6);
#line 228
c_rt_lib0clear(&___nl__string__7);
#line 228
c_rt_lib0clear(&___nl__string__8);
#line 228
c_rt_lib0clear(&___nl__im__9);
#line 228
c_rt_lib0clear(&___nl__im__10);
#line 228
//clear ___nl__bool__11;
#line 228
c_rt_lib0clear(&___nl__im__12);
#line 228
c_rt_lib0clear(&___nl__im__13);
#line 228
//clear ___nl__bool__14;
#line 228
c_rt_lib0clear(&___nl__im__15);
#line 228
//clear ___nl__bool__16;
#line 228
c_rt_lib0clear(&___nl__im__17);
#line 228
c_rt_lib0clear(&___nl__im__18);
#line 228
//clear ___nl__bool__19;
#line 228
//clear ___nl__bool__20;
#line 228
c_rt_lib0clear(&___nl__im__21);
#line 228
c_rt_lib0clear(&___nl__im__22);
#line 228
c_rt_lib0clear(&___nl__im__24);
#line 228
return ___nl__im__23;
#line 229
goto label_9;
#line 229
label_10:
#line 229
label_9:
#line 230
c_rt_lib0copy(&___nl__im__25, ___nl__im__0);
#line 230
c_rt_lib0clear(&___nl__im__0);
#line 230
c_rt_lib0clear(&___nl__im__1);
#line 230
//clear ___nl__bool__2;
#line 230
c_rt_lib0clear(&___nl__im__3);
#line 230
c_rt_lib0clear(&___nl__im__4);
#line 230
c_rt_lib0clear(&___nl__im__5);
#line 230
c_rt_lib0clear(&___nl__im__6);
#line 230
c_rt_lib0clear(&___nl__string__7);
#line 230
c_rt_lib0clear(&___nl__string__8);
#line 230
c_rt_lib0clear(&___nl__im__9);
#line 230
c_rt_lib0clear(&___nl__im__10);
#line 230
//clear ___nl__bool__11;
#line 230
c_rt_lib0clear(&___nl__im__12);
#line 230
c_rt_lib0clear(&___nl__im__13);
#line 230
//clear ___nl__bool__14;
#line 230
c_rt_lib0clear(&___nl__im__15);
#line 230
//clear ___nl__bool__16;
#line 230
c_rt_lib0clear(&___nl__im__17);
#line 230
c_rt_lib0clear(&___nl__im__18);
#line 230
//clear ___nl__bool__19;
#line 230
//clear ___nl__bool__20;
#line 230
c_rt_lib0clear(&___nl__im__21);
#line 230
c_rt_lib0clear(&___nl__im__22);
#line 230
c_rt_lib0clear(&___nl__im__23);
#line 230
c_rt_lib0clear(&___nl__im__24);
#line 230
return ___nl__im__25;
#line 230
c_rt_lib0clear(&___nl__im__0);
#line 230
c_rt_lib0clear(&___nl__im__1);
#line 230
//clear ___nl__bool__2;
#line 230
c_rt_lib0clear(&___nl__im__3);
#line 230
c_rt_lib0clear(&___nl__im__4);
#line 230
c_rt_lib0clear(&___nl__im__5);
#line 230
c_rt_lib0clear(&___nl__im__6);
#line 230
c_rt_lib0clear(&___nl__string__7);
#line 230
c_rt_lib0clear(&___nl__string__8);
#line 230
c_rt_lib0clear(&___nl__im__9);
#line 230
c_rt_lib0clear(&___nl__im__10);
#line 230
//clear ___nl__bool__11;
#line 230
c_rt_lib0clear(&___nl__im__12);
#line 230
c_rt_lib0clear(&___nl__im__13);
#line 230
//clear ___nl__bool__14;
#line 230
c_rt_lib0clear(&___nl__im__15);
#line 230
//clear ___nl__bool__16;
#line 230
c_rt_lib0clear(&___nl__im__17);
#line 230
c_rt_lib0clear(&___nl__im__18);
#line 230
//clear ___nl__bool__19;
#line 230
//clear ___nl__bool__20;
#line 230
c_rt_lib0clear(&___nl__im__21);
#line 230
c_rt_lib0clear(&___nl__im__22);
#line 230
c_rt_lib0clear(&___nl__im__23);
#line 230
c_rt_lib0clear(&___nl__im__24);
#line 230
c_rt_lib0clear(&___nl__im__25);
#line 230
return NULL;
}

generator_c_struct_dependence_sort0sorted_element0type generator_c_struct_dependence_sort_priv0type_to_var(ImmT  ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 235
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(463));
#line 235
___nl__bool__2 = !___nl__bool__2;
#line 235
if(___nl__bool__2){ goto label_2;}
#line 236
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(463), ___nl__im__0));
#line 236
c_rt_lib0copy(&___nl__im__3, ___nl__im__4);
#line 236
c_rt_lib0clear(&___nl__im__0);
#line 236
c_rt_lib0clear(&___nl__im__1);
#line 236
//clear ___nl__bool__2;
#line 236
c_rt_lib0clear(&___nl__im__4);
#line 236
return ___nl__im__3;
#line 237
goto label_1;
#line 237
label_2:
#line 237
label_1:
#line 238
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(688));
#line 238
___nl__bool__5 = !___nl__bool__5;
#line 238
if(___nl__bool__5){ goto label_4;}
#line 239
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(462), ___nl__im__0));
#line 239
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 239
c_rt_lib0clear(&___nl__im__0);
#line 239
c_rt_lib0clear(&___nl__im__1);
#line 239
//clear ___nl__bool__2;
#line 239
c_rt_lib0clear(&___nl__im__3);
#line 239
c_rt_lib0clear(&___nl__im__4);
#line 239
//clear ___nl__bool__5;
#line 239
c_rt_lib0clear(&___nl__im__7);
#line 239
return ___nl__im__6;
#line 240
goto label_3;
#line 240
label_4:
#line 240
label_3:
#line 241
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(689));
#line 241
___nl__bool__8 = !___nl__bool__8;
#line 241
if(___nl__bool__8){ goto label_6;}
#line 242
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(461), ___nl__im__0));
#line 242
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 242
c_rt_lib0clear(&___nl__im__0);
#line 242
c_rt_lib0clear(&___nl__im__1);
#line 242
//clear ___nl__bool__2;
#line 242
c_rt_lib0clear(&___nl__im__3);
#line 242
c_rt_lib0clear(&___nl__im__4);
#line 242
//clear ___nl__bool__5;
#line 242
c_rt_lib0clear(&___nl__im__6);
#line 242
c_rt_lib0clear(&___nl__im__7);
#line 242
//clear ___nl__bool__8;
#line 242
c_rt_lib0clear(&___nl__im__10);
#line 242
return ___nl__im__9;
#line 243
goto label_5;
#line 243
label_6:
#line 243
label_5:
#line 244
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(0));
#line 244
nl_die_arg(___nl__im__11);
#line 244
c_rt_lib0clear(&___nl__im__0);
#line 244
c_rt_lib0clear(&___nl__im__1);
#line 244
//clear ___nl__bool__2;
#line 244
c_rt_lib0clear(&___nl__im__3);
#line 244
c_rt_lib0clear(&___nl__im__4);
#line 244
//clear ___nl__bool__5;
#line 244
c_rt_lib0clear(&___nl__im__6);
#line 244
c_rt_lib0clear(&___nl__im__7);
#line 244
//clear ___nl__bool__8;
#line 244
c_rt_lib0clear(&___nl__im__9);
#line 244
c_rt_lib0clear(&___nl__im__10);
#line 244
c_rt_lib0clear(&___nl__im__11);
#line 244
return NULL;
}

ImmT  generator_c_struct_dependence_sort_priv0sort_graph_help(generator_c_struct_dependence_sort0graph0type ___nl__im__0,ImmT * ___ref___im__1,ImmT * ___ref___im__2,ImmT * ___ref___im__3,generator_c_struct_dependence_sort0sorted_element0type ___nl__im__4,bool* ___ref___bool__5) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__4);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__string__28 = NULL;
ImmT  ___nl__string__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
bool  ___nl__bool__41 = false;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
bool  ___nl__bool__52 = false;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
bool  ___nl__bool__62 = false;
bool  ___nl__bool__63 = false;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
INT  ___nl__int__71 = 0;
bool  ___nl__bool__72 = false;
INT  ___nl__int__73 = 0;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
INT  ___nl__int__83 = 0;
INT  ___nl__int__84 = 0;
INT  ___nl__int__85 = 0;
bool  ___nl__bool__86 = false;
INT  ___nl__int__87 = 0;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
#line 254
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(461));
#line 254
if(___nl__bool__8){ goto label_2;}
#line 257
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(462));
#line 257
if(___nl__bool__8){ goto label_3;}
#line 260
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(463));
#line 260
if(___nl__bool__8){ goto label_4;}
#line 260
c_rt_lib0move(&___nl__im__9,___get_global_const(16));
#line 260
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__4));
#line 260
nl_die_arg(___nl__im__9);
#line 254
label_2:
#line 254
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(461)));
#line 254
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 255
c_rt_lib0copy(&___nl__im__6, ___nl__im__10);
#line 256
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(689)));
#line 257
goto label_1;
#line 257
label_3:
#line 257
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(462)));
#line 257
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 258
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 259
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(688)));
#line 260
goto label_1;
#line 260
label_4:
#line 260
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(463)));
#line 260
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 261
c_rt_lib0copy(&___nl__im__6, ___nl__im__14);
#line 262
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(463)));
#line 263
goto label_1;
#line 263
label_1:
#line 265
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 266
c_rt_lib0copy(&___nl__im__18, (*___ref___im__3));
#line 266
c_rt_lib0copy(&___nl__im__19, ___nl__im__6);
#line 266
___nl__bool__17 = hash0has_key(___nl__im__18, ___nl__im__19);
#line 266
c_rt_lib0clear(&___nl__im__18);
#line 266
c_rt_lib0clear(&___nl__im__19);
#line 266
___nl__bool__17 = !___nl__bool__17;
#line 266
if(___nl__bool__17){ goto label_6;}
#line 267
c_rt_lib0copy(&___nl__im__20, (*___ref___im__3));
#line 267
c_rt_lib0copy(&___nl__im__21, ___nl__im__6);
#line 267
c_rt_lib0move(&___nl__im__16, hash0get_value(___nl__im__20, ___nl__im__21));
#line 267
c_rt_lib0clear(&___nl__im__20);
#line 267
c_rt_lib0clear(&___nl__im__21);
#line 267
c_rt_lib0clear(&___nl__im__20);
#line 267
c_rt_lib0clear(&___nl__im__21);
#line 268
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(463));
#line 268
if(___nl__bool__22){ goto label_9;}
#line 268
c_rt_lib0copy(&___nl__im__25, ___nl__im__16);
#line 268
c_rt_lib0move(&___nl__im__24, ov0get_element(___nl__im__25));
#line 268
c_rt_lib0clear(&___nl__im__25);
#line 268
c_rt_lib0copy(&___nl__im__27, ___nl__im__7);
#line 268
c_rt_lib0move(&___nl__im__26, ov0get_element(___nl__im__27));
#line 268
c_rt_lib0clear(&___nl__im__27);
#line 268
c_rt_lib0copy(&___nl__string__28, ___nl__im__24);
#line 268
c_rt_lib0copy(&___nl__string__29, ___nl__im__26);
#line 268
___nl__bool__22 = c_rt_lib0eq(___nl__string__28, ___nl__string__29);
#line 268
c_rt_lib0clear(&___nl__im__24);
#line 268
c_rt_lib0clear(&___nl__im__25);
#line 268
c_rt_lib0clear(&___nl__im__26);
#line 268
c_rt_lib0clear(&___nl__im__27);
#line 268
c_rt_lib0clear(&___nl__string__28);
#line 268
c_rt_lib0clear(&___nl__string__29);
#line 268
label_9:
#line 268
//clear ___nl__bool__23;
#line 268
c_rt_lib0clear(&___nl__im__24);
#line 268
c_rt_lib0clear(&___nl__im__25);
#line 268
c_rt_lib0clear(&___nl__im__26);
#line 268
c_rt_lib0clear(&___nl__im__27);
#line 268
c_rt_lib0clear(&___nl__string__28);
#line 268
c_rt_lib0clear(&___nl__string__29);
#line 268
___nl__bool__22 = !___nl__bool__22;
#line 268
if(___nl__bool__22){ goto label_8;}
#line 269
c_rt_lib0clear(&___nl__im__0);
#line 269
c_rt_lib0clear(&___nl__im__4);
#line 269
c_rt_lib0clear(&___nl__im__6);
#line 269
c_rt_lib0clear(&___nl__im__7);
#line 269
//clear ___nl__bool__8;
#line 269
c_rt_lib0clear(&___nl__im__9);
#line 269
c_rt_lib0clear(&___nl__im__10);
#line 269
c_rt_lib0clear(&___nl__im__11);
#line 269
c_rt_lib0clear(&___nl__im__12);
#line 269
c_rt_lib0clear(&___nl__im__13);
#line 269
c_rt_lib0clear(&___nl__im__14);
#line 269
c_rt_lib0clear(&___nl__im__15);
#line 269
c_rt_lib0clear(&___nl__im__16);
#line 269
//clear ___nl__bool__17;
#line 269
c_rt_lib0clear(&___nl__im__18);
#line 269
c_rt_lib0clear(&___nl__im__19);
#line 269
c_rt_lib0clear(&___nl__im__20);
#line 269
c_rt_lib0clear(&___nl__im__21);
#line 269
//clear ___nl__bool__22;
#line 269
//clear ___nl__bool__23;
#line 269
c_rt_lib0clear(&___nl__im__24);
#line 269
c_rt_lib0clear(&___nl__im__25);
#line 269
c_rt_lib0clear(&___nl__im__26);
#line 269
c_rt_lib0clear(&___nl__im__27);
#line 269
c_rt_lib0clear(&___nl__string__28);
#line 269
c_rt_lib0clear(&___nl__string__29);
#line 269
return NULL;
#line 270
goto label_7;
#line 270
label_8:
#line 270
label_7:
#line 271
goto label_5;
#line 271
label_6:
#line 271
label_5:
#line 272
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_none(___get_global_const(74)));
#line 273
c_rt_lib0copy(&___nl__im__32, (*___ref___im__2));
#line 273
c_rt_lib0copy(&___nl__im__33, ___nl__im__6);
#line 273
___nl__bool__31 = hash0has_key(___nl__im__32, ___nl__im__33);
#line 273
c_rt_lib0clear(&___nl__im__32);
#line 273
c_rt_lib0clear(&___nl__im__33);
#line 273
___nl__bool__31 = !___nl__bool__31;
#line 273
if(___nl__bool__31){ goto label_11;}
#line 274
c_rt_lib0copy(&___nl__im__34, (*___ref___im__2));
#line 274
c_rt_lib0copy(&___nl__im__35, ___nl__im__6);
#line 274
c_rt_lib0move(&___nl__im__30, hash0get_value(___nl__im__34, ___nl__im__35));
#line 274
c_rt_lib0clear(&___nl__im__34);
#line 274
c_rt_lib0clear(&___nl__im__35);
#line 274
c_rt_lib0clear(&___nl__im__34);
#line 274
c_rt_lib0clear(&___nl__im__35);
#line 275
c_rt_lib0copy(&___nl__im__38, ___nl__im__7);
#line 275
c_rt_lib0copy(&___nl__im__39, ___nl__im__30);
#line 275
c_rt_lib0move(&___nl__im__37, generator_c_struct_dependence_sort_priv0common_type(___nl__im__38, ___nl__im__39));
#line 275
c_rt_lib0clear(&___nl__im__38);
#line 275
c_rt_lib0clear(&___nl__im__39);
#line 275
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__37, ___get_global_const(74));
#line 275
c_rt_lib0clear(&___nl__im__37);
#line 275
c_rt_lib0clear(&___nl__im__38);
#line 275
c_rt_lib0clear(&___nl__im__39);
#line 275
___nl__bool__36 = !___nl__bool__36;
#line 275
c_rt_lib0clear(&___nl__im__37);
#line 275
c_rt_lib0clear(&___nl__im__38);
#line 275
c_rt_lib0clear(&___nl__im__39);
#line 275
___nl__bool__36 = !___nl__bool__36;
#line 275
if(___nl__bool__36){ goto label_13;}
#line 276
(*___ref___bool__5) = true;
#line 277
c_rt_lib0clear(&___nl__im__0);
#line 277
c_rt_lib0clear(&___nl__im__4);
#line 277
c_rt_lib0clear(&___nl__im__6);
#line 277
c_rt_lib0clear(&___nl__im__7);
#line 277
//clear ___nl__bool__8;
#line 277
c_rt_lib0clear(&___nl__im__9);
#line 277
c_rt_lib0clear(&___nl__im__10);
#line 277
c_rt_lib0clear(&___nl__im__11);
#line 277
c_rt_lib0clear(&___nl__im__12);
#line 277
c_rt_lib0clear(&___nl__im__13);
#line 277
c_rt_lib0clear(&___nl__im__14);
#line 277
c_rt_lib0clear(&___nl__im__15);
#line 277
c_rt_lib0clear(&___nl__im__16);
#line 277
//clear ___nl__bool__17;
#line 277
c_rt_lib0clear(&___nl__im__18);
#line 277
c_rt_lib0clear(&___nl__im__19);
#line 277
c_rt_lib0clear(&___nl__im__20);
#line 277
c_rt_lib0clear(&___nl__im__21);
#line 277
//clear ___nl__bool__22;
#line 277
//clear ___nl__bool__23;
#line 277
c_rt_lib0clear(&___nl__im__24);
#line 277
c_rt_lib0clear(&___nl__im__25);
#line 277
c_rt_lib0clear(&___nl__im__26);
#line 277
c_rt_lib0clear(&___nl__im__27);
#line 277
c_rt_lib0clear(&___nl__string__28);
#line 277
c_rt_lib0clear(&___nl__string__29);
#line 277
c_rt_lib0clear(&___nl__im__30);
#line 277
//clear ___nl__bool__31;
#line 277
c_rt_lib0clear(&___nl__im__32);
#line 277
c_rt_lib0clear(&___nl__im__33);
#line 277
c_rt_lib0clear(&___nl__im__34);
#line 277
c_rt_lib0clear(&___nl__im__35);
#line 277
//clear ___nl__bool__36;
#line 277
c_rt_lib0clear(&___nl__im__37);
#line 277
c_rt_lib0clear(&___nl__im__38);
#line 277
c_rt_lib0clear(&___nl__im__39);
#line 277
return NULL;
#line 278
goto label_12;
#line 278
label_13:
#line 278
label_12:
#line 279
goto label_10;
#line 279
label_11:
#line 279
label_10:
#line 280
c_rt_lib0copy(&___nl__im__43, ___nl__im__0);
#line 280
c_rt_lib0copy(&___nl__im__44, ___nl__im__6);
#line 280
c_rt_lib0move(&___nl__im__42, hash0get_value(___nl__im__43, ___nl__im__44));
#line 280
c_rt_lib0clear(&___nl__im__43);
#line 280
c_rt_lib0clear(&___nl__im__44);
#line 280
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_const(686)));
#line 280
___nl__bool__40 = c_rt_lib0check_true_native(___nl__im__45);
#line 280
c_rt_lib0clear(&___nl__im__42);
#line 280
c_rt_lib0clear(&___nl__im__43);
#line 280
c_rt_lib0clear(&___nl__im__44);
#line 280
c_rt_lib0clear(&___nl__im__45);
#line 280
___nl__bool__41 = !___nl__bool__40;
#line 280
if(___nl__bool__41){ goto label_16;}
#line 280
___nl__bool__40 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(688));
#line 280
label_16:
#line 280
//clear ___nl__bool__41;
#line 280
c_rt_lib0clear(&___nl__im__42);
#line 280
c_rt_lib0clear(&___nl__im__43);
#line 280
c_rt_lib0clear(&___nl__im__44);
#line 280
c_rt_lib0clear(&___nl__im__45);
#line 280
___nl__bool__40 = !___nl__bool__40;
#line 280
if(___nl__bool__40){ goto label_15;}
#line 281
c_rt_lib0copy(&___nl__im__46, ___nl__im__6);
#line 281
c_rt_lib0copy(&___nl__im__48, ___nl__im__7);
#line 281
c_rt_lib0copy(&___nl__im__49, ___nl__im__16);
#line 281
c_rt_lib0move(&___nl__im__47, generator_c_struct_dependence_sort_priv0join_type(___nl__im__48, ___nl__im__49));
#line 281
c_rt_lib0clear(&___nl__im__48);
#line 281
c_rt_lib0clear(&___nl__im__49);
#line 281
c_rt_lib0copy(&___nl__im__50, ___nl__im__47);
#line 281
c_rt_lib0delete(hash0set_value(___ref___im__3, ___nl__im__46, ___nl__im__50));
#line 281
c_rt_lib0clear(&___nl__im__46);
#line 281
c_rt_lib0clear(&___nl__im__47);
#line 281
c_rt_lib0clear(&___nl__im__48);
#line 281
c_rt_lib0clear(&___nl__im__49);
#line 281
c_rt_lib0clear(&___nl__im__50);
#line 282
c_rt_lib0copy(&___nl__im__51, ___nl__im__4);
#line 282
c_rt_lib0delete(array0push(___ref___im__1, ___nl__im__51));
#line 282
c_rt_lib0clear(&___nl__im__51);
#line 283
c_rt_lib0clear(&___nl__im__0);
#line 283
c_rt_lib0clear(&___nl__im__4);
#line 283
c_rt_lib0clear(&___nl__im__6);
#line 283
c_rt_lib0clear(&___nl__im__7);
#line 283
//clear ___nl__bool__8;
#line 283
c_rt_lib0clear(&___nl__im__9);
#line 283
c_rt_lib0clear(&___nl__im__10);
#line 283
c_rt_lib0clear(&___nl__im__11);
#line 283
c_rt_lib0clear(&___nl__im__12);
#line 283
c_rt_lib0clear(&___nl__im__13);
#line 283
c_rt_lib0clear(&___nl__im__14);
#line 283
c_rt_lib0clear(&___nl__im__15);
#line 283
c_rt_lib0clear(&___nl__im__16);
#line 283
//clear ___nl__bool__17;
#line 283
c_rt_lib0clear(&___nl__im__18);
#line 283
c_rt_lib0clear(&___nl__im__19);
#line 283
c_rt_lib0clear(&___nl__im__20);
#line 283
c_rt_lib0clear(&___nl__im__21);
#line 283
//clear ___nl__bool__22;
#line 283
//clear ___nl__bool__23;
#line 283
c_rt_lib0clear(&___nl__im__24);
#line 283
c_rt_lib0clear(&___nl__im__25);
#line 283
c_rt_lib0clear(&___nl__im__26);
#line 283
c_rt_lib0clear(&___nl__im__27);
#line 283
c_rt_lib0clear(&___nl__string__28);
#line 283
c_rt_lib0clear(&___nl__string__29);
#line 283
c_rt_lib0clear(&___nl__im__30);
#line 283
//clear ___nl__bool__31;
#line 283
c_rt_lib0clear(&___nl__im__32);
#line 283
c_rt_lib0clear(&___nl__im__33);
#line 283
c_rt_lib0clear(&___nl__im__34);
#line 283
c_rt_lib0clear(&___nl__im__35);
#line 283
//clear ___nl__bool__36;
#line 283
c_rt_lib0clear(&___nl__im__37);
#line 283
c_rt_lib0clear(&___nl__im__38);
#line 283
c_rt_lib0clear(&___nl__im__39);
#line 283
//clear ___nl__bool__40;
#line 283
//clear ___nl__bool__41;
#line 283
c_rt_lib0clear(&___nl__im__42);
#line 283
c_rt_lib0clear(&___nl__im__43);
#line 283
c_rt_lib0clear(&___nl__im__44);
#line 283
c_rt_lib0clear(&___nl__im__45);
#line 283
c_rt_lib0clear(&___nl__im__46);
#line 283
c_rt_lib0clear(&___nl__im__47);
#line 283
c_rt_lib0clear(&___nl__im__48);
#line 283
c_rt_lib0clear(&___nl__im__49);
#line 283
c_rt_lib0clear(&___nl__im__50);
#line 283
c_rt_lib0clear(&___nl__im__51);
#line 283
return NULL;
#line 284
goto label_14;
#line 284
label_15:
#line 284
label_14:
#line 285
c_rt_lib0copy(&___nl__im__54, ___nl__im__0);
#line 285
c_rt_lib0copy(&___nl__im__55, ___nl__im__6);
#line 285
c_rt_lib0move(&___nl__im__53, hash0get_value(___nl__im__54, ___nl__im__55));
#line 285
c_rt_lib0clear(&___nl__im__54);
#line 285
c_rt_lib0clear(&___nl__im__55);
#line 285
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(686)));
#line 285
___nl__bool__52 = c_rt_lib0check_true_native(___nl__im__56);
#line 285
c_rt_lib0clear(&___nl__im__53);
#line 285
c_rt_lib0clear(&___nl__im__54);
#line 285
c_rt_lib0clear(&___nl__im__55);
#line 285
c_rt_lib0clear(&___nl__im__56);
#line 285
___nl__bool__52 = !___nl__bool__52;
#line 285
c_rt_lib0clear(&___nl__im__53);
#line 285
c_rt_lib0clear(&___nl__im__54);
#line 285
c_rt_lib0clear(&___nl__im__55);
#line 285
c_rt_lib0clear(&___nl__im__56);
#line 285
___nl__bool__52 = !___nl__bool__52;
#line 285
if(___nl__bool__52){ goto label_18;}
#line 286
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(463)));
#line 287
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(463), ___nl__im__6));
#line 288
goto label_17;
#line 288
label_18:
#line 288
label_17:
#line 289
c_rt_lib0copy(&___nl__im__57, ___nl__im__6);
#line 289
c_rt_lib0copy(&___nl__im__59, ___nl__im__7);
#line 289
c_rt_lib0copy(&___nl__im__60, ___nl__im__30);
#line 289
c_rt_lib0move(&___nl__im__58, generator_c_struct_dependence_sort_priv0join_type(___nl__im__59, ___nl__im__60));
#line 289
c_rt_lib0clear(&___nl__im__59);
#line 289
c_rt_lib0clear(&___nl__im__60);
#line 289
c_rt_lib0copy(&___nl__im__61, ___nl__im__58);
#line 289
c_rt_lib0delete(hash0set_value(___ref___im__2, ___nl__im__57, ___nl__im__61));
#line 289
c_rt_lib0clear(&___nl__im__57);
#line 289
c_rt_lib0clear(&___nl__im__58);
#line 289
c_rt_lib0clear(&___nl__im__59);
#line 289
c_rt_lib0clear(&___nl__im__60);
#line 289
c_rt_lib0clear(&___nl__im__61);
#line 291
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(689));
#line 291
if(___nl__bool__62){ goto label_21;}
#line 291
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(463));
#line 291
label_21:
#line 291
//clear ___nl__bool__63;
#line 291
___nl__bool__62 = !___nl__bool__62;
#line 291
if(___nl__bool__62){ goto label_20;}
#line 292
c_rt_lib0copy(&___nl__im__66, ___nl__im__0);
#line 292
c_rt_lib0copy(&___nl__im__67, ___nl__im__6);
#line 292
c_rt_lib0move(&___nl__im__65, hash0get_value(___nl__im__66, ___nl__im__67));
#line 292
c_rt_lib0clear(&___nl__im__66);
#line 292
c_rt_lib0clear(&___nl__im__67);
#line 292
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_const(684)));
#line 292
c_rt_lib0clear(&___nl__im__65);
#line 292
c_rt_lib0clear(&___nl__im__66);
#line 292
c_rt_lib0clear(&___nl__im__67);
#line 292
___nl__int__69 = 0;
#line 292
___nl__int__70 = 1;
#line 292
___nl__int__71 = c_rt_lib0array_len(___nl__im__64);
#line 292
label_24:
#line 292
___nl__int__73 = ___nl__int__69 >= ___nl__int__71;
#line 292
___nl__bool__72 = ___nl__int__73;
#line 292
if(___nl__bool__72){ goto label_22;}
#line 292
c_rt_lib0move(&___nl__im__74, c_rt_lib0array_get(___nl__im__64, ___nl__int__69));
#line 292
c_rt_lib0copy(&___nl__im__68, ___nl__im__74);
#line 293
c_rt_lib0copy(&___nl__im__75, ___nl__im__0);
#line 293
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_arg(___get_global_const(462), ___nl__im__68));
#line 293
c_rt_lib0copy(&___nl__im__77, ___nl__im__76);
#line 293
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__75, ___ref___im__1, ___ref___im__2, ___ref___im__3, ___nl__im__77, ___ref___bool__5));
#line 293
c_rt_lib0clear(&___nl__im__75);
#line 293
c_rt_lib0clear(&___nl__im__76);
#line 293
c_rt_lib0clear(&___nl__im__77);
#line 293
c_rt_lib0clear(&___nl__im__68);
#line 293
label_23:
#line 294
___nl__int__69 = ___nl__int__69 + ___nl__int__70;
#line 294
goto label_24;
#line 294
label_22:
#line 296
c_rt_lib0copy(&___nl__im__80, ___nl__im__0);
#line 296
c_rt_lib0copy(&___nl__im__81, ___nl__im__6);
#line 296
c_rt_lib0move(&___nl__im__79, hash0get_value(___nl__im__80, ___nl__im__81));
#line 296
c_rt_lib0clear(&___nl__im__80);
#line 296
c_rt_lib0clear(&___nl__im__81);
#line 296
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__79, ___get_global_const(685)));
#line 296
c_rt_lib0clear(&___nl__im__79);
#line 296
c_rt_lib0clear(&___nl__im__80);
#line 296
c_rt_lib0clear(&___nl__im__81);
#line 296
___nl__int__83 = 0;
#line 296
___nl__int__84 = 1;
#line 296
___nl__int__85 = c_rt_lib0array_len(___nl__im__78);
#line 296
label_27:
#line 296
___nl__int__87 = ___nl__int__83 >= ___nl__int__85;
#line 296
___nl__bool__86 = ___nl__int__87;
#line 296
if(___nl__bool__86){ goto label_25;}
#line 296
c_rt_lib0move(&___nl__im__88, c_rt_lib0array_get(___nl__im__78, ___nl__int__83));
#line 296
c_rt_lib0copy(&___nl__im__82, ___nl__im__88);
#line 297
c_rt_lib0copy(&___nl__im__89, ___nl__im__0);
#line 297
c_rt_lib0move(&___nl__im__90, c_rt_lib0ov_mk_arg(___get_global_const(463), ___nl__im__82));
#line 297
c_rt_lib0copy(&___nl__im__91, ___nl__im__90);
#line 297
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__89, ___ref___im__1, ___ref___im__2, ___ref___im__3, ___nl__im__91, ___ref___bool__5));
#line 297
c_rt_lib0clear(&___nl__im__89);
#line 297
c_rt_lib0clear(&___nl__im__90);
#line 297
c_rt_lib0clear(&___nl__im__91);
#line 297
c_rt_lib0clear(&___nl__im__82);
#line 297
label_26:
#line 298
___nl__int__83 = ___nl__int__83 + ___nl__int__84;
#line 298
goto label_27;
#line 298
label_25:
#line 299
goto label_19;
#line 299
label_20:
#line 299
label_19:
#line 301
c_rt_lib0copy(&___nl__im__92, ___nl__im__6);
#line 301
c_rt_lib0copy(&___nl__im__94, ___nl__im__7);
#line 301
c_rt_lib0copy(&___nl__im__95, ___nl__im__16);
#line 301
c_rt_lib0move(&___nl__im__93, generator_c_struct_dependence_sort_priv0join_type(___nl__im__94, ___nl__im__95));
#line 301
c_rt_lib0clear(&___nl__im__94);
#line 301
c_rt_lib0clear(&___nl__im__95);
#line 301
c_rt_lib0copy(&___nl__im__96, ___nl__im__93);
#line 301
c_rt_lib0delete(hash0set_value(___ref___im__3, ___nl__im__92, ___nl__im__96));
#line 301
c_rt_lib0clear(&___nl__im__92);
#line 301
c_rt_lib0clear(&___nl__im__93);
#line 301
c_rt_lib0clear(&___nl__im__94);
#line 301
c_rt_lib0clear(&___nl__im__95);
#line 301
c_rt_lib0clear(&___nl__im__96);
#line 302
c_rt_lib0copy(&___nl__im__98, ___nl__im__6);
#line 302
c_rt_lib0copy(&___nl__im__100, ___nl__im__7);
#line 302
c_rt_lib0copy(&___nl__im__101, ___nl__im__16);
#line 302
c_rt_lib0move(&___nl__im__99, generator_c_struct_dependence_sort_priv0split_type(___nl__im__100, ___nl__im__101));
#line 302
c_rt_lib0clear(&___nl__im__100);
#line 302
c_rt_lib0clear(&___nl__im__101);
#line 302
c_rt_lib0copy(&___nl__im__102, ___nl__im__99);
#line 302
c_rt_lib0move(&___nl__im__97, generator_c_struct_dependence_sort_priv0type_to_var(___nl__im__98, ___nl__im__102));
#line 302
c_rt_lib0clear(&___nl__im__98);
#line 302
c_rt_lib0clear(&___nl__im__99);
#line 302
c_rt_lib0clear(&___nl__im__100);
#line 302
c_rt_lib0clear(&___nl__im__101);
#line 302
c_rt_lib0clear(&___nl__im__102);
#line 302
c_rt_lib0copy(&___nl__im__103, ___nl__im__97);
#line 302
c_rt_lib0delete(array0push(___ref___im__1, ___nl__im__103));
#line 302
c_rt_lib0clear(&___nl__im__97);
#line 302
c_rt_lib0clear(&___nl__im__98);
#line 302
c_rt_lib0clear(&___nl__im__99);
#line 302
c_rt_lib0clear(&___nl__im__100);
#line 302
c_rt_lib0clear(&___nl__im__101);
#line 302
c_rt_lib0clear(&___nl__im__102);
#line 302
c_rt_lib0clear(&___nl__im__103);
#line 303
c_rt_lib0copy(&___nl__im__104, ___nl__im__6);
#line 303
c_rt_lib0delete(hash0delete(___ref___im__2, ___nl__im__104));
#line 303
c_rt_lib0clear(&___nl__im__104);
#line 303
c_rt_lib0clear(&___nl__im__0);
#line 303
c_rt_lib0clear(&___nl__im__4);
#line 303
c_rt_lib0clear(&___nl__im__6);
#line 303
c_rt_lib0clear(&___nl__im__7);
#line 303
//clear ___nl__bool__8;
#line 303
c_rt_lib0clear(&___nl__im__9);
#line 303
c_rt_lib0clear(&___nl__im__10);
#line 303
c_rt_lib0clear(&___nl__im__11);
#line 303
c_rt_lib0clear(&___nl__im__12);
#line 303
c_rt_lib0clear(&___nl__im__13);
#line 303
c_rt_lib0clear(&___nl__im__14);
#line 303
c_rt_lib0clear(&___nl__im__15);
#line 303
c_rt_lib0clear(&___nl__im__16);
#line 303
//clear ___nl__bool__17;
#line 303
c_rt_lib0clear(&___nl__im__18);
#line 303
c_rt_lib0clear(&___nl__im__19);
#line 303
c_rt_lib0clear(&___nl__im__20);
#line 303
c_rt_lib0clear(&___nl__im__21);
#line 303
//clear ___nl__bool__22;
#line 303
//clear ___nl__bool__23;
#line 303
c_rt_lib0clear(&___nl__im__24);
#line 303
c_rt_lib0clear(&___nl__im__25);
#line 303
c_rt_lib0clear(&___nl__im__26);
#line 303
c_rt_lib0clear(&___nl__im__27);
#line 303
c_rt_lib0clear(&___nl__string__28);
#line 303
c_rt_lib0clear(&___nl__string__29);
#line 303
c_rt_lib0clear(&___nl__im__30);
#line 303
//clear ___nl__bool__31;
#line 303
c_rt_lib0clear(&___nl__im__32);
#line 303
c_rt_lib0clear(&___nl__im__33);
#line 303
c_rt_lib0clear(&___nl__im__34);
#line 303
c_rt_lib0clear(&___nl__im__35);
#line 303
//clear ___nl__bool__36;
#line 303
c_rt_lib0clear(&___nl__im__37);
#line 303
c_rt_lib0clear(&___nl__im__38);
#line 303
c_rt_lib0clear(&___nl__im__39);
#line 303
//clear ___nl__bool__40;
#line 303
//clear ___nl__bool__41;
#line 303
c_rt_lib0clear(&___nl__im__42);
#line 303
c_rt_lib0clear(&___nl__im__43);
#line 303
c_rt_lib0clear(&___nl__im__44);
#line 303
c_rt_lib0clear(&___nl__im__45);
#line 303
c_rt_lib0clear(&___nl__im__46);
#line 303
c_rt_lib0clear(&___nl__im__47);
#line 303
c_rt_lib0clear(&___nl__im__48);
#line 303
c_rt_lib0clear(&___nl__im__49);
#line 303
c_rt_lib0clear(&___nl__im__50);
#line 303
c_rt_lib0clear(&___nl__im__51);
#line 303
//clear ___nl__bool__52;
#line 303
c_rt_lib0clear(&___nl__im__53);
#line 303
c_rt_lib0clear(&___nl__im__54);
#line 303
c_rt_lib0clear(&___nl__im__55);
#line 303
c_rt_lib0clear(&___nl__im__56);
#line 303
c_rt_lib0clear(&___nl__im__57);
#line 303
c_rt_lib0clear(&___nl__im__58);
#line 303
c_rt_lib0clear(&___nl__im__59);
#line 303
c_rt_lib0clear(&___nl__im__60);
#line 303
c_rt_lib0clear(&___nl__im__61);
#line 303
//clear ___nl__bool__62;
#line 303
//clear ___nl__bool__63;
#line 303
c_rt_lib0clear(&___nl__im__64);
#line 303
c_rt_lib0clear(&___nl__im__65);
#line 303
c_rt_lib0clear(&___nl__im__66);
#line 303
c_rt_lib0clear(&___nl__im__67);
#line 303
c_rt_lib0clear(&___nl__im__68);
#line 303
//clear ___nl__int__69;
#line 303
//clear ___nl__int__70;
#line 303
//clear ___nl__int__71;
#line 303
//clear ___nl__bool__72;
#line 303
//clear ___nl__int__73;
#line 303
c_rt_lib0clear(&___nl__im__74);
#line 303
c_rt_lib0clear(&___nl__im__75);
#line 303
c_rt_lib0clear(&___nl__im__76);
#line 303
c_rt_lib0clear(&___nl__im__77);
#line 303
c_rt_lib0clear(&___nl__im__78);
#line 303
c_rt_lib0clear(&___nl__im__79);
#line 303
c_rt_lib0clear(&___nl__im__80);
#line 303
c_rt_lib0clear(&___nl__im__81);
#line 303
c_rt_lib0clear(&___nl__im__82);
#line 303
//clear ___nl__int__83;
#line 303
//clear ___nl__int__84;
#line 303
//clear ___nl__int__85;
#line 303
//clear ___nl__bool__86;
#line 303
//clear ___nl__int__87;
#line 303
c_rt_lib0clear(&___nl__im__88);
#line 303
c_rt_lib0clear(&___nl__im__89);
#line 303
c_rt_lib0clear(&___nl__im__90);
#line 303
c_rt_lib0clear(&___nl__im__91);
#line 303
c_rt_lib0clear(&___nl__im__92);
#line 303
c_rt_lib0clear(&___nl__im__93);
#line 303
c_rt_lib0clear(&___nl__im__94);
#line 303
c_rt_lib0clear(&___nl__im__95);
#line 303
c_rt_lib0clear(&___nl__im__96);
#line 303
c_rt_lib0clear(&___nl__im__97);
#line 303
c_rt_lib0clear(&___nl__im__98);
#line 303
c_rt_lib0clear(&___nl__im__99);
#line 303
c_rt_lib0clear(&___nl__im__100);
#line 303
c_rt_lib0clear(&___nl__im__101);
#line 303
c_rt_lib0clear(&___nl__im__102);
#line 303
c_rt_lib0clear(&___nl__im__103);
#line 303
c_rt_lib0clear(&___nl__im__104);
#line 303
return NULL;
}

generator_c_struct_dependence_sort0result_t0type generator_c_struct_dependence_sort_priv0sort_graph(generator_c_struct_dependence_sort0graph0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
bool  ___nl__bool__35 = false;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
#line 308
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 309
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 310
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 311
___nl__bool__4 = false;
#line 312
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__0));
#line 312
label_3:
#line 312
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 312
if(___nl__bool__6){ goto label_1;}
#line 312
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 312
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__5));
#line 313
c_rt_lib0copy(&___nl__im__9, ___nl__im__0);
#line 313
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(462), ___nl__im__5));
#line 313
c_rt_lib0copy(&___nl__im__11, ___nl__im__10);
#line 313
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__9, &___nl__im__1, &___nl__im__2, &___nl__im__3, ___nl__im__11, &___nl__bool__4));
#line 313
c_rt_lib0clear(&___nl__im__9);
#line 313
c_rt_lib0clear(&___nl__im__10);
#line 313
c_rt_lib0clear(&___nl__im__11);
#line 313
label_2:
#line 314
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 314
goto label_3;
#line 314
label_1:
#line 315
c_rt_lib0move(&___nl__im__15, c_rt_lib0init_iter(___nl__im__0));
#line 315
label_6:
#line 315
___nl__bool__13 = c_rt_lib0is_end_hash(___nl__im__15);
#line 315
if(___nl__bool__13){ goto label_4;}
#line 315
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_key_iter(___nl__im__15));
#line 315
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__12));
#line 316
c_rt_lib0copy(&___nl__im__16, ___nl__im__0);
#line 316
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(461), ___nl__im__12));
#line 316
c_rt_lib0copy(&___nl__im__18, ___nl__im__17);
#line 316
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__16, &___nl__im__1, &___nl__im__2, &___nl__im__3, ___nl__im__18, &___nl__bool__4));
#line 316
c_rt_lib0clear(&___nl__im__16);
#line 316
c_rt_lib0clear(&___nl__im__17);
#line 316
c_rt_lib0clear(&___nl__im__18);
#line 316
label_5:
#line 317
c_rt_lib0move(&___nl__im__15, c_rt_lib0next_iter(___nl__im__15));
#line 317
goto label_6;
#line 317
label_4:
#line 318
___nl__bool__19 = ___nl__bool__4;
#line 318
___nl__bool__19 = !___nl__bool__19;
#line 318
if(___nl__bool__19){ goto label_8;}
#line 319
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(459)));
#line 319
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 319
c_rt_lib0clear(&___nl__im__0);
#line 319
c_rt_lib0clear(&___nl__im__1);
#line 319
c_rt_lib0clear(&___nl__im__2);
#line 319
c_rt_lib0clear(&___nl__im__3);
#line 319
//clear ___nl__bool__4;
#line 319
c_rt_lib0clear(&___nl__im__5);
#line 319
//clear ___nl__bool__6;
#line 319
c_rt_lib0clear(&___nl__im__7);
#line 319
c_rt_lib0clear(&___nl__im__8);
#line 319
c_rt_lib0clear(&___nl__im__9);
#line 319
c_rt_lib0clear(&___nl__im__10);
#line 319
c_rt_lib0clear(&___nl__im__11);
#line 319
c_rt_lib0clear(&___nl__im__12);
#line 319
//clear ___nl__bool__13;
#line 319
c_rt_lib0clear(&___nl__im__14);
#line 319
c_rt_lib0clear(&___nl__im__15);
#line 319
c_rt_lib0clear(&___nl__im__16);
#line 319
c_rt_lib0clear(&___nl__im__17);
#line 319
c_rt_lib0clear(&___nl__im__18);
#line 319
//clear ___nl__bool__19;
#line 319
c_rt_lib0clear(&___nl__im__21);
#line 319
return ___nl__im__20;
#line 320
goto label_7;
#line 320
label_8:
#line 320
label_7:
#line 321
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 322
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(0));
#line 323
c_rt_lib0move(&___nl__im__27, c_rt_lib0init_iter(___nl__im__0));
#line 323
label_11:
#line 323
___nl__bool__25 = c_rt_lib0is_end_hash(___nl__im__27);
#line 323
if(___nl__bool__25){ goto label_9;}
#line 323
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_key_iter(___nl__im__27));
#line 323
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__24));
#line 324
c_rt_lib0copy(&___nl__im__28, ___nl__im__24);
#line 324
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(96)));
#line 324
c_rt_lib0copy(&___nl__im__30, ___nl__im__29);
#line 324
c_rt_lib0delete(hash0set_value(&___nl__im__23, ___nl__im__28, ___nl__im__30));
#line 324
c_rt_lib0clear(&___nl__im__28);
#line 324
c_rt_lib0clear(&___nl__im__29);
#line 324
c_rt_lib0clear(&___nl__im__30);
#line 324
label_10:
#line 325
c_rt_lib0move(&___nl__im__27, c_rt_lib0next_iter(___nl__im__27));
#line 325
goto label_11;
#line 325
label_9:
#line 326
___nl__int__32 = 0;
#line 326
___nl__int__33 = 1;
#line 326
___nl__int__34 = c_rt_lib0array_len(___nl__im__1);
#line 326
label_14:
#line 326
___nl__int__36 = ___nl__int__32 >= ___nl__int__34;
#line 326
___nl__bool__35 = ___nl__int__36;
#line 326
if(___nl__bool__35){ goto label_12;}
#line 326
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_get(___nl__im__1, ___nl__int__32));
#line 326
c_rt_lib0copy(&___nl__im__31, ___nl__im__37);
#line 327
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__31, ___get_global_const(463));
#line 327
if(___nl__bool__38){ goto label_16;}
#line 329
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__31, ___get_global_const(462));
#line 329
if(___nl__bool__38){ goto label_17;}
#line 331
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__31, ___get_global_const(461));
#line 331
if(___nl__bool__38){ goto label_18;}
#line 331
c_rt_lib0move(&___nl__im__39,___get_global_const(16));
#line 331
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_mk(2, ___nl__im__39, ___nl__im__31));
#line 331
nl_die_arg(___nl__im__39);
#line 327
label_16:
#line 327
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__31, ___get_global_const(463)));
#line 327
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 328
c_rt_lib0copy(&___nl__im__44, ___nl__im__23);
#line 328
c_rt_lib0copy(&___nl__im__45, ___nl__im__40);
#line 328
c_rt_lib0move(&___nl__im__43, hash0get_value(___nl__im__44, ___nl__im__45));
#line 328
c_rt_lib0clear(&___nl__im__44);
#line 328
c_rt_lib0clear(&___nl__im__45);
#line 328
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_const(463)));
#line 328
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_mk(3, ___get_global_const(121), ___nl__im__40, ___get_global_const(464), ___nl__im__43, ___get_global_const(460), ___nl__im__46));
#line 328
c_rt_lib0clear(&___nl__im__43);
#line 328
c_rt_lib0clear(&___nl__im__44);
#line 328
c_rt_lib0clear(&___nl__im__45);
#line 328
c_rt_lib0clear(&___nl__im__46);
#line 328
c_rt_lib0copy(&___nl__im__47, ___nl__im__42);
#line 328
c_rt_lib0delete(array0push(&___nl__im__22, ___nl__im__47));
#line 328
c_rt_lib0clear(&___nl__im__42);
#line 328
c_rt_lib0clear(&___nl__im__43);
#line 328
c_rt_lib0clear(&___nl__im__44);
#line 328
c_rt_lib0clear(&___nl__im__45);
#line 328
c_rt_lib0clear(&___nl__im__46);
#line 328
c_rt_lib0clear(&___nl__im__47);
#line 329
goto label_15;
#line 329
label_17:
#line 329
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__31, ___get_global_const(462)));
#line 329
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 330
c_rt_lib0copy(&___nl__im__52, ___nl__im__23);
#line 330
c_rt_lib0copy(&___nl__im__53, ___nl__im__48);
#line 330
c_rt_lib0move(&___nl__im__51, hash0get_value(___nl__im__52, ___nl__im__53));
#line 330
c_rt_lib0clear(&___nl__im__52);
#line 330
c_rt_lib0clear(&___nl__im__53);
#line 330
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_none(___get_global_const(462)));
#line 330
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_mk(3, ___get_global_const(121), ___nl__im__48, ___get_global_const(464), ___nl__im__51, ___get_global_const(460), ___nl__im__54));
#line 330
c_rt_lib0clear(&___nl__im__51);
#line 330
c_rt_lib0clear(&___nl__im__52);
#line 330
c_rt_lib0clear(&___nl__im__53);
#line 330
c_rt_lib0clear(&___nl__im__54);
#line 330
c_rt_lib0copy(&___nl__im__55, ___nl__im__50);
#line 330
c_rt_lib0delete(array0push(&___nl__im__22, ___nl__im__55));
#line 330
c_rt_lib0clear(&___nl__im__50);
#line 330
c_rt_lib0clear(&___nl__im__51);
#line 330
c_rt_lib0clear(&___nl__im__52);
#line 330
c_rt_lib0clear(&___nl__im__53);
#line 330
c_rt_lib0clear(&___nl__im__54);
#line 330
c_rt_lib0clear(&___nl__im__55);
#line 331
goto label_15;
#line 331
label_18:
#line 331
c_rt_lib0move(&___nl__im__57, c_rt_lib0priv_as(___nl__im__31, ___get_global_const(461)));
#line 331
c_rt_lib0copy(&___nl__im__56, ___nl__im__57);
#line 332
c_rt_lib0copy(&___nl__im__60, ___nl__im__23);
#line 332
c_rt_lib0copy(&___nl__im__61, ___nl__im__56);
#line 332
c_rt_lib0move(&___nl__im__59, hash0get_value(___nl__im__60, ___nl__im__61));
#line 332
c_rt_lib0clear(&___nl__im__60);
#line 332
c_rt_lib0clear(&___nl__im__61);
#line 332
c_rt_lib0move(&___nl__im__62, c_rt_lib0ov_mk_none(___get_global_const(461)));
#line 332
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(3, ___get_global_const(121), ___nl__im__56, ___get_global_const(464), ___nl__im__59, ___get_global_const(460), ___nl__im__62));
#line 332
c_rt_lib0clear(&___nl__im__59);
#line 332
c_rt_lib0clear(&___nl__im__60);
#line 332
c_rt_lib0clear(&___nl__im__61);
#line 332
c_rt_lib0clear(&___nl__im__62);
#line 332
c_rt_lib0copy(&___nl__im__63, ___nl__im__58);
#line 332
c_rt_lib0delete(array0push(&___nl__im__22, ___nl__im__63));
#line 332
c_rt_lib0clear(&___nl__im__58);
#line 332
c_rt_lib0clear(&___nl__im__59);
#line 332
c_rt_lib0clear(&___nl__im__60);
#line 332
c_rt_lib0clear(&___nl__im__61);
#line 332
c_rt_lib0clear(&___nl__im__62);
#line 332
c_rt_lib0clear(&___nl__im__63);
#line 333
goto label_15;
#line 333
label_15:
#line 333
c_rt_lib0clear(&___nl__im__31);
#line 333
label_13:
#line 334
___nl__int__32 = ___nl__int__32 + ___nl__int__33;
#line 334
goto label_14;
#line 334
label_12:
#line 335
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_arg(___get_global_const(458), ___nl__im__22));
#line 335
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 335
c_rt_lib0clear(&___nl__im__0);
#line 335
c_rt_lib0clear(&___nl__im__1);
#line 335
c_rt_lib0clear(&___nl__im__2);
#line 335
c_rt_lib0clear(&___nl__im__3);
#line 335
//clear ___nl__bool__4;
#line 335
c_rt_lib0clear(&___nl__im__5);
#line 335
//clear ___nl__bool__6;
#line 335
c_rt_lib0clear(&___nl__im__7);
#line 335
c_rt_lib0clear(&___nl__im__8);
#line 335
c_rt_lib0clear(&___nl__im__9);
#line 335
c_rt_lib0clear(&___nl__im__10);
#line 335
c_rt_lib0clear(&___nl__im__11);
#line 335
c_rt_lib0clear(&___nl__im__12);
#line 335
//clear ___nl__bool__13;
#line 335
c_rt_lib0clear(&___nl__im__14);
#line 335
c_rt_lib0clear(&___nl__im__15);
#line 335
c_rt_lib0clear(&___nl__im__16);
#line 335
c_rt_lib0clear(&___nl__im__17);
#line 335
c_rt_lib0clear(&___nl__im__18);
#line 335
//clear ___nl__bool__19;
#line 335
c_rt_lib0clear(&___nl__im__20);
#line 335
c_rt_lib0clear(&___nl__im__21);
#line 335
c_rt_lib0clear(&___nl__im__22);
#line 335
c_rt_lib0clear(&___nl__im__23);
#line 335
c_rt_lib0clear(&___nl__im__24);
#line 335
//clear ___nl__bool__25;
#line 335
c_rt_lib0clear(&___nl__im__26);
#line 335
c_rt_lib0clear(&___nl__im__27);
#line 335
c_rt_lib0clear(&___nl__im__28);
#line 335
c_rt_lib0clear(&___nl__im__29);
#line 335
c_rt_lib0clear(&___nl__im__30);
#line 335
c_rt_lib0clear(&___nl__im__31);
#line 335
//clear ___nl__int__32;
#line 335
//clear ___nl__int__33;
#line 335
//clear ___nl__int__34;
#line 335
//clear ___nl__bool__35;
#line 335
//clear ___nl__int__36;
#line 335
c_rt_lib0clear(&___nl__im__37);
#line 335
//clear ___nl__bool__38;
#line 335
c_rt_lib0clear(&___nl__im__39);
#line 335
c_rt_lib0clear(&___nl__im__40);
#line 335
c_rt_lib0clear(&___nl__im__41);
#line 335
c_rt_lib0clear(&___nl__im__42);
#line 335
c_rt_lib0clear(&___nl__im__43);
#line 335
c_rt_lib0clear(&___nl__im__44);
#line 335
c_rt_lib0clear(&___nl__im__45);
#line 335
c_rt_lib0clear(&___nl__im__46);
#line 335
c_rt_lib0clear(&___nl__im__47);
#line 335
c_rt_lib0clear(&___nl__im__48);
#line 335
c_rt_lib0clear(&___nl__im__49);
#line 335
c_rt_lib0clear(&___nl__im__50);
#line 335
c_rt_lib0clear(&___nl__im__51);
#line 335
c_rt_lib0clear(&___nl__im__52);
#line 335
c_rt_lib0clear(&___nl__im__53);
#line 335
c_rt_lib0clear(&___nl__im__54);
#line 335
c_rt_lib0clear(&___nl__im__55);
#line 335
c_rt_lib0clear(&___nl__im__56);
#line 335
c_rt_lib0clear(&___nl__im__57);
#line 335
c_rt_lib0clear(&___nl__im__58);
#line 335
c_rt_lib0clear(&___nl__im__59);
#line 335
c_rt_lib0clear(&___nl__im__60);
#line 335
c_rt_lib0clear(&___nl__im__61);
#line 335
c_rt_lib0clear(&___nl__im__62);
#line 335
c_rt_lib0clear(&___nl__im__63);
#line 335
c_rt_lib0clear(&___nl__im__65);
#line 335
return ___nl__im__64;
#line 335
c_rt_lib0clear(&___nl__im__0);
#line 335
c_rt_lib0clear(&___nl__im__1);
#line 335
c_rt_lib0clear(&___nl__im__2);
#line 335
c_rt_lib0clear(&___nl__im__3);
#line 335
//clear ___nl__bool__4;
#line 335
c_rt_lib0clear(&___nl__im__5);
#line 335
//clear ___nl__bool__6;
#line 335
c_rt_lib0clear(&___nl__im__7);
#line 335
c_rt_lib0clear(&___nl__im__8);
#line 335
c_rt_lib0clear(&___nl__im__9);
#line 335
c_rt_lib0clear(&___nl__im__10);
#line 335
c_rt_lib0clear(&___nl__im__11);
#line 335
c_rt_lib0clear(&___nl__im__12);
#line 335
//clear ___nl__bool__13;
#line 335
c_rt_lib0clear(&___nl__im__14);
#line 335
c_rt_lib0clear(&___nl__im__15);
#line 335
c_rt_lib0clear(&___nl__im__16);
#line 335
c_rt_lib0clear(&___nl__im__17);
#line 335
c_rt_lib0clear(&___nl__im__18);
#line 335
//clear ___nl__bool__19;
#line 335
c_rt_lib0clear(&___nl__im__20);
#line 335
c_rt_lib0clear(&___nl__im__21);
#line 335
c_rt_lib0clear(&___nl__im__22);
#line 335
c_rt_lib0clear(&___nl__im__23);
#line 335
c_rt_lib0clear(&___nl__im__24);
#line 335
//clear ___nl__bool__25;
#line 335
c_rt_lib0clear(&___nl__im__26);
#line 335
c_rt_lib0clear(&___nl__im__27);
#line 335
c_rt_lib0clear(&___nl__im__28);
#line 335
c_rt_lib0clear(&___nl__im__29);
#line 335
c_rt_lib0clear(&___nl__im__30);
#line 335
c_rt_lib0clear(&___nl__im__31);
#line 335
//clear ___nl__int__32;
#line 335
//clear ___nl__int__33;
#line 335
//clear ___nl__int__34;
#line 335
//clear ___nl__bool__35;
#line 335
//clear ___nl__int__36;
#line 335
c_rt_lib0clear(&___nl__im__37);
#line 335
//clear ___nl__bool__38;
#line 335
c_rt_lib0clear(&___nl__im__39);
#line 335
c_rt_lib0clear(&___nl__im__40);
#line 335
c_rt_lib0clear(&___nl__im__41);
#line 335
c_rt_lib0clear(&___nl__im__42);
#line 335
c_rt_lib0clear(&___nl__im__43);
#line 335
c_rt_lib0clear(&___nl__im__44);
#line 335
c_rt_lib0clear(&___nl__im__45);
#line 335
c_rt_lib0clear(&___nl__im__46);
#line 335
c_rt_lib0clear(&___nl__im__47);
#line 335
c_rt_lib0clear(&___nl__im__48);
#line 335
c_rt_lib0clear(&___nl__im__49);
#line 335
c_rt_lib0clear(&___nl__im__50);
#line 335
c_rt_lib0clear(&___nl__im__51);
#line 335
c_rt_lib0clear(&___nl__im__52);
#line 335
c_rt_lib0clear(&___nl__im__53);
#line 335
c_rt_lib0clear(&___nl__im__54);
#line 335
c_rt_lib0clear(&___nl__im__55);
#line 335
c_rt_lib0clear(&___nl__im__56);
#line 335
c_rt_lib0clear(&___nl__im__57);
#line 335
c_rt_lib0clear(&___nl__im__58);
#line 335
c_rt_lib0clear(&___nl__im__59);
#line 335
c_rt_lib0clear(&___nl__im__60);
#line 335
c_rt_lib0clear(&___nl__im__61);
#line 335
c_rt_lib0clear(&___nl__im__62);
#line 335
c_rt_lib0clear(&___nl__im__63);
#line 335
c_rt_lib0clear(&___nl__im__64);
#line 335
c_rt_lib0clear(&___nl__im__65);
#line 335
return NULL;
}

ImmT  generator_c_struct_dependence_sort_priv0anon_add(tct0meta_type0type ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
#line 339
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 339
if(___nl__bool__2){ goto label_5;}
#line 339
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 339
label_5:
#line 339
//clear ___nl__bool__5;
#line 339
if(___nl__bool__2){ goto label_4;}
#line 339
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 339
label_4:
#line 339
//clear ___nl__bool__4;
#line 339
//clear ___nl__bool__5;
#line 339
if(___nl__bool__2){ goto label_3;}
#line 339
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 339
label_3:
#line 339
//clear ___nl__bool__3;
#line 339
//clear ___nl__bool__4;
#line 339
//clear ___nl__bool__5;
#line 339
___nl__bool__2 = !___nl__bool__2;
#line 339
if(___nl__bool__2){ goto label_2;}
#line 340
c_rt_lib0copy(&___nl__im__7, ___nl__im__0);
#line 340
c_rt_lib0move(&___nl__im__6, anon_naming0get_anon_name(___nl__im__7));
#line 340
c_rt_lib0clear(&___nl__im__7);
#line 341
c_rt_lib0copy(&___nl__im__9, (*___ref___im__1));
#line 341
c_rt_lib0copy(&___nl__im__10, ___nl__im__6);
#line 341
___nl__bool__8 = hash0has_key(___nl__im__9, ___nl__im__10);
#line 341
c_rt_lib0clear(&___nl__im__9);
#line 341
c_rt_lib0clear(&___nl__im__10);
#line 341
___nl__bool__8 = !___nl__bool__8;
#line 341
if(___nl__bool__8){ goto label_7;}
#line 342
c_rt_lib0clear(&___nl__im__0);
#line 342
//clear ___nl__bool__2;
#line 342
//clear ___nl__bool__3;
#line 342
//clear ___nl__bool__4;
#line 342
//clear ___nl__bool__5;
#line 342
c_rt_lib0clear(&___nl__im__6);
#line 342
c_rt_lib0clear(&___nl__im__7);
#line 342
//clear ___nl__bool__8;
#line 342
c_rt_lib0clear(&___nl__im__9);
#line 342
c_rt_lib0clear(&___nl__im__10);
#line 342
return NULL;
#line 343
goto label_6;
#line 343
label_7:
#line 343
label_6:
#line 344
c_rt_lib0copy(&___nl__im__11, ___nl__im__6);
#line 344
c_rt_lib0copy(&___nl__im__12, ___nl__im__0);
#line 344
c_rt_lib0delete(hash0set_value(___ref___im__1, ___nl__im__11, ___nl__im__12));
#line 344
c_rt_lib0clear(&___nl__im__11);
#line 344
c_rt_lib0clear(&___nl__im__12);
#line 345
goto label_1;
#line 345
label_2:
#line 345
label_1:
#line 345
c_rt_lib0clear(&___nl__im__0);
#line 345
//clear ___nl__bool__2;
#line 345
//clear ___nl__bool__3;
#line 345
//clear ___nl__bool__4;
#line 345
//clear ___nl__bool__5;
#line 345
c_rt_lib0clear(&___nl__im__6);
#line 345
c_rt_lib0clear(&___nl__im__7);
#line 345
//clear ___nl__bool__8;
#line 345
c_rt_lib0clear(&___nl__im__9);
#line 345
c_rt_lib0clear(&___nl__im__10);
#line 345
c_rt_lib0clear(&___nl__im__11);
#line 345
c_rt_lib0clear(&___nl__im__12);
#line 345
return NULL;
}

ImmT  generator_c_struct_dependence_sort_priv0deep_anon_add(tct0meta_type0type ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
#line 349
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 349
___nl__bool__2 = !___nl__bool__2;
#line 349
if(___nl__bool__2){ goto label_2;}
#line 350
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 350
c_rt_lib0move(&___nl__im__7, c_rt_lib0init_iter(___nl__im__3));
#line 350
label_5:
#line 350
___nl__bool__5 = c_rt_lib0is_end_hash(___nl__im__7);
#line 350
if(___nl__bool__5){ goto label_3;}
#line 350
c_rt_lib0move(&___nl__im__4, c_rt_lib0get_key_iter(___nl__im__7));
#line 350
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value(___nl__im__3, ___nl__im__4));
#line 351
c_rt_lib0copy(&___nl__im__8, ___nl__im__6);
#line 351
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__8, ___ref___im__1));
#line 351
c_rt_lib0clear(&___nl__im__8);
#line 351
label_4:
#line 352
c_rt_lib0move(&___nl__im__7, c_rt_lib0next_iter(___nl__im__7));
#line 352
goto label_5;
#line 352
label_3:
#line 353
c_rt_lib0copy(&___nl__im__9, ___nl__im__0);
#line 353
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__9, ___ref___im__1));
#line 353
c_rt_lib0clear(&___nl__im__9);
#line 354
goto label_1;
#line 354
label_2:
#line 354
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 354
___nl__bool__2 = !___nl__bool__2;
#line 354
if(___nl__bool__2){ goto label_6;}
#line 355
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 355
c_rt_lib0copy(&___nl__im__11, ___nl__im__10);
#line 355
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__11, ___ref___im__1));
#line 355
c_rt_lib0clear(&___nl__im__10);
#line 355
c_rt_lib0clear(&___nl__im__11);
#line 356
c_rt_lib0copy(&___nl__im__12, ___nl__im__0);
#line 356
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__12, ___ref___im__1));
#line 356
c_rt_lib0clear(&___nl__im__12);
#line 357
goto label_1;
#line 357
label_6:
#line 357
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 357
___nl__bool__2 = !___nl__bool__2;
#line 357
if(___nl__bool__2){ goto label_7;}
#line 358
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 358
c_rt_lib0move(&___nl__im__17, c_rt_lib0init_iter(___nl__im__13));
#line 358
label_10:
#line 358
___nl__bool__15 = c_rt_lib0is_end_hash(___nl__im__17);
#line 358
if(___nl__bool__15){ goto label_8;}
#line 358
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_key_iter(___nl__im__17));
#line 358
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value(___nl__im__13, ___nl__im__14));
#line 359
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(28));
#line 359
if(___nl__bool__18){ goto label_12;}
#line 361
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(29));
#line 361
if(___nl__bool__18){ goto label_13;}
#line 361
c_rt_lib0move(&___nl__im__19,___get_global_const(16));
#line 361
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__16));
#line 361
nl_die_arg(___nl__im__19);
#line 359
label_12:
#line 359
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(28)));
#line 359
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 360
c_rt_lib0copy(&___nl__im__22, ___nl__im__20);
#line 360
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__22, ___ref___im__1));
#line 360
c_rt_lib0clear(&___nl__im__22);
#line 361
goto label_11;
#line 361
label_13:
#line 362
goto label_11;
#line 362
label_11:
#line 362
label_9:
#line 363
c_rt_lib0move(&___nl__im__17, c_rt_lib0next_iter(___nl__im__17));
#line 363
goto label_10;
#line 363
label_8:
#line 364
c_rt_lib0copy(&___nl__im__23, ___nl__im__0);
#line 364
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__23, ___ref___im__1));
#line 364
c_rt_lib0clear(&___nl__im__23);
#line 365
goto label_1;
#line 365
label_7:
#line 365
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 365
___nl__bool__2 = !___nl__bool__2;
#line 365
if(___nl__bool__2){ goto label_14;}
#line 366
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 366
c_rt_lib0copy(&___nl__im__25, ___nl__im__24);
#line 366
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__25, ___ref___im__1));
#line 366
c_rt_lib0clear(&___nl__im__24);
#line 366
c_rt_lib0clear(&___nl__im__25);
#line 367
c_rt_lib0copy(&___nl__im__26, ___nl__im__0);
#line 367
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__26, ___ref___im__1));
#line 367
c_rt_lib0clear(&___nl__im__26);
#line 368
goto label_1;
#line 368
label_14:
#line 368
label_1:
#line 368
c_rt_lib0clear(&___nl__im__0);
#line 368
//clear ___nl__bool__2;
#line 368
c_rt_lib0clear(&___nl__im__3);
#line 368
c_rt_lib0clear(&___nl__im__4);
#line 368
//clear ___nl__bool__5;
#line 368
c_rt_lib0clear(&___nl__im__6);
#line 368
c_rt_lib0clear(&___nl__im__7);
#line 368
c_rt_lib0clear(&___nl__im__8);
#line 368
c_rt_lib0clear(&___nl__im__9);
#line 368
c_rt_lib0clear(&___nl__im__10);
#line 368
c_rt_lib0clear(&___nl__im__11);
#line 368
c_rt_lib0clear(&___nl__im__12);
#line 368
c_rt_lib0clear(&___nl__im__13);
#line 368
c_rt_lib0clear(&___nl__im__14);
#line 368
//clear ___nl__bool__15;
#line 368
c_rt_lib0clear(&___nl__im__16);
#line 368
c_rt_lib0clear(&___nl__im__17);
#line 368
//clear ___nl__bool__18;
#line 368
c_rt_lib0clear(&___nl__im__19);
#line 368
c_rt_lib0clear(&___nl__im__20);
#line 368
c_rt_lib0clear(&___nl__im__21);
#line 368
c_rt_lib0clear(&___nl__im__22);
#line 368
c_rt_lib0clear(&___nl__im__23);
#line 368
c_rt_lib0clear(&___nl__im__24);
#line 368
c_rt_lib0clear(&___nl__im__25);
#line 368
c_rt_lib0clear(&___nl__im__26);
#line 368
return NULL;
}

ImmT  generator_c_struct_dependence_sort_priv0get_anons(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
bool  ___nl__bool__30 = false;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
bool  ___nl__bool__55 = false;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
#line 372
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 373
___nl__int__3 = 0;
#line 373
___nl__int__4 = 1;
#line 373
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 373
label_3:
#line 373
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 373
___nl__bool__6 = ___nl__int__7;
#line 373
if(___nl__bool__6){ goto label_1;}
#line 373
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 373
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 374
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(398)));
#line 374
c_rt_lib0copy(&___nl__im__10, ___nl__im__9);
#line 374
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__10, &___nl__im__1));
#line 374
c_rt_lib0clear(&___nl__im__9);
#line 374
c_rt_lib0clear(&___nl__im__10);
#line 375
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(224)));
#line 375
___nl__int__13 = 0;
#line 375
___nl__int__14 = 1;
#line 375
___nl__int__15 = c_rt_lib0array_len(___nl__im__11);
#line 375
label_6:
#line 375
___nl__int__17 = ___nl__int__13 >= ___nl__int__15;
#line 375
___nl__bool__16 = ___nl__int__17;
#line 375
if(___nl__bool__16){ goto label_4;}
#line 375
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__11, ___nl__int__13));
#line 375
c_rt_lib0copy(&___nl__im__12, ___nl__im__18);
#line 376
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(96)));
#line 376
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(74));
#line 376
if(___nl__bool__20){ goto label_8;}
#line 377
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(96));
#line 377
if(___nl__bool__20){ goto label_9;}
#line 377
c_rt_lib0move(&___nl__im__21,___get_global_const(16));
#line 377
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(2, ___nl__im__21, ___nl__im__19));
#line 377
nl_die_arg(___nl__im__21);
#line 376
label_8:
#line 377
goto label_7;
#line 377
label_9:
#line 377
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(96)));
#line 377
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 378
c_rt_lib0copy(&___nl__im__24, ___nl__im__22);
#line 378
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__24, &___nl__im__1));
#line 378
c_rt_lib0clear(&___nl__im__24);
#line 379
goto label_7;
#line 379
label_7:
#line 379
c_rt_lib0clear(&___nl__im__12);
#line 379
label_5:
#line 380
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 380
goto label_6;
#line 380
label_4:
#line 381
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(225)));
#line 381
___nl__int__27 = 0;
#line 381
___nl__int__28 = 1;
#line 381
___nl__int__29 = c_rt_lib0array_len(___nl__im__25);
#line 381
label_12:
#line 381
___nl__int__31 = ___nl__int__27 >= ___nl__int__29;
#line 381
___nl__bool__30 = ___nl__int__31;
#line 381
if(___nl__bool__30){ goto label_10;}
#line 381
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_get(___nl__im__25, ___nl__int__27));
#line 381
c_rt_lib0copy(&___nl__im__26, ___nl__im__32);
#line 382
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(96)));
#line 382
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__34, ___get_global_const(532));
#line 382
c_rt_lib0clear(&___nl__im__34);
#line 382
___nl__bool__33 = !___nl__bool__33;
#line 382
if(___nl__bool__33){ goto label_14;}
#line 383
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(96)));
#line 383
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(96)));
#line 383
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__37, ___get_global_const(532)));
#line 383
c_rt_lib0clear(&___nl__im__36);
#line 383
c_rt_lib0clear(&___nl__im__37);
#line 383
c_rt_lib0copy(&___nl__im__38, ___nl__im__35);
#line 383
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__38, &___nl__im__1));
#line 383
c_rt_lib0clear(&___nl__im__35);
#line 383
c_rt_lib0clear(&___nl__im__36);
#line 383
c_rt_lib0clear(&___nl__im__37);
#line 383
c_rt_lib0clear(&___nl__im__38);
#line 384
goto label_13;
#line 384
label_14:
#line 384
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(96)));
#line 384
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__39, ___get_global_const(377));
#line 384
c_rt_lib0clear(&___nl__im__39);
#line 384
___nl__bool__33 = !___nl__bool__33;
#line 384
if(___nl__bool__33){ goto label_15;}
#line 385
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(96)));
#line 385
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(96)));
#line 385
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__42, ___get_global_const(377)));
#line 385
c_rt_lib0clear(&___nl__im__41);
#line 385
c_rt_lib0clear(&___nl__im__42);
#line 385
c_rt_lib0copy(&___nl__im__43, ___nl__im__40);
#line 385
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__43, &___nl__im__1));
#line 385
c_rt_lib0clear(&___nl__im__40);
#line 385
c_rt_lib0clear(&___nl__im__41);
#line 385
c_rt_lib0clear(&___nl__im__42);
#line 385
c_rt_lib0clear(&___nl__im__43);
#line 386
goto label_13;
#line 386
label_15:
#line 386
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(96)));
#line 386
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__44, ___get_global_const(522));
#line 386
c_rt_lib0clear(&___nl__im__44);
#line 386
___nl__bool__33 = !___nl__bool__33;
#line 386
if(___nl__bool__33){ goto label_16;}
#line 387
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(96)));
#line 387
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(96)));
#line 387
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__47, ___get_global_const(522)));
#line 387
c_rt_lib0clear(&___nl__im__46);
#line 387
c_rt_lib0clear(&___nl__im__47);
#line 387
c_rt_lib0copy(&___nl__im__48, ___nl__im__45);
#line 387
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__48, &___nl__im__1));
#line 387
c_rt_lib0clear(&___nl__im__45);
#line 387
c_rt_lib0clear(&___nl__im__46);
#line 387
c_rt_lib0clear(&___nl__im__47);
#line 387
c_rt_lib0clear(&___nl__im__48);
#line 388
goto label_13;
#line 388
label_16:
#line 388
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(96)));
#line 388
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__49, ___get_global_const(378));
#line 388
c_rt_lib0clear(&___nl__im__49);
#line 388
___nl__bool__33 = !___nl__bool__33;
#line 388
if(___nl__bool__33){ goto label_17;}
#line 389
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(96)));
#line 389
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(96)));
#line 389
c_rt_lib0move(&___nl__im__50, c_rt_lib0priv_as(___nl__im__52, ___get_global_const(378)));
#line 389
c_rt_lib0clear(&___nl__im__51);
#line 389
c_rt_lib0clear(&___nl__im__52);
#line 389
c_rt_lib0copy(&___nl__im__53, ___nl__im__50);
#line 389
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__53, &___nl__im__1));
#line 389
c_rt_lib0clear(&___nl__im__50);
#line 389
c_rt_lib0clear(&___nl__im__51);
#line 389
c_rt_lib0clear(&___nl__im__52);
#line 389
c_rt_lib0clear(&___nl__im__53);
#line 390
goto label_13;
#line 390
label_17:
#line 390
label_13:
#line 390
c_rt_lib0clear(&___nl__im__26);
#line 390
label_11:
#line 391
___nl__int__27 = ___nl__int__27 + ___nl__int__28;
#line 391
goto label_12;
#line 391
label_10:
#line 392
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(181)));
#line 392
___nl__bool__55 = c_rt_lib0priv_is(___nl__im__54, ___get_global_const(79));
#line 392
if(___nl__bool__55){ goto label_19;}
#line 393
___nl__bool__55 = c_rt_lib0priv_is(___nl__im__54, ___get_global_const(78));
#line 393
if(___nl__bool__55){ goto label_20;}
#line 393
c_rt_lib0move(&___nl__im__56,___get_global_const(16));
#line 393
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_mk(2, ___nl__im__56, ___nl__im__54));
#line 393
nl_die_arg(___nl__im__56);
#line 392
label_19:
#line 393
goto label_18;
#line 393
label_20:
#line 393
c_rt_lib0move(&___nl__im__58, c_rt_lib0priv_as(___nl__im__54, ___get_global_const(78)));
#line 393
c_rt_lib0copy(&___nl__im__57, ___nl__im__58);
#line 394
c_rt_lib0copy(&___nl__im__59, ___nl__im__57);
#line 394
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__59, &___nl__im__1));
#line 394
c_rt_lib0clear(&___nl__im__59);
#line 395
goto label_18;
#line 395
label_18:
#line 395
c_rt_lib0clear(&___nl__im__2);
#line 395
label_2:
#line 396
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 396
goto label_3;
#line 396
label_1:
#line 397
c_rt_lib0copy(&___nl__im__60, ___nl__im__1);
#line 397
c_rt_lib0clear(&___nl__im__0);
#line 397
c_rt_lib0clear(&___nl__im__1);
#line 397
c_rt_lib0clear(&___nl__im__2);
#line 397
//clear ___nl__int__3;
#line 397
//clear ___nl__int__4;
#line 397
//clear ___nl__int__5;
#line 397
//clear ___nl__bool__6;
#line 397
//clear ___nl__int__7;
#line 397
c_rt_lib0clear(&___nl__im__8);
#line 397
c_rt_lib0clear(&___nl__im__9);
#line 397
c_rt_lib0clear(&___nl__im__10);
#line 397
c_rt_lib0clear(&___nl__im__11);
#line 397
c_rt_lib0clear(&___nl__im__12);
#line 397
//clear ___nl__int__13;
#line 397
//clear ___nl__int__14;
#line 397
//clear ___nl__int__15;
#line 397
//clear ___nl__bool__16;
#line 397
//clear ___nl__int__17;
#line 397
c_rt_lib0clear(&___nl__im__18);
#line 397
c_rt_lib0clear(&___nl__im__19);
#line 397
//clear ___nl__bool__20;
#line 397
c_rt_lib0clear(&___nl__im__21);
#line 397
c_rt_lib0clear(&___nl__im__22);
#line 397
c_rt_lib0clear(&___nl__im__23);
#line 397
c_rt_lib0clear(&___nl__im__24);
#line 397
c_rt_lib0clear(&___nl__im__25);
#line 397
c_rt_lib0clear(&___nl__im__26);
#line 397
//clear ___nl__int__27;
#line 397
//clear ___nl__int__28;
#line 397
//clear ___nl__int__29;
#line 397
//clear ___nl__bool__30;
#line 397
//clear ___nl__int__31;
#line 397
c_rt_lib0clear(&___nl__im__32);
#line 397
//clear ___nl__bool__33;
#line 397
c_rt_lib0clear(&___nl__im__34);
#line 397
c_rt_lib0clear(&___nl__im__35);
#line 397
c_rt_lib0clear(&___nl__im__36);
#line 397
c_rt_lib0clear(&___nl__im__37);
#line 397
c_rt_lib0clear(&___nl__im__38);
#line 397
c_rt_lib0clear(&___nl__im__39);
#line 397
c_rt_lib0clear(&___nl__im__40);
#line 397
c_rt_lib0clear(&___nl__im__41);
#line 397
c_rt_lib0clear(&___nl__im__42);
#line 397
c_rt_lib0clear(&___nl__im__43);
#line 397
c_rt_lib0clear(&___nl__im__44);
#line 397
c_rt_lib0clear(&___nl__im__45);
#line 397
c_rt_lib0clear(&___nl__im__46);
#line 397
c_rt_lib0clear(&___nl__im__47);
#line 397
c_rt_lib0clear(&___nl__im__48);
#line 397
c_rt_lib0clear(&___nl__im__49);
#line 397
c_rt_lib0clear(&___nl__im__50);
#line 397
c_rt_lib0clear(&___nl__im__51);
#line 397
c_rt_lib0clear(&___nl__im__52);
#line 397
c_rt_lib0clear(&___nl__im__53);
#line 397
c_rt_lib0clear(&___nl__im__54);
#line 397
//clear ___nl__bool__55;
#line 397
c_rt_lib0clear(&___nl__im__56);
#line 397
c_rt_lib0clear(&___nl__im__57);
#line 397
c_rt_lib0clear(&___nl__im__58);
#line 397
c_rt_lib0clear(&___nl__im__59);
#line 397
return ___nl__im__60;
#line 397
c_rt_lib0clear(&___nl__im__0);
#line 397
c_rt_lib0clear(&___nl__im__1);
#line 397
c_rt_lib0clear(&___nl__im__2);
#line 397
//clear ___nl__int__3;
#line 397
//clear ___nl__int__4;
#line 397
//clear ___nl__int__5;
#line 397
//clear ___nl__bool__6;
#line 397
//clear ___nl__int__7;
#line 397
c_rt_lib0clear(&___nl__im__8);
#line 397
c_rt_lib0clear(&___nl__im__9);
#line 397
c_rt_lib0clear(&___nl__im__10);
#line 397
c_rt_lib0clear(&___nl__im__11);
#line 397
c_rt_lib0clear(&___nl__im__12);
#line 397
//clear ___nl__int__13;
#line 397
//clear ___nl__int__14;
#line 397
//clear ___nl__int__15;
#line 397
//clear ___nl__bool__16;
#line 397
//clear ___nl__int__17;
#line 397
c_rt_lib0clear(&___nl__im__18);
#line 397
c_rt_lib0clear(&___nl__im__19);
#line 397
//clear ___nl__bool__20;
#line 397
c_rt_lib0clear(&___nl__im__21);
#line 397
c_rt_lib0clear(&___nl__im__22);
#line 397
c_rt_lib0clear(&___nl__im__23);
#line 397
c_rt_lib0clear(&___nl__im__24);
#line 397
c_rt_lib0clear(&___nl__im__25);
#line 397
c_rt_lib0clear(&___nl__im__26);
#line 397
//clear ___nl__int__27;
#line 397
//clear ___nl__int__28;
#line 397
//clear ___nl__int__29;
#line 397
//clear ___nl__bool__30;
#line 397
//clear ___nl__int__31;
#line 397
c_rt_lib0clear(&___nl__im__32);
#line 397
//clear ___nl__bool__33;
#line 397
c_rt_lib0clear(&___nl__im__34);
#line 397
c_rt_lib0clear(&___nl__im__35);
#line 397
c_rt_lib0clear(&___nl__im__36);
#line 397
c_rt_lib0clear(&___nl__im__37);
#line 397
c_rt_lib0clear(&___nl__im__38);
#line 397
c_rt_lib0clear(&___nl__im__39);
#line 397
c_rt_lib0clear(&___nl__im__40);
#line 397
c_rt_lib0clear(&___nl__im__41);
#line 397
c_rt_lib0clear(&___nl__im__42);
#line 397
c_rt_lib0clear(&___nl__im__43);
#line 397
c_rt_lib0clear(&___nl__im__44);
#line 397
c_rt_lib0clear(&___nl__im__45);
#line 397
c_rt_lib0clear(&___nl__im__46);
#line 397
c_rt_lib0clear(&___nl__im__47);
#line 397
c_rt_lib0clear(&___nl__im__48);
#line 397
c_rt_lib0clear(&___nl__im__49);
#line 397
c_rt_lib0clear(&___nl__im__50);
#line 397
c_rt_lib0clear(&___nl__im__51);
#line 397
c_rt_lib0clear(&___nl__im__52);
#line 397
c_rt_lib0clear(&___nl__im__53);
#line 397
c_rt_lib0clear(&___nl__im__54);
#line 397
//clear ___nl__bool__55;
#line 397
c_rt_lib0clear(&___nl__im__56);
#line 397
c_rt_lib0clear(&___nl__im__57);
#line 397
c_rt_lib0clear(&___nl__im__58);
#line 397
c_rt_lib0clear(&___nl__im__59);
#line 397
c_rt_lib0clear(&___nl__im__60);
#line 397
return NULL;
}

ImmT  generator_c_struct_dependence_sort_priv0nlasm_to_type_hash(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
#line 401
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 402
___nl__int__3 = 0;
#line 402
___nl__int__4 = 1;
#line 402
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 402
label_3:
#line 402
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 402
___nl__bool__6 = ___nl__int__7;
#line 402
if(___nl__bool__6){ goto label_1;}
#line 402
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 402
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 403
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(219)));
#line 403
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(438));
#line 403
if(___nl__bool__10){ goto label_5;}
#line 404
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(220));
#line 404
if(___nl__bool__10){ goto label_6;}
#line 404
c_rt_lib0move(&___nl__im__11,___get_global_const(16));
#line 404
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__9));
#line 404
nl_die_arg(___nl__im__11);
#line 403
label_5:
#line 404
goto label_4;
#line 404
label_6:
#line 405
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(181)));
#line 405
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(78));
#line 405
if(___nl__bool__13){ goto label_8;}
#line 407
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(79));
#line 407
if(___nl__bool__13){ goto label_9;}
#line 407
c_rt_lib0move(&___nl__im__14,___get_global_const(16));
#line 407
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__12));
#line 407
nl_die_arg(___nl__im__14);
#line 405
label_8:
#line 405
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(78)));
#line 405
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 406
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(121)));
#line 406
c_rt_lib0copy(&___nl__im__18, ___nl__im__17);
#line 406
c_rt_lib0copy(&___nl__im__19, ___nl__im__15);
#line 406
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__18, ___nl__im__19));
#line 406
c_rt_lib0clear(&___nl__im__17);
#line 406
c_rt_lib0clear(&___nl__im__18);
#line 406
c_rt_lib0clear(&___nl__im__19);
#line 407
goto label_7;
#line 407
label_9:
#line 408
goto label_7;
#line 408
label_7:
#line 409
goto label_4;
#line 409
label_4:
#line 409
c_rt_lib0clear(&___nl__im__2);
#line 409
label_2:
#line 410
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 410
goto label_3;
#line 410
label_1:
#line 411
c_rt_lib0copy(&___nl__im__20, ___nl__im__1);
#line 411
c_rt_lib0clear(&___nl__im__0);
#line 411
c_rt_lib0clear(&___nl__im__1);
#line 411
c_rt_lib0clear(&___nl__im__2);
#line 411
//clear ___nl__int__3;
#line 411
//clear ___nl__int__4;
#line 411
//clear ___nl__int__5;
#line 411
//clear ___nl__bool__6;
#line 411
//clear ___nl__int__7;
#line 411
c_rt_lib0clear(&___nl__im__8);
#line 411
c_rt_lib0clear(&___nl__im__9);
#line 411
//clear ___nl__bool__10;
#line 411
c_rt_lib0clear(&___nl__im__11);
#line 411
c_rt_lib0clear(&___nl__im__12);
#line 411
//clear ___nl__bool__13;
#line 411
c_rt_lib0clear(&___nl__im__14);
#line 411
c_rt_lib0clear(&___nl__im__15);
#line 411
c_rt_lib0clear(&___nl__im__16);
#line 411
c_rt_lib0clear(&___nl__im__17);
#line 411
c_rt_lib0clear(&___nl__im__18);
#line 411
c_rt_lib0clear(&___nl__im__19);
#line 411
return ___nl__im__20;
#line 411
c_rt_lib0clear(&___nl__im__0);
#line 411
c_rt_lib0clear(&___nl__im__1);
#line 411
c_rt_lib0clear(&___nl__im__2);
#line 411
//clear ___nl__int__3;
#line 411
//clear ___nl__int__4;
#line 411
//clear ___nl__int__5;
#line 411
//clear ___nl__bool__6;
#line 411
//clear ___nl__int__7;
#line 411
c_rt_lib0clear(&___nl__im__8);
#line 411
c_rt_lib0clear(&___nl__im__9);
#line 411
//clear ___nl__bool__10;
#line 411
c_rt_lib0clear(&___nl__im__11);
#line 411
c_rt_lib0clear(&___nl__im__12);
#line 411
//clear ___nl__bool__13;
#line 411
c_rt_lib0clear(&___nl__im__14);
#line 411
c_rt_lib0clear(&___nl__im__15);
#line 411
c_rt_lib0clear(&___nl__im__16);
#line 411
c_rt_lib0clear(&___nl__im__17);
#line 411
c_rt_lib0clear(&___nl__im__18);
#line 411
c_rt_lib0clear(&___nl__im__19);
#line 411
c_rt_lib0clear(&___nl__im__20);
#line 411
return NULL;
}

generator_c_struct_dependence_sort0result_t0type generator_c_struct_dependence_sort0sort0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "generator_c_struct_dependence_sort0sort");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return generator_c_struct_dependence_sort0sort(var0, var1);
}
generator_c_struct_dependence_sort0result_t0type generator_c_struct_dependence_sort0sort(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_struct_dependence_sort_priv0__const__init();
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
#line 416
c_rt_lib0copy(&___nl__im__3, ___nl__im__0);
#line 416
c_rt_lib0move(&___nl__im__2, generator_c_struct_dependence_sort_priv0get_anons(___nl__im__3));
#line 416
c_rt_lib0clear(&___nl__im__3);
#line 417
c_rt_lib0copy(&___nl__im__5, ___nl__im__0);
#line 417
c_rt_lib0move(&___nl__im__4, generator_c_struct_dependence_sort_priv0nlasm_to_type_hash(___nl__im__5));
#line 417
c_rt_lib0clear(&___nl__im__5);
#line 417
c_rt_lib0copy(&___nl__im__6, ___nl__im__4);
#line 417
c_rt_lib0delete(hash0add_all(&___nl__im__2, ___nl__im__6));
#line 417
c_rt_lib0clear(&___nl__im__4);
#line 417
c_rt_lib0clear(&___nl__im__5);
#line 417
c_rt_lib0clear(&___nl__im__6);
#line 418
c_rt_lib0copy(&___nl__im__8, ___nl__im__2);
#line 418
c_rt_lib0copy(&___nl__im__9, ___nl__im__1);
#line 418
c_rt_lib0move(&___nl__im__7, generator_c_struct_dependence_sort_priv0in_funs_to_graph(___nl__im__8, ___nl__im__9));
#line 418
c_rt_lib0clear(&___nl__im__8);
#line 418
c_rt_lib0clear(&___nl__im__9);
#line 419
c_rt_lib0copy(&___nl__im__12, ___nl__im__7);
#line 419
c_rt_lib0move(&___nl__im__11, generator_c_struct_dependence_sort_priv0sort_graph(___nl__im__12));
#line 419
c_rt_lib0clear(&___nl__im__12);
#line 419
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 419
c_rt_lib0clear(&___nl__im__0);
#line 419
c_rt_lib0clear(&___nl__im__1);
#line 419
c_rt_lib0clear(&___nl__im__2);
#line 419
c_rt_lib0clear(&___nl__im__3);
#line 419
c_rt_lib0clear(&___nl__im__4);
#line 419
c_rt_lib0clear(&___nl__im__5);
#line 419
c_rt_lib0clear(&___nl__im__6);
#line 419
c_rt_lib0clear(&___nl__im__7);
#line 419
c_rt_lib0clear(&___nl__im__8);
#line 419
c_rt_lib0clear(&___nl__im__9);
#line 419
c_rt_lib0clear(&___nl__im__11);
#line 419
c_rt_lib0clear(&___nl__im__12);
#line 419
return ___nl__im__10;
#line 419
c_rt_lib0clear(&___nl__im__0);
#line 419
c_rt_lib0clear(&___nl__im__1);
#line 419
c_rt_lib0clear(&___nl__im__2);
#line 419
c_rt_lib0clear(&___nl__im__3);
#line 419
c_rt_lib0clear(&___nl__im__4);
#line 419
c_rt_lib0clear(&___nl__im__5);
#line 419
c_rt_lib0clear(&___nl__im__6);
#line 419
c_rt_lib0clear(&___nl__im__7);
#line 419
c_rt_lib0clear(&___nl__im__8);
#line 419
c_rt_lib0clear(&___nl__im__9);
#line 419
c_rt_lib0clear(&___nl__im__10);
#line 419
c_rt_lib0clear(&___nl__im__11);
#line 419
c_rt_lib0clear(&___nl__im__12);
#line 419
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void generator_c_struct_dependence_sort_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT generator_c_struct_dependence_sort_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_c_struct_dependence_sort_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
