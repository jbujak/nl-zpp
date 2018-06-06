
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "reference_generator.h"
#include "ptd.h"
#include "nast.h"
#include "reference_generator.h"
#line 1 "reference_generator.nl"

static ImmT *__const__f = NULL;
void reference_generator_priv0__const__init();
ImmT reference_generator_priv0__const__sim(int __nr);
ImmT reference_generator_priv0__const__sing(int __nr);

ImmT  reference_generator_priv0process_module(reference_generator0refs0type* ___ref___im__0,nast0module_t0type ___nl__im__1);
ImmT  reference_generator_priv0process_fun_def(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0fun_def_t0type ___nl__im__2);
ImmT  reference_generator_priv0add_ref(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0place_t0type ___nl__im__2,reference_generator0ref_type0type ___nl__im__3);
ImmT  reference_generator_priv0process_cmd(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0cmd_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_try(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0try_ensure_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_return(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0value_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_block(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0block_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_die(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0die_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_if(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0if_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_for(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0for_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_fora(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0fora_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_forh(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0forh_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_var_decl(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0variable_declaration_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_type(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0variable_type_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_rep(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0rep_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_while(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0while_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_if_mod(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0if_mod_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_match(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0match_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_value(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0value_t0type ___nl__im__2);
ImmT  reference_generator_priv0process_bin_op(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0bin_op_t0type ___nl__im__2);


ImmT  reference_generator0fun_ref0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0fun_ref");
return reference_generator0fun_ref();
}
ImmT  reference_generator0fun_ref() {
reference_generator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 11
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(reference_generator0module0ptr, ___get_global_const(190), ___get_global_const(167)));
#line 11
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 12
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 12
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(167), ___nl__im__3, ___get_global_const(121), ___nl__im__4));
#line 12
c_rt_lib0clear(&___nl__im__3);
#line 12
c_rt_lib0clear(&___nl__im__4);
#line 12
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 12
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__5));
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

ImmT  reference_generator0module0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0module");
return reference_generator0module();
}
ImmT  reference_generator0module() {
reference_generator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 17
c_rt_lib0move(&___nl__im__1, ptd0string());
#line 17
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 17
c_rt_lib0clear(&___nl__im__1);
#line 17
return ___nl__im__0;
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
c_rt_lib0clear(&___nl__im__1);
#line 17
return NULL;
}

ImmT  reference_generator0refs0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0refs");
return reference_generator0refs();
}
ImmT  reference_generator0refs() {
reference_generator_priv0__const__init();
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
#line 24
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(reference_generator0module0ptr, ___get_global_const(190), ___get_global_const(167)));
#line 24
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 25
c_rt_lib0move(&___nl__im__7, ptd0int());
#line 26
c_rt_lib0move(&___nl__im__8, ptd0int());
#line 27
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(reference_generator0ref_type0ptr, ___get_global_const(190), ___get_global_const(1331)));
#line 27
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 27
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_const(167), ___nl__im__6, ___get_global_const(169), ___nl__im__7, ___get_global_const(1096), ___nl__im__8, ___get_global_const(96), ___nl__im__9));
#line 27
c_rt_lib0clear(&___nl__im__6);
#line 27
c_rt_lib0clear(&___nl__im__7);
#line 27
c_rt_lib0clear(&___nl__im__8);
#line 27
c_rt_lib0clear(&___nl__im__9);
#line 27
c_rt_lib0copy(&___nl__im__10, ___nl__im__5);
#line 27
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__10));
#line 27
c_rt_lib0clear(&___nl__im__5);
#line 27
c_rt_lib0clear(&___nl__im__6);
#line 27
c_rt_lib0clear(&___nl__im__7);
#line 27
c_rt_lib0clear(&___nl__im__8);
#line 27
c_rt_lib0clear(&___nl__im__9);
#line 27
c_rt_lib0clear(&___nl__im__10);
#line 30
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(reference_generator0deref_type0ptr, ___get_global_const(190), ___get_global_const(52)));
#line 30
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__13));
#line 31
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(reference_generator0deref_type0ptr, ___get_global_const(190), ___get_global_const(52)));
#line 31
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__14));
#line 31
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(189), ___nl__im__13, ___get_global_const(187), ___nl__im__14));
#line 31
c_rt_lib0clear(&___nl__im__13);
#line 31
c_rt_lib0clear(&___nl__im__14);
#line 31
c_rt_lib0copy(&___nl__im__15, ___nl__im__12);
#line 31
c_rt_lib0move(&___nl__im__11, ptd0var(___nl__im__15));
#line 31
c_rt_lib0clear(&___nl__im__12);
#line 31
c_rt_lib0clear(&___nl__im__13);
#line 31
c_rt_lib0clear(&___nl__im__14);
#line 31
c_rt_lib0clear(&___nl__im__15);
#line 31
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__im__4, ___get_global_const(99), ___nl__im__11));
#line 31
c_rt_lib0clear(&___nl__im__4);
#line 31
c_rt_lib0clear(&___nl__im__5);
#line 31
c_rt_lib0clear(&___nl__im__6);
#line 31
c_rt_lib0clear(&___nl__im__7);
#line 31
c_rt_lib0clear(&___nl__im__8);
#line 31
c_rt_lib0clear(&___nl__im__9);
#line 31
c_rt_lib0clear(&___nl__im__10);
#line 31
c_rt_lib0clear(&___nl__im__11);
#line 31
c_rt_lib0clear(&___nl__im__12);
#line 31
c_rt_lib0clear(&___nl__im__13);
#line 31
c_rt_lib0clear(&___nl__im__14);
#line 31
c_rt_lib0clear(&___nl__im__15);
#line 31
c_rt_lib0copy(&___nl__im__16, ___nl__im__3);
#line 31
c_rt_lib0move(&___nl__im__2, ptd0var(___nl__im__16));
#line 31
c_rt_lib0clear(&___nl__im__3);
#line 31
c_rt_lib0clear(&___nl__im__4);
#line 31
c_rt_lib0clear(&___nl__im__5);
#line 31
c_rt_lib0clear(&___nl__im__6);
#line 31
c_rt_lib0clear(&___nl__im__7);
#line 31
c_rt_lib0clear(&___nl__im__8);
#line 31
c_rt_lib0clear(&___nl__im__9);
#line 31
c_rt_lib0clear(&___nl__im__10);
#line 31
c_rt_lib0clear(&___nl__im__11);
#line 31
c_rt_lib0clear(&___nl__im__12);
#line 31
c_rt_lib0clear(&___nl__im__13);
#line 31
c_rt_lib0clear(&___nl__im__14);
#line 31
c_rt_lib0clear(&___nl__im__15);
#line 31
c_rt_lib0clear(&___nl__im__16);
#line 31
c_rt_lib0copy(&___nl__im__17, ___nl__im__2);
#line 31
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__17));
#line 31
c_rt_lib0clear(&___nl__im__2);
#line 31
c_rt_lib0clear(&___nl__im__3);
#line 31
c_rt_lib0clear(&___nl__im__4);
#line 31
c_rt_lib0clear(&___nl__im__5);
#line 31
c_rt_lib0clear(&___nl__im__6);
#line 31
c_rt_lib0clear(&___nl__im__7);
#line 31
c_rt_lib0clear(&___nl__im__8);
#line 31
c_rt_lib0clear(&___nl__im__9);
#line 31
c_rt_lib0clear(&___nl__im__10);
#line 31
c_rt_lib0clear(&___nl__im__11);
#line 31
c_rt_lib0clear(&___nl__im__12);
#line 31
c_rt_lib0clear(&___nl__im__13);
#line 31
c_rt_lib0clear(&___nl__im__14);
#line 31
c_rt_lib0clear(&___nl__im__15);
#line 31
c_rt_lib0clear(&___nl__im__16);
#line 31
c_rt_lib0clear(&___nl__im__17);
#line 31
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 31
c_rt_lib0clear(&___nl__im__1);
#line 31
c_rt_lib0clear(&___nl__im__2);
#line 31
c_rt_lib0clear(&___nl__im__3);
#line 31
c_rt_lib0clear(&___nl__im__4);
#line 31
c_rt_lib0clear(&___nl__im__5);
#line 31
c_rt_lib0clear(&___nl__im__6);
#line 31
c_rt_lib0clear(&___nl__im__7);
#line 31
c_rt_lib0clear(&___nl__im__8);
#line 31
c_rt_lib0clear(&___nl__im__9);
#line 31
c_rt_lib0clear(&___nl__im__10);
#line 31
c_rt_lib0clear(&___nl__im__11);
#line 31
c_rt_lib0clear(&___nl__im__12);
#line 31
c_rt_lib0clear(&___nl__im__13);
#line 31
c_rt_lib0clear(&___nl__im__14);
#line 31
c_rt_lib0clear(&___nl__im__15);
#line 31
c_rt_lib0clear(&___nl__im__16);
#line 31
c_rt_lib0clear(&___nl__im__17);
#line 31
return ___nl__im__0;
#line 31
c_rt_lib0clear(&___nl__im__0);
#line 31
c_rt_lib0clear(&___nl__im__1);
#line 31
c_rt_lib0clear(&___nl__im__2);
#line 31
c_rt_lib0clear(&___nl__im__3);
#line 31
c_rt_lib0clear(&___nl__im__4);
#line 31
c_rt_lib0clear(&___nl__im__5);
#line 31
c_rt_lib0clear(&___nl__im__6);
#line 31
c_rt_lib0clear(&___nl__im__7);
#line 31
c_rt_lib0clear(&___nl__im__8);
#line 31
c_rt_lib0clear(&___nl__im__9);
#line 31
c_rt_lib0clear(&___nl__im__10);
#line 31
c_rt_lib0clear(&___nl__im__11);
#line 31
c_rt_lib0clear(&___nl__im__12);
#line 31
c_rt_lib0clear(&___nl__im__13);
#line 31
c_rt_lib0clear(&___nl__im__14);
#line 31
c_rt_lib0clear(&___nl__im__15);
#line 31
c_rt_lib0clear(&___nl__im__16);
#line 31
c_rt_lib0clear(&___nl__im__17);
#line 31
return NULL;
}

ImmT  reference_generator0deref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0deref_type");
return reference_generator0deref_type();
}
ImmT  reference_generator0deref_type() {
reference_generator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 38
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 38
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 38
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 38
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(169), ___nl__im__3, ___get_global_const(167), ___nl__im__4, ___get_global_const(1322), ___nl__im__5));
#line 38
c_rt_lib0clear(&___nl__im__3);
#line 38
c_rt_lib0clear(&___nl__im__4);
#line 38
c_rt_lib0clear(&___nl__im__5);
#line 38
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 38
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__6));
#line 38
c_rt_lib0clear(&___nl__im__2);
#line 38
c_rt_lib0clear(&___nl__im__3);
#line 38
c_rt_lib0clear(&___nl__im__4);
#line 38
c_rt_lib0clear(&___nl__im__5);
#line 38
c_rt_lib0clear(&___nl__im__6);
#line 38
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 38
c_rt_lib0clear(&___nl__im__1);
#line 38
c_rt_lib0clear(&___nl__im__2);
#line 38
c_rt_lib0clear(&___nl__im__3);
#line 38
c_rt_lib0clear(&___nl__im__4);
#line 38
c_rt_lib0clear(&___nl__im__5);
#line 38
c_rt_lib0clear(&___nl__im__6);
#line 38
return ___nl__im__0;
#line 38
c_rt_lib0clear(&___nl__im__0);
#line 38
c_rt_lib0clear(&___nl__im__1);
#line 38
c_rt_lib0clear(&___nl__im__2);
#line 38
c_rt_lib0clear(&___nl__im__3);
#line 38
c_rt_lib0clear(&___nl__im__4);
#line 38
c_rt_lib0clear(&___nl__im__5);
#line 38
c_rt_lib0clear(&___nl__im__6);
#line 38
return NULL;
}

ImmT  reference_generator0ref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0ref_type");
return reference_generator0ref_type();
}
ImmT  reference_generator0ref_type() {
reference_generator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 43
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(reference_generator0module0ptr, ___get_global_const(190), ___get_global_const(167)));
#line 43
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 44
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(reference_generator0fun_ref0ptr, ___get_global_const(190), ___get_global_const(1332)));
#line 44
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 45
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(reference_generator0fun_ref0ptr, ___get_global_const(190), ___get_global_const(1332)));
#line 45
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 45
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(159), ___nl__im__3, ___get_global_const(1333), ___nl__im__4, ___get_global_const(1334), ___nl__im__5));
#line 45
c_rt_lib0clear(&___nl__im__3);
#line 45
c_rt_lib0clear(&___nl__im__4);
#line 45
c_rt_lib0clear(&___nl__im__5);
#line 45
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 45
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__6));
#line 45
c_rt_lib0clear(&___nl__im__2);
#line 45
c_rt_lib0clear(&___nl__im__3);
#line 45
c_rt_lib0clear(&___nl__im__4);
#line 45
c_rt_lib0clear(&___nl__im__5);
#line 45
c_rt_lib0clear(&___nl__im__6);
#line 45
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 45
c_rt_lib0clear(&___nl__im__1);
#line 45
c_rt_lib0clear(&___nl__im__2);
#line 45
c_rt_lib0clear(&___nl__im__3);
#line 45
c_rt_lib0clear(&___nl__im__4);
#line 45
c_rt_lib0clear(&___nl__im__5);
#line 45
c_rt_lib0clear(&___nl__im__6);
#line 45
return ___nl__im__0;
#line 45
c_rt_lib0clear(&___nl__im__0);
#line 45
c_rt_lib0clear(&___nl__im__1);
#line 45
c_rt_lib0clear(&___nl__im__2);
#line 45
c_rt_lib0clear(&___nl__im__3);
#line 45
c_rt_lib0clear(&___nl__im__4);
#line 45
c_rt_lib0clear(&___nl__im__5);
#line 45
c_rt_lib0clear(&___nl__im__6);
#line 45
return NULL;
}

reference_generator0refs0type reference_generator0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "reference_generator0generate");
ImmT  var0 = (_tab[0]);
return reference_generator0generate(var0);
}
reference_generator0refs0type reference_generator0generate(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
reference_generator_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 50
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 51
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 51
label_3:
#line 51
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 51
if(___nl__bool__3){ goto label_1;}
#line 51
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 51
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 52
c_rt_lib0copy(&___nl__im__6, ___nl__im__4);
#line 52
c_rt_lib0delete(reference_generator_priv0process_module(&___nl__im__1, ___nl__im__6));
#line 52
c_rt_lib0clear(&___nl__im__6);
#line 52
label_2:
#line 53
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 53
goto label_3;
#line 53
label_1:
#line 54
c_rt_lib0copy(&___nl__im__7, ___nl__im__1);
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
c_rt_lib0clear(&___nl__im__1);
#line 54
c_rt_lib0clear(&___nl__im__2);
#line 54
//clear ___nl__bool__3;
#line 54
c_rt_lib0clear(&___nl__im__4);
#line 54
c_rt_lib0clear(&___nl__im__5);
#line 54
c_rt_lib0clear(&___nl__im__6);
#line 54
return ___nl__im__7;
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
c_rt_lib0clear(&___nl__im__1);
#line 54
c_rt_lib0clear(&___nl__im__2);
#line 54
//clear ___nl__bool__3;
#line 54
c_rt_lib0clear(&___nl__im__4);
#line 54
c_rt_lib0clear(&___nl__im__5);
#line 54
c_rt_lib0clear(&___nl__im__6);
#line 54
c_rt_lib0clear(&___nl__im__7);
#line 54
return NULL;
}

ImmT  reference_generator_priv0process_module(reference_generator0refs0type* ___ref___im__0,nast0module_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
reference_generator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
bool  ___nl__bool__23 = false;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
#line 59
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(159)));
#line 59
___nl__int__4 = 0;
#line 59
___nl__int__5 = 1;
#line 59
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 59
label_3:
#line 59
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 59
___nl__bool__7 = ___nl__int__8;
#line 59
if(___nl__bool__7){ goto label_1;}
#line 59
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 59
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 61
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(121)));
#line 62
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(169)));
#line 63
___nl__int__14 = 1;
#line 63
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__14));
#line 64
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(121)));
#line 64
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(159), ___nl__im__17));
#line 64
c_rt_lib0clear(&___nl__im__17);
#line 64
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_const(167), ___nl__im__12, ___get_global_const(169), ___nl__im__13, ___get_global_const(1096), ___nl__im__15, ___get_global_const(96), ___nl__im__16));
#line 64
c_rt_lib0clear(&___nl__im__12);
#line 64
c_rt_lib0clear(&___nl__im__13);
#line 64
//clear ___nl__int__14;
#line 64
c_rt_lib0clear(&___nl__im__15);
#line 64
c_rt_lib0clear(&___nl__im__16);
#line 64
c_rt_lib0clear(&___nl__im__17);
#line 64
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__11));
#line 64
c_rt_lib0clear(&___nl__im__11);
#line 64
c_rt_lib0clear(&___nl__im__12);
#line 64
c_rt_lib0clear(&___nl__im__13);
#line 64
//clear ___nl__int__14;
#line 64
c_rt_lib0clear(&___nl__im__15);
#line 64
c_rt_lib0clear(&___nl__im__16);
#line 64
c_rt_lib0clear(&___nl__im__17);
#line 64
c_rt_lib0array_push(___ref___im__0, ___nl__im__10);
#line 64
c_rt_lib0clear(&___nl__im__10);
#line 64
c_rt_lib0clear(&___nl__im__11);
#line 64
c_rt_lib0clear(&___nl__im__12);
#line 64
c_rt_lib0clear(&___nl__im__13);
#line 64
//clear ___nl__int__14;
#line 64
c_rt_lib0clear(&___nl__im__15);
#line 64
c_rt_lib0clear(&___nl__im__16);
#line 64
c_rt_lib0clear(&___nl__im__17);
#line 64
c_rt_lib0clear(&___nl__im__3);
#line 64
label_2:
#line 66
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 66
goto label_3;
#line 66
label_1:
#line 68
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(160)));
#line 68
___nl__int__20 = 0;
#line 68
___nl__int__21 = 1;
#line 68
___nl__int__22 = c_rt_lib0array_len(___nl__im__18);
#line 68
label_6:
#line 68
___nl__int__24 = ___nl__int__20 >= ___nl__int__22;
#line 68
___nl__bool__23 = ___nl__int__24;
#line 68
if(___nl__bool__23){ goto label_4;}
#line 68
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_get(___nl__im__18, ___nl__int__20));
#line 68
c_rt_lib0copy(&___nl__im__19, ___nl__im__25);
#line 69
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(121)));
#line 69
c_rt_lib0copy(&___nl__im__27, ___nl__im__26);
#line 69
c_rt_lib0copy(&___nl__im__28, ___nl__im__19);
#line 69
c_rt_lib0delete(reference_generator_priv0process_fun_def(___ref___im__0, ___nl__im__27, ___nl__im__28));
#line 69
c_rt_lib0clear(&___nl__im__26);
#line 69
c_rt_lib0clear(&___nl__im__27);
#line 69
c_rt_lib0clear(&___nl__im__28);
#line 69
c_rt_lib0clear(&___nl__im__19);
#line 69
label_5:
#line 70
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 70
goto label_6;
#line 70
label_4:
#line 70
c_rt_lib0clear(&___nl__im__1);
#line 70
c_rt_lib0clear(&___nl__im__2);
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
//clear ___nl__int__4;
#line 70
//clear ___nl__int__5;
#line 70
//clear ___nl__int__6;
#line 70
//clear ___nl__bool__7;
#line 70
//clear ___nl__int__8;
#line 70
c_rt_lib0clear(&___nl__im__9);
#line 70
c_rt_lib0clear(&___nl__im__10);
#line 70
c_rt_lib0clear(&___nl__im__11);
#line 70
c_rt_lib0clear(&___nl__im__12);
#line 70
c_rt_lib0clear(&___nl__im__13);
#line 70
//clear ___nl__int__14;
#line 70
c_rt_lib0clear(&___nl__im__15);
#line 70
c_rt_lib0clear(&___nl__im__16);
#line 70
c_rt_lib0clear(&___nl__im__17);
#line 70
c_rt_lib0clear(&___nl__im__18);
#line 70
c_rt_lib0clear(&___nl__im__19);
#line 70
//clear ___nl__int__20;
#line 70
//clear ___nl__int__21;
#line 70
//clear ___nl__int__22;
#line 70
//clear ___nl__bool__23;
#line 70
//clear ___nl__int__24;
#line 70
c_rt_lib0clear(&___nl__im__25);
#line 70
c_rt_lib0clear(&___nl__im__26);
#line 70
c_rt_lib0clear(&___nl__im__27);
#line 70
c_rt_lib0clear(&___nl__im__28);
#line 70
return NULL;
}

ImmT  reference_generator_priv0process_fun_def(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0fun_def_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
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
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
bool  ___nl__bool__28 = false;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
#line 76
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(169)));
#line 76
___nl__int__5 = getIntFromImm(___nl__im__6);
#line 76
c_rt_lib0clear(&___nl__im__6);
#line 76
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__5));
#line 77
___nl__int__8 = 1;
#line 77
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__8));
#line 79
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(219)));
#line 79
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__14, ___get_global_const(220));
#line 79
c_rt_lib0clear(&___nl__im__14);
#line 79
if(___nl__bool__13){ goto label_2;}
#line 79
c_rt_lib0move(&___nl__im__12,___get_global_const(37));
#line 79
goto label_1;
#line 79
label_2:
#line 79
c_rt_lib0copy(&___nl__im__12, ___nl__im__1);
#line 79
label_1:
#line 79
//clear ___nl__bool__13;
#line 79
c_rt_lib0clear(&___nl__im__14);
#line 80
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(121)));
#line 80
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(167), ___nl__im__12, ___get_global_const(121), ___nl__im__15));
#line 80
c_rt_lib0clear(&___nl__im__12);
#line 80
//clear ___nl__bool__13;
#line 80
c_rt_lib0clear(&___nl__im__14);
#line 80
c_rt_lib0clear(&___nl__im__15);
#line 80
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(1333), ___nl__im__11));
#line 80
c_rt_lib0clear(&___nl__im__11);
#line 80
c_rt_lib0clear(&___nl__im__12);
#line 80
//clear ___nl__bool__13;
#line 80
c_rt_lib0clear(&___nl__im__14);
#line 80
c_rt_lib0clear(&___nl__im__15);
#line 80
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(4, ___get_global_const(167), ___nl__im__1, ___get_global_const(169), ___nl__im__7, ___get_global_const(1096), ___nl__im__9, ___get_global_const(96), ___nl__im__10));
#line 80
//clear ___nl__int__5;
#line 80
c_rt_lib0clear(&___nl__im__6);
#line 80
c_rt_lib0clear(&___nl__im__7);
#line 80
//clear ___nl__int__8;
#line 80
c_rt_lib0clear(&___nl__im__9);
#line 80
c_rt_lib0clear(&___nl__im__10);
#line 80
c_rt_lib0clear(&___nl__im__11);
#line 80
c_rt_lib0clear(&___nl__im__12);
#line 80
//clear ___nl__bool__13;
#line 80
c_rt_lib0clear(&___nl__im__14);
#line 80
c_rt_lib0clear(&___nl__im__15);
#line 80
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 80
c_rt_lib0clear(&___nl__im__4);
#line 80
//clear ___nl__int__5;
#line 80
c_rt_lib0clear(&___nl__im__6);
#line 80
c_rt_lib0clear(&___nl__im__7);
#line 80
//clear ___nl__int__8;
#line 80
c_rt_lib0clear(&___nl__im__9);
#line 80
c_rt_lib0clear(&___nl__im__10);
#line 80
c_rt_lib0clear(&___nl__im__11);
#line 80
c_rt_lib0clear(&___nl__im__12);
#line 80
//clear ___nl__bool__13;
#line 80
c_rt_lib0clear(&___nl__im__14);
#line 80
c_rt_lib0clear(&___nl__im__15);
#line 80
c_rt_lib0array_push(___ref___im__0, ___nl__im__3);
#line 80
c_rt_lib0clear(&___nl__im__3);
#line 80
c_rt_lib0clear(&___nl__im__4);
#line 80
//clear ___nl__int__5;
#line 80
c_rt_lib0clear(&___nl__im__6);
#line 80
c_rt_lib0clear(&___nl__im__7);
#line 80
//clear ___nl__int__8;
#line 80
c_rt_lib0clear(&___nl__im__9);
#line 80
c_rt_lib0clear(&___nl__im__10);
#line 80
c_rt_lib0clear(&___nl__im__11);
#line 80
c_rt_lib0clear(&___nl__im__12);
#line 80
//clear ___nl__bool__13;
#line 80
c_rt_lib0clear(&___nl__im__14);
#line 80
c_rt_lib0clear(&___nl__im__15);
#line 84
c_rt_lib0copy(&___nl__im__16, ___nl__im__1);
#line 84
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(237)));
#line 84
c_rt_lib0copy(&___nl__im__18, ___nl__im__17);
#line 84
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__16, ___nl__im__18));
#line 84
c_rt_lib0clear(&___nl__im__16);
#line 84
c_rt_lib0clear(&___nl__im__17);
#line 84
c_rt_lib0clear(&___nl__im__18);
#line 85
c_rt_lib0copy(&___nl__im__19, ___nl__im__1);
#line 85
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(398)));
#line 85
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(96)));
#line 85
c_rt_lib0clear(&___nl__im__21);
#line 85
c_rt_lib0copy(&___nl__im__22, ___nl__im__20);
#line 85
c_rt_lib0delete(reference_generator_priv0process_type(___ref___im__0, ___nl__im__19, ___nl__im__22));
#line 85
c_rt_lib0clear(&___nl__im__19);
#line 85
c_rt_lib0clear(&___nl__im__20);
#line 85
c_rt_lib0clear(&___nl__im__21);
#line 85
c_rt_lib0clear(&___nl__im__22);
#line 86
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(118)));
#line 86
___nl__int__25 = 0;
#line 86
___nl__int__26 = 1;
#line 86
___nl__int__27 = c_rt_lib0array_len(___nl__im__23);
#line 86
label_5:
#line 86
___nl__int__29 = ___nl__int__25 >= ___nl__int__27;
#line 86
___nl__bool__28 = ___nl__int__29;
#line 86
if(___nl__bool__28){ goto label_3;}
#line 86
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_get(___nl__im__23, ___nl__int__25));
#line 86
c_rt_lib0copy(&___nl__im__24, ___nl__im__30);
#line 87
c_rt_lib0copy(&___nl__im__31, ___nl__im__1);
#line 87
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_const(96)));
#line 87
c_rt_lib0copy(&___nl__im__33, ___nl__im__32);
#line 87
c_rt_lib0delete(reference_generator_priv0process_type(___ref___im__0, ___nl__im__31, ___nl__im__33));
#line 87
c_rt_lib0clear(&___nl__im__31);
#line 87
c_rt_lib0clear(&___nl__im__32);
#line 87
c_rt_lib0clear(&___nl__im__33);
#line 87
c_rt_lib0clear(&___nl__im__24);
#line 87
label_4:
#line 88
___nl__int__25 = ___nl__int__25 + ___nl__int__26;
#line 88
goto label_5;
#line 88
label_3:
#line 88
c_rt_lib0clear(&___nl__im__1);
#line 88
c_rt_lib0clear(&___nl__im__2);
#line 88
c_rt_lib0clear(&___nl__im__3);
#line 88
c_rt_lib0clear(&___nl__im__4);
#line 88
//clear ___nl__int__5;
#line 88
c_rt_lib0clear(&___nl__im__6);
#line 88
c_rt_lib0clear(&___nl__im__7);
#line 88
//clear ___nl__int__8;
#line 88
c_rt_lib0clear(&___nl__im__9);
#line 88
c_rt_lib0clear(&___nl__im__10);
#line 88
c_rt_lib0clear(&___nl__im__11);
#line 88
c_rt_lib0clear(&___nl__im__12);
#line 88
//clear ___nl__bool__13;
#line 88
c_rt_lib0clear(&___nl__im__14);
#line 88
c_rt_lib0clear(&___nl__im__15);
#line 88
c_rt_lib0clear(&___nl__im__16);
#line 88
c_rt_lib0clear(&___nl__im__17);
#line 88
c_rt_lib0clear(&___nl__im__18);
#line 88
c_rt_lib0clear(&___nl__im__19);
#line 88
c_rt_lib0clear(&___nl__im__20);
#line 88
c_rt_lib0clear(&___nl__im__21);
#line 88
c_rt_lib0clear(&___nl__im__22);
#line 88
c_rt_lib0clear(&___nl__im__23);
#line 88
c_rt_lib0clear(&___nl__im__24);
#line 88
//clear ___nl__int__25;
#line 88
//clear ___nl__int__26;
#line 88
//clear ___nl__int__27;
#line 88
//clear ___nl__bool__28;
#line 88
//clear ___nl__int__29;
#line 88
c_rt_lib0clear(&___nl__im__30);
#line 88
c_rt_lib0clear(&___nl__im__31);
#line 88
c_rt_lib0clear(&___nl__im__32);
#line 88
c_rt_lib0clear(&___nl__im__33);
#line 88
return NULL;
}

ImmT  reference_generator_priv0add_ref(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0place_t0type ___nl__im__2,reference_generator0ref_type0type ___nl__im__3) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
reference_generator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 94
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(169)));
#line 94
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 94
c_rt_lib0clear(&___nl__im__7);
#line 94
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__6));
#line 95
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(1096)));
#line 95
___nl__int__9 = getIntFromImm(___nl__im__10);
#line 95
c_rt_lib0clear(&___nl__im__10);
#line 95
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__9));
#line 95
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_const(167), ___nl__im__1, ___get_global_const(169), ___nl__im__8, ___get_global_const(1096), ___nl__im__11, ___get_global_const(96), ___nl__im__3));
#line 95
//clear ___nl__int__6;
#line 95
c_rt_lib0clear(&___nl__im__7);
#line 95
c_rt_lib0clear(&___nl__im__8);
#line 95
//clear ___nl__int__9;
#line 95
c_rt_lib0clear(&___nl__im__10);
#line 95
c_rt_lib0clear(&___nl__im__11);
#line 95
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 95
c_rt_lib0clear(&___nl__im__5);
#line 95
//clear ___nl__int__6;
#line 95
c_rt_lib0clear(&___nl__im__7);
#line 95
c_rt_lib0clear(&___nl__im__8);
#line 95
//clear ___nl__int__9;
#line 95
c_rt_lib0clear(&___nl__im__10);
#line 95
c_rt_lib0clear(&___nl__im__11);
#line 95
c_rt_lib0array_push(___ref___im__0, ___nl__im__4);
#line 95
c_rt_lib0clear(&___nl__im__4);
#line 95
c_rt_lib0clear(&___nl__im__5);
#line 95
//clear ___nl__int__6;
#line 95
c_rt_lib0clear(&___nl__im__7);
#line 95
c_rt_lib0clear(&___nl__im__8);
#line 95
//clear ___nl__int__9;
#line 95
c_rt_lib0clear(&___nl__im__10);
#line 95
c_rt_lib0clear(&___nl__im__11);
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
//clear ___nl__int__6;
#line 95
c_rt_lib0clear(&___nl__im__7);
#line 95
c_rt_lib0clear(&___nl__im__8);
#line 95
//clear ___nl__int__9;
#line 95
c_rt_lib0clear(&___nl__im__10);
#line 95
c_rt_lib0clear(&___nl__im__11);
#line 95
return NULL;
}

ImmT  reference_generator_priv0process_cmd(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0cmd_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
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
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
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
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
#line 101
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(237)));
#line 101
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1014));
#line 101
if(___nl__bool__4){ goto label_2;}
#line 103
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1015));
#line 103
if(___nl__bool__4){ goto label_3;}
#line 105
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1016));
#line 105
if(___nl__bool__4){ goto label_4;}
#line 107
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1017));
#line 107
if(___nl__bool__4){ goto label_5;}
#line 109
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(175));
#line 109
if(___nl__bool__4){ goto label_6;}
#line 111
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1018));
#line 111
if(___nl__bool__4){ goto label_7;}
#line 113
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1019));
#line 113
if(___nl__bool__4){ goto label_8;}
#line 115
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1020));
#line 115
if(___nl__bool__4){ goto label_9;}
#line 117
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1021));
#line 117
if(___nl__bool__4){ goto label_10;}
#line 119
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1022));
#line 119
if(___nl__bool__4){ goto label_11;}
#line 120
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1023));
#line 120
if(___nl__bool__4){ goto label_12;}
#line 121
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1024));
#line 121
if(___nl__bool__4){ goto label_13;}
#line 123
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(229));
#line 123
if(___nl__bool__4){ goto label_14;}
#line 125
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1026));
#line 125
if(___nl__bool__4){ goto label_15;}
#line 127
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(123));
#line 127
if(___nl__bool__4){ goto label_16;}
#line 129
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(260));
#line 129
if(___nl__bool__4){ goto label_17;}
#line 131
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(119));
#line 131
if(___nl__bool__4){ goto label_18;}
#line 133
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1025));
#line 133
if(___nl__bool__4){ goto label_19;}
#line 135
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(255));
#line 135
if(___nl__bool__4){ goto label_20;}
#line 137
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1027));
#line 137
if(___nl__bool__4){ goto label_21;}
#line 137
c_rt_lib0move(&___nl__im__5,___get_global_const(16));
#line 137
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 137
nl_die_arg(___nl__im__5);
#line 101
label_2:
#line 101
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1014)));
#line 101
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 102
c_rt_lib0copy(&___nl__im__8, ___nl__im__1);
#line 102
c_rt_lib0copy(&___nl__im__9, ___nl__im__6);
#line 102
c_rt_lib0delete(reference_generator_priv0process_if(___ref___im__0, ___nl__im__8, ___nl__im__9));
#line 102
c_rt_lib0clear(&___nl__im__8);
#line 102
c_rt_lib0clear(&___nl__im__9);
#line 103
goto label_1;
#line 103
label_3:
#line 103
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1015)));
#line 103
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 104
c_rt_lib0copy(&___nl__im__12, ___nl__im__1);
#line 104
c_rt_lib0copy(&___nl__im__13, ___nl__im__10);
#line 104
c_rt_lib0delete(reference_generator_priv0process_for(___ref___im__0, ___nl__im__12, ___nl__im__13));
#line 104
c_rt_lib0clear(&___nl__im__12);
#line 104
c_rt_lib0clear(&___nl__im__13);
#line 105
goto label_1;
#line 105
label_4:
#line 105
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1016)));
#line 105
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 106
c_rt_lib0copy(&___nl__im__16, ___nl__im__1);
#line 106
c_rt_lib0copy(&___nl__im__17, ___nl__im__14);
#line 106
c_rt_lib0delete(reference_generator_priv0process_fora(___ref___im__0, ___nl__im__16, ___nl__im__17));
#line 106
c_rt_lib0clear(&___nl__im__16);
#line 106
c_rt_lib0clear(&___nl__im__17);
#line 107
goto label_1;
#line 107
label_5:
#line 107
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1017)));
#line 107
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 108
c_rt_lib0copy(&___nl__im__20, ___nl__im__1);
#line 108
c_rt_lib0copy(&___nl__im__21, ___nl__im__18);
#line 108
c_rt_lib0delete(reference_generator_priv0process_forh(___ref___im__0, ___nl__im__20, ___nl__im__21));
#line 108
c_rt_lib0clear(&___nl__im__20);
#line 108
c_rt_lib0clear(&___nl__im__21);
#line 109
goto label_1;
#line 109
label_6:
#line 109
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(175)));
#line 109
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 110
c_rt_lib0copy(&___nl__im__24, ___nl__im__1);
#line 110
c_rt_lib0copy(&___nl__im__25, ___nl__im__22);
#line 110
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__24, ___nl__im__25));
#line 110
c_rt_lib0clear(&___nl__im__24);
#line 110
c_rt_lib0clear(&___nl__im__25);
#line 111
goto label_1;
#line 111
label_7:
#line 111
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1018)));
#line 111
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 112
c_rt_lib0copy(&___nl__im__28, ___nl__im__1);
#line 112
c_rt_lib0copy(&___nl__im__29, ___nl__im__26);
#line 112
c_rt_lib0delete(reference_generator_priv0process_rep(___ref___im__0, ___nl__im__28, ___nl__im__29));
#line 112
c_rt_lib0clear(&___nl__im__28);
#line 112
c_rt_lib0clear(&___nl__im__29);
#line 113
goto label_1;
#line 113
label_8:
#line 113
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1019)));
#line 113
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 114
c_rt_lib0copy(&___nl__im__32, ___nl__im__1);
#line 114
c_rt_lib0copy(&___nl__im__33, ___nl__im__30);
#line 114
c_rt_lib0delete(reference_generator_priv0process_while(___ref___im__0, ___nl__im__32, ___nl__im__33));
#line 114
c_rt_lib0clear(&___nl__im__32);
#line 114
c_rt_lib0clear(&___nl__im__33);
#line 115
goto label_1;
#line 115
label_9:
#line 115
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1020)));
#line 115
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 116
c_rt_lib0copy(&___nl__im__36, ___nl__im__1);
#line 116
c_rt_lib0copy(&___nl__im__37, ___nl__im__34);
#line 116
c_rt_lib0delete(reference_generator_priv0process_if_mod(___ref___im__0, ___nl__im__36, ___nl__im__37));
#line 116
c_rt_lib0clear(&___nl__im__36);
#line 116
c_rt_lib0clear(&___nl__im__37);
#line 117
goto label_1;
#line 117
label_10:
#line 117
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1021)));
#line 117
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 118
c_rt_lib0copy(&___nl__im__40, ___nl__im__1);
#line 118
c_rt_lib0copy(&___nl__im__41, ___nl__im__38);
#line 118
c_rt_lib0delete(reference_generator_priv0process_if_mod(___ref___im__0, ___nl__im__40, ___nl__im__41));
#line 118
c_rt_lib0clear(&___nl__im__40);
#line 118
c_rt_lib0clear(&___nl__im__41);
#line 119
goto label_1;
#line 119
label_11:
#line 120
goto label_1;
#line 120
label_12:
#line 121
goto label_1;
#line 121
label_13:
#line 121
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1024)));
#line 121
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 122
c_rt_lib0copy(&___nl__im__44, ___nl__im__1);
#line 122
c_rt_lib0copy(&___nl__im__45, ___nl__im__42);
#line 122
c_rt_lib0delete(reference_generator_priv0process_match(___ref___im__0, ___nl__im__44, ___nl__im__45));
#line 122
c_rt_lib0clear(&___nl__im__44);
#line 122
c_rt_lib0clear(&___nl__im__45);
#line 123
goto label_1;
#line 123
label_14:
#line 123
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(229)));
#line 123
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 124
c_rt_lib0copy(&___nl__im__48, ___nl__im__1);
#line 124
c_rt_lib0copy(&___nl__im__49, ___nl__im__46);
#line 124
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__48, ___nl__im__49));
#line 124
c_rt_lib0clear(&___nl__im__48);
#line 124
c_rt_lib0clear(&___nl__im__49);
#line 125
goto label_1;
#line 125
label_15:
#line 125
c_rt_lib0move(&___nl__im__51, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1026)));
#line 125
c_rt_lib0copy(&___nl__im__50, ___nl__im__51);
#line 126
c_rt_lib0copy(&___nl__im__52, ___nl__im__1);
#line 126
c_rt_lib0copy(&___nl__im__53, ___nl__im__50);
#line 126
c_rt_lib0delete(reference_generator_priv0process_try(___ref___im__0, ___nl__im__52, ___nl__im__53));
#line 126
c_rt_lib0clear(&___nl__im__52);
#line 126
c_rt_lib0clear(&___nl__im__53);
#line 127
goto label_1;
#line 127
label_16:
#line 127
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(123)));
#line 127
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 128
c_rt_lib0copy(&___nl__im__56, ___nl__im__1);
#line 128
c_rt_lib0copy(&___nl__im__57, ___nl__im__54);
#line 128
c_rt_lib0delete(reference_generator_priv0process_try(___ref___im__0, ___nl__im__56, ___nl__im__57));
#line 128
c_rt_lib0clear(&___nl__im__56);
#line 128
c_rt_lib0clear(&___nl__im__57);
#line 129
goto label_1;
#line 129
label_17:
#line 129
c_rt_lib0move(&___nl__im__59, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(260)));
#line 129
c_rt_lib0copy(&___nl__im__58, ___nl__im__59);
#line 130
c_rt_lib0copy(&___nl__im__60, ___nl__im__1);
#line 130
c_rt_lib0copy(&___nl__im__61, ___nl__im__58);
#line 130
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__60, ___nl__im__61));
#line 130
c_rt_lib0clear(&___nl__im__60);
#line 130
c_rt_lib0clear(&___nl__im__61);
#line 131
goto label_1;
#line 131
label_18:
#line 131
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(119)));
#line 131
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 132
c_rt_lib0copy(&___nl__im__64, ___nl__im__1);
#line 132
c_rt_lib0copy(&___nl__im__65, ___nl__im__62);
#line 132
c_rt_lib0delete(reference_generator_priv0process_return(___ref___im__0, ___nl__im__64, ___nl__im__65));
#line 132
c_rt_lib0clear(&___nl__im__64);
#line 132
c_rt_lib0clear(&___nl__im__65);
#line 133
goto label_1;
#line 133
label_19:
#line 133
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1025)));
#line 133
c_rt_lib0copy(&___nl__im__66, ___nl__im__67);
#line 134
c_rt_lib0copy(&___nl__im__68, ___nl__im__1);
#line 134
c_rt_lib0copy(&___nl__im__69, ___nl__im__66);
#line 134
c_rt_lib0delete(reference_generator_priv0process_block(___ref___im__0, ___nl__im__68, ___nl__im__69));
#line 134
c_rt_lib0clear(&___nl__im__68);
#line 134
c_rt_lib0clear(&___nl__im__69);
#line 135
goto label_1;
#line 135
label_20:
#line 135
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(255)));
#line 135
c_rt_lib0copy(&___nl__im__70, ___nl__im__71);
#line 136
c_rt_lib0copy(&___nl__im__72, ___nl__im__1);
#line 136
c_rt_lib0copy(&___nl__im__73, ___nl__im__70);
#line 136
c_rt_lib0delete(reference_generator_priv0process_die(___ref___im__0, ___nl__im__72, ___nl__im__73));
#line 136
c_rt_lib0clear(&___nl__im__72);
#line 136
c_rt_lib0clear(&___nl__im__73);
#line 137
goto label_1;
#line 137
label_21:
#line 138
goto label_1;
#line 138
label_1:
#line 138
c_rt_lib0clear(&___nl__im__1);
#line 138
c_rt_lib0clear(&___nl__im__2);
#line 138
c_rt_lib0clear(&___nl__im__3);
#line 138
//clear ___nl__bool__4;
#line 138
c_rt_lib0clear(&___nl__im__5);
#line 138
c_rt_lib0clear(&___nl__im__6);
#line 138
c_rt_lib0clear(&___nl__im__7);
#line 138
c_rt_lib0clear(&___nl__im__8);
#line 138
c_rt_lib0clear(&___nl__im__9);
#line 138
c_rt_lib0clear(&___nl__im__10);
#line 138
c_rt_lib0clear(&___nl__im__11);
#line 138
c_rt_lib0clear(&___nl__im__12);
#line 138
c_rt_lib0clear(&___nl__im__13);
#line 138
c_rt_lib0clear(&___nl__im__14);
#line 138
c_rt_lib0clear(&___nl__im__15);
#line 138
c_rt_lib0clear(&___nl__im__16);
#line 138
c_rt_lib0clear(&___nl__im__17);
#line 138
c_rt_lib0clear(&___nl__im__18);
#line 138
c_rt_lib0clear(&___nl__im__19);
#line 138
c_rt_lib0clear(&___nl__im__20);
#line 138
c_rt_lib0clear(&___nl__im__21);
#line 138
c_rt_lib0clear(&___nl__im__22);
#line 138
c_rt_lib0clear(&___nl__im__23);
#line 138
c_rt_lib0clear(&___nl__im__24);
#line 138
c_rt_lib0clear(&___nl__im__25);
#line 138
c_rt_lib0clear(&___nl__im__26);
#line 138
c_rt_lib0clear(&___nl__im__27);
#line 138
c_rt_lib0clear(&___nl__im__28);
#line 138
c_rt_lib0clear(&___nl__im__29);
#line 138
c_rt_lib0clear(&___nl__im__30);
#line 138
c_rt_lib0clear(&___nl__im__31);
#line 138
c_rt_lib0clear(&___nl__im__32);
#line 138
c_rt_lib0clear(&___nl__im__33);
#line 138
c_rt_lib0clear(&___nl__im__34);
#line 138
c_rt_lib0clear(&___nl__im__35);
#line 138
c_rt_lib0clear(&___nl__im__36);
#line 138
c_rt_lib0clear(&___nl__im__37);
#line 138
c_rt_lib0clear(&___nl__im__38);
#line 138
c_rt_lib0clear(&___nl__im__39);
#line 138
c_rt_lib0clear(&___nl__im__40);
#line 138
c_rt_lib0clear(&___nl__im__41);
#line 138
c_rt_lib0clear(&___nl__im__42);
#line 138
c_rt_lib0clear(&___nl__im__43);
#line 138
c_rt_lib0clear(&___nl__im__44);
#line 138
c_rt_lib0clear(&___nl__im__45);
#line 138
c_rt_lib0clear(&___nl__im__46);
#line 138
c_rt_lib0clear(&___nl__im__47);
#line 138
c_rt_lib0clear(&___nl__im__48);
#line 138
c_rt_lib0clear(&___nl__im__49);
#line 138
c_rt_lib0clear(&___nl__im__50);
#line 138
c_rt_lib0clear(&___nl__im__51);
#line 138
c_rt_lib0clear(&___nl__im__52);
#line 138
c_rt_lib0clear(&___nl__im__53);
#line 138
c_rt_lib0clear(&___nl__im__54);
#line 138
c_rt_lib0clear(&___nl__im__55);
#line 138
c_rt_lib0clear(&___nl__im__56);
#line 138
c_rt_lib0clear(&___nl__im__57);
#line 138
c_rt_lib0clear(&___nl__im__58);
#line 138
c_rt_lib0clear(&___nl__im__59);
#line 138
c_rt_lib0clear(&___nl__im__60);
#line 138
c_rt_lib0clear(&___nl__im__61);
#line 138
c_rt_lib0clear(&___nl__im__62);
#line 138
c_rt_lib0clear(&___nl__im__63);
#line 138
c_rt_lib0clear(&___nl__im__64);
#line 138
c_rt_lib0clear(&___nl__im__65);
#line 138
c_rt_lib0clear(&___nl__im__66);
#line 138
c_rt_lib0clear(&___nl__im__67);
#line 138
c_rt_lib0clear(&___nl__im__68);
#line 138
c_rt_lib0clear(&___nl__im__69);
#line 138
c_rt_lib0clear(&___nl__im__70);
#line 138
c_rt_lib0clear(&___nl__im__71);
#line 138
c_rt_lib0clear(&___nl__im__72);
#line 138
c_rt_lib0clear(&___nl__im__73);
#line 138
return NULL;
}

ImmT  reference_generator_priv0process_try(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0try_ensure_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
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
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
#line 142
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(1041));
#line 142
if(___nl__bool__3){ goto label_2;}
#line 144
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(688));
#line 144
if(___nl__bool__3){ goto label_3;}
#line 146
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(1042));
#line 146
if(___nl__bool__3){ goto label_4;}
#line 146
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 146
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 146
nl_die_arg(___nl__im__4);
#line 142
label_2:
#line 142
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(1041)));
#line 142
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 143
c_rt_lib0copy(&___nl__im__7, ___nl__im__1);
#line 143
c_rt_lib0copy(&___nl__im__8, ___nl__im__5);
#line 143
c_rt_lib0delete(reference_generator_priv0process_bin_op(___ref___im__0, ___nl__im__7, ___nl__im__8));
#line 143
c_rt_lib0clear(&___nl__im__7);
#line 143
c_rt_lib0clear(&___nl__im__8);
#line 144
goto label_1;
#line 144
label_3:
#line 144
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(688)));
#line 144
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 145
c_rt_lib0copy(&___nl__im__11, ___nl__im__1);
#line 145
c_rt_lib0copy(&___nl__im__12, ___nl__im__9);
#line 145
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__11, ___nl__im__12));
#line 145
c_rt_lib0clear(&___nl__im__11);
#line 145
c_rt_lib0clear(&___nl__im__12);
#line 146
goto label_1;
#line 146
label_4:
#line 146
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(1042)));
#line 146
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 147
c_rt_lib0copy(&___nl__im__15, ___nl__im__1);
#line 147
c_rt_lib0copy(&___nl__im__16, ___nl__im__13);
#line 147
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__15, ___nl__im__16));
#line 147
c_rt_lib0clear(&___nl__im__15);
#line 147
c_rt_lib0clear(&___nl__im__16);
#line 148
goto label_1;
#line 148
label_1:
#line 148
c_rt_lib0clear(&___nl__im__1);
#line 148
c_rt_lib0clear(&___nl__im__2);
#line 148
//clear ___nl__bool__3;
#line 148
c_rt_lib0clear(&___nl__im__4);
#line 148
c_rt_lib0clear(&___nl__im__5);
#line 148
c_rt_lib0clear(&___nl__im__6);
#line 148
c_rt_lib0clear(&___nl__im__7);
#line 148
c_rt_lib0clear(&___nl__im__8);
#line 148
c_rt_lib0clear(&___nl__im__9);
#line 148
c_rt_lib0clear(&___nl__im__10);
#line 148
c_rt_lib0clear(&___nl__im__11);
#line 148
c_rt_lib0clear(&___nl__im__12);
#line 148
c_rt_lib0clear(&___nl__im__13);
#line 148
c_rt_lib0clear(&___nl__im__14);
#line 148
c_rt_lib0clear(&___nl__im__15);
#line 148
c_rt_lib0clear(&___nl__im__16);
#line 148
return NULL;
}

ImmT  reference_generator_priv0process_return(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0value_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 152
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 152
c_rt_lib0copy(&___nl__im__4, ___nl__im__2);
#line 152
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__3, ___nl__im__4));
#line 152
c_rt_lib0clear(&___nl__im__3);
#line 152
c_rt_lib0clear(&___nl__im__4);
#line 152
c_rt_lib0clear(&___nl__im__1);
#line 152
c_rt_lib0clear(&___nl__im__2);
#line 152
c_rt_lib0clear(&___nl__im__3);
#line 152
c_rt_lib0clear(&___nl__im__4);
#line 152
return NULL;
}

ImmT  reference_generator_priv0process_block(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0block_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 156
___nl__int__4 = 0;
#line 156
___nl__int__5 = 1;
#line 156
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 156
label_3:
#line 156
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 156
___nl__bool__7 = ___nl__int__8;
#line 156
if(___nl__bool__7){ goto label_1;}
#line 156
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 156
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 157
c_rt_lib0copy(&___nl__im__10, ___nl__im__1);
#line 157
c_rt_lib0copy(&___nl__im__11, ___nl__im__3);
#line 157
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__10, ___nl__im__11));
#line 157
c_rt_lib0clear(&___nl__im__10);
#line 157
c_rt_lib0clear(&___nl__im__11);
#line 157
c_rt_lib0clear(&___nl__im__3);
#line 157
label_2:
#line 158
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 158
goto label_3;
#line 158
label_1:
#line 158
c_rt_lib0clear(&___nl__im__1);
#line 158
c_rt_lib0clear(&___nl__im__2);
#line 158
c_rt_lib0clear(&___nl__im__3);
#line 158
//clear ___nl__int__4;
#line 158
//clear ___nl__int__5;
#line 158
//clear ___nl__int__6;
#line 158
//clear ___nl__bool__7;
#line 158
//clear ___nl__int__8;
#line 158
c_rt_lib0clear(&___nl__im__9);
#line 158
c_rt_lib0clear(&___nl__im__10);
#line 158
c_rt_lib0clear(&___nl__im__11);
#line 158
return NULL;
}

ImmT  reference_generator_priv0process_die(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0die_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 162
___nl__int__4 = 0;
#line 162
___nl__int__5 = 1;
#line 162
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 162
label_3:
#line 162
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 162
___nl__bool__7 = ___nl__int__8;
#line 162
if(___nl__bool__7){ goto label_1;}
#line 162
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 162
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 163
c_rt_lib0copy(&___nl__im__10, ___nl__im__1);
#line 163
c_rt_lib0copy(&___nl__im__11, ___nl__im__3);
#line 163
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__10, ___nl__im__11));
#line 163
c_rt_lib0clear(&___nl__im__10);
#line 163
c_rt_lib0clear(&___nl__im__11);
#line 163
c_rt_lib0clear(&___nl__im__3);
#line 163
label_2:
#line 164
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 164
goto label_3;
#line 164
label_1:
#line 164
c_rt_lib0clear(&___nl__im__1);
#line 164
c_rt_lib0clear(&___nl__im__2);
#line 164
c_rt_lib0clear(&___nl__im__3);
#line 164
//clear ___nl__int__4;
#line 164
//clear ___nl__int__5;
#line 164
//clear ___nl__int__6;
#line 164
//clear ___nl__bool__7;
#line 164
//clear ___nl__int__8;
#line 164
c_rt_lib0clear(&___nl__im__9);
#line 164
c_rt_lib0clear(&___nl__im__10);
#line 164
c_rt_lib0clear(&___nl__im__11);
#line 164
return NULL;
}

ImmT  reference_generator_priv0process_if(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0if_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
bool  ___nl__bool__14 = false;
INT  ___nl__int__15 = 0;
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
#line 168
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 168
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(1028)));
#line 168
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 168
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__3, ___nl__im__5));
#line 168
c_rt_lib0clear(&___nl__im__3);
#line 168
c_rt_lib0clear(&___nl__im__4);
#line 168
c_rt_lib0clear(&___nl__im__5);
#line 169
c_rt_lib0copy(&___nl__im__6, ___nl__im__1);
#line 169
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(1014)));
#line 169
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 169
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__6, ___nl__im__8));
#line 169
c_rt_lib0clear(&___nl__im__6);
#line 169
c_rt_lib0clear(&___nl__im__7);
#line 169
c_rt_lib0clear(&___nl__im__8);
#line 170
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(1029)));
#line 170
___nl__int__11 = 0;
#line 170
___nl__int__12 = 1;
#line 170
___nl__int__13 = c_rt_lib0array_len(___nl__im__9);
#line 170
label_3:
#line 170
___nl__int__15 = ___nl__int__11 >= ___nl__int__13;
#line 170
___nl__bool__14 = ___nl__int__15;
#line 170
if(___nl__bool__14){ goto label_1;}
#line 170
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__9, ___nl__int__11));
#line 170
c_rt_lib0copy(&___nl__im__10, ___nl__im__16);
#line 171
c_rt_lib0copy(&___nl__im__17, ___nl__im__1);
#line 171
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(1028)));
#line 171
c_rt_lib0copy(&___nl__im__19, ___nl__im__18);
#line 171
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__17, ___nl__im__19));
#line 171
c_rt_lib0clear(&___nl__im__17);
#line 171
c_rt_lib0clear(&___nl__im__18);
#line 171
c_rt_lib0clear(&___nl__im__19);
#line 172
c_rt_lib0copy(&___nl__im__20, ___nl__im__1);
#line 172
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(237)));
#line 172
c_rt_lib0copy(&___nl__im__22, ___nl__im__21);
#line 172
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__20, ___nl__im__22));
#line 172
c_rt_lib0clear(&___nl__im__20);
#line 172
c_rt_lib0clear(&___nl__im__21);
#line 172
c_rt_lib0clear(&___nl__im__22);
#line 172
c_rt_lib0clear(&___nl__im__10);
#line 172
label_2:
#line 173
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 173
goto label_3;
#line 173
label_1:
#line 174
c_rt_lib0copy(&___nl__im__23, ___nl__im__1);
#line 174
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(1030)));
#line 174
c_rt_lib0copy(&___nl__im__25, ___nl__im__24);
#line 174
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__23, ___nl__im__25));
#line 174
c_rt_lib0clear(&___nl__im__23);
#line 174
c_rt_lib0clear(&___nl__im__24);
#line 174
c_rt_lib0clear(&___nl__im__25);
#line 174
c_rt_lib0clear(&___nl__im__1);
#line 174
c_rt_lib0clear(&___nl__im__2);
#line 174
c_rt_lib0clear(&___nl__im__3);
#line 174
c_rt_lib0clear(&___nl__im__4);
#line 174
c_rt_lib0clear(&___nl__im__5);
#line 174
c_rt_lib0clear(&___nl__im__6);
#line 174
c_rt_lib0clear(&___nl__im__7);
#line 174
c_rt_lib0clear(&___nl__im__8);
#line 174
c_rt_lib0clear(&___nl__im__9);
#line 174
c_rt_lib0clear(&___nl__im__10);
#line 174
//clear ___nl__int__11;
#line 174
//clear ___nl__int__12;
#line 174
//clear ___nl__int__13;
#line 174
//clear ___nl__bool__14;
#line 174
//clear ___nl__int__15;
#line 174
c_rt_lib0clear(&___nl__im__16);
#line 174
c_rt_lib0clear(&___nl__im__17);
#line 174
c_rt_lib0clear(&___nl__im__18);
#line 174
c_rt_lib0clear(&___nl__im__19);
#line 174
c_rt_lib0clear(&___nl__im__20);
#line 174
c_rt_lib0clear(&___nl__im__21);
#line 174
c_rt_lib0clear(&___nl__im__22);
#line 174
c_rt_lib0clear(&___nl__im__23);
#line 174
c_rt_lib0clear(&___nl__im__24);
#line 174
c_rt_lib0clear(&___nl__im__25);
#line 174
return NULL;
}

ImmT  reference_generator_priv0process_for(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0for_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
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
#line 178
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(1031)));
#line 178
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(260));
#line 178
if(___nl__bool__4){ goto label_2;}
#line 180
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(229));
#line 180
if(___nl__bool__4){ goto label_3;}
#line 180
c_rt_lib0move(&___nl__im__5,___get_global_const(16));
#line 180
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 180
nl_die_arg(___nl__im__5);
#line 178
label_2:
#line 178
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(260)));
#line 178
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 179
c_rt_lib0copy(&___nl__im__8, ___nl__im__1);
#line 179
c_rt_lib0copy(&___nl__im__9, ___nl__im__6);
#line 179
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__8, ___nl__im__9));
#line 179
c_rt_lib0clear(&___nl__im__8);
#line 179
c_rt_lib0clear(&___nl__im__9);
#line 180
goto label_1;
#line 180
label_3:
#line 180
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(229)));
#line 180
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 181
c_rt_lib0copy(&___nl__im__12, ___nl__im__1);
#line 181
c_rt_lib0copy(&___nl__im__13, ___nl__im__10);
#line 181
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__12, ___nl__im__13));
#line 181
c_rt_lib0clear(&___nl__im__12);
#line 181
c_rt_lib0clear(&___nl__im__13);
#line 182
goto label_1;
#line 182
label_1:
#line 184
c_rt_lib0copy(&___nl__im__14, ___nl__im__1);
#line 184
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(573)));
#line 184
c_rt_lib0copy(&___nl__im__16, ___nl__im__15);
#line 184
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__14, ___nl__im__16));
#line 184
c_rt_lib0clear(&___nl__im__14);
#line 184
c_rt_lib0clear(&___nl__im__15);
#line 184
c_rt_lib0clear(&___nl__im__16);
#line 185
c_rt_lib0copy(&___nl__im__17, ___nl__im__1);
#line 185
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(1028)));
#line 185
c_rt_lib0copy(&___nl__im__19, ___nl__im__18);
#line 185
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__17, ___nl__im__19));
#line 185
c_rt_lib0clear(&___nl__im__17);
#line 185
c_rt_lib0clear(&___nl__im__18);
#line 185
c_rt_lib0clear(&___nl__im__19);
#line 186
c_rt_lib0copy(&___nl__im__20, ___nl__im__1);
#line 186
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(237)));
#line 186
c_rt_lib0copy(&___nl__im__22, ___nl__im__21);
#line 186
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__20, ___nl__im__22));
#line 186
c_rt_lib0clear(&___nl__im__20);
#line 186
c_rt_lib0clear(&___nl__im__21);
#line 186
c_rt_lib0clear(&___nl__im__22);
#line 186
c_rt_lib0clear(&___nl__im__1);
#line 186
c_rt_lib0clear(&___nl__im__2);
#line 186
c_rt_lib0clear(&___nl__im__3);
#line 186
//clear ___nl__bool__4;
#line 186
c_rt_lib0clear(&___nl__im__5);
#line 186
c_rt_lib0clear(&___nl__im__6);
#line 186
c_rt_lib0clear(&___nl__im__7);
#line 186
c_rt_lib0clear(&___nl__im__8);
#line 186
c_rt_lib0clear(&___nl__im__9);
#line 186
c_rt_lib0clear(&___nl__im__10);
#line 186
c_rt_lib0clear(&___nl__im__11);
#line 186
c_rt_lib0clear(&___nl__im__12);
#line 186
c_rt_lib0clear(&___nl__im__13);
#line 186
c_rt_lib0clear(&___nl__im__14);
#line 186
c_rt_lib0clear(&___nl__im__15);
#line 186
c_rt_lib0clear(&___nl__im__16);
#line 186
c_rt_lib0clear(&___nl__im__17);
#line 186
c_rt_lib0clear(&___nl__im__18);
#line 186
c_rt_lib0clear(&___nl__im__19);
#line 186
c_rt_lib0clear(&___nl__im__20);
#line 186
c_rt_lib0clear(&___nl__im__21);
#line 186
c_rt_lib0clear(&___nl__im__22);
#line 186
return NULL;
}

ImmT  reference_generator_priv0process_fora(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0fora_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 190
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 190
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(573)));
#line 190
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 190
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__3, ___nl__im__5));
#line 190
c_rt_lib0clear(&___nl__im__3);
#line 190
c_rt_lib0clear(&___nl__im__4);
#line 190
c_rt_lib0clear(&___nl__im__5);
#line 191
c_rt_lib0copy(&___nl__im__6, ___nl__im__1);
#line 191
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(237)));
#line 191
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 191
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__6, ___nl__im__8));
#line 191
c_rt_lib0clear(&___nl__im__6);
#line 191
c_rt_lib0clear(&___nl__im__7);
#line 191
c_rt_lib0clear(&___nl__im__8);
#line 192
c_rt_lib0copy(&___nl__im__9, ___nl__im__1);
#line 192
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(38)));
#line 192
c_rt_lib0copy(&___nl__im__11, ___nl__im__10);
#line 192
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__9, ___nl__im__11));
#line 192
c_rt_lib0clear(&___nl__im__9);
#line 192
c_rt_lib0clear(&___nl__im__10);
#line 192
c_rt_lib0clear(&___nl__im__11);
#line 192
c_rt_lib0clear(&___nl__im__1);
#line 192
c_rt_lib0clear(&___nl__im__2);
#line 192
c_rt_lib0clear(&___nl__im__3);
#line 192
c_rt_lib0clear(&___nl__im__4);
#line 192
c_rt_lib0clear(&___nl__im__5);
#line 192
c_rt_lib0clear(&___nl__im__6);
#line 192
c_rt_lib0clear(&___nl__im__7);
#line 192
c_rt_lib0clear(&___nl__im__8);
#line 192
c_rt_lib0clear(&___nl__im__9);
#line 192
c_rt_lib0clear(&___nl__im__10);
#line 192
c_rt_lib0clear(&___nl__im__11);
#line 192
return NULL;
}

ImmT  reference_generator_priv0process_forh(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0forh_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
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
#line 196
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 196
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(380)));
#line 196
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 196
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__3, ___nl__im__5));
#line 196
c_rt_lib0clear(&___nl__im__3);
#line 196
c_rt_lib0clear(&___nl__im__4);
#line 196
c_rt_lib0clear(&___nl__im__5);
#line 197
c_rt_lib0copy(&___nl__im__6, ___nl__im__1);
#line 197
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(234)));
#line 197
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 197
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__6, ___nl__im__8));
#line 197
c_rt_lib0clear(&___nl__im__6);
#line 197
c_rt_lib0clear(&___nl__im__7);
#line 197
c_rt_lib0clear(&___nl__im__8);
#line 198
c_rt_lib0copy(&___nl__im__9, ___nl__im__1);
#line 198
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(378)));
#line 198
c_rt_lib0copy(&___nl__im__11, ___nl__im__10);
#line 198
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__9, ___nl__im__11));
#line 198
c_rt_lib0clear(&___nl__im__9);
#line 198
c_rt_lib0clear(&___nl__im__10);
#line 198
c_rt_lib0clear(&___nl__im__11);
#line 199
c_rt_lib0copy(&___nl__im__12, ___nl__im__1);
#line 199
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(237)));
#line 199
c_rt_lib0copy(&___nl__im__14, ___nl__im__13);
#line 199
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__12, ___nl__im__14));
#line 199
c_rt_lib0clear(&___nl__im__12);
#line 199
c_rt_lib0clear(&___nl__im__13);
#line 199
c_rt_lib0clear(&___nl__im__14);
#line 199
c_rt_lib0clear(&___nl__im__1);
#line 199
c_rt_lib0clear(&___nl__im__2);
#line 199
c_rt_lib0clear(&___nl__im__3);
#line 199
c_rt_lib0clear(&___nl__im__4);
#line 199
c_rt_lib0clear(&___nl__im__5);
#line 199
c_rt_lib0clear(&___nl__im__6);
#line 199
c_rt_lib0clear(&___nl__im__7);
#line 199
c_rt_lib0clear(&___nl__im__8);
#line 199
c_rt_lib0clear(&___nl__im__9);
#line 199
c_rt_lib0clear(&___nl__im__10);
#line 199
c_rt_lib0clear(&___nl__im__11);
#line 199
c_rt_lib0clear(&___nl__im__12);
#line 199
c_rt_lib0clear(&___nl__im__13);
#line 199
c_rt_lib0clear(&___nl__im__14);
#line 199
return NULL;
}

ImmT  reference_generator_priv0process_var_decl(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0variable_declaration_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
#line 203
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(229)));
#line 203
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(229));
#line 203
if(___nl__bool__4){ goto label_2;}
#line 205
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(74));
#line 205
if(___nl__bool__4){ goto label_3;}
#line 205
c_rt_lib0move(&___nl__im__5,___get_global_const(16));
#line 205
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 205
nl_die_arg(___nl__im__5);
#line 203
label_2:
#line 203
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(229)));
#line 203
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 204
c_rt_lib0copy(&___nl__im__8, ___nl__im__1);
#line 204
c_rt_lib0copy(&___nl__im__9, ___nl__im__6);
#line 204
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__8, ___nl__im__9));
#line 204
c_rt_lib0clear(&___nl__im__8);
#line 204
c_rt_lib0clear(&___nl__im__9);
#line 205
goto label_1;
#line 205
label_3:
#line 206
goto label_1;
#line 206
label_1:
#line 207
c_rt_lib0copy(&___nl__im__10, ___nl__im__1);
#line 207
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(96)));
#line 207
c_rt_lib0copy(&___nl__im__12, ___nl__im__11);
#line 207
c_rt_lib0delete(reference_generator_priv0process_type(___ref___im__0, ___nl__im__10, ___nl__im__12));
#line 207
c_rt_lib0clear(&___nl__im__10);
#line 207
c_rt_lib0clear(&___nl__im__11);
#line 207
c_rt_lib0clear(&___nl__im__12);
#line 207
c_rt_lib0clear(&___nl__im__1);
#line 207
c_rt_lib0clear(&___nl__im__2);
#line 207
c_rt_lib0clear(&___nl__im__3);
#line 207
//clear ___nl__bool__4;
#line 207
c_rt_lib0clear(&___nl__im__5);
#line 207
c_rt_lib0clear(&___nl__im__6);
#line 207
c_rt_lib0clear(&___nl__im__7);
#line 207
c_rt_lib0clear(&___nl__im__8);
#line 207
c_rt_lib0clear(&___nl__im__9);
#line 207
c_rt_lib0clear(&___nl__im__10);
#line 207
c_rt_lib0clear(&___nl__im__11);
#line 207
c_rt_lib0clear(&___nl__im__12);
#line 207
return NULL;
}

ImmT  reference_generator_priv0process_type(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0variable_type_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 211
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(96));
#line 211
if(___nl__bool__3){ goto label_2;}
#line 213
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(74));
#line 213
if(___nl__bool__3){ goto label_3;}
#line 213
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 213
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 213
nl_die_arg(___nl__im__4);
#line 211
label_2:
#line 211
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(96)));
#line 211
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 212
c_rt_lib0copy(&___nl__im__7, ___nl__im__1);
#line 212
c_rt_lib0copy(&___nl__im__8, ___nl__im__5);
#line 212
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__7, ___nl__im__8));
#line 212
c_rt_lib0clear(&___nl__im__7);
#line 212
c_rt_lib0clear(&___nl__im__8);
#line 213
goto label_1;
#line 213
label_3:
#line 214
goto label_1;
#line 214
label_1:
#line 214
c_rt_lib0clear(&___nl__im__1);
#line 214
c_rt_lib0clear(&___nl__im__2);
#line 214
//clear ___nl__bool__3;
#line 214
c_rt_lib0clear(&___nl__im__4);
#line 214
c_rt_lib0clear(&___nl__im__5);
#line 214
c_rt_lib0clear(&___nl__im__6);
#line 214
c_rt_lib0clear(&___nl__im__7);
#line 214
c_rt_lib0clear(&___nl__im__8);
#line 214
return NULL;
}

ImmT  reference_generator_priv0process_rep(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0rep_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 219
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 219
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(573)));
#line 219
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 219
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__3, ___nl__im__5));
#line 219
c_rt_lib0clear(&___nl__im__3);
#line 219
c_rt_lib0clear(&___nl__im__4);
#line 219
c_rt_lib0clear(&___nl__im__5);
#line 220
c_rt_lib0copy(&___nl__im__6, ___nl__im__1);
#line 220
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(237)));
#line 220
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 220
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__6, ___nl__im__8));
#line 220
c_rt_lib0clear(&___nl__im__6);
#line 220
c_rt_lib0clear(&___nl__im__7);
#line 220
c_rt_lib0clear(&___nl__im__8);
#line 221
c_rt_lib0copy(&___nl__im__9, ___nl__im__1);
#line 221
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(1033)));
#line 221
c_rt_lib0copy(&___nl__im__11, ___nl__im__10);
#line 221
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__9, ___nl__im__11));
#line 221
c_rt_lib0clear(&___nl__im__9);
#line 221
c_rt_lib0clear(&___nl__im__10);
#line 221
c_rt_lib0clear(&___nl__im__11);
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
c_rt_lib0clear(&___nl__im__8);
#line 221
c_rt_lib0clear(&___nl__im__9);
#line 221
c_rt_lib0clear(&___nl__im__10);
#line 221
c_rt_lib0clear(&___nl__im__11);
#line 221
return NULL;
}

ImmT  reference_generator_priv0process_while(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0while_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 225
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 225
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(237)));
#line 225
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 225
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__3, ___nl__im__5));
#line 225
c_rt_lib0clear(&___nl__im__3);
#line 225
c_rt_lib0clear(&___nl__im__4);
#line 225
c_rt_lib0clear(&___nl__im__5);
#line 226
c_rt_lib0copy(&___nl__im__6, ___nl__im__1);
#line 226
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(1028)));
#line 226
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 226
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__6, ___nl__im__8));
#line 226
c_rt_lib0clear(&___nl__im__6);
#line 226
c_rt_lib0clear(&___nl__im__7);
#line 226
c_rt_lib0clear(&___nl__im__8);
#line 226
c_rt_lib0clear(&___nl__im__1);
#line 226
c_rt_lib0clear(&___nl__im__2);
#line 226
c_rt_lib0clear(&___nl__im__3);
#line 226
c_rt_lib0clear(&___nl__im__4);
#line 226
c_rt_lib0clear(&___nl__im__5);
#line 226
c_rt_lib0clear(&___nl__im__6);
#line 226
c_rt_lib0clear(&___nl__im__7);
#line 226
c_rt_lib0clear(&___nl__im__8);
#line 226
return NULL;
}

ImmT  reference_generator_priv0process_if_mod(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0if_mod_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 230
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 230
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(237)));
#line 230
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 230
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__3, ___nl__im__5));
#line 230
c_rt_lib0clear(&___nl__im__3);
#line 230
c_rt_lib0clear(&___nl__im__4);
#line 230
c_rt_lib0clear(&___nl__im__5);
#line 231
c_rt_lib0copy(&___nl__im__6, ___nl__im__1);
#line 231
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(1028)));
#line 231
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 231
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__6, ___nl__im__8));
#line 231
c_rt_lib0clear(&___nl__im__6);
#line 231
c_rt_lib0clear(&___nl__im__7);
#line 231
c_rt_lib0clear(&___nl__im__8);
#line 231
c_rt_lib0clear(&___nl__im__1);
#line 231
c_rt_lib0clear(&___nl__im__2);
#line 231
c_rt_lib0clear(&___nl__im__3);
#line 231
c_rt_lib0clear(&___nl__im__4);
#line 231
c_rt_lib0clear(&___nl__im__5);
#line 231
c_rt_lib0clear(&___nl__im__6);
#line 231
c_rt_lib0clear(&___nl__im__7);
#line 231
c_rt_lib0clear(&___nl__im__8);
#line 231
return NULL;
}

ImmT  reference_generator_priv0process_match(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0match_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
bool  ___nl__bool__11 = false;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
#line 235
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 235
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(234)));
#line 235
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 235
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__3, ___nl__im__5));
#line 235
c_rt_lib0clear(&___nl__im__3);
#line 235
c_rt_lib0clear(&___nl__im__4);
#line 235
c_rt_lib0clear(&___nl__im__5);
#line 236
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(1036)));
#line 236
___nl__int__8 = 0;
#line 236
___nl__int__9 = 1;
#line 236
___nl__int__10 = c_rt_lib0array_len(___nl__im__6);
#line 236
label_3:
#line 236
___nl__int__12 = ___nl__int__8 >= ___nl__int__10;
#line 236
___nl__bool__11 = ___nl__int__12;
#line 236
if(___nl__bool__11){ goto label_1;}
#line 236
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 236
c_rt_lib0copy(&___nl__im__7, ___nl__im__13);
#line 237
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(522)));
#line 237
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(229)));
#line 237
c_rt_lib0clear(&___nl__im__15);
#line 237
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__14, ___get_global_const(229));
#line 237
if(___nl__bool__16){ goto label_5;}
#line 239
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__14, ___get_global_const(74));
#line 239
if(___nl__bool__16){ goto label_6;}
#line 239
c_rt_lib0move(&___nl__im__17,___get_global_const(16));
#line 239
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__14));
#line 239
nl_die_arg(___nl__im__17);
#line 237
label_5:
#line 237
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__14, ___get_global_const(229)));
#line 237
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 238
c_rt_lib0copy(&___nl__im__20, ___nl__im__1);
#line 238
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(462)));
#line 238
c_rt_lib0copy(&___nl__im__22, ___nl__im__21);
#line 238
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___im__0, ___nl__im__20, ___nl__im__22));
#line 238
c_rt_lib0clear(&___nl__im__20);
#line 238
c_rt_lib0clear(&___nl__im__21);
#line 238
c_rt_lib0clear(&___nl__im__22);
#line 239
goto label_4;
#line 239
label_6:
#line 240
goto label_4;
#line 240
label_4:
#line 241
c_rt_lib0copy(&___nl__im__23, ___nl__im__1);
#line 241
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(237)));
#line 241
c_rt_lib0copy(&___nl__im__25, ___nl__im__24);
#line 241
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___im__0, ___nl__im__23, ___nl__im__25));
#line 241
c_rt_lib0clear(&___nl__im__23);
#line 241
c_rt_lib0clear(&___nl__im__24);
#line 241
c_rt_lib0clear(&___nl__im__25);
#line 241
c_rt_lib0clear(&___nl__im__7);
#line 241
label_2:
#line 242
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 242
goto label_3;
#line 242
label_1:
#line 242
c_rt_lib0clear(&___nl__im__1);
#line 242
c_rt_lib0clear(&___nl__im__2);
#line 242
c_rt_lib0clear(&___nl__im__3);
#line 242
c_rt_lib0clear(&___nl__im__4);
#line 242
c_rt_lib0clear(&___nl__im__5);
#line 242
c_rt_lib0clear(&___nl__im__6);
#line 242
c_rt_lib0clear(&___nl__im__7);
#line 242
//clear ___nl__int__8;
#line 242
//clear ___nl__int__9;
#line 242
//clear ___nl__int__10;
#line 242
//clear ___nl__bool__11;
#line 242
//clear ___nl__int__12;
#line 242
c_rt_lib0clear(&___nl__im__13);
#line 242
c_rt_lib0clear(&___nl__im__14);
#line 242
c_rt_lib0clear(&___nl__im__15);
#line 242
//clear ___nl__bool__16;
#line 242
c_rt_lib0clear(&___nl__im__17);
#line 242
c_rt_lib0clear(&___nl__im__18);
#line 242
c_rt_lib0clear(&___nl__im__19);
#line 242
c_rt_lib0clear(&___nl__im__20);
#line 242
c_rt_lib0clear(&___nl__im__21);
#line 242
c_rt_lib0clear(&___nl__im__22);
#line 242
c_rt_lib0clear(&___nl__im__23);
#line 242
c_rt_lib0clear(&___nl__im__24);
#line 242
c_rt_lib0clear(&___nl__im__25);
#line 242
return NULL;
}

ImmT  reference_generator_priv0process_value(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0value_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
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
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
bool  ___nl__bool__29 = false;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
bool  ___nl__bool__40 = false;
INT  ___nl__int__41 = 0;
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
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
INT  ___nl__int__81 = 0;
INT  ___nl__int__82 = 0;
INT  ___nl__int__83 = 0;
bool  ___nl__bool__84 = false;
INT  ___nl__int__85 = 0;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
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
#line 246
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(229)));
#line 246
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1048));
#line 246
if(___nl__bool__4){ goto label_2;}
#line 247
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1049));
#line 247
if(___nl__bool__4){ goto label_3;}
#line 248
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1027));
#line 248
if(___nl__bool__4){ goto label_4;}
#line 249
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1046));
#line 249
if(___nl__bool__4){ goto label_5;}
#line 251
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(522));
#line 251
if(___nl__bool__4){ goto label_6;}
#line 253
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(232));
#line 253
if(___nl__bool__4){ goto label_7;}
#line 254
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(531));
#line 254
if(___nl__bool__4){ goto label_8;}
#line 255
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(240));
#line 255
if(___nl__bool__4){ goto label_9;}
#line 259
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(241));
#line 259
if(___nl__bool__4){ goto label_10;}
#line 263
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(474));
#line 263
if(___nl__bool__4){ goto label_11;}
#line 264
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(244));
#line 264
if(___nl__bool__4){ goto label_12;}
#line 266
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1050));
#line 266
if(___nl__bool__4){ goto label_13;}
#line 268
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1051));
#line 268
if(___nl__bool__4){ goto label_14;}
#line 273
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1008));
#line 273
if(___nl__bool__4){ goto label_15;}
#line 281
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1052));
#line 281
if(___nl__bool__4){ goto label_16;}
#line 283
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(1053));
#line 283
if(___nl__bool__4){ goto label_17;}
#line 283
c_rt_lib0move(&___nl__im__5,___get_global_const(16));
#line 283
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 283
nl_die_arg(___nl__im__5);
#line 246
label_2:
#line 246
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1048)));
#line 246
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 247
goto label_1;
#line 247
label_3:
#line 247
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1049)));
#line 247
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 248
goto label_1;
#line 248
label_4:
#line 249
goto label_1;
#line 249
label_5:
#line 249
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1046)));
#line 249
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 250
c_rt_lib0copy(&___nl__im__12, ___nl__im__1);
#line 250
c_rt_lib0copy(&___nl__im__13, ___nl__im__10);
#line 250
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__12, ___nl__im__13));
#line 250
c_rt_lib0clear(&___nl__im__12);
#line 250
c_rt_lib0clear(&___nl__im__13);
#line 251
goto label_1;
#line 251
label_6:
#line 251
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(522)));
#line 251
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 252
c_rt_lib0copy(&___nl__im__16, ___nl__im__1);
#line 252
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(474)));
#line 252
c_rt_lib0copy(&___nl__im__18, ___nl__im__17);
#line 252
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__16, ___nl__im__18));
#line 252
c_rt_lib0clear(&___nl__im__16);
#line 252
c_rt_lib0clear(&___nl__im__17);
#line 252
c_rt_lib0clear(&___nl__im__18);
#line 253
goto label_1;
#line 253
label_7:
#line 253
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(232)));
#line 253
___nl__int__19 = getIntFromImm(___nl__im__20);
#line 254
goto label_1;
#line 254
label_8:
#line 254
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(531)));
#line 254
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 255
goto label_1;
#line 255
label_9:
#line 255
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(240)));
#line 255
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 256
___nl__int__26 = 0;
#line 256
___nl__int__27 = 1;
#line 256
___nl__int__28 = c_rt_lib0array_len(___nl__im__23);
#line 256
label_20:
#line 256
___nl__int__30 = ___nl__int__26 >= ___nl__int__28;
#line 256
___nl__bool__29 = ___nl__int__30;
#line 256
if(___nl__bool__29){ goto label_18;}
#line 256
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__23, ___nl__int__26));
#line 256
c_rt_lib0copy(&___nl__im__25, ___nl__im__31);
#line 257
c_rt_lib0copy(&___nl__im__32, ___nl__im__1);
#line 257
c_rt_lib0copy(&___nl__im__33, ___nl__im__25);
#line 257
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__32, ___nl__im__33));
#line 257
c_rt_lib0clear(&___nl__im__32);
#line 257
c_rt_lib0clear(&___nl__im__33);
#line 257
c_rt_lib0clear(&___nl__im__25);
#line 257
label_19:
#line 258
___nl__int__26 = ___nl__int__26 + ___nl__int__27;
#line 258
goto label_20;
#line 258
label_18:
#line 259
goto label_1;
#line 259
label_10:
#line 259
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(241)));
#line 259
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 260
___nl__int__37 = 0;
#line 260
___nl__int__38 = 1;
#line 260
___nl__int__39 = c_rt_lib0array_len(___nl__im__34);
#line 260
label_23:
#line 260
___nl__int__41 = ___nl__int__37 >= ___nl__int__39;
#line 260
___nl__bool__40 = ___nl__int__41;
#line 260
if(___nl__bool__40){ goto label_21;}
#line 260
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_get(___nl__im__34, ___nl__int__37));
#line 260
c_rt_lib0copy(&___nl__im__36, ___nl__im__42);
#line 261
c_rt_lib0copy(&___nl__im__43, ___nl__im__1);
#line 261
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_const(234)));
#line 261
c_rt_lib0copy(&___nl__im__45, ___nl__im__44);
#line 261
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__43, ___nl__im__45));
#line 261
c_rt_lib0clear(&___nl__im__43);
#line 261
c_rt_lib0clear(&___nl__im__44);
#line 261
c_rt_lib0clear(&___nl__im__45);
#line 261
c_rt_lib0clear(&___nl__im__36);
#line 261
label_22:
#line 262
___nl__int__37 = ___nl__int__37 + ___nl__int__38;
#line 262
goto label_23;
#line 262
label_21:
#line 263
goto label_1;
#line 263
label_11:
#line 263
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(474)));
#line 263
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 264
goto label_1;
#line 264
label_12:
#line 264
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(244)));
#line 264
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 265
c_rt_lib0copy(&___nl__im__50, ___nl__im__1);
#line 265
c_rt_lib0copy(&___nl__im__51, ___nl__im__48);
#line 265
c_rt_lib0delete(reference_generator_priv0process_bin_op(___ref___im__0, ___nl__im__50, ___nl__im__51));
#line 265
c_rt_lib0clear(&___nl__im__50);
#line 265
c_rt_lib0clear(&___nl__im__51);
#line 266
goto label_1;
#line 266
label_13:
#line 266
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1050)));
#line 266
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 267
c_rt_lib0copy(&___nl__im__54, ___nl__im__1);
#line 267
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_const(234)));
#line 267
c_rt_lib0copy(&___nl__im__56, ___nl__im__55);
#line 267
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__54, ___nl__im__56));
#line 267
c_rt_lib0clear(&___nl__im__54);
#line 267
c_rt_lib0clear(&___nl__im__55);
#line 267
c_rt_lib0clear(&___nl__im__56);
#line 268
goto label_1;
#line 268
label_14:
#line 268
c_rt_lib0move(&___nl__im__58, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1051)));
#line 268
c_rt_lib0copy(&___nl__im__57, ___nl__im__58);
#line 269
c_rt_lib0copy(&___nl__im__59, ___nl__im__1);
#line 269
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(231)));
#line 269
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_const(517)));
#line 269
c_rt_lib0clear(&___nl__im__61);
#line 269
c_rt_lib0copy(&___nl__im__62, ___nl__im__60);
#line 270
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__57, ___get_global_const(167)));
#line 271
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__57, ___get_global_const(121)));
#line 271
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_mk(2, ___get_global_const(167), ___nl__im__65, ___get_global_const(121), ___nl__im__66));
#line 271
c_rt_lib0clear(&___nl__im__65);
#line 271
c_rt_lib0clear(&___nl__im__66);
#line 271
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_arg(___get_global_const(1334), ___nl__im__64));
#line 271
c_rt_lib0clear(&___nl__im__64);
#line 271
c_rt_lib0clear(&___nl__im__65);
#line 271
c_rt_lib0clear(&___nl__im__66);
#line 271
c_rt_lib0copy(&___nl__im__67, ___nl__im__63);
#line 271
c_rt_lib0delete(reference_generator_priv0add_ref(___ref___im__0, ___nl__im__59, ___nl__im__62, ___nl__im__67));
#line 271
c_rt_lib0clear(&___nl__im__59);
#line 271
c_rt_lib0clear(&___nl__im__60);
#line 271
c_rt_lib0clear(&___nl__im__61);
#line 271
c_rt_lib0clear(&___nl__im__62);
#line 271
c_rt_lib0clear(&___nl__im__63);
#line 271
c_rt_lib0clear(&___nl__im__64);
#line 271
c_rt_lib0clear(&___nl__im__65);
#line 271
c_rt_lib0clear(&___nl__im__66);
#line 271
c_rt_lib0clear(&___nl__im__67);
#line 273
goto label_1;
#line 273
label_15:
#line 273
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1008)));
#line 273
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 274
c_rt_lib0copy(&___nl__im__70, ___nl__im__1);
#line 274
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(231)));
#line 274
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_const(517)));
#line 274
c_rt_lib0clear(&___nl__im__72);
#line 274
c_rt_lib0copy(&___nl__im__73, ___nl__im__71);
#line 275
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__68, ___get_global_const(167)));
#line 276
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__68, ___get_global_const(121)));
#line 276
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_mk(2, ___get_global_const(167), ___nl__im__76, ___get_global_const(121), ___nl__im__77));
#line 276
c_rt_lib0clear(&___nl__im__76);
#line 276
c_rt_lib0clear(&___nl__im__77);
#line 276
c_rt_lib0move(&___nl__im__74, c_rt_lib0ov_mk_arg(___get_global_const(1334), ___nl__im__75));
#line 276
c_rt_lib0clear(&___nl__im__75);
#line 276
c_rt_lib0clear(&___nl__im__76);
#line 276
c_rt_lib0clear(&___nl__im__77);
#line 276
c_rt_lib0copy(&___nl__im__78, ___nl__im__74);
#line 276
c_rt_lib0delete(reference_generator_priv0add_ref(___ref___im__0, ___nl__im__70, ___nl__im__73, ___nl__im__78));
#line 276
c_rt_lib0clear(&___nl__im__70);
#line 276
c_rt_lib0clear(&___nl__im__71);
#line 276
c_rt_lib0clear(&___nl__im__72);
#line 276
c_rt_lib0clear(&___nl__im__73);
#line 276
c_rt_lib0clear(&___nl__im__74);
#line 276
c_rt_lib0clear(&___nl__im__75);
#line 276
c_rt_lib0clear(&___nl__im__76);
#line 276
c_rt_lib0clear(&___nl__im__77);
#line 276
c_rt_lib0clear(&___nl__im__78);
#line 278
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__68, ___get_global_const(118)));
#line 278
___nl__int__81 = 0;
#line 278
___nl__int__82 = 1;
#line 278
___nl__int__83 = c_rt_lib0array_len(___nl__im__79);
#line 278
label_26:
#line 278
___nl__int__85 = ___nl__int__81 >= ___nl__int__83;
#line 278
___nl__bool__84 = ___nl__int__85;
#line 278
if(___nl__bool__84){ goto label_24;}
#line 278
c_rt_lib0move(&___nl__im__86, c_rt_lib0array_get(___nl__im__79, ___nl__int__81));
#line 278
c_rt_lib0copy(&___nl__im__80, ___nl__im__86);
#line 279
c_rt_lib0copy(&___nl__im__87, ___nl__im__1);
#line 279
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_const(234)));
#line 279
c_rt_lib0copy(&___nl__im__89, ___nl__im__88);
#line 279
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__87, ___nl__im__89));
#line 279
c_rt_lib0clear(&___nl__im__87);
#line 279
c_rt_lib0clear(&___nl__im__88);
#line 279
c_rt_lib0clear(&___nl__im__89);
#line 279
c_rt_lib0clear(&___nl__im__80);
#line 279
label_25:
#line 280
___nl__int__81 = ___nl__int__81 + ___nl__int__82;
#line 280
goto label_26;
#line 280
label_24:
#line 281
goto label_1;
#line 281
label_16:
#line 281
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1052)));
#line 281
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 282
c_rt_lib0copy(&___nl__im__92, ___nl__im__1);
#line 282
c_rt_lib0copy(&___nl__im__93, ___nl__im__90);
#line 282
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__92, ___nl__im__93));
#line 282
c_rt_lib0clear(&___nl__im__92);
#line 282
c_rt_lib0clear(&___nl__im__93);
#line 283
goto label_1;
#line 283
label_17:
#line 283
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(1053)));
#line 283
c_rt_lib0copy(&___nl__im__94, ___nl__im__95);
#line 284
c_rt_lib0copy(&___nl__im__96, ___nl__im__1);
#line 284
c_rt_lib0copy(&___nl__im__97, ___nl__im__94);
#line 284
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__96, ___nl__im__97));
#line 284
c_rt_lib0clear(&___nl__im__96);
#line 284
c_rt_lib0clear(&___nl__im__97);
#line 285
goto label_1;
#line 285
label_1:
#line 285
c_rt_lib0clear(&___nl__im__1);
#line 285
c_rt_lib0clear(&___nl__im__2);
#line 285
c_rt_lib0clear(&___nl__im__3);
#line 285
//clear ___nl__bool__4;
#line 285
c_rt_lib0clear(&___nl__im__5);
#line 285
c_rt_lib0clear(&___nl__im__6);
#line 285
c_rt_lib0clear(&___nl__im__7);
#line 285
c_rt_lib0clear(&___nl__im__8);
#line 285
c_rt_lib0clear(&___nl__im__9);
#line 285
c_rt_lib0clear(&___nl__im__10);
#line 285
c_rt_lib0clear(&___nl__im__11);
#line 285
c_rt_lib0clear(&___nl__im__12);
#line 285
c_rt_lib0clear(&___nl__im__13);
#line 285
c_rt_lib0clear(&___nl__im__14);
#line 285
c_rt_lib0clear(&___nl__im__15);
#line 285
c_rt_lib0clear(&___nl__im__16);
#line 285
c_rt_lib0clear(&___nl__im__17);
#line 285
c_rt_lib0clear(&___nl__im__18);
#line 285
//clear ___nl__int__19;
#line 285
c_rt_lib0clear(&___nl__im__20);
#line 285
c_rt_lib0clear(&___nl__im__21);
#line 285
c_rt_lib0clear(&___nl__im__22);
#line 285
c_rt_lib0clear(&___nl__im__23);
#line 285
c_rt_lib0clear(&___nl__im__24);
#line 285
c_rt_lib0clear(&___nl__im__25);
#line 285
//clear ___nl__int__26;
#line 285
//clear ___nl__int__27;
#line 285
//clear ___nl__int__28;
#line 285
//clear ___nl__bool__29;
#line 285
//clear ___nl__int__30;
#line 285
c_rt_lib0clear(&___nl__im__31);
#line 285
c_rt_lib0clear(&___nl__im__32);
#line 285
c_rt_lib0clear(&___nl__im__33);
#line 285
c_rt_lib0clear(&___nl__im__34);
#line 285
c_rt_lib0clear(&___nl__im__35);
#line 285
c_rt_lib0clear(&___nl__im__36);
#line 285
//clear ___nl__int__37;
#line 285
//clear ___nl__int__38;
#line 285
//clear ___nl__int__39;
#line 285
//clear ___nl__bool__40;
#line 285
//clear ___nl__int__41;
#line 285
c_rt_lib0clear(&___nl__im__42);
#line 285
c_rt_lib0clear(&___nl__im__43);
#line 285
c_rt_lib0clear(&___nl__im__44);
#line 285
c_rt_lib0clear(&___nl__im__45);
#line 285
c_rt_lib0clear(&___nl__im__46);
#line 285
c_rt_lib0clear(&___nl__im__47);
#line 285
c_rt_lib0clear(&___nl__im__48);
#line 285
c_rt_lib0clear(&___nl__im__49);
#line 285
c_rt_lib0clear(&___nl__im__50);
#line 285
c_rt_lib0clear(&___nl__im__51);
#line 285
c_rt_lib0clear(&___nl__im__52);
#line 285
c_rt_lib0clear(&___nl__im__53);
#line 285
c_rt_lib0clear(&___nl__im__54);
#line 285
c_rt_lib0clear(&___nl__im__55);
#line 285
c_rt_lib0clear(&___nl__im__56);
#line 285
c_rt_lib0clear(&___nl__im__57);
#line 285
c_rt_lib0clear(&___nl__im__58);
#line 285
c_rt_lib0clear(&___nl__im__59);
#line 285
c_rt_lib0clear(&___nl__im__60);
#line 285
c_rt_lib0clear(&___nl__im__61);
#line 285
c_rt_lib0clear(&___nl__im__62);
#line 285
c_rt_lib0clear(&___nl__im__63);
#line 285
c_rt_lib0clear(&___nl__im__64);
#line 285
c_rt_lib0clear(&___nl__im__65);
#line 285
c_rt_lib0clear(&___nl__im__66);
#line 285
c_rt_lib0clear(&___nl__im__67);
#line 285
c_rt_lib0clear(&___nl__im__68);
#line 285
c_rt_lib0clear(&___nl__im__69);
#line 285
c_rt_lib0clear(&___nl__im__70);
#line 285
c_rt_lib0clear(&___nl__im__71);
#line 285
c_rt_lib0clear(&___nl__im__72);
#line 285
c_rt_lib0clear(&___nl__im__73);
#line 285
c_rt_lib0clear(&___nl__im__74);
#line 285
c_rt_lib0clear(&___nl__im__75);
#line 285
c_rt_lib0clear(&___nl__im__76);
#line 285
c_rt_lib0clear(&___nl__im__77);
#line 285
c_rt_lib0clear(&___nl__im__78);
#line 285
c_rt_lib0clear(&___nl__im__79);
#line 285
c_rt_lib0clear(&___nl__im__80);
#line 285
//clear ___nl__int__81;
#line 285
//clear ___nl__int__82;
#line 285
//clear ___nl__int__83;
#line 285
//clear ___nl__bool__84;
#line 285
//clear ___nl__int__85;
#line 285
c_rt_lib0clear(&___nl__im__86);
#line 285
c_rt_lib0clear(&___nl__im__87);
#line 285
c_rt_lib0clear(&___nl__im__88);
#line 285
c_rt_lib0clear(&___nl__im__89);
#line 285
c_rt_lib0clear(&___nl__im__90);
#line 285
c_rt_lib0clear(&___nl__im__91);
#line 285
c_rt_lib0clear(&___nl__im__92);
#line 285
c_rt_lib0clear(&___nl__im__93);
#line 285
c_rt_lib0clear(&___nl__im__94);
#line 285
c_rt_lib0clear(&___nl__im__95);
#line 285
c_rt_lib0clear(&___nl__im__96);
#line 285
c_rt_lib0clear(&___nl__im__97);
#line 285
return NULL;
}

ImmT  reference_generator_priv0process_bin_op(reference_generator0refs0type* ___ref___im__0,reference_generator0module0type ___nl__im__1,nast0bin_op_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
reference_generator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 289
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 289
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(281)));
#line 289
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 289
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__3, ___nl__im__5));
#line 289
c_rt_lib0clear(&___nl__im__3);
#line 289
c_rt_lib0clear(&___nl__im__4);
#line 289
c_rt_lib0clear(&___nl__im__5);
#line 290
c_rt_lib0copy(&___nl__im__6, ___nl__im__1);
#line 290
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(282)));
#line 290
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 290
c_rt_lib0delete(reference_generator_priv0process_value(___ref___im__0, ___nl__im__6, ___nl__im__8));
#line 290
c_rt_lib0clear(&___nl__im__6);
#line 290
c_rt_lib0clear(&___nl__im__7);
#line 290
c_rt_lib0clear(&___nl__im__8);
#line 290
c_rt_lib0clear(&___nl__im__1);
#line 290
c_rt_lib0clear(&___nl__im__2);
#line 290
c_rt_lib0clear(&___nl__im__3);
#line 290
c_rt_lib0clear(&___nl__im__4);
#line 290
c_rt_lib0clear(&___nl__im__5);
#line 290
c_rt_lib0clear(&___nl__im__6);
#line 290
c_rt_lib0clear(&___nl__im__7);
#line 290
c_rt_lib0clear(&___nl__im__8);
#line 290
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void reference_generator_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT reference_generator_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT reference_generator_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
