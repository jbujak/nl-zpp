
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "wprinter.h"
#include "string.h"
#include "ptd.h"
#include "array.h"
#include "boolean_t.h"
#include "wprinter.h"
#line 1 "wprinter.nl"

static ImmT *__const__f = NULL;
void wprinter_priv0__const__init();
ImmT wprinter_priv0__const__sim(int __nr);
ImmT wprinter_priv0__const__sing(int __nr);

INT  wprinter_priv0get_tab_size();
INT  wprinter_priv0get_line_width();
wprinter0pretty_t0type wprinter_priv0get_sep();
bool wprinter_priv0is_to_long(INT  ___nl__int__0);
ImmT  wprinter_priv0state_print(wprinter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  wprinter_priv0pind(INT  ___nl__int__0);
INT  wprinter_priv0count_len(wprinter0pretty_arr_t0type ___nl__im__0);
ImmT  wprinter_priv0print_sim_arr(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1);
INT  wprinter_priv0print_str_arr(wprinter0state_t0type* ___ref___im__0,wprinter0str_arr_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3);
ImmT  wprinter_priv0print_sim_rec(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1);
INT  wprinter_priv0flush_list(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3,INT  ___nl__int__4,bool ___nl__bool__5);
INT  wprinter_priv0print_arr_in_lines(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3);
INT  wprinter_priv0process_list(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1,bool ___nl__bool__2,INT  ___nl__int__3,INT  ___nl__int__4);
INT  wprinter_priv0print_t_rec(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3);


INT  wprinter_priv0get_tab_size() {
wprinter_priv0__const__init();
INT  ___nl__int__0 = 0;
INT  ___nl__int__1 = 0;
#line 12
___nl__int__1 = 4;
#line 12
___nl__int__0 = ___nl__int__1;
#line 12
//clear ___nl__int__1;
#line 12
return ___nl__int__0;
#line 12
//clear ___nl__int__0;
#line 12
//clear ___nl__int__1;
#line 12
return 0;
}

INT  wprinter_priv0get_line_width() {
wprinter_priv0__const__init();
INT  ___nl__int__0 = 0;
INT  ___nl__int__1 = 0;
#line 16
___nl__int__1 = 120;
#line 16
___nl__int__0 = ___nl__int__1;
#line 16
//clear ___nl__int__1;
#line 16
return ___nl__int__0;
#line 16
//clear ___nl__int__0;
#line 16
//clear ___nl__int__1;
#line 16
return 0;
}

wprinter0pretty_t0type wprinter_priv0get_sep() {
wprinter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 20
___nl__int__2 = 1;
#line 20
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__2));
#line 20
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(1527)));
#line 20
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(290), ___nl__im__3, ___get_global_const(1238), ___nl__im__4));
#line 20
//clear ___nl__int__2;
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
//clear ___nl__int__2;
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
return ___nl__im__0;
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
//clear ___nl__int__2;
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
return NULL;
}

ImmT  wprinter0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0state_t");
return wprinter0state_t();
}
ImmT  wprinter0state_t() {
wprinter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 24
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(1, ___get_global_const(204), ___nl__im__3));
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 24
c_rt_lib0copy(&___nl__im__4, ___nl__im__2);
#line 24
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__4));
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 24
c_rt_lib0clear(&___nl__im__4);
#line 24
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 24
c_rt_lib0clear(&___nl__im__1);
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 24
c_rt_lib0clear(&___nl__im__4);
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
c_rt_lib0clear(&___nl__im__4);
#line 24
return NULL;
}

bool wprinter_priv0is_to_long(INT  ___nl__int__0) {
wprinter_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
#line 28
___nl__int__3 = wprinter_priv0get_line_width();
#line 28
___nl__int__4 = ___nl__int__0 > ___nl__int__3;
#line 28
___nl__bool__2 = ___nl__int__4;
#line 28
//clear ___nl__int__3;
#line 28
//clear ___nl__int__4;
#line 28
___nl__bool__1 = ___nl__bool__2;
#line 28
//clear ___nl__int__0;
#line 28
//clear ___nl__bool__2;
#line 28
//clear ___nl__int__3;
#line 28
//clear ___nl__int__4;
#line 28
return ___nl__bool__1;
#line 28
//clear ___nl__int__0;
#line 28
//clear ___nl__bool__1;
#line 28
//clear ___nl__bool__2;
#line 28
//clear ___nl__int__3;
#line 28
//clear ___nl__int__4;
#line 28
return NULL;
}

ImmT  wprinter_priv0state_print(wprinter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
ImmT  ___nl__string__4 = NULL;
ImmT  ___nl__string__5 = NULL;
ImmT  ___nl__string__6 = NULL;
#line 32
c_rt_lib0move(&___nl__im__2,___get_global_const(204));
#line 32
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 32
c_rt_lib0copy(&___nl__string__3, ___nl__im__2);
#line 32
c_rt_lib0copy(&___nl__string__4, ___nl__im__1);
#line 32
c_rt_lib0move(&___nl__string__5, c_rt_lib0concat_new(___nl__string__3, ___nl__string__4));
#line 32
c_rt_lib0copy(&___nl__im__2, ___nl__string__5);
#line 32
c_rt_lib0move(&___nl__string__6,___get_global_const(204));
#line 32
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__6, ___nl__im__2));
#line 32
c_rt_lib0clear(&___nl__im__2);
#line 32
c_rt_lib0clear(&___nl__string__3);
#line 32
c_rt_lib0clear(&___nl__string__4);
#line 32
c_rt_lib0clear(&___nl__string__5);
#line 32
c_rt_lib0clear(&___nl__string__6);
#line 32
c_rt_lib0clear(&___nl__im__1);
#line 32
c_rt_lib0clear(&___nl__im__2);
#line 32
c_rt_lib0clear(&___nl__string__3);
#line 32
c_rt_lib0clear(&___nl__string__4);
#line 32
c_rt_lib0clear(&___nl__string__5);
#line 32
c_rt_lib0clear(&___nl__string__6);
#line 32
return NULL;
}

ImmT  wprinter_priv0pind(INT  ___nl__int__0) {
wprinter_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__string__9 = NULL;
ImmT  ___nl__string__10 = NULL;
ImmT  ___nl__string__11 = NULL;
ImmT  ___nl__im__12 = NULL;
#line 36
c_rt_lib0move(&___nl__im__1,___get_global_const(37));
#line 37
___nl__int__2 = 0;
#line 37
___nl__int__3 = 1;
#line 37
label_3:
#line 37
___nl__int__5 = ___nl__int__2 >= ___nl__int__0;
#line 37
___nl__bool__4 = ___nl__int__5;
#line 37
if(___nl__bool__4){ goto label_1;}
#line 37
___nl__int__7 = 9;
#line 37
___nl__int__8 = ___nl__int__7;
#line 37
c_rt_lib0move(&___nl__im__6, string0chr(___nl__int__8));
#line 37
//clear ___nl__int__7;
#line 37
//clear ___nl__int__8;
#line 37
c_rt_lib0copy(&___nl__string__9, ___nl__im__1);
#line 37
c_rt_lib0copy(&___nl__string__10, ___nl__im__6);
#line 37
c_rt_lib0move(&___nl__string__11, c_rt_lib0concat_new(___nl__string__9, ___nl__string__10));
#line 37
c_rt_lib0copy(&___nl__im__1, ___nl__string__11);
#line 37
c_rt_lib0clear(&___nl__im__6);
#line 37
//clear ___nl__int__7;
#line 37
//clear ___nl__int__8;
#line 37
c_rt_lib0clear(&___nl__string__9);
#line 37
c_rt_lib0clear(&___nl__string__10);
#line 37
c_rt_lib0clear(&___nl__string__11);
#line 37
label_2:
#line 37
___nl__int__2 = ___nl__int__2 + ___nl__int__3;
#line 37
goto label_3;
#line 37
label_1:
#line 38
c_rt_lib0copy(&___nl__im__12, ___nl__im__1);
#line 38
//clear ___nl__int__0;
#line 38
c_rt_lib0clear(&___nl__im__1);
#line 38
//clear ___nl__int__2;
#line 38
//clear ___nl__int__3;
#line 38
//clear ___nl__bool__4;
#line 38
//clear ___nl__int__5;
#line 38
c_rt_lib0clear(&___nl__im__6);
#line 38
//clear ___nl__int__7;
#line 38
//clear ___nl__int__8;
#line 38
c_rt_lib0clear(&___nl__string__9);
#line 38
c_rt_lib0clear(&___nl__string__10);
#line 38
c_rt_lib0clear(&___nl__string__11);
#line 38
return ___nl__im__12;
#line 38
//clear ___nl__int__0;
#line 38
c_rt_lib0clear(&___nl__im__1);
#line 38
//clear ___nl__int__2;
#line 38
//clear ___nl__int__3;
#line 38
//clear ___nl__bool__4;
#line 38
//clear ___nl__int__5;
#line 38
c_rt_lib0clear(&___nl__im__6);
#line 38
//clear ___nl__int__7;
#line 38
//clear ___nl__int__8;
#line 38
c_rt_lib0clear(&___nl__string__9);
#line 38
c_rt_lib0clear(&___nl__string__10);
#line 38
c_rt_lib0clear(&___nl__string__11);
#line 38
c_rt_lib0clear(&___nl__im__12);
#line 38
return NULL;
}

ImmT  wprinter0arr_kind_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0arr_kind_t");
return wprinter0arr_kind_t();
}
ImmT  wprinter0arr_kind_t() {
wprinter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 42
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 42
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 42
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 42
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(38), ___nl__im__3, ___get_global_const(1528), ___nl__im__4, ___get_global_const(1529), ___nl__im__5));
#line 42
c_rt_lib0clear(&___nl__im__3);
#line 42
c_rt_lib0clear(&___nl__im__4);
#line 42
c_rt_lib0clear(&___nl__im__5);
#line 42
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 42
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__6));
#line 42
c_rt_lib0clear(&___nl__im__2);
#line 42
c_rt_lib0clear(&___nl__im__3);
#line 42
c_rt_lib0clear(&___nl__im__4);
#line 42
c_rt_lib0clear(&___nl__im__5);
#line 42
c_rt_lib0clear(&___nl__im__6);
#line 42
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 42
c_rt_lib0clear(&___nl__im__1);
#line 42
c_rt_lib0clear(&___nl__im__2);
#line 42
c_rt_lib0clear(&___nl__im__3);
#line 42
c_rt_lib0clear(&___nl__im__4);
#line 42
c_rt_lib0clear(&___nl__im__5);
#line 42
c_rt_lib0clear(&___nl__im__6);
#line 42
return ___nl__im__0;
#line 42
c_rt_lib0clear(&___nl__im__0);
#line 42
c_rt_lib0clear(&___nl__im__1);
#line 42
c_rt_lib0clear(&___nl__im__2);
#line 42
c_rt_lib0clear(&___nl__im__3);
#line 42
c_rt_lib0clear(&___nl__im__4);
#line 42
c_rt_lib0clear(&___nl__im__5);
#line 42
c_rt_lib0clear(&___nl__im__6);
#line 42
return NULL;
}

ImmT  wprinter0pretty_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0pretty_t");
return wprinter0pretty_t();
}
ImmT  wprinter0pretty_t() {
wprinter_priv0__const__init();
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
#line 47
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 49
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(wprinter0pretty_arr_t0ptr, ___get_global_const(1530), ___get_global_const(1531)));
#line 49
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 49
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(wprinter0arr_kind_t0ptr, ___get_global_const(1530), ___get_global_const(1532)));
#line 49
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 49
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_const(377), ___nl__im__8, ___get_global_const(96), ___nl__im__9));
#line 49
c_rt_lib0clear(&___nl__im__8);
#line 49
c_rt_lib0clear(&___nl__im__9);
#line 49
c_rt_lib0copy(&___nl__im__10, ___nl__im__7);
#line 49
c_rt_lib0move(&___nl__im__6, ptd0rec(___nl__im__10));
#line 49
c_rt_lib0clear(&___nl__im__7);
#line 49
c_rt_lib0clear(&___nl__im__8);
#line 49
c_rt_lib0clear(&___nl__im__9);
#line 49
c_rt_lib0clear(&___nl__im__10);
#line 50
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(wprinter0pretty_arr_t0ptr, ___get_global_const(1530), ___get_global_const(1531)));
#line 50
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__13));
#line 50
c_rt_lib0move(&___nl__im__14, ptd0string());
#line 50
c_rt_lib0move(&___nl__im__15, ptd0string());
#line 50
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_const(377), ___nl__im__13, ___get_global_const(1031), ___nl__im__14, ___get_global_const(1083), ___nl__im__15));
#line 50
c_rt_lib0clear(&___nl__im__13);
#line 50
c_rt_lib0clear(&___nl__im__14);
#line 50
c_rt_lib0clear(&___nl__im__15);
#line 50
c_rt_lib0copy(&___nl__im__16, ___nl__im__12);
#line 50
c_rt_lib0move(&___nl__im__11, ptd0rec(___nl__im__16));
#line 50
c_rt_lib0clear(&___nl__im__12);
#line 50
c_rt_lib0clear(&___nl__im__13);
#line 50
c_rt_lib0clear(&___nl__im__14);
#line 50
c_rt_lib0clear(&___nl__im__15);
#line 50
c_rt_lib0clear(&___nl__im__16);
#line 51
c_rt_lib0move(&___nl__im__19, c_rt_lib0func_new(wprinter0pretty_t0ptr, ___get_global_const(1530), ___get_global_const(1533)));
#line 51
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__19));
#line 51
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(wprinter0pretty_t0ptr, ___get_global_const(1530), ___get_global_const(1533)));
#line 51
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__20));
#line 51
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(2, ___get_global_const(1337), ___nl__im__19, ___get_global_const(1338), ___nl__im__20));
#line 51
c_rt_lib0clear(&___nl__im__19);
#line 51
c_rt_lib0clear(&___nl__im__20);
#line 51
c_rt_lib0copy(&___nl__im__21, ___nl__im__18);
#line 51
c_rt_lib0move(&___nl__im__17, ptd0rec(___nl__im__21));
#line 51
c_rt_lib0clear(&___nl__im__18);
#line 51
c_rt_lib0clear(&___nl__im__19);
#line 51
c_rt_lib0clear(&___nl__im__20);
#line 51
c_rt_lib0clear(&___nl__im__21);
#line 52
c_rt_lib0move(&___nl__im__22, ptd0string());
#line 53
c_rt_lib0move(&___nl__im__23, ptd0none());
#line 54
c_rt_lib0move(&___nl__im__24, c_rt_lib0func_new(wprinter0str_arr_t0ptr, ___get_global_const(1530), ___get_global_const(1534)));
#line 54
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__24));
#line 54
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(6, ___get_global_const(377), ___nl__im__6, ___get_global_const(240), ___nl__im__11, ___get_global_const(1535), ___nl__im__17, ___get_global_const(390), ___nl__im__22, ___get_global_const(1527), ___nl__im__23, ___get_global_const(1536), ___nl__im__24));
#line 54
c_rt_lib0clear(&___nl__im__6);
#line 54
c_rt_lib0clear(&___nl__im__7);
#line 54
c_rt_lib0clear(&___nl__im__8);
#line 54
c_rt_lib0clear(&___nl__im__9);
#line 54
c_rt_lib0clear(&___nl__im__10);
#line 54
c_rt_lib0clear(&___nl__im__11);
#line 54
c_rt_lib0clear(&___nl__im__12);
#line 54
c_rt_lib0clear(&___nl__im__13);
#line 54
c_rt_lib0clear(&___nl__im__14);
#line 54
c_rt_lib0clear(&___nl__im__15);
#line 54
c_rt_lib0clear(&___nl__im__16);
#line 54
c_rt_lib0clear(&___nl__im__17);
#line 54
c_rt_lib0clear(&___nl__im__18);
#line 54
c_rt_lib0clear(&___nl__im__19);
#line 54
c_rt_lib0clear(&___nl__im__20);
#line 54
c_rt_lib0clear(&___nl__im__21);
#line 54
c_rt_lib0clear(&___nl__im__22);
#line 54
c_rt_lib0clear(&___nl__im__23);
#line 54
c_rt_lib0clear(&___nl__im__24);
#line 54
c_rt_lib0copy(&___nl__im__25, ___nl__im__5);
#line 54
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__25));
#line 54
c_rt_lib0clear(&___nl__im__5);
#line 54
c_rt_lib0clear(&___nl__im__6);
#line 54
c_rt_lib0clear(&___nl__im__7);
#line 54
c_rt_lib0clear(&___nl__im__8);
#line 54
c_rt_lib0clear(&___nl__im__9);
#line 54
c_rt_lib0clear(&___nl__im__10);
#line 54
c_rt_lib0clear(&___nl__im__11);
#line 54
c_rt_lib0clear(&___nl__im__12);
#line 54
c_rt_lib0clear(&___nl__im__13);
#line 54
c_rt_lib0clear(&___nl__im__14);
#line 54
c_rt_lib0clear(&___nl__im__15);
#line 54
c_rt_lib0clear(&___nl__im__16);
#line 54
c_rt_lib0clear(&___nl__im__17);
#line 54
c_rt_lib0clear(&___nl__im__18);
#line 54
c_rt_lib0clear(&___nl__im__19);
#line 54
c_rt_lib0clear(&___nl__im__20);
#line 54
c_rt_lib0clear(&___nl__im__21);
#line 54
c_rt_lib0clear(&___nl__im__22);
#line 54
c_rt_lib0clear(&___nl__im__23);
#line 54
c_rt_lib0clear(&___nl__im__24);
#line 54
c_rt_lib0clear(&___nl__im__25);
#line 54
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(290), ___nl__im__3, ___get_global_const(1238), ___nl__im__4));
#line 54
c_rt_lib0clear(&___nl__im__3);
#line 54
c_rt_lib0clear(&___nl__im__4);
#line 54
c_rt_lib0clear(&___nl__im__5);
#line 54
c_rt_lib0clear(&___nl__im__6);
#line 54
c_rt_lib0clear(&___nl__im__7);
#line 54
c_rt_lib0clear(&___nl__im__8);
#line 54
c_rt_lib0clear(&___nl__im__9);
#line 54
c_rt_lib0clear(&___nl__im__10);
#line 54
c_rt_lib0clear(&___nl__im__11);
#line 54
c_rt_lib0clear(&___nl__im__12);
#line 54
c_rt_lib0clear(&___nl__im__13);
#line 54
c_rt_lib0clear(&___nl__im__14);
#line 54
c_rt_lib0clear(&___nl__im__15);
#line 54
c_rt_lib0clear(&___nl__im__16);
#line 54
c_rt_lib0clear(&___nl__im__17);
#line 54
c_rt_lib0clear(&___nl__im__18);
#line 54
c_rt_lib0clear(&___nl__im__19);
#line 54
c_rt_lib0clear(&___nl__im__20);
#line 54
c_rt_lib0clear(&___nl__im__21);
#line 54
c_rt_lib0clear(&___nl__im__22);
#line 54
c_rt_lib0clear(&___nl__im__23);
#line 54
c_rt_lib0clear(&___nl__im__24);
#line 54
c_rt_lib0clear(&___nl__im__25);
#line 54
c_rt_lib0copy(&___nl__im__26, ___nl__im__2);
#line 54
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__26));
#line 54
c_rt_lib0clear(&___nl__im__2);
#line 54
c_rt_lib0clear(&___nl__im__3);
#line 54
c_rt_lib0clear(&___nl__im__4);
#line 54
c_rt_lib0clear(&___nl__im__5);
#line 54
c_rt_lib0clear(&___nl__im__6);
#line 54
c_rt_lib0clear(&___nl__im__7);
#line 54
c_rt_lib0clear(&___nl__im__8);
#line 54
c_rt_lib0clear(&___nl__im__9);
#line 54
c_rt_lib0clear(&___nl__im__10);
#line 54
c_rt_lib0clear(&___nl__im__11);
#line 54
c_rt_lib0clear(&___nl__im__12);
#line 54
c_rt_lib0clear(&___nl__im__13);
#line 54
c_rt_lib0clear(&___nl__im__14);
#line 54
c_rt_lib0clear(&___nl__im__15);
#line 54
c_rt_lib0clear(&___nl__im__16);
#line 54
c_rt_lib0clear(&___nl__im__17);
#line 54
c_rt_lib0clear(&___nl__im__18);
#line 54
c_rt_lib0clear(&___nl__im__19);
#line 54
c_rt_lib0clear(&___nl__im__20);
#line 54
c_rt_lib0clear(&___nl__im__21);
#line 54
c_rt_lib0clear(&___nl__im__22);
#line 54
c_rt_lib0clear(&___nl__im__23);
#line 54
c_rt_lib0clear(&___nl__im__24);
#line 54
c_rt_lib0clear(&___nl__im__25);
#line 54
c_rt_lib0clear(&___nl__im__26);
#line 54
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 54
c_rt_lib0clear(&___nl__im__1);
#line 54
c_rt_lib0clear(&___nl__im__2);
#line 54
c_rt_lib0clear(&___nl__im__3);
#line 54
c_rt_lib0clear(&___nl__im__4);
#line 54
c_rt_lib0clear(&___nl__im__5);
#line 54
c_rt_lib0clear(&___nl__im__6);
#line 54
c_rt_lib0clear(&___nl__im__7);
#line 54
c_rt_lib0clear(&___nl__im__8);
#line 54
c_rt_lib0clear(&___nl__im__9);
#line 54
c_rt_lib0clear(&___nl__im__10);
#line 54
c_rt_lib0clear(&___nl__im__11);
#line 54
c_rt_lib0clear(&___nl__im__12);
#line 54
c_rt_lib0clear(&___nl__im__13);
#line 54
c_rt_lib0clear(&___nl__im__14);
#line 54
c_rt_lib0clear(&___nl__im__15);
#line 54
c_rt_lib0clear(&___nl__im__16);
#line 54
c_rt_lib0clear(&___nl__im__17);
#line 54
c_rt_lib0clear(&___nl__im__18);
#line 54
c_rt_lib0clear(&___nl__im__19);
#line 54
c_rt_lib0clear(&___nl__im__20);
#line 54
c_rt_lib0clear(&___nl__im__21);
#line 54
c_rt_lib0clear(&___nl__im__22);
#line 54
c_rt_lib0clear(&___nl__im__23);
#line 54
c_rt_lib0clear(&___nl__im__24);
#line 54
c_rt_lib0clear(&___nl__im__25);
#line 54
c_rt_lib0clear(&___nl__im__26);
#line 54
return ___nl__im__0;
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
c_rt_lib0clear(&___nl__im__1);
#line 54
c_rt_lib0clear(&___nl__im__2);
#line 54
c_rt_lib0clear(&___nl__im__3);
#line 54
c_rt_lib0clear(&___nl__im__4);
#line 54
c_rt_lib0clear(&___nl__im__5);
#line 54
c_rt_lib0clear(&___nl__im__6);
#line 54
c_rt_lib0clear(&___nl__im__7);
#line 54
c_rt_lib0clear(&___nl__im__8);
#line 54
c_rt_lib0clear(&___nl__im__9);
#line 54
c_rt_lib0clear(&___nl__im__10);
#line 54
c_rt_lib0clear(&___nl__im__11);
#line 54
c_rt_lib0clear(&___nl__im__12);
#line 54
c_rt_lib0clear(&___nl__im__13);
#line 54
c_rt_lib0clear(&___nl__im__14);
#line 54
c_rt_lib0clear(&___nl__im__15);
#line 54
c_rt_lib0clear(&___nl__im__16);
#line 54
c_rt_lib0clear(&___nl__im__17);
#line 54
c_rt_lib0clear(&___nl__im__18);
#line 54
c_rt_lib0clear(&___nl__im__19);
#line 54
c_rt_lib0clear(&___nl__im__20);
#line 54
c_rt_lib0clear(&___nl__im__21);
#line 54
c_rt_lib0clear(&___nl__im__22);
#line 54
c_rt_lib0clear(&___nl__im__23);
#line 54
c_rt_lib0clear(&___nl__im__24);
#line 54
c_rt_lib0clear(&___nl__im__25);
#line 54
c_rt_lib0clear(&___nl__im__26);
#line 54
return NULL;
}

ImmT  wprinter0str_arr_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0str_arr_t");
return wprinter0str_arr_t();
}
ImmT  wprinter0str_arr_t() {
wprinter_priv0__const__init();
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
#line 60
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 60
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 60
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__5));
#line 60
c_rt_lib0clear(&___nl__im__4);
#line 60
c_rt_lib0clear(&___nl__im__5);
#line 60
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 60
c_rt_lib0move(&___nl__im__9, ptd0none());
#line 60
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_const(1083), ___nl__im__8, ___get_global_const(1084), ___nl__im__9));
#line 60
c_rt_lib0clear(&___nl__im__8);
#line 60
c_rt_lib0clear(&___nl__im__9);
#line 60
c_rt_lib0copy(&___nl__im__10, ___nl__im__7);
#line 60
c_rt_lib0move(&___nl__im__6, ptd0var(___nl__im__10));
#line 60
c_rt_lib0clear(&___nl__im__7);
#line 60
c_rt_lib0clear(&___nl__im__8);
#line 60
c_rt_lib0clear(&___nl__im__9);
#line 60
c_rt_lib0clear(&___nl__im__10);
#line 60
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(377), ___nl__im__3, ___get_global_const(1085), ___nl__im__6));
#line 60
c_rt_lib0clear(&___nl__im__3);
#line 60
c_rt_lib0clear(&___nl__im__4);
#line 60
c_rt_lib0clear(&___nl__im__5);
#line 60
c_rt_lib0clear(&___nl__im__6);
#line 60
c_rt_lib0clear(&___nl__im__7);
#line 60
c_rt_lib0clear(&___nl__im__8);
#line 60
c_rt_lib0clear(&___nl__im__9);
#line 60
c_rt_lib0clear(&___nl__im__10);
#line 60
c_rt_lib0copy(&___nl__im__11, ___nl__im__2);
#line 60
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__11));
#line 60
c_rt_lib0clear(&___nl__im__2);
#line 60
c_rt_lib0clear(&___nl__im__3);
#line 60
c_rt_lib0clear(&___nl__im__4);
#line 60
c_rt_lib0clear(&___nl__im__5);
#line 60
c_rt_lib0clear(&___nl__im__6);
#line 60
c_rt_lib0clear(&___nl__im__7);
#line 60
c_rt_lib0clear(&___nl__im__8);
#line 60
c_rt_lib0clear(&___nl__im__9);
#line 60
c_rt_lib0clear(&___nl__im__10);
#line 60
c_rt_lib0clear(&___nl__im__11);
#line 60
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 60
c_rt_lib0clear(&___nl__im__1);
#line 60
c_rt_lib0clear(&___nl__im__2);
#line 60
c_rt_lib0clear(&___nl__im__3);
#line 60
c_rt_lib0clear(&___nl__im__4);
#line 60
c_rt_lib0clear(&___nl__im__5);
#line 60
c_rt_lib0clear(&___nl__im__6);
#line 60
c_rt_lib0clear(&___nl__im__7);
#line 60
c_rt_lib0clear(&___nl__im__8);
#line 60
c_rt_lib0clear(&___nl__im__9);
#line 60
c_rt_lib0clear(&___nl__im__10);
#line 60
c_rt_lib0clear(&___nl__im__11);
#line 60
return ___nl__im__0;
#line 60
c_rt_lib0clear(&___nl__im__0);
#line 60
c_rt_lib0clear(&___nl__im__1);
#line 60
c_rt_lib0clear(&___nl__im__2);
#line 60
c_rt_lib0clear(&___nl__im__3);
#line 60
c_rt_lib0clear(&___nl__im__4);
#line 60
c_rt_lib0clear(&___nl__im__5);
#line 60
c_rt_lib0clear(&___nl__im__6);
#line 60
c_rt_lib0clear(&___nl__im__7);
#line 60
c_rt_lib0clear(&___nl__im__8);
#line 60
c_rt_lib0clear(&___nl__im__9);
#line 60
c_rt_lib0clear(&___nl__im__10);
#line 60
c_rt_lib0clear(&___nl__im__11);
#line 60
return NULL;
}

ImmT  wprinter0pretty_arr_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0pretty_arr_t");
return wprinter0pretty_arr_t();
}
ImmT  wprinter0pretty_arr_t() {
wprinter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 64
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(wprinter0pretty_t0ptr, ___get_global_const(1530), ___get_global_const(1533)));
#line 64
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 64
c_rt_lib0copy(&___nl__im__3, ___nl__im__2);
#line 64
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__3));
#line 64
c_rt_lib0clear(&___nl__im__2);
#line 64
c_rt_lib0clear(&___nl__im__3);
#line 64
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 64
c_rt_lib0clear(&___nl__im__1);
#line 64
c_rt_lib0clear(&___nl__im__2);
#line 64
c_rt_lib0clear(&___nl__im__3);
#line 64
return ___nl__im__0;
#line 64
c_rt_lib0clear(&___nl__im__0);
#line 64
c_rt_lib0clear(&___nl__im__1);
#line 64
c_rt_lib0clear(&___nl__im__2);
#line 64
c_rt_lib0clear(&___nl__im__3);
#line 64
return NULL;
}

wprinter0pretty_t0type wprinter0get_sep0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0get_sep");
return wprinter0get_sep();
}
wprinter0pretty_t0type wprinter0get_sep() {
wprinter_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 68
c_rt_lib0move(&___nl__im__1, wprinter_priv0get_sep());
#line 68
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 68
c_rt_lib0clear(&___nl__im__1);
#line 68
return ___nl__im__0;
#line 68
c_rt_lib0clear(&___nl__im__0);
#line 68
c_rt_lib0clear(&___nl__im__1);
#line 68
return NULL;
}

INT  wprinter_priv0count_len(wprinter0pretty_arr_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
wprinter_priv0__const__init();
INT  ___nl__int__1 = 0;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
#line 72
___nl__int__1 = 0;
#line 73
___nl__int__3 = 0;
#line 73
___nl__int__4 = 1;
#line 73
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 73
label_3:
#line 73
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 73
___nl__bool__6 = ___nl__int__7;
#line 73
if(___nl__bool__6){ goto label_1;}
#line 73
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 73
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 74
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(290)));
#line 74
___nl__int__10 = getIntFromImm(___nl__im__9);
#line 74
___nl__int__1 = ___nl__int__1 + ___nl__int__10;
#line 74
c_rt_lib0clear(&___nl__im__9);
#line 74
//clear ___nl__int__10;
#line 74
c_rt_lib0clear(&___nl__im__2);
#line 74
label_2:
#line 75
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 75
goto label_3;
#line 75
label_1:
#line 76
___nl__int__11 = ___nl__int__1;
#line 76
c_rt_lib0clear(&___nl__im__0);
#line 76
//clear ___nl__int__1;
#line 76
c_rt_lib0clear(&___nl__im__2);
#line 76
//clear ___nl__int__3;
#line 76
//clear ___nl__int__4;
#line 76
//clear ___nl__int__5;
#line 76
//clear ___nl__bool__6;
#line 76
//clear ___nl__int__7;
#line 76
c_rt_lib0clear(&___nl__im__8);
#line 76
c_rt_lib0clear(&___nl__im__9);
#line 76
//clear ___nl__int__10;
#line 76
return ___nl__int__11;
#line 76
c_rt_lib0clear(&___nl__im__0);
#line 76
//clear ___nl__int__1;
#line 76
c_rt_lib0clear(&___nl__im__2);
#line 76
//clear ___nl__int__3;
#line 76
//clear ___nl__int__4;
#line 76
//clear ___nl__int__5;
#line 76
//clear ___nl__bool__6;
#line 76
//clear ___nl__int__7;
#line 76
c_rt_lib0clear(&___nl__im__8);
#line 76
c_rt_lib0clear(&___nl__im__9);
#line 76
//clear ___nl__int__10;
#line 76
//clear ___nl__int__11;
#line 76
return 0;
}

wprinter0pretty_t0type wprinter0build_pretty_a0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "wprinter0build_pretty_a");
wprinter0pretty_arr_t0type var0 = (_tab[0]);
return wprinter0build_pretty_a(var0);
}
wprinter0pretty_t0type wprinter0build_pretty_a(wprinter0pretty_arr_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
wprinter_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 80
c_rt_lib0copy(&___nl__im__4, ___nl__im__0);
#line 80
___nl__int__3 = wprinter_priv0count_len(___nl__im__4);
#line 80
c_rt_lib0clear(&___nl__im__4);
#line 80
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__3));
#line 80
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 80
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_const(377), ___nl__im__0, ___get_global_const(96), ___nl__im__8));
#line 80
c_rt_lib0clear(&___nl__im__8);
#line 80
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(377), ___nl__im__7));
#line 80
c_rt_lib0clear(&___nl__im__7);
#line 80
c_rt_lib0clear(&___nl__im__8);
#line 80
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(290), ___nl__im__5, ___get_global_const(1238), ___nl__im__6));
#line 80
//clear ___nl__int__3;
#line 80
c_rt_lib0clear(&___nl__im__4);
#line 80
c_rt_lib0clear(&___nl__im__5);
#line 80
c_rt_lib0clear(&___nl__im__6);
#line 80
c_rt_lib0clear(&___nl__im__7);
#line 80
c_rt_lib0clear(&___nl__im__8);
#line 80
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 80
c_rt_lib0clear(&___nl__im__0);
#line 80
c_rt_lib0clear(&___nl__im__2);
#line 80
//clear ___nl__int__3;
#line 80
c_rt_lib0clear(&___nl__im__4);
#line 80
c_rt_lib0clear(&___nl__im__5);
#line 80
c_rt_lib0clear(&___nl__im__6);
#line 80
c_rt_lib0clear(&___nl__im__7);
#line 80
c_rt_lib0clear(&___nl__im__8);
#line 80
return ___nl__im__1;
#line 80
c_rt_lib0clear(&___nl__im__0);
#line 80
c_rt_lib0clear(&___nl__im__1);
#line 80
c_rt_lib0clear(&___nl__im__2);
#line 80
//clear ___nl__int__3;
#line 80
c_rt_lib0clear(&___nl__im__4);
#line 80
c_rt_lib0clear(&___nl__im__5);
#line 80
c_rt_lib0clear(&___nl__im__6);
#line 80
c_rt_lib0clear(&___nl__im__7);
#line 80
c_rt_lib0clear(&___nl__im__8);
#line 80
return NULL;
}

wprinter0pretty_t0type wprinter0build_pretty_l0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "wprinter0build_pretty_l");
wprinter0pretty_arr_t0type var0 = (_tab[0]);
return wprinter0build_pretty_l(var0);
}
wprinter0pretty_t0type wprinter0build_pretty_l(wprinter0pretty_arr_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
wprinter_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 84
c_rt_lib0copy(&___nl__im__4, ___nl__im__0);
#line 84
___nl__int__3 = wprinter_priv0count_len(___nl__im__4);
#line 84
c_rt_lib0clear(&___nl__im__4);
#line 84
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__3));
#line 84
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(1528)));
#line 84
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_const(377), ___nl__im__0, ___get_global_const(96), ___nl__im__8));
#line 84
c_rt_lib0clear(&___nl__im__8);
#line 84
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(377), ___nl__im__7));
#line 84
c_rt_lib0clear(&___nl__im__7);
#line 84
c_rt_lib0clear(&___nl__im__8);
#line 84
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(290), ___nl__im__5, ___get_global_const(1238), ___nl__im__6));
#line 84
//clear ___nl__int__3;
#line 84
c_rt_lib0clear(&___nl__im__4);
#line 84
c_rt_lib0clear(&___nl__im__5);
#line 84
c_rt_lib0clear(&___nl__im__6);
#line 84
c_rt_lib0clear(&___nl__im__7);
#line 84
c_rt_lib0clear(&___nl__im__8);
#line 84
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 84
c_rt_lib0clear(&___nl__im__0);
#line 84
c_rt_lib0clear(&___nl__im__2);
#line 84
//clear ___nl__int__3;
#line 84
c_rt_lib0clear(&___nl__im__4);
#line 84
c_rt_lib0clear(&___nl__im__5);
#line 84
c_rt_lib0clear(&___nl__im__6);
#line 84
c_rt_lib0clear(&___nl__im__7);
#line 84
c_rt_lib0clear(&___nl__im__8);
#line 84
return ___nl__im__1;
#line 84
c_rt_lib0clear(&___nl__im__0);
#line 84
c_rt_lib0clear(&___nl__im__1);
#line 84
c_rt_lib0clear(&___nl__im__2);
#line 84
//clear ___nl__int__3;
#line 84
c_rt_lib0clear(&___nl__im__4);
#line 84
c_rt_lib0clear(&___nl__im__5);
#line 84
c_rt_lib0clear(&___nl__im__6);
#line 84
c_rt_lib0clear(&___nl__im__7);
#line 84
c_rt_lib0clear(&___nl__im__8);
#line 84
return NULL;
}

wprinter0pretty_t0type wprinter0build_pretty_op_l0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "wprinter0build_pretty_op_l");
wprinter0pretty_arr_t0type var0 = (_tab[0]);
return wprinter0build_pretty_op_l(var0);
}
wprinter0pretty_t0type wprinter0build_pretty_op_l(wprinter0pretty_arr_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
wprinter_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 88
c_rt_lib0copy(&___nl__im__4, ___nl__im__0);
#line 88
___nl__int__3 = wprinter_priv0count_len(___nl__im__4);
#line 88
c_rt_lib0clear(&___nl__im__4);
#line 88
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__3));
#line 88
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(1529)));
#line 88
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_const(377), ___nl__im__0, ___get_global_const(96), ___nl__im__8));
#line 88
c_rt_lib0clear(&___nl__im__8);
#line 88
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(377), ___nl__im__7));
#line 88
c_rt_lib0clear(&___nl__im__7);
#line 88
c_rt_lib0clear(&___nl__im__8);
#line 88
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(290), ___nl__im__5, ___get_global_const(1238), ___nl__im__6));
#line 88
//clear ___nl__int__3;
#line 88
c_rt_lib0clear(&___nl__im__4);
#line 88
c_rt_lib0clear(&___nl__im__5);
#line 88
c_rt_lib0clear(&___nl__im__6);
#line 88
c_rt_lib0clear(&___nl__im__7);
#line 88
c_rt_lib0clear(&___nl__im__8);
#line 88
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 88
c_rt_lib0clear(&___nl__im__0);
#line 88
c_rt_lib0clear(&___nl__im__2);
#line 88
//clear ___nl__int__3;
#line 88
c_rt_lib0clear(&___nl__im__4);
#line 88
c_rt_lib0clear(&___nl__im__5);
#line 88
c_rt_lib0clear(&___nl__im__6);
#line 88
c_rt_lib0clear(&___nl__im__7);
#line 88
c_rt_lib0clear(&___nl__im__8);
#line 88
return ___nl__im__1;
#line 88
c_rt_lib0clear(&___nl__im__0);
#line 88
c_rt_lib0clear(&___nl__im__1);
#line 88
c_rt_lib0clear(&___nl__im__2);
#line 88
//clear ___nl__int__3;
#line 88
c_rt_lib0clear(&___nl__im__4);
#line 88
c_rt_lib0clear(&___nl__im__5);
#line 88
c_rt_lib0clear(&___nl__im__6);
#line 88
c_rt_lib0clear(&___nl__im__7);
#line 88
c_rt_lib0clear(&___nl__im__8);
#line 88
return NULL;
}

wprinter0pretty_t0type wprinter0build_pretty_bind0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "wprinter0build_pretty_bind");
wprinter0pretty_t0type var0 = (_tab[0]);
wprinter0pretty_t0type var1 = (_tab[1]);
return wprinter0build_pretty_bind(var0, var1);
}
wprinter0pretty_t0type wprinter0build_pretty_bind(wprinter0pretty_t0type ___nl__im__0,wprinter0pretty_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 92
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(290)));
#line 92
___nl__int__5 = getIntFromImm(___nl__im__6);
#line 92
c_rt_lib0clear(&___nl__im__6);
#line 92
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(290)));
#line 92
___nl__int__7 = getIntFromImm(___nl__im__8);
#line 92
c_rt_lib0clear(&___nl__im__8);
#line 92
___nl__int__4 = ___nl__int__5 + ___nl__int__7;
#line 92
//clear ___nl__int__5;
#line 92
c_rt_lib0clear(&___nl__im__6);
#line 92
//clear ___nl__int__7;
#line 92
c_rt_lib0clear(&___nl__im__8);
#line 92
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__4));
#line 92
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(1337), ___nl__im__0, ___get_global_const(1338), ___nl__im__1));
#line 92
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(1535), ___nl__im__11));
#line 92
c_rt_lib0clear(&___nl__im__11);
#line 92
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(290), ___nl__im__9, ___get_global_const(1238), ___nl__im__10));
#line 92
//clear ___nl__int__4;
#line 92
//clear ___nl__int__5;
#line 92
c_rt_lib0clear(&___nl__im__6);
#line 92
//clear ___nl__int__7;
#line 92
c_rt_lib0clear(&___nl__im__8);
#line 92
c_rt_lib0clear(&___nl__im__9);
#line 92
c_rt_lib0clear(&___nl__im__10);
#line 92
c_rt_lib0clear(&___nl__im__11);
#line 92
c_rt_lib0copy(&___nl__im__2, ___nl__im__3);
#line 92
c_rt_lib0clear(&___nl__im__0);
#line 92
c_rt_lib0clear(&___nl__im__1);
#line 92
c_rt_lib0clear(&___nl__im__3);
#line 92
//clear ___nl__int__4;
#line 92
//clear ___nl__int__5;
#line 92
c_rt_lib0clear(&___nl__im__6);
#line 92
//clear ___nl__int__7;
#line 92
c_rt_lib0clear(&___nl__im__8);
#line 92
c_rt_lib0clear(&___nl__im__9);
#line 92
c_rt_lib0clear(&___nl__im__10);
#line 92
c_rt_lib0clear(&___nl__im__11);
#line 92
return ___nl__im__2;
#line 92
c_rt_lib0clear(&___nl__im__0);
#line 92
c_rt_lib0clear(&___nl__im__1);
#line 92
c_rt_lib0clear(&___nl__im__2);
#line 92
c_rt_lib0clear(&___nl__im__3);
#line 92
//clear ___nl__int__4;
#line 92
//clear ___nl__int__5;
#line 92
c_rt_lib0clear(&___nl__im__6);
#line 92
//clear ___nl__int__7;
#line 92
c_rt_lib0clear(&___nl__im__8);
#line 92
c_rt_lib0clear(&___nl__im__9);
#line 92
c_rt_lib0clear(&___nl__im__10);
#line 92
c_rt_lib0clear(&___nl__im__11);
#line 92
return NULL;
}

wprinter0pretty_t0type wprinter0build_pretty_arr_decl0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "wprinter0build_pretty_arr_decl");
wprinter0pretty_arr_t0type var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
ImmT  var2 = (_tab[2]);
return wprinter0build_pretty_arr_decl(var0, var1, var2);
}
wprinter0pretty_t0type wprinter0build_pretty_arr_decl(wprinter0pretty_arr_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
wprinter_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 98
c_rt_lib0copy(&___nl__im__8, ___nl__im__0);
#line 98
___nl__int__7 = wprinter_priv0count_len(___nl__im__8);
#line 98
c_rt_lib0clear(&___nl__im__8);
#line 98
c_rt_lib0copy(&___nl__im__10, ___nl__im__1);
#line 98
___nl__int__9 = string0length(___nl__im__10);
#line 98
c_rt_lib0clear(&___nl__im__10);
#line 98
___nl__int__6 = ___nl__int__7 + ___nl__int__9;
#line 98
//clear ___nl__int__7;
#line 98
c_rt_lib0clear(&___nl__im__8);
#line 98
//clear ___nl__int__9;
#line 98
c_rt_lib0clear(&___nl__im__10);
#line 98
c_rt_lib0copy(&___nl__im__12, ___nl__im__2);
#line 98
___nl__int__11 = string0length(___nl__im__12);
#line 98
c_rt_lib0clear(&___nl__im__12);
#line 98
___nl__int__5 = ___nl__int__6 + ___nl__int__11;
#line 98
//clear ___nl__int__6;
#line 98
//clear ___nl__int__7;
#line 98
c_rt_lib0clear(&___nl__im__8);
#line 98
//clear ___nl__int__9;
#line 98
c_rt_lib0clear(&___nl__im__10);
#line 98
//clear ___nl__int__11;
#line 98
c_rt_lib0clear(&___nl__im__12);
#line 98
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__5));
#line 99
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(3, ___get_global_const(377), ___nl__im__0, ___get_global_const(1031), ___nl__im__1, ___get_global_const(1083), ___nl__im__2));
#line 99
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(240), ___nl__im__15));
#line 99
c_rt_lib0clear(&___nl__im__15);
#line 99
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(290), ___nl__im__13, ___get_global_const(1238), ___nl__im__14));
#line 99
//clear ___nl__int__5;
#line 99
//clear ___nl__int__6;
#line 99
//clear ___nl__int__7;
#line 99
c_rt_lib0clear(&___nl__im__8);
#line 99
//clear ___nl__int__9;
#line 99
c_rt_lib0clear(&___nl__im__10);
#line 99
//clear ___nl__int__11;
#line 99
c_rt_lib0clear(&___nl__im__12);
#line 99
c_rt_lib0clear(&___nl__im__13);
#line 99
c_rt_lib0clear(&___nl__im__14);
#line 99
c_rt_lib0clear(&___nl__im__15);
#line 99
c_rt_lib0copy(&___nl__im__3, ___nl__im__4);
#line 99
c_rt_lib0clear(&___nl__im__0);
#line 99
c_rt_lib0clear(&___nl__im__1);
#line 99
c_rt_lib0clear(&___nl__im__2);
#line 99
c_rt_lib0clear(&___nl__im__4);
#line 99
//clear ___nl__int__5;
#line 99
//clear ___nl__int__6;
#line 99
//clear ___nl__int__7;
#line 99
c_rt_lib0clear(&___nl__im__8);
#line 99
//clear ___nl__int__9;
#line 99
c_rt_lib0clear(&___nl__im__10);
#line 99
//clear ___nl__int__11;
#line 99
c_rt_lib0clear(&___nl__im__12);
#line 99
c_rt_lib0clear(&___nl__im__13);
#line 99
c_rt_lib0clear(&___nl__im__14);
#line 99
c_rt_lib0clear(&___nl__im__15);
#line 99
return ___nl__im__3;
#line 99
c_rt_lib0clear(&___nl__im__0);
#line 99
c_rt_lib0clear(&___nl__im__1);
#line 99
c_rt_lib0clear(&___nl__im__2);
#line 99
c_rt_lib0clear(&___nl__im__3);
#line 99
c_rt_lib0clear(&___nl__im__4);
#line 99
//clear ___nl__int__5;
#line 99
//clear ___nl__int__6;
#line 99
//clear ___nl__int__7;
#line 99
c_rt_lib0clear(&___nl__im__8);
#line 99
//clear ___nl__int__9;
#line 99
c_rt_lib0clear(&___nl__im__10);
#line 99
//clear ___nl__int__11;
#line 99
c_rt_lib0clear(&___nl__im__12);
#line 99
c_rt_lib0clear(&___nl__im__13);
#line 99
c_rt_lib0clear(&___nl__im__14);
#line 99
c_rt_lib0clear(&___nl__im__15);
#line 99
return NULL;
}

wprinter0pretty_t0type wprinter0build_sim0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "wprinter0build_sim");
ImmT  var0 = (_tab[0]);
return wprinter0build_sim(var0);
}
wprinter0pretty_t0type wprinter0build_sim(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
wprinter_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 104
c_rt_lib0copy(&___nl__im__4, ___nl__im__0);
#line 104
___nl__int__3 = string0length(___nl__im__4);
#line 104
c_rt_lib0clear(&___nl__im__4);
#line 104
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__3));
#line 104
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(390), ___nl__im__0));
#line 104
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(290), ___nl__im__5, ___get_global_const(1238), ___nl__im__6));
#line 104
//clear ___nl__int__3;
#line 104
c_rt_lib0clear(&___nl__im__4);
#line 104
c_rt_lib0clear(&___nl__im__5);
#line 104
c_rt_lib0clear(&___nl__im__6);
#line 104
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 104
c_rt_lib0clear(&___nl__im__0);
#line 104
c_rt_lib0clear(&___nl__im__2);
#line 104
//clear ___nl__int__3;
#line 104
c_rt_lib0clear(&___nl__im__4);
#line 104
c_rt_lib0clear(&___nl__im__5);
#line 104
c_rt_lib0clear(&___nl__im__6);
#line 104
return ___nl__im__1;
#line 104
c_rt_lib0clear(&___nl__im__0);
#line 104
c_rt_lib0clear(&___nl__im__1);
#line 104
c_rt_lib0clear(&___nl__im__2);
#line 104
//clear ___nl__int__3;
#line 104
c_rt_lib0clear(&___nl__im__4);
#line 104
c_rt_lib0clear(&___nl__im__5);
#line 104
c_rt_lib0clear(&___nl__im__6);
#line 104
return NULL;
}

wprinter0pretty_t0type wprinter0build_str_arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "wprinter0build_str_arr");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return wprinter0build_str_arr(var0, var1);
}
wprinter0pretty_t0type wprinter0build_str_arr(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
#line 111
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(1083));
#line 111
if(___nl__bool__2){ goto label_2;}
#line 113
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(1084));
#line 113
if(___nl__bool__2){ goto label_3;}
#line 113
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 113
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 113
nl_die_arg(___nl__im__3);
#line 111
label_2:
#line 112
c_rt_lib0copy(&___nl__im__6, ___nl__im__0);
#line 112
___nl__int__5 = c_rt_lib0array_len(___nl__im__6);
#line 112
c_rt_lib0clear(&___nl__im__6);
#line 112
___nl__int__7 = 1;
#line 112
___nl__int__8 = ___nl__int__5 == ___nl__int__7;
#line 112
___nl__bool__4 = ___nl__int__8;
#line 112
//clear ___nl__int__5;
#line 112
c_rt_lib0clear(&___nl__im__6);
#line 112
//clear ___nl__int__7;
#line 112
//clear ___nl__int__8;
#line 112
___nl__bool__4 = !___nl__bool__4;
#line 112
if(___nl__bool__4){ goto label_5;}
#line 112
___nl__int__12 = 0;
#line 112
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__0, ___nl__int__12));
#line 112
//clear ___nl__int__12;
#line 112
c_rt_lib0copy(&___nl__im__13, ___nl__im__11);
#line 112
c_rt_lib0move(&___nl__im__10, wprinter0build_sim(___nl__im__13));
#line 112
c_rt_lib0clear(&___nl__im__11);
#line 112
//clear ___nl__int__12;
#line 112
c_rt_lib0clear(&___nl__im__13);
#line 112
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 112
c_rt_lib0clear(&___nl__im__0);
#line 112
c_rt_lib0clear(&___nl__im__1);
#line 112
//clear ___nl__bool__2;
#line 112
c_rt_lib0clear(&___nl__im__3);
#line 112
//clear ___nl__bool__4;
#line 112
//clear ___nl__int__5;
#line 112
c_rt_lib0clear(&___nl__im__6);
#line 112
//clear ___nl__int__7;
#line 112
//clear ___nl__int__8;
#line 112
c_rt_lib0clear(&___nl__im__10);
#line 112
c_rt_lib0clear(&___nl__im__11);
#line 112
//clear ___nl__int__12;
#line 112
c_rt_lib0clear(&___nl__im__13);
#line 112
return ___nl__im__9;
#line 112
goto label_4;
#line 112
label_5:
#line 112
label_4:
#line 113
goto label_1;
#line 113
label_3:
#line 114
goto label_1;
#line 114
label_1:
#line 115
___nl__int__17 = 2;
#line 115
___nl__int__18 = wprinter_priv0get_line_width();
#line 115
___nl__int__16 = ___nl__int__17 * ___nl__int__18;
#line 115
//clear ___nl__int__17;
#line 115
//clear ___nl__int__18;
#line 115
c_rt_lib0move(&___nl__im__19, c_rt_lib0int_new(___nl__int__16));
#line 115
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_const(377), ___nl__im__0, ___get_global_const(1085), ___nl__im__1));
#line 115
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(1536), ___nl__im__21));
#line 115
c_rt_lib0clear(&___nl__im__21);
#line 115
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(290), ___nl__im__19, ___get_global_const(1238), ___nl__im__20));
#line 115
//clear ___nl__int__16;
#line 115
//clear ___nl__int__17;
#line 115
//clear ___nl__int__18;
#line 115
c_rt_lib0clear(&___nl__im__19);
#line 115
c_rt_lib0clear(&___nl__im__20);
#line 115
c_rt_lib0clear(&___nl__im__21);
#line 115
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 115
c_rt_lib0clear(&___nl__im__0);
#line 115
c_rt_lib0clear(&___nl__im__1);
#line 115
//clear ___nl__bool__2;
#line 115
c_rt_lib0clear(&___nl__im__3);
#line 115
//clear ___nl__bool__4;
#line 115
//clear ___nl__int__5;
#line 115
c_rt_lib0clear(&___nl__im__6);
#line 115
//clear ___nl__int__7;
#line 115
//clear ___nl__int__8;
#line 115
c_rt_lib0clear(&___nl__im__9);
#line 115
c_rt_lib0clear(&___nl__im__10);
#line 115
c_rt_lib0clear(&___nl__im__11);
#line 115
//clear ___nl__int__12;
#line 115
c_rt_lib0clear(&___nl__im__13);
#line 115
c_rt_lib0clear(&___nl__im__15);
#line 115
//clear ___nl__int__16;
#line 115
//clear ___nl__int__17;
#line 115
//clear ___nl__int__18;
#line 115
c_rt_lib0clear(&___nl__im__19);
#line 115
c_rt_lib0clear(&___nl__im__20);
#line 115
c_rt_lib0clear(&___nl__im__21);
#line 115
return ___nl__im__14;
#line 115
c_rt_lib0clear(&___nl__im__0);
#line 115
c_rt_lib0clear(&___nl__im__1);
#line 115
//clear ___nl__bool__2;
#line 115
c_rt_lib0clear(&___nl__im__3);
#line 115
//clear ___nl__bool__4;
#line 115
//clear ___nl__int__5;
#line 115
c_rt_lib0clear(&___nl__im__6);
#line 115
//clear ___nl__int__7;
#line 115
//clear ___nl__int__8;
#line 115
c_rt_lib0clear(&___nl__im__9);
#line 115
c_rt_lib0clear(&___nl__im__10);
#line 115
c_rt_lib0clear(&___nl__im__11);
#line 115
//clear ___nl__int__12;
#line 115
c_rt_lib0clear(&___nl__im__13);
#line 115
c_rt_lib0clear(&___nl__im__14);
#line 115
c_rt_lib0clear(&___nl__im__15);
#line 115
//clear ___nl__int__16;
#line 115
//clear ___nl__int__17;
#line 115
//clear ___nl__int__18;
#line 115
c_rt_lib0clear(&___nl__im__19);
#line 115
c_rt_lib0clear(&___nl__im__20);
#line 115
c_rt_lib0clear(&___nl__im__21);
#line 115
return NULL;
}

ImmT  wprinter_priv0print_sim_arr(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 119
___nl__int__3 = 0;
#line 119
___nl__int__4 = 1;
#line 119
___nl__int__5 = c_rt_lib0array_len(___nl__im__1);
#line 119
label_3:
#line 119
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 119
___nl__bool__6 = ___nl__int__7;
#line 119
if(___nl__bool__6){ goto label_1;}
#line 119
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 119
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 120
c_rt_lib0copy(&___nl__im__9, ___nl__im__2);
#line 120
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___im__0, ___nl__im__9));
#line 120
c_rt_lib0clear(&___nl__im__9);
#line 120
c_rt_lib0clear(&___nl__im__2);
#line 120
label_2:
#line 121
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 121
goto label_3;
#line 121
label_1:
#line 121
c_rt_lib0clear(&___nl__im__1);
#line 121
c_rt_lib0clear(&___nl__im__2);
#line 121
//clear ___nl__int__3;
#line 121
//clear ___nl__int__4;
#line 121
//clear ___nl__int__5;
#line 121
//clear ___nl__bool__6;
#line 121
//clear ___nl__int__7;
#line 121
c_rt_lib0clear(&___nl__im__8);
#line 121
c_rt_lib0clear(&___nl__im__9);
#line 121
return NULL;
}

INT  wprinter_priv0print_str_arr(wprinter0state_t0type* ___ref___im__0,wprinter0str_arr_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
bool  ___nl__bool__24 = false;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
INT  ___nl__int__39 = 0;
ImmT  ___nl__string__40 = NULL;
ImmT  ___nl__string__41 = NULL;
ImmT  ___nl__string__42 = NULL;
ImmT  ___nl__im__43 = NULL;
INT  ___nl__int__44 = 0;
INT  ___nl__int__45 = 0;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
ImmT  ___nl__string__53 = NULL;
ImmT  ___nl__string__54 = NULL;
ImmT  ___nl__string__55 = NULL;
ImmT  ___nl__im__56 = NULL;
INT  ___nl__int__57 = 0;
INT  ___nl__int__58 = 0;
#line 126
___nl__int__4 = ___nl__int__2;
#line 127
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(377)));
#line 128
___nl__int__10 = 0;
#line 128
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__5, ___nl__int__10));
#line 128
//clear ___nl__int__10;
#line 128
c_rt_lib0copy(&___nl__im__11, ___nl__im__9);
#line 128
___nl__int__8 = string0length(___nl__im__11);
#line 128
c_rt_lib0clear(&___nl__im__9);
#line 128
//clear ___nl__int__10;
#line 128
c_rt_lib0clear(&___nl__im__11);
#line 128
___nl__int__7 = ___nl__int__2 + ___nl__int__8;
#line 128
//clear ___nl__int__8;
#line 128
c_rt_lib0clear(&___nl__im__9);
#line 128
//clear ___nl__int__10;
#line 128
c_rt_lib0clear(&___nl__im__11);
#line 128
___nl__int__12 = ___nl__int__7;
#line 128
___nl__bool__6 = wprinter_priv0is_to_long(___nl__int__12);
#line 128
//clear ___nl__int__7;
#line 128
//clear ___nl__int__8;
#line 128
c_rt_lib0clear(&___nl__im__9);
#line 128
//clear ___nl__int__10;
#line 128
c_rt_lib0clear(&___nl__im__11);
#line 128
//clear ___nl__int__12;
#line 128
___nl__bool__6 = !___nl__bool__6;
#line 128
if(___nl__bool__6){ goto label_2;}
#line 129
c_rt_lib0move(&___nl__im__13, string0lf());
#line 129
c_rt_lib0copy(&___nl__im__14, ___nl__im__13);
#line 129
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__14));
#line 129
c_rt_lib0clear(&___nl__im__13);
#line 129
c_rt_lib0clear(&___nl__im__14);
#line 130
___nl__int__16 = ___nl__int__3;
#line 130
c_rt_lib0move(&___nl__im__15, wprinter_priv0pind(___nl__int__16));
#line 130
//clear ___nl__int__16;
#line 130
c_rt_lib0copy(&___nl__im__17, ___nl__im__15);
#line 130
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__17));
#line 130
c_rt_lib0clear(&___nl__im__15);
#line 130
//clear ___nl__int__16;
#line 130
c_rt_lib0clear(&___nl__im__17);
#line 131
___nl__int__18 = wprinter_priv0get_tab_size();
#line 131
___nl__int__4 = ___nl__int__18 * ___nl__int__3;
#line 131
//clear ___nl__int__18;
#line 131
//clear ___nl__int__18;
#line 132
goto label_1;
#line 132
label_2:
#line 132
label_1:
#line 133
___nl__int__19 = 0;
#line 134
___nl__int__21 = 0;
#line 134
___nl__int__22 = 1;
#line 134
___nl__int__23 = c_rt_lib0array_len(___nl__im__5);
#line 134
label_5:
#line 134
___nl__int__25 = ___nl__int__21 >= ___nl__int__23;
#line 134
___nl__bool__24 = ___nl__int__25;
#line 134
if(___nl__bool__24){ goto label_3;}
#line 134
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__5, ___nl__int__21));
#line 134
c_rt_lib0copy(&___nl__im__20, ___nl__im__26);
#line 135
c_rt_lib0copy(&___nl__im__27, ___nl__im__20);
#line 135
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__27));
#line 135
c_rt_lib0clear(&___nl__im__27);
#line 136
c_rt_lib0copy(&___nl__im__29, ___nl__im__20);
#line 136
___nl__int__28 = string0length(___nl__im__29);
#line 136
c_rt_lib0clear(&___nl__im__29);
#line 136
___nl__int__4 = ___nl__int__4 + ___nl__int__28;
#line 136
//clear ___nl__int__28;
#line 136
c_rt_lib0clear(&___nl__im__29);
#line 137
c_rt_lib0copy(&___nl__im__33, ___nl__im__5);
#line 137
___nl__int__32 = c_rt_lib0array_len(___nl__im__33);
#line 137
c_rt_lib0clear(&___nl__im__33);
#line 137
___nl__int__34 = 1;
#line 137
___nl__int__31 = ___nl__int__32 - ___nl__int__34;
#line 137
//clear ___nl__int__32;
#line 137
c_rt_lib0clear(&___nl__im__33);
#line 137
//clear ___nl__int__34;
#line 137
___nl__int__35 = ___nl__int__19 != ___nl__int__31;
#line 137
___nl__bool__30 = ___nl__int__35;
#line 137
//clear ___nl__int__31;
#line 137
//clear ___nl__int__32;
#line 137
c_rt_lib0clear(&___nl__im__33);
#line 137
//clear ___nl__int__34;
#line 137
//clear ___nl__int__35;
#line 137
___nl__bool__30 = !___nl__bool__30;
#line 137
if(___nl__bool__30){ goto label_7;}
#line 138
c_rt_lib0move(&___nl__im__37, string0lf());
#line 138
___nl__int__39 = ___nl__int__3;
#line 138
c_rt_lib0move(&___nl__im__38, wprinter_priv0pind(___nl__int__39));
#line 138
//clear ___nl__int__39;
#line 138
c_rt_lib0copy(&___nl__string__40, ___nl__im__37);
#line 138
c_rt_lib0copy(&___nl__string__41, ___nl__im__38);
#line 138
c_rt_lib0move(&___nl__string__42, c_rt_lib0concat_new(___nl__string__40, ___nl__string__41));
#line 138
c_rt_lib0copy(&___nl__im__36, ___nl__string__42);
#line 138
c_rt_lib0clear(&___nl__im__37);
#line 138
c_rt_lib0clear(&___nl__im__38);
#line 138
//clear ___nl__int__39;
#line 138
c_rt_lib0clear(&___nl__string__40);
#line 138
c_rt_lib0clear(&___nl__string__41);
#line 138
c_rt_lib0clear(&___nl__string__42);
#line 138
c_rt_lib0copy(&___nl__im__43, ___nl__im__36);
#line 138
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__43));
#line 138
c_rt_lib0clear(&___nl__im__36);
#line 138
c_rt_lib0clear(&___nl__im__37);
#line 138
c_rt_lib0clear(&___nl__im__38);
#line 138
//clear ___nl__int__39;
#line 138
c_rt_lib0clear(&___nl__string__40);
#line 138
c_rt_lib0clear(&___nl__string__41);
#line 138
c_rt_lib0clear(&___nl__string__42);
#line 138
c_rt_lib0clear(&___nl__im__43);
#line 139
___nl__int__44 = wprinter_priv0get_tab_size();
#line 139
___nl__int__4 = ___nl__int__44 * ___nl__int__3;
#line 139
//clear ___nl__int__44;
#line 139
//clear ___nl__int__44;
#line 140
goto label_6;
#line 140
label_7:
#line 140
label_6:
#line 141
___nl__int__45 = 1;
#line 141
___nl__int__19 = ___nl__int__19 + ___nl__int__45;
#line 141
//clear ___nl__int__45;
#line 141
c_rt_lib0clear(&___nl__im__20);
#line 141
label_4:
#line 142
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 142
goto label_5;
#line 142
label_3:
#line 143
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(1085)));
#line 143
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__46, ___get_global_const(1084));
#line 143
if(___nl__bool__47){ goto label_9;}
#line 146
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__46, ___get_global_const(1083));
#line 146
if(___nl__bool__47){ goto label_10;}
#line 146
c_rt_lib0move(&___nl__im__48,___get_global_const(16));
#line 146
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(2, ___nl__im__48, ___nl__im__46));
#line 146
nl_die_arg(___nl__im__48);
#line 143
label_9:
#line 144
c_rt_lib0move(&___nl__im__50, string0lf());
#line 144
___nl__int__52 = ___nl__int__3;
#line 144
c_rt_lib0move(&___nl__im__51, wprinter_priv0pind(___nl__int__52));
#line 144
//clear ___nl__int__52;
#line 144
c_rt_lib0copy(&___nl__string__53, ___nl__im__50);
#line 144
c_rt_lib0copy(&___nl__string__54, ___nl__im__51);
#line 144
c_rt_lib0move(&___nl__string__55, c_rt_lib0concat_new(___nl__string__53, ___nl__string__54));
#line 144
c_rt_lib0copy(&___nl__im__49, ___nl__string__55);
#line 144
c_rt_lib0clear(&___nl__im__50);
#line 144
c_rt_lib0clear(&___nl__im__51);
#line 144
//clear ___nl__int__52;
#line 144
c_rt_lib0clear(&___nl__string__53);
#line 144
c_rt_lib0clear(&___nl__string__54);
#line 144
c_rt_lib0clear(&___nl__string__55);
#line 144
c_rt_lib0copy(&___nl__im__56, ___nl__im__49);
#line 144
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__56));
#line 144
c_rt_lib0clear(&___nl__im__49);
#line 144
c_rt_lib0clear(&___nl__im__50);
#line 144
c_rt_lib0clear(&___nl__im__51);
#line 144
//clear ___nl__int__52;
#line 144
c_rt_lib0clear(&___nl__string__53);
#line 144
c_rt_lib0clear(&___nl__string__54);
#line 144
c_rt_lib0clear(&___nl__string__55);
#line 144
c_rt_lib0clear(&___nl__im__56);
#line 145
___nl__int__57 = wprinter_priv0get_tab_size();
#line 145
___nl__int__4 = ___nl__int__57 * ___nl__int__3;
#line 145
//clear ___nl__int__57;
#line 145
//clear ___nl__int__57;
#line 146
goto label_8;
#line 146
label_10:
#line 147
goto label_8;
#line 147
label_8:
#line 148
___nl__int__58 = ___nl__int__4;
#line 148
c_rt_lib0clear(&___nl__im__1);
#line 148
//clear ___nl__int__2;
#line 148
//clear ___nl__int__3;
#line 148
//clear ___nl__int__4;
#line 148
c_rt_lib0clear(&___nl__im__5);
#line 148
//clear ___nl__bool__6;
#line 148
//clear ___nl__int__7;
#line 148
//clear ___nl__int__8;
#line 148
c_rt_lib0clear(&___nl__im__9);
#line 148
//clear ___nl__int__10;
#line 148
c_rt_lib0clear(&___nl__im__11);
#line 148
//clear ___nl__int__12;
#line 148
c_rt_lib0clear(&___nl__im__13);
#line 148
c_rt_lib0clear(&___nl__im__14);
#line 148
c_rt_lib0clear(&___nl__im__15);
#line 148
//clear ___nl__int__16;
#line 148
c_rt_lib0clear(&___nl__im__17);
#line 148
//clear ___nl__int__18;
#line 148
//clear ___nl__int__19;
#line 148
c_rt_lib0clear(&___nl__im__20);
#line 148
//clear ___nl__int__21;
#line 148
//clear ___nl__int__22;
#line 148
//clear ___nl__int__23;
#line 148
//clear ___nl__bool__24;
#line 148
//clear ___nl__int__25;
#line 148
c_rt_lib0clear(&___nl__im__26);
#line 148
c_rt_lib0clear(&___nl__im__27);
#line 148
//clear ___nl__int__28;
#line 148
c_rt_lib0clear(&___nl__im__29);
#line 148
//clear ___nl__bool__30;
#line 148
//clear ___nl__int__31;
#line 148
//clear ___nl__int__32;
#line 148
c_rt_lib0clear(&___nl__im__33);
#line 148
//clear ___nl__int__34;
#line 148
//clear ___nl__int__35;
#line 148
c_rt_lib0clear(&___nl__im__36);
#line 148
c_rt_lib0clear(&___nl__im__37);
#line 148
c_rt_lib0clear(&___nl__im__38);
#line 148
//clear ___nl__int__39;
#line 148
c_rt_lib0clear(&___nl__string__40);
#line 148
c_rt_lib0clear(&___nl__string__41);
#line 148
c_rt_lib0clear(&___nl__string__42);
#line 148
c_rt_lib0clear(&___nl__im__43);
#line 148
//clear ___nl__int__44;
#line 148
//clear ___nl__int__45;
#line 148
c_rt_lib0clear(&___nl__im__46);
#line 148
//clear ___nl__bool__47;
#line 148
c_rt_lib0clear(&___nl__im__48);
#line 148
c_rt_lib0clear(&___nl__im__49);
#line 148
c_rt_lib0clear(&___nl__im__50);
#line 148
c_rt_lib0clear(&___nl__im__51);
#line 148
//clear ___nl__int__52;
#line 148
c_rt_lib0clear(&___nl__string__53);
#line 148
c_rt_lib0clear(&___nl__string__54);
#line 148
c_rt_lib0clear(&___nl__string__55);
#line 148
c_rt_lib0clear(&___nl__im__56);
#line 148
//clear ___nl__int__57;
#line 148
return ___nl__int__58;
#line 148
c_rt_lib0clear(&___nl__im__1);
#line 148
//clear ___nl__int__2;
#line 148
//clear ___nl__int__3;
#line 148
//clear ___nl__int__4;
#line 148
c_rt_lib0clear(&___nl__im__5);
#line 148
//clear ___nl__bool__6;
#line 148
//clear ___nl__int__7;
#line 148
//clear ___nl__int__8;
#line 148
c_rt_lib0clear(&___nl__im__9);
#line 148
//clear ___nl__int__10;
#line 148
c_rt_lib0clear(&___nl__im__11);
#line 148
//clear ___nl__int__12;
#line 148
c_rt_lib0clear(&___nl__im__13);
#line 148
c_rt_lib0clear(&___nl__im__14);
#line 148
c_rt_lib0clear(&___nl__im__15);
#line 148
//clear ___nl__int__16;
#line 148
c_rt_lib0clear(&___nl__im__17);
#line 148
//clear ___nl__int__18;
#line 148
//clear ___nl__int__19;
#line 148
c_rt_lib0clear(&___nl__im__20);
#line 148
//clear ___nl__int__21;
#line 148
//clear ___nl__int__22;
#line 148
//clear ___nl__int__23;
#line 148
//clear ___nl__bool__24;
#line 148
//clear ___nl__int__25;
#line 148
c_rt_lib0clear(&___nl__im__26);
#line 148
c_rt_lib0clear(&___nl__im__27);
#line 148
//clear ___nl__int__28;
#line 148
c_rt_lib0clear(&___nl__im__29);
#line 148
//clear ___nl__bool__30;
#line 148
//clear ___nl__int__31;
#line 148
//clear ___nl__int__32;
#line 148
c_rt_lib0clear(&___nl__im__33);
#line 148
//clear ___nl__int__34;
#line 148
//clear ___nl__int__35;
#line 148
c_rt_lib0clear(&___nl__im__36);
#line 148
c_rt_lib0clear(&___nl__im__37);
#line 148
c_rt_lib0clear(&___nl__im__38);
#line 148
//clear ___nl__int__39;
#line 148
c_rt_lib0clear(&___nl__string__40);
#line 148
c_rt_lib0clear(&___nl__string__41);
#line 148
c_rt_lib0clear(&___nl__string__42);
#line 148
c_rt_lib0clear(&___nl__im__43);
#line 148
//clear ___nl__int__44;
#line 148
//clear ___nl__int__45;
#line 148
c_rt_lib0clear(&___nl__im__46);
#line 148
//clear ___nl__bool__47;
#line 148
c_rt_lib0clear(&___nl__im__48);
#line 148
c_rt_lib0clear(&___nl__im__49);
#line 148
c_rt_lib0clear(&___nl__im__50);
#line 148
c_rt_lib0clear(&___nl__im__51);
#line 148
//clear ___nl__int__52;
#line 148
c_rt_lib0clear(&___nl__string__53);
#line 148
c_rt_lib0clear(&___nl__string__54);
#line 148
c_rt_lib0clear(&___nl__string__55);
#line 148
c_rt_lib0clear(&___nl__im__56);
#line 148
//clear ___nl__int__57;
#line 148
//clear ___nl__int__58;
#line 148
return 0;
}

ImmT  wprinter_priv0print_sim_rec(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
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
#line 152
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(1238)));
#line 152
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(390));
#line 152
if(___nl__bool__3){ goto label_2;}
#line 154
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(377));
#line 154
if(___nl__bool__3){ goto label_3;}
#line 156
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(1527));
#line 156
if(___nl__bool__3){ goto label_4;}
#line 158
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(240));
#line 158
if(___nl__bool__3){ goto label_5;}
#line 162
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(1535));
#line 162
if(___nl__bool__3){ goto label_6;}
#line 165
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(1536));
#line 165
if(___nl__bool__3){ goto label_7;}
#line 165
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 165
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 165
nl_die_arg(___nl__im__4);
#line 152
label_2:
#line 152
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(390)));
#line 152
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 153
c_rt_lib0copy(&___nl__im__7, ___nl__im__5);
#line 153
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__7));
#line 153
c_rt_lib0clear(&___nl__im__7);
#line 154
goto label_1;
#line 154
label_3:
#line 154
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(377)));
#line 154
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 155
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(377)));
#line 155
c_rt_lib0copy(&___nl__im__11, ___nl__im__10);
#line 155
c_rt_lib0delete(wprinter_priv0print_sim_arr(___ref___im__0, ___nl__im__11));
#line 155
c_rt_lib0clear(&___nl__im__10);
#line 155
c_rt_lib0clear(&___nl__im__11);
#line 156
goto label_1;
#line 156
label_4:
#line 157
c_rt_lib0move(&___nl__im__12,___get_global_const(439));
#line 157
c_rt_lib0copy(&___nl__im__13, ___nl__im__12);
#line 157
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__13));
#line 157
c_rt_lib0clear(&___nl__im__12);
#line 157
c_rt_lib0clear(&___nl__im__13);
#line 158
goto label_1;
#line 158
label_5:
#line 158
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(240)));
#line 158
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 159
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(1031)));
#line 159
c_rt_lib0copy(&___nl__im__17, ___nl__im__16);
#line 159
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__17));
#line 159
c_rt_lib0clear(&___nl__im__16);
#line 159
c_rt_lib0clear(&___nl__im__17);
#line 160
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(377)));
#line 160
c_rt_lib0copy(&___nl__im__19, ___nl__im__18);
#line 160
c_rt_lib0delete(wprinter_priv0print_sim_arr(___ref___im__0, ___nl__im__19));
#line 160
c_rt_lib0clear(&___nl__im__18);
#line 160
c_rt_lib0clear(&___nl__im__19);
#line 161
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(1083)));
#line 161
c_rt_lib0copy(&___nl__im__21, ___nl__im__20);
#line 161
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__21));
#line 161
c_rt_lib0clear(&___nl__im__20);
#line 161
c_rt_lib0clear(&___nl__im__21);
#line 162
goto label_1;
#line 162
label_6:
#line 162
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(1535)));
#line 162
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 163
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(1337)));
#line 163
c_rt_lib0copy(&___nl__im__25, ___nl__im__24);
#line 163
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___im__0, ___nl__im__25));
#line 163
c_rt_lib0clear(&___nl__im__24);
#line 163
c_rt_lib0clear(&___nl__im__25);
#line 164
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(1338)));
#line 164
c_rt_lib0copy(&___nl__im__27, ___nl__im__26);
#line 164
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___im__0, ___nl__im__27));
#line 164
c_rt_lib0clear(&___nl__im__26);
#line 164
c_rt_lib0clear(&___nl__im__27);
#line 165
goto label_1;
#line 165
label_7:
#line 165
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(1536)));
#line 165
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 166
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 166
nl_die_arg(___nl__im__30);
#line 167
goto label_1;
#line 167
label_1:
#line 167
c_rt_lib0clear(&___nl__im__1);
#line 167
c_rt_lib0clear(&___nl__im__2);
#line 167
//clear ___nl__bool__3;
#line 167
c_rt_lib0clear(&___nl__im__4);
#line 167
c_rt_lib0clear(&___nl__im__5);
#line 167
c_rt_lib0clear(&___nl__im__6);
#line 167
c_rt_lib0clear(&___nl__im__7);
#line 167
c_rt_lib0clear(&___nl__im__8);
#line 167
c_rt_lib0clear(&___nl__im__9);
#line 167
c_rt_lib0clear(&___nl__im__10);
#line 167
c_rt_lib0clear(&___nl__im__11);
#line 167
c_rt_lib0clear(&___nl__im__12);
#line 167
c_rt_lib0clear(&___nl__im__13);
#line 167
c_rt_lib0clear(&___nl__im__14);
#line 167
c_rt_lib0clear(&___nl__im__15);
#line 167
c_rt_lib0clear(&___nl__im__16);
#line 167
c_rt_lib0clear(&___nl__im__17);
#line 167
c_rt_lib0clear(&___nl__im__18);
#line 167
c_rt_lib0clear(&___nl__im__19);
#line 167
c_rt_lib0clear(&___nl__im__20);
#line 167
c_rt_lib0clear(&___nl__im__21);
#line 167
c_rt_lib0clear(&___nl__im__22);
#line 167
c_rt_lib0clear(&___nl__im__23);
#line 167
c_rt_lib0clear(&___nl__im__24);
#line 167
c_rt_lib0clear(&___nl__im__25);
#line 167
c_rt_lib0clear(&___nl__im__26);
#line 167
c_rt_lib0clear(&___nl__im__27);
#line 167
c_rt_lib0clear(&___nl__im__28);
#line 167
c_rt_lib0clear(&___nl__im__29);
#line 167
c_rt_lib0clear(&___nl__im__30);
#line 167
return NULL;
}

ImmT  wprinter0print_t(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
#line 171
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 171
___nl__int__5 = wprinter_priv0get_tab_size();
#line 171
___nl__int__4 = ___nl__int__2 * ___nl__int__5;
#line 171
//clear ___nl__int__5;
#line 171
___nl__int__6 = ___nl__int__4;
#line 171
___nl__int__7 = ___nl__int__2;
#line 171
___nl__int__8 = wprinter_priv0print_t_rec(___ref___im__0, ___nl__im__3, ___nl__int__6, ___nl__int__7);
#line 171
c_rt_lib0clear(&___nl__im__3);
#line 171
//clear ___nl__int__4;
#line 171
//clear ___nl__int__5;
#line 171
//clear ___nl__int__6;
#line 171
//clear ___nl__int__7;
#line 171
//clear ___nl__int__8;
#line 171
c_rt_lib0clear(&___nl__im__1);
#line 171
//clear ___nl__int__2;
#line 171
c_rt_lib0clear(&___nl__im__3);
#line 171
//clear ___nl__int__4;
#line 171
//clear ___nl__int__5;
#line 171
//clear ___nl__int__6;
#line 171
//clear ___nl__int__7;
#line 171
//clear ___nl__int__8;
#line 171
return NULL;
}

INT  wprinter_priv0flush_list(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3,INT  ___nl__int__4,bool ___nl__bool__5) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
bool  ___nl__bool__24 = false;
bool  ___nl__bool__25 = false;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
ImmT  ___nl__string__37 = NULL;
ImmT  ___nl__string__38 = NULL;
ImmT  ___nl__string__39 = NULL;
ImmT  ___nl__im__40 = NULL;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
ImmT  ___nl__im__44 = NULL;
INT  ___nl__int__45 = 0;
INT  ___nl__int__46 = 0;
INT  ___nl__int__47 = 0;
bool  ___nl__bool__48 = false;
INT  ___nl__int__49 = 0;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
INT  ___nl__int__54 = 0;
INT  ___nl__int__55 = 0;
INT  ___nl__int__56 = 0;
#line 176
___nl__int__7 = ___nl__int__3;
#line 176
___nl__bool__6 = wprinter_priv0is_to_long(___nl__int__7);
#line 176
//clear ___nl__int__7;
#line 176
___nl__bool__6 = !___nl__bool__6;
#line 176
//clear ___nl__int__7;
#line 176
___nl__bool__6 = !___nl__bool__6;
#line 176
if(___nl__bool__6){ goto label_2;}
#line 177
___nl__int__9 = 0;
#line 177
___nl__int__10 = 1;
#line 177
___nl__int__11 = c_rt_lib0array_len(___nl__im__1);
#line 177
label_5:
#line 177
___nl__int__13 = ___nl__int__9 >= ___nl__int__11;
#line 177
___nl__bool__12 = ___nl__int__13;
#line 177
if(___nl__bool__12){ goto label_3;}
#line 177
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__1, ___nl__int__9));
#line 177
c_rt_lib0copy(&___nl__im__8, ___nl__im__14);
#line 178
c_rt_lib0copy(&___nl__im__15, ___nl__im__8);
#line 178
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___im__0, ___nl__im__15));
#line 178
c_rt_lib0clear(&___nl__im__15);
#line 178
c_rt_lib0clear(&___nl__im__8);
#line 178
label_4:
#line 179
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 179
goto label_5;
#line 179
label_3:
#line 180
___nl__int__16 = ___nl__int__3;
#line 180
c_rt_lib0clear(&___nl__im__1);
#line 180
//clear ___nl__int__2;
#line 180
//clear ___nl__int__3;
#line 180
//clear ___nl__int__4;
#line 180
//clear ___nl__bool__5;
#line 180
//clear ___nl__bool__6;
#line 180
//clear ___nl__int__7;
#line 180
c_rt_lib0clear(&___nl__im__8);
#line 180
//clear ___nl__int__9;
#line 180
//clear ___nl__int__10;
#line 180
//clear ___nl__int__11;
#line 180
//clear ___nl__bool__12;
#line 180
//clear ___nl__int__13;
#line 180
c_rt_lib0clear(&___nl__im__14);
#line 180
c_rt_lib0clear(&___nl__im__15);
#line 180
return ___nl__int__16;
#line 181
goto label_1;
#line 181
label_2:
#line 182
c_rt_lib0copy(&___nl__im__22, ___nl__im__1);
#line 182
___nl__int__21 = c_rt_lib0array_len(___nl__im__22);
#line 182
c_rt_lib0clear(&___nl__im__22);
#line 182
___nl__int__23 = 1;
#line 182
___nl__int__20 = ___nl__int__21 - ___nl__int__23;
#line 182
//clear ___nl__int__21;
#line 182
c_rt_lib0clear(&___nl__im__22);
#line 182
//clear ___nl__int__23;
#line 182
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__1, ___nl__int__20));
#line 182
//clear ___nl__int__20;
#line 182
//clear ___nl__int__21;
#line 182
c_rt_lib0clear(&___nl__im__22);
#line 182
//clear ___nl__int__23;
#line 182
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_const(1238)));
#line 182
c_rt_lib0clear(&___nl__im__19);
#line 182
//clear ___nl__int__20;
#line 182
//clear ___nl__int__21;
#line 182
c_rt_lib0clear(&___nl__im__22);
#line 182
//clear ___nl__int__23;
#line 182
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(1536));
#line 182
c_rt_lib0clear(&___nl__im__18);
#line 182
c_rt_lib0clear(&___nl__im__19);
#line 182
//clear ___nl__int__20;
#line 182
//clear ___nl__int__21;
#line 182
c_rt_lib0clear(&___nl__im__22);
#line 182
//clear ___nl__int__23;
#line 182
c_rt_lib0clear(&___nl__im__18);
#line 182
c_rt_lib0clear(&___nl__im__19);
#line 182
//clear ___nl__int__20;
#line 182
//clear ___nl__int__21;
#line 182
c_rt_lib0clear(&___nl__im__22);
#line 182
//clear ___nl__int__23;
#line 182
___nl__bool__17 = !___nl__bool__17;
#line 182
c_rt_lib0clear(&___nl__im__18);
#line 182
c_rt_lib0clear(&___nl__im__19);
#line 182
//clear ___nl__int__20;
#line 182
//clear ___nl__int__21;
#line 182
c_rt_lib0clear(&___nl__im__22);
#line 182
//clear ___nl__int__23;
#line 182
___nl__bool__17 = !___nl__bool__17;
#line 182
if(___nl__bool__17){ goto label_7;}
#line 183
___nl__int__28 = 1;
#line 183
___nl__int__27 = ___nl__int__4 + ___nl__int__28;
#line 183
//clear ___nl__int__28;
#line 183
//clear ___nl__int__28;
#line 183
___nl__int__29 = wprinter_priv0get_tab_size();
#line 183
___nl__int__26 = ___nl__int__27 * ___nl__int__29;
#line 183
//clear ___nl__int__27;
#line 183
//clear ___nl__int__28;
#line 183
//clear ___nl__int__29;
#line 183
___nl__int__30 = ___nl__int__26 < ___nl__int__2;
#line 183
___nl__bool__24 = ___nl__int__30;
#line 183
//clear ___nl__int__26;
#line 183
//clear ___nl__int__27;
#line 183
//clear ___nl__int__28;
#line 183
//clear ___nl__int__29;
#line 183
//clear ___nl__int__30;
#line 183
___nl__bool__25 = !___nl__bool__24;
#line 183
if(___nl__bool__25){ goto label_10;}
#line 183
___nl__bool__24 = ___nl__bool__5;
#line 183
___nl__bool__24 = !___nl__bool__24;
#line 183
label_10:
#line 183
//clear ___nl__bool__25;
#line 183
//clear ___nl__int__26;
#line 183
//clear ___nl__int__27;
#line 183
//clear ___nl__int__28;
#line 183
//clear ___nl__int__29;
#line 183
//clear ___nl__int__30;
#line 183
___nl__bool__24 = !___nl__bool__24;
#line 183
if(___nl__bool__24){ goto label_9;}
#line 184
c_rt_lib0move(&___nl__im__32, string0lf());
#line 184
___nl__int__35 = 1;
#line 184
___nl__int__34 = ___nl__int__4 + ___nl__int__35;
#line 184
//clear ___nl__int__35;
#line 184
___nl__int__36 = ___nl__int__34;
#line 184
c_rt_lib0move(&___nl__im__33, wprinter_priv0pind(___nl__int__36));
#line 184
//clear ___nl__int__34;
#line 184
//clear ___nl__int__35;
#line 184
//clear ___nl__int__36;
#line 184
c_rt_lib0copy(&___nl__string__37, ___nl__im__32);
#line 184
c_rt_lib0copy(&___nl__string__38, ___nl__im__33);
#line 184
c_rt_lib0move(&___nl__string__39, c_rt_lib0concat_new(___nl__string__37, ___nl__string__38));
#line 184
c_rt_lib0copy(&___nl__im__31, ___nl__string__39);
#line 184
c_rt_lib0clear(&___nl__im__32);
#line 184
c_rt_lib0clear(&___nl__im__33);
#line 184
//clear ___nl__int__34;
#line 184
//clear ___nl__int__35;
#line 184
//clear ___nl__int__36;
#line 184
c_rt_lib0clear(&___nl__string__37);
#line 184
c_rt_lib0clear(&___nl__string__38);
#line 184
c_rt_lib0clear(&___nl__string__39);
#line 184
c_rt_lib0copy(&___nl__im__40, ___nl__im__31);
#line 184
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__40));
#line 184
c_rt_lib0clear(&___nl__im__31);
#line 184
c_rt_lib0clear(&___nl__im__32);
#line 184
c_rt_lib0clear(&___nl__im__33);
#line 184
//clear ___nl__int__34;
#line 184
//clear ___nl__int__35;
#line 184
//clear ___nl__int__36;
#line 184
c_rt_lib0clear(&___nl__string__37);
#line 184
c_rt_lib0clear(&___nl__string__38);
#line 184
c_rt_lib0clear(&___nl__string__39);
#line 184
c_rt_lib0clear(&___nl__im__40);
#line 185
___nl__int__42 = 1;
#line 185
___nl__int__41 = ___nl__int__4 + ___nl__int__42;
#line 185
//clear ___nl__int__42;
#line 185
//clear ___nl__int__42;
#line 185
___nl__int__43 = wprinter_priv0get_tab_size();
#line 185
___nl__int__2 = ___nl__int__41 * ___nl__int__43;
#line 185
//clear ___nl__int__41;
#line 185
//clear ___nl__int__42;
#line 185
//clear ___nl__int__43;
#line 185
//clear ___nl__int__41;
#line 185
//clear ___nl__int__42;
#line 185
//clear ___nl__int__43;
#line 186
goto label_8;
#line 186
label_9:
#line 186
label_8:
#line 187
goto label_6;
#line 187
label_7:
#line 187
label_6:
#line 188
___nl__int__45 = 0;
#line 188
___nl__int__46 = 1;
#line 188
___nl__int__47 = c_rt_lib0array_len(___nl__im__1);
#line 188
label_13:
#line 188
___nl__int__49 = ___nl__int__45 >= ___nl__int__47;
#line 188
___nl__bool__48 = ___nl__int__49;
#line 188
if(___nl__bool__48){ goto label_11;}
#line 188
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__1, ___nl__int__45));
#line 188
c_rt_lib0copy(&___nl__im__44, ___nl__im__50);
#line 189
c_rt_lib0copy(&___nl__im__51, ___nl__im__44);
#line 189
___nl__int__52 = ___nl__int__2;
#line 189
___nl__int__54 = 1;
#line 189
___nl__int__53 = ___nl__int__4 + ___nl__int__54;
#line 189
//clear ___nl__int__54;
#line 189
___nl__int__55 = ___nl__int__53;
#line 189
___nl__int__2 = wprinter_priv0print_t_rec(___ref___im__0, ___nl__im__51, ___nl__int__52, ___nl__int__55);
#line 189
c_rt_lib0clear(&___nl__im__51);
#line 189
//clear ___nl__int__52;
#line 189
//clear ___nl__int__53;
#line 189
//clear ___nl__int__54;
#line 189
//clear ___nl__int__55;
#line 189
c_rt_lib0clear(&___nl__im__51);
#line 189
//clear ___nl__int__52;
#line 189
//clear ___nl__int__53;
#line 189
//clear ___nl__int__54;
#line 189
//clear ___nl__int__55;
#line 189
c_rt_lib0clear(&___nl__im__44);
#line 189
label_12:
#line 190
___nl__int__45 = ___nl__int__45 + ___nl__int__46;
#line 190
goto label_13;
#line 190
label_11:
#line 191
___nl__int__56 = ___nl__int__2;
#line 191
c_rt_lib0clear(&___nl__im__1);
#line 191
//clear ___nl__int__2;
#line 191
//clear ___nl__int__3;
#line 191
//clear ___nl__int__4;
#line 191
//clear ___nl__bool__5;
#line 191
//clear ___nl__bool__6;
#line 191
//clear ___nl__int__7;
#line 191
c_rt_lib0clear(&___nl__im__8);
#line 191
//clear ___nl__int__9;
#line 191
//clear ___nl__int__10;
#line 191
//clear ___nl__int__11;
#line 191
//clear ___nl__bool__12;
#line 191
//clear ___nl__int__13;
#line 191
c_rt_lib0clear(&___nl__im__14);
#line 191
c_rt_lib0clear(&___nl__im__15);
#line 191
//clear ___nl__int__16;
#line 191
//clear ___nl__bool__17;
#line 191
c_rt_lib0clear(&___nl__im__18);
#line 191
c_rt_lib0clear(&___nl__im__19);
#line 191
//clear ___nl__int__20;
#line 191
//clear ___nl__int__21;
#line 191
c_rt_lib0clear(&___nl__im__22);
#line 191
//clear ___nl__int__23;
#line 191
//clear ___nl__bool__24;
#line 191
//clear ___nl__bool__25;
#line 191
//clear ___nl__int__26;
#line 191
//clear ___nl__int__27;
#line 191
//clear ___nl__int__28;
#line 191
//clear ___nl__int__29;
#line 191
//clear ___nl__int__30;
#line 191
c_rt_lib0clear(&___nl__im__31);
#line 191
c_rt_lib0clear(&___nl__im__32);
#line 191
c_rt_lib0clear(&___nl__im__33);
#line 191
//clear ___nl__int__34;
#line 191
//clear ___nl__int__35;
#line 191
//clear ___nl__int__36;
#line 191
c_rt_lib0clear(&___nl__string__37);
#line 191
c_rt_lib0clear(&___nl__string__38);
#line 191
c_rt_lib0clear(&___nl__string__39);
#line 191
c_rt_lib0clear(&___nl__im__40);
#line 191
//clear ___nl__int__41;
#line 191
//clear ___nl__int__42;
#line 191
//clear ___nl__int__43;
#line 191
c_rt_lib0clear(&___nl__im__44);
#line 191
//clear ___nl__int__45;
#line 191
//clear ___nl__int__46;
#line 191
//clear ___nl__int__47;
#line 191
//clear ___nl__bool__48;
#line 191
//clear ___nl__int__49;
#line 191
c_rt_lib0clear(&___nl__im__50);
#line 191
c_rt_lib0clear(&___nl__im__51);
#line 191
//clear ___nl__int__52;
#line 191
//clear ___nl__int__53;
#line 191
//clear ___nl__int__54;
#line 191
//clear ___nl__int__55;
#line 191
return ___nl__int__56;
#line 192
goto label_1;
#line 192
label_1:
#line 192
c_rt_lib0clear(&___nl__im__1);
#line 192
//clear ___nl__int__2;
#line 192
//clear ___nl__int__3;
#line 192
//clear ___nl__int__4;
#line 192
//clear ___nl__bool__5;
#line 192
//clear ___nl__bool__6;
#line 192
//clear ___nl__int__7;
#line 192
c_rt_lib0clear(&___nl__im__8);
#line 192
//clear ___nl__int__9;
#line 192
//clear ___nl__int__10;
#line 192
//clear ___nl__int__11;
#line 192
//clear ___nl__bool__12;
#line 192
//clear ___nl__int__13;
#line 192
c_rt_lib0clear(&___nl__im__14);
#line 192
c_rt_lib0clear(&___nl__im__15);
#line 192
//clear ___nl__int__16;
#line 192
//clear ___nl__bool__17;
#line 192
c_rt_lib0clear(&___nl__im__18);
#line 192
c_rt_lib0clear(&___nl__im__19);
#line 192
//clear ___nl__int__20;
#line 192
//clear ___nl__int__21;
#line 192
c_rt_lib0clear(&___nl__im__22);
#line 192
//clear ___nl__int__23;
#line 192
//clear ___nl__bool__24;
#line 192
//clear ___nl__bool__25;
#line 192
//clear ___nl__int__26;
#line 192
//clear ___nl__int__27;
#line 192
//clear ___nl__int__28;
#line 192
//clear ___nl__int__29;
#line 192
//clear ___nl__int__30;
#line 192
c_rt_lib0clear(&___nl__im__31);
#line 192
c_rt_lib0clear(&___nl__im__32);
#line 192
c_rt_lib0clear(&___nl__im__33);
#line 192
//clear ___nl__int__34;
#line 192
//clear ___nl__int__35;
#line 192
//clear ___nl__int__36;
#line 192
c_rt_lib0clear(&___nl__string__37);
#line 192
c_rt_lib0clear(&___nl__string__38);
#line 192
c_rt_lib0clear(&___nl__string__39);
#line 192
c_rt_lib0clear(&___nl__im__40);
#line 192
//clear ___nl__int__41;
#line 192
//clear ___nl__int__42;
#line 192
//clear ___nl__int__43;
#line 192
c_rt_lib0clear(&___nl__im__44);
#line 192
//clear ___nl__int__45;
#line 192
//clear ___nl__int__46;
#line 192
//clear ___nl__int__47;
#line 192
//clear ___nl__bool__48;
#line 192
//clear ___nl__int__49;
#line 192
c_rt_lib0clear(&___nl__im__50);
#line 192
c_rt_lib0clear(&___nl__im__51);
#line 192
//clear ___nl__int__52;
#line 192
//clear ___nl__int__53;
#line 192
//clear ___nl__int__54;
#line 192
//clear ___nl__int__55;
#line 192
//clear ___nl__int__56;
#line 192
return 0;
}

INT  wprinter_priv0print_arr_in_lines(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__string__17 = NULL;
ImmT  ___nl__string__18 = NULL;
ImmT  ___nl__string__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
#line 197
___nl__int__5 = 0;
#line 197
___nl__int__6 = 1;
#line 197
___nl__int__7 = c_rt_lib0array_len(___nl__im__1);
#line 197
label_3:
#line 197
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 197
___nl__bool__8 = ___nl__int__9;
#line 197
if(___nl__bool__8){ goto label_1;}
#line 197
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 197
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 198
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(1238)));
#line 198
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(1527));
#line 198
c_rt_lib0clear(&___nl__im__12);
#line 198
___nl__bool__11 = !___nl__bool__11;
#line 198
if(___nl__bool__11){ goto label_5;}
#line 199
c_rt_lib0move(&___nl__im__14, string0lf());
#line 199
___nl__int__16 = ___nl__int__2;
#line 199
c_rt_lib0move(&___nl__im__15, wprinter_priv0pind(___nl__int__16));
#line 199
//clear ___nl__int__16;
#line 199
c_rt_lib0copy(&___nl__string__17, ___nl__im__14);
#line 199
c_rt_lib0copy(&___nl__string__18, ___nl__im__15);
#line 199
c_rt_lib0move(&___nl__string__19, c_rt_lib0concat_new(___nl__string__17, ___nl__string__18));
#line 199
c_rt_lib0copy(&___nl__im__13, ___nl__string__19);
#line 199
c_rt_lib0clear(&___nl__im__14);
#line 199
c_rt_lib0clear(&___nl__im__15);
#line 199
//clear ___nl__int__16;
#line 199
c_rt_lib0clear(&___nl__string__17);
#line 199
c_rt_lib0clear(&___nl__string__18);
#line 199
c_rt_lib0clear(&___nl__string__19);
#line 199
c_rt_lib0copy(&___nl__im__20, ___nl__im__13);
#line 199
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__20));
#line 199
c_rt_lib0clear(&___nl__im__13);
#line 199
c_rt_lib0clear(&___nl__im__14);
#line 199
c_rt_lib0clear(&___nl__im__15);
#line 199
//clear ___nl__int__16;
#line 199
c_rt_lib0clear(&___nl__string__17);
#line 199
c_rt_lib0clear(&___nl__string__18);
#line 199
c_rt_lib0clear(&___nl__string__19);
#line 199
c_rt_lib0clear(&___nl__im__20);
#line 200
___nl__int__21 = wprinter_priv0get_tab_size();
#line 200
___nl__int__3 = ___nl__int__2 * ___nl__int__21;
#line 200
//clear ___nl__int__21;
#line 200
//clear ___nl__int__21;
#line 201
goto label_2;
#line 202
goto label_4;
#line 202
label_5:
#line 202
label_4:
#line 203
c_rt_lib0copy(&___nl__im__22, ___nl__im__4);
#line 203
___nl__int__23 = ___nl__int__3;
#line 203
___nl__int__24 = ___nl__int__2;
#line 203
___nl__int__3 = wprinter_priv0print_t_rec(___ref___im__0, ___nl__im__22, ___nl__int__23, ___nl__int__24);
#line 203
c_rt_lib0clear(&___nl__im__22);
#line 203
//clear ___nl__int__23;
#line 203
//clear ___nl__int__24;
#line 203
c_rt_lib0clear(&___nl__im__22);
#line 203
//clear ___nl__int__23;
#line 203
//clear ___nl__int__24;
#line 203
c_rt_lib0clear(&___nl__im__4);
#line 203
label_2:
#line 204
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 204
goto label_3;
#line 204
label_1:
#line 205
___nl__int__25 = ___nl__int__3;
#line 205
c_rt_lib0clear(&___nl__im__1);
#line 205
//clear ___nl__int__2;
#line 205
//clear ___nl__int__3;
#line 205
c_rt_lib0clear(&___nl__im__4);
#line 205
//clear ___nl__int__5;
#line 205
//clear ___nl__int__6;
#line 205
//clear ___nl__int__7;
#line 205
//clear ___nl__bool__8;
#line 205
//clear ___nl__int__9;
#line 205
c_rt_lib0clear(&___nl__im__10);
#line 205
//clear ___nl__bool__11;
#line 205
c_rt_lib0clear(&___nl__im__12);
#line 205
c_rt_lib0clear(&___nl__im__13);
#line 205
c_rt_lib0clear(&___nl__im__14);
#line 205
c_rt_lib0clear(&___nl__im__15);
#line 205
//clear ___nl__int__16;
#line 205
c_rt_lib0clear(&___nl__string__17);
#line 205
c_rt_lib0clear(&___nl__string__18);
#line 205
c_rt_lib0clear(&___nl__string__19);
#line 205
c_rt_lib0clear(&___nl__im__20);
#line 205
//clear ___nl__int__21;
#line 205
c_rt_lib0clear(&___nl__im__22);
#line 205
//clear ___nl__int__23;
#line 205
//clear ___nl__int__24;
#line 205
return ___nl__int__25;
#line 205
c_rt_lib0clear(&___nl__im__1);
#line 205
//clear ___nl__int__2;
#line 205
//clear ___nl__int__3;
#line 205
c_rt_lib0clear(&___nl__im__4);
#line 205
//clear ___nl__int__5;
#line 205
//clear ___nl__int__6;
#line 205
//clear ___nl__int__7;
#line 205
//clear ___nl__bool__8;
#line 205
//clear ___nl__int__9;
#line 205
c_rt_lib0clear(&___nl__im__10);
#line 205
//clear ___nl__bool__11;
#line 205
c_rt_lib0clear(&___nl__im__12);
#line 205
c_rt_lib0clear(&___nl__im__13);
#line 205
c_rt_lib0clear(&___nl__im__14);
#line 205
c_rt_lib0clear(&___nl__im__15);
#line 205
//clear ___nl__int__16;
#line 205
c_rt_lib0clear(&___nl__string__17);
#line 205
c_rt_lib0clear(&___nl__string__18);
#line 205
c_rt_lib0clear(&___nl__string__19);
#line 205
c_rt_lib0clear(&___nl__im__20);
#line 205
//clear ___nl__int__21;
#line 205
c_rt_lib0clear(&___nl__im__22);
#line 205
//clear ___nl__int__23;
#line 205
//clear ___nl__int__24;
#line 205
//clear ___nl__int__25;
#line 205
return 0;
}

INT  wprinter_priv0process_list(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_arr_t0type ___nl__im__1,bool ___nl__bool__2,INT  ___nl__int__3,INT  ___nl__int__4) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
bool  ___nl__bool__24 = false;
bool  ___nl__bool__25 = false;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
bool  ___nl__bool__33 = false;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
bool  ___nl__bool__45 = false;
bool  ___nl__bool__46 = false;
bool  ___nl__bool__47 = false;
INT  ___nl__int__48 = 0;
#line 210
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 211
___nl__int__6 = 0;
#line 212
___nl__bool__7 = true;
#line 213
c_rt_lib0copy(&___nl__im__9, ___nl__im__1);
#line 213
___nl__int__8 = c_rt_lib0array_len(___nl__im__9);
#line 213
c_rt_lib0clear(&___nl__im__9);
#line 213
___nl__int__10 = 0;
#line 213
___nl__int__11 = 1;
#line 213
label_3:
#line 213
___nl__int__13 = ___nl__int__10 >= ___nl__int__8;
#line 213
___nl__bool__12 = ___nl__int__13;
#line 213
if(___nl__bool__12){ goto label_1;}
#line 214
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__1, ___nl__int__10));
#line 215
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(1238)));
#line 215
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(1527));
#line 215
c_rt_lib0clear(&___nl__im__16);
#line 215
___nl__bool__15 = !___nl__bool__15;
#line 215
if(___nl__bool__15){ goto label_5;}
#line 216
c_rt_lib0copy(&___nl__im__17, ___nl__im__5);
#line 216
___nl__int__18 = ___nl__int__3;
#line 216
___nl__int__19 = ___nl__int__6 + ___nl__int__3;
#line 216
___nl__int__20 = ___nl__int__19;
#line 216
if(___nl__bool__2){ goto label_7;}
#line 216
___nl__int__22 = 0;
#line 216
goto label_6;
#line 216
label_7:
#line 216
___nl__int__22 = 1;
#line 216
label_6:
#line 216
___nl__int__21 = ___nl__int__4 - ___nl__int__22;
#line 216
//clear ___nl__int__22;
#line 216
___nl__int__23 = ___nl__int__21;
#line 216
___nl__bool__24 = ___nl__bool__7;
#line 216
if(___nl__bool__24){ goto label_8;}
#line 216
___nl__bool__24 = ___nl__bool__2;
#line 216
___nl__bool__24 = !___nl__bool__24;
#line 216
label_8:
#line 216
//clear ___nl__bool__25;
#line 216
___nl__bool__26 = ___nl__bool__24;
#line 216
___nl__int__3 = wprinter_priv0flush_list(___ref___im__0, ___nl__im__17, ___nl__int__18, ___nl__int__20, ___nl__int__23, ___nl__bool__26);
#line 216
c_rt_lib0clear(&___nl__im__17);
#line 216
//clear ___nl__int__18;
#line 216
//clear ___nl__int__19;
#line 216
//clear ___nl__int__20;
#line 216
//clear ___nl__int__21;
#line 216
//clear ___nl__int__22;
#line 216
//clear ___nl__int__23;
#line 216
//clear ___nl__bool__24;
#line 216
//clear ___nl__bool__25;
#line 216
//clear ___nl__bool__26;
#line 216
c_rt_lib0clear(&___nl__im__17);
#line 216
//clear ___nl__int__18;
#line 216
//clear ___nl__int__19;
#line 216
//clear ___nl__int__20;
#line 216
//clear ___nl__int__21;
#line 216
//clear ___nl__int__22;
#line 216
//clear ___nl__int__23;
#line 216
//clear ___nl__bool__24;
#line 216
//clear ___nl__bool__25;
#line 216
//clear ___nl__bool__26;
#line 217
___nl__bool__7 = false;
#line 218
c_rt_lib0move(&___nl__im__27,___get_global_const(439));
#line 218
c_rt_lib0copy(&___nl__im__28, ___nl__im__27);
#line 218
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__28));
#line 218
c_rt_lib0clear(&___nl__im__27);
#line 218
c_rt_lib0clear(&___nl__im__28);
#line 219
___nl__int__29 = 1;
#line 219
___nl__int__3 = ___nl__int__3 + ___nl__int__29;
#line 219
//clear ___nl__int__29;
#line 220
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 221
___nl__int__6 = 0;
#line 222
goto label_4;
#line 222
label_5:
#line 223
c_rt_lib0copy(&___nl__im__30, ___nl__im__14);
#line 223
c_rt_lib0delete(array0push(&___nl__im__5, ___nl__im__30));
#line 223
c_rt_lib0clear(&___nl__im__30);
#line 224
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(290)));
#line 224
___nl__int__31 = getIntFromImm(___nl__im__32);
#line 224
c_rt_lib0clear(&___nl__im__32);
#line 224
___nl__int__6 = ___nl__int__6 + ___nl__int__31;
#line 224
//clear ___nl__int__31;
#line 224
c_rt_lib0clear(&___nl__im__32);
#line 225
goto label_4;
#line 225
label_4:
#line 225
label_2:
#line 226
___nl__int__10 = ___nl__int__10 + ___nl__int__11;
#line 226
goto label_3;
#line 226
label_1:
#line 228
c_rt_lib0copy(&___nl__im__35, ___nl__im__5);
#line 228
___nl__int__34 = c_rt_lib0array_len(___nl__im__35);
#line 228
c_rt_lib0clear(&___nl__im__35);
#line 228
___nl__int__36 = 0;
#line 228
___nl__int__37 = ___nl__int__34 > ___nl__int__36;
#line 228
___nl__bool__33 = ___nl__int__37;
#line 228
//clear ___nl__int__34;
#line 228
c_rt_lib0clear(&___nl__im__35);
#line 228
//clear ___nl__int__36;
#line 228
//clear ___nl__int__37;
#line 228
___nl__bool__33 = !___nl__bool__33;
#line 228
if(___nl__bool__33){ goto label_10;}
#line 227
c_rt_lib0copy(&___nl__im__38, ___nl__im__5);
#line 227
___nl__int__39 = ___nl__int__3;
#line 227
___nl__int__40 = ___nl__int__6 + ___nl__int__3;
#line 227
___nl__int__41 = ___nl__int__40;
#line 227
if(___nl__bool__2){ goto label_12;}
#line 227
___nl__int__43 = 0;
#line 227
goto label_11;
#line 227
label_12:
#line 227
___nl__int__43 = 1;
#line 227
label_11:
#line 227
___nl__int__42 = ___nl__int__4 - ___nl__int__43;
#line 227
//clear ___nl__int__43;
#line 227
___nl__int__44 = ___nl__int__42;
#line 227
___nl__bool__45 = ___nl__bool__7;
#line 227
if(___nl__bool__45){ goto label_13;}
#line 227
___nl__bool__45 = ___nl__bool__2;
#line 227
___nl__bool__45 = !___nl__bool__45;
#line 227
label_13:
#line 227
//clear ___nl__bool__46;
#line 227
___nl__bool__47 = ___nl__bool__45;
#line 227
___nl__int__3 = wprinter_priv0flush_list(___ref___im__0, ___nl__im__38, ___nl__int__39, ___nl__int__41, ___nl__int__44, ___nl__bool__47);
#line 227
c_rt_lib0clear(&___nl__im__38);
#line 227
//clear ___nl__int__39;
#line 227
//clear ___nl__int__40;
#line 227
//clear ___nl__int__41;
#line 227
//clear ___nl__int__42;
#line 227
//clear ___nl__int__43;
#line 227
//clear ___nl__int__44;
#line 227
//clear ___nl__bool__45;
#line 227
//clear ___nl__bool__46;
#line 227
//clear ___nl__bool__47;
#line 227
c_rt_lib0clear(&___nl__im__38);
#line 227
//clear ___nl__int__39;
#line 227
//clear ___nl__int__40;
#line 227
//clear ___nl__int__41;
#line 227
//clear ___nl__int__42;
#line 227
//clear ___nl__int__43;
#line 227
//clear ___nl__int__44;
#line 227
//clear ___nl__bool__45;
#line 227
//clear ___nl__bool__46;
#line 227
//clear ___nl__bool__47;
#line 227
goto label_9;
#line 227
label_10:
#line 227
label_9:
#line 229
___nl__int__48 = ___nl__int__3;
#line 229
c_rt_lib0clear(&___nl__im__1);
#line 229
//clear ___nl__bool__2;
#line 229
//clear ___nl__int__3;
#line 229
//clear ___nl__int__4;
#line 229
c_rt_lib0clear(&___nl__im__5);
#line 229
//clear ___nl__int__6;
#line 229
//clear ___nl__bool__7;
#line 229
//clear ___nl__int__8;
#line 229
c_rt_lib0clear(&___nl__im__9);
#line 229
//clear ___nl__int__10;
#line 229
//clear ___nl__int__11;
#line 229
//clear ___nl__bool__12;
#line 229
//clear ___nl__int__13;
#line 229
c_rt_lib0clear(&___nl__im__14);
#line 229
//clear ___nl__bool__15;
#line 229
c_rt_lib0clear(&___nl__im__16);
#line 229
c_rt_lib0clear(&___nl__im__17);
#line 229
//clear ___nl__int__18;
#line 229
//clear ___nl__int__19;
#line 229
//clear ___nl__int__20;
#line 229
//clear ___nl__int__21;
#line 229
//clear ___nl__int__22;
#line 229
//clear ___nl__int__23;
#line 229
//clear ___nl__bool__24;
#line 229
//clear ___nl__bool__25;
#line 229
//clear ___nl__bool__26;
#line 229
c_rt_lib0clear(&___nl__im__27);
#line 229
c_rt_lib0clear(&___nl__im__28);
#line 229
//clear ___nl__int__29;
#line 229
c_rt_lib0clear(&___nl__im__30);
#line 229
//clear ___nl__int__31;
#line 229
c_rt_lib0clear(&___nl__im__32);
#line 229
//clear ___nl__bool__33;
#line 229
//clear ___nl__int__34;
#line 229
c_rt_lib0clear(&___nl__im__35);
#line 229
//clear ___nl__int__36;
#line 229
//clear ___nl__int__37;
#line 229
c_rt_lib0clear(&___nl__im__38);
#line 229
//clear ___nl__int__39;
#line 229
//clear ___nl__int__40;
#line 229
//clear ___nl__int__41;
#line 229
//clear ___nl__int__42;
#line 229
//clear ___nl__int__43;
#line 229
//clear ___nl__int__44;
#line 229
//clear ___nl__bool__45;
#line 229
//clear ___nl__bool__46;
#line 229
//clear ___nl__bool__47;
#line 229
return ___nl__int__48;
#line 229
c_rt_lib0clear(&___nl__im__1);
#line 229
//clear ___nl__bool__2;
#line 229
//clear ___nl__int__3;
#line 229
//clear ___nl__int__4;
#line 229
c_rt_lib0clear(&___nl__im__5);
#line 229
//clear ___nl__int__6;
#line 229
//clear ___nl__bool__7;
#line 229
//clear ___nl__int__8;
#line 229
c_rt_lib0clear(&___nl__im__9);
#line 229
//clear ___nl__int__10;
#line 229
//clear ___nl__int__11;
#line 229
//clear ___nl__bool__12;
#line 229
//clear ___nl__int__13;
#line 229
c_rt_lib0clear(&___nl__im__14);
#line 229
//clear ___nl__bool__15;
#line 229
c_rt_lib0clear(&___nl__im__16);
#line 229
c_rt_lib0clear(&___nl__im__17);
#line 229
//clear ___nl__int__18;
#line 229
//clear ___nl__int__19;
#line 229
//clear ___nl__int__20;
#line 229
//clear ___nl__int__21;
#line 229
//clear ___nl__int__22;
#line 229
//clear ___nl__int__23;
#line 229
//clear ___nl__bool__24;
#line 229
//clear ___nl__bool__25;
#line 229
//clear ___nl__bool__26;
#line 229
c_rt_lib0clear(&___nl__im__27);
#line 229
c_rt_lib0clear(&___nl__im__28);
#line 229
//clear ___nl__int__29;
#line 229
c_rt_lib0clear(&___nl__im__30);
#line 229
//clear ___nl__int__31;
#line 229
c_rt_lib0clear(&___nl__im__32);
#line 229
//clear ___nl__bool__33;
#line 229
//clear ___nl__int__34;
#line 229
c_rt_lib0clear(&___nl__im__35);
#line 229
//clear ___nl__int__36;
#line 229
//clear ___nl__int__37;
#line 229
c_rt_lib0clear(&___nl__im__38);
#line 229
//clear ___nl__int__39;
#line 229
//clear ___nl__int__40;
#line 229
//clear ___nl__int__41;
#line 229
//clear ___nl__int__42;
#line 229
//clear ___nl__int__43;
#line 229
//clear ___nl__int__44;
#line 229
//clear ___nl__bool__45;
#line 229
//clear ___nl__bool__46;
#line 229
//clear ___nl__bool__47;
#line 229
//clear ___nl__int__48;
#line 229
return 0;
}

INT  wprinter_priv0print_t_rec(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1,INT  ___nl__int__2,INT  ___nl__int__3) {
c_rt_lib0arg_val(___nl__im__1);
wprinter_priv0__const__init();
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__string__21 = NULL;
ImmT  ___nl__string__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__string__24 = NULL;
ImmT  ___nl__string__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
ImmT  ___nl__string__39 = NULL;
ImmT  ___nl__string__40 = NULL;
ImmT  ___nl__string__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
INT  ___nl__int__44 = 0;
INT  ___nl__int__45 = 0;
INT  ___nl__int__46 = 0;
ImmT  ___nl__im__47 = NULL;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__string__56 = NULL;
ImmT  ___nl__string__57 = NULL;
ImmT  ___nl__string__58 = NULL;
ImmT  ___nl__im__59 = NULL;
INT  ___nl__int__60 = 0;
INT  ___nl__int__61 = 0;
INT  ___nl__int__62 = 0;
ImmT  ___nl__string__63 = NULL;
ImmT  ___nl__string__64 = NULL;
ImmT  ___nl__string__65 = NULL;
ImmT  ___nl__im__66 = NULL;
INT  ___nl__int__67 = 0;
INT  ___nl__int__68 = 0;
INT  ___nl__int__69 = 0;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
INT  ___nl__int__72 = 0;
INT  ___nl__int__73 = 0;
INT  ___nl__int__74 = 0;
INT  ___nl__int__75 = 0;
bool  ___nl__bool__76 = false;
INT  ___nl__int__77 = 0;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
INT  ___nl__int__80 = 0;
INT  ___nl__int__81 = 0;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
INT  ___nl__int__85 = 0;
ImmT  ___nl__string__86 = NULL;
ImmT  ___nl__string__87 = NULL;
ImmT  ___nl__string__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
INT  ___nl__int__92 = 0;
INT  ___nl__int__93 = 0;
INT  ___nl__int__94 = 0;
INT  ___nl__int__95 = 0;
INT  ___nl__int__96 = 0;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
bool  ___nl__bool__103 = false;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
INT  ___nl__int__106 = 0;
INT  ___nl__int__107 = 0;
INT  ___nl__int__108 = 0;
INT  ___nl__int__109 = 0;
INT  ___nl__int__110 = 0;
INT  ___nl__int__111 = 0;
ImmT  ___nl__im__112 = NULL;
bool  ___nl__bool__113 = false;
bool  ___nl__bool__114 = false;
INT  ___nl__int__115 = 0;
INT  ___nl__int__116 = 0;
INT  ___nl__int__117 = 0;
INT  ___nl__int__118 = 0;
ImmT  ___nl__im__119 = NULL;
bool  ___nl__bool__120 = false;
bool  ___nl__bool__121 = false;
INT  ___nl__int__122 = 0;
INT  ___nl__int__123 = 0;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
INT  ___nl__int__129 = 0;
ImmT  ___nl__string__130 = NULL;
ImmT  ___nl__string__131 = NULL;
ImmT  ___nl__string__132 = NULL;
ImmT  ___nl__im__133 = NULL;
INT  ___nl__int__134 = 0;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
INT  ___nl__int__137 = 0;
INT  ___nl__int__138 = 0;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
INT  ___nl__int__141 = 0;
INT  ___nl__int__142 = 0;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
INT  ___nl__int__145 = 0;
INT  ___nl__int__146 = 0;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
INT  ___nl__int__149 = 0;
INT  ___nl__int__150 = 0;
INT  ___nl__int__151 = 0;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
INT  ___nl__int__154 = 0;
INT  ___nl__int__155 = 0;
ImmT  ___nl__im__156 = NULL;
INT  ___nl__int__157 = 0;
INT  ___nl__int__158 = 0;
INT  ___nl__int__159 = 0;
#line 234
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(290)));
#line 234
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 234
c_rt_lib0clear(&___nl__im__7);
#line 234
___nl__int__5 = ___nl__int__6 + ___nl__int__2;
#line 234
//clear ___nl__int__6;
#line 234
c_rt_lib0clear(&___nl__im__7);
#line 234
___nl__int__8 = ___nl__int__5;
#line 234
___nl__bool__4 = wprinter_priv0is_to_long(___nl__int__8);
#line 234
//clear ___nl__int__5;
#line 234
//clear ___nl__int__6;
#line 234
c_rt_lib0clear(&___nl__im__7);
#line 234
//clear ___nl__int__8;
#line 234
___nl__bool__4 = !___nl__bool__4;
#line 234
//clear ___nl__int__5;
#line 234
//clear ___nl__int__6;
#line 234
c_rt_lib0clear(&___nl__im__7);
#line 234
//clear ___nl__int__8;
#line 234
___nl__bool__4 = !___nl__bool__4;
#line 234
if(___nl__bool__4){ goto label_2;}
#line 235
c_rt_lib0copy(&___nl__im__9, ___nl__im__1);
#line 235
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___im__0, ___nl__im__9));
#line 235
c_rt_lib0clear(&___nl__im__9);
#line 236
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(290)));
#line 236
___nl__int__10 = getIntFromImm(___nl__im__11);
#line 236
c_rt_lib0clear(&___nl__im__11);
#line 236
___nl__int__2 = ___nl__int__2 + ___nl__int__10;
#line 236
//clear ___nl__int__10;
#line 236
c_rt_lib0clear(&___nl__im__11);
#line 237
___nl__int__12 = ___nl__int__2;
#line 237
c_rt_lib0clear(&___nl__im__1);
#line 237
//clear ___nl__int__2;
#line 237
//clear ___nl__int__3;
#line 237
//clear ___nl__bool__4;
#line 237
//clear ___nl__int__5;
#line 237
//clear ___nl__int__6;
#line 237
c_rt_lib0clear(&___nl__im__7);
#line 237
//clear ___nl__int__8;
#line 237
c_rt_lib0clear(&___nl__im__9);
#line 237
//clear ___nl__int__10;
#line 237
c_rt_lib0clear(&___nl__im__11);
#line 237
return ___nl__int__12;
#line 238
goto label_1;
#line 238
label_2:
#line 238
label_1:
#line 239
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(1238)));
#line 239
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_const(390));
#line 239
if(___nl__bool__14){ goto label_4;}
#line 247
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_const(240));
#line 247
if(___nl__bool__14){ goto label_5;}
#line 254
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_const(377));
#line 254
if(___nl__bool__14){ goto label_6;}
#line 263
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_const(1535));
#line 263
if(___nl__bool__14){ goto label_7;}
#line 268
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_const(1527));
#line 268
if(___nl__bool__14){ goto label_8;}
#line 271
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_const(1536));
#line 271
if(___nl__bool__14){ goto label_9;}
#line 271
c_rt_lib0move(&___nl__im__15,___get_global_const(16));
#line 271
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 271
nl_die_arg(___nl__im__15);
#line 239
label_4:
#line 239
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__13, ___get_global_const(390)));
#line 239
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 240
c_rt_lib0move(&___nl__im__20,___get_global_const(302));
#line 240
c_rt_lib0copy(&___nl__string__21, ___nl__im__16);
#line 240
c_rt_lib0copy(&___nl__string__22, ___nl__im__20);
#line 240
___nl__bool__18 = c_rt_lib0eq(___nl__string__21, ___nl__string__22);
#line 240
c_rt_lib0clear(&___nl__im__20);
#line 240
c_rt_lib0clear(&___nl__string__21);
#line 240
c_rt_lib0clear(&___nl__string__22);
#line 240
if(___nl__bool__18){ goto label_12;}
#line 240
c_rt_lib0move(&___nl__im__23,___get_global_const(306));
#line 240
c_rt_lib0copy(&___nl__string__24, ___nl__im__16);
#line 240
c_rt_lib0copy(&___nl__string__25, ___nl__im__23);
#line 240
___nl__bool__18 = c_rt_lib0eq(___nl__string__24, ___nl__string__25);
#line 240
c_rt_lib0clear(&___nl__im__23);
#line 240
c_rt_lib0clear(&___nl__string__24);
#line 240
c_rt_lib0clear(&___nl__string__25);
#line 240
label_12:
#line 240
//clear ___nl__bool__19;
#line 240
c_rt_lib0clear(&___nl__im__20);
#line 240
c_rt_lib0clear(&___nl__string__21);
#line 240
c_rt_lib0clear(&___nl__string__22);
#line 240
c_rt_lib0clear(&___nl__im__23);
#line 240
c_rt_lib0clear(&___nl__string__24);
#line 240
c_rt_lib0clear(&___nl__string__25);
#line 240
___nl__bool__18 = !___nl__bool__18;
#line 240
if(___nl__bool__18){ goto label_11;}
#line 241
c_rt_lib0copy(&___nl__im__26, ___nl__im__16);
#line 241
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__26));
#line 241
c_rt_lib0clear(&___nl__im__26);
#line 242
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(290)));
#line 242
___nl__int__29 = getIntFromImm(___nl__im__30);
#line 242
c_rt_lib0clear(&___nl__im__30);
#line 242
___nl__int__28 = ___nl__int__2 + ___nl__int__29;
#line 242
//clear ___nl__int__29;
#line 242
c_rt_lib0clear(&___nl__im__30);
#line 242
___nl__int__27 = ___nl__int__28;
#line 242
c_rt_lib0clear(&___nl__im__1);
#line 242
//clear ___nl__int__2;
#line 242
//clear ___nl__int__3;
#line 242
//clear ___nl__bool__4;
#line 242
//clear ___nl__int__5;
#line 242
//clear ___nl__int__6;
#line 242
c_rt_lib0clear(&___nl__im__7);
#line 242
//clear ___nl__int__8;
#line 242
c_rt_lib0clear(&___nl__im__9);
#line 242
//clear ___nl__int__10;
#line 242
c_rt_lib0clear(&___nl__im__11);
#line 242
//clear ___nl__int__12;
#line 242
c_rt_lib0clear(&___nl__im__13);
#line 242
//clear ___nl__bool__14;
#line 242
c_rt_lib0clear(&___nl__im__15);
#line 242
c_rt_lib0clear(&___nl__im__16);
#line 242
c_rt_lib0clear(&___nl__im__17);
#line 242
//clear ___nl__bool__18;
#line 242
//clear ___nl__bool__19;
#line 242
c_rt_lib0clear(&___nl__im__20);
#line 242
c_rt_lib0clear(&___nl__string__21);
#line 242
c_rt_lib0clear(&___nl__string__22);
#line 242
c_rt_lib0clear(&___nl__im__23);
#line 242
c_rt_lib0clear(&___nl__string__24);
#line 242
c_rt_lib0clear(&___nl__string__25);
#line 242
c_rt_lib0clear(&___nl__im__26);
#line 242
//clear ___nl__int__28;
#line 242
//clear ___nl__int__29;
#line 242
c_rt_lib0clear(&___nl__im__30);
#line 242
return ___nl__int__27;
#line 243
goto label_10;
#line 243
label_11:
#line 243
label_10:
#line 244
___nl__int__33 = wprinter_priv0get_tab_size();
#line 244
___nl__int__32 = ___nl__int__3 * ___nl__int__33;
#line 244
//clear ___nl__int__33;
#line 244
___nl__int__34 = ___nl__int__2 != ___nl__int__32;
#line 244
___nl__bool__31 = ___nl__int__34;
#line 244
//clear ___nl__int__32;
#line 244
//clear ___nl__int__33;
#line 244
//clear ___nl__int__34;
#line 244
___nl__bool__31 = !___nl__bool__31;
#line 244
if(___nl__bool__31){ goto label_14;}
#line 244
c_rt_lib0move(&___nl__im__36, string0lf());
#line 244
___nl__int__38 = ___nl__int__3;
#line 244
c_rt_lib0move(&___nl__im__37, wprinter_priv0pind(___nl__int__38));
#line 244
//clear ___nl__int__38;
#line 244
c_rt_lib0copy(&___nl__string__39, ___nl__im__36);
#line 244
c_rt_lib0copy(&___nl__string__40, ___nl__im__37);
#line 244
c_rt_lib0move(&___nl__string__41, c_rt_lib0concat_new(___nl__string__39, ___nl__string__40));
#line 244
c_rt_lib0copy(&___nl__im__35, ___nl__string__41);
#line 244
c_rt_lib0clear(&___nl__im__36);
#line 244
c_rt_lib0clear(&___nl__im__37);
#line 244
//clear ___nl__int__38;
#line 244
c_rt_lib0clear(&___nl__string__39);
#line 244
c_rt_lib0clear(&___nl__string__40);
#line 244
c_rt_lib0clear(&___nl__string__41);
#line 244
c_rt_lib0copy(&___nl__im__42, ___nl__im__35);
#line 244
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__42));
#line 244
c_rt_lib0clear(&___nl__im__35);
#line 244
c_rt_lib0clear(&___nl__im__36);
#line 244
c_rt_lib0clear(&___nl__im__37);
#line 244
//clear ___nl__int__38;
#line 244
c_rt_lib0clear(&___nl__string__39);
#line 244
c_rt_lib0clear(&___nl__string__40);
#line 244
c_rt_lib0clear(&___nl__string__41);
#line 244
c_rt_lib0clear(&___nl__im__42);
#line 244
goto label_13;
#line 244
label_14:
#line 244
label_13:
#line 245
c_rt_lib0copy(&___nl__im__43, ___nl__im__1);
#line 245
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___im__0, ___nl__im__43));
#line 245
c_rt_lib0clear(&___nl__im__43);
#line 246
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(290)));
#line 246
___nl__int__46 = getIntFromImm(___nl__im__47);
#line 246
c_rt_lib0clear(&___nl__im__47);
#line 246
___nl__int__49 = wprinter_priv0get_tab_size();
#line 246
___nl__int__48 = ___nl__int__3 * ___nl__int__49;
#line 246
//clear ___nl__int__49;
#line 246
___nl__int__45 = ___nl__int__46 + ___nl__int__48;
#line 246
//clear ___nl__int__46;
#line 246
c_rt_lib0clear(&___nl__im__47);
#line 246
//clear ___nl__int__48;
#line 246
//clear ___nl__int__49;
#line 246
___nl__int__44 = ___nl__int__45;
#line 246
c_rt_lib0clear(&___nl__im__1);
#line 246
//clear ___nl__int__2;
#line 246
//clear ___nl__int__3;
#line 246
//clear ___nl__bool__4;
#line 246
//clear ___nl__int__5;
#line 246
//clear ___nl__int__6;
#line 246
c_rt_lib0clear(&___nl__im__7);
#line 246
//clear ___nl__int__8;
#line 246
c_rt_lib0clear(&___nl__im__9);
#line 246
//clear ___nl__int__10;
#line 246
c_rt_lib0clear(&___nl__im__11);
#line 246
//clear ___nl__int__12;
#line 246
c_rt_lib0clear(&___nl__im__13);
#line 246
//clear ___nl__bool__14;
#line 246
c_rt_lib0clear(&___nl__im__15);
#line 246
c_rt_lib0clear(&___nl__im__16);
#line 246
c_rt_lib0clear(&___nl__im__17);
#line 246
//clear ___nl__bool__18;
#line 246
//clear ___nl__bool__19;
#line 246
c_rt_lib0clear(&___nl__im__20);
#line 246
c_rt_lib0clear(&___nl__string__21);
#line 246
c_rt_lib0clear(&___nl__string__22);
#line 246
c_rt_lib0clear(&___nl__im__23);
#line 246
c_rt_lib0clear(&___nl__string__24);
#line 246
c_rt_lib0clear(&___nl__string__25);
#line 246
c_rt_lib0clear(&___nl__im__26);
#line 246
//clear ___nl__int__27;
#line 246
//clear ___nl__int__28;
#line 246
//clear ___nl__int__29;
#line 246
c_rt_lib0clear(&___nl__im__30);
#line 246
//clear ___nl__bool__31;
#line 246
//clear ___nl__int__32;
#line 246
//clear ___nl__int__33;
#line 246
//clear ___nl__int__34;
#line 246
c_rt_lib0clear(&___nl__im__35);
#line 246
c_rt_lib0clear(&___nl__im__36);
#line 246
c_rt_lib0clear(&___nl__im__37);
#line 246
//clear ___nl__int__38;
#line 246
c_rt_lib0clear(&___nl__string__39);
#line 246
c_rt_lib0clear(&___nl__string__40);
#line 246
c_rt_lib0clear(&___nl__string__41);
#line 246
c_rt_lib0clear(&___nl__im__42);
#line 246
c_rt_lib0clear(&___nl__im__43);
#line 246
//clear ___nl__int__45;
#line 246
//clear ___nl__int__46;
#line 246
c_rt_lib0clear(&___nl__im__47);
#line 246
//clear ___nl__int__48;
#line 246
//clear ___nl__int__49;
#line 246
return ___nl__int__44;
#line 247
goto label_3;
#line 247
label_5:
#line 247
c_rt_lib0move(&___nl__im__51, c_rt_lib0priv_as(___nl__im__13, ___get_global_const(240)));
#line 247
c_rt_lib0copy(&___nl__im__50, ___nl__im__51);
#line 248
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_const(1031)));
#line 248
c_rt_lib0move(&___nl__im__55, string0lf());
#line 248
c_rt_lib0copy(&___nl__string__56, ___nl__im__54);
#line 248
c_rt_lib0copy(&___nl__string__57, ___nl__im__55);
#line 248
c_rt_lib0move(&___nl__string__58, c_rt_lib0concat_new(___nl__string__56, ___nl__string__57));
#line 248
c_rt_lib0copy(&___nl__im__53, ___nl__string__58);
#line 248
c_rt_lib0clear(&___nl__im__54);
#line 248
c_rt_lib0clear(&___nl__im__55);
#line 248
c_rt_lib0clear(&___nl__string__56);
#line 248
c_rt_lib0clear(&___nl__string__57);
#line 248
c_rt_lib0clear(&___nl__string__58);
#line 248
___nl__int__61 = 1;
#line 248
___nl__int__60 = ___nl__int__3 + ___nl__int__61;
#line 248
//clear ___nl__int__61;
#line 248
___nl__int__62 = ___nl__int__60;
#line 248
c_rt_lib0move(&___nl__im__59, wprinter_priv0pind(___nl__int__62));
#line 248
//clear ___nl__int__60;
#line 248
//clear ___nl__int__61;
#line 248
//clear ___nl__int__62;
#line 248
c_rt_lib0copy(&___nl__string__63, ___nl__im__53);
#line 248
c_rt_lib0copy(&___nl__string__64, ___nl__im__59);
#line 248
c_rt_lib0move(&___nl__string__65, c_rt_lib0concat_new(___nl__string__63, ___nl__string__64));
#line 248
c_rt_lib0copy(&___nl__im__52, ___nl__string__65);
#line 248
c_rt_lib0clear(&___nl__im__53);
#line 248
c_rt_lib0clear(&___nl__im__54);
#line 248
c_rt_lib0clear(&___nl__im__55);
#line 248
c_rt_lib0clear(&___nl__string__56);
#line 248
c_rt_lib0clear(&___nl__string__57);
#line 248
c_rt_lib0clear(&___nl__string__58);
#line 248
c_rt_lib0clear(&___nl__im__59);
#line 248
//clear ___nl__int__60;
#line 248
//clear ___nl__int__61;
#line 248
//clear ___nl__int__62;
#line 248
c_rt_lib0clear(&___nl__string__63);
#line 248
c_rt_lib0clear(&___nl__string__64);
#line 248
c_rt_lib0clear(&___nl__string__65);
#line 248
c_rt_lib0copy(&___nl__im__66, ___nl__im__52);
#line 248
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__66));
#line 248
c_rt_lib0clear(&___nl__im__52);
#line 248
c_rt_lib0clear(&___nl__im__53);
#line 248
c_rt_lib0clear(&___nl__im__54);
#line 248
c_rt_lib0clear(&___nl__im__55);
#line 248
c_rt_lib0clear(&___nl__string__56);
#line 248
c_rt_lib0clear(&___nl__string__57);
#line 248
c_rt_lib0clear(&___nl__string__58);
#line 248
c_rt_lib0clear(&___nl__im__59);
#line 248
//clear ___nl__int__60;
#line 248
//clear ___nl__int__61;
#line 248
//clear ___nl__int__62;
#line 248
c_rt_lib0clear(&___nl__string__63);
#line 248
c_rt_lib0clear(&___nl__string__64);
#line 248
c_rt_lib0clear(&___nl__string__65);
#line 248
c_rt_lib0clear(&___nl__im__66);
#line 249
___nl__int__68 = 1;
#line 249
___nl__int__67 = ___nl__int__3 + ___nl__int__68;
#line 249
//clear ___nl__int__68;
#line 249
//clear ___nl__int__68;
#line 249
___nl__int__69 = wprinter_priv0get_tab_size();
#line 249
___nl__int__2 = ___nl__int__67 * ___nl__int__69;
#line 249
//clear ___nl__int__67;
#line 249
//clear ___nl__int__68;
#line 249
//clear ___nl__int__69;
#line 249
//clear ___nl__int__67;
#line 249
//clear ___nl__int__68;
#line 249
//clear ___nl__int__69;
#line 250
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_const(377)));
#line 250
c_rt_lib0copy(&___nl__im__71, ___nl__im__70);
#line 250
___nl__int__73 = 1;
#line 250
___nl__int__72 = ___nl__int__3 + ___nl__int__73;
#line 250
//clear ___nl__int__73;
#line 250
___nl__int__74 = ___nl__int__72;
#line 250
___nl__int__75 = ___nl__int__2;
#line 250
___nl__int__2 = wprinter_priv0print_arr_in_lines(___ref___im__0, ___nl__im__71, ___nl__int__74, ___nl__int__75);
#line 250
c_rt_lib0clear(&___nl__im__70);
#line 250
c_rt_lib0clear(&___nl__im__71);
#line 250
//clear ___nl__int__72;
#line 250
//clear ___nl__int__73;
#line 250
//clear ___nl__int__74;
#line 250
//clear ___nl__int__75;
#line 250
c_rt_lib0clear(&___nl__im__70);
#line 250
c_rt_lib0clear(&___nl__im__71);
#line 250
//clear ___nl__int__72;
#line 250
//clear ___nl__int__73;
#line 250
//clear ___nl__int__74;
#line 250
//clear ___nl__int__75;
#line 251
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_const(377)));
#line 251
c_rt_lib0copy(&___nl__im__79, ___nl__im__78);
#line 251
___nl__int__77 = c_rt_lib0array_len(___nl__im__79);
#line 251
c_rt_lib0clear(&___nl__im__78);
#line 251
c_rt_lib0clear(&___nl__im__79);
#line 251
___nl__int__80 = 0;
#line 251
___nl__int__81 = ___nl__int__77 > ___nl__int__80;
#line 251
___nl__bool__76 = ___nl__int__81;
#line 251
//clear ___nl__int__77;
#line 251
c_rt_lib0clear(&___nl__im__78);
#line 251
c_rt_lib0clear(&___nl__im__79);
#line 251
//clear ___nl__int__80;
#line 251
//clear ___nl__int__81;
#line 251
___nl__bool__76 = !___nl__bool__76;
#line 251
if(___nl__bool__76){ goto label_16;}
#line 251
c_rt_lib0move(&___nl__im__83, string0lf());
#line 251
___nl__int__85 = ___nl__int__3;
#line 251
c_rt_lib0move(&___nl__im__84, wprinter_priv0pind(___nl__int__85));
#line 251
//clear ___nl__int__85;
#line 251
c_rt_lib0copy(&___nl__string__86, ___nl__im__83);
#line 251
c_rt_lib0copy(&___nl__string__87, ___nl__im__84);
#line 251
c_rt_lib0move(&___nl__string__88, c_rt_lib0concat_new(___nl__string__86, ___nl__string__87));
#line 251
c_rt_lib0copy(&___nl__im__82, ___nl__string__88);
#line 251
c_rt_lib0clear(&___nl__im__83);
#line 251
c_rt_lib0clear(&___nl__im__84);
#line 251
//clear ___nl__int__85;
#line 251
c_rt_lib0clear(&___nl__string__86);
#line 251
c_rt_lib0clear(&___nl__string__87);
#line 251
c_rt_lib0clear(&___nl__string__88);
#line 251
c_rt_lib0copy(&___nl__im__89, ___nl__im__82);
#line 251
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__89));
#line 251
c_rt_lib0clear(&___nl__im__82);
#line 251
c_rt_lib0clear(&___nl__im__83);
#line 251
c_rt_lib0clear(&___nl__im__84);
#line 251
//clear ___nl__int__85;
#line 251
c_rt_lib0clear(&___nl__string__86);
#line 251
c_rt_lib0clear(&___nl__string__87);
#line 251
c_rt_lib0clear(&___nl__string__88);
#line 251
c_rt_lib0clear(&___nl__im__89);
#line 251
goto label_15;
#line 251
label_16:
#line 251
label_15:
#line 252
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_const(1083)));
#line 252
c_rt_lib0copy(&___nl__im__91, ___nl__im__90);
#line 252
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__91));
#line 252
c_rt_lib0clear(&___nl__im__90);
#line 252
c_rt_lib0clear(&___nl__im__91);
#line 253
___nl__int__95 = wprinter_priv0get_tab_size();
#line 253
___nl__int__94 = ___nl__int__3 * ___nl__int__95;
#line 253
//clear ___nl__int__95;
#line 253
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_const(1083)));
#line 253
c_rt_lib0copy(&___nl__im__98, ___nl__im__97);
#line 253
___nl__int__96 = string0length(___nl__im__98);
#line 253
c_rt_lib0clear(&___nl__im__97);
#line 253
c_rt_lib0clear(&___nl__im__98);
#line 253
___nl__int__93 = ___nl__int__94 + ___nl__int__96;
#line 253
//clear ___nl__int__94;
#line 253
//clear ___nl__int__95;
#line 253
//clear ___nl__int__96;
#line 253
c_rt_lib0clear(&___nl__im__97);
#line 253
c_rt_lib0clear(&___nl__im__98);
#line 253
___nl__int__92 = ___nl__int__93;
#line 253
c_rt_lib0clear(&___nl__im__1);
#line 253
//clear ___nl__int__2;
#line 253
//clear ___nl__int__3;
#line 253
//clear ___nl__bool__4;
#line 253
//clear ___nl__int__5;
#line 253
//clear ___nl__int__6;
#line 253
c_rt_lib0clear(&___nl__im__7);
#line 253
//clear ___nl__int__8;
#line 253
c_rt_lib0clear(&___nl__im__9);
#line 253
//clear ___nl__int__10;
#line 253
c_rt_lib0clear(&___nl__im__11);
#line 253
//clear ___nl__int__12;
#line 253
c_rt_lib0clear(&___nl__im__13);
#line 253
//clear ___nl__bool__14;
#line 253
c_rt_lib0clear(&___nl__im__15);
#line 253
c_rt_lib0clear(&___nl__im__16);
#line 253
c_rt_lib0clear(&___nl__im__17);
#line 253
//clear ___nl__bool__18;
#line 253
//clear ___nl__bool__19;
#line 253
c_rt_lib0clear(&___nl__im__20);
#line 253
c_rt_lib0clear(&___nl__string__21);
#line 253
c_rt_lib0clear(&___nl__string__22);
#line 253
c_rt_lib0clear(&___nl__im__23);
#line 253
c_rt_lib0clear(&___nl__string__24);
#line 253
c_rt_lib0clear(&___nl__string__25);
#line 253
c_rt_lib0clear(&___nl__im__26);
#line 253
//clear ___nl__int__27;
#line 253
//clear ___nl__int__28;
#line 253
//clear ___nl__int__29;
#line 253
c_rt_lib0clear(&___nl__im__30);
#line 253
//clear ___nl__bool__31;
#line 253
//clear ___nl__int__32;
#line 253
//clear ___nl__int__33;
#line 253
//clear ___nl__int__34;
#line 253
c_rt_lib0clear(&___nl__im__35);
#line 253
c_rt_lib0clear(&___nl__im__36);
#line 253
c_rt_lib0clear(&___nl__im__37);
#line 253
//clear ___nl__int__38;
#line 253
c_rt_lib0clear(&___nl__string__39);
#line 253
c_rt_lib0clear(&___nl__string__40);
#line 253
c_rt_lib0clear(&___nl__string__41);
#line 253
c_rt_lib0clear(&___nl__im__42);
#line 253
c_rt_lib0clear(&___nl__im__43);
#line 253
//clear ___nl__int__44;
#line 253
//clear ___nl__int__45;
#line 253
//clear ___nl__int__46;
#line 253
c_rt_lib0clear(&___nl__im__47);
#line 253
//clear ___nl__int__48;
#line 253
//clear ___nl__int__49;
#line 253
c_rt_lib0clear(&___nl__im__50);
#line 253
c_rt_lib0clear(&___nl__im__51);
#line 253
c_rt_lib0clear(&___nl__im__52);
#line 253
c_rt_lib0clear(&___nl__im__53);
#line 253
c_rt_lib0clear(&___nl__im__54);
#line 253
c_rt_lib0clear(&___nl__im__55);
#line 253
c_rt_lib0clear(&___nl__string__56);
#line 253
c_rt_lib0clear(&___nl__string__57);
#line 253
c_rt_lib0clear(&___nl__string__58);
#line 253
c_rt_lib0clear(&___nl__im__59);
#line 253
//clear ___nl__int__60;
#line 253
//clear ___nl__int__61;
#line 253
//clear ___nl__int__62;
#line 253
c_rt_lib0clear(&___nl__string__63);
#line 253
c_rt_lib0clear(&___nl__string__64);
#line 253
c_rt_lib0clear(&___nl__string__65);
#line 253
c_rt_lib0clear(&___nl__im__66);
#line 253
//clear ___nl__int__67;
#line 253
//clear ___nl__int__68;
#line 253
//clear ___nl__int__69;
#line 253
c_rt_lib0clear(&___nl__im__70);
#line 253
c_rt_lib0clear(&___nl__im__71);
#line 253
//clear ___nl__int__72;
#line 253
//clear ___nl__int__73;
#line 253
//clear ___nl__int__74;
#line 253
//clear ___nl__int__75;
#line 253
//clear ___nl__bool__76;
#line 253
//clear ___nl__int__77;
#line 253
c_rt_lib0clear(&___nl__im__78);
#line 253
c_rt_lib0clear(&___nl__im__79);
#line 253
//clear ___nl__int__80;
#line 253
//clear ___nl__int__81;
#line 253
c_rt_lib0clear(&___nl__im__82);
#line 253
c_rt_lib0clear(&___nl__im__83);
#line 253
c_rt_lib0clear(&___nl__im__84);
#line 253
//clear ___nl__int__85;
#line 253
c_rt_lib0clear(&___nl__string__86);
#line 253
c_rt_lib0clear(&___nl__string__87);
#line 253
c_rt_lib0clear(&___nl__string__88);
#line 253
c_rt_lib0clear(&___nl__im__89);
#line 253
c_rt_lib0clear(&___nl__im__90);
#line 253
c_rt_lib0clear(&___nl__im__91);
#line 253
//clear ___nl__int__93;
#line 253
//clear ___nl__int__94;
#line 253
//clear ___nl__int__95;
#line 253
//clear ___nl__int__96;
#line 253
c_rt_lib0clear(&___nl__im__97);
#line 253
c_rt_lib0clear(&___nl__im__98);
#line 253
return ___nl__int__92;
#line 254
goto label_3;
#line 254
label_6:
#line 254
c_rt_lib0move(&___nl__im__100, c_rt_lib0priv_as(___nl__im__13, ___get_global_const(377)));
#line 254
c_rt_lib0copy(&___nl__im__99, ___nl__im__100);
#line 255
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_const(377)));
#line 256
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_const(96)));
#line 256
___nl__bool__103 = c_rt_lib0priv_is(___nl__im__102, ___get_global_const(38));
#line 256
if(___nl__bool__103){ goto label_18;}
#line 258
___nl__bool__103 = c_rt_lib0priv_is(___nl__im__102, ___get_global_const(1528));
#line 258
if(___nl__bool__103){ goto label_19;}
#line 260
___nl__bool__103 = c_rt_lib0priv_is(___nl__im__102, ___get_global_const(1529));
#line 260
if(___nl__bool__103){ goto label_20;}
#line 260
c_rt_lib0move(&___nl__im__104,___get_global_const(16));
#line 260
c_rt_lib0move(&___nl__im__104, c_rt_lib0array_mk(2, ___nl__im__104, ___nl__im__102));
#line 260
nl_die_arg(___nl__im__104);
#line 256
label_18:
#line 257
c_rt_lib0copy(&___nl__im__105, ___nl__im__101);
#line 257
___nl__int__107 = 1;
#line 257
___nl__int__106 = ___nl__int__3 + ___nl__int__107;
#line 257
//clear ___nl__int__107;
#line 257
___nl__int__108 = ___nl__int__106;
#line 257
___nl__int__109 = ___nl__int__2;
#line 257
___nl__int__2 = wprinter_priv0print_arr_in_lines(___ref___im__0, ___nl__im__105, ___nl__int__108, ___nl__int__109);
#line 257
c_rt_lib0clear(&___nl__im__105);
#line 257
//clear ___nl__int__106;
#line 257
//clear ___nl__int__107;
#line 257
//clear ___nl__int__108;
#line 257
//clear ___nl__int__109;
#line 257
c_rt_lib0clear(&___nl__im__105);
#line 257
//clear ___nl__int__106;
#line 257
//clear ___nl__int__107;
#line 257
//clear ___nl__int__108;
#line 257
//clear ___nl__int__109;
#line 258
goto label_17;
#line 258
label_19:
#line 259
c_rt_lib0copy(&___nl__im__112, ___nl__im__101);
#line 259
___nl__bool__113 = false;
#line 259
___nl__bool__114 = ___nl__bool__113;
#line 259
___nl__int__115 = ___nl__int__2;
#line 259
___nl__int__116 = ___nl__int__3;
#line 259
___nl__int__111 = wprinter_priv0process_list(___ref___im__0, ___nl__im__112, ___nl__bool__114, ___nl__int__115, ___nl__int__116);
#line 259
c_rt_lib0clear(&___nl__im__112);
#line 259
//clear ___nl__bool__113;
#line 259
//clear ___nl__bool__114;
#line 259
//clear ___nl__int__115;
#line 259
//clear ___nl__int__116;
#line 259
___nl__int__110 = ___nl__int__111;
#line 259
c_rt_lib0clear(&___nl__im__1);
#line 259
//clear ___nl__int__2;
#line 259
//clear ___nl__int__3;
#line 259
//clear ___nl__bool__4;
#line 259
//clear ___nl__int__5;
#line 259
//clear ___nl__int__6;
#line 259
c_rt_lib0clear(&___nl__im__7);
#line 259
//clear ___nl__int__8;
#line 259
c_rt_lib0clear(&___nl__im__9);
#line 259
//clear ___nl__int__10;
#line 259
c_rt_lib0clear(&___nl__im__11);
#line 259
//clear ___nl__int__12;
#line 259
c_rt_lib0clear(&___nl__im__13);
#line 259
//clear ___nl__bool__14;
#line 259
c_rt_lib0clear(&___nl__im__15);
#line 259
c_rt_lib0clear(&___nl__im__16);
#line 259
c_rt_lib0clear(&___nl__im__17);
#line 259
//clear ___nl__bool__18;
#line 259
//clear ___nl__bool__19;
#line 259
c_rt_lib0clear(&___nl__im__20);
#line 259
c_rt_lib0clear(&___nl__string__21);
#line 259
c_rt_lib0clear(&___nl__string__22);
#line 259
c_rt_lib0clear(&___nl__im__23);
#line 259
c_rt_lib0clear(&___nl__string__24);
#line 259
c_rt_lib0clear(&___nl__string__25);
#line 259
c_rt_lib0clear(&___nl__im__26);
#line 259
//clear ___nl__int__27;
#line 259
//clear ___nl__int__28;
#line 259
//clear ___nl__int__29;
#line 259
c_rt_lib0clear(&___nl__im__30);
#line 259
//clear ___nl__bool__31;
#line 259
//clear ___nl__int__32;
#line 259
//clear ___nl__int__33;
#line 259
//clear ___nl__int__34;
#line 259
c_rt_lib0clear(&___nl__im__35);
#line 259
c_rt_lib0clear(&___nl__im__36);
#line 259
c_rt_lib0clear(&___nl__im__37);
#line 259
//clear ___nl__int__38;
#line 259
c_rt_lib0clear(&___nl__string__39);
#line 259
c_rt_lib0clear(&___nl__string__40);
#line 259
c_rt_lib0clear(&___nl__string__41);
#line 259
c_rt_lib0clear(&___nl__im__42);
#line 259
c_rt_lib0clear(&___nl__im__43);
#line 259
//clear ___nl__int__44;
#line 259
//clear ___nl__int__45;
#line 259
//clear ___nl__int__46;
#line 259
c_rt_lib0clear(&___nl__im__47);
#line 259
//clear ___nl__int__48;
#line 259
//clear ___nl__int__49;
#line 259
c_rt_lib0clear(&___nl__im__50);
#line 259
c_rt_lib0clear(&___nl__im__51);
#line 259
c_rt_lib0clear(&___nl__im__52);
#line 259
c_rt_lib0clear(&___nl__im__53);
#line 259
c_rt_lib0clear(&___nl__im__54);
#line 259
c_rt_lib0clear(&___nl__im__55);
#line 259
c_rt_lib0clear(&___nl__string__56);
#line 259
c_rt_lib0clear(&___nl__string__57);
#line 259
c_rt_lib0clear(&___nl__string__58);
#line 259
c_rt_lib0clear(&___nl__im__59);
#line 259
//clear ___nl__int__60;
#line 259
//clear ___nl__int__61;
#line 259
//clear ___nl__int__62;
#line 259
c_rt_lib0clear(&___nl__string__63);
#line 259
c_rt_lib0clear(&___nl__string__64);
#line 259
c_rt_lib0clear(&___nl__string__65);
#line 259
c_rt_lib0clear(&___nl__im__66);
#line 259
//clear ___nl__int__67;
#line 259
//clear ___nl__int__68;
#line 259
//clear ___nl__int__69;
#line 259
c_rt_lib0clear(&___nl__im__70);
#line 259
c_rt_lib0clear(&___nl__im__71);
#line 259
//clear ___nl__int__72;
#line 259
//clear ___nl__int__73;
#line 259
//clear ___nl__int__74;
#line 259
//clear ___nl__int__75;
#line 259
//clear ___nl__bool__76;
#line 259
//clear ___nl__int__77;
#line 259
c_rt_lib0clear(&___nl__im__78);
#line 259
c_rt_lib0clear(&___nl__im__79);
#line 259
//clear ___nl__int__80;
#line 259
//clear ___nl__int__81;
#line 259
c_rt_lib0clear(&___nl__im__82);
#line 259
c_rt_lib0clear(&___nl__im__83);
#line 259
c_rt_lib0clear(&___nl__im__84);
#line 259
//clear ___nl__int__85;
#line 259
c_rt_lib0clear(&___nl__string__86);
#line 259
c_rt_lib0clear(&___nl__string__87);
#line 259
c_rt_lib0clear(&___nl__string__88);
#line 259
c_rt_lib0clear(&___nl__im__89);
#line 259
c_rt_lib0clear(&___nl__im__90);
#line 259
c_rt_lib0clear(&___nl__im__91);
#line 259
//clear ___nl__int__92;
#line 259
//clear ___nl__int__93;
#line 259
//clear ___nl__int__94;
#line 259
//clear ___nl__int__95;
#line 259
//clear ___nl__int__96;
#line 259
c_rt_lib0clear(&___nl__im__97);
#line 259
c_rt_lib0clear(&___nl__im__98);
#line 259
c_rt_lib0clear(&___nl__im__99);
#line 259
c_rt_lib0clear(&___nl__im__100);
#line 259
c_rt_lib0clear(&___nl__im__101);
#line 259
c_rt_lib0clear(&___nl__im__102);
#line 259
//clear ___nl__bool__103;
#line 259
c_rt_lib0clear(&___nl__im__104);
#line 259
c_rt_lib0clear(&___nl__im__105);
#line 259
//clear ___nl__int__106;
#line 259
//clear ___nl__int__107;
#line 259
//clear ___nl__int__108;
#line 259
//clear ___nl__int__109;
#line 259
//clear ___nl__int__111;
#line 259
c_rt_lib0clear(&___nl__im__112);
#line 259
//clear ___nl__bool__113;
#line 259
//clear ___nl__bool__114;
#line 259
//clear ___nl__int__115;
#line 259
//clear ___nl__int__116;
#line 259
return ___nl__int__110;
#line 260
goto label_17;
#line 260
label_20:
#line 261
c_rt_lib0copy(&___nl__im__119, ___nl__im__101);
#line 261
___nl__bool__120 = true;
#line 261
___nl__bool__121 = ___nl__bool__120;
#line 261
___nl__int__122 = ___nl__int__2;
#line 261
___nl__int__123 = ___nl__int__3;
#line 261
___nl__int__118 = wprinter_priv0process_list(___ref___im__0, ___nl__im__119, ___nl__bool__121, ___nl__int__122, ___nl__int__123);
#line 261
c_rt_lib0clear(&___nl__im__119);
#line 261
//clear ___nl__bool__120;
#line 261
//clear ___nl__bool__121;
#line 261
//clear ___nl__int__122;
#line 261
//clear ___nl__int__123;
#line 261
___nl__int__117 = ___nl__int__118;
#line 261
c_rt_lib0clear(&___nl__im__1);
#line 261
//clear ___nl__int__2;
#line 261
//clear ___nl__int__3;
#line 261
//clear ___nl__bool__4;
#line 261
//clear ___nl__int__5;
#line 261
//clear ___nl__int__6;
#line 261
c_rt_lib0clear(&___nl__im__7);
#line 261
//clear ___nl__int__8;
#line 261
c_rt_lib0clear(&___nl__im__9);
#line 261
//clear ___nl__int__10;
#line 261
c_rt_lib0clear(&___nl__im__11);
#line 261
//clear ___nl__int__12;
#line 261
c_rt_lib0clear(&___nl__im__13);
#line 261
//clear ___nl__bool__14;
#line 261
c_rt_lib0clear(&___nl__im__15);
#line 261
c_rt_lib0clear(&___nl__im__16);
#line 261
c_rt_lib0clear(&___nl__im__17);
#line 261
//clear ___nl__bool__18;
#line 261
//clear ___nl__bool__19;
#line 261
c_rt_lib0clear(&___nl__im__20);
#line 261
c_rt_lib0clear(&___nl__string__21);
#line 261
c_rt_lib0clear(&___nl__string__22);
#line 261
c_rt_lib0clear(&___nl__im__23);
#line 261
c_rt_lib0clear(&___nl__string__24);
#line 261
c_rt_lib0clear(&___nl__string__25);
#line 261
c_rt_lib0clear(&___nl__im__26);
#line 261
//clear ___nl__int__27;
#line 261
//clear ___nl__int__28;
#line 261
//clear ___nl__int__29;
#line 261
c_rt_lib0clear(&___nl__im__30);
#line 261
//clear ___nl__bool__31;
#line 261
//clear ___nl__int__32;
#line 261
//clear ___nl__int__33;
#line 261
//clear ___nl__int__34;
#line 261
c_rt_lib0clear(&___nl__im__35);
#line 261
c_rt_lib0clear(&___nl__im__36);
#line 261
c_rt_lib0clear(&___nl__im__37);
#line 261
//clear ___nl__int__38;
#line 261
c_rt_lib0clear(&___nl__string__39);
#line 261
c_rt_lib0clear(&___nl__string__40);
#line 261
c_rt_lib0clear(&___nl__string__41);
#line 261
c_rt_lib0clear(&___nl__im__42);
#line 261
c_rt_lib0clear(&___nl__im__43);
#line 261
//clear ___nl__int__44;
#line 261
//clear ___nl__int__45;
#line 261
//clear ___nl__int__46;
#line 261
c_rt_lib0clear(&___nl__im__47);
#line 261
//clear ___nl__int__48;
#line 261
//clear ___nl__int__49;
#line 261
c_rt_lib0clear(&___nl__im__50);
#line 261
c_rt_lib0clear(&___nl__im__51);
#line 261
c_rt_lib0clear(&___nl__im__52);
#line 261
c_rt_lib0clear(&___nl__im__53);
#line 261
c_rt_lib0clear(&___nl__im__54);
#line 261
c_rt_lib0clear(&___nl__im__55);
#line 261
c_rt_lib0clear(&___nl__string__56);
#line 261
c_rt_lib0clear(&___nl__string__57);
#line 261
c_rt_lib0clear(&___nl__string__58);
#line 261
c_rt_lib0clear(&___nl__im__59);
#line 261
//clear ___nl__int__60;
#line 261
//clear ___nl__int__61;
#line 261
//clear ___nl__int__62;
#line 261
c_rt_lib0clear(&___nl__string__63);
#line 261
c_rt_lib0clear(&___nl__string__64);
#line 261
c_rt_lib0clear(&___nl__string__65);
#line 261
c_rt_lib0clear(&___nl__im__66);
#line 261
//clear ___nl__int__67;
#line 261
//clear ___nl__int__68;
#line 261
//clear ___nl__int__69;
#line 261
c_rt_lib0clear(&___nl__im__70);
#line 261
c_rt_lib0clear(&___nl__im__71);
#line 261
//clear ___nl__int__72;
#line 261
//clear ___nl__int__73;
#line 261
//clear ___nl__int__74;
#line 261
//clear ___nl__int__75;
#line 261
//clear ___nl__bool__76;
#line 261
//clear ___nl__int__77;
#line 261
c_rt_lib0clear(&___nl__im__78);
#line 261
c_rt_lib0clear(&___nl__im__79);
#line 261
//clear ___nl__int__80;
#line 261
//clear ___nl__int__81;
#line 261
c_rt_lib0clear(&___nl__im__82);
#line 261
c_rt_lib0clear(&___nl__im__83);
#line 261
c_rt_lib0clear(&___nl__im__84);
#line 261
//clear ___nl__int__85;
#line 261
c_rt_lib0clear(&___nl__string__86);
#line 261
c_rt_lib0clear(&___nl__string__87);
#line 261
c_rt_lib0clear(&___nl__string__88);
#line 261
c_rt_lib0clear(&___nl__im__89);
#line 261
c_rt_lib0clear(&___nl__im__90);
#line 261
c_rt_lib0clear(&___nl__im__91);
#line 261
//clear ___nl__int__92;
#line 261
//clear ___nl__int__93;
#line 261
//clear ___nl__int__94;
#line 261
//clear ___nl__int__95;
#line 261
//clear ___nl__int__96;
#line 261
c_rt_lib0clear(&___nl__im__97);
#line 261
c_rt_lib0clear(&___nl__im__98);
#line 261
c_rt_lib0clear(&___nl__im__99);
#line 261
c_rt_lib0clear(&___nl__im__100);
#line 261
c_rt_lib0clear(&___nl__im__101);
#line 261
c_rt_lib0clear(&___nl__im__102);
#line 261
//clear ___nl__bool__103;
#line 261
c_rt_lib0clear(&___nl__im__104);
#line 261
c_rt_lib0clear(&___nl__im__105);
#line 261
//clear ___nl__int__106;
#line 261
//clear ___nl__int__107;
#line 261
//clear ___nl__int__108;
#line 261
//clear ___nl__int__109;
#line 261
//clear ___nl__int__110;
#line 261
//clear ___nl__int__111;
#line 261
c_rt_lib0clear(&___nl__im__112);
#line 261
//clear ___nl__bool__113;
#line 261
//clear ___nl__bool__114;
#line 261
//clear ___nl__int__115;
#line 261
//clear ___nl__int__116;
#line 261
//clear ___nl__int__118;
#line 261
c_rt_lib0clear(&___nl__im__119);
#line 261
//clear ___nl__bool__120;
#line 261
//clear ___nl__bool__121;
#line 261
//clear ___nl__int__122;
#line 261
//clear ___nl__int__123;
#line 261
return ___nl__int__117;
#line 262
goto label_17;
#line 262
label_17:
#line 263
goto label_3;
#line 263
label_7:
#line 263
c_rt_lib0move(&___nl__im__125, c_rt_lib0priv_as(___nl__im__13, ___get_global_const(1535)));
#line 263
c_rt_lib0copy(&___nl__im__124, ___nl__im__125);
#line 264
c_rt_lib0move(&___nl__im__127, string0lf());
#line 264
___nl__int__129 = ___nl__int__3;
#line 264
c_rt_lib0move(&___nl__im__128, wprinter_priv0pind(___nl__int__129));
#line 264
//clear ___nl__int__129;
#line 264
c_rt_lib0copy(&___nl__string__130, ___nl__im__127);
#line 264
c_rt_lib0copy(&___nl__string__131, ___nl__im__128);
#line 264
c_rt_lib0move(&___nl__string__132, c_rt_lib0concat_new(___nl__string__130, ___nl__string__131));
#line 264
c_rt_lib0copy(&___nl__im__126, ___nl__string__132);
#line 264
c_rt_lib0clear(&___nl__im__127);
#line 264
c_rt_lib0clear(&___nl__im__128);
#line 264
//clear ___nl__int__129;
#line 264
c_rt_lib0clear(&___nl__string__130);
#line 264
c_rt_lib0clear(&___nl__string__131);
#line 264
c_rt_lib0clear(&___nl__string__132);
#line 264
c_rt_lib0copy(&___nl__im__133, ___nl__im__126);
#line 264
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__133));
#line 264
c_rt_lib0clear(&___nl__im__126);
#line 264
c_rt_lib0clear(&___nl__im__127);
#line 264
c_rt_lib0clear(&___nl__im__128);
#line 264
//clear ___nl__int__129;
#line 264
c_rt_lib0clear(&___nl__string__130);
#line 264
c_rt_lib0clear(&___nl__string__131);
#line 264
c_rt_lib0clear(&___nl__string__132);
#line 264
c_rt_lib0clear(&___nl__im__133);
#line 265
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_const(1337)));
#line 265
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__135, ___get_global_const(290)));
#line 265
___nl__int__134 = getIntFromImm(___nl__im__136);
#line 265
c_rt_lib0clear(&___nl__im__135);
#line 265
c_rt_lib0clear(&___nl__im__136);
#line 265
___nl__int__138 = wprinter_priv0get_tab_size();
#line 265
___nl__int__137 = ___nl__int__3 * ___nl__int__138;
#line 265
//clear ___nl__int__138;
#line 265
___nl__int__2 = ___nl__int__134 + ___nl__int__137;
#line 265
//clear ___nl__int__134;
#line 265
c_rt_lib0clear(&___nl__im__135);
#line 265
c_rt_lib0clear(&___nl__im__136);
#line 265
//clear ___nl__int__137;
#line 265
//clear ___nl__int__138;
#line 265
//clear ___nl__int__134;
#line 265
c_rt_lib0clear(&___nl__im__135);
#line 265
c_rt_lib0clear(&___nl__im__136);
#line 265
//clear ___nl__int__137;
#line 265
//clear ___nl__int__138;
#line 266
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_const(1337)));
#line 266
c_rt_lib0copy(&___nl__im__140, ___nl__im__139);
#line 266
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___im__0, ___nl__im__140));
#line 266
c_rt_lib0clear(&___nl__im__139);
#line 266
c_rt_lib0clear(&___nl__im__140);
#line 267
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_const(1338)));
#line 267
c_rt_lib0copy(&___nl__im__144, ___nl__im__143);
#line 267
___nl__int__145 = ___nl__int__2;
#line 267
___nl__int__146 = ___nl__int__3;
#line 267
___nl__int__142 = wprinter_priv0print_t_rec(___ref___im__0, ___nl__im__144, ___nl__int__145, ___nl__int__146);
#line 267
c_rt_lib0clear(&___nl__im__143);
#line 267
c_rt_lib0clear(&___nl__im__144);
#line 267
//clear ___nl__int__145;
#line 267
//clear ___nl__int__146;
#line 267
___nl__int__141 = ___nl__int__142;
#line 267
c_rt_lib0clear(&___nl__im__1);
#line 267
//clear ___nl__int__2;
#line 267
//clear ___nl__int__3;
#line 267
//clear ___nl__bool__4;
#line 267
//clear ___nl__int__5;
#line 267
//clear ___nl__int__6;
#line 267
c_rt_lib0clear(&___nl__im__7);
#line 267
//clear ___nl__int__8;
#line 267
c_rt_lib0clear(&___nl__im__9);
#line 267
//clear ___nl__int__10;
#line 267
c_rt_lib0clear(&___nl__im__11);
#line 267
//clear ___nl__int__12;
#line 267
c_rt_lib0clear(&___nl__im__13);
#line 267
//clear ___nl__bool__14;
#line 267
c_rt_lib0clear(&___nl__im__15);
#line 267
c_rt_lib0clear(&___nl__im__16);
#line 267
c_rt_lib0clear(&___nl__im__17);
#line 267
//clear ___nl__bool__18;
#line 267
//clear ___nl__bool__19;
#line 267
c_rt_lib0clear(&___nl__im__20);
#line 267
c_rt_lib0clear(&___nl__string__21);
#line 267
c_rt_lib0clear(&___nl__string__22);
#line 267
c_rt_lib0clear(&___nl__im__23);
#line 267
c_rt_lib0clear(&___nl__string__24);
#line 267
c_rt_lib0clear(&___nl__string__25);
#line 267
c_rt_lib0clear(&___nl__im__26);
#line 267
//clear ___nl__int__27;
#line 267
//clear ___nl__int__28;
#line 267
//clear ___nl__int__29;
#line 267
c_rt_lib0clear(&___nl__im__30);
#line 267
//clear ___nl__bool__31;
#line 267
//clear ___nl__int__32;
#line 267
//clear ___nl__int__33;
#line 267
//clear ___nl__int__34;
#line 267
c_rt_lib0clear(&___nl__im__35);
#line 267
c_rt_lib0clear(&___nl__im__36);
#line 267
c_rt_lib0clear(&___nl__im__37);
#line 267
//clear ___nl__int__38;
#line 267
c_rt_lib0clear(&___nl__string__39);
#line 267
c_rt_lib0clear(&___nl__string__40);
#line 267
c_rt_lib0clear(&___nl__string__41);
#line 267
c_rt_lib0clear(&___nl__im__42);
#line 267
c_rt_lib0clear(&___nl__im__43);
#line 267
//clear ___nl__int__44;
#line 267
//clear ___nl__int__45;
#line 267
//clear ___nl__int__46;
#line 267
c_rt_lib0clear(&___nl__im__47);
#line 267
//clear ___nl__int__48;
#line 267
//clear ___nl__int__49;
#line 267
c_rt_lib0clear(&___nl__im__50);
#line 267
c_rt_lib0clear(&___nl__im__51);
#line 267
c_rt_lib0clear(&___nl__im__52);
#line 267
c_rt_lib0clear(&___nl__im__53);
#line 267
c_rt_lib0clear(&___nl__im__54);
#line 267
c_rt_lib0clear(&___nl__im__55);
#line 267
c_rt_lib0clear(&___nl__string__56);
#line 267
c_rt_lib0clear(&___nl__string__57);
#line 267
c_rt_lib0clear(&___nl__string__58);
#line 267
c_rt_lib0clear(&___nl__im__59);
#line 267
//clear ___nl__int__60;
#line 267
//clear ___nl__int__61;
#line 267
//clear ___nl__int__62;
#line 267
c_rt_lib0clear(&___nl__string__63);
#line 267
c_rt_lib0clear(&___nl__string__64);
#line 267
c_rt_lib0clear(&___nl__string__65);
#line 267
c_rt_lib0clear(&___nl__im__66);
#line 267
//clear ___nl__int__67;
#line 267
//clear ___nl__int__68;
#line 267
//clear ___nl__int__69;
#line 267
c_rt_lib0clear(&___nl__im__70);
#line 267
c_rt_lib0clear(&___nl__im__71);
#line 267
//clear ___nl__int__72;
#line 267
//clear ___nl__int__73;
#line 267
//clear ___nl__int__74;
#line 267
//clear ___nl__int__75;
#line 267
//clear ___nl__bool__76;
#line 267
//clear ___nl__int__77;
#line 267
c_rt_lib0clear(&___nl__im__78);
#line 267
c_rt_lib0clear(&___nl__im__79);
#line 267
//clear ___nl__int__80;
#line 267
//clear ___nl__int__81;
#line 267
c_rt_lib0clear(&___nl__im__82);
#line 267
c_rt_lib0clear(&___nl__im__83);
#line 267
c_rt_lib0clear(&___nl__im__84);
#line 267
//clear ___nl__int__85;
#line 267
c_rt_lib0clear(&___nl__string__86);
#line 267
c_rt_lib0clear(&___nl__string__87);
#line 267
c_rt_lib0clear(&___nl__string__88);
#line 267
c_rt_lib0clear(&___nl__im__89);
#line 267
c_rt_lib0clear(&___nl__im__90);
#line 267
c_rt_lib0clear(&___nl__im__91);
#line 267
//clear ___nl__int__92;
#line 267
//clear ___nl__int__93;
#line 267
//clear ___nl__int__94;
#line 267
//clear ___nl__int__95;
#line 267
//clear ___nl__int__96;
#line 267
c_rt_lib0clear(&___nl__im__97);
#line 267
c_rt_lib0clear(&___nl__im__98);
#line 267
c_rt_lib0clear(&___nl__im__99);
#line 267
c_rt_lib0clear(&___nl__im__100);
#line 267
c_rt_lib0clear(&___nl__im__101);
#line 267
c_rt_lib0clear(&___nl__im__102);
#line 267
//clear ___nl__bool__103;
#line 267
c_rt_lib0clear(&___nl__im__104);
#line 267
c_rt_lib0clear(&___nl__im__105);
#line 267
//clear ___nl__int__106;
#line 267
//clear ___nl__int__107;
#line 267
//clear ___nl__int__108;
#line 267
//clear ___nl__int__109;
#line 267
//clear ___nl__int__110;
#line 267
//clear ___nl__int__111;
#line 267
c_rt_lib0clear(&___nl__im__112);
#line 267
//clear ___nl__bool__113;
#line 267
//clear ___nl__bool__114;
#line 267
//clear ___nl__int__115;
#line 267
//clear ___nl__int__116;
#line 267
//clear ___nl__int__117;
#line 267
//clear ___nl__int__118;
#line 267
c_rt_lib0clear(&___nl__im__119);
#line 267
//clear ___nl__bool__120;
#line 267
//clear ___nl__bool__121;
#line 267
//clear ___nl__int__122;
#line 267
//clear ___nl__int__123;
#line 267
c_rt_lib0clear(&___nl__im__124);
#line 267
c_rt_lib0clear(&___nl__im__125);
#line 267
c_rt_lib0clear(&___nl__im__126);
#line 267
c_rt_lib0clear(&___nl__im__127);
#line 267
c_rt_lib0clear(&___nl__im__128);
#line 267
//clear ___nl__int__129;
#line 267
c_rt_lib0clear(&___nl__string__130);
#line 267
c_rt_lib0clear(&___nl__string__131);
#line 267
c_rt_lib0clear(&___nl__string__132);
#line 267
c_rt_lib0clear(&___nl__im__133);
#line 267
//clear ___nl__int__134;
#line 267
c_rt_lib0clear(&___nl__im__135);
#line 267
c_rt_lib0clear(&___nl__im__136);
#line 267
//clear ___nl__int__137;
#line 267
//clear ___nl__int__138;
#line 267
c_rt_lib0clear(&___nl__im__139);
#line 267
c_rt_lib0clear(&___nl__im__140);
#line 267
//clear ___nl__int__142;
#line 267
c_rt_lib0clear(&___nl__im__143);
#line 267
c_rt_lib0clear(&___nl__im__144);
#line 267
//clear ___nl__int__145;
#line 267
//clear ___nl__int__146;
#line 267
return ___nl__int__141;
#line 268
goto label_3;
#line 268
label_8:
#line 269
c_rt_lib0move(&___nl__im__147,___get_global_const(439));
#line 269
c_rt_lib0copy(&___nl__im__148, ___nl__im__147);
#line 269
c_rt_lib0delete(wprinter_priv0state_print(___ref___im__0, ___nl__im__148));
#line 269
c_rt_lib0clear(&___nl__im__147);
#line 269
c_rt_lib0clear(&___nl__im__148);
#line 270
___nl__int__151 = 1;
#line 270
___nl__int__150 = ___nl__int__2 + ___nl__int__151;
#line 270
//clear ___nl__int__151;
#line 270
___nl__int__149 = ___nl__int__150;
#line 270
c_rt_lib0clear(&___nl__im__1);
#line 270
//clear ___nl__int__2;
#line 270
//clear ___nl__int__3;
#line 270
//clear ___nl__bool__4;
#line 270
//clear ___nl__int__5;
#line 270
//clear ___nl__int__6;
#line 270
c_rt_lib0clear(&___nl__im__7);
#line 270
//clear ___nl__int__8;
#line 270
c_rt_lib0clear(&___nl__im__9);
#line 270
//clear ___nl__int__10;
#line 270
c_rt_lib0clear(&___nl__im__11);
#line 270
//clear ___nl__int__12;
#line 270
c_rt_lib0clear(&___nl__im__13);
#line 270
//clear ___nl__bool__14;
#line 270
c_rt_lib0clear(&___nl__im__15);
#line 270
c_rt_lib0clear(&___nl__im__16);
#line 270
c_rt_lib0clear(&___nl__im__17);
#line 270
//clear ___nl__bool__18;
#line 270
//clear ___nl__bool__19;
#line 270
c_rt_lib0clear(&___nl__im__20);
#line 270
c_rt_lib0clear(&___nl__string__21);
#line 270
c_rt_lib0clear(&___nl__string__22);
#line 270
c_rt_lib0clear(&___nl__im__23);
#line 270
c_rt_lib0clear(&___nl__string__24);
#line 270
c_rt_lib0clear(&___nl__string__25);
#line 270
c_rt_lib0clear(&___nl__im__26);
#line 270
//clear ___nl__int__27;
#line 270
//clear ___nl__int__28;
#line 270
//clear ___nl__int__29;
#line 270
c_rt_lib0clear(&___nl__im__30);
#line 270
//clear ___nl__bool__31;
#line 270
//clear ___nl__int__32;
#line 270
//clear ___nl__int__33;
#line 270
//clear ___nl__int__34;
#line 270
c_rt_lib0clear(&___nl__im__35);
#line 270
c_rt_lib0clear(&___nl__im__36);
#line 270
c_rt_lib0clear(&___nl__im__37);
#line 270
//clear ___nl__int__38;
#line 270
c_rt_lib0clear(&___nl__string__39);
#line 270
c_rt_lib0clear(&___nl__string__40);
#line 270
c_rt_lib0clear(&___nl__string__41);
#line 270
c_rt_lib0clear(&___nl__im__42);
#line 270
c_rt_lib0clear(&___nl__im__43);
#line 270
//clear ___nl__int__44;
#line 270
//clear ___nl__int__45;
#line 270
//clear ___nl__int__46;
#line 270
c_rt_lib0clear(&___nl__im__47);
#line 270
//clear ___nl__int__48;
#line 270
//clear ___nl__int__49;
#line 270
c_rt_lib0clear(&___nl__im__50);
#line 270
c_rt_lib0clear(&___nl__im__51);
#line 270
c_rt_lib0clear(&___nl__im__52);
#line 270
c_rt_lib0clear(&___nl__im__53);
#line 270
c_rt_lib0clear(&___nl__im__54);
#line 270
c_rt_lib0clear(&___nl__im__55);
#line 270
c_rt_lib0clear(&___nl__string__56);
#line 270
c_rt_lib0clear(&___nl__string__57);
#line 270
c_rt_lib0clear(&___nl__string__58);
#line 270
c_rt_lib0clear(&___nl__im__59);
#line 270
//clear ___nl__int__60;
#line 270
//clear ___nl__int__61;
#line 270
//clear ___nl__int__62;
#line 270
c_rt_lib0clear(&___nl__string__63);
#line 270
c_rt_lib0clear(&___nl__string__64);
#line 270
c_rt_lib0clear(&___nl__string__65);
#line 270
c_rt_lib0clear(&___nl__im__66);
#line 270
//clear ___nl__int__67;
#line 270
//clear ___nl__int__68;
#line 270
//clear ___nl__int__69;
#line 270
c_rt_lib0clear(&___nl__im__70);
#line 270
c_rt_lib0clear(&___nl__im__71);
#line 270
//clear ___nl__int__72;
#line 270
//clear ___nl__int__73;
#line 270
//clear ___nl__int__74;
#line 270
//clear ___nl__int__75;
#line 270
//clear ___nl__bool__76;
#line 270
//clear ___nl__int__77;
#line 270
c_rt_lib0clear(&___nl__im__78);
#line 270
c_rt_lib0clear(&___nl__im__79);
#line 270
//clear ___nl__int__80;
#line 270
//clear ___nl__int__81;
#line 270
c_rt_lib0clear(&___nl__im__82);
#line 270
c_rt_lib0clear(&___nl__im__83);
#line 270
c_rt_lib0clear(&___nl__im__84);
#line 270
//clear ___nl__int__85;
#line 270
c_rt_lib0clear(&___nl__string__86);
#line 270
c_rt_lib0clear(&___nl__string__87);
#line 270
c_rt_lib0clear(&___nl__string__88);
#line 270
c_rt_lib0clear(&___nl__im__89);
#line 270
c_rt_lib0clear(&___nl__im__90);
#line 270
c_rt_lib0clear(&___nl__im__91);
#line 270
//clear ___nl__int__92;
#line 270
//clear ___nl__int__93;
#line 270
//clear ___nl__int__94;
#line 270
//clear ___nl__int__95;
#line 270
//clear ___nl__int__96;
#line 270
c_rt_lib0clear(&___nl__im__97);
#line 270
c_rt_lib0clear(&___nl__im__98);
#line 270
c_rt_lib0clear(&___nl__im__99);
#line 270
c_rt_lib0clear(&___nl__im__100);
#line 270
c_rt_lib0clear(&___nl__im__101);
#line 270
c_rt_lib0clear(&___nl__im__102);
#line 270
//clear ___nl__bool__103;
#line 270
c_rt_lib0clear(&___nl__im__104);
#line 270
c_rt_lib0clear(&___nl__im__105);
#line 270
//clear ___nl__int__106;
#line 270
//clear ___nl__int__107;
#line 270
//clear ___nl__int__108;
#line 270
//clear ___nl__int__109;
#line 270
//clear ___nl__int__110;
#line 270
//clear ___nl__int__111;
#line 270
c_rt_lib0clear(&___nl__im__112);
#line 270
//clear ___nl__bool__113;
#line 270
//clear ___nl__bool__114;
#line 270
//clear ___nl__int__115;
#line 270
//clear ___nl__int__116;
#line 270
//clear ___nl__int__117;
#line 270
//clear ___nl__int__118;
#line 270
c_rt_lib0clear(&___nl__im__119);
#line 270
//clear ___nl__bool__120;
#line 270
//clear ___nl__bool__121;
#line 270
//clear ___nl__int__122;
#line 270
//clear ___nl__int__123;
#line 270
c_rt_lib0clear(&___nl__im__124);
#line 270
c_rt_lib0clear(&___nl__im__125);
#line 270
c_rt_lib0clear(&___nl__im__126);
#line 270
c_rt_lib0clear(&___nl__im__127);
#line 270
c_rt_lib0clear(&___nl__im__128);
#line 270
//clear ___nl__int__129;
#line 270
c_rt_lib0clear(&___nl__string__130);
#line 270
c_rt_lib0clear(&___nl__string__131);
#line 270
c_rt_lib0clear(&___nl__string__132);
#line 270
c_rt_lib0clear(&___nl__im__133);
#line 270
//clear ___nl__int__134;
#line 270
c_rt_lib0clear(&___nl__im__135);
#line 270
c_rt_lib0clear(&___nl__im__136);
#line 270
//clear ___nl__int__137;
#line 270
//clear ___nl__int__138;
#line 270
c_rt_lib0clear(&___nl__im__139);
#line 270
c_rt_lib0clear(&___nl__im__140);
#line 270
//clear ___nl__int__141;
#line 270
//clear ___nl__int__142;
#line 270
c_rt_lib0clear(&___nl__im__143);
#line 270
c_rt_lib0clear(&___nl__im__144);
#line 270
//clear ___nl__int__145;
#line 270
//clear ___nl__int__146;
#line 270
c_rt_lib0clear(&___nl__im__147);
#line 270
c_rt_lib0clear(&___nl__im__148);
#line 270
//clear ___nl__int__150;
#line 270
//clear ___nl__int__151;
#line 270
return ___nl__int__149;
#line 271
goto label_3;
#line 271
label_9:
#line 271
c_rt_lib0move(&___nl__im__153, c_rt_lib0priv_as(___nl__im__13, ___get_global_const(1536)));
#line 271
c_rt_lib0copy(&___nl__im__152, ___nl__im__153);
#line 272
c_rt_lib0copy(&___nl__im__156, ___nl__im__152);
#line 272
___nl__int__157 = ___nl__int__2;
#line 272
___nl__int__158 = ___nl__int__3;
#line 272
___nl__int__155 = wprinter_priv0print_str_arr(___ref___im__0, ___nl__im__156, ___nl__int__157, ___nl__int__158);
#line 272
c_rt_lib0clear(&___nl__im__156);
#line 272
//clear ___nl__int__157;
#line 272
//clear ___nl__int__158;
#line 272
___nl__int__154 = ___nl__int__155;
#line 272
c_rt_lib0clear(&___nl__im__1);
#line 272
//clear ___nl__int__2;
#line 272
//clear ___nl__int__3;
#line 272
//clear ___nl__bool__4;
#line 272
//clear ___nl__int__5;
#line 272
//clear ___nl__int__6;
#line 272
c_rt_lib0clear(&___nl__im__7);
#line 272
//clear ___nl__int__8;
#line 272
c_rt_lib0clear(&___nl__im__9);
#line 272
//clear ___nl__int__10;
#line 272
c_rt_lib0clear(&___nl__im__11);
#line 272
//clear ___nl__int__12;
#line 272
c_rt_lib0clear(&___nl__im__13);
#line 272
//clear ___nl__bool__14;
#line 272
c_rt_lib0clear(&___nl__im__15);
#line 272
c_rt_lib0clear(&___nl__im__16);
#line 272
c_rt_lib0clear(&___nl__im__17);
#line 272
//clear ___nl__bool__18;
#line 272
//clear ___nl__bool__19;
#line 272
c_rt_lib0clear(&___nl__im__20);
#line 272
c_rt_lib0clear(&___nl__string__21);
#line 272
c_rt_lib0clear(&___nl__string__22);
#line 272
c_rt_lib0clear(&___nl__im__23);
#line 272
c_rt_lib0clear(&___nl__string__24);
#line 272
c_rt_lib0clear(&___nl__string__25);
#line 272
c_rt_lib0clear(&___nl__im__26);
#line 272
//clear ___nl__int__27;
#line 272
//clear ___nl__int__28;
#line 272
//clear ___nl__int__29;
#line 272
c_rt_lib0clear(&___nl__im__30);
#line 272
//clear ___nl__bool__31;
#line 272
//clear ___nl__int__32;
#line 272
//clear ___nl__int__33;
#line 272
//clear ___nl__int__34;
#line 272
c_rt_lib0clear(&___nl__im__35);
#line 272
c_rt_lib0clear(&___nl__im__36);
#line 272
c_rt_lib0clear(&___nl__im__37);
#line 272
//clear ___nl__int__38;
#line 272
c_rt_lib0clear(&___nl__string__39);
#line 272
c_rt_lib0clear(&___nl__string__40);
#line 272
c_rt_lib0clear(&___nl__string__41);
#line 272
c_rt_lib0clear(&___nl__im__42);
#line 272
c_rt_lib0clear(&___nl__im__43);
#line 272
//clear ___nl__int__44;
#line 272
//clear ___nl__int__45;
#line 272
//clear ___nl__int__46;
#line 272
c_rt_lib0clear(&___nl__im__47);
#line 272
//clear ___nl__int__48;
#line 272
//clear ___nl__int__49;
#line 272
c_rt_lib0clear(&___nl__im__50);
#line 272
c_rt_lib0clear(&___nl__im__51);
#line 272
c_rt_lib0clear(&___nl__im__52);
#line 272
c_rt_lib0clear(&___nl__im__53);
#line 272
c_rt_lib0clear(&___nl__im__54);
#line 272
c_rt_lib0clear(&___nl__im__55);
#line 272
c_rt_lib0clear(&___nl__string__56);
#line 272
c_rt_lib0clear(&___nl__string__57);
#line 272
c_rt_lib0clear(&___nl__string__58);
#line 272
c_rt_lib0clear(&___nl__im__59);
#line 272
//clear ___nl__int__60;
#line 272
//clear ___nl__int__61;
#line 272
//clear ___nl__int__62;
#line 272
c_rt_lib0clear(&___nl__string__63);
#line 272
c_rt_lib0clear(&___nl__string__64);
#line 272
c_rt_lib0clear(&___nl__string__65);
#line 272
c_rt_lib0clear(&___nl__im__66);
#line 272
//clear ___nl__int__67;
#line 272
//clear ___nl__int__68;
#line 272
//clear ___nl__int__69;
#line 272
c_rt_lib0clear(&___nl__im__70);
#line 272
c_rt_lib0clear(&___nl__im__71);
#line 272
//clear ___nl__int__72;
#line 272
//clear ___nl__int__73;
#line 272
//clear ___nl__int__74;
#line 272
//clear ___nl__int__75;
#line 272
//clear ___nl__bool__76;
#line 272
//clear ___nl__int__77;
#line 272
c_rt_lib0clear(&___nl__im__78);
#line 272
c_rt_lib0clear(&___nl__im__79);
#line 272
//clear ___nl__int__80;
#line 272
//clear ___nl__int__81;
#line 272
c_rt_lib0clear(&___nl__im__82);
#line 272
c_rt_lib0clear(&___nl__im__83);
#line 272
c_rt_lib0clear(&___nl__im__84);
#line 272
//clear ___nl__int__85;
#line 272
c_rt_lib0clear(&___nl__string__86);
#line 272
c_rt_lib0clear(&___nl__string__87);
#line 272
c_rt_lib0clear(&___nl__string__88);
#line 272
c_rt_lib0clear(&___nl__im__89);
#line 272
c_rt_lib0clear(&___nl__im__90);
#line 272
c_rt_lib0clear(&___nl__im__91);
#line 272
//clear ___nl__int__92;
#line 272
//clear ___nl__int__93;
#line 272
//clear ___nl__int__94;
#line 272
//clear ___nl__int__95;
#line 272
//clear ___nl__int__96;
#line 272
c_rt_lib0clear(&___nl__im__97);
#line 272
c_rt_lib0clear(&___nl__im__98);
#line 272
c_rt_lib0clear(&___nl__im__99);
#line 272
c_rt_lib0clear(&___nl__im__100);
#line 272
c_rt_lib0clear(&___nl__im__101);
#line 272
c_rt_lib0clear(&___nl__im__102);
#line 272
//clear ___nl__bool__103;
#line 272
c_rt_lib0clear(&___nl__im__104);
#line 272
c_rt_lib0clear(&___nl__im__105);
#line 272
//clear ___nl__int__106;
#line 272
//clear ___nl__int__107;
#line 272
//clear ___nl__int__108;
#line 272
//clear ___nl__int__109;
#line 272
//clear ___nl__int__110;
#line 272
//clear ___nl__int__111;
#line 272
c_rt_lib0clear(&___nl__im__112);
#line 272
//clear ___nl__bool__113;
#line 272
//clear ___nl__bool__114;
#line 272
//clear ___nl__int__115;
#line 272
//clear ___nl__int__116;
#line 272
//clear ___nl__int__117;
#line 272
//clear ___nl__int__118;
#line 272
c_rt_lib0clear(&___nl__im__119);
#line 272
//clear ___nl__bool__120;
#line 272
//clear ___nl__bool__121;
#line 272
//clear ___nl__int__122;
#line 272
//clear ___nl__int__123;
#line 272
c_rt_lib0clear(&___nl__im__124);
#line 272
c_rt_lib0clear(&___nl__im__125);
#line 272
c_rt_lib0clear(&___nl__im__126);
#line 272
c_rt_lib0clear(&___nl__im__127);
#line 272
c_rt_lib0clear(&___nl__im__128);
#line 272
//clear ___nl__int__129;
#line 272
c_rt_lib0clear(&___nl__string__130);
#line 272
c_rt_lib0clear(&___nl__string__131);
#line 272
c_rt_lib0clear(&___nl__string__132);
#line 272
c_rt_lib0clear(&___nl__im__133);
#line 272
//clear ___nl__int__134;
#line 272
c_rt_lib0clear(&___nl__im__135);
#line 272
c_rt_lib0clear(&___nl__im__136);
#line 272
//clear ___nl__int__137;
#line 272
//clear ___nl__int__138;
#line 272
c_rt_lib0clear(&___nl__im__139);
#line 272
c_rt_lib0clear(&___nl__im__140);
#line 272
//clear ___nl__int__141;
#line 272
//clear ___nl__int__142;
#line 272
c_rt_lib0clear(&___nl__im__143);
#line 272
c_rt_lib0clear(&___nl__im__144);
#line 272
//clear ___nl__int__145;
#line 272
//clear ___nl__int__146;
#line 272
c_rt_lib0clear(&___nl__im__147);
#line 272
c_rt_lib0clear(&___nl__im__148);
#line 272
//clear ___nl__int__149;
#line 272
//clear ___nl__int__150;
#line 272
//clear ___nl__int__151;
#line 272
c_rt_lib0clear(&___nl__im__152);
#line 272
c_rt_lib0clear(&___nl__im__153);
#line 272
//clear ___nl__int__155;
#line 272
c_rt_lib0clear(&___nl__im__156);
#line 272
//clear ___nl__int__157;
#line 272
//clear ___nl__int__158;
#line 272
return ___nl__int__154;
#line 273
goto label_3;
#line 273
label_3:
#line 274
___nl__int__159 = ___nl__int__2;
#line 274
c_rt_lib0clear(&___nl__im__1);
#line 274
//clear ___nl__int__2;
#line 274
//clear ___nl__int__3;
#line 274
//clear ___nl__bool__4;
#line 274
//clear ___nl__int__5;
#line 274
//clear ___nl__int__6;
#line 274
c_rt_lib0clear(&___nl__im__7);
#line 274
//clear ___nl__int__8;
#line 274
c_rt_lib0clear(&___nl__im__9);
#line 274
//clear ___nl__int__10;
#line 274
c_rt_lib0clear(&___nl__im__11);
#line 274
//clear ___nl__int__12;
#line 274
c_rt_lib0clear(&___nl__im__13);
#line 274
//clear ___nl__bool__14;
#line 274
c_rt_lib0clear(&___nl__im__15);
#line 274
c_rt_lib0clear(&___nl__im__16);
#line 274
c_rt_lib0clear(&___nl__im__17);
#line 274
//clear ___nl__bool__18;
#line 274
//clear ___nl__bool__19;
#line 274
c_rt_lib0clear(&___nl__im__20);
#line 274
c_rt_lib0clear(&___nl__string__21);
#line 274
c_rt_lib0clear(&___nl__string__22);
#line 274
c_rt_lib0clear(&___nl__im__23);
#line 274
c_rt_lib0clear(&___nl__string__24);
#line 274
c_rt_lib0clear(&___nl__string__25);
#line 274
c_rt_lib0clear(&___nl__im__26);
#line 274
//clear ___nl__int__27;
#line 274
//clear ___nl__int__28;
#line 274
//clear ___nl__int__29;
#line 274
c_rt_lib0clear(&___nl__im__30);
#line 274
//clear ___nl__bool__31;
#line 274
//clear ___nl__int__32;
#line 274
//clear ___nl__int__33;
#line 274
//clear ___nl__int__34;
#line 274
c_rt_lib0clear(&___nl__im__35);
#line 274
c_rt_lib0clear(&___nl__im__36);
#line 274
c_rt_lib0clear(&___nl__im__37);
#line 274
//clear ___nl__int__38;
#line 274
c_rt_lib0clear(&___nl__string__39);
#line 274
c_rt_lib0clear(&___nl__string__40);
#line 274
c_rt_lib0clear(&___nl__string__41);
#line 274
c_rt_lib0clear(&___nl__im__42);
#line 274
c_rt_lib0clear(&___nl__im__43);
#line 274
//clear ___nl__int__44;
#line 274
//clear ___nl__int__45;
#line 274
//clear ___nl__int__46;
#line 274
c_rt_lib0clear(&___nl__im__47);
#line 274
//clear ___nl__int__48;
#line 274
//clear ___nl__int__49;
#line 274
c_rt_lib0clear(&___nl__im__50);
#line 274
c_rt_lib0clear(&___nl__im__51);
#line 274
c_rt_lib0clear(&___nl__im__52);
#line 274
c_rt_lib0clear(&___nl__im__53);
#line 274
c_rt_lib0clear(&___nl__im__54);
#line 274
c_rt_lib0clear(&___nl__im__55);
#line 274
c_rt_lib0clear(&___nl__string__56);
#line 274
c_rt_lib0clear(&___nl__string__57);
#line 274
c_rt_lib0clear(&___nl__string__58);
#line 274
c_rt_lib0clear(&___nl__im__59);
#line 274
//clear ___nl__int__60;
#line 274
//clear ___nl__int__61;
#line 274
//clear ___nl__int__62;
#line 274
c_rt_lib0clear(&___nl__string__63);
#line 274
c_rt_lib0clear(&___nl__string__64);
#line 274
c_rt_lib0clear(&___nl__string__65);
#line 274
c_rt_lib0clear(&___nl__im__66);
#line 274
//clear ___nl__int__67;
#line 274
//clear ___nl__int__68;
#line 274
//clear ___nl__int__69;
#line 274
c_rt_lib0clear(&___nl__im__70);
#line 274
c_rt_lib0clear(&___nl__im__71);
#line 274
//clear ___nl__int__72;
#line 274
//clear ___nl__int__73;
#line 274
//clear ___nl__int__74;
#line 274
//clear ___nl__int__75;
#line 274
//clear ___nl__bool__76;
#line 274
//clear ___nl__int__77;
#line 274
c_rt_lib0clear(&___nl__im__78);
#line 274
c_rt_lib0clear(&___nl__im__79);
#line 274
//clear ___nl__int__80;
#line 274
//clear ___nl__int__81;
#line 274
c_rt_lib0clear(&___nl__im__82);
#line 274
c_rt_lib0clear(&___nl__im__83);
#line 274
c_rt_lib0clear(&___nl__im__84);
#line 274
//clear ___nl__int__85;
#line 274
c_rt_lib0clear(&___nl__string__86);
#line 274
c_rt_lib0clear(&___nl__string__87);
#line 274
c_rt_lib0clear(&___nl__string__88);
#line 274
c_rt_lib0clear(&___nl__im__89);
#line 274
c_rt_lib0clear(&___nl__im__90);
#line 274
c_rt_lib0clear(&___nl__im__91);
#line 274
//clear ___nl__int__92;
#line 274
//clear ___nl__int__93;
#line 274
//clear ___nl__int__94;
#line 274
//clear ___nl__int__95;
#line 274
//clear ___nl__int__96;
#line 274
c_rt_lib0clear(&___nl__im__97);
#line 274
c_rt_lib0clear(&___nl__im__98);
#line 274
c_rt_lib0clear(&___nl__im__99);
#line 274
c_rt_lib0clear(&___nl__im__100);
#line 274
c_rt_lib0clear(&___nl__im__101);
#line 274
c_rt_lib0clear(&___nl__im__102);
#line 274
//clear ___nl__bool__103;
#line 274
c_rt_lib0clear(&___nl__im__104);
#line 274
c_rt_lib0clear(&___nl__im__105);
#line 274
//clear ___nl__int__106;
#line 274
//clear ___nl__int__107;
#line 274
//clear ___nl__int__108;
#line 274
//clear ___nl__int__109;
#line 274
//clear ___nl__int__110;
#line 274
//clear ___nl__int__111;
#line 274
c_rt_lib0clear(&___nl__im__112);
#line 274
//clear ___nl__bool__113;
#line 274
//clear ___nl__bool__114;
#line 274
//clear ___nl__int__115;
#line 274
//clear ___nl__int__116;
#line 274
//clear ___nl__int__117;
#line 274
//clear ___nl__int__118;
#line 274
c_rt_lib0clear(&___nl__im__119);
#line 274
//clear ___nl__bool__120;
#line 274
//clear ___nl__bool__121;
#line 274
//clear ___nl__int__122;
#line 274
//clear ___nl__int__123;
#line 274
c_rt_lib0clear(&___nl__im__124);
#line 274
c_rt_lib0clear(&___nl__im__125);
#line 274
c_rt_lib0clear(&___nl__im__126);
#line 274
c_rt_lib0clear(&___nl__im__127);
#line 274
c_rt_lib0clear(&___nl__im__128);
#line 274
//clear ___nl__int__129;
#line 274
c_rt_lib0clear(&___nl__string__130);
#line 274
c_rt_lib0clear(&___nl__string__131);
#line 274
c_rt_lib0clear(&___nl__string__132);
#line 274
c_rt_lib0clear(&___nl__im__133);
#line 274
//clear ___nl__int__134;
#line 274
c_rt_lib0clear(&___nl__im__135);
#line 274
c_rt_lib0clear(&___nl__im__136);
#line 274
//clear ___nl__int__137;
#line 274
//clear ___nl__int__138;
#line 274
c_rt_lib0clear(&___nl__im__139);
#line 274
c_rt_lib0clear(&___nl__im__140);
#line 274
//clear ___nl__int__141;
#line 274
//clear ___nl__int__142;
#line 274
c_rt_lib0clear(&___nl__im__143);
#line 274
c_rt_lib0clear(&___nl__im__144);
#line 274
//clear ___nl__int__145;
#line 274
//clear ___nl__int__146;
#line 274
c_rt_lib0clear(&___nl__im__147);
#line 274
c_rt_lib0clear(&___nl__im__148);
#line 274
//clear ___nl__int__149;
#line 274
//clear ___nl__int__150;
#line 274
//clear ___nl__int__151;
#line 274
c_rt_lib0clear(&___nl__im__152);
#line 274
c_rt_lib0clear(&___nl__im__153);
#line 274
//clear ___nl__int__154;
#line 274
//clear ___nl__int__155;
#line 274
c_rt_lib0clear(&___nl__im__156);
#line 274
//clear ___nl__int__157;
#line 274
//clear ___nl__int__158;
#line 274
return ___nl__int__159;
#line 274
c_rt_lib0clear(&___nl__im__1);
#line 274
//clear ___nl__int__2;
#line 274
//clear ___nl__int__3;
#line 274
//clear ___nl__bool__4;
#line 274
//clear ___nl__int__5;
#line 274
//clear ___nl__int__6;
#line 274
c_rt_lib0clear(&___nl__im__7);
#line 274
//clear ___nl__int__8;
#line 274
c_rt_lib0clear(&___nl__im__9);
#line 274
//clear ___nl__int__10;
#line 274
c_rt_lib0clear(&___nl__im__11);
#line 274
//clear ___nl__int__12;
#line 274
c_rt_lib0clear(&___nl__im__13);
#line 274
//clear ___nl__bool__14;
#line 274
c_rt_lib0clear(&___nl__im__15);
#line 274
c_rt_lib0clear(&___nl__im__16);
#line 274
c_rt_lib0clear(&___nl__im__17);
#line 274
//clear ___nl__bool__18;
#line 274
//clear ___nl__bool__19;
#line 274
c_rt_lib0clear(&___nl__im__20);
#line 274
c_rt_lib0clear(&___nl__string__21);
#line 274
c_rt_lib0clear(&___nl__string__22);
#line 274
c_rt_lib0clear(&___nl__im__23);
#line 274
c_rt_lib0clear(&___nl__string__24);
#line 274
c_rt_lib0clear(&___nl__string__25);
#line 274
c_rt_lib0clear(&___nl__im__26);
#line 274
//clear ___nl__int__27;
#line 274
//clear ___nl__int__28;
#line 274
//clear ___nl__int__29;
#line 274
c_rt_lib0clear(&___nl__im__30);
#line 274
//clear ___nl__bool__31;
#line 274
//clear ___nl__int__32;
#line 274
//clear ___nl__int__33;
#line 274
//clear ___nl__int__34;
#line 274
c_rt_lib0clear(&___nl__im__35);
#line 274
c_rt_lib0clear(&___nl__im__36);
#line 274
c_rt_lib0clear(&___nl__im__37);
#line 274
//clear ___nl__int__38;
#line 274
c_rt_lib0clear(&___nl__string__39);
#line 274
c_rt_lib0clear(&___nl__string__40);
#line 274
c_rt_lib0clear(&___nl__string__41);
#line 274
c_rt_lib0clear(&___nl__im__42);
#line 274
c_rt_lib0clear(&___nl__im__43);
#line 274
//clear ___nl__int__44;
#line 274
//clear ___nl__int__45;
#line 274
//clear ___nl__int__46;
#line 274
c_rt_lib0clear(&___nl__im__47);
#line 274
//clear ___nl__int__48;
#line 274
//clear ___nl__int__49;
#line 274
c_rt_lib0clear(&___nl__im__50);
#line 274
c_rt_lib0clear(&___nl__im__51);
#line 274
c_rt_lib0clear(&___nl__im__52);
#line 274
c_rt_lib0clear(&___nl__im__53);
#line 274
c_rt_lib0clear(&___nl__im__54);
#line 274
c_rt_lib0clear(&___nl__im__55);
#line 274
c_rt_lib0clear(&___nl__string__56);
#line 274
c_rt_lib0clear(&___nl__string__57);
#line 274
c_rt_lib0clear(&___nl__string__58);
#line 274
c_rt_lib0clear(&___nl__im__59);
#line 274
//clear ___nl__int__60;
#line 274
//clear ___nl__int__61;
#line 274
//clear ___nl__int__62;
#line 274
c_rt_lib0clear(&___nl__string__63);
#line 274
c_rt_lib0clear(&___nl__string__64);
#line 274
c_rt_lib0clear(&___nl__string__65);
#line 274
c_rt_lib0clear(&___nl__im__66);
#line 274
//clear ___nl__int__67;
#line 274
//clear ___nl__int__68;
#line 274
//clear ___nl__int__69;
#line 274
c_rt_lib0clear(&___nl__im__70);
#line 274
c_rt_lib0clear(&___nl__im__71);
#line 274
//clear ___nl__int__72;
#line 274
//clear ___nl__int__73;
#line 274
//clear ___nl__int__74;
#line 274
//clear ___nl__int__75;
#line 274
//clear ___nl__bool__76;
#line 274
//clear ___nl__int__77;
#line 274
c_rt_lib0clear(&___nl__im__78);
#line 274
c_rt_lib0clear(&___nl__im__79);
#line 274
//clear ___nl__int__80;
#line 274
//clear ___nl__int__81;
#line 274
c_rt_lib0clear(&___nl__im__82);
#line 274
c_rt_lib0clear(&___nl__im__83);
#line 274
c_rt_lib0clear(&___nl__im__84);
#line 274
//clear ___nl__int__85;
#line 274
c_rt_lib0clear(&___nl__string__86);
#line 274
c_rt_lib0clear(&___nl__string__87);
#line 274
c_rt_lib0clear(&___nl__string__88);
#line 274
c_rt_lib0clear(&___nl__im__89);
#line 274
c_rt_lib0clear(&___nl__im__90);
#line 274
c_rt_lib0clear(&___nl__im__91);
#line 274
//clear ___nl__int__92;
#line 274
//clear ___nl__int__93;
#line 274
//clear ___nl__int__94;
#line 274
//clear ___nl__int__95;
#line 274
//clear ___nl__int__96;
#line 274
c_rt_lib0clear(&___nl__im__97);
#line 274
c_rt_lib0clear(&___nl__im__98);
#line 274
c_rt_lib0clear(&___nl__im__99);
#line 274
c_rt_lib0clear(&___nl__im__100);
#line 274
c_rt_lib0clear(&___nl__im__101);
#line 274
c_rt_lib0clear(&___nl__im__102);
#line 274
//clear ___nl__bool__103;
#line 274
c_rt_lib0clear(&___nl__im__104);
#line 274
c_rt_lib0clear(&___nl__im__105);
#line 274
//clear ___nl__int__106;
#line 274
//clear ___nl__int__107;
#line 274
//clear ___nl__int__108;
#line 274
//clear ___nl__int__109;
#line 274
//clear ___nl__int__110;
#line 274
//clear ___nl__int__111;
#line 274
c_rt_lib0clear(&___nl__im__112);
#line 274
//clear ___nl__bool__113;
#line 274
//clear ___nl__bool__114;
#line 274
//clear ___nl__int__115;
#line 274
//clear ___nl__int__116;
#line 274
//clear ___nl__int__117;
#line 274
//clear ___nl__int__118;
#line 274
c_rt_lib0clear(&___nl__im__119);
#line 274
//clear ___nl__bool__120;
#line 274
//clear ___nl__bool__121;
#line 274
//clear ___nl__int__122;
#line 274
//clear ___nl__int__123;
#line 274
c_rt_lib0clear(&___nl__im__124);
#line 274
c_rt_lib0clear(&___nl__im__125);
#line 274
c_rt_lib0clear(&___nl__im__126);
#line 274
c_rt_lib0clear(&___nl__im__127);
#line 274
c_rt_lib0clear(&___nl__im__128);
#line 274
//clear ___nl__int__129;
#line 274
c_rt_lib0clear(&___nl__string__130);
#line 274
c_rt_lib0clear(&___nl__string__131);
#line 274
c_rt_lib0clear(&___nl__string__132);
#line 274
c_rt_lib0clear(&___nl__im__133);
#line 274
//clear ___nl__int__134;
#line 274
c_rt_lib0clear(&___nl__im__135);
#line 274
c_rt_lib0clear(&___nl__im__136);
#line 274
//clear ___nl__int__137;
#line 274
//clear ___nl__int__138;
#line 274
c_rt_lib0clear(&___nl__im__139);
#line 274
c_rt_lib0clear(&___nl__im__140);
#line 274
//clear ___nl__int__141;
#line 274
//clear ___nl__int__142;
#line 274
c_rt_lib0clear(&___nl__im__143);
#line 274
c_rt_lib0clear(&___nl__im__144);
#line 274
//clear ___nl__int__145;
#line 274
//clear ___nl__int__146;
#line 274
c_rt_lib0clear(&___nl__im__147);
#line 274
c_rt_lib0clear(&___nl__im__148);
#line 274
//clear ___nl__int__149;
#line 274
//clear ___nl__int__150;
#line 274
//clear ___nl__int__151;
#line 274
c_rt_lib0clear(&___nl__im__152);
#line 274
c_rt_lib0clear(&___nl__im__153);
#line 274
//clear ___nl__int__154;
#line 274
//clear ___nl__int__155;
#line 274
c_rt_lib0clear(&___nl__im__156);
#line 274
//clear ___nl__int__157;
#line 274
//clear ___nl__int__158;
#line 274
//clear ___nl__int__159;
#line 274
return 0;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void wprinter_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT wprinter_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT wprinter_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
