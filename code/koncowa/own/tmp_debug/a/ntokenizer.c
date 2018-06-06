
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "ntokenizer.h"
#include "ov.h"
#include "nast.h"
#include "ptd.h"
#include "array.h"
#include "hash.h"
#include "string.h"
#include "enum.h"
#include "c_std_lib.h"
#include "boolean_t.h"
#include "singleton.h"
#include "ntokenizer.h"
#line 1 "ntokenizer.nl"

static ImmT *__const__f = NULL;
void ntokenizer_priv0__const__init();
ImmT ntokenizer_priv0__const__sim(int __nr);
ImmT ntokenizer_priv0__const__sing(int __nr);

ImmT  ntokenizer_priv0get_keywords();
ImmT  ntokenizer_priv0get_char_oper();
ImmT  ntokenizer_priv0get_lett_oper();
ImmT  ntokenizer_priv0get_char(ntokenizer0state_t0type* ___ref___im__0);
ImmT  ntokenizer_priv0get_next_char(ntokenizer0state_t0type* ___ref___im__0);
ImmT  ntokenizer_priv0eat_ws(ntokenizer0state_t0type* ___ref___im__0);
bool ntokenizer_priv0is_token(ntokenizer0state_t0type* ___ref___im__0);
bool ntokenizer_priv0is_hex_number(ImmT  ___nl__im__0);
ImmT  ntokenizer_priv0try_get_operator(ntokenizer0state_t0type ___nl__im__0,ImmT * ___ref___im__1);
ImmT  ntokenizer_priv0get_next_token(ntokenizer0state_t0type* ___ref___im__0);


ImmT  ntokenizer_priv0get_keywords() {
ntokenizer_priv0__const__init();
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
#line 19
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 20
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 21
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 22
c_rt_lib0move(&___nl__im__6,___get_global_const(37));
#line 23
c_rt_lib0move(&___nl__im__7,___get_global_const(37));
#line 24
c_rt_lib0move(&___nl__im__8,___get_global_const(37));
#line 25
c_rt_lib0move(&___nl__im__9,___get_global_const(37));
#line 26
c_rt_lib0move(&___nl__im__10,___get_global_const(37));
#line 27
c_rt_lib0move(&___nl__im__11,___get_global_const(37));
#line 28
c_rt_lib0move(&___nl__im__12,___get_global_const(37));
#line 29
c_rt_lib0move(&___nl__im__13,___get_global_const(37));
#line 30
c_rt_lib0move(&___nl__im__14,___get_global_const(37));
#line 31
c_rt_lib0move(&___nl__im__15,___get_global_const(37));
#line 32
c_rt_lib0move(&___nl__im__16,___get_global_const(37));
#line 33
c_rt_lib0move(&___nl__im__17,___get_global_const(37));
#line 34
c_rt_lib0move(&___nl__im__18,___get_global_const(37));
#line 35
c_rt_lib0move(&___nl__im__19,___get_global_const(37));
#line 36
c_rt_lib0move(&___nl__im__20,___get_global_const(37));
#line 37
c_rt_lib0move(&___nl__im__21,___get_global_const(37));
#line 38
c_rt_lib0move(&___nl__im__22,___get_global_const(37));
#line 39
c_rt_lib0move(&___nl__im__23,___get_global_const(37));
#line 40
c_rt_lib0move(&___nl__im__24,___get_global_const(37));
#line 41
c_rt_lib0move(&___nl__im__25,___get_global_const(37));
#line 42
c_rt_lib0move(&___nl__im__26,___get_global_const(37));
#line 42
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(24, ___get_global_const(1134), ___nl__im__3, ___get_global_const(1016), ___nl__im__4, ___get_global_const(1017), ___nl__im__5, ___get_global_const(1015), ___nl__im__6, ___get_global_const(1018), ___nl__im__7, ___get_global_const(175), ___nl__im__8, ___get_global_const(1019), ___nl__im__9, ___get_global_const(1014), ___nl__im__10, ___get_global_const(1029), ___nl__im__11, ___get_global_const(1030), ___nl__im__12, ___get_global_const(474), ___nl__im__13, ___get_global_const(689), ___nl__im__14, ___get_global_const(40), ___nl__im__15, ___get_global_const(1024), ___nl__im__16, ___get_global_const(1156), ___nl__im__17, ___get_global_const(1130), ___nl__im__18, ___get_global_const(540), ___nl__im__19, ___get_global_const(541), ___nl__im__20, ___get_global_const(1023), ___nl__im__21, ___get_global_const(1022), ___nl__im__22, ___get_global_const(119), ___nl__im__23, ___get_global_const(1026), ___nl__im__24, ___get_global_const(123), ___nl__im__25, ___get_global_const(255), ___nl__im__26));
#line 42
c_rt_lib0clear(&___nl__im__3);
#line 42
c_rt_lib0clear(&___nl__im__4);
#line 42
c_rt_lib0clear(&___nl__im__5);
#line 42
c_rt_lib0clear(&___nl__im__6);
#line 42
c_rt_lib0clear(&___nl__im__7);
#line 42
c_rt_lib0clear(&___nl__im__8);
#line 42
c_rt_lib0clear(&___nl__im__9);
#line 42
c_rt_lib0clear(&___nl__im__10);
#line 42
c_rt_lib0clear(&___nl__im__11);
#line 42
c_rt_lib0clear(&___nl__im__12);
#line 42
c_rt_lib0clear(&___nl__im__13);
#line 42
c_rt_lib0clear(&___nl__im__14);
#line 42
c_rt_lib0clear(&___nl__im__15);
#line 42
c_rt_lib0clear(&___nl__im__16);
#line 42
c_rt_lib0clear(&___nl__im__17);
#line 42
c_rt_lib0clear(&___nl__im__18);
#line 42
c_rt_lib0clear(&___nl__im__19);
#line 42
c_rt_lib0clear(&___nl__im__20);
#line 42
c_rt_lib0clear(&___nl__im__21);
#line 42
c_rt_lib0clear(&___nl__im__22);
#line 42
c_rt_lib0clear(&___nl__im__23);
#line 42
c_rt_lib0clear(&___nl__im__24);
#line 42
c_rt_lib0clear(&___nl__im__25);
#line 42
c_rt_lib0clear(&___nl__im__26);
#line 42
c_rt_lib0copy(&___nl__im__27, ___nl__im__2);
#line 42
c_rt_lib0move(&___nl__im__1, singleton0sigleton_do_not_use_without_approval(___nl__im__27));
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
c_rt_lib0clear(&___nl__im__7);
#line 42
c_rt_lib0clear(&___nl__im__8);
#line 42
c_rt_lib0clear(&___nl__im__9);
#line 42
c_rt_lib0clear(&___nl__im__10);
#line 42
c_rt_lib0clear(&___nl__im__11);
#line 42
c_rt_lib0clear(&___nl__im__12);
#line 42
c_rt_lib0clear(&___nl__im__13);
#line 42
c_rt_lib0clear(&___nl__im__14);
#line 42
c_rt_lib0clear(&___nl__im__15);
#line 42
c_rt_lib0clear(&___nl__im__16);
#line 42
c_rt_lib0clear(&___nl__im__17);
#line 42
c_rt_lib0clear(&___nl__im__18);
#line 42
c_rt_lib0clear(&___nl__im__19);
#line 42
c_rt_lib0clear(&___nl__im__20);
#line 42
c_rt_lib0clear(&___nl__im__21);
#line 42
c_rt_lib0clear(&___nl__im__22);
#line 42
c_rt_lib0clear(&___nl__im__23);
#line 42
c_rt_lib0clear(&___nl__im__24);
#line 42
c_rt_lib0clear(&___nl__im__25);
#line 42
c_rt_lib0clear(&___nl__im__26);
#line 42
c_rt_lib0clear(&___nl__im__27);
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
c_rt_lib0clear(&___nl__im__7);
#line 42
c_rt_lib0clear(&___nl__im__8);
#line 42
c_rt_lib0clear(&___nl__im__9);
#line 42
c_rt_lib0clear(&___nl__im__10);
#line 42
c_rt_lib0clear(&___nl__im__11);
#line 42
c_rt_lib0clear(&___nl__im__12);
#line 42
c_rt_lib0clear(&___nl__im__13);
#line 42
c_rt_lib0clear(&___nl__im__14);
#line 42
c_rt_lib0clear(&___nl__im__15);
#line 42
c_rt_lib0clear(&___nl__im__16);
#line 42
c_rt_lib0clear(&___nl__im__17);
#line 42
c_rt_lib0clear(&___nl__im__18);
#line 42
c_rt_lib0clear(&___nl__im__19);
#line 42
c_rt_lib0clear(&___nl__im__20);
#line 42
c_rt_lib0clear(&___nl__im__21);
#line 42
c_rt_lib0clear(&___nl__im__22);
#line 42
c_rt_lib0clear(&___nl__im__23);
#line 42
c_rt_lib0clear(&___nl__im__24);
#line 42
c_rt_lib0clear(&___nl__im__25);
#line 42
c_rt_lib0clear(&___nl__im__26);
#line 42
c_rt_lib0clear(&___nl__im__27);
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
c_rt_lib0clear(&___nl__im__7);
#line 42
c_rt_lib0clear(&___nl__im__8);
#line 42
c_rt_lib0clear(&___nl__im__9);
#line 42
c_rt_lib0clear(&___nl__im__10);
#line 42
c_rt_lib0clear(&___nl__im__11);
#line 42
c_rt_lib0clear(&___nl__im__12);
#line 42
c_rt_lib0clear(&___nl__im__13);
#line 42
c_rt_lib0clear(&___nl__im__14);
#line 42
c_rt_lib0clear(&___nl__im__15);
#line 42
c_rt_lib0clear(&___nl__im__16);
#line 42
c_rt_lib0clear(&___nl__im__17);
#line 42
c_rt_lib0clear(&___nl__im__18);
#line 42
c_rt_lib0clear(&___nl__im__19);
#line 42
c_rt_lib0clear(&___nl__im__20);
#line 42
c_rt_lib0clear(&___nl__im__21);
#line 42
c_rt_lib0clear(&___nl__im__22);
#line 42
c_rt_lib0clear(&___nl__im__23);
#line 42
c_rt_lib0clear(&___nl__im__24);
#line 42
c_rt_lib0clear(&___nl__im__25);
#line 42
c_rt_lib0clear(&___nl__im__26);
#line 42
c_rt_lib0clear(&___nl__im__27);
#line 42
return NULL;
}

ImmT  ntokenizer_priv0get_char_oper() {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
INT  ___nl__int__39 = 0;
ImmT  ___nl__im__40 = NULL;
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
INT  ___nl__int__46 = 0;
ImmT  ___nl__im__47 = NULL;
#line 47
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__im__0, c_rt_lib0array_mk(3, ___nl__im__1, ___nl__im__2, ___nl__im__3));
#line 47
c_rt_lib0clear(&___nl__im__1);
#line 47
c_rt_lib0clear(&___nl__im__2);
#line 47
c_rt_lib0clear(&___nl__im__3);
#line 48
c_rt_lib0move(&___nl__im__5, nast0get_unary_ops());
#line 48
c_rt_lib0move(&___nl__im__6, nast0get_bin_ops());
#line 48
c_rt_lib0move(&___nl__im__7, nast0get_ternary_ops());
#line 48
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(3, ___nl__im__5, ___nl__im__6, ___nl__im__7));
#line 48
c_rt_lib0clear(&___nl__im__5);
#line 48
c_rt_lib0clear(&___nl__im__6);
#line 48
c_rt_lib0clear(&___nl__im__7);
#line 48
___nl__int__9 = 0;
#line 48
___nl__int__10 = 1;
#line 48
___nl__int__11 = c_rt_lib0array_len(___nl__im__4);
#line 48
label_3:
#line 48
___nl__int__13 = ___nl__int__9 >= ___nl__int__11;
#line 48
___nl__bool__12 = ___nl__int__13;
#line 48
if(___nl__bool__12){ goto label_1;}
#line 48
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__4, ___nl__int__9));
#line 48
c_rt_lib0copy(&___nl__im__8, ___nl__im__14);
#line 49
c_rt_lib0move(&___nl__im__18, c_rt_lib0init_iter(___nl__im__8));
#line 49
label_6:
#line 49
___nl__bool__16 = c_rt_lib0is_end_hash(___nl__im__18);
#line 49
if(___nl__bool__16){ goto label_4;}
#line 49
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_key_iter(___nl__im__18));
#line 49
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value(___nl__im__8, ___nl__im__15));
#line 50
c_rt_lib0copy(&___nl__im__21, ___nl__im__15);
#line 50
___nl__int__22 = 0;
#line 50
___nl__int__23 = ___nl__int__22;
#line 50
___nl__int__24 = 1;
#line 50
___nl__int__25 = ___nl__int__24;
#line 50
c_rt_lib0move(&___nl__im__20, string0substr(___nl__im__21, ___nl__int__23, ___nl__int__25));
#line 50
c_rt_lib0clear(&___nl__im__21);
#line 50
//clear ___nl__int__22;
#line 50
//clear ___nl__int__23;
#line 50
//clear ___nl__int__24;
#line 50
//clear ___nl__int__25;
#line 50
c_rt_lib0copy(&___nl__im__26, ___nl__im__20);
#line 50
___nl__bool__19 = string0is_letter(___nl__im__26);
#line 50
c_rt_lib0clear(&___nl__im__20);
#line 50
c_rt_lib0clear(&___nl__im__21);
#line 50
//clear ___nl__int__22;
#line 50
//clear ___nl__int__23;
#line 50
//clear ___nl__int__24;
#line 50
//clear ___nl__int__25;
#line 50
c_rt_lib0clear(&___nl__im__26);
#line 50
c_rt_lib0clear(&___nl__im__20);
#line 50
c_rt_lib0clear(&___nl__im__21);
#line 50
//clear ___nl__int__22;
#line 50
//clear ___nl__int__23;
#line 50
//clear ___nl__int__24;
#line 50
//clear ___nl__int__25;
#line 50
c_rt_lib0clear(&___nl__im__26);
#line 50
c_rt_lib0clear(&___nl__im__20);
#line 50
c_rt_lib0clear(&___nl__im__21);
#line 50
//clear ___nl__int__22;
#line 50
//clear ___nl__int__23;
#line 50
//clear ___nl__int__24;
#line 50
//clear ___nl__int__25;
#line 50
c_rt_lib0clear(&___nl__im__26);
#line 50
___nl__bool__19 = !___nl__bool__19;
#line 50
c_rt_lib0clear(&___nl__im__20);
#line 50
c_rt_lib0clear(&___nl__im__21);
#line 50
//clear ___nl__int__22;
#line 50
//clear ___nl__int__23;
#line 50
//clear ___nl__int__24;
#line 50
//clear ___nl__int__25;
#line 50
c_rt_lib0clear(&___nl__im__26);
#line 50
___nl__bool__19 = !___nl__bool__19;
#line 50
if(___nl__bool__19){ goto label_8;}
#line 50
c_rt_lib0copy(&___nl__im__30, ___nl__im__15);
#line 50
___nl__int__29 = string0length(___nl__im__30);
#line 50
c_rt_lib0clear(&___nl__im__30);
#line 50
___nl__int__31 = 1;
#line 50
___nl__int__28 = ___nl__int__29 - ___nl__int__31;
#line 50
//clear ___nl__int__29;
#line 50
c_rt_lib0clear(&___nl__im__30);
#line 50
//clear ___nl__int__31;
#line 50
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__28));
#line 50
c_rt_lib0copy(&___nl__im__32, ___nl__im__15);
#line 50
c_rt_lib0delete(array0push(&___nl__im__27, ___nl__im__32));
#line 50
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__28, ___nl__im__27));
#line 50
c_rt_lib0clear(&___nl__im__27);
#line 50
//clear ___nl__int__28;
#line 50
//clear ___nl__int__29;
#line 50
c_rt_lib0clear(&___nl__im__30);
#line 50
//clear ___nl__int__31;
#line 50
c_rt_lib0clear(&___nl__im__32);
#line 50
goto label_7;
#line 50
label_8:
#line 50
label_7:
#line 50
label_5:
#line 51
c_rt_lib0move(&___nl__im__18, c_rt_lib0next_iter(___nl__im__18));
#line 51
goto label_6;
#line 51
label_4:
#line 51
c_rt_lib0clear(&___nl__im__8);
#line 51
label_2:
#line 52
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 52
goto label_3;
#line 52
label_1:
#line 53
___nl__int__34 = 2;
#line 53
c_rt_lib0move(&___nl__im__33, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__34));
#line 53
___nl__int__36 = 1;
#line 53
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_get(___nl__im__0, ___nl__int__36));
#line 53
//clear ___nl__int__36;
#line 53
c_rt_lib0copy(&___nl__im__37, ___nl__im__35);
#line 53
c_rt_lib0delete(array0append(&___nl__im__33, ___nl__im__37));
#line 53
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__34, ___nl__im__33));
#line 53
c_rt_lib0clear(&___nl__im__33);
#line 53
//clear ___nl__int__34;
#line 53
c_rt_lib0clear(&___nl__im__35);
#line 53
//clear ___nl__int__36;
#line 53
c_rt_lib0clear(&___nl__im__37);
#line 54
___nl__int__39 = 2;
#line 54
c_rt_lib0move(&___nl__im__38, c_rt_lib0get_ref_arr(___nl__im__0, ___nl__int__39));
#line 54
___nl__int__41 = 0;
#line 54
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__0, ___nl__int__41));
#line 54
//clear ___nl__int__41;
#line 54
c_rt_lib0copy(&___nl__im__42, ___nl__im__40);
#line 54
c_rt_lib0delete(array0append(&___nl__im__38, ___nl__im__42));
#line 54
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__0, ___nl__int__39, ___nl__im__38));
#line 54
c_rt_lib0clear(&___nl__im__38);
#line 54
//clear ___nl__int__39;
#line 54
c_rt_lib0clear(&___nl__im__40);
#line 54
//clear ___nl__int__41;
#line 54
c_rt_lib0clear(&___nl__im__42);
#line 55
___nl__int__46 = 2;
#line 55
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_get(___nl__im__0, ___nl__int__46));
#line 55
//clear ___nl__int__46;
#line 55
c_rt_lib0copy(&___nl__im__47, ___nl__im__45);
#line 55
c_rt_lib0move(&___nl__im__44, singleton0sigleton_do_not_use_without_approval(___nl__im__47));
#line 55
c_rt_lib0clear(&___nl__im__45);
#line 55
//clear ___nl__int__46;
#line 55
c_rt_lib0clear(&___nl__im__47);
#line 55
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 55
c_rt_lib0clear(&___nl__im__0);
#line 55
c_rt_lib0clear(&___nl__im__1);
#line 55
c_rt_lib0clear(&___nl__im__2);
#line 55
c_rt_lib0clear(&___nl__im__3);
#line 55
c_rt_lib0clear(&___nl__im__4);
#line 55
c_rt_lib0clear(&___nl__im__5);
#line 55
c_rt_lib0clear(&___nl__im__6);
#line 55
c_rt_lib0clear(&___nl__im__7);
#line 55
c_rt_lib0clear(&___nl__im__8);
#line 55
//clear ___nl__int__9;
#line 55
//clear ___nl__int__10;
#line 55
//clear ___nl__int__11;
#line 55
//clear ___nl__bool__12;
#line 55
//clear ___nl__int__13;
#line 55
c_rt_lib0clear(&___nl__im__14);
#line 55
c_rt_lib0clear(&___nl__im__15);
#line 55
//clear ___nl__bool__16;
#line 55
c_rt_lib0clear(&___nl__im__17);
#line 55
c_rt_lib0clear(&___nl__im__18);
#line 55
//clear ___nl__bool__19;
#line 55
c_rt_lib0clear(&___nl__im__20);
#line 55
c_rt_lib0clear(&___nl__im__21);
#line 55
//clear ___nl__int__22;
#line 55
//clear ___nl__int__23;
#line 55
//clear ___nl__int__24;
#line 55
//clear ___nl__int__25;
#line 55
c_rt_lib0clear(&___nl__im__26);
#line 55
c_rt_lib0clear(&___nl__im__27);
#line 55
//clear ___nl__int__28;
#line 55
//clear ___nl__int__29;
#line 55
c_rt_lib0clear(&___nl__im__30);
#line 55
//clear ___nl__int__31;
#line 55
c_rt_lib0clear(&___nl__im__32);
#line 55
c_rt_lib0clear(&___nl__im__33);
#line 55
//clear ___nl__int__34;
#line 55
c_rt_lib0clear(&___nl__im__35);
#line 55
//clear ___nl__int__36;
#line 55
c_rt_lib0clear(&___nl__im__37);
#line 55
c_rt_lib0clear(&___nl__im__38);
#line 55
//clear ___nl__int__39;
#line 55
c_rt_lib0clear(&___nl__im__40);
#line 55
//clear ___nl__int__41;
#line 55
c_rt_lib0clear(&___nl__im__42);
#line 55
c_rt_lib0clear(&___nl__im__44);
#line 55
c_rt_lib0clear(&___nl__im__45);
#line 55
//clear ___nl__int__46;
#line 55
c_rt_lib0clear(&___nl__im__47);
#line 55
return ___nl__im__43;
#line 55
c_rt_lib0clear(&___nl__im__0);
#line 55
c_rt_lib0clear(&___nl__im__1);
#line 55
c_rt_lib0clear(&___nl__im__2);
#line 55
c_rt_lib0clear(&___nl__im__3);
#line 55
c_rt_lib0clear(&___nl__im__4);
#line 55
c_rt_lib0clear(&___nl__im__5);
#line 55
c_rt_lib0clear(&___nl__im__6);
#line 55
c_rt_lib0clear(&___nl__im__7);
#line 55
c_rt_lib0clear(&___nl__im__8);
#line 55
//clear ___nl__int__9;
#line 55
//clear ___nl__int__10;
#line 55
//clear ___nl__int__11;
#line 55
//clear ___nl__bool__12;
#line 55
//clear ___nl__int__13;
#line 55
c_rt_lib0clear(&___nl__im__14);
#line 55
c_rt_lib0clear(&___nl__im__15);
#line 55
//clear ___nl__bool__16;
#line 55
c_rt_lib0clear(&___nl__im__17);
#line 55
c_rt_lib0clear(&___nl__im__18);
#line 55
//clear ___nl__bool__19;
#line 55
c_rt_lib0clear(&___nl__im__20);
#line 55
c_rt_lib0clear(&___nl__im__21);
#line 55
//clear ___nl__int__22;
#line 55
//clear ___nl__int__23;
#line 55
//clear ___nl__int__24;
#line 55
//clear ___nl__int__25;
#line 55
c_rt_lib0clear(&___nl__im__26);
#line 55
c_rt_lib0clear(&___nl__im__27);
#line 55
//clear ___nl__int__28;
#line 55
//clear ___nl__int__29;
#line 55
c_rt_lib0clear(&___nl__im__30);
#line 55
//clear ___nl__int__31;
#line 55
c_rt_lib0clear(&___nl__im__32);
#line 55
c_rt_lib0clear(&___nl__im__33);
#line 55
//clear ___nl__int__34;
#line 55
c_rt_lib0clear(&___nl__im__35);
#line 55
//clear ___nl__int__36;
#line 55
c_rt_lib0clear(&___nl__im__37);
#line 55
c_rt_lib0clear(&___nl__im__38);
#line 55
//clear ___nl__int__39;
#line 55
c_rt_lib0clear(&___nl__im__40);
#line 55
//clear ___nl__int__41;
#line 55
c_rt_lib0clear(&___nl__im__42);
#line 55
c_rt_lib0clear(&___nl__im__43);
#line 55
c_rt_lib0clear(&___nl__im__44);
#line 55
c_rt_lib0clear(&___nl__im__45);
#line 55
//clear ___nl__int__46;
#line 55
c_rt_lib0clear(&___nl__im__47);
#line 55
return NULL;
}

ImmT  ntokenizer_priv0get_lett_oper() {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
#line 59
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 60
c_rt_lib0move(&___nl__im__2, nast0get_unary_ops());
#line 60
c_rt_lib0move(&___nl__im__3, nast0get_bin_ops());
#line 60
c_rt_lib0move(&___nl__im__4, nast0get_ternary_ops());
#line 60
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(3, ___nl__im__2, ___nl__im__3, ___nl__im__4));
#line 60
c_rt_lib0clear(&___nl__im__2);
#line 60
c_rt_lib0clear(&___nl__im__3);
#line 60
c_rt_lib0clear(&___nl__im__4);
#line 60
___nl__int__6 = 0;
#line 60
___nl__int__7 = 1;
#line 60
___nl__int__8 = c_rt_lib0array_len(___nl__im__1);
#line 60
label_3:
#line 60
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 60
___nl__bool__9 = ___nl__int__10;
#line 60
if(___nl__bool__9){ goto label_1;}
#line 60
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__1, ___nl__int__6));
#line 60
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 61
c_rt_lib0move(&___nl__im__15, c_rt_lib0init_iter(___nl__im__5));
#line 61
label_6:
#line 61
___nl__bool__13 = c_rt_lib0is_end_hash(___nl__im__15);
#line 61
if(___nl__bool__13){ goto label_4;}
#line 61
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_key_iter(___nl__im__15));
#line 61
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value(___nl__im__5, ___nl__im__12));
#line 62
c_rt_lib0copy(&___nl__im__18, ___nl__im__12);
#line 62
___nl__int__19 = 0;
#line 62
___nl__int__20 = ___nl__int__19;
#line 62
___nl__int__21 = 1;
#line 62
___nl__int__22 = ___nl__int__21;
#line 62
c_rt_lib0move(&___nl__im__17, string0substr(___nl__im__18, ___nl__int__20, ___nl__int__22));
#line 62
c_rt_lib0clear(&___nl__im__18);
#line 62
//clear ___nl__int__19;
#line 62
//clear ___nl__int__20;
#line 62
//clear ___nl__int__21;
#line 62
//clear ___nl__int__22;
#line 62
c_rt_lib0copy(&___nl__im__23, ___nl__im__17);
#line 62
___nl__bool__16 = string0is_letter(___nl__im__23);
#line 62
c_rt_lib0clear(&___nl__im__17);
#line 62
c_rt_lib0clear(&___nl__im__18);
#line 62
//clear ___nl__int__19;
#line 62
//clear ___nl__int__20;
#line 62
//clear ___nl__int__21;
#line 62
//clear ___nl__int__22;
#line 62
c_rt_lib0clear(&___nl__im__23);
#line 62
c_rt_lib0clear(&___nl__im__17);
#line 62
c_rt_lib0clear(&___nl__im__18);
#line 62
//clear ___nl__int__19;
#line 62
//clear ___nl__int__20;
#line 62
//clear ___nl__int__21;
#line 62
//clear ___nl__int__22;
#line 62
c_rt_lib0clear(&___nl__im__23);
#line 62
___nl__bool__16 = !___nl__bool__16;
#line 62
if(___nl__bool__16){ goto label_8;}
#line 62
c_rt_lib0copy(&___nl__im__24, ___nl__im__12);
#line 62
c_rt_lib0move(&___nl__im__25,___get_global_const(37));
#line 62
c_rt_lib0copy(&___nl__im__26, ___nl__im__25);
#line 62
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__24, ___nl__im__26));
#line 62
c_rt_lib0clear(&___nl__im__24);
#line 62
c_rt_lib0clear(&___nl__im__25);
#line 62
c_rt_lib0clear(&___nl__im__26);
#line 62
goto label_7;
#line 62
label_8:
#line 62
label_7:
#line 62
label_5:
#line 63
c_rt_lib0move(&___nl__im__15, c_rt_lib0next_iter(___nl__im__15));
#line 63
goto label_6;
#line 63
label_4:
#line 63
c_rt_lib0clear(&___nl__im__5);
#line 63
label_2:
#line 64
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 64
goto label_3;
#line 64
label_1:
#line 65
c_rt_lib0copy(&___nl__im__29, ___nl__im__0);
#line 65
c_rt_lib0move(&___nl__im__28, singleton0sigleton_do_not_use_without_approval(___nl__im__29));
#line 65
c_rt_lib0clear(&___nl__im__29);
#line 65
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
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
//clear ___nl__int__6;
#line 65
//clear ___nl__int__7;
#line 65
//clear ___nl__int__8;
#line 65
//clear ___nl__bool__9;
#line 65
//clear ___nl__int__10;
#line 65
c_rt_lib0clear(&___nl__im__11);
#line 65
c_rt_lib0clear(&___nl__im__12);
#line 65
//clear ___nl__bool__13;
#line 65
c_rt_lib0clear(&___nl__im__14);
#line 65
c_rt_lib0clear(&___nl__im__15);
#line 65
//clear ___nl__bool__16;
#line 65
c_rt_lib0clear(&___nl__im__17);
#line 65
c_rt_lib0clear(&___nl__im__18);
#line 65
//clear ___nl__int__19;
#line 65
//clear ___nl__int__20;
#line 65
//clear ___nl__int__21;
#line 65
//clear ___nl__int__22;
#line 65
c_rt_lib0clear(&___nl__im__23);
#line 65
c_rt_lib0clear(&___nl__im__24);
#line 65
c_rt_lib0clear(&___nl__im__25);
#line 65
c_rt_lib0clear(&___nl__im__26);
#line 65
c_rt_lib0clear(&___nl__im__28);
#line 65
c_rt_lib0clear(&___nl__im__29);
#line 65
return ___nl__im__27;
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
//clear ___nl__int__6;
#line 65
//clear ___nl__int__7;
#line 65
//clear ___nl__int__8;
#line 65
//clear ___nl__bool__9;
#line 65
//clear ___nl__int__10;
#line 65
c_rt_lib0clear(&___nl__im__11);
#line 65
c_rt_lib0clear(&___nl__im__12);
#line 65
//clear ___nl__bool__13;
#line 65
c_rt_lib0clear(&___nl__im__14);
#line 65
c_rt_lib0clear(&___nl__im__15);
#line 65
//clear ___nl__bool__16;
#line 65
c_rt_lib0clear(&___nl__im__17);
#line 65
c_rt_lib0clear(&___nl__im__18);
#line 65
//clear ___nl__int__19;
#line 65
//clear ___nl__int__20;
#line 65
//clear ___nl__int__21;
#line 65
//clear ___nl__int__22;
#line 65
c_rt_lib0clear(&___nl__im__23);
#line 65
c_rt_lib0clear(&___nl__im__24);
#line 65
c_rt_lib0clear(&___nl__im__25);
#line 65
c_rt_lib0clear(&___nl__im__26);
#line 65
c_rt_lib0clear(&___nl__im__27);
#line 65
c_rt_lib0clear(&___nl__im__28);
#line 65
c_rt_lib0clear(&___nl__im__29);
#line 65
return NULL;
}

ImmT  ntokenizer0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ntokenizer0state_t");
return ntokenizer0state_t();
}
ImmT  ntokenizer0state_t() {
ntokenizer_priv0__const__init();
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
#line 70
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 70
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 70
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__5));
#line 70
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 71
c_rt_lib0move(&___nl__im__6, ptd0int());
#line 72
c_rt_lib0move(&___nl__im__7, ptd0int());
#line 73
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(ntokenizer0token_t0ptr, ___get_global_const(1131), ___get_global_const(1157)));
#line 73
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 74
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 75
c_rt_lib0move(&___nl__im__10, ptd0int());
#line 76
c_rt_lib0move(&___nl__im__11, ptd0int());
#line 77
c_rt_lib0move(&___nl__im__14, ptd0int());
#line 77
c_rt_lib0move(&___nl__im__15, ptd0int());
#line 77
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_const(169), ___nl__im__14, ___get_global_const(1096), ___nl__im__15));
#line 77
c_rt_lib0clear(&___nl__im__14);
#line 77
c_rt_lib0clear(&___nl__im__15);
#line 77
c_rt_lib0copy(&___nl__im__16, ___nl__im__13);
#line 77
c_rt_lib0move(&___nl__im__12, ptd0rec(___nl__im__16));
#line 77
c_rt_lib0clear(&___nl__im__13);
#line 77
c_rt_lib0clear(&___nl__im__14);
#line 77
c_rt_lib0clear(&___nl__im__15);
#line 77
c_rt_lib0clear(&___nl__im__16);
#line 78
c_rt_lib0move(&___nl__im__19, ptd0int());
#line 78
c_rt_lib0move(&___nl__im__20, ptd0int());
#line 78
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(2, ___get_global_const(169), ___nl__im__19, ___get_global_const(1096), ___nl__im__20));
#line 78
c_rt_lib0clear(&___nl__im__19);
#line 78
c_rt_lib0clear(&___nl__im__20);
#line 78
c_rt_lib0copy(&___nl__im__21, ___nl__im__18);
#line 78
c_rt_lib0move(&___nl__im__17, ptd0rec(___nl__im__21));
#line 78
c_rt_lib0clear(&___nl__im__18);
#line 78
c_rt_lib0clear(&___nl__im__19);
#line 78
c_rt_lib0clear(&___nl__im__20);
#line 78
c_rt_lib0clear(&___nl__im__21);
#line 79
c_rt_lib0move(&___nl__im__22, ptd0string());
#line 79
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(10, ___get_global_const(1158), ___nl__im__3, ___get_global_const(289), ___nl__im__6, ___get_global_const(290), ___nl__im__7, ___get_global_const(96), ___nl__im__8, ___get_global_const(1159), ___nl__im__9, ___get_global_const(1160), ___nl__im__10, ___get_global_const(1161), ___nl__im__11, ___get_global_const(1162), ___nl__im__12, ___get_global_const(1163), ___nl__im__17, ___get_global_const(1164), ___nl__im__22));
#line 79
c_rt_lib0clear(&___nl__im__3);
#line 79
c_rt_lib0clear(&___nl__im__4);
#line 79
c_rt_lib0clear(&___nl__im__5);
#line 79
c_rt_lib0clear(&___nl__im__6);
#line 79
c_rt_lib0clear(&___nl__im__7);
#line 79
c_rt_lib0clear(&___nl__im__8);
#line 79
c_rt_lib0clear(&___nl__im__9);
#line 79
c_rt_lib0clear(&___nl__im__10);
#line 79
c_rt_lib0clear(&___nl__im__11);
#line 79
c_rt_lib0clear(&___nl__im__12);
#line 79
c_rt_lib0clear(&___nl__im__13);
#line 79
c_rt_lib0clear(&___nl__im__14);
#line 79
c_rt_lib0clear(&___nl__im__15);
#line 79
c_rt_lib0clear(&___nl__im__16);
#line 79
c_rt_lib0clear(&___nl__im__17);
#line 79
c_rt_lib0clear(&___nl__im__18);
#line 79
c_rt_lib0clear(&___nl__im__19);
#line 79
c_rt_lib0clear(&___nl__im__20);
#line 79
c_rt_lib0clear(&___nl__im__21);
#line 79
c_rt_lib0clear(&___nl__im__22);
#line 79
c_rt_lib0copy(&___nl__im__23, ___nl__im__2);
#line 79
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__23));
#line 79
c_rt_lib0clear(&___nl__im__2);
#line 79
c_rt_lib0clear(&___nl__im__3);
#line 79
c_rt_lib0clear(&___nl__im__4);
#line 79
c_rt_lib0clear(&___nl__im__5);
#line 79
c_rt_lib0clear(&___nl__im__6);
#line 79
c_rt_lib0clear(&___nl__im__7);
#line 79
c_rt_lib0clear(&___nl__im__8);
#line 79
c_rt_lib0clear(&___nl__im__9);
#line 79
c_rt_lib0clear(&___nl__im__10);
#line 79
c_rt_lib0clear(&___nl__im__11);
#line 79
c_rt_lib0clear(&___nl__im__12);
#line 79
c_rt_lib0clear(&___nl__im__13);
#line 79
c_rt_lib0clear(&___nl__im__14);
#line 79
c_rt_lib0clear(&___nl__im__15);
#line 79
c_rt_lib0clear(&___nl__im__16);
#line 79
c_rt_lib0clear(&___nl__im__17);
#line 79
c_rt_lib0clear(&___nl__im__18);
#line 79
c_rt_lib0clear(&___nl__im__19);
#line 79
c_rt_lib0clear(&___nl__im__20);
#line 79
c_rt_lib0clear(&___nl__im__21);
#line 79
c_rt_lib0clear(&___nl__im__22);
#line 79
c_rt_lib0clear(&___nl__im__23);
#line 79
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 79
c_rt_lib0clear(&___nl__im__1);
#line 79
c_rt_lib0clear(&___nl__im__2);
#line 79
c_rt_lib0clear(&___nl__im__3);
#line 79
c_rt_lib0clear(&___nl__im__4);
#line 79
c_rt_lib0clear(&___nl__im__5);
#line 79
c_rt_lib0clear(&___nl__im__6);
#line 79
c_rt_lib0clear(&___nl__im__7);
#line 79
c_rt_lib0clear(&___nl__im__8);
#line 79
c_rt_lib0clear(&___nl__im__9);
#line 79
c_rt_lib0clear(&___nl__im__10);
#line 79
c_rt_lib0clear(&___nl__im__11);
#line 79
c_rt_lib0clear(&___nl__im__12);
#line 79
c_rt_lib0clear(&___nl__im__13);
#line 79
c_rt_lib0clear(&___nl__im__14);
#line 79
c_rt_lib0clear(&___nl__im__15);
#line 79
c_rt_lib0clear(&___nl__im__16);
#line 79
c_rt_lib0clear(&___nl__im__17);
#line 79
c_rt_lib0clear(&___nl__im__18);
#line 79
c_rt_lib0clear(&___nl__im__19);
#line 79
c_rt_lib0clear(&___nl__im__20);
#line 79
c_rt_lib0clear(&___nl__im__21);
#line 79
c_rt_lib0clear(&___nl__im__22);
#line 79
c_rt_lib0clear(&___nl__im__23);
#line 79
return ___nl__im__0;
#line 79
c_rt_lib0clear(&___nl__im__0);
#line 79
c_rt_lib0clear(&___nl__im__1);
#line 79
c_rt_lib0clear(&___nl__im__2);
#line 79
c_rt_lib0clear(&___nl__im__3);
#line 79
c_rt_lib0clear(&___nl__im__4);
#line 79
c_rt_lib0clear(&___nl__im__5);
#line 79
c_rt_lib0clear(&___nl__im__6);
#line 79
c_rt_lib0clear(&___nl__im__7);
#line 79
c_rt_lib0clear(&___nl__im__8);
#line 79
c_rt_lib0clear(&___nl__im__9);
#line 79
c_rt_lib0clear(&___nl__im__10);
#line 79
c_rt_lib0clear(&___nl__im__11);
#line 79
c_rt_lib0clear(&___nl__im__12);
#line 79
c_rt_lib0clear(&___nl__im__13);
#line 79
c_rt_lib0clear(&___nl__im__14);
#line 79
c_rt_lib0clear(&___nl__im__15);
#line 79
c_rt_lib0clear(&___nl__im__16);
#line 79
c_rt_lib0clear(&___nl__im__17);
#line 79
c_rt_lib0clear(&___nl__im__18);
#line 79
c_rt_lib0clear(&___nl__im__19);
#line 79
c_rt_lib0clear(&___nl__im__20);
#line 79
c_rt_lib0clear(&___nl__im__21);
#line 79
c_rt_lib0clear(&___nl__im__22);
#line 79
c_rt_lib0clear(&___nl__im__23);
#line 79
return NULL;
}

ImmT  ntokenizer0token_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ntokenizer0token_t");
return ntokenizer0token_t();
}
ImmT  ntokenizer0token_t() {
ntokenizer_priv0__const__init();
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
#line 85
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 86
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 87
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 88
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 89
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 90
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 91
c_rt_lib0move(&___nl__im__9, ptd0none());
#line 92
c_rt_lib0move(&___nl__im__10, ptd0none());
#line 93
c_rt_lib0move(&___nl__im__11, ptd0none());
#line 93
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(9, ___get_global_const(1083), ___nl__im__3, ___get_global_const(1165), ___nl__im__4, ___get_global_const(1148), ___nl__im__5, ___get_global_const(1146), ___nl__im__6, ___get_global_const(1150), ___nl__im__7, ___get_global_const(1135), ___nl__im__8, ___get_global_const(1147), ___nl__im__9, ___get_global_const(531), ___nl__im__10, ___get_global_const(140), ___nl__im__11));
#line 93
c_rt_lib0clear(&___nl__im__3);
#line 93
c_rt_lib0clear(&___nl__im__4);
#line 93
c_rt_lib0clear(&___nl__im__5);
#line 93
c_rt_lib0clear(&___nl__im__6);
#line 93
c_rt_lib0clear(&___nl__im__7);
#line 93
c_rt_lib0clear(&___nl__im__8);
#line 93
c_rt_lib0clear(&___nl__im__9);
#line 93
c_rt_lib0clear(&___nl__im__10);
#line 93
c_rt_lib0clear(&___nl__im__11);
#line 93
c_rt_lib0copy(&___nl__im__12, ___nl__im__2);
#line 93
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__12));
#line 93
c_rt_lib0clear(&___nl__im__2);
#line 93
c_rt_lib0clear(&___nl__im__3);
#line 93
c_rt_lib0clear(&___nl__im__4);
#line 93
c_rt_lib0clear(&___nl__im__5);
#line 93
c_rt_lib0clear(&___nl__im__6);
#line 93
c_rt_lib0clear(&___nl__im__7);
#line 93
c_rt_lib0clear(&___nl__im__8);
#line 93
c_rt_lib0clear(&___nl__im__9);
#line 93
c_rt_lib0clear(&___nl__im__10);
#line 93
c_rt_lib0clear(&___nl__im__11);
#line 93
c_rt_lib0clear(&___nl__im__12);
#line 93
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 93
c_rt_lib0clear(&___nl__im__1);
#line 93
c_rt_lib0clear(&___nl__im__2);
#line 93
c_rt_lib0clear(&___nl__im__3);
#line 93
c_rt_lib0clear(&___nl__im__4);
#line 93
c_rt_lib0clear(&___nl__im__5);
#line 93
c_rt_lib0clear(&___nl__im__6);
#line 93
c_rt_lib0clear(&___nl__im__7);
#line 93
c_rt_lib0clear(&___nl__im__8);
#line 93
c_rt_lib0clear(&___nl__im__9);
#line 93
c_rt_lib0clear(&___nl__im__10);
#line 93
c_rt_lib0clear(&___nl__im__11);
#line 93
c_rt_lib0clear(&___nl__im__12);
#line 93
return ___nl__im__0;
#line 93
c_rt_lib0clear(&___nl__im__0);
#line 93
c_rt_lib0clear(&___nl__im__1);
#line 93
c_rt_lib0clear(&___nl__im__2);
#line 93
c_rt_lib0clear(&___nl__im__3);
#line 93
c_rt_lib0clear(&___nl__im__4);
#line 93
c_rt_lib0clear(&___nl__im__5);
#line 93
c_rt_lib0clear(&___nl__im__6);
#line 93
c_rt_lib0clear(&___nl__im__7);
#line 93
c_rt_lib0clear(&___nl__im__8);
#line 93
c_rt_lib0clear(&___nl__im__9);
#line 93
c_rt_lib0clear(&___nl__im__10);
#line 93
c_rt_lib0clear(&___nl__im__11);
#line 93
c_rt_lib0clear(&___nl__im__12);
#line 93
return NULL;
}

ntokenizer0state_t0type ntokenizer0init0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0init");
ImmT  var0 = (_tab[0]);
return ntokenizer0init(var0);
}
ntokenizer0state_t0type ntokenizer0init(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
#line 99
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(1, ___nl__im__0));
#line 100
c_rt_lib0copy(&___nl__im__4, ___nl__im__0);
#line 100
___nl__int__3 = string0length(___nl__im__4);
#line 100
c_rt_lib0clear(&___nl__im__4);
#line 100
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__3));
#line 101
___nl__int__6 = 0;
#line 101
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__6));
#line 102
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(1083)));
#line 103
c_rt_lib0move(&___nl__im__9,___get_global_const(37));
#line 104
___nl__int__10 = 1;
#line 104
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__10));
#line 105
___nl__int__12 = 1;
#line 105
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__12));
#line 106
___nl__int__15 = 1;
#line 106
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__15));
#line 106
___nl__int__17 = 0;
#line 106
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__17));
#line 106
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(2, ___get_global_const(169), ___nl__im__16, ___get_global_const(1096), ___nl__im__18));
#line 106
//clear ___nl__int__15;
#line 106
c_rt_lib0clear(&___nl__im__16);
#line 106
//clear ___nl__int__17;
#line 106
c_rt_lib0clear(&___nl__im__18);
#line 107
___nl__int__20 = 1;
#line 107
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__20));
#line 107
___nl__int__22 = 0;
#line 107
c_rt_lib0move(&___nl__im__23, c_rt_lib0int_new(___nl__int__22));
#line 107
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(2, ___get_global_const(169), ___nl__im__21, ___get_global_const(1096), ___nl__im__23));
#line 107
//clear ___nl__int__20;
#line 107
c_rt_lib0clear(&___nl__im__21);
#line 107
//clear ___nl__int__22;
#line 107
c_rt_lib0clear(&___nl__im__23);
#line 108
c_rt_lib0move(&___nl__im__24,___get_global_const(37));
#line 108
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_const(1158), ___nl__im__2, ___get_global_const(290), ___nl__im__5, ___get_global_const(289), ___nl__im__7, ___get_global_const(96), ___nl__im__8, ___get_global_const(1159), ___nl__im__9, ___get_global_const(1160), ___nl__im__11, ___get_global_const(1161), ___nl__im__13, ___get_global_const(1162), ___nl__im__14, ___get_global_const(1163), ___nl__im__19, ___get_global_const(1164), ___nl__im__24));
#line 108
c_rt_lib0clear(&___nl__im__2);
#line 108
//clear ___nl__int__3;
#line 108
c_rt_lib0clear(&___nl__im__4);
#line 108
c_rt_lib0clear(&___nl__im__5);
#line 108
//clear ___nl__int__6;
#line 108
c_rt_lib0clear(&___nl__im__7);
#line 108
c_rt_lib0clear(&___nl__im__8);
#line 108
c_rt_lib0clear(&___nl__im__9);
#line 108
//clear ___nl__int__10;
#line 108
c_rt_lib0clear(&___nl__im__11);
#line 108
//clear ___nl__int__12;
#line 108
c_rt_lib0clear(&___nl__im__13);
#line 108
c_rt_lib0clear(&___nl__im__14);
#line 108
//clear ___nl__int__15;
#line 108
c_rt_lib0clear(&___nl__im__16);
#line 108
//clear ___nl__int__17;
#line 108
c_rt_lib0clear(&___nl__im__18);
#line 108
c_rt_lib0clear(&___nl__im__19);
#line 108
//clear ___nl__int__20;
#line 108
c_rt_lib0clear(&___nl__im__21);
#line 108
//clear ___nl__int__22;
#line 108
c_rt_lib0clear(&___nl__im__23);
#line 108
c_rt_lib0clear(&___nl__im__24);
#line 110
c_rt_lib0delete(ntokenizer_priv0get_next_token(&___nl__im__1));
#line 111
c_rt_lib0copy(&___nl__im__25, ___nl__im__1);
#line 111
c_rt_lib0clear(&___nl__im__0);
#line 111
c_rt_lib0clear(&___nl__im__1);
#line 111
c_rt_lib0clear(&___nl__im__2);
#line 111
//clear ___nl__int__3;
#line 111
c_rt_lib0clear(&___nl__im__4);
#line 111
c_rt_lib0clear(&___nl__im__5);
#line 111
//clear ___nl__int__6;
#line 111
c_rt_lib0clear(&___nl__im__7);
#line 111
c_rt_lib0clear(&___nl__im__8);
#line 111
c_rt_lib0clear(&___nl__im__9);
#line 111
//clear ___nl__int__10;
#line 111
c_rt_lib0clear(&___nl__im__11);
#line 111
//clear ___nl__int__12;
#line 111
c_rt_lib0clear(&___nl__im__13);
#line 111
c_rt_lib0clear(&___nl__im__14);
#line 111
//clear ___nl__int__15;
#line 111
c_rt_lib0clear(&___nl__im__16);
#line 111
//clear ___nl__int__17;
#line 111
c_rt_lib0clear(&___nl__im__18);
#line 111
c_rt_lib0clear(&___nl__im__19);
#line 111
//clear ___nl__int__20;
#line 111
c_rt_lib0clear(&___nl__im__21);
#line 111
//clear ___nl__int__22;
#line 111
c_rt_lib0clear(&___nl__im__23);
#line 111
c_rt_lib0clear(&___nl__im__24);
#line 111
return ___nl__im__25;
#line 111
c_rt_lib0clear(&___nl__im__0);
#line 111
c_rt_lib0clear(&___nl__im__1);
#line 111
c_rt_lib0clear(&___nl__im__2);
#line 111
//clear ___nl__int__3;
#line 111
c_rt_lib0clear(&___nl__im__4);
#line 111
c_rt_lib0clear(&___nl__im__5);
#line 111
//clear ___nl__int__6;
#line 111
c_rt_lib0clear(&___nl__im__7);
#line 111
c_rt_lib0clear(&___nl__im__8);
#line 111
c_rt_lib0clear(&___nl__im__9);
#line 111
//clear ___nl__int__10;
#line 111
c_rt_lib0clear(&___nl__im__11);
#line 111
//clear ___nl__int__12;
#line 111
c_rt_lib0clear(&___nl__im__13);
#line 111
c_rt_lib0clear(&___nl__im__14);
#line 111
//clear ___nl__int__15;
#line 111
c_rt_lib0clear(&___nl__im__16);
#line 111
//clear ___nl__int__17;
#line 111
c_rt_lib0clear(&___nl__im__18);
#line 111
c_rt_lib0clear(&___nl__im__19);
#line 111
//clear ___nl__int__20;
#line 111
c_rt_lib0clear(&___nl__im__21);
#line 111
//clear ___nl__int__22;
#line 111
c_rt_lib0clear(&___nl__im__23);
#line 111
c_rt_lib0clear(&___nl__im__24);
#line 111
c_rt_lib0clear(&___nl__im__25);
#line 111
return NULL;
}

ImmT  ntokenizer0get_last_comment0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_last_comment");
ntokenizer0state_t0type var0 = (_tab[0]);
return ntokenizer0get_last_comment(var0);
}
ImmT  ntokenizer0get_last_comment(ntokenizer0state_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 115
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1164)));
#line 115
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 115
c_rt_lib0clear(&___nl__im__0);
#line 115
c_rt_lib0clear(&___nl__im__2);
#line 115
return ___nl__im__1;
#line 115
c_rt_lib0clear(&___nl__im__0);
#line 115
c_rt_lib0clear(&___nl__im__1);
#line 115
c_rt_lib0clear(&___nl__im__2);
#line 115
return NULL;
}

ImmT  ntokenizer_priv0get_char(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__string__12 = NULL;
ImmT  ___nl__string__13 = NULL;
ImmT  ___nl__string__14 = NULL;
#line 119
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1158)));
#line 119
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 119
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(289)));
#line 119
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 119
c_rt_lib0clear(&___nl__im__7);
#line 119
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__6));
#line 119
___nl__int__9 = 1;
#line 119
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__9));
#line 119
c_rt_lib0move(&___nl__im__3, c_std_lib0fast_substr(___nl__im__5, ___nl__im__8, ___nl__im__10));
#line 119
c_rt_lib0clear(&___nl__im__4);
#line 119
c_rt_lib0clear(&___nl__im__5);
#line 119
//clear ___nl__int__6;
#line 119
c_rt_lib0clear(&___nl__im__7);
#line 119
c_rt_lib0clear(&___nl__im__8);
#line 119
//clear ___nl__int__9;
#line 119
c_rt_lib0clear(&___nl__im__10);
#line 119
c_rt_lib0move(&___nl__im__11,___get_global_const(37));
#line 119
c_rt_lib0copy(&___nl__string__12, ___nl__im__3);
#line 119
c_rt_lib0copy(&___nl__string__13, ___nl__im__11);
#line 119
c_rt_lib0move(&___nl__string__14, c_rt_lib0concat_new(___nl__string__12, ___nl__string__13));
#line 119
c_rt_lib0copy(&___nl__im__2, ___nl__string__14);
#line 119
c_rt_lib0clear(&___nl__im__3);
#line 119
c_rt_lib0clear(&___nl__im__4);
#line 119
c_rt_lib0clear(&___nl__im__5);
#line 119
//clear ___nl__int__6;
#line 119
c_rt_lib0clear(&___nl__im__7);
#line 119
c_rt_lib0clear(&___nl__im__8);
#line 119
//clear ___nl__int__9;
#line 119
c_rt_lib0clear(&___nl__im__10);
#line 119
c_rt_lib0clear(&___nl__im__11);
#line 119
c_rt_lib0clear(&___nl__string__12);
#line 119
c_rt_lib0clear(&___nl__string__13);
#line 119
c_rt_lib0clear(&___nl__string__14);
#line 119
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 119
c_rt_lib0clear(&___nl__im__2);
#line 119
c_rt_lib0clear(&___nl__im__3);
#line 119
c_rt_lib0clear(&___nl__im__4);
#line 119
c_rt_lib0clear(&___nl__im__5);
#line 119
//clear ___nl__int__6;
#line 119
c_rt_lib0clear(&___nl__im__7);
#line 119
c_rt_lib0clear(&___nl__im__8);
#line 119
//clear ___nl__int__9;
#line 119
c_rt_lib0clear(&___nl__im__10);
#line 119
c_rt_lib0clear(&___nl__im__11);
#line 119
c_rt_lib0clear(&___nl__string__12);
#line 119
c_rt_lib0clear(&___nl__string__13);
#line 119
c_rt_lib0clear(&___nl__string__14);
#line 119
return ___nl__im__1;
#line 119
c_rt_lib0clear(&___nl__im__1);
#line 119
c_rt_lib0clear(&___nl__im__2);
#line 119
c_rt_lib0clear(&___nl__im__3);
#line 119
c_rt_lib0clear(&___nl__im__4);
#line 119
c_rt_lib0clear(&___nl__im__5);
#line 119
//clear ___nl__int__6;
#line 119
c_rt_lib0clear(&___nl__im__7);
#line 119
c_rt_lib0clear(&___nl__im__8);
#line 119
//clear ___nl__int__9;
#line 119
c_rt_lib0clear(&___nl__im__10);
#line 119
c_rt_lib0clear(&___nl__im__11);
#line 119
c_rt_lib0clear(&___nl__string__12);
#line 119
c_rt_lib0clear(&___nl__string__13);
#line 119
c_rt_lib0clear(&___nl__string__14);
#line 119
return NULL;
}

ImmT  ntokenizer_priv0get_next_char(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
#line 123
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(290)));
#line 123
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 123
c_rt_lib0clear(&___nl__im__3);
#line 123
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(289)));
#line 123
___nl__int__5 = getIntFromImm(___nl__im__6);
#line 123
c_rt_lib0clear(&___nl__im__6);
#line 123
___nl__int__7 = 1;
#line 123
___nl__int__4 = ___nl__int__5 + ___nl__int__7;
#line 123
//clear ___nl__int__5;
#line 123
c_rt_lib0clear(&___nl__im__6);
#line 123
//clear ___nl__int__7;
#line 123
___nl__int__8 = ___nl__int__2 <= ___nl__int__4;
#line 123
___nl__bool__1 = ___nl__int__8;
#line 123
//clear ___nl__int__2;
#line 123
c_rt_lib0clear(&___nl__im__3);
#line 123
//clear ___nl__int__4;
#line 123
//clear ___nl__int__5;
#line 123
c_rt_lib0clear(&___nl__im__6);
#line 123
//clear ___nl__int__7;
#line 123
//clear ___nl__int__8;
#line 123
//clear ___nl__int__2;
#line 123
c_rt_lib0clear(&___nl__im__3);
#line 123
//clear ___nl__int__4;
#line 123
//clear ___nl__int__5;
#line 123
c_rt_lib0clear(&___nl__im__6);
#line 123
//clear ___nl__int__7;
#line 123
//clear ___nl__int__8;
#line 123
___nl__bool__1 = !___nl__bool__1;
#line 123
if(___nl__bool__1){ goto label_2;}
#line 123
c_rt_lib0move(&___nl__im__10,___get_global_const(37));
#line 123
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 123
//clear ___nl__bool__1;
#line 123
//clear ___nl__int__2;
#line 123
c_rt_lib0clear(&___nl__im__3);
#line 123
//clear ___nl__int__4;
#line 123
//clear ___nl__int__5;
#line 123
c_rt_lib0clear(&___nl__im__6);
#line 123
//clear ___nl__int__7;
#line 123
//clear ___nl__int__8;
#line 123
c_rt_lib0clear(&___nl__im__10);
#line 123
return ___nl__im__9;
#line 123
goto label_1;
#line 123
label_2:
#line 123
label_1:
#line 124
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1158)));
#line 124
c_rt_lib0copy(&___nl__im__14, ___nl__im__13);
#line 124
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(289)));
#line 124
___nl__int__16 = getIntFromImm(___nl__im__17);
#line 124
c_rt_lib0clear(&___nl__im__17);
#line 124
___nl__int__18 = 1;
#line 124
___nl__int__15 = ___nl__int__16 + ___nl__int__18;
#line 124
//clear ___nl__int__16;
#line 124
c_rt_lib0clear(&___nl__im__17);
#line 124
//clear ___nl__int__18;
#line 124
c_rt_lib0move(&___nl__im__19, c_rt_lib0int_new(___nl__int__15));
#line 124
___nl__int__20 = 1;
#line 124
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__20));
#line 124
c_rt_lib0move(&___nl__im__12, c_std_lib0fast_substr(___nl__im__14, ___nl__im__19, ___nl__im__21));
#line 124
c_rt_lib0clear(&___nl__im__13);
#line 124
c_rt_lib0clear(&___nl__im__14);
#line 124
//clear ___nl__int__15;
#line 124
//clear ___nl__int__16;
#line 124
c_rt_lib0clear(&___nl__im__17);
#line 124
//clear ___nl__int__18;
#line 124
c_rt_lib0clear(&___nl__im__19);
#line 124
//clear ___nl__int__20;
#line 124
c_rt_lib0clear(&___nl__im__21);
#line 124
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 124
//clear ___nl__bool__1;
#line 124
//clear ___nl__int__2;
#line 124
c_rt_lib0clear(&___nl__im__3);
#line 124
//clear ___nl__int__4;
#line 124
//clear ___nl__int__5;
#line 124
c_rt_lib0clear(&___nl__im__6);
#line 124
//clear ___nl__int__7;
#line 124
//clear ___nl__int__8;
#line 124
c_rt_lib0clear(&___nl__im__9);
#line 124
c_rt_lib0clear(&___nl__im__10);
#line 124
c_rt_lib0clear(&___nl__im__12);
#line 124
c_rt_lib0clear(&___nl__im__13);
#line 124
c_rt_lib0clear(&___nl__im__14);
#line 124
//clear ___nl__int__15;
#line 124
//clear ___nl__int__16;
#line 124
c_rt_lib0clear(&___nl__im__17);
#line 124
//clear ___nl__int__18;
#line 124
c_rt_lib0clear(&___nl__im__19);
#line 124
//clear ___nl__int__20;
#line 124
c_rt_lib0clear(&___nl__im__21);
#line 124
return ___nl__im__11;
#line 124
//clear ___nl__bool__1;
#line 124
//clear ___nl__int__2;
#line 124
c_rt_lib0clear(&___nl__im__3);
#line 124
//clear ___nl__int__4;
#line 124
//clear ___nl__int__5;
#line 124
c_rt_lib0clear(&___nl__im__6);
#line 124
//clear ___nl__int__7;
#line 124
//clear ___nl__int__8;
#line 124
c_rt_lib0clear(&___nl__im__9);
#line 124
c_rt_lib0clear(&___nl__im__10);
#line 124
c_rt_lib0clear(&___nl__im__11);
#line 124
c_rt_lib0clear(&___nl__im__12);
#line 124
c_rt_lib0clear(&___nl__im__13);
#line 124
c_rt_lib0clear(&___nl__im__14);
#line 124
//clear ___nl__int__15;
#line 124
//clear ___nl__int__16;
#line 124
c_rt_lib0clear(&___nl__im__17);
#line 124
//clear ___nl__int__18;
#line 124
c_rt_lib0clear(&___nl__im__19);
#line 124
//clear ___nl__int__20;
#line 124
c_rt_lib0clear(&___nl__im__21);
#line 124
return NULL;
}

ImmT  ntokenizer_priv0eat_ws(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
bool  ___nl__bool__14 = false;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
ImmT  ___nl__string__26 = NULL;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
ImmT  ___nl__string__33 = NULL;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
ImmT  ___nl__string__41 = NULL;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__string__46 = NULL;
ImmT  ___nl__string__47 = NULL;
ImmT  ___nl__string__48 = NULL;
ImmT  ___nl__string__49 = NULL;
ImmT  ___nl__im__50 = NULL;
INT  ___nl__int__51 = 0;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
ImmT  ___nl__string__54 = NULL;
bool  ___nl__bool__55 = false;
INT  ___nl__int__56 = 0;
ImmT  ___nl__im__57 = NULL;
INT  ___nl__int__58 = 0;
ImmT  ___nl__im__59 = NULL;
INT  ___nl__int__60 = 0;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
INT  ___nl__int__63 = 0;
INT  ___nl__int__64 = 0;
INT  ___nl__int__65 = 0;
ImmT  ___nl__string__66 = NULL;
bool  ___nl__bool__67 = false;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__string__69 = NULL;
ImmT  ___nl__string__70 = NULL;
ImmT  ___nl__string__71 = NULL;
ImmT  ___nl__string__72 = NULL;
bool  ___nl__bool__73 = false;
INT  ___nl__int__74 = 0;
ImmT  ___nl__im__75 = NULL;
INT  ___nl__int__76 = 0;
INT  ___nl__int__77 = 0;
ImmT  ___nl__im__78 = NULL;
INT  ___nl__int__79 = 0;
INT  ___nl__int__80 = 0;
INT  ___nl__int__81 = 0;
ImmT  ___nl__string__82 = NULL;
#line 128
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 128
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 128
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(1164), ___nl__im__1);
#line 128
c_rt_lib0clear(&___nl__im__1);
#line 128
c_rt_lib0clear(&___nl__im__2);
#line 129
___nl__bool__3 = true;
#line 130
label_2:
#line 131
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(289)));
#line 131
___nl__int__5 = getIntFromImm(___nl__im__6);
#line 131
c_rt_lib0clear(&___nl__im__6);
#line 131
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(290)));
#line 131
___nl__int__7 = getIntFromImm(___nl__im__8);
#line 131
c_rt_lib0clear(&___nl__im__8);
#line 131
___nl__int__9 = ___nl__int__5 == ___nl__int__7;
#line 131
___nl__bool__4 = ___nl__int__9;
#line 131
//clear ___nl__int__5;
#line 131
c_rt_lib0clear(&___nl__im__6);
#line 131
//clear ___nl__int__7;
#line 131
c_rt_lib0clear(&___nl__im__8);
#line 131
//clear ___nl__int__9;
#line 131
//clear ___nl__int__5;
#line 131
c_rt_lib0clear(&___nl__im__6);
#line 131
//clear ___nl__int__7;
#line 131
c_rt_lib0clear(&___nl__im__8);
#line 131
//clear ___nl__int__9;
#line 131
___nl__bool__4 = !___nl__bool__4;
#line 131
if(___nl__bool__4){ goto label_4;}
#line 131
c_rt_lib0clear(&___nl__im__1);
#line 131
c_rt_lib0clear(&___nl__im__2);
#line 131
//clear ___nl__bool__3;
#line 131
//clear ___nl__bool__4;
#line 131
//clear ___nl__int__5;
#line 131
c_rt_lib0clear(&___nl__im__6);
#line 131
//clear ___nl__int__7;
#line 131
c_rt_lib0clear(&___nl__im__8);
#line 131
//clear ___nl__int__9;
#line 131
return NULL;
#line 131
goto label_3;
#line 131
label_4:
#line 131
label_3:
#line 132
c_rt_lib0move(&___nl__im__10, ntokenizer_priv0get_char(___ref___im__0));
#line 133
c_rt_lib0copy(&___nl__im__12, ___nl__im__10);
#line 133
___nl__int__11 = string0ord(___nl__im__12);
#line 133
c_rt_lib0clear(&___nl__im__12);
#line 134
___nl__int__16 = 9;
#line 134
___nl__int__17 = ___nl__int__11 == ___nl__int__16;
#line 134
___nl__bool__13 = ___nl__int__17;
#line 134
//clear ___nl__int__16;
#line 134
//clear ___nl__int__17;
#line 134
if(___nl__bool__13){ goto label_8;}
#line 134
___nl__int__18 = 13;
#line 134
___nl__int__19 = ___nl__int__11 == ___nl__int__18;
#line 134
___nl__bool__13 = ___nl__int__19;
#line 134
//clear ___nl__int__18;
#line 134
//clear ___nl__int__19;
#line 134
label_8:
#line 134
//clear ___nl__bool__15;
#line 134
//clear ___nl__int__16;
#line 134
//clear ___nl__int__17;
#line 134
//clear ___nl__int__18;
#line 134
//clear ___nl__int__19;
#line 134
if(___nl__bool__13){ goto label_7;}
#line 134
___nl__int__20 = 32;
#line 134
___nl__int__21 = ___nl__int__11 == ___nl__int__20;
#line 134
___nl__bool__13 = ___nl__int__21;
#line 134
//clear ___nl__int__20;
#line 134
//clear ___nl__int__21;
#line 134
label_7:
#line 134
//clear ___nl__bool__14;
#line 134
//clear ___nl__bool__15;
#line 134
//clear ___nl__int__16;
#line 134
//clear ___nl__int__17;
#line 134
//clear ___nl__int__18;
#line 134
//clear ___nl__int__19;
#line 134
//clear ___nl__int__20;
#line 134
//clear ___nl__int__21;
#line 134
___nl__bool__13 = !___nl__bool__13;
#line 134
if(___nl__bool__13){ goto label_6;}
#line 135
c_rt_lib0move(&___nl__im__22,___get_global_const(289));
#line 135
c_rt_lib0move(&___nl__im__22, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__22));
#line 135
___nl__int__23 = 1;
#line 135
___nl__int__24 = getIntFromImm(___nl__im__22);
#line 135
___nl__int__25 = ___nl__int__24 + ___nl__int__23;
#line 135
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__25));
#line 135
c_rt_lib0move(&___nl__string__26,___get_global_const(289));
#line 135
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__26, ___nl__im__22));
#line 135
c_rt_lib0clear(&___nl__im__22);
#line 135
//clear ___nl__int__23;
#line 135
//clear ___nl__int__24;
#line 135
//clear ___nl__int__25;
#line 135
c_rt_lib0clear(&___nl__string__26);
#line 136
___nl__bool__3 = false;
#line 137
goto label_5;
#line 137
label_6:
#line 137
___nl__int__27 = 10;
#line 137
___nl__int__28 = ___nl__int__11 == ___nl__int__27;
#line 137
___nl__bool__13 = ___nl__int__28;
#line 137
//clear ___nl__int__27;
#line 137
//clear ___nl__int__28;
#line 137
___nl__bool__13 = !___nl__bool__13;
#line 137
if(___nl__bool__13){ goto label_9;}
#line 138
c_rt_lib0move(&___nl__im__29,___get_global_const(289));
#line 138
c_rt_lib0move(&___nl__im__29, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__29));
#line 138
___nl__int__30 = 1;
#line 138
___nl__int__31 = getIntFromImm(___nl__im__29);
#line 138
___nl__int__32 = ___nl__int__31 + ___nl__int__30;
#line 138
c_rt_lib0move(&___nl__im__29, c_rt_lib0int_new(___nl__int__32));
#line 138
c_rt_lib0move(&___nl__string__33,___get_global_const(289));
#line 138
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__33, ___nl__im__29));
#line 138
c_rt_lib0clear(&___nl__im__29);
#line 138
//clear ___nl__int__30;
#line 138
//clear ___nl__int__31;
#line 138
//clear ___nl__int__32;
#line 138
c_rt_lib0clear(&___nl__string__33);
#line 139
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(289)));
#line 139
___nl__int__35 = getIntFromImm(___nl__im__36);
#line 139
c_rt_lib0clear(&___nl__im__36);
#line 139
c_rt_lib0move(&___nl__im__34, c_rt_lib0int_new(___nl__int__35));
#line 139
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(1161), ___nl__im__34);
#line 139
c_rt_lib0clear(&___nl__im__34);
#line 139
//clear ___nl__int__35;
#line 139
c_rt_lib0clear(&___nl__im__36);
#line 140
c_rt_lib0move(&___nl__im__37,___get_global_const(1160));
#line 140
c_rt_lib0move(&___nl__im__37, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__37));
#line 140
___nl__int__38 = 1;
#line 140
___nl__int__39 = getIntFromImm(___nl__im__37);
#line 140
___nl__int__40 = ___nl__int__39 + ___nl__int__38;
#line 140
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__40));
#line 140
c_rt_lib0move(&___nl__string__41,___get_global_const(1160));
#line 140
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__41, ___nl__im__37));
#line 140
c_rt_lib0clear(&___nl__im__37);
#line 140
//clear ___nl__int__38;
#line 140
//clear ___nl__int__39;
#line 140
//clear ___nl__int__40;
#line 140
c_rt_lib0clear(&___nl__string__41);
#line 141
___nl__bool__3 = false;
#line 142
goto label_5;
#line 142
label_9:
#line 142
___nl__int__42 = 35;
#line 142
___nl__int__43 = ___nl__int__11 == ___nl__int__42;
#line 142
___nl__bool__13 = ___nl__int__43;
#line 142
//clear ___nl__int__42;
#line 142
//clear ___nl__int__43;
#line 142
___nl__bool__13 = !___nl__bool__13;
#line 142
if(___nl__bool__13){ goto label_10;}
#line 143
___nl__bool__44 = ___nl__bool__3;
#line 143
___nl__bool__44 = !___nl__bool__44;
#line 143
if(___nl__bool__44){ goto label_12;}
#line 144
c_rt_lib0move(&___nl__im__45,___get_global_const(1164));
#line 144
c_rt_lib0move(&___nl__im__45, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__45));
#line 144
c_rt_lib0copy(&___nl__string__46, ___nl__im__45);
#line 144
c_rt_lib0copy(&___nl__string__47, ___nl__im__10);
#line 144
c_rt_lib0move(&___nl__string__48, c_rt_lib0concat_new(___nl__string__46, ___nl__string__47));
#line 144
c_rt_lib0copy(&___nl__im__45, ___nl__string__48);
#line 144
c_rt_lib0move(&___nl__string__49,___get_global_const(1164));
#line 144
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__49, ___nl__im__45));
#line 144
c_rt_lib0clear(&___nl__im__45);
#line 144
c_rt_lib0clear(&___nl__string__46);
#line 144
c_rt_lib0clear(&___nl__string__47);
#line 144
c_rt_lib0clear(&___nl__string__48);
#line 144
c_rt_lib0clear(&___nl__string__49);
#line 145
goto label_11;
#line 145
label_12:
#line 145
label_11:
#line 146
c_rt_lib0move(&___nl__im__50,___get_global_const(289));
#line 146
c_rt_lib0move(&___nl__im__50, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__50));
#line 146
___nl__int__51 = 1;
#line 146
___nl__int__52 = getIntFromImm(___nl__im__50);
#line 146
___nl__int__53 = ___nl__int__52 + ___nl__int__51;
#line 146
c_rt_lib0move(&___nl__im__50, c_rt_lib0int_new(___nl__int__53));
#line 146
c_rt_lib0move(&___nl__string__54,___get_global_const(289));
#line 146
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__54, ___nl__im__50));
#line 146
c_rt_lib0clear(&___nl__im__50);
#line 146
//clear ___nl__int__51;
#line 146
//clear ___nl__int__52;
#line 146
//clear ___nl__int__53;
#line 146
c_rt_lib0clear(&___nl__string__54);
#line 147
label_14:
#line 148
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(289)));
#line 148
___nl__int__56 = getIntFromImm(___nl__im__57);
#line 148
c_rt_lib0clear(&___nl__im__57);
#line 148
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(290)));
#line 148
___nl__int__58 = getIntFromImm(___nl__im__59);
#line 148
c_rt_lib0clear(&___nl__im__59);
#line 148
___nl__int__60 = ___nl__int__56 == ___nl__int__58;
#line 148
___nl__bool__55 = ___nl__int__60;
#line 148
//clear ___nl__int__56;
#line 148
c_rt_lib0clear(&___nl__im__57);
#line 148
//clear ___nl__int__58;
#line 148
c_rt_lib0clear(&___nl__im__59);
#line 148
//clear ___nl__int__60;
#line 148
//clear ___nl__int__56;
#line 148
c_rt_lib0clear(&___nl__im__57);
#line 148
//clear ___nl__int__58;
#line 148
c_rt_lib0clear(&___nl__im__59);
#line 148
//clear ___nl__int__60;
#line 148
___nl__bool__55 = !___nl__bool__55;
#line 148
if(___nl__bool__55){ goto label_16;}
#line 148
c_rt_lib0clear(&___nl__im__1);
#line 148
c_rt_lib0clear(&___nl__im__2);
#line 148
//clear ___nl__bool__3;
#line 148
//clear ___nl__bool__4;
#line 148
//clear ___nl__int__5;
#line 148
c_rt_lib0clear(&___nl__im__6);
#line 148
//clear ___nl__int__7;
#line 148
c_rt_lib0clear(&___nl__im__8);
#line 148
//clear ___nl__int__9;
#line 148
c_rt_lib0clear(&___nl__im__10);
#line 148
//clear ___nl__int__11;
#line 148
c_rt_lib0clear(&___nl__im__12);
#line 148
//clear ___nl__bool__13;
#line 148
//clear ___nl__bool__14;
#line 148
//clear ___nl__bool__15;
#line 148
//clear ___nl__int__16;
#line 148
//clear ___nl__int__17;
#line 148
//clear ___nl__int__18;
#line 148
//clear ___nl__int__19;
#line 148
//clear ___nl__int__20;
#line 148
//clear ___nl__int__21;
#line 148
c_rt_lib0clear(&___nl__im__22);
#line 148
//clear ___nl__int__23;
#line 148
//clear ___nl__int__24;
#line 148
//clear ___nl__int__25;
#line 148
c_rt_lib0clear(&___nl__string__26);
#line 148
//clear ___nl__int__27;
#line 148
//clear ___nl__int__28;
#line 148
c_rt_lib0clear(&___nl__im__29);
#line 148
//clear ___nl__int__30;
#line 148
//clear ___nl__int__31;
#line 148
//clear ___nl__int__32;
#line 148
c_rt_lib0clear(&___nl__string__33);
#line 148
c_rt_lib0clear(&___nl__im__34);
#line 148
//clear ___nl__int__35;
#line 148
c_rt_lib0clear(&___nl__im__36);
#line 148
c_rt_lib0clear(&___nl__im__37);
#line 148
//clear ___nl__int__38;
#line 148
//clear ___nl__int__39;
#line 148
//clear ___nl__int__40;
#line 148
c_rt_lib0clear(&___nl__string__41);
#line 148
//clear ___nl__int__42;
#line 148
//clear ___nl__int__43;
#line 148
//clear ___nl__bool__44;
#line 148
c_rt_lib0clear(&___nl__im__45);
#line 148
c_rt_lib0clear(&___nl__string__46);
#line 148
c_rt_lib0clear(&___nl__string__47);
#line 148
c_rt_lib0clear(&___nl__string__48);
#line 148
c_rt_lib0clear(&___nl__string__49);
#line 148
c_rt_lib0clear(&___nl__im__50);
#line 148
//clear ___nl__int__51;
#line 148
//clear ___nl__int__52;
#line 148
//clear ___nl__int__53;
#line 148
c_rt_lib0clear(&___nl__string__54);
#line 148
//clear ___nl__bool__55;
#line 148
//clear ___nl__int__56;
#line 148
c_rt_lib0clear(&___nl__im__57);
#line 148
//clear ___nl__int__58;
#line 148
c_rt_lib0clear(&___nl__im__59);
#line 148
//clear ___nl__int__60;
#line 148
return NULL;
#line 148
goto label_15;
#line 148
label_16:
#line 148
label_15:
#line 149
c_rt_lib0move(&___nl__im__61, ntokenizer_priv0get_char(___ref___im__0));
#line 150
c_rt_lib0move(&___nl__im__62,___get_global_const(289));
#line 150
c_rt_lib0move(&___nl__im__62, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__62));
#line 150
___nl__int__63 = 1;
#line 150
___nl__int__64 = getIntFromImm(___nl__im__62);
#line 150
___nl__int__65 = ___nl__int__64 + ___nl__int__63;
#line 150
c_rt_lib0move(&___nl__im__62, c_rt_lib0int_new(___nl__int__65));
#line 150
c_rt_lib0move(&___nl__string__66,___get_global_const(289));
#line 150
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__66, ___nl__im__62));
#line 150
c_rt_lib0clear(&___nl__im__62);
#line 150
//clear ___nl__int__63;
#line 150
//clear ___nl__int__64;
#line 150
//clear ___nl__int__65;
#line 150
c_rt_lib0clear(&___nl__string__66);
#line 151
___nl__bool__67 = ___nl__bool__3;
#line 151
___nl__bool__67 = !___nl__bool__67;
#line 151
if(___nl__bool__67){ goto label_18;}
#line 152
c_rt_lib0move(&___nl__im__68,___get_global_const(1164));
#line 152
c_rt_lib0move(&___nl__im__68, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__68));
#line 152
c_rt_lib0copy(&___nl__string__69, ___nl__im__68);
#line 152
c_rt_lib0copy(&___nl__string__70, ___nl__im__61);
#line 152
c_rt_lib0move(&___nl__string__71, c_rt_lib0concat_new(___nl__string__69, ___nl__string__70));
#line 152
c_rt_lib0copy(&___nl__im__68, ___nl__string__71);
#line 152
c_rt_lib0move(&___nl__string__72,___get_global_const(1164));
#line 152
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__72, ___nl__im__68));
#line 152
c_rt_lib0clear(&___nl__im__68);
#line 152
c_rt_lib0clear(&___nl__string__69);
#line 152
c_rt_lib0clear(&___nl__string__70);
#line 152
c_rt_lib0clear(&___nl__string__71);
#line 152
c_rt_lib0clear(&___nl__string__72);
#line 153
goto label_17;
#line 153
label_18:
#line 153
label_17:
#line 154
c_rt_lib0copy(&___nl__im__75, ___nl__im__61);
#line 154
___nl__int__74 = string0ord(___nl__im__75);
#line 154
c_rt_lib0clear(&___nl__im__75);
#line 154
___nl__int__76 = 10;
#line 154
___nl__int__77 = ___nl__int__74 == ___nl__int__76;
#line 154
___nl__bool__73 = ___nl__int__77;
#line 154
//clear ___nl__int__74;
#line 154
c_rt_lib0clear(&___nl__im__75);
#line 154
//clear ___nl__int__76;
#line 154
//clear ___nl__int__77;
#line 154
___nl__bool__73 = !___nl__bool__73;
#line 154
if(___nl__bool__73){ goto label_20;}
#line 154
goto label_13;
#line 154
goto label_19;
#line 154
label_20:
#line 154
label_19:
#line 147
goto label_14;
#line 147
label_13:
#line 156
c_rt_lib0move(&___nl__im__78,___get_global_const(1160));
#line 156
c_rt_lib0move(&___nl__im__78, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__78));
#line 156
___nl__int__79 = 1;
#line 156
___nl__int__80 = getIntFromImm(___nl__im__78);
#line 156
___nl__int__81 = ___nl__int__80 + ___nl__int__79;
#line 156
c_rt_lib0move(&___nl__im__78, c_rt_lib0int_new(___nl__int__81));
#line 156
c_rt_lib0move(&___nl__string__82,___get_global_const(1160));
#line 156
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__82, ___nl__im__78));
#line 156
c_rt_lib0clear(&___nl__im__78);
#line 156
//clear ___nl__int__79;
#line 156
//clear ___nl__int__80;
#line 156
//clear ___nl__int__81;
#line 156
c_rt_lib0clear(&___nl__string__82);
#line 157
goto label_5;
#line 157
label_10:
#line 158
c_rt_lib0clear(&___nl__im__1);
#line 158
c_rt_lib0clear(&___nl__im__2);
#line 158
//clear ___nl__bool__3;
#line 158
//clear ___nl__bool__4;
#line 158
//clear ___nl__int__5;
#line 158
c_rt_lib0clear(&___nl__im__6);
#line 158
//clear ___nl__int__7;
#line 158
c_rt_lib0clear(&___nl__im__8);
#line 158
//clear ___nl__int__9;
#line 158
c_rt_lib0clear(&___nl__im__10);
#line 158
//clear ___nl__int__11;
#line 158
c_rt_lib0clear(&___nl__im__12);
#line 158
//clear ___nl__bool__13;
#line 158
//clear ___nl__bool__14;
#line 158
//clear ___nl__bool__15;
#line 158
//clear ___nl__int__16;
#line 158
//clear ___nl__int__17;
#line 158
//clear ___nl__int__18;
#line 158
//clear ___nl__int__19;
#line 158
//clear ___nl__int__20;
#line 158
//clear ___nl__int__21;
#line 158
c_rt_lib0clear(&___nl__im__22);
#line 158
//clear ___nl__int__23;
#line 158
//clear ___nl__int__24;
#line 158
//clear ___nl__int__25;
#line 158
c_rt_lib0clear(&___nl__string__26);
#line 158
//clear ___nl__int__27;
#line 158
//clear ___nl__int__28;
#line 158
c_rt_lib0clear(&___nl__im__29);
#line 158
//clear ___nl__int__30;
#line 158
//clear ___nl__int__31;
#line 158
//clear ___nl__int__32;
#line 158
c_rt_lib0clear(&___nl__string__33);
#line 158
c_rt_lib0clear(&___nl__im__34);
#line 158
//clear ___nl__int__35;
#line 158
c_rt_lib0clear(&___nl__im__36);
#line 158
c_rt_lib0clear(&___nl__im__37);
#line 158
//clear ___nl__int__38;
#line 158
//clear ___nl__int__39;
#line 158
//clear ___nl__int__40;
#line 158
c_rt_lib0clear(&___nl__string__41);
#line 158
//clear ___nl__int__42;
#line 158
//clear ___nl__int__43;
#line 158
//clear ___nl__bool__44;
#line 158
c_rt_lib0clear(&___nl__im__45);
#line 158
c_rt_lib0clear(&___nl__string__46);
#line 158
c_rt_lib0clear(&___nl__string__47);
#line 158
c_rt_lib0clear(&___nl__string__48);
#line 158
c_rt_lib0clear(&___nl__string__49);
#line 158
c_rt_lib0clear(&___nl__im__50);
#line 158
//clear ___nl__int__51;
#line 158
//clear ___nl__int__52;
#line 158
//clear ___nl__int__53;
#line 158
c_rt_lib0clear(&___nl__string__54);
#line 158
//clear ___nl__bool__55;
#line 158
//clear ___nl__int__56;
#line 158
c_rt_lib0clear(&___nl__im__57);
#line 158
//clear ___nl__int__58;
#line 158
c_rt_lib0clear(&___nl__im__59);
#line 158
//clear ___nl__int__60;
#line 158
c_rt_lib0clear(&___nl__im__61);
#line 158
c_rt_lib0clear(&___nl__im__62);
#line 158
//clear ___nl__int__63;
#line 158
//clear ___nl__int__64;
#line 158
//clear ___nl__int__65;
#line 158
c_rt_lib0clear(&___nl__string__66);
#line 158
//clear ___nl__bool__67;
#line 158
c_rt_lib0clear(&___nl__im__68);
#line 158
c_rt_lib0clear(&___nl__string__69);
#line 158
c_rt_lib0clear(&___nl__string__70);
#line 158
c_rt_lib0clear(&___nl__string__71);
#line 158
c_rt_lib0clear(&___nl__string__72);
#line 158
//clear ___nl__bool__73;
#line 158
//clear ___nl__int__74;
#line 158
c_rt_lib0clear(&___nl__im__75);
#line 158
//clear ___nl__int__76;
#line 158
//clear ___nl__int__77;
#line 158
c_rt_lib0clear(&___nl__im__78);
#line 158
//clear ___nl__int__79;
#line 158
//clear ___nl__int__80;
#line 158
//clear ___nl__int__81;
#line 158
c_rt_lib0clear(&___nl__string__82);
#line 158
return NULL;
#line 159
goto label_5;
#line 159
label_5:
#line 130
goto label_2;
#line 130
label_1:
#line 130
c_rt_lib0clear(&___nl__im__1);
#line 130
c_rt_lib0clear(&___nl__im__2);
#line 130
//clear ___nl__bool__3;
#line 130
//clear ___nl__bool__4;
#line 130
//clear ___nl__int__5;
#line 130
c_rt_lib0clear(&___nl__im__6);
#line 130
//clear ___nl__int__7;
#line 130
c_rt_lib0clear(&___nl__im__8);
#line 130
//clear ___nl__int__9;
#line 130
c_rt_lib0clear(&___nl__im__10);
#line 130
//clear ___nl__int__11;
#line 130
c_rt_lib0clear(&___nl__im__12);
#line 130
//clear ___nl__bool__13;
#line 130
//clear ___nl__bool__14;
#line 130
//clear ___nl__bool__15;
#line 130
//clear ___nl__int__16;
#line 130
//clear ___nl__int__17;
#line 130
//clear ___nl__int__18;
#line 130
//clear ___nl__int__19;
#line 130
//clear ___nl__int__20;
#line 130
//clear ___nl__int__21;
#line 130
c_rt_lib0clear(&___nl__im__22);
#line 130
//clear ___nl__int__23;
#line 130
//clear ___nl__int__24;
#line 130
//clear ___nl__int__25;
#line 130
c_rt_lib0clear(&___nl__string__26);
#line 130
//clear ___nl__int__27;
#line 130
//clear ___nl__int__28;
#line 130
c_rt_lib0clear(&___nl__im__29);
#line 130
//clear ___nl__int__30;
#line 130
//clear ___nl__int__31;
#line 130
//clear ___nl__int__32;
#line 130
c_rt_lib0clear(&___nl__string__33);
#line 130
c_rt_lib0clear(&___nl__im__34);
#line 130
//clear ___nl__int__35;
#line 130
c_rt_lib0clear(&___nl__im__36);
#line 130
c_rt_lib0clear(&___nl__im__37);
#line 130
//clear ___nl__int__38;
#line 130
//clear ___nl__int__39;
#line 130
//clear ___nl__int__40;
#line 130
c_rt_lib0clear(&___nl__string__41);
#line 130
//clear ___nl__int__42;
#line 130
//clear ___nl__int__43;
#line 130
//clear ___nl__bool__44;
#line 130
c_rt_lib0clear(&___nl__im__45);
#line 130
c_rt_lib0clear(&___nl__string__46);
#line 130
c_rt_lib0clear(&___nl__string__47);
#line 130
c_rt_lib0clear(&___nl__string__48);
#line 130
c_rt_lib0clear(&___nl__string__49);
#line 130
c_rt_lib0clear(&___nl__im__50);
#line 130
//clear ___nl__int__51;
#line 130
//clear ___nl__int__52;
#line 130
//clear ___nl__int__53;
#line 130
c_rt_lib0clear(&___nl__string__54);
#line 130
//clear ___nl__bool__55;
#line 130
//clear ___nl__int__56;
#line 130
c_rt_lib0clear(&___nl__im__57);
#line 130
//clear ___nl__int__58;
#line 130
c_rt_lib0clear(&___nl__im__59);
#line 130
//clear ___nl__int__60;
#line 130
c_rt_lib0clear(&___nl__im__61);
#line 130
c_rt_lib0clear(&___nl__im__62);
#line 130
//clear ___nl__int__63;
#line 130
//clear ___nl__int__64;
#line 130
//clear ___nl__int__65;
#line 130
c_rt_lib0clear(&___nl__string__66);
#line 130
//clear ___nl__bool__67;
#line 130
c_rt_lib0clear(&___nl__im__68);
#line 130
c_rt_lib0clear(&___nl__string__69);
#line 130
c_rt_lib0clear(&___nl__string__70);
#line 130
c_rt_lib0clear(&___nl__string__71);
#line 130
c_rt_lib0clear(&___nl__string__72);
#line 130
//clear ___nl__bool__73;
#line 130
//clear ___nl__int__74;
#line 130
c_rt_lib0clear(&___nl__im__75);
#line 130
//clear ___nl__int__76;
#line 130
//clear ___nl__int__77;
#line 130
c_rt_lib0clear(&___nl__im__78);
#line 130
//clear ___nl__int__79;
#line 130
//clear ___nl__int__80;
#line 130
//clear ___nl__int__81;
#line 130
c_rt_lib0clear(&___nl__string__82);
#line 130
return NULL;
}

bool ntokenizer_priv0is_token(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
bool  ___nl__bool__8 = false;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
bool  ___nl__bool__12 = false;
bool  ___nl__bool__13 = false;
bool  ___nl__bool__14 = false;
#line 164
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(96)));
#line 164
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(1165));
#line 164
c_rt_lib0clear(&___nl__im__2);
#line 164
___nl__bool__1 = !___nl__bool__1;
#line 164
if(___nl__bool__1){ goto label_2;}
#line 164
___nl__bool__4 = true;
#line 164
___nl__bool__3 = ___nl__bool__4;
#line 164
//clear ___nl__bool__1;
#line 164
c_rt_lib0clear(&___nl__im__2);
#line 164
//clear ___nl__bool__4;
#line 164
return ___nl__bool__3;
#line 164
goto label_1;
#line 164
label_2:
#line 164
label_1:
#line 165
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(96)));
#line 165
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(1148));
#line 165
c_rt_lib0clear(&___nl__im__6);
#line 165
___nl__bool__5 = !___nl__bool__5;
#line 165
if(___nl__bool__5){ goto label_4;}
#line 165
___nl__bool__8 = true;
#line 165
___nl__bool__7 = ___nl__bool__8;
#line 165
//clear ___nl__bool__1;
#line 165
c_rt_lib0clear(&___nl__im__2);
#line 165
//clear ___nl__bool__3;
#line 165
//clear ___nl__bool__4;
#line 165
//clear ___nl__bool__5;
#line 165
c_rt_lib0clear(&___nl__im__6);
#line 165
//clear ___nl__bool__8;
#line 165
return ___nl__bool__7;
#line 165
goto label_3;
#line 165
label_4:
#line 165
label_3:
#line 166
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(96)));
#line 166
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(1150));
#line 166
c_rt_lib0clear(&___nl__im__10);
#line 166
___nl__bool__9 = !___nl__bool__9;
#line 166
if(___nl__bool__9){ goto label_6;}
#line 166
___nl__bool__12 = true;
#line 166
___nl__bool__11 = ___nl__bool__12;
#line 166
//clear ___nl__bool__1;
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
//clear ___nl__bool__3;
#line 166
//clear ___nl__bool__4;
#line 166
//clear ___nl__bool__5;
#line 166
c_rt_lib0clear(&___nl__im__6);
#line 166
//clear ___nl__bool__7;
#line 166
//clear ___nl__bool__8;
#line 166
//clear ___nl__bool__9;
#line 166
c_rt_lib0clear(&___nl__im__10);
#line 166
//clear ___nl__bool__12;
#line 166
return ___nl__bool__11;
#line 166
goto label_5;
#line 166
label_6:
#line 166
label_5:
#line 167
___nl__bool__14 = false;
#line 167
___nl__bool__13 = ___nl__bool__14;
#line 167
//clear ___nl__bool__1;
#line 167
c_rt_lib0clear(&___nl__im__2);
#line 167
//clear ___nl__bool__3;
#line 167
//clear ___nl__bool__4;
#line 167
//clear ___nl__bool__5;
#line 167
c_rt_lib0clear(&___nl__im__6);
#line 167
//clear ___nl__bool__7;
#line 167
//clear ___nl__bool__8;
#line 167
//clear ___nl__bool__9;
#line 167
c_rt_lib0clear(&___nl__im__10);
#line 167
//clear ___nl__bool__11;
#line 167
//clear ___nl__bool__12;
#line 167
//clear ___nl__bool__14;
#line 167
return ___nl__bool__13;
#line 167
//clear ___nl__bool__1;
#line 167
c_rt_lib0clear(&___nl__im__2);
#line 167
//clear ___nl__bool__3;
#line 167
//clear ___nl__bool__4;
#line 167
//clear ___nl__bool__5;
#line 167
c_rt_lib0clear(&___nl__im__6);
#line 167
//clear ___nl__bool__7;
#line 167
//clear ___nl__bool__8;
#line 167
//clear ___nl__bool__9;
#line 167
c_rt_lib0clear(&___nl__im__10);
#line 167
//clear ___nl__bool__11;
#line 167
//clear ___nl__bool__12;
#line 167
//clear ___nl__bool__13;
#line 167
//clear ___nl__bool__14;
#line 167
return NULL;
}

bool ntokenizer0eat_token0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0eat_token");
ntokenizer0state_t0type var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return ntokenizer0eat_token(&var0, var1);
}
bool ntokenizer0eat_token(ntokenizer0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__string__5 = NULL;
ImmT  ___nl__string__6 = NULL;
bool  ___nl__bool__7 = false;
bool  ___nl__bool__8 = false;
bool  ___nl__bool__9 = false;
bool  ___nl__bool__10 = false;
#line 171
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1159)));
#line 171
c_rt_lib0copy(&___nl__string__5, ___nl__im__1);
#line 171
c_rt_lib0copy(&___nl__string__6, ___nl__im__4);
#line 171
___nl__bool__2 = c_rt_lib0eq(___nl__string__5, ___nl__string__6);
#line 171
c_rt_lib0clear(&___nl__im__4);
#line 171
c_rt_lib0clear(&___nl__string__5);
#line 171
c_rt_lib0clear(&___nl__string__6);
#line 171
___nl__bool__3 = !___nl__bool__2;
#line 171
if(___nl__bool__3){ goto label_3;}
#line 171
___nl__bool__2 = ntokenizer_priv0is_token(___ref___im__0);
#line 171
label_3:
#line 171
//clear ___nl__bool__3;
#line 171
c_rt_lib0clear(&___nl__im__4);
#line 171
c_rt_lib0clear(&___nl__string__5);
#line 171
c_rt_lib0clear(&___nl__string__6);
#line 171
___nl__bool__2 = !___nl__bool__2;
#line 171
if(___nl__bool__2){ goto label_2;}
#line 172
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___im__0));
#line 173
___nl__bool__8 = true;
#line 173
___nl__bool__7 = ___nl__bool__8;
#line 173
c_rt_lib0clear(&___nl__im__1);
#line 173
//clear ___nl__bool__2;
#line 173
//clear ___nl__bool__3;
#line 173
c_rt_lib0clear(&___nl__im__4);
#line 173
c_rt_lib0clear(&___nl__string__5);
#line 173
c_rt_lib0clear(&___nl__string__6);
#line 173
//clear ___nl__bool__8;
#line 173
return ___nl__bool__7;
#line 174
goto label_1;
#line 174
label_2:
#line 174
label_1:
#line 175
___nl__bool__10 = false;
#line 175
___nl__bool__9 = ___nl__bool__10;
#line 175
c_rt_lib0clear(&___nl__im__1);
#line 175
//clear ___nl__bool__2;
#line 175
//clear ___nl__bool__3;
#line 175
c_rt_lib0clear(&___nl__im__4);
#line 175
c_rt_lib0clear(&___nl__string__5);
#line 175
c_rt_lib0clear(&___nl__string__6);
#line 175
//clear ___nl__bool__7;
#line 175
//clear ___nl__bool__8;
#line 175
//clear ___nl__bool__10;
#line 175
return ___nl__bool__9;
#line 175
c_rt_lib0clear(&___nl__im__1);
#line 175
//clear ___nl__bool__2;
#line 175
//clear ___nl__bool__3;
#line 175
c_rt_lib0clear(&___nl__im__4);
#line 175
c_rt_lib0clear(&___nl__string__5);
#line 175
c_rt_lib0clear(&___nl__string__6);
#line 175
//clear ___nl__bool__7;
#line 175
//clear ___nl__bool__8;
#line 175
//clear ___nl__bool__9;
#line 175
//clear ___nl__bool__10;
#line 175
return NULL;
}

INT  ntokenizer0get_line0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_line");
ntokenizer0state_t0type var0 = (_tab[0]);
return ntokenizer0get_line(var0);
}
INT  ntokenizer0get_line(ntokenizer0state_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ntokenizer_priv0__const__init();
INT  ___nl__int__1 = 0;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
#line 179
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1160)));
#line 179
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 179
c_rt_lib0clear(&___nl__im__3);
#line 179
___nl__int__1 = ___nl__int__2;
#line 179
c_rt_lib0clear(&___nl__im__0);
#line 179
//clear ___nl__int__2;
#line 179
c_rt_lib0clear(&___nl__im__3);
#line 179
return ___nl__int__1;
#line 179
c_rt_lib0clear(&___nl__im__0);
#line 179
//clear ___nl__int__1;
#line 179
//clear ___nl__int__2;
#line 179
c_rt_lib0clear(&___nl__im__3);
#line 179
return 0;
}

INT  ntokenizer0get_column0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_column");
ntokenizer0state_t0type var0 = (_tab[0]);
return ntokenizer0get_column(var0);
}
INT  ntokenizer0get_column(ntokenizer0state_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ntokenizer_priv0__const__init();
INT  ___nl__int__1 = 0;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
#line 182
___nl__int__5 = 1;
#line 182
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(289)));
#line 182
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 182
c_rt_lib0clear(&___nl__im__7);
#line 182
___nl__int__4 = ___nl__int__5 + ___nl__int__6;
#line 182
//clear ___nl__int__5;
#line 182
//clear ___nl__int__6;
#line 182
c_rt_lib0clear(&___nl__im__7);
#line 182
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1161)));
#line 182
___nl__int__8 = getIntFromImm(___nl__im__9);
#line 182
c_rt_lib0clear(&___nl__im__9);
#line 182
___nl__int__3 = ___nl__int__4 - ___nl__int__8;
#line 182
//clear ___nl__int__4;
#line 182
//clear ___nl__int__5;
#line 182
//clear ___nl__int__6;
#line 182
c_rt_lib0clear(&___nl__im__7);
#line 182
//clear ___nl__int__8;
#line 182
c_rt_lib0clear(&___nl__im__9);
#line 182
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1159)));
#line 182
c_rt_lib0copy(&___nl__im__12, ___nl__im__11);
#line 182
___nl__int__10 = string0length(___nl__im__12);
#line 182
c_rt_lib0clear(&___nl__im__11);
#line 182
c_rt_lib0clear(&___nl__im__12);
#line 182
___nl__int__2 = ___nl__int__3 - ___nl__int__10;
#line 182
//clear ___nl__int__3;
#line 182
//clear ___nl__int__4;
#line 182
//clear ___nl__int__5;
#line 182
//clear ___nl__int__6;
#line 182
c_rt_lib0clear(&___nl__im__7);
#line 182
//clear ___nl__int__8;
#line 182
c_rt_lib0clear(&___nl__im__9);
#line 182
//clear ___nl__int__10;
#line 182
c_rt_lib0clear(&___nl__im__11);
#line 182
c_rt_lib0clear(&___nl__im__12);
#line 182
//clear ___nl__int__3;
#line 182
//clear ___nl__int__4;
#line 182
//clear ___nl__int__5;
#line 182
//clear ___nl__int__6;
#line 182
c_rt_lib0clear(&___nl__im__7);
#line 182
//clear ___nl__int__8;
#line 182
c_rt_lib0clear(&___nl__im__9);
#line 182
//clear ___nl__int__10;
#line 182
c_rt_lib0clear(&___nl__im__11);
#line 182
c_rt_lib0clear(&___nl__im__12);
#line 182
___nl__int__1 = ___nl__int__2;
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
//clear ___nl__int__2;
#line 182
//clear ___nl__int__3;
#line 182
//clear ___nl__int__4;
#line 182
//clear ___nl__int__5;
#line 182
//clear ___nl__int__6;
#line 182
c_rt_lib0clear(&___nl__im__7);
#line 182
//clear ___nl__int__8;
#line 182
c_rt_lib0clear(&___nl__im__9);
#line 182
//clear ___nl__int__10;
#line 182
c_rt_lib0clear(&___nl__im__11);
#line 182
c_rt_lib0clear(&___nl__im__12);
#line 182
return ___nl__int__1;
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
//clear ___nl__int__1;
#line 182
//clear ___nl__int__2;
#line 182
//clear ___nl__int__3;
#line 182
//clear ___nl__int__4;
#line 182
//clear ___nl__int__5;
#line 182
//clear ___nl__int__6;
#line 182
c_rt_lib0clear(&___nl__im__7);
#line 182
//clear ___nl__int__8;
#line 182
c_rt_lib0clear(&___nl__im__9);
#line 182
//clear ___nl__int__10;
#line 182
c_rt_lib0clear(&___nl__im__11);
#line 182
c_rt_lib0clear(&___nl__im__12);
#line 182
return 0;
}

ImmT  ntokenizer0get_place0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_place");
ntokenizer0state_t0type var0 = (_tab[0]);
return ntokenizer0get_place(&var0);
}
ImmT  ntokenizer0get_place(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 185
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1162)));
#line 185
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 185
c_rt_lib0clear(&___nl__im__2);
#line 185
return ___nl__im__1;
#line 185
c_rt_lib0clear(&___nl__im__1);
#line 185
c_rt_lib0clear(&___nl__im__2);
#line 185
return NULL;
}

ImmT  ntokenizer0get_place_ws0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_place_ws");
ntokenizer0state_t0type var0 = (_tab[0]);
return ntokenizer0get_place_ws(&var0);
}
ImmT  ntokenizer0get_place_ws(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 189
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1163)));
#line 189
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 189
c_rt_lib0clear(&___nl__im__2);
#line 189
return ___nl__im__1;
#line 189
c_rt_lib0clear(&___nl__im__1);
#line 189
c_rt_lib0clear(&___nl__im__2);
#line 189
return NULL;
}

ImmT  ntokenizer0get_token0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_token");
ntokenizer0state_t0type var0 = (_tab[0]);
return ntokenizer0get_token(&var0);
}
ImmT  ntokenizer0get_token(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 193
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1159)));
#line 193
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 193
c_rt_lib0clear(&___nl__im__2);
#line 193
return ___nl__im__1;
#line 193
c_rt_lib0clear(&___nl__im__1);
#line 193
c_rt_lib0clear(&___nl__im__2);
#line 193
return NULL;
}

bool ntokenizer0is_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0is_type");
ntokenizer0state_t0type var0 = (_tab[0]);
ntokenizer0token_t0type var1 = (_tab[1]);
return ntokenizer0is_type(&var0, var1);
}
bool ntokenizer0is_type(ntokenizer0state_t0type* ___ref___im__0,ntokenizer0token_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 197
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(96)));
#line 197
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 197
c_rt_lib0copy(&___nl__im__6, ___nl__im__1);
#line 197
___nl__bool__3 = enum0eq(___nl__im__5, ___nl__im__6);
#line 197
c_rt_lib0clear(&___nl__im__4);
#line 197
c_rt_lib0clear(&___nl__im__5);
#line 197
c_rt_lib0clear(&___nl__im__6);
#line 197
___nl__bool__2 = ___nl__bool__3;
#line 197
c_rt_lib0clear(&___nl__im__1);
#line 197
//clear ___nl__bool__3;
#line 197
c_rt_lib0clear(&___nl__im__4);
#line 197
c_rt_lib0clear(&___nl__im__5);
#line 197
c_rt_lib0clear(&___nl__im__6);
#line 197
return ___nl__bool__2;
#line 197
c_rt_lib0clear(&___nl__im__1);
#line 197
//clear ___nl__bool__2;
#line 197
//clear ___nl__bool__3;
#line 197
c_rt_lib0clear(&___nl__im__4);
#line 197
c_rt_lib0clear(&___nl__im__5);
#line 197
c_rt_lib0clear(&___nl__im__6);
#line 197
return NULL;
}

bool ntokenizer0next_is0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0next_is");
ntokenizer0state_t0type var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return ntokenizer0next_is(&var0, var1);
}
bool ntokenizer0next_is(ntokenizer0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__string__6 = NULL;
ImmT  ___nl__string__7 = NULL;
#line 201
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1159)));
#line 201
c_rt_lib0copy(&___nl__string__6, ___nl__im__1);
#line 201
c_rt_lib0copy(&___nl__string__7, ___nl__im__5);
#line 201
___nl__bool__3 = c_rt_lib0eq(___nl__string__6, ___nl__string__7);
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
c_rt_lib0clear(&___nl__string__6);
#line 201
c_rt_lib0clear(&___nl__string__7);
#line 201
___nl__bool__4 = !___nl__bool__3;
#line 201
if(___nl__bool__4){ goto label_1;}
#line 201
___nl__bool__3 = ntokenizer_priv0is_token(___ref___im__0);
#line 201
label_1:
#line 201
//clear ___nl__bool__4;
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
c_rt_lib0clear(&___nl__string__6);
#line 201
c_rt_lib0clear(&___nl__string__7);
#line 201
___nl__bool__2 = ___nl__bool__3;
#line 201
c_rt_lib0clear(&___nl__im__1);
#line 201
//clear ___nl__bool__3;
#line 201
//clear ___nl__bool__4;
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
c_rt_lib0clear(&___nl__string__6);
#line 201
c_rt_lib0clear(&___nl__string__7);
#line 201
return ___nl__bool__2;
#line 201
c_rt_lib0clear(&___nl__im__1);
#line 201
//clear ___nl__bool__2;
#line 201
//clear ___nl__bool__3;
#line 201
//clear ___nl__bool__4;
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
c_rt_lib0clear(&___nl__string__6);
#line 201
c_rt_lib0clear(&___nl__string__7);
#line 201
return NULL;
}

ImmT  ntokenizer0eat_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0eat_type");
ntokenizer0state_t0type var0 = (_tab[0]);
ntokenizer0token_t0type var1 = (_tab[1]);
return ntokenizer0eat_type(&var0, var1);
}
ImmT  ntokenizer0eat_type(ntokenizer0state_t0type* ___ref___im__0,ntokenizer0token_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
ntokenizer_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 205
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 205
___nl__bool__2 = ntokenizer0is_type(___ref___im__0, ___nl__im__3);
#line 205
c_rt_lib0clear(&___nl__im__3);
#line 205
c_rt_lib0clear(&___nl__im__3);
#line 205
___nl__bool__2 = !___nl__bool__2;
#line 205
c_rt_lib0clear(&___nl__im__3);
#line 205
___nl__bool__2 = !___nl__bool__2;
#line 205
if(___nl__bool__2){ goto label_2;}
#line 205
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 205
nl_die_arg(___nl__im__4);
#line 205
goto label_1;
#line 205
label_2:
#line 205
label_1:
#line 206
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1159)));
#line 207
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___im__0));
#line 208
c_rt_lib0copy(&___nl__im__6, ___nl__im__5);
#line 208
c_rt_lib0clear(&___nl__im__1);
#line 208
//clear ___nl__bool__2;
#line 208
c_rt_lib0clear(&___nl__im__3);
#line 208
c_rt_lib0clear(&___nl__im__4);
#line 208
c_rt_lib0clear(&___nl__im__5);
#line 208
return ___nl__im__6;
#line 208
c_rt_lib0clear(&___nl__im__1);
#line 208
//clear ___nl__bool__2;
#line 208
c_rt_lib0clear(&___nl__im__3);
#line 208
c_rt_lib0clear(&___nl__im__4);
#line 208
c_rt_lib0clear(&___nl__im__5);
#line 208
c_rt_lib0clear(&___nl__im__6);
#line 208
return NULL;
}

bool ntokenizer0is_text0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0is_text");
ntokenizer0state_t0type var0 = (_tab[0]);
return ntokenizer0is_text(&var0);
}
bool ntokenizer0is_text(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
bool  ___nl__bool__10 = false;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
bool  ___nl__bool__24 = false;
bool  ___nl__bool__25 = false;
bool  ___nl__bool__26 = false;
#line 212
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(1135)));
#line 212
c_rt_lib0copy(&___nl__im__3, ___nl__im__2);
#line 212
___nl__bool__1 = ntokenizer0is_type(___ref___im__0, ___nl__im__3);
#line 212
c_rt_lib0clear(&___nl__im__2);
#line 212
c_rt_lib0clear(&___nl__im__3);
#line 212
c_rt_lib0clear(&___nl__im__2);
#line 212
c_rt_lib0clear(&___nl__im__3);
#line 212
___nl__bool__1 = !___nl__bool__1;
#line 212
if(___nl__bool__1){ goto label_2;}
#line 212
___nl__bool__5 = true;
#line 212
___nl__bool__4 = ___nl__bool__5;
#line 212
//clear ___nl__bool__1;
#line 212
c_rt_lib0clear(&___nl__im__2);
#line 212
c_rt_lib0clear(&___nl__im__3);
#line 212
//clear ___nl__bool__5;
#line 212
return ___nl__bool__4;
#line 212
goto label_1;
#line 212
label_2:
#line 212
label_1:
#line 213
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(1150)));
#line 213
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 213
___nl__bool__6 = ntokenizer0is_type(___ref___im__0, ___nl__im__8);
#line 213
c_rt_lib0clear(&___nl__im__7);
#line 213
c_rt_lib0clear(&___nl__im__8);
#line 213
c_rt_lib0clear(&___nl__im__7);
#line 213
c_rt_lib0clear(&___nl__im__8);
#line 213
___nl__bool__6 = !___nl__bool__6;
#line 213
if(___nl__bool__6){ goto label_4;}
#line 213
___nl__bool__10 = true;
#line 213
___nl__bool__9 = ___nl__bool__10;
#line 213
//clear ___nl__bool__1;
#line 213
c_rt_lib0clear(&___nl__im__2);
#line 213
c_rt_lib0clear(&___nl__im__3);
#line 213
//clear ___nl__bool__4;
#line 213
//clear ___nl__bool__5;
#line 213
//clear ___nl__bool__6;
#line 213
c_rt_lib0clear(&___nl__im__7);
#line 213
c_rt_lib0clear(&___nl__im__8);
#line 213
//clear ___nl__bool__10;
#line 213
return ___nl__bool__9;
#line 213
goto label_3;
#line 213
label_4:
#line 213
label_3:
#line 214
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(1148)));
#line 214
c_rt_lib0copy(&___nl__im__13, ___nl__im__12);
#line 214
___nl__bool__11 = ntokenizer0is_type(___ref___im__0, ___nl__im__13);
#line 214
c_rt_lib0clear(&___nl__im__12);
#line 214
c_rt_lib0clear(&___nl__im__13);
#line 214
___nl__bool__11 = !___nl__bool__11;
#line 214
if(___nl__bool__11){ goto label_6;}
#line 215
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1159)));
#line 215
c_rt_lib0copy(&___nl__im__17, ___nl__im__16);
#line 215
___nl__int__18 = 0;
#line 215
___nl__int__19 = ___nl__int__18;
#line 215
___nl__int__20 = 1;
#line 215
___nl__int__21 = ___nl__int__20;
#line 215
c_rt_lib0move(&___nl__im__15, string0substr(___nl__im__17, ___nl__int__19, ___nl__int__21));
#line 215
c_rt_lib0clear(&___nl__im__16);
#line 215
c_rt_lib0clear(&___nl__im__17);
#line 215
//clear ___nl__int__18;
#line 215
//clear ___nl__int__19;
#line 215
//clear ___nl__int__20;
#line 215
//clear ___nl__int__21;
#line 215
c_rt_lib0copy(&___nl__im__22, ___nl__im__15);
#line 215
___nl__bool__14 = string0is_letter(___nl__im__22);
#line 215
c_rt_lib0clear(&___nl__im__15);
#line 215
c_rt_lib0clear(&___nl__im__16);
#line 215
c_rt_lib0clear(&___nl__im__17);
#line 215
//clear ___nl__int__18;
#line 215
//clear ___nl__int__19;
#line 215
//clear ___nl__int__20;
#line 215
//clear ___nl__int__21;
#line 215
c_rt_lib0clear(&___nl__im__22);
#line 215
c_rt_lib0clear(&___nl__im__15);
#line 215
c_rt_lib0clear(&___nl__im__16);
#line 215
c_rt_lib0clear(&___nl__im__17);
#line 215
//clear ___nl__int__18;
#line 215
//clear ___nl__int__19;
#line 215
//clear ___nl__int__20;
#line 215
//clear ___nl__int__21;
#line 215
c_rt_lib0clear(&___nl__im__22);
#line 215
___nl__bool__14 = !___nl__bool__14;
#line 215
if(___nl__bool__14){ goto label_8;}
#line 215
___nl__bool__24 = true;
#line 215
___nl__bool__23 = ___nl__bool__24;
#line 215
//clear ___nl__bool__1;
#line 215
c_rt_lib0clear(&___nl__im__2);
#line 215
c_rt_lib0clear(&___nl__im__3);
#line 215
//clear ___nl__bool__4;
#line 215
//clear ___nl__bool__5;
#line 215
//clear ___nl__bool__6;
#line 215
c_rt_lib0clear(&___nl__im__7);
#line 215
c_rt_lib0clear(&___nl__im__8);
#line 215
//clear ___nl__bool__9;
#line 215
//clear ___nl__bool__10;
#line 215
//clear ___nl__bool__11;
#line 215
c_rt_lib0clear(&___nl__im__12);
#line 215
c_rt_lib0clear(&___nl__im__13);
#line 215
//clear ___nl__bool__14;
#line 215
c_rt_lib0clear(&___nl__im__15);
#line 215
c_rt_lib0clear(&___nl__im__16);
#line 215
c_rt_lib0clear(&___nl__im__17);
#line 215
//clear ___nl__int__18;
#line 215
//clear ___nl__int__19;
#line 215
//clear ___nl__int__20;
#line 215
//clear ___nl__int__21;
#line 215
c_rt_lib0clear(&___nl__im__22);
#line 215
//clear ___nl__bool__24;
#line 215
return ___nl__bool__23;
#line 215
goto label_7;
#line 215
label_8:
#line 215
label_7:
#line 216
goto label_5;
#line 216
label_6:
#line 216
label_5:
#line 217
___nl__bool__26 = false;
#line 217
___nl__bool__25 = ___nl__bool__26;
#line 217
//clear ___nl__bool__1;
#line 217
c_rt_lib0clear(&___nl__im__2);
#line 217
c_rt_lib0clear(&___nl__im__3);
#line 217
//clear ___nl__bool__4;
#line 217
//clear ___nl__bool__5;
#line 217
//clear ___nl__bool__6;
#line 217
c_rt_lib0clear(&___nl__im__7);
#line 217
c_rt_lib0clear(&___nl__im__8);
#line 217
//clear ___nl__bool__9;
#line 217
//clear ___nl__bool__10;
#line 217
//clear ___nl__bool__11;
#line 217
c_rt_lib0clear(&___nl__im__12);
#line 217
c_rt_lib0clear(&___nl__im__13);
#line 217
//clear ___nl__bool__14;
#line 217
c_rt_lib0clear(&___nl__im__15);
#line 217
c_rt_lib0clear(&___nl__im__16);
#line 217
c_rt_lib0clear(&___nl__im__17);
#line 217
//clear ___nl__int__18;
#line 217
//clear ___nl__int__19;
#line 217
//clear ___nl__int__20;
#line 217
//clear ___nl__int__21;
#line 217
c_rt_lib0clear(&___nl__im__22);
#line 217
//clear ___nl__bool__23;
#line 217
//clear ___nl__bool__24;
#line 217
//clear ___nl__bool__26;
#line 217
return ___nl__bool__25;
#line 217
//clear ___nl__bool__1;
#line 217
c_rt_lib0clear(&___nl__im__2);
#line 217
c_rt_lib0clear(&___nl__im__3);
#line 217
//clear ___nl__bool__4;
#line 217
//clear ___nl__bool__5;
#line 217
//clear ___nl__bool__6;
#line 217
c_rt_lib0clear(&___nl__im__7);
#line 217
c_rt_lib0clear(&___nl__im__8);
#line 217
//clear ___nl__bool__9;
#line 217
//clear ___nl__bool__10;
#line 217
//clear ___nl__bool__11;
#line 217
c_rt_lib0clear(&___nl__im__12);
#line 217
c_rt_lib0clear(&___nl__im__13);
#line 217
//clear ___nl__bool__14;
#line 217
c_rt_lib0clear(&___nl__im__15);
#line 217
c_rt_lib0clear(&___nl__im__16);
#line 217
c_rt_lib0clear(&___nl__im__17);
#line 217
//clear ___nl__int__18;
#line 217
//clear ___nl__int__19;
#line 217
//clear ___nl__int__20;
#line 217
//clear ___nl__int__21;
#line 217
c_rt_lib0clear(&___nl__im__22);
#line 217
//clear ___nl__bool__23;
#line 217
//clear ___nl__bool__24;
#line 217
//clear ___nl__bool__25;
#line 217
//clear ___nl__bool__26;
#line 217
return NULL;
}

ImmT  ntokenizer0eat_text0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0eat_text");
ntokenizer0state_t0type var0 = (_tab[0]);
return ntokenizer0eat_text(&var0);
}
ImmT  ntokenizer0eat_text(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
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
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
#line 221
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(1135)));
#line 221
c_rt_lib0copy(&___nl__im__3, ___nl__im__2);
#line 221
___nl__bool__1 = ntokenizer0is_type(___ref___im__0, ___nl__im__3);
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
___nl__bool__1 = !___nl__bool__1;
#line 221
if(___nl__bool__1){ goto label_2;}
#line 221
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(1135)));
#line 221
c_rt_lib0copy(&___nl__im__7, ___nl__im__6);
#line 221
c_rt_lib0move(&___nl__im__5, ntokenizer0eat_type(___ref___im__0, ___nl__im__7));
#line 221
c_rt_lib0clear(&___nl__im__6);
#line 221
c_rt_lib0clear(&___nl__im__7);
#line 221
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 221
//clear ___nl__bool__1;
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
c_rt_lib0clear(&___nl__im__5);
#line 221
c_rt_lib0clear(&___nl__im__6);
#line 221
c_rt_lib0clear(&___nl__im__7);
#line 221
return ___nl__im__4;
#line 221
goto label_1;
#line 221
label_2:
#line 221
label_1:
#line 222
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(1150)));
#line 222
c_rt_lib0copy(&___nl__im__10, ___nl__im__9);
#line 222
___nl__bool__8 = ntokenizer0is_type(___ref___im__0, ___nl__im__10);
#line 222
c_rt_lib0clear(&___nl__im__9);
#line 222
c_rt_lib0clear(&___nl__im__10);
#line 222
c_rt_lib0clear(&___nl__im__9);
#line 222
c_rt_lib0clear(&___nl__im__10);
#line 222
___nl__bool__8 = !___nl__bool__8;
#line 222
if(___nl__bool__8){ goto label_4;}
#line 222
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(1150)));
#line 222
c_rt_lib0copy(&___nl__im__14, ___nl__im__13);
#line 222
c_rt_lib0move(&___nl__im__12, ntokenizer0eat_type(___ref___im__0, ___nl__im__14));
#line 222
c_rt_lib0clear(&___nl__im__13);
#line 222
c_rt_lib0clear(&___nl__im__14);
#line 222
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 222
//clear ___nl__bool__1;
#line 222
c_rt_lib0clear(&___nl__im__2);
#line 222
c_rt_lib0clear(&___nl__im__3);
#line 222
c_rt_lib0clear(&___nl__im__4);
#line 222
c_rt_lib0clear(&___nl__im__5);
#line 222
c_rt_lib0clear(&___nl__im__6);
#line 222
c_rt_lib0clear(&___nl__im__7);
#line 222
//clear ___nl__bool__8;
#line 222
c_rt_lib0clear(&___nl__im__9);
#line 222
c_rt_lib0clear(&___nl__im__10);
#line 222
c_rt_lib0clear(&___nl__im__12);
#line 222
c_rt_lib0clear(&___nl__im__13);
#line 222
c_rt_lib0clear(&___nl__im__14);
#line 222
return ___nl__im__11;
#line 222
goto label_3;
#line 222
label_4:
#line 222
label_3:
#line 223
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_const(1148)));
#line 223
c_rt_lib0copy(&___nl__im__17, ___nl__im__16);
#line 223
___nl__bool__15 = ntokenizer0is_type(___ref___im__0, ___nl__im__17);
#line 223
c_rt_lib0clear(&___nl__im__16);
#line 223
c_rt_lib0clear(&___nl__im__17);
#line 223
___nl__bool__15 = !___nl__bool__15;
#line 223
if(___nl__bool__15){ goto label_6;}
#line 225
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1159)));
#line 225
c_rt_lib0copy(&___nl__im__21, ___nl__im__20);
#line 225
___nl__int__22 = 0;
#line 225
___nl__int__23 = ___nl__int__22;
#line 225
___nl__int__24 = 1;
#line 225
___nl__int__25 = ___nl__int__24;
#line 225
c_rt_lib0move(&___nl__im__19, string0substr(___nl__im__21, ___nl__int__23, ___nl__int__25));
#line 225
c_rt_lib0clear(&___nl__im__20);
#line 225
c_rt_lib0clear(&___nl__im__21);
#line 225
//clear ___nl__int__22;
#line 225
//clear ___nl__int__23;
#line 225
//clear ___nl__int__24;
#line 225
//clear ___nl__int__25;
#line 225
c_rt_lib0copy(&___nl__im__26, ___nl__im__19);
#line 225
___nl__bool__18 = string0is_letter(___nl__im__26);
#line 225
c_rt_lib0clear(&___nl__im__19);
#line 225
c_rt_lib0clear(&___nl__im__20);
#line 225
c_rt_lib0clear(&___nl__im__21);
#line 225
//clear ___nl__int__22;
#line 225
//clear ___nl__int__23;
#line 225
//clear ___nl__int__24;
#line 225
//clear ___nl__int__25;
#line 225
c_rt_lib0clear(&___nl__im__26);
#line 225
c_rt_lib0clear(&___nl__im__19);
#line 225
c_rt_lib0clear(&___nl__im__20);
#line 225
c_rt_lib0clear(&___nl__im__21);
#line 225
//clear ___nl__int__22;
#line 225
//clear ___nl__int__23;
#line 225
//clear ___nl__int__24;
#line 225
//clear ___nl__int__25;
#line 225
c_rt_lib0clear(&___nl__im__26);
#line 225
___nl__bool__18 = !___nl__bool__18;
#line 225
if(___nl__bool__18){ goto label_8;}
#line 224
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_const(1148)));
#line 224
c_rt_lib0copy(&___nl__im__30, ___nl__im__29);
#line 224
c_rt_lib0move(&___nl__im__28, ntokenizer0eat_type(___ref___im__0, ___nl__im__30));
#line 224
c_rt_lib0clear(&___nl__im__29);
#line 224
c_rt_lib0clear(&___nl__im__30);
#line 224
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 224
//clear ___nl__bool__1;
#line 224
c_rt_lib0clear(&___nl__im__2);
#line 224
c_rt_lib0clear(&___nl__im__3);
#line 224
c_rt_lib0clear(&___nl__im__4);
#line 224
c_rt_lib0clear(&___nl__im__5);
#line 224
c_rt_lib0clear(&___nl__im__6);
#line 224
c_rt_lib0clear(&___nl__im__7);
#line 224
//clear ___nl__bool__8;
#line 224
c_rt_lib0clear(&___nl__im__9);
#line 224
c_rt_lib0clear(&___nl__im__10);
#line 224
c_rt_lib0clear(&___nl__im__11);
#line 224
c_rt_lib0clear(&___nl__im__12);
#line 224
c_rt_lib0clear(&___nl__im__13);
#line 224
c_rt_lib0clear(&___nl__im__14);
#line 224
//clear ___nl__bool__15;
#line 224
c_rt_lib0clear(&___nl__im__16);
#line 224
c_rt_lib0clear(&___nl__im__17);
#line 224
//clear ___nl__bool__18;
#line 224
c_rt_lib0clear(&___nl__im__19);
#line 224
c_rt_lib0clear(&___nl__im__20);
#line 224
c_rt_lib0clear(&___nl__im__21);
#line 224
//clear ___nl__int__22;
#line 224
//clear ___nl__int__23;
#line 224
//clear ___nl__int__24;
#line 224
//clear ___nl__int__25;
#line 224
c_rt_lib0clear(&___nl__im__26);
#line 224
c_rt_lib0clear(&___nl__im__28);
#line 224
c_rt_lib0clear(&___nl__im__29);
#line 224
c_rt_lib0clear(&___nl__im__30);
#line 224
return ___nl__im__27;
#line 224
goto label_7;
#line 224
label_8:
#line 224
label_7:
#line 226
goto label_5;
#line 226
label_6:
#line 226
label_5:
#line 227
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 227
nl_die_arg(___nl__im__31);
#line 227
//clear ___nl__bool__1;
#line 227
c_rt_lib0clear(&___nl__im__2);
#line 227
c_rt_lib0clear(&___nl__im__3);
#line 227
c_rt_lib0clear(&___nl__im__4);
#line 227
c_rt_lib0clear(&___nl__im__5);
#line 227
c_rt_lib0clear(&___nl__im__6);
#line 227
c_rt_lib0clear(&___nl__im__7);
#line 227
//clear ___nl__bool__8;
#line 227
c_rt_lib0clear(&___nl__im__9);
#line 227
c_rt_lib0clear(&___nl__im__10);
#line 227
c_rt_lib0clear(&___nl__im__11);
#line 227
c_rt_lib0clear(&___nl__im__12);
#line 227
c_rt_lib0clear(&___nl__im__13);
#line 227
c_rt_lib0clear(&___nl__im__14);
#line 227
//clear ___nl__bool__15;
#line 227
c_rt_lib0clear(&___nl__im__16);
#line 227
c_rt_lib0clear(&___nl__im__17);
#line 227
//clear ___nl__bool__18;
#line 227
c_rt_lib0clear(&___nl__im__19);
#line 227
c_rt_lib0clear(&___nl__im__20);
#line 227
c_rt_lib0clear(&___nl__im__21);
#line 227
//clear ___nl__int__22;
#line 227
//clear ___nl__int__23;
#line 227
//clear ___nl__int__24;
#line 227
//clear ___nl__int__25;
#line 227
c_rt_lib0clear(&___nl__im__26);
#line 227
c_rt_lib0clear(&___nl__im__27);
#line 227
c_rt_lib0clear(&___nl__im__28);
#line 227
c_rt_lib0clear(&___nl__im__29);
#line 227
c_rt_lib0clear(&___nl__im__30);
#line 227
c_rt_lib0clear(&___nl__im__31);
#line 227
return NULL;
}

ImmT  ntokenizer0info0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0info");
ntokenizer0state_t0type var0 = (_tab[0]);
return ntokenizer0info(var0);
}
ImmT  ntokenizer0info(ntokenizer0state_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ntokenizer_priv0__const__init();
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
ImmT  ___nl__string__12 = NULL;
ImmT  ___nl__string__13 = NULL;
ImmT  ___nl__string__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__string__16 = NULL;
ImmT  ___nl__string__17 = NULL;
ImmT  ___nl__string__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
ImmT  ___nl__string__23 = NULL;
ImmT  ___nl__string__24 = NULL;
ImmT  ___nl__string__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__string__27 = NULL;
ImmT  ___nl__string__28 = NULL;
ImmT  ___nl__string__29 = NULL;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
INT  ___nl__int__39 = 0;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
INT  ___nl__int__42 = 0;
ImmT  ___nl__string__43 = NULL;
ImmT  ___nl__string__44 = NULL;
ImmT  ___nl__string__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__string__47 = NULL;
ImmT  ___nl__string__48 = NULL;
ImmT  ___nl__string__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__string__53 = NULL;
ImmT  ___nl__string__54 = NULL;
ImmT  ___nl__string__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__string__57 = NULL;
ImmT  ___nl__string__58 = NULL;
ImmT  ___nl__string__59 = NULL;
#line 231
c_rt_lib0move(&___nl__im__10,___get_global_const(1166));
#line 231
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1159)));
#line 231
c_rt_lib0copy(&___nl__string__12, ___nl__im__10);
#line 231
c_rt_lib0copy(&___nl__string__13, ___nl__im__11);
#line 231
c_rt_lib0move(&___nl__string__14, c_rt_lib0concat_new(___nl__string__12, ___nl__string__13));
#line 231
c_rt_lib0copy(&___nl__im__9, ___nl__string__14);
#line 231
c_rt_lib0clear(&___nl__im__10);
#line 231
c_rt_lib0clear(&___nl__im__11);
#line 231
c_rt_lib0clear(&___nl__string__12);
#line 231
c_rt_lib0clear(&___nl__string__13);
#line 231
c_rt_lib0clear(&___nl__string__14);
#line 231
c_rt_lib0move(&___nl__im__15,___get_global_const(1167));
#line 231
c_rt_lib0copy(&___nl__string__16, ___nl__im__9);
#line 231
c_rt_lib0copy(&___nl__string__17, ___nl__im__15);
#line 231
c_rt_lib0move(&___nl__string__18, c_rt_lib0concat_new(___nl__string__16, ___nl__string__17));
#line 231
c_rt_lib0copy(&___nl__im__8, ___nl__string__18);
#line 231
c_rt_lib0clear(&___nl__im__9);
#line 231
c_rt_lib0clear(&___nl__im__10);
#line 231
c_rt_lib0clear(&___nl__im__11);
#line 231
c_rt_lib0clear(&___nl__string__12);
#line 231
c_rt_lib0clear(&___nl__string__13);
#line 231
c_rt_lib0clear(&___nl__string__14);
#line 231
c_rt_lib0clear(&___nl__im__15);
#line 231
c_rt_lib0clear(&___nl__string__16);
#line 231
c_rt_lib0clear(&___nl__string__17);
#line 231
c_rt_lib0clear(&___nl__string__18);
#line 232
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1160)));
#line 232
___nl__int__20 = getIntFromImm(___nl__im__21);
#line 232
c_rt_lib0clear(&___nl__im__21);
#line 232
___nl__int__22 = ___nl__int__20;
#line 232
c_rt_lib0move(&___nl__im__19, ptd0int_to_string(___nl__int__22));
#line 232
//clear ___nl__int__20;
#line 232
c_rt_lib0clear(&___nl__im__21);
#line 232
//clear ___nl__int__22;
#line 232
c_rt_lib0copy(&___nl__string__23, ___nl__im__8);
#line 232
c_rt_lib0copy(&___nl__string__24, ___nl__im__19);
#line 232
c_rt_lib0move(&___nl__string__25, c_rt_lib0concat_new(___nl__string__23, ___nl__string__24));
#line 232
c_rt_lib0copy(&___nl__im__7, ___nl__string__25);
#line 232
c_rt_lib0clear(&___nl__im__8);
#line 232
c_rt_lib0clear(&___nl__im__9);
#line 232
c_rt_lib0clear(&___nl__im__10);
#line 232
c_rt_lib0clear(&___nl__im__11);
#line 232
c_rt_lib0clear(&___nl__string__12);
#line 232
c_rt_lib0clear(&___nl__string__13);
#line 232
c_rt_lib0clear(&___nl__string__14);
#line 232
c_rt_lib0clear(&___nl__im__15);
#line 232
c_rt_lib0clear(&___nl__string__16);
#line 232
c_rt_lib0clear(&___nl__string__17);
#line 232
c_rt_lib0clear(&___nl__string__18);
#line 232
c_rt_lib0clear(&___nl__im__19);
#line 232
//clear ___nl__int__20;
#line 232
c_rt_lib0clear(&___nl__im__21);
#line 232
//clear ___nl__int__22;
#line 232
c_rt_lib0clear(&___nl__string__23);
#line 232
c_rt_lib0clear(&___nl__string__24);
#line 232
c_rt_lib0clear(&___nl__string__25);
#line 232
c_rt_lib0move(&___nl__im__26,___get_global_const(1168));
#line 232
c_rt_lib0copy(&___nl__string__27, ___nl__im__7);
#line 232
c_rt_lib0copy(&___nl__string__28, ___nl__im__26);
#line 232
c_rt_lib0move(&___nl__string__29, c_rt_lib0concat_new(___nl__string__27, ___nl__string__28));
#line 232
c_rt_lib0copy(&___nl__im__6, ___nl__string__29);
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
c_rt_lib0clear(&___nl__string__12);
#line 232
c_rt_lib0clear(&___nl__string__13);
#line 232
c_rt_lib0clear(&___nl__string__14);
#line 232
c_rt_lib0clear(&___nl__im__15);
#line 232
c_rt_lib0clear(&___nl__string__16);
#line 232
c_rt_lib0clear(&___nl__string__17);
#line 232
c_rt_lib0clear(&___nl__string__18);
#line 232
c_rt_lib0clear(&___nl__im__19);
#line 232
//clear ___nl__int__20;
#line 232
c_rt_lib0clear(&___nl__im__21);
#line 232
//clear ___nl__int__22;
#line 232
c_rt_lib0clear(&___nl__string__23);
#line 232
c_rt_lib0clear(&___nl__string__24);
#line 232
c_rt_lib0clear(&___nl__string__25);
#line 232
c_rt_lib0clear(&___nl__im__26);
#line 232
c_rt_lib0clear(&___nl__string__27);
#line 232
c_rt_lib0clear(&___nl__string__28);
#line 232
c_rt_lib0clear(&___nl__string__29);
#line 233
___nl__int__34 = 1;
#line 233
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(289)));
#line 233
___nl__int__35 = getIntFromImm(___nl__im__36);
#line 233
c_rt_lib0clear(&___nl__im__36);
#line 233
___nl__int__33 = ___nl__int__34 + ___nl__int__35;
#line 233
//clear ___nl__int__34;
#line 233
//clear ___nl__int__35;
#line 233
c_rt_lib0clear(&___nl__im__36);
#line 233
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1161)));
#line 233
___nl__int__37 = getIntFromImm(___nl__im__38);
#line 233
c_rt_lib0clear(&___nl__im__38);
#line 233
___nl__int__32 = ___nl__int__33 - ___nl__int__37;
#line 233
//clear ___nl__int__33;
#line 233
//clear ___nl__int__34;
#line 233
//clear ___nl__int__35;
#line 233
c_rt_lib0clear(&___nl__im__36);
#line 233
//clear ___nl__int__37;
#line 233
c_rt_lib0clear(&___nl__im__38);
#line 233
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1159)));
#line 233
c_rt_lib0copy(&___nl__im__41, ___nl__im__40);
#line 233
___nl__int__39 = string0length(___nl__im__41);
#line 233
c_rt_lib0clear(&___nl__im__40);
#line 233
c_rt_lib0clear(&___nl__im__41);
#line 233
___nl__int__31 = ___nl__int__32 - ___nl__int__39;
#line 233
//clear ___nl__int__32;
#line 233
//clear ___nl__int__33;
#line 233
//clear ___nl__int__34;
#line 233
//clear ___nl__int__35;
#line 233
c_rt_lib0clear(&___nl__im__36);
#line 233
//clear ___nl__int__37;
#line 233
c_rt_lib0clear(&___nl__im__38);
#line 233
//clear ___nl__int__39;
#line 233
c_rt_lib0clear(&___nl__im__40);
#line 233
c_rt_lib0clear(&___nl__im__41);
#line 233
___nl__int__42 = ___nl__int__31;
#line 233
c_rt_lib0move(&___nl__im__30, ptd0int_to_string(___nl__int__42));
#line 233
//clear ___nl__int__31;
#line 233
//clear ___nl__int__32;
#line 233
//clear ___nl__int__33;
#line 233
//clear ___nl__int__34;
#line 233
//clear ___nl__int__35;
#line 233
c_rt_lib0clear(&___nl__im__36);
#line 233
//clear ___nl__int__37;
#line 233
c_rt_lib0clear(&___nl__im__38);
#line 233
//clear ___nl__int__39;
#line 233
c_rt_lib0clear(&___nl__im__40);
#line 233
c_rt_lib0clear(&___nl__im__41);
#line 233
//clear ___nl__int__42;
#line 233
c_rt_lib0copy(&___nl__string__43, ___nl__im__6);
#line 233
c_rt_lib0copy(&___nl__string__44, ___nl__im__30);
#line 233
c_rt_lib0move(&___nl__string__45, c_rt_lib0concat_new(___nl__string__43, ___nl__string__44));
#line 233
c_rt_lib0copy(&___nl__im__5, ___nl__string__45);
#line 233
c_rt_lib0clear(&___nl__im__6);
#line 233
c_rt_lib0clear(&___nl__im__7);
#line 233
c_rt_lib0clear(&___nl__im__8);
#line 233
c_rt_lib0clear(&___nl__im__9);
#line 233
c_rt_lib0clear(&___nl__im__10);
#line 233
c_rt_lib0clear(&___nl__im__11);
#line 233
c_rt_lib0clear(&___nl__string__12);
#line 233
c_rt_lib0clear(&___nl__string__13);
#line 233
c_rt_lib0clear(&___nl__string__14);
#line 233
c_rt_lib0clear(&___nl__im__15);
#line 233
c_rt_lib0clear(&___nl__string__16);
#line 233
c_rt_lib0clear(&___nl__string__17);
#line 233
c_rt_lib0clear(&___nl__string__18);
#line 233
c_rt_lib0clear(&___nl__im__19);
#line 233
//clear ___nl__int__20;
#line 233
c_rt_lib0clear(&___nl__im__21);
#line 233
//clear ___nl__int__22;
#line 233
c_rt_lib0clear(&___nl__string__23);
#line 233
c_rt_lib0clear(&___nl__string__24);
#line 233
c_rt_lib0clear(&___nl__string__25);
#line 233
c_rt_lib0clear(&___nl__im__26);
#line 233
c_rt_lib0clear(&___nl__string__27);
#line 233
c_rt_lib0clear(&___nl__string__28);
#line 233
c_rt_lib0clear(&___nl__string__29);
#line 233
c_rt_lib0clear(&___nl__im__30);
#line 233
//clear ___nl__int__31;
#line 233
//clear ___nl__int__32;
#line 233
//clear ___nl__int__33;
#line 233
//clear ___nl__int__34;
#line 233
//clear ___nl__int__35;
#line 233
c_rt_lib0clear(&___nl__im__36);
#line 233
//clear ___nl__int__37;
#line 233
c_rt_lib0clear(&___nl__im__38);
#line 233
//clear ___nl__int__39;
#line 233
c_rt_lib0clear(&___nl__im__40);
#line 233
c_rt_lib0clear(&___nl__im__41);
#line 233
//clear ___nl__int__42;
#line 233
c_rt_lib0clear(&___nl__string__43);
#line 233
c_rt_lib0clear(&___nl__string__44);
#line 233
c_rt_lib0clear(&___nl__string__45);
#line 233
c_rt_lib0move(&___nl__im__46,___get_global_const(1169));
#line 233
c_rt_lib0copy(&___nl__string__47, ___nl__im__5);
#line 233
c_rt_lib0copy(&___nl__string__48, ___nl__im__46);
#line 233
c_rt_lib0move(&___nl__string__49, c_rt_lib0concat_new(___nl__string__47, ___nl__string__48));
#line 233
c_rt_lib0copy(&___nl__im__4, ___nl__string__49);
#line 233
c_rt_lib0clear(&___nl__im__5);
#line 233
c_rt_lib0clear(&___nl__im__6);
#line 233
c_rt_lib0clear(&___nl__im__7);
#line 233
c_rt_lib0clear(&___nl__im__8);
#line 233
c_rt_lib0clear(&___nl__im__9);
#line 233
c_rt_lib0clear(&___nl__im__10);
#line 233
c_rt_lib0clear(&___nl__im__11);
#line 233
c_rt_lib0clear(&___nl__string__12);
#line 233
c_rt_lib0clear(&___nl__string__13);
#line 233
c_rt_lib0clear(&___nl__string__14);
#line 233
c_rt_lib0clear(&___nl__im__15);
#line 233
c_rt_lib0clear(&___nl__string__16);
#line 233
c_rt_lib0clear(&___nl__string__17);
#line 233
c_rt_lib0clear(&___nl__string__18);
#line 233
c_rt_lib0clear(&___nl__im__19);
#line 233
//clear ___nl__int__20;
#line 233
c_rt_lib0clear(&___nl__im__21);
#line 233
//clear ___nl__int__22;
#line 233
c_rt_lib0clear(&___nl__string__23);
#line 233
c_rt_lib0clear(&___nl__string__24);
#line 233
c_rt_lib0clear(&___nl__string__25);
#line 233
c_rt_lib0clear(&___nl__im__26);
#line 233
c_rt_lib0clear(&___nl__string__27);
#line 233
c_rt_lib0clear(&___nl__string__28);
#line 233
c_rt_lib0clear(&___nl__string__29);
#line 233
c_rt_lib0clear(&___nl__im__30);
#line 233
//clear ___nl__int__31;
#line 233
//clear ___nl__int__32;
#line 233
//clear ___nl__int__33;
#line 233
//clear ___nl__int__34;
#line 233
//clear ___nl__int__35;
#line 233
c_rt_lib0clear(&___nl__im__36);
#line 233
//clear ___nl__int__37;
#line 233
c_rt_lib0clear(&___nl__im__38);
#line 233
//clear ___nl__int__39;
#line 233
c_rt_lib0clear(&___nl__im__40);
#line 233
c_rt_lib0clear(&___nl__im__41);
#line 233
//clear ___nl__int__42;
#line 233
c_rt_lib0clear(&___nl__string__43);
#line 233
c_rt_lib0clear(&___nl__string__44);
#line 233
c_rt_lib0clear(&___nl__string__45);
#line 233
c_rt_lib0clear(&___nl__im__46);
#line 233
c_rt_lib0clear(&___nl__string__47);
#line 233
c_rt_lib0clear(&___nl__string__48);
#line 233
c_rt_lib0clear(&___nl__string__49);
#line 234
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(96)));
#line 234
c_rt_lib0copy(&___nl__im__52, ___nl__im__51);
#line 234
c_rt_lib0move(&___nl__im__50, ov0get_element(___nl__im__52));
#line 234
c_rt_lib0clear(&___nl__im__51);
#line 234
c_rt_lib0clear(&___nl__im__52);
#line 234
c_rt_lib0copy(&___nl__string__53, ___nl__im__4);
#line 234
c_rt_lib0copy(&___nl__string__54, ___nl__im__50);
#line 234
c_rt_lib0move(&___nl__string__55, c_rt_lib0concat_new(___nl__string__53, ___nl__string__54));
#line 234
c_rt_lib0copy(&___nl__im__3, ___nl__string__55);
#line 234
c_rt_lib0clear(&___nl__im__4);
#line 234
c_rt_lib0clear(&___nl__im__5);
#line 234
c_rt_lib0clear(&___nl__im__6);
#line 234
c_rt_lib0clear(&___nl__im__7);
#line 234
c_rt_lib0clear(&___nl__im__8);
#line 234
c_rt_lib0clear(&___nl__im__9);
#line 234
c_rt_lib0clear(&___nl__im__10);
#line 234
c_rt_lib0clear(&___nl__im__11);
#line 234
c_rt_lib0clear(&___nl__string__12);
#line 234
c_rt_lib0clear(&___nl__string__13);
#line 234
c_rt_lib0clear(&___nl__string__14);
#line 234
c_rt_lib0clear(&___nl__im__15);
#line 234
c_rt_lib0clear(&___nl__string__16);
#line 234
c_rt_lib0clear(&___nl__string__17);
#line 234
c_rt_lib0clear(&___nl__string__18);
#line 234
c_rt_lib0clear(&___nl__im__19);
#line 234
//clear ___nl__int__20;
#line 234
c_rt_lib0clear(&___nl__im__21);
#line 234
//clear ___nl__int__22;
#line 234
c_rt_lib0clear(&___nl__string__23);
#line 234
c_rt_lib0clear(&___nl__string__24);
#line 234
c_rt_lib0clear(&___nl__string__25);
#line 234
c_rt_lib0clear(&___nl__im__26);
#line 234
c_rt_lib0clear(&___nl__string__27);
#line 234
c_rt_lib0clear(&___nl__string__28);
#line 234
c_rt_lib0clear(&___nl__string__29);
#line 234
c_rt_lib0clear(&___nl__im__30);
#line 234
//clear ___nl__int__31;
#line 234
//clear ___nl__int__32;
#line 234
//clear ___nl__int__33;
#line 234
//clear ___nl__int__34;
#line 234
//clear ___nl__int__35;
#line 234
c_rt_lib0clear(&___nl__im__36);
#line 234
//clear ___nl__int__37;
#line 234
c_rt_lib0clear(&___nl__im__38);
#line 234
//clear ___nl__int__39;
#line 234
c_rt_lib0clear(&___nl__im__40);
#line 234
c_rt_lib0clear(&___nl__im__41);
#line 234
//clear ___nl__int__42;
#line 234
c_rt_lib0clear(&___nl__string__43);
#line 234
c_rt_lib0clear(&___nl__string__44);
#line 234
c_rt_lib0clear(&___nl__string__45);
#line 234
c_rt_lib0clear(&___nl__im__46);
#line 234
c_rt_lib0clear(&___nl__string__47);
#line 234
c_rt_lib0clear(&___nl__string__48);
#line 234
c_rt_lib0clear(&___nl__string__49);
#line 234
c_rt_lib0clear(&___nl__im__50);
#line 234
c_rt_lib0clear(&___nl__im__51);
#line 234
c_rt_lib0clear(&___nl__im__52);
#line 234
c_rt_lib0clear(&___nl__string__53);
#line 234
c_rt_lib0clear(&___nl__string__54);
#line 234
c_rt_lib0clear(&___nl__string__55);
#line 234
c_rt_lib0move(&___nl__im__56,___get_global_const(420));
#line 234
c_rt_lib0copy(&___nl__string__57, ___nl__im__3);
#line 234
c_rt_lib0copy(&___nl__string__58, ___nl__im__56);
#line 234
c_rt_lib0move(&___nl__string__59, c_rt_lib0concat_new(___nl__string__57, ___nl__string__58));
#line 234
c_rt_lib0copy(&___nl__im__2, ___nl__string__59);
#line 234
c_rt_lib0clear(&___nl__im__3);
#line 234
c_rt_lib0clear(&___nl__im__4);
#line 234
c_rt_lib0clear(&___nl__im__5);
#line 234
c_rt_lib0clear(&___nl__im__6);
#line 234
c_rt_lib0clear(&___nl__im__7);
#line 234
c_rt_lib0clear(&___nl__im__8);
#line 234
c_rt_lib0clear(&___nl__im__9);
#line 234
c_rt_lib0clear(&___nl__im__10);
#line 234
c_rt_lib0clear(&___nl__im__11);
#line 234
c_rt_lib0clear(&___nl__string__12);
#line 234
c_rt_lib0clear(&___nl__string__13);
#line 234
c_rt_lib0clear(&___nl__string__14);
#line 234
c_rt_lib0clear(&___nl__im__15);
#line 234
c_rt_lib0clear(&___nl__string__16);
#line 234
c_rt_lib0clear(&___nl__string__17);
#line 234
c_rt_lib0clear(&___nl__string__18);
#line 234
c_rt_lib0clear(&___nl__im__19);
#line 234
//clear ___nl__int__20;
#line 234
c_rt_lib0clear(&___nl__im__21);
#line 234
//clear ___nl__int__22;
#line 234
c_rt_lib0clear(&___nl__string__23);
#line 234
c_rt_lib0clear(&___nl__string__24);
#line 234
c_rt_lib0clear(&___nl__string__25);
#line 234
c_rt_lib0clear(&___nl__im__26);
#line 234
c_rt_lib0clear(&___nl__string__27);
#line 234
c_rt_lib0clear(&___nl__string__28);
#line 234
c_rt_lib0clear(&___nl__string__29);
#line 234
c_rt_lib0clear(&___nl__im__30);
#line 234
//clear ___nl__int__31;
#line 234
//clear ___nl__int__32;
#line 234
//clear ___nl__int__33;
#line 234
//clear ___nl__int__34;
#line 234
//clear ___nl__int__35;
#line 234
c_rt_lib0clear(&___nl__im__36);
#line 234
//clear ___nl__int__37;
#line 234
c_rt_lib0clear(&___nl__im__38);
#line 234
//clear ___nl__int__39;
#line 234
c_rt_lib0clear(&___nl__im__40);
#line 234
c_rt_lib0clear(&___nl__im__41);
#line 234
//clear ___nl__int__42;
#line 234
c_rt_lib0clear(&___nl__string__43);
#line 234
c_rt_lib0clear(&___nl__string__44);
#line 234
c_rt_lib0clear(&___nl__string__45);
#line 234
c_rt_lib0clear(&___nl__im__46);
#line 234
c_rt_lib0clear(&___nl__string__47);
#line 234
c_rt_lib0clear(&___nl__string__48);
#line 234
c_rt_lib0clear(&___nl__string__49);
#line 234
c_rt_lib0clear(&___nl__im__50);
#line 234
c_rt_lib0clear(&___nl__im__51);
#line 234
c_rt_lib0clear(&___nl__im__52);
#line 234
c_rt_lib0clear(&___nl__string__53);
#line 234
c_rt_lib0clear(&___nl__string__54);
#line 234
c_rt_lib0clear(&___nl__string__55);
#line 234
c_rt_lib0clear(&___nl__im__56);
#line 234
c_rt_lib0clear(&___nl__string__57);
#line 234
c_rt_lib0clear(&___nl__string__58);
#line 234
c_rt_lib0clear(&___nl__string__59);
#line 234
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 234
c_rt_lib0clear(&___nl__im__0);
#line 234
c_rt_lib0clear(&___nl__im__2);
#line 234
c_rt_lib0clear(&___nl__im__3);
#line 234
c_rt_lib0clear(&___nl__im__4);
#line 234
c_rt_lib0clear(&___nl__im__5);
#line 234
c_rt_lib0clear(&___nl__im__6);
#line 234
c_rt_lib0clear(&___nl__im__7);
#line 234
c_rt_lib0clear(&___nl__im__8);
#line 234
c_rt_lib0clear(&___nl__im__9);
#line 234
c_rt_lib0clear(&___nl__im__10);
#line 234
c_rt_lib0clear(&___nl__im__11);
#line 234
c_rt_lib0clear(&___nl__string__12);
#line 234
c_rt_lib0clear(&___nl__string__13);
#line 234
c_rt_lib0clear(&___nl__string__14);
#line 234
c_rt_lib0clear(&___nl__im__15);
#line 234
c_rt_lib0clear(&___nl__string__16);
#line 234
c_rt_lib0clear(&___nl__string__17);
#line 234
c_rt_lib0clear(&___nl__string__18);
#line 234
c_rt_lib0clear(&___nl__im__19);
#line 234
//clear ___nl__int__20;
#line 234
c_rt_lib0clear(&___nl__im__21);
#line 234
//clear ___nl__int__22;
#line 234
c_rt_lib0clear(&___nl__string__23);
#line 234
c_rt_lib0clear(&___nl__string__24);
#line 234
c_rt_lib0clear(&___nl__string__25);
#line 234
c_rt_lib0clear(&___nl__im__26);
#line 234
c_rt_lib0clear(&___nl__string__27);
#line 234
c_rt_lib0clear(&___nl__string__28);
#line 234
c_rt_lib0clear(&___nl__string__29);
#line 234
c_rt_lib0clear(&___nl__im__30);
#line 234
//clear ___nl__int__31;
#line 234
//clear ___nl__int__32;
#line 234
//clear ___nl__int__33;
#line 234
//clear ___nl__int__34;
#line 234
//clear ___nl__int__35;
#line 234
c_rt_lib0clear(&___nl__im__36);
#line 234
//clear ___nl__int__37;
#line 234
c_rt_lib0clear(&___nl__im__38);
#line 234
//clear ___nl__int__39;
#line 234
c_rt_lib0clear(&___nl__im__40);
#line 234
c_rt_lib0clear(&___nl__im__41);
#line 234
//clear ___nl__int__42;
#line 234
c_rt_lib0clear(&___nl__string__43);
#line 234
c_rt_lib0clear(&___nl__string__44);
#line 234
c_rt_lib0clear(&___nl__string__45);
#line 234
c_rt_lib0clear(&___nl__im__46);
#line 234
c_rt_lib0clear(&___nl__string__47);
#line 234
c_rt_lib0clear(&___nl__string__48);
#line 234
c_rt_lib0clear(&___nl__string__49);
#line 234
c_rt_lib0clear(&___nl__im__50);
#line 234
c_rt_lib0clear(&___nl__im__51);
#line 234
c_rt_lib0clear(&___nl__im__52);
#line 234
c_rt_lib0clear(&___nl__string__53);
#line 234
c_rt_lib0clear(&___nl__string__54);
#line 234
c_rt_lib0clear(&___nl__string__55);
#line 234
c_rt_lib0clear(&___nl__im__56);
#line 234
c_rt_lib0clear(&___nl__string__57);
#line 234
c_rt_lib0clear(&___nl__string__58);
#line 234
c_rt_lib0clear(&___nl__string__59);
#line 234
return ___nl__im__1;
#line 234
c_rt_lib0clear(&___nl__im__0);
#line 234
c_rt_lib0clear(&___nl__im__1);
#line 234
c_rt_lib0clear(&___nl__im__2);
#line 234
c_rt_lib0clear(&___nl__im__3);
#line 234
c_rt_lib0clear(&___nl__im__4);
#line 234
c_rt_lib0clear(&___nl__im__5);
#line 234
c_rt_lib0clear(&___nl__im__6);
#line 234
c_rt_lib0clear(&___nl__im__7);
#line 234
c_rt_lib0clear(&___nl__im__8);
#line 234
c_rt_lib0clear(&___nl__im__9);
#line 234
c_rt_lib0clear(&___nl__im__10);
#line 234
c_rt_lib0clear(&___nl__im__11);
#line 234
c_rt_lib0clear(&___nl__string__12);
#line 234
c_rt_lib0clear(&___nl__string__13);
#line 234
c_rt_lib0clear(&___nl__string__14);
#line 234
c_rt_lib0clear(&___nl__im__15);
#line 234
c_rt_lib0clear(&___nl__string__16);
#line 234
c_rt_lib0clear(&___nl__string__17);
#line 234
c_rt_lib0clear(&___nl__string__18);
#line 234
c_rt_lib0clear(&___nl__im__19);
#line 234
//clear ___nl__int__20;
#line 234
c_rt_lib0clear(&___nl__im__21);
#line 234
//clear ___nl__int__22;
#line 234
c_rt_lib0clear(&___nl__string__23);
#line 234
c_rt_lib0clear(&___nl__string__24);
#line 234
c_rt_lib0clear(&___nl__string__25);
#line 234
c_rt_lib0clear(&___nl__im__26);
#line 234
c_rt_lib0clear(&___nl__string__27);
#line 234
c_rt_lib0clear(&___nl__string__28);
#line 234
c_rt_lib0clear(&___nl__string__29);
#line 234
c_rt_lib0clear(&___nl__im__30);
#line 234
//clear ___nl__int__31;
#line 234
//clear ___nl__int__32;
#line 234
//clear ___nl__int__33;
#line 234
//clear ___nl__int__34;
#line 234
//clear ___nl__int__35;
#line 234
c_rt_lib0clear(&___nl__im__36);
#line 234
//clear ___nl__int__37;
#line 234
c_rt_lib0clear(&___nl__im__38);
#line 234
//clear ___nl__int__39;
#line 234
c_rt_lib0clear(&___nl__im__40);
#line 234
c_rt_lib0clear(&___nl__im__41);
#line 234
//clear ___nl__int__42;
#line 234
c_rt_lib0clear(&___nl__string__43);
#line 234
c_rt_lib0clear(&___nl__string__44);
#line 234
c_rt_lib0clear(&___nl__string__45);
#line 234
c_rt_lib0clear(&___nl__im__46);
#line 234
c_rt_lib0clear(&___nl__string__47);
#line 234
c_rt_lib0clear(&___nl__string__48);
#line 234
c_rt_lib0clear(&___nl__string__49);
#line 234
c_rt_lib0clear(&___nl__im__50);
#line 234
c_rt_lib0clear(&___nl__im__51);
#line 234
c_rt_lib0clear(&___nl__im__52);
#line 234
c_rt_lib0clear(&___nl__string__53);
#line 234
c_rt_lib0clear(&___nl__string__54);
#line 234
c_rt_lib0clear(&___nl__string__55);
#line 234
c_rt_lib0clear(&___nl__im__56);
#line 234
c_rt_lib0clear(&___nl__string__57);
#line 234
c_rt_lib0clear(&___nl__string__58);
#line 234
c_rt_lib0clear(&___nl__string__59);
#line 234
return NULL;
}

bool ntokenizer_priv0is_hex_number(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ntokenizer_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
#line 239
c_rt_lib0copy(&___nl__im__5, ___nl__im__0);
#line 239
___nl__bool__2 = string0is_digit(___nl__im__5);
#line 239
c_rt_lib0clear(&___nl__im__5);
#line 239
if(___nl__bool__2){ goto label_2;}
#line 239
c_rt_lib0copy(&___nl__im__8, ___nl__im__0);
#line 239
___nl__int__7 = string0ord(___nl__im__8);
#line 239
c_rt_lib0clear(&___nl__im__8);
#line 239
___nl__int__9 = 65;
#line 239
___nl__int__10 = ___nl__int__7 >= ___nl__int__9;
#line 239
___nl__bool__2 = ___nl__int__10;
#line 239
//clear ___nl__int__7;
#line 239
c_rt_lib0clear(&___nl__im__8);
#line 239
//clear ___nl__int__9;
#line 239
//clear ___nl__int__10;
#line 239
___nl__bool__6 = !___nl__bool__2;
#line 239
if(___nl__bool__6){ goto label_3;}
#line 239
c_rt_lib0copy(&___nl__im__12, ___nl__im__0);
#line 239
___nl__int__11 = string0ord(___nl__im__12);
#line 239
c_rt_lib0clear(&___nl__im__12);
#line 239
___nl__int__13 = 70;
#line 239
___nl__int__14 = ___nl__int__11 <= ___nl__int__13;
#line 239
___nl__bool__2 = ___nl__int__14;
#line 239
//clear ___nl__int__11;
#line 239
c_rt_lib0clear(&___nl__im__12);
#line 239
//clear ___nl__int__13;
#line 239
//clear ___nl__int__14;
#line 239
label_3:
#line 239
//clear ___nl__bool__6;
#line 239
//clear ___nl__int__7;
#line 239
c_rt_lib0clear(&___nl__im__8);
#line 239
//clear ___nl__int__9;
#line 239
//clear ___nl__int__10;
#line 239
//clear ___nl__int__11;
#line 239
c_rt_lib0clear(&___nl__im__12);
#line 239
//clear ___nl__int__13;
#line 239
//clear ___nl__int__14;
#line 239
//clear ___nl__bool__6;
#line 239
//clear ___nl__int__7;
#line 239
c_rt_lib0clear(&___nl__im__8);
#line 239
//clear ___nl__int__9;
#line 239
//clear ___nl__int__10;
#line 239
//clear ___nl__int__11;
#line 239
c_rt_lib0clear(&___nl__im__12);
#line 239
//clear ___nl__int__13;
#line 239
//clear ___nl__int__14;
#line 239
label_2:
#line 239
//clear ___nl__bool__4;
#line 239
c_rt_lib0clear(&___nl__im__5);
#line 239
//clear ___nl__bool__6;
#line 239
//clear ___nl__int__7;
#line 239
c_rt_lib0clear(&___nl__im__8);
#line 239
//clear ___nl__int__9;
#line 239
//clear ___nl__int__10;
#line 239
//clear ___nl__int__11;
#line 239
c_rt_lib0clear(&___nl__im__12);
#line 239
//clear ___nl__int__13;
#line 239
//clear ___nl__int__14;
#line 239
if(___nl__bool__2){ goto label_1;}
#line 240
c_rt_lib0copy(&___nl__im__17, ___nl__im__0);
#line 240
___nl__int__16 = string0ord(___nl__im__17);
#line 240
c_rt_lib0clear(&___nl__im__17);
#line 240
___nl__int__18 = 97;
#line 240
___nl__int__19 = ___nl__int__16 >= ___nl__int__18;
#line 240
___nl__bool__2 = ___nl__int__19;
#line 240
//clear ___nl__int__16;
#line 240
c_rt_lib0clear(&___nl__im__17);
#line 240
//clear ___nl__int__18;
#line 240
//clear ___nl__int__19;
#line 240
___nl__bool__15 = !___nl__bool__2;
#line 240
if(___nl__bool__15){ goto label_4;}
#line 240
c_rt_lib0copy(&___nl__im__21, ___nl__im__0);
#line 240
___nl__int__20 = string0ord(___nl__im__21);
#line 240
c_rt_lib0clear(&___nl__im__21);
#line 240
___nl__int__22 = 102;
#line 240
___nl__int__23 = ___nl__int__20 <= ___nl__int__22;
#line 240
___nl__bool__2 = ___nl__int__23;
#line 240
//clear ___nl__int__20;
#line 240
c_rt_lib0clear(&___nl__im__21);
#line 240
//clear ___nl__int__22;
#line 240
//clear ___nl__int__23;
#line 240
label_4:
#line 240
//clear ___nl__bool__15;
#line 240
//clear ___nl__int__16;
#line 240
c_rt_lib0clear(&___nl__im__17);
#line 240
//clear ___nl__int__18;
#line 240
//clear ___nl__int__19;
#line 240
//clear ___nl__int__20;
#line 240
c_rt_lib0clear(&___nl__im__21);
#line 240
//clear ___nl__int__22;
#line 240
//clear ___nl__int__23;
#line 240
//clear ___nl__bool__15;
#line 240
//clear ___nl__int__16;
#line 240
c_rt_lib0clear(&___nl__im__17);
#line 240
//clear ___nl__int__18;
#line 240
//clear ___nl__int__19;
#line 240
//clear ___nl__int__20;
#line 240
c_rt_lib0clear(&___nl__im__21);
#line 240
//clear ___nl__int__22;
#line 240
//clear ___nl__int__23;
#line 240
label_1:
#line 240
//clear ___nl__bool__3;
#line 240
//clear ___nl__bool__4;
#line 240
c_rt_lib0clear(&___nl__im__5);
#line 240
//clear ___nl__bool__6;
#line 240
//clear ___nl__int__7;
#line 240
c_rt_lib0clear(&___nl__im__8);
#line 240
//clear ___nl__int__9;
#line 240
//clear ___nl__int__10;
#line 240
//clear ___nl__int__11;
#line 240
c_rt_lib0clear(&___nl__im__12);
#line 240
//clear ___nl__int__13;
#line 240
//clear ___nl__int__14;
#line 240
//clear ___nl__bool__15;
#line 240
//clear ___nl__int__16;
#line 240
c_rt_lib0clear(&___nl__im__17);
#line 240
//clear ___nl__int__18;
#line 240
//clear ___nl__int__19;
#line 240
//clear ___nl__int__20;
#line 240
c_rt_lib0clear(&___nl__im__21);
#line 240
//clear ___nl__int__22;
#line 240
//clear ___nl__int__23;
#line 240
___nl__bool__1 = ___nl__bool__2;
#line 240
c_rt_lib0clear(&___nl__im__0);
#line 240
//clear ___nl__bool__2;
#line 240
//clear ___nl__bool__3;
#line 240
//clear ___nl__bool__4;
#line 240
c_rt_lib0clear(&___nl__im__5);
#line 240
//clear ___nl__bool__6;
#line 240
//clear ___nl__int__7;
#line 240
c_rt_lib0clear(&___nl__im__8);
#line 240
//clear ___nl__int__9;
#line 240
//clear ___nl__int__10;
#line 240
//clear ___nl__int__11;
#line 240
c_rt_lib0clear(&___nl__im__12);
#line 240
//clear ___nl__int__13;
#line 240
//clear ___nl__int__14;
#line 240
//clear ___nl__bool__15;
#line 240
//clear ___nl__int__16;
#line 240
c_rt_lib0clear(&___nl__im__17);
#line 240
//clear ___nl__int__18;
#line 240
//clear ___nl__int__19;
#line 240
//clear ___nl__int__20;
#line 240
c_rt_lib0clear(&___nl__im__21);
#line 240
//clear ___nl__int__22;
#line 240
//clear ___nl__int__23;
#line 240
return ___nl__bool__1;
#line 240
c_rt_lib0clear(&___nl__im__0);
#line 240
//clear ___nl__bool__1;
#line 240
//clear ___nl__bool__2;
#line 240
//clear ___nl__bool__3;
#line 240
//clear ___nl__bool__4;
#line 240
c_rt_lib0clear(&___nl__im__5);
#line 240
//clear ___nl__bool__6;
#line 240
//clear ___nl__int__7;
#line 240
c_rt_lib0clear(&___nl__im__8);
#line 240
//clear ___nl__int__9;
#line 240
//clear ___nl__int__10;
#line 240
//clear ___nl__int__11;
#line 240
c_rt_lib0clear(&___nl__im__12);
#line 240
//clear ___nl__int__13;
#line 240
//clear ___nl__int__14;
#line 240
//clear ___nl__bool__15;
#line 240
//clear ___nl__int__16;
#line 240
c_rt_lib0clear(&___nl__im__17);
#line 240
//clear ___nl__int__18;
#line 240
//clear ___nl__int__19;
#line 240
//clear ___nl__int__20;
#line 240
c_rt_lib0clear(&___nl__im__21);
#line 240
//clear ___nl__int__22;
#line 240
//clear ___nl__int__23;
#line 240
return NULL;
}

ImmT  ntokenizer_priv0try_get_operator(ntokenizer0state_t0type ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
ntokenizer_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__string__31 = NULL;
ImmT  ___nl__string__32 = NULL;
bool  ___nl__bool__33 = false;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
INT  ___nl__int__43 = 0;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
INT  ___nl__int__46 = 0;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
bool  ___nl__bool__50 = false;
ImmT  ___nl__im__51 = NULL;
bool  ___nl__bool__52 = false;
#line 244
c_rt_lib0move(&___nl__im__2, ntokenizer_priv0get_char_oper());
#line 244
___nl__int__4 = 0;
#line 244
___nl__int__5 = 1;
#line 244
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 244
label_3:
#line 244
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 244
___nl__bool__7 = ___nl__int__8;
#line 244
if(___nl__bool__7){ goto label_1;}
#line 244
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 244
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 245
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(290)));
#line 245
___nl__int__11 = getIntFromImm(___nl__im__12);
#line 245
c_rt_lib0clear(&___nl__im__12);
#line 245
___nl__int__15 = 1;
#line 245
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(289)));
#line 245
___nl__int__16 = getIntFromImm(___nl__im__17);
#line 245
c_rt_lib0clear(&___nl__im__17);
#line 245
___nl__int__14 = ___nl__int__15 + ___nl__int__16;
#line 245
//clear ___nl__int__15;
#line 245
//clear ___nl__int__16;
#line 245
c_rt_lib0clear(&___nl__im__17);
#line 245
c_rt_lib0copy(&___nl__im__19, ___nl__im__3);
#line 245
___nl__int__18 = string0length(___nl__im__19);
#line 245
c_rt_lib0clear(&___nl__im__19);
#line 245
___nl__int__13 = ___nl__int__14 + ___nl__int__18;
#line 245
//clear ___nl__int__14;
#line 245
//clear ___nl__int__15;
#line 245
//clear ___nl__int__16;
#line 245
c_rt_lib0clear(&___nl__im__17);
#line 245
//clear ___nl__int__18;
#line 245
c_rt_lib0clear(&___nl__im__19);
#line 245
___nl__int__20 = ___nl__int__11 < ___nl__int__13;
#line 245
___nl__bool__10 = ___nl__int__20;
#line 245
//clear ___nl__int__11;
#line 245
c_rt_lib0clear(&___nl__im__12);
#line 245
//clear ___nl__int__13;
#line 245
//clear ___nl__int__14;
#line 245
//clear ___nl__int__15;
#line 245
//clear ___nl__int__16;
#line 245
c_rt_lib0clear(&___nl__im__17);
#line 245
//clear ___nl__int__18;
#line 245
c_rt_lib0clear(&___nl__im__19);
#line 245
//clear ___nl__int__20;
#line 245
//clear ___nl__int__11;
#line 245
c_rt_lib0clear(&___nl__im__12);
#line 245
//clear ___nl__int__13;
#line 245
//clear ___nl__int__14;
#line 245
//clear ___nl__int__15;
#line 245
//clear ___nl__int__16;
#line 245
c_rt_lib0clear(&___nl__im__17);
#line 245
//clear ___nl__int__18;
#line 245
c_rt_lib0clear(&___nl__im__19);
#line 245
//clear ___nl__int__20;
#line 245
___nl__bool__10 = !___nl__bool__10;
#line 245
if(___nl__bool__10){ goto label_5;}
#line 245
goto label_2;
#line 245
goto label_4;
#line 245
label_5:
#line 245
label_4:
#line 246
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1158)));
#line 246
c_rt_lib0copy(&___nl__im__24, ___nl__im__23);
#line 246
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(289)));
#line 246
___nl__int__25 = getIntFromImm(___nl__im__26);
#line 246
c_rt_lib0clear(&___nl__im__26);
#line 246
c_rt_lib0move(&___nl__im__27, c_rt_lib0int_new(___nl__int__25));
#line 246
c_rt_lib0copy(&___nl__im__29, ___nl__im__3);
#line 246
___nl__int__28 = string0length(___nl__im__29);
#line 246
c_rt_lib0clear(&___nl__im__29);
#line 246
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__28));
#line 246
c_rt_lib0move(&___nl__im__22, c_std_lib0fast_substr(___nl__im__24, ___nl__im__27, ___nl__im__30));
#line 246
c_rt_lib0clear(&___nl__im__23);
#line 246
c_rt_lib0clear(&___nl__im__24);
#line 246
//clear ___nl__int__25;
#line 246
c_rt_lib0clear(&___nl__im__26);
#line 246
c_rt_lib0clear(&___nl__im__27);
#line 246
//clear ___nl__int__28;
#line 246
c_rt_lib0clear(&___nl__im__29);
#line 246
c_rt_lib0clear(&___nl__im__30);
#line 246
c_rt_lib0copy(&___nl__string__31, ___nl__im__22);
#line 246
c_rt_lib0copy(&___nl__string__32, ___nl__im__3);
#line 246
___nl__bool__21 = c_rt_lib0eq(___nl__string__31, ___nl__string__32);
#line 246
c_rt_lib0clear(&___nl__im__22);
#line 246
c_rt_lib0clear(&___nl__im__23);
#line 246
c_rt_lib0clear(&___nl__im__24);
#line 246
//clear ___nl__int__25;
#line 246
c_rt_lib0clear(&___nl__im__26);
#line 246
c_rt_lib0clear(&___nl__im__27);
#line 246
//clear ___nl__int__28;
#line 246
c_rt_lib0clear(&___nl__im__29);
#line 246
c_rt_lib0clear(&___nl__im__30);
#line 246
c_rt_lib0clear(&___nl__string__31);
#line 246
c_rt_lib0clear(&___nl__string__32);
#line 246
___nl__bool__21 = !___nl__bool__21;
#line 246
if(___nl__bool__21){ goto label_7;}
#line 249
c_rt_lib0move(&___nl__im__35, ntokenizer_priv0get_char(&___nl__im__0));
#line 249
c_rt_lib0copy(&___nl__im__36, ___nl__im__35);
#line 249
___nl__bool__33 = string0is_letter(___nl__im__36);
#line 249
c_rt_lib0clear(&___nl__im__35);
#line 249
c_rt_lib0clear(&___nl__im__36);
#line 249
___nl__bool__34 = !___nl__bool__33;
#line 249
if(___nl__bool__34){ goto label_10;}
#line 250
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1158)));
#line 250
c_rt_lib0copy(&___nl__im__39, ___nl__im__38);
#line 250
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(289)));
#line 250
___nl__int__41 = getIntFromImm(___nl__im__42);
#line 250
c_rt_lib0clear(&___nl__im__42);
#line 250
c_rt_lib0copy(&___nl__im__44, ___nl__im__3);
#line 250
___nl__int__43 = string0length(___nl__im__44);
#line 250
c_rt_lib0clear(&___nl__im__44);
#line 250
___nl__int__40 = ___nl__int__41 + ___nl__int__43;
#line 250
//clear ___nl__int__41;
#line 250
c_rt_lib0clear(&___nl__im__42);
#line 250
//clear ___nl__int__43;
#line 250
c_rt_lib0clear(&___nl__im__44);
#line 250
c_rt_lib0move(&___nl__im__45, c_rt_lib0int_new(___nl__int__40));
#line 250
___nl__int__46 = 1;
#line 250
c_rt_lib0move(&___nl__im__47, c_rt_lib0int_new(___nl__int__46));
#line 250
c_rt_lib0move(&___nl__im__37, c_std_lib0fast_substr(___nl__im__39, ___nl__im__45, ___nl__im__47));
#line 250
c_rt_lib0clear(&___nl__im__38);
#line 250
c_rt_lib0clear(&___nl__im__39);
#line 250
//clear ___nl__int__40;
#line 250
//clear ___nl__int__41;
#line 250
c_rt_lib0clear(&___nl__im__42);
#line 250
//clear ___nl__int__43;
#line 250
c_rt_lib0clear(&___nl__im__44);
#line 250
c_rt_lib0clear(&___nl__im__45);
#line 250
//clear ___nl__int__46;
#line 250
c_rt_lib0clear(&___nl__im__47);
#line 250
c_rt_lib0copy(&___nl__im__48, ___nl__im__37);
#line 250
___nl__bool__33 = string0is_letter(___nl__im__48);
#line 250
c_rt_lib0clear(&___nl__im__37);
#line 250
c_rt_lib0clear(&___nl__im__38);
#line 250
c_rt_lib0clear(&___nl__im__39);
#line 250
//clear ___nl__int__40;
#line 250
//clear ___nl__int__41;
#line 250
c_rt_lib0clear(&___nl__im__42);
#line 250
//clear ___nl__int__43;
#line 250
c_rt_lib0clear(&___nl__im__44);
#line 250
c_rt_lib0clear(&___nl__im__45);
#line 250
//clear ___nl__int__46;
#line 250
c_rt_lib0clear(&___nl__im__47);
#line 250
c_rt_lib0clear(&___nl__im__48);
#line 250
label_10:
#line 250
//clear ___nl__bool__34;
#line 250
c_rt_lib0clear(&___nl__im__35);
#line 250
c_rt_lib0clear(&___nl__im__36);
#line 250
c_rt_lib0clear(&___nl__im__37);
#line 250
c_rt_lib0clear(&___nl__im__38);
#line 250
c_rt_lib0clear(&___nl__im__39);
#line 250
//clear ___nl__int__40;
#line 250
//clear ___nl__int__41;
#line 250
c_rt_lib0clear(&___nl__im__42);
#line 250
//clear ___nl__int__43;
#line 250
c_rt_lib0clear(&___nl__im__44);
#line 250
c_rt_lib0clear(&___nl__im__45);
#line 250
//clear ___nl__int__46;
#line 250
c_rt_lib0clear(&___nl__im__47);
#line 250
c_rt_lib0clear(&___nl__im__48);
#line 250
//clear ___nl__bool__34;
#line 250
c_rt_lib0clear(&___nl__im__35);
#line 250
c_rt_lib0clear(&___nl__im__36);
#line 250
c_rt_lib0clear(&___nl__im__37);
#line 250
c_rt_lib0clear(&___nl__im__38);
#line 250
c_rt_lib0clear(&___nl__im__39);
#line 250
//clear ___nl__int__40;
#line 250
//clear ___nl__int__41;
#line 250
c_rt_lib0clear(&___nl__im__42);
#line 250
//clear ___nl__int__43;
#line 250
c_rt_lib0clear(&___nl__im__44);
#line 250
c_rt_lib0clear(&___nl__im__45);
#line 250
//clear ___nl__int__46;
#line 250
c_rt_lib0clear(&___nl__im__47);
#line 250
c_rt_lib0clear(&___nl__im__48);
#line 250
___nl__bool__33 = !___nl__bool__33;
#line 250
if(___nl__bool__33){ goto label_9;}
#line 247
goto label_2;
#line 247
goto label_8;
#line 247
label_9:
#line 247
label_8:
#line 251
c_rt_lib0copy(___ref___im__1, ___nl__im__3);
#line 252
___nl__bool__50 = true;
#line 252
c_rt_lib0move(&___nl__im__49, c_rt_lib0bool_to_nl_native(___nl__bool__50));
#line 252
c_rt_lib0clear(&___nl__im__0);
#line 252
c_rt_lib0clear(&___nl__im__2);
#line 252
c_rt_lib0clear(&___nl__im__3);
#line 252
//clear ___nl__int__4;
#line 252
//clear ___nl__int__5;
#line 252
//clear ___nl__int__6;
#line 252
//clear ___nl__bool__7;
#line 252
//clear ___nl__int__8;
#line 252
c_rt_lib0clear(&___nl__im__9);
#line 252
//clear ___nl__bool__10;
#line 252
//clear ___nl__int__11;
#line 252
c_rt_lib0clear(&___nl__im__12);
#line 252
//clear ___nl__int__13;
#line 252
//clear ___nl__int__14;
#line 252
//clear ___nl__int__15;
#line 252
//clear ___nl__int__16;
#line 252
c_rt_lib0clear(&___nl__im__17);
#line 252
//clear ___nl__int__18;
#line 252
c_rt_lib0clear(&___nl__im__19);
#line 252
//clear ___nl__int__20;
#line 252
//clear ___nl__bool__21;
#line 252
c_rt_lib0clear(&___nl__im__22);
#line 252
c_rt_lib0clear(&___nl__im__23);
#line 252
c_rt_lib0clear(&___nl__im__24);
#line 252
//clear ___nl__int__25;
#line 252
c_rt_lib0clear(&___nl__im__26);
#line 252
c_rt_lib0clear(&___nl__im__27);
#line 252
//clear ___nl__int__28;
#line 252
c_rt_lib0clear(&___nl__im__29);
#line 252
c_rt_lib0clear(&___nl__im__30);
#line 252
c_rt_lib0clear(&___nl__string__31);
#line 252
c_rt_lib0clear(&___nl__string__32);
#line 252
//clear ___nl__bool__33;
#line 252
//clear ___nl__bool__34;
#line 252
c_rt_lib0clear(&___nl__im__35);
#line 252
c_rt_lib0clear(&___nl__im__36);
#line 252
c_rt_lib0clear(&___nl__im__37);
#line 252
c_rt_lib0clear(&___nl__im__38);
#line 252
c_rt_lib0clear(&___nl__im__39);
#line 252
//clear ___nl__int__40;
#line 252
//clear ___nl__int__41;
#line 252
c_rt_lib0clear(&___nl__im__42);
#line 252
//clear ___nl__int__43;
#line 252
c_rt_lib0clear(&___nl__im__44);
#line 252
c_rt_lib0clear(&___nl__im__45);
#line 252
//clear ___nl__int__46;
#line 252
c_rt_lib0clear(&___nl__im__47);
#line 252
c_rt_lib0clear(&___nl__im__48);
#line 252
//clear ___nl__bool__50;
#line 252
return ___nl__im__49;
#line 253
goto label_6;
#line 253
label_7:
#line 253
label_6:
#line 253
c_rt_lib0clear(&___nl__im__3);
#line 253
label_2:
#line 254
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 254
goto label_3;
#line 254
label_1:
#line 255
___nl__bool__52 = false;
#line 255
c_rt_lib0move(&___nl__im__51, c_rt_lib0bool_to_nl_native(___nl__bool__52));
#line 255
c_rt_lib0clear(&___nl__im__0);
#line 255
c_rt_lib0clear(&___nl__im__2);
#line 255
c_rt_lib0clear(&___nl__im__3);
#line 255
//clear ___nl__int__4;
#line 255
//clear ___nl__int__5;
#line 255
//clear ___nl__int__6;
#line 255
//clear ___nl__bool__7;
#line 255
//clear ___nl__int__8;
#line 255
c_rt_lib0clear(&___nl__im__9);
#line 255
//clear ___nl__bool__10;
#line 255
//clear ___nl__int__11;
#line 255
c_rt_lib0clear(&___nl__im__12);
#line 255
//clear ___nl__int__13;
#line 255
//clear ___nl__int__14;
#line 255
//clear ___nl__int__15;
#line 255
//clear ___nl__int__16;
#line 255
c_rt_lib0clear(&___nl__im__17);
#line 255
//clear ___nl__int__18;
#line 255
c_rt_lib0clear(&___nl__im__19);
#line 255
//clear ___nl__int__20;
#line 255
//clear ___nl__bool__21;
#line 255
c_rt_lib0clear(&___nl__im__22);
#line 255
c_rt_lib0clear(&___nl__im__23);
#line 255
c_rt_lib0clear(&___nl__im__24);
#line 255
//clear ___nl__int__25;
#line 255
c_rt_lib0clear(&___nl__im__26);
#line 255
c_rt_lib0clear(&___nl__im__27);
#line 255
//clear ___nl__int__28;
#line 255
c_rt_lib0clear(&___nl__im__29);
#line 255
c_rt_lib0clear(&___nl__im__30);
#line 255
c_rt_lib0clear(&___nl__string__31);
#line 255
c_rt_lib0clear(&___nl__string__32);
#line 255
//clear ___nl__bool__33;
#line 255
//clear ___nl__bool__34;
#line 255
c_rt_lib0clear(&___nl__im__35);
#line 255
c_rt_lib0clear(&___nl__im__36);
#line 255
c_rt_lib0clear(&___nl__im__37);
#line 255
c_rt_lib0clear(&___nl__im__38);
#line 255
c_rt_lib0clear(&___nl__im__39);
#line 255
//clear ___nl__int__40;
#line 255
//clear ___nl__int__41;
#line 255
c_rt_lib0clear(&___nl__im__42);
#line 255
//clear ___nl__int__43;
#line 255
c_rt_lib0clear(&___nl__im__44);
#line 255
c_rt_lib0clear(&___nl__im__45);
#line 255
//clear ___nl__int__46;
#line 255
c_rt_lib0clear(&___nl__im__47);
#line 255
c_rt_lib0clear(&___nl__im__48);
#line 255
c_rt_lib0clear(&___nl__im__49);
#line 255
//clear ___nl__bool__50;
#line 255
//clear ___nl__bool__52;
#line 255
return ___nl__im__51;
#line 255
c_rt_lib0clear(&___nl__im__0);
#line 255
c_rt_lib0clear(&___nl__im__2);
#line 255
c_rt_lib0clear(&___nl__im__3);
#line 255
//clear ___nl__int__4;
#line 255
//clear ___nl__int__5;
#line 255
//clear ___nl__int__6;
#line 255
//clear ___nl__bool__7;
#line 255
//clear ___nl__int__8;
#line 255
c_rt_lib0clear(&___nl__im__9);
#line 255
//clear ___nl__bool__10;
#line 255
//clear ___nl__int__11;
#line 255
c_rt_lib0clear(&___nl__im__12);
#line 255
//clear ___nl__int__13;
#line 255
//clear ___nl__int__14;
#line 255
//clear ___nl__int__15;
#line 255
//clear ___nl__int__16;
#line 255
c_rt_lib0clear(&___nl__im__17);
#line 255
//clear ___nl__int__18;
#line 255
c_rt_lib0clear(&___nl__im__19);
#line 255
//clear ___nl__int__20;
#line 255
//clear ___nl__bool__21;
#line 255
c_rt_lib0clear(&___nl__im__22);
#line 255
c_rt_lib0clear(&___nl__im__23);
#line 255
c_rt_lib0clear(&___nl__im__24);
#line 255
//clear ___nl__int__25;
#line 255
c_rt_lib0clear(&___nl__im__26);
#line 255
c_rt_lib0clear(&___nl__im__27);
#line 255
//clear ___nl__int__28;
#line 255
c_rt_lib0clear(&___nl__im__29);
#line 255
c_rt_lib0clear(&___nl__im__30);
#line 255
c_rt_lib0clear(&___nl__string__31);
#line 255
c_rt_lib0clear(&___nl__string__32);
#line 255
//clear ___nl__bool__33;
#line 255
//clear ___nl__bool__34;
#line 255
c_rt_lib0clear(&___nl__im__35);
#line 255
c_rt_lib0clear(&___nl__im__36);
#line 255
c_rt_lib0clear(&___nl__im__37);
#line 255
c_rt_lib0clear(&___nl__im__38);
#line 255
c_rt_lib0clear(&___nl__im__39);
#line 255
//clear ___nl__int__40;
#line 255
//clear ___nl__int__41;
#line 255
c_rt_lib0clear(&___nl__im__42);
#line 255
//clear ___nl__int__43;
#line 255
c_rt_lib0clear(&___nl__im__44);
#line 255
c_rt_lib0clear(&___nl__im__45);
#line 255
//clear ___nl__int__46;
#line 255
c_rt_lib0clear(&___nl__im__47);
#line 255
c_rt_lib0clear(&___nl__im__48);
#line 255
c_rt_lib0clear(&___nl__im__49);
#line 255
//clear ___nl__bool__50;
#line 255
c_rt_lib0clear(&___nl__im__51);
#line 255
//clear ___nl__bool__52;
#line 255
return NULL;
}

ImmT  ntokenizer_priv0get_next_token(ntokenizer0state_t0type* ___ref___im__0) {
ntokenizer_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
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
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__string__42 = NULL;
ImmT  ___nl__string__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
INT  ___nl__int__51 = 0;
ImmT  ___nl__string__52 = NULL;
bool  ___nl__bool__53 = false;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__string__55 = NULL;
ImmT  ___nl__string__56 = NULL;
INT  ___nl__int__57 = 0;
ImmT  ___nl__im__58 = NULL;
INT  ___nl__int__59 = 0;
INT  ___nl__int__60 = 0;
ImmT  ___nl__string__61 = NULL;
bool  ___nl__bool__62 = false;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__string__65 = NULL;
ImmT  ___nl__string__66 = NULL;
INT  ___nl__int__67 = 0;
ImmT  ___nl__im__68 = NULL;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__string__74 = NULL;
ImmT  ___nl__string__75 = NULL;
ImmT  ___nl__string__76 = NULL;
ImmT  ___nl__string__77 = NULL;
bool  ___nl__bool__78 = false;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__string__81 = NULL;
ImmT  ___nl__string__82 = NULL;
ImmT  ___nl__string__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__string__85 = NULL;
ImmT  ___nl__string__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__string__89 = NULL;
ImmT  ___nl__string__90 = NULL;
ImmT  ___nl__string__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__string__93 = NULL;
ImmT  ___nl__string__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__string__100 = NULL;
ImmT  ___nl__string__101 = NULL;
ImmT  ___nl__string__102 = NULL;
INT  ___nl__int__103 = 0;
ImmT  ___nl__im__104 = NULL;
INT  ___nl__int__105 = 0;
INT  ___nl__int__106 = 0;
ImmT  ___nl__string__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
INT  ___nl__int__111 = 0;
INT  ___nl__int__112 = 0;
INT  ___nl__int__113 = 0;
ImmT  ___nl__string__114 = NULL;
bool  ___nl__bool__115 = false;
bool  ___nl__bool__116 = false;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__string__118 = NULL;
ImmT  ___nl__string__119 = NULL;
bool  ___nl__bool__120 = false;
bool  ___nl__bool__121 = false;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__string__125 = NULL;
ImmT  ___nl__string__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__string__128 = NULL;
ImmT  ___nl__string__129 = NULL;
ImmT  ___nl__string__130 = NULL;
ImmT  ___nl__string__131 = NULL;
ImmT  ___nl__im__132 = NULL;
INT  ___nl__int__133 = 0;
INT  ___nl__int__134 = 0;
INT  ___nl__int__135 = 0;
ImmT  ___nl__string__136 = NULL;
bool  ___nl__bool__137 = false;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
bool  ___nl__bool__146 = false;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
INT  ___nl__int__156 = 0;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
INT  ___nl__int__159 = 0;
INT  ___nl__int__160 = 0;
ImmT  ___nl__string__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
INT  ___nl__int__166 = 0;
INT  ___nl__int__167 = 0;
INT  ___nl__int__168 = 0;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
INT  ___nl__int__173 = 0;
INT  ___nl__int__174 = 0;
INT  ___nl__int__175 = 0;
ImmT  ___nl__string__176 = NULL;
bool  ___nl__bool__177 = false;
ImmT  ___nl__im__178 = NULL;
bool  ___nl__bool__179 = false;
bool  ___nl__bool__180 = false;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__string__182 = NULL;
ImmT  ___nl__string__183 = NULL;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__string__185 = NULL;
ImmT  ___nl__string__186 = NULL;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
ImmT  ___nl__im__190 = NULL;
ImmT  ___nl__im__191 = NULL;
ImmT  ___nl__im__192 = NULL;
INT  ___nl__int__193 = 0;
INT  ___nl__int__194 = 0;
INT  ___nl__int__195 = 0;
ImmT  ___nl__string__196 = NULL;
bool  ___nl__bool__197 = false;
bool  ___nl__bool__198 = false;
ImmT  ___nl__im__199 = NULL;
ImmT  ___nl__string__200 = NULL;
ImmT  ___nl__string__201 = NULL;
ImmT  ___nl__im__202 = NULL;
ImmT  ___nl__string__203 = NULL;
ImmT  ___nl__string__204 = NULL;
ImmT  ___nl__im__205 = NULL;
ImmT  ___nl__string__206 = NULL;
ImmT  ___nl__string__207 = NULL;
ImmT  ___nl__string__208 = NULL;
ImmT  ___nl__string__209 = NULL;
ImmT  ___nl__im__210 = NULL;
INT  ___nl__int__211 = 0;
INT  ___nl__int__212 = 0;
INT  ___nl__int__213 = 0;
ImmT  ___nl__string__214 = NULL;
bool  ___nl__bool__215 = false;
bool  ___nl__bool__216 = false;
bool  ___nl__bool__217 = false;
ImmT  ___nl__im__218 = NULL;
ImmT  ___nl__string__219 = NULL;
ImmT  ___nl__string__220 = NULL;
ImmT  ___nl__im__221 = NULL;
ImmT  ___nl__im__222 = NULL;
ImmT  ___nl__string__223 = NULL;
ImmT  ___nl__string__224 = NULL;
ImmT  ___nl__im__225 = NULL;
ImmT  ___nl__im__226 = NULL;
ImmT  ___nl__im__227 = NULL;
ImmT  ___nl__im__228 = NULL;
ImmT  ___nl__string__229 = NULL;
ImmT  ___nl__string__230 = NULL;
ImmT  ___nl__string__231 = NULL;
ImmT  ___nl__string__232 = NULL;
ImmT  ___nl__im__233 = NULL;
INT  ___nl__int__234 = 0;
INT  ___nl__int__235 = 0;
INT  ___nl__int__236 = 0;
ImmT  ___nl__string__237 = NULL;
bool  ___nl__bool__238 = false;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__string__241 = NULL;
ImmT  ___nl__string__242 = NULL;
ImmT  ___nl__string__243 = NULL;
ImmT  ___nl__string__244 = NULL;
ImmT  ___nl__im__245 = NULL;
INT  ___nl__int__246 = 0;
INT  ___nl__int__247 = 0;
INT  ___nl__int__248 = 0;
ImmT  ___nl__string__249 = NULL;
INT  ___nl__int__250 = 0;
bool  ___nl__bool__251 = false;
INT  ___nl__int__252 = 0;
INT  ___nl__int__253 = 0;
INT  ___nl__int__254 = 0;
bool  ___nl__bool__255 = false;
bool  ___nl__bool__256 = false;
bool  ___nl__bool__257 = false;
ImmT  ___nl__im__258 = NULL;
ImmT  ___nl__string__259 = NULL;
ImmT  ___nl__string__260 = NULL;
ImmT  ___nl__im__261 = NULL;
ImmT  ___nl__im__262 = NULL;
INT  ___nl__int__263 = 0;
INT  ___nl__int__264 = 0;
bool  ___nl__bool__265 = false;
bool  ___nl__bool__266 = false;
ImmT  ___nl__im__267 = NULL;
ImmT  ___nl__string__268 = NULL;
ImmT  ___nl__string__269 = NULL;
bool  ___nl__bool__270 = false;
ImmT  ___nl__im__271 = NULL;
INT  ___nl__int__272 = 0;
INT  ___nl__int__273 = 0;
ImmT  ___nl__im__274 = NULL;
ImmT  ___nl__string__275 = NULL;
ImmT  ___nl__string__276 = NULL;
ImmT  ___nl__string__277 = NULL;
ImmT  ___nl__string__278 = NULL;
ImmT  ___nl__im__279 = NULL;
INT  ___nl__int__280 = 0;
INT  ___nl__int__281 = 0;
INT  ___nl__int__282 = 0;
ImmT  ___nl__string__283 = NULL;
ImmT  ___nl__im__284 = NULL;
ImmT  ___nl__im__285 = NULL;
ImmT  ___nl__im__286 = NULL;
#line 259
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1160)));
#line 259
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 259
c_rt_lib0clear(&___nl__im__4);
#line 259
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__3));
#line 259
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(289)));
#line 259
___nl__int__8 = getIntFromImm(___nl__im__9);
#line 259
c_rt_lib0clear(&___nl__im__9);
#line 259
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1161)));
#line 259
___nl__int__10 = getIntFromImm(___nl__im__11);
#line 259
c_rt_lib0clear(&___nl__im__11);
#line 259
___nl__int__7 = ___nl__int__8 - ___nl__int__10;
#line 259
//clear ___nl__int__8;
#line 259
c_rt_lib0clear(&___nl__im__9);
#line 259
//clear ___nl__int__10;
#line 259
c_rt_lib0clear(&___nl__im__11);
#line 259
___nl__int__12 = 1;
#line 259
___nl__int__6 = ___nl__int__7 + ___nl__int__12;
#line 259
//clear ___nl__int__7;
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
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__6));
#line 259
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(169), ___nl__im__5, ___get_global_const(1096), ___nl__im__13));
#line 259
//clear ___nl__int__3;
#line 259
c_rt_lib0clear(&___nl__im__4);
#line 259
c_rt_lib0clear(&___nl__im__5);
#line 259
//clear ___nl__int__6;
#line 259
//clear ___nl__int__7;
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
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 259
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(1163), ___nl__im__1);
#line 259
c_rt_lib0clear(&___nl__im__1);
#line 259
c_rt_lib0clear(&___nl__im__2);
#line 259
//clear ___nl__int__3;
#line 259
c_rt_lib0clear(&___nl__im__4);
#line 259
c_rt_lib0clear(&___nl__im__5);
#line 259
//clear ___nl__int__6;
#line 259
//clear ___nl__int__7;
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
#line 260
c_rt_lib0delete(ntokenizer_priv0eat_ws(___ref___im__0));
#line 261
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1160)));
#line 261
___nl__int__16 = getIntFromImm(___nl__im__17);
#line 261
c_rt_lib0clear(&___nl__im__17);
#line 261
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__16));
#line 261
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(289)));
#line 261
___nl__int__21 = getIntFromImm(___nl__im__22);
#line 261
c_rt_lib0clear(&___nl__im__22);
#line 261
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1161)));
#line 261
___nl__int__23 = getIntFromImm(___nl__im__24);
#line 261
c_rt_lib0clear(&___nl__im__24);
#line 261
___nl__int__20 = ___nl__int__21 - ___nl__int__23;
#line 261
//clear ___nl__int__21;
#line 261
c_rt_lib0clear(&___nl__im__22);
#line 261
//clear ___nl__int__23;
#line 261
c_rt_lib0clear(&___nl__im__24);
#line 261
___nl__int__25 = 1;
#line 261
___nl__int__19 = ___nl__int__20 + ___nl__int__25;
#line 261
//clear ___nl__int__20;
#line 261
//clear ___nl__int__21;
#line 261
c_rt_lib0clear(&___nl__im__22);
#line 261
//clear ___nl__int__23;
#line 261
c_rt_lib0clear(&___nl__im__24);
#line 261
//clear ___nl__int__25;
#line 261
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__19));
#line 261
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(169), ___nl__im__18, ___get_global_const(1096), ___nl__im__26));
#line 261
//clear ___nl__int__16;
#line 261
c_rt_lib0clear(&___nl__im__17);
#line 261
c_rt_lib0clear(&___nl__im__18);
#line 261
//clear ___nl__int__19;
#line 261
//clear ___nl__int__20;
#line 261
//clear ___nl__int__21;
#line 261
c_rt_lib0clear(&___nl__im__22);
#line 261
//clear ___nl__int__23;
#line 261
c_rt_lib0clear(&___nl__im__24);
#line 261
//clear ___nl__int__25;
#line 261
c_rt_lib0clear(&___nl__im__26);
#line 261
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 261
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(1162), ___nl__im__14);
#line 261
c_rt_lib0clear(&___nl__im__14);
#line 261
c_rt_lib0clear(&___nl__im__15);
#line 261
//clear ___nl__int__16;
#line 261
c_rt_lib0clear(&___nl__im__17);
#line 261
c_rt_lib0clear(&___nl__im__18);
#line 261
//clear ___nl__int__19;
#line 261
//clear ___nl__int__20;
#line 261
//clear ___nl__int__21;
#line 261
c_rt_lib0clear(&___nl__im__22);
#line 261
//clear ___nl__int__23;
#line 261
c_rt_lib0clear(&___nl__im__24);
#line 261
//clear ___nl__int__25;
#line 261
c_rt_lib0clear(&___nl__im__26);
#line 262
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(96)));
#line 262
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(140));
#line 262
c_rt_lib0clear(&___nl__im__28);
#line 262
___nl__bool__27 = !___nl__bool__27;
#line 262
if(___nl__bool__27){ goto label_2;}
#line 262
c_rt_lib0clear(&___nl__im__1);
#line 262
c_rt_lib0clear(&___nl__im__2);
#line 262
//clear ___nl__int__3;
#line 262
c_rt_lib0clear(&___nl__im__4);
#line 262
c_rt_lib0clear(&___nl__im__5);
#line 262
//clear ___nl__int__6;
#line 262
//clear ___nl__int__7;
#line 262
//clear ___nl__int__8;
#line 262
c_rt_lib0clear(&___nl__im__9);
#line 262
//clear ___nl__int__10;
#line 262
c_rt_lib0clear(&___nl__im__11);
#line 262
//clear ___nl__int__12;
#line 262
c_rt_lib0clear(&___nl__im__13);
#line 262
c_rt_lib0clear(&___nl__im__14);
#line 262
c_rt_lib0clear(&___nl__im__15);
#line 262
//clear ___nl__int__16;
#line 262
c_rt_lib0clear(&___nl__im__17);
#line 262
c_rt_lib0clear(&___nl__im__18);
#line 262
//clear ___nl__int__19;
#line 262
//clear ___nl__int__20;
#line 262
//clear ___nl__int__21;
#line 262
c_rt_lib0clear(&___nl__im__22);
#line 262
//clear ___nl__int__23;
#line 262
c_rt_lib0clear(&___nl__im__24);
#line 262
//clear ___nl__int__25;
#line 262
c_rt_lib0clear(&___nl__im__26);
#line 262
//clear ___nl__bool__27;
#line 262
c_rt_lib0clear(&___nl__im__28);
#line 262
return NULL;
#line 262
goto label_1;
#line 262
label_2:
#line 262
label_1:
#line 263
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(289)));
#line 263
___nl__int__30 = getIntFromImm(___nl__im__31);
#line 263
c_rt_lib0clear(&___nl__im__31);
#line 263
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(290)));
#line 263
___nl__int__32 = getIntFromImm(___nl__im__33);
#line 263
c_rt_lib0clear(&___nl__im__33);
#line 263
___nl__int__34 = ___nl__int__30 == ___nl__int__32;
#line 263
___nl__bool__29 = ___nl__int__34;
#line 263
//clear ___nl__int__30;
#line 263
c_rt_lib0clear(&___nl__im__31);
#line 263
//clear ___nl__int__32;
#line 263
c_rt_lib0clear(&___nl__im__33);
#line 263
//clear ___nl__int__34;
#line 263
___nl__bool__29 = !___nl__bool__29;
#line 263
if(___nl__bool__29){ goto label_4;}
#line 264
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_const(1083)));
#line 264
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 264
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(96), ___nl__im__35);
#line 264
c_rt_lib0clear(&___nl__im__35);
#line 264
c_rt_lib0clear(&___nl__im__36);
#line 265
c_rt_lib0move(&___nl__im__38,___get_global_const(37));
#line 265
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 265
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(1159), ___nl__im__37);
#line 265
c_rt_lib0clear(&___nl__im__37);
#line 265
c_rt_lib0clear(&___nl__im__38);
#line 266
c_rt_lib0clear(&___nl__im__1);
#line 266
c_rt_lib0clear(&___nl__im__2);
#line 266
//clear ___nl__int__3;
#line 266
c_rt_lib0clear(&___nl__im__4);
#line 266
c_rt_lib0clear(&___nl__im__5);
#line 266
//clear ___nl__int__6;
#line 266
//clear ___nl__int__7;
#line 266
//clear ___nl__int__8;
#line 266
c_rt_lib0clear(&___nl__im__9);
#line 266
//clear ___nl__int__10;
#line 266
c_rt_lib0clear(&___nl__im__11);
#line 266
//clear ___nl__int__12;
#line 266
c_rt_lib0clear(&___nl__im__13);
#line 266
c_rt_lib0clear(&___nl__im__14);
#line 266
c_rt_lib0clear(&___nl__im__15);
#line 266
//clear ___nl__int__16;
#line 266
c_rt_lib0clear(&___nl__im__17);
#line 266
c_rt_lib0clear(&___nl__im__18);
#line 266
//clear ___nl__int__19;
#line 266
//clear ___nl__int__20;
#line 266
//clear ___nl__int__21;
#line 266
c_rt_lib0clear(&___nl__im__22);
#line 266
//clear ___nl__int__23;
#line 266
c_rt_lib0clear(&___nl__im__24);
#line 266
//clear ___nl__int__25;
#line 266
c_rt_lib0clear(&___nl__im__26);
#line 266
//clear ___nl__bool__27;
#line 266
c_rt_lib0clear(&___nl__im__28);
#line 266
//clear ___nl__bool__29;
#line 266
//clear ___nl__int__30;
#line 266
c_rt_lib0clear(&___nl__im__31);
#line 266
//clear ___nl__int__32;
#line 266
c_rt_lib0clear(&___nl__im__33);
#line 266
//clear ___nl__int__34;
#line 266
c_rt_lib0clear(&___nl__im__35);
#line 266
c_rt_lib0clear(&___nl__im__36);
#line 266
c_rt_lib0clear(&___nl__im__37);
#line 266
c_rt_lib0clear(&___nl__im__38);
#line 266
return NULL;
#line 267
goto label_3;
#line 267
label_4:
#line 267
label_3:
#line 268
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 269
c_rt_lib0move(&___nl__im__41,___get_global_const(580));
#line 269
c_rt_lib0copy(&___nl__string__42, ___nl__im__39);
#line 269
c_rt_lib0copy(&___nl__string__43, ___nl__im__41);
#line 269
___nl__bool__40 = c_rt_lib0eq(___nl__string__42, ___nl__string__43);
#line 269
c_rt_lib0clear(&___nl__im__41);
#line 269
c_rt_lib0clear(&___nl__string__42);
#line 269
c_rt_lib0clear(&___nl__string__43);
#line 269
___nl__bool__40 = !___nl__bool__40;
#line 269
if(___nl__bool__40){ goto label_6;}
#line 270
c_rt_lib0move(&___nl__im__45,___get_global_const(37));
#line 270
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 270
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(1159), ___nl__im__44);
#line 270
c_rt_lib0clear(&___nl__im__44);
#line 270
c_rt_lib0clear(&___nl__im__45);
#line 271
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_const(531)));
#line 271
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 271
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(96), ___nl__im__46);
#line 271
c_rt_lib0clear(&___nl__im__46);
#line 271
c_rt_lib0clear(&___nl__im__47);
#line 272
label_8:
#line 273
___nl__int__48 = 1;
#line 273
c_rt_lib0move(&___nl__im__49,___get_global_const(289));
#line 273
c_rt_lib0move(&___nl__im__49, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__49));
#line 273
___nl__int__50 = getIntFromImm(___nl__im__49);
#line 273
___nl__int__51 = ___nl__int__50 + ___nl__int__48;
#line 273
c_rt_lib0move(&___nl__im__49, c_rt_lib0int_new(___nl__int__51));
#line 273
c_rt_lib0move(&___nl__string__52,___get_global_const(289));
#line 273
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__52, ___nl__im__49));
#line 273
//clear ___nl__int__48;
#line 273
c_rt_lib0clear(&___nl__im__49);
#line 273
//clear ___nl__int__50;
#line 273
//clear ___nl__int__51;
#line 273
c_rt_lib0clear(&___nl__string__52);
#line 274
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 275
c_rt_lib0move(&___nl__im__54,___get_global_const(580));
#line 275
c_rt_lib0copy(&___nl__string__55, ___nl__im__39);
#line 275
c_rt_lib0copy(&___nl__string__56, ___nl__im__54);
#line 275
___nl__bool__53 = c_rt_lib0eq(___nl__string__55, ___nl__string__56);
#line 275
c_rt_lib0clear(&___nl__im__54);
#line 275
c_rt_lib0clear(&___nl__string__55);
#line 275
c_rt_lib0clear(&___nl__string__56);
#line 275
___nl__bool__53 = !___nl__bool__53;
#line 275
if(___nl__bool__53){ goto label_10;}
#line 276
___nl__int__57 = 1;
#line 276
c_rt_lib0move(&___nl__im__58,___get_global_const(289));
#line 276
c_rt_lib0move(&___nl__im__58, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__58));
#line 276
___nl__int__59 = getIntFromImm(___nl__im__58);
#line 276
___nl__int__60 = ___nl__int__59 + ___nl__int__57;
#line 276
c_rt_lib0move(&___nl__im__58, c_rt_lib0int_new(___nl__int__60));
#line 276
c_rt_lib0move(&___nl__string__61,___get_global_const(289));
#line 276
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__61, ___nl__im__58));
#line 276
//clear ___nl__int__57;
#line 276
c_rt_lib0clear(&___nl__im__58);
#line 276
//clear ___nl__int__59;
#line 276
//clear ___nl__int__60;
#line 276
c_rt_lib0clear(&___nl__string__61);
#line 277
c_rt_lib0move(&___nl__im__63, ntokenizer_priv0get_char(___ref___im__0));
#line 277
c_rt_lib0move(&___nl__im__64,___get_global_const(580));
#line 277
c_rt_lib0copy(&___nl__string__65, ___nl__im__63);
#line 277
c_rt_lib0copy(&___nl__string__66, ___nl__im__64);
#line 277
___nl__bool__62 = c_rt_lib0eq(___nl__string__65, ___nl__string__66);
#line 277
c_rt_lib0clear(&___nl__im__63);
#line 277
c_rt_lib0clear(&___nl__im__64);
#line 277
c_rt_lib0clear(&___nl__string__65);
#line 277
c_rt_lib0clear(&___nl__string__66);
#line 277
c_rt_lib0clear(&___nl__im__63);
#line 277
c_rt_lib0clear(&___nl__im__64);
#line 277
c_rt_lib0clear(&___nl__string__65);
#line 277
c_rt_lib0clear(&___nl__string__66);
#line 277
c_rt_lib0clear(&___nl__im__63);
#line 277
c_rt_lib0clear(&___nl__im__64);
#line 277
c_rt_lib0clear(&___nl__string__65);
#line 277
c_rt_lib0clear(&___nl__string__66);
#line 277
___nl__bool__62 = !___nl__bool__62;
#line 277
c_rt_lib0clear(&___nl__im__63);
#line 277
c_rt_lib0clear(&___nl__im__64);
#line 277
c_rt_lib0clear(&___nl__string__65);
#line 277
c_rt_lib0clear(&___nl__string__66);
#line 277
___nl__bool__62 = !___nl__bool__62;
#line 277
if(___nl__bool__62){ goto label_12;}
#line 277
c_rt_lib0clear(&___nl__im__1);
#line 277
c_rt_lib0clear(&___nl__im__2);
#line 277
//clear ___nl__int__3;
#line 277
c_rt_lib0clear(&___nl__im__4);
#line 277
c_rt_lib0clear(&___nl__im__5);
#line 277
//clear ___nl__int__6;
#line 277
//clear ___nl__int__7;
#line 277
//clear ___nl__int__8;
#line 277
c_rt_lib0clear(&___nl__im__9);
#line 277
//clear ___nl__int__10;
#line 277
c_rt_lib0clear(&___nl__im__11);
#line 277
//clear ___nl__int__12;
#line 277
c_rt_lib0clear(&___nl__im__13);
#line 277
c_rt_lib0clear(&___nl__im__14);
#line 277
c_rt_lib0clear(&___nl__im__15);
#line 277
//clear ___nl__int__16;
#line 277
c_rt_lib0clear(&___nl__im__17);
#line 277
c_rt_lib0clear(&___nl__im__18);
#line 277
//clear ___nl__int__19;
#line 277
//clear ___nl__int__20;
#line 277
//clear ___nl__int__21;
#line 277
c_rt_lib0clear(&___nl__im__22);
#line 277
//clear ___nl__int__23;
#line 277
c_rt_lib0clear(&___nl__im__24);
#line 277
//clear ___nl__int__25;
#line 277
c_rt_lib0clear(&___nl__im__26);
#line 277
//clear ___nl__bool__27;
#line 277
c_rt_lib0clear(&___nl__im__28);
#line 277
//clear ___nl__bool__29;
#line 277
//clear ___nl__int__30;
#line 277
c_rt_lib0clear(&___nl__im__31);
#line 277
//clear ___nl__int__32;
#line 277
c_rt_lib0clear(&___nl__im__33);
#line 277
//clear ___nl__int__34;
#line 277
c_rt_lib0clear(&___nl__im__35);
#line 277
c_rt_lib0clear(&___nl__im__36);
#line 277
c_rt_lib0clear(&___nl__im__37);
#line 277
c_rt_lib0clear(&___nl__im__38);
#line 277
c_rt_lib0clear(&___nl__im__39);
#line 277
//clear ___nl__bool__40;
#line 277
c_rt_lib0clear(&___nl__im__41);
#line 277
c_rt_lib0clear(&___nl__string__42);
#line 277
c_rt_lib0clear(&___nl__string__43);
#line 277
c_rt_lib0clear(&___nl__im__44);
#line 277
c_rt_lib0clear(&___nl__im__45);
#line 277
c_rt_lib0clear(&___nl__im__46);
#line 277
c_rt_lib0clear(&___nl__im__47);
#line 277
//clear ___nl__int__48;
#line 277
c_rt_lib0clear(&___nl__im__49);
#line 277
//clear ___nl__int__50;
#line 277
//clear ___nl__int__51;
#line 277
c_rt_lib0clear(&___nl__string__52);
#line 277
//clear ___nl__bool__53;
#line 277
c_rt_lib0clear(&___nl__im__54);
#line 277
c_rt_lib0clear(&___nl__string__55);
#line 277
c_rt_lib0clear(&___nl__string__56);
#line 277
//clear ___nl__int__57;
#line 277
c_rt_lib0clear(&___nl__im__58);
#line 277
//clear ___nl__int__59;
#line 277
//clear ___nl__int__60;
#line 277
c_rt_lib0clear(&___nl__string__61);
#line 277
//clear ___nl__bool__62;
#line 277
c_rt_lib0clear(&___nl__im__63);
#line 277
c_rt_lib0clear(&___nl__im__64);
#line 277
c_rt_lib0clear(&___nl__string__65);
#line 277
c_rt_lib0clear(&___nl__string__66);
#line 277
return NULL;
#line 277
goto label_11;
#line 277
label_12:
#line 277
label_11:
#line 278
goto label_9;
#line 278
label_10:
#line 278
c_rt_lib0copy(&___nl__im__68, ___nl__im__39);
#line 278
___nl__int__67 = string0ord(___nl__im__68);
#line 278
c_rt_lib0clear(&___nl__im__68);
#line 278
___nl__int__69 = 10;
#line 278
___nl__int__70 = ___nl__int__67 == ___nl__int__69;
#line 278
___nl__bool__53 = ___nl__int__70;
#line 278
//clear ___nl__int__67;
#line 278
c_rt_lib0clear(&___nl__im__68);
#line 278
//clear ___nl__int__69;
#line 278
//clear ___nl__int__70;
#line 278
___nl__bool__53 = !___nl__bool__53;
#line 278
if(___nl__bool__53){ goto label_13;}
#line 279
c_rt_lib0move(&___nl__im__72, c_rt_lib0ov_mk_none(___get_global_const(1147)));
#line 279
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 279
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(96), ___nl__im__71);
#line 279
c_rt_lib0clear(&___nl__im__71);
#line 279
c_rt_lib0clear(&___nl__im__72);
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
//clear ___nl__int__6;
#line 280
//clear ___nl__int__7;
#line 280
//clear ___nl__int__8;
#line 280
c_rt_lib0clear(&___nl__im__9);
#line 280
//clear ___nl__int__10;
#line 280
c_rt_lib0clear(&___nl__im__11);
#line 280
//clear ___nl__int__12;
#line 280
c_rt_lib0clear(&___nl__im__13);
#line 280
c_rt_lib0clear(&___nl__im__14);
#line 280
c_rt_lib0clear(&___nl__im__15);
#line 280
//clear ___nl__int__16;
#line 280
c_rt_lib0clear(&___nl__im__17);
#line 280
c_rt_lib0clear(&___nl__im__18);
#line 280
//clear ___nl__int__19;
#line 280
//clear ___nl__int__20;
#line 280
//clear ___nl__int__21;
#line 280
c_rt_lib0clear(&___nl__im__22);
#line 280
//clear ___nl__int__23;
#line 280
c_rt_lib0clear(&___nl__im__24);
#line 280
//clear ___nl__int__25;
#line 280
c_rt_lib0clear(&___nl__im__26);
#line 280
//clear ___nl__bool__27;
#line 280
c_rt_lib0clear(&___nl__im__28);
#line 280
//clear ___nl__bool__29;
#line 280
//clear ___nl__int__30;
#line 280
c_rt_lib0clear(&___nl__im__31);
#line 280
//clear ___nl__int__32;
#line 280
c_rt_lib0clear(&___nl__im__33);
#line 280
//clear ___nl__int__34;
#line 280
c_rt_lib0clear(&___nl__im__35);
#line 280
c_rt_lib0clear(&___nl__im__36);
#line 280
c_rt_lib0clear(&___nl__im__37);
#line 280
c_rt_lib0clear(&___nl__im__38);
#line 280
c_rt_lib0clear(&___nl__im__39);
#line 280
//clear ___nl__bool__40;
#line 280
c_rt_lib0clear(&___nl__im__41);
#line 280
c_rt_lib0clear(&___nl__string__42);
#line 280
c_rt_lib0clear(&___nl__string__43);
#line 280
c_rt_lib0clear(&___nl__im__44);
#line 280
c_rt_lib0clear(&___nl__im__45);
#line 280
c_rt_lib0clear(&___nl__im__46);
#line 280
c_rt_lib0clear(&___nl__im__47);
#line 280
//clear ___nl__int__48;
#line 280
c_rt_lib0clear(&___nl__im__49);
#line 280
//clear ___nl__int__50;
#line 280
//clear ___nl__int__51;
#line 280
c_rt_lib0clear(&___nl__string__52);
#line 280
//clear ___nl__bool__53;
#line 280
c_rt_lib0clear(&___nl__im__54);
#line 280
c_rt_lib0clear(&___nl__string__55);
#line 280
c_rt_lib0clear(&___nl__string__56);
#line 280
//clear ___nl__int__57;
#line 280
c_rt_lib0clear(&___nl__im__58);
#line 280
//clear ___nl__int__59;
#line 280
//clear ___nl__int__60;
#line 280
c_rt_lib0clear(&___nl__string__61);
#line 280
//clear ___nl__bool__62;
#line 280
c_rt_lib0clear(&___nl__im__63);
#line 280
c_rt_lib0clear(&___nl__im__64);
#line 280
c_rt_lib0clear(&___nl__string__65);
#line 280
c_rt_lib0clear(&___nl__string__66);
#line 280
//clear ___nl__int__67;
#line 280
c_rt_lib0clear(&___nl__im__68);
#line 280
//clear ___nl__int__69;
#line 280
//clear ___nl__int__70;
#line 280
c_rt_lib0clear(&___nl__im__71);
#line 280
c_rt_lib0clear(&___nl__im__72);
#line 280
return NULL;
#line 281
goto label_9;
#line 281
label_13:
#line 281
label_9:
#line 282
c_rt_lib0move(&___nl__im__73,___get_global_const(1159));
#line 282
c_rt_lib0move(&___nl__im__73, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__73));
#line 282
c_rt_lib0copy(&___nl__string__74, ___nl__im__73);
#line 282
c_rt_lib0copy(&___nl__string__75, ___nl__im__39);
#line 282
c_rt_lib0move(&___nl__string__76, c_rt_lib0concat_new(___nl__string__74, ___nl__string__75));
#line 282
c_rt_lib0copy(&___nl__im__73, ___nl__string__76);
#line 282
c_rt_lib0move(&___nl__string__77,___get_global_const(1159));
#line 282
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__77, ___nl__im__73));
#line 282
c_rt_lib0clear(&___nl__im__73);
#line 282
c_rt_lib0clear(&___nl__string__74);
#line 282
c_rt_lib0clear(&___nl__string__75);
#line 282
c_rt_lib0clear(&___nl__string__76);
#line 282
c_rt_lib0clear(&___nl__string__77);
#line 272
goto label_8;
#line 272
label_7:
#line 284
goto label_5;
#line 284
label_6:
#line 284
c_rt_lib0move(&___nl__im__80, ntokenizer_priv0get_next_char(___ref___im__0));
#line 284
c_rt_lib0copy(&___nl__string__81, ___nl__im__39);
#line 284
c_rt_lib0copy(&___nl__string__82, ___nl__im__80);
#line 284
c_rt_lib0move(&___nl__string__83, c_rt_lib0concat_new(___nl__string__81, ___nl__string__82));
#line 284
c_rt_lib0copy(&___nl__im__79, ___nl__string__83);
#line 284
c_rt_lib0clear(&___nl__im__80);
#line 284
c_rt_lib0clear(&___nl__string__81);
#line 284
c_rt_lib0clear(&___nl__string__82);
#line 284
c_rt_lib0clear(&___nl__string__83);
#line 284
c_rt_lib0move(&___nl__im__84,___get_global_const(300));
#line 284
c_rt_lib0copy(&___nl__string__85, ___nl__im__79);
#line 284
c_rt_lib0copy(&___nl__string__86, ___nl__im__84);
#line 284
___nl__bool__40 = c_rt_lib0eq(___nl__string__85, ___nl__string__86);
#line 284
c_rt_lib0clear(&___nl__im__79);
#line 284
c_rt_lib0clear(&___nl__im__80);
#line 284
c_rt_lib0clear(&___nl__string__81);
#line 284
c_rt_lib0clear(&___nl__string__82);
#line 284
c_rt_lib0clear(&___nl__string__83);
#line 284
c_rt_lib0clear(&___nl__im__84);
#line 284
c_rt_lib0clear(&___nl__string__85);
#line 284
c_rt_lib0clear(&___nl__string__86);
#line 284
if(___nl__bool__40){ goto label_15;}
#line 284
c_rt_lib0move(&___nl__im__88, ntokenizer_priv0get_next_char(___ref___im__0));
#line 284
c_rt_lib0copy(&___nl__string__89, ___nl__im__39);
#line 284
c_rt_lib0copy(&___nl__string__90, ___nl__im__88);
#line 284
c_rt_lib0move(&___nl__string__91, c_rt_lib0concat_new(___nl__string__89, ___nl__string__90));
#line 284
c_rt_lib0copy(&___nl__im__87, ___nl__string__91);
#line 284
c_rt_lib0clear(&___nl__im__88);
#line 284
c_rt_lib0clear(&___nl__string__89);
#line 284
c_rt_lib0clear(&___nl__string__90);
#line 284
c_rt_lib0clear(&___nl__string__91);
#line 284
c_rt_lib0move(&___nl__im__92,___get_global_const(35));
#line 284
c_rt_lib0copy(&___nl__string__93, ___nl__im__87);
#line 284
c_rt_lib0copy(&___nl__string__94, ___nl__im__92);
#line 284
___nl__bool__40 = c_rt_lib0eq(___nl__string__93, ___nl__string__94);
#line 284
c_rt_lib0clear(&___nl__im__87);
#line 284
c_rt_lib0clear(&___nl__im__88);
#line 284
c_rt_lib0clear(&___nl__string__89);
#line 284
c_rt_lib0clear(&___nl__string__90);
#line 284
c_rt_lib0clear(&___nl__string__91);
#line 284
c_rt_lib0clear(&___nl__im__92);
#line 284
c_rt_lib0clear(&___nl__string__93);
#line 284
c_rt_lib0clear(&___nl__string__94);
#line 284
label_15:
#line 284
//clear ___nl__bool__78;
#line 284
c_rt_lib0clear(&___nl__im__79);
#line 284
c_rt_lib0clear(&___nl__im__80);
#line 284
c_rt_lib0clear(&___nl__string__81);
#line 284
c_rt_lib0clear(&___nl__string__82);
#line 284
c_rt_lib0clear(&___nl__string__83);
#line 284
c_rt_lib0clear(&___nl__im__84);
#line 284
c_rt_lib0clear(&___nl__string__85);
#line 284
c_rt_lib0clear(&___nl__string__86);
#line 284
c_rt_lib0clear(&___nl__im__87);
#line 284
c_rt_lib0clear(&___nl__im__88);
#line 284
c_rt_lib0clear(&___nl__string__89);
#line 284
c_rt_lib0clear(&___nl__string__90);
#line 284
c_rt_lib0clear(&___nl__string__91);
#line 284
c_rt_lib0clear(&___nl__im__92);
#line 284
c_rt_lib0clear(&___nl__string__93);
#line 284
c_rt_lib0clear(&___nl__string__94);
#line 284
___nl__bool__40 = !___nl__bool__40;
#line 284
if(___nl__bool__40){ goto label_14;}
#line 285
c_rt_lib0move(&___nl__im__96, c_rt_lib0ov_mk_none(___get_global_const(1165)));
#line 285
c_rt_lib0copy(&___nl__im__95, ___nl__im__96);
#line 285
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(96), ___nl__im__95);
#line 285
c_rt_lib0clear(&___nl__im__95);
#line 285
c_rt_lib0clear(&___nl__im__96);
#line 286
c_rt_lib0move(&___nl__im__99, ntokenizer_priv0get_next_char(___ref___im__0));
#line 286
c_rt_lib0copy(&___nl__string__100, ___nl__im__39);
#line 286
c_rt_lib0copy(&___nl__string__101, ___nl__im__99);
#line 286
c_rt_lib0move(&___nl__string__102, c_rt_lib0concat_new(___nl__string__100, ___nl__string__101));
#line 286
c_rt_lib0copy(&___nl__im__98, ___nl__string__102);
#line 286
c_rt_lib0clear(&___nl__im__99);
#line 286
c_rt_lib0clear(&___nl__string__100);
#line 286
c_rt_lib0clear(&___nl__string__101);
#line 286
c_rt_lib0clear(&___nl__string__102);
#line 286
c_rt_lib0copy(&___nl__im__97, ___nl__im__98);
#line 286
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(1159), ___nl__im__97);
#line 286
c_rt_lib0clear(&___nl__im__97);
#line 286
c_rt_lib0clear(&___nl__im__98);
#line 286
c_rt_lib0clear(&___nl__im__99);
#line 286
c_rt_lib0clear(&___nl__string__100);
#line 286
c_rt_lib0clear(&___nl__string__101);
#line 286
c_rt_lib0clear(&___nl__string__102);
#line 287
___nl__int__103 = 2;
#line 287
c_rt_lib0move(&___nl__im__104,___get_global_const(289));
#line 287
c_rt_lib0move(&___nl__im__104, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__104));
#line 287
___nl__int__105 = getIntFromImm(___nl__im__104);
#line 287
___nl__int__106 = ___nl__int__105 + ___nl__int__103;
#line 287
c_rt_lib0move(&___nl__im__104, c_rt_lib0int_new(___nl__int__106));
#line 287
c_rt_lib0move(&___nl__string__107,___get_global_const(289));
#line 287
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__107, ___nl__im__104));
#line 287
//clear ___nl__int__103;
#line 287
c_rt_lib0clear(&___nl__im__104);
#line 287
//clear ___nl__int__105;
#line 287
//clear ___nl__int__106;
#line 287
c_rt_lib0clear(&___nl__string__107);
#line 288
goto label_5;
#line 288
label_14:
#line 288
c_rt_lib0copy(&___nl__im__108, ___nl__im__39);
#line 288
___nl__bool__40 = string0is_letter(___nl__im__108);
#line 288
c_rt_lib0clear(&___nl__im__108);
#line 288
___nl__bool__40 = !___nl__bool__40;
#line 288
if(___nl__bool__40){ goto label_16;}
#line 289
c_rt_lib0copy(&___nl__im__109, ___nl__im__39);
#line 289
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(1159), ___nl__im__109);
#line 289
c_rt_lib0clear(&___nl__im__109);
#line 290
c_rt_lib0move(&___nl__im__110,___get_global_const(289));
#line 290
c_rt_lib0move(&___nl__im__110, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__110));
#line 290
___nl__int__111 = 1;
#line 290
___nl__int__112 = getIntFromImm(___nl__im__110);
#line 290
___nl__int__113 = ___nl__int__112 + ___nl__int__111;
#line 290
c_rt_lib0move(&___nl__im__110, c_rt_lib0int_new(___nl__int__113));
#line 290
c_rt_lib0move(&___nl__string__114,___get_global_const(289));
#line 290
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__114, ___nl__im__110));
#line 290
c_rt_lib0clear(&___nl__im__110);
#line 290
//clear ___nl__int__111;
#line 290
//clear ___nl__int__112;
#line 290
//clear ___nl__int__113;
#line 290
c_rt_lib0clear(&___nl__string__114);
#line 291
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 292
label_18:
#line 292
c_rt_lib0move(&___nl__im__117,___get_global_const(37));
#line 292
c_rt_lib0copy(&___nl__string__118, ___nl__im__39);
#line 292
c_rt_lib0copy(&___nl__string__119, ___nl__im__117);
#line 292
___nl__bool__115 = c_rt_lib0ne(___nl__string__118, ___nl__string__119);
#line 292
c_rt_lib0clear(&___nl__im__117);
#line 292
c_rt_lib0clear(&___nl__string__118);
#line 292
c_rt_lib0clear(&___nl__string__119);
#line 292
___nl__bool__116 = !___nl__bool__115;
#line 292
if(___nl__bool__116){ goto label_19;}
#line 292
c_rt_lib0copy(&___nl__im__122, ___nl__im__39);
#line 292
___nl__bool__115 = string0is_letter(___nl__im__122);
#line 292
c_rt_lib0clear(&___nl__im__122);
#line 292
if(___nl__bool__115){ goto label_21;}
#line 292
c_rt_lib0copy(&___nl__im__123, ___nl__im__39);
#line 292
___nl__bool__115 = string0is_digit(___nl__im__123);
#line 292
c_rt_lib0clear(&___nl__im__123);
#line 292
label_21:
#line 292
//clear ___nl__bool__121;
#line 292
c_rt_lib0clear(&___nl__im__122);
#line 292
c_rt_lib0clear(&___nl__im__123);
#line 292
if(___nl__bool__115){ goto label_20;}
#line 292
c_rt_lib0move(&___nl__im__124,___get_global_const(112));
#line 292
c_rt_lib0copy(&___nl__string__125, ___nl__im__39);
#line 292
c_rt_lib0copy(&___nl__string__126, ___nl__im__124);
#line 292
___nl__bool__115 = c_rt_lib0eq(___nl__string__125, ___nl__string__126);
#line 292
c_rt_lib0clear(&___nl__im__124);
#line 292
c_rt_lib0clear(&___nl__string__125);
#line 292
c_rt_lib0clear(&___nl__string__126);
#line 292
label_20:
#line 292
//clear ___nl__bool__120;
#line 292
//clear ___nl__bool__121;
#line 292
c_rt_lib0clear(&___nl__im__122);
#line 292
c_rt_lib0clear(&___nl__im__123);
#line 292
c_rt_lib0clear(&___nl__im__124);
#line 292
c_rt_lib0clear(&___nl__string__125);
#line 292
c_rt_lib0clear(&___nl__string__126);
#line 292
//clear ___nl__bool__120;
#line 292
//clear ___nl__bool__121;
#line 292
c_rt_lib0clear(&___nl__im__122);
#line 292
c_rt_lib0clear(&___nl__im__123);
#line 292
c_rt_lib0clear(&___nl__im__124);
#line 292
c_rt_lib0clear(&___nl__string__125);
#line 292
c_rt_lib0clear(&___nl__string__126);
#line 292
label_19:
#line 292
//clear ___nl__bool__116;
#line 292
c_rt_lib0clear(&___nl__im__117);
#line 292
c_rt_lib0clear(&___nl__string__118);
#line 292
c_rt_lib0clear(&___nl__string__119);
#line 292
//clear ___nl__bool__120;
#line 292
//clear ___nl__bool__121;
#line 292
c_rt_lib0clear(&___nl__im__122);
#line 292
c_rt_lib0clear(&___nl__im__123);
#line 292
c_rt_lib0clear(&___nl__im__124);
#line 292
c_rt_lib0clear(&___nl__string__125);
#line 292
c_rt_lib0clear(&___nl__string__126);
#line 292
___nl__bool__115 = !___nl__bool__115;
#line 292
if(___nl__bool__115){ goto label_17;}
#line 293
c_rt_lib0move(&___nl__im__127,___get_global_const(1159));
#line 293
c_rt_lib0move(&___nl__im__127, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__127));
#line 293
c_rt_lib0copy(&___nl__string__128, ___nl__im__127);
#line 293
c_rt_lib0copy(&___nl__string__129, ___nl__im__39);
#line 293
c_rt_lib0move(&___nl__string__130, c_rt_lib0concat_new(___nl__string__128, ___nl__string__129));
#line 293
c_rt_lib0copy(&___nl__im__127, ___nl__string__130);
#line 293
c_rt_lib0move(&___nl__string__131,___get_global_const(1159));
#line 293
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__131, ___nl__im__127));
#line 293
c_rt_lib0clear(&___nl__im__127);
#line 293
c_rt_lib0clear(&___nl__string__128);
#line 293
c_rt_lib0clear(&___nl__string__129);
#line 293
c_rt_lib0clear(&___nl__string__130);
#line 293
c_rt_lib0clear(&___nl__string__131);
#line 294
c_rt_lib0move(&___nl__im__132,___get_global_const(289));
#line 294
c_rt_lib0move(&___nl__im__132, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__132));
#line 294
___nl__int__133 = 1;
#line 294
___nl__int__134 = getIntFromImm(___nl__im__132);
#line 294
___nl__int__135 = ___nl__int__134 + ___nl__int__133;
#line 294
c_rt_lib0move(&___nl__im__132, c_rt_lib0int_new(___nl__int__135));
#line 294
c_rt_lib0move(&___nl__string__136,___get_global_const(289));
#line 294
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__136, ___nl__im__132));
#line 294
c_rt_lib0clear(&___nl__im__132);
#line 294
//clear ___nl__int__133;
#line 294
//clear ___nl__int__134;
#line 294
//clear ___nl__int__135;
#line 294
c_rt_lib0clear(&___nl__string__136);
#line 295
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 296
goto label_18;
#line 296
label_17:
#line 297
c_rt_lib0move(&___nl__im__138, ntokenizer_priv0get_lett_oper());
#line 297
c_rt_lib0copy(&___nl__im__139, ___nl__im__138);
#line 297
c_rt_lib0move(&___nl__im__140, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1159)));
#line 297
c_rt_lib0copy(&___nl__im__141, ___nl__im__140);
#line 297
___nl__bool__137 = hash0has_key(___nl__im__139, ___nl__im__141);
#line 297
c_rt_lib0clear(&___nl__im__138);
#line 297
c_rt_lib0clear(&___nl__im__139);
#line 297
c_rt_lib0clear(&___nl__im__140);
#line 297
c_rt_lib0clear(&___nl__im__141);
#line 297
___nl__bool__137 = !___nl__bool__137;
#line 297
if(___nl__bool__137){ goto label_23;}
#line 298
c_rt_lib0move(&___nl__im__143, c_rt_lib0ov_mk_none(___get_global_const(1148)));
#line 298
c_rt_lib0copy(&___nl__im__142, ___nl__im__143);
#line 298
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(96), ___nl__im__142);
#line 298
c_rt_lib0clear(&___nl__im__142);
#line 298
c_rt_lib0clear(&___nl__im__143);
#line 299
goto label_22;
#line 299
label_23:
#line 300
c_rt_lib0move(&___nl__im__147, ntokenizer_priv0get_keywords());
#line 300
c_rt_lib0copy(&___nl__im__148, ___nl__im__147);
#line 300
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(1159)));
#line 300
c_rt_lib0copy(&___nl__im__150, ___nl__im__149);
#line 300
___nl__bool__146 = hash0has_key(___nl__im__148, ___nl__im__150);
#line 300
c_rt_lib0clear(&___nl__im__147);
#line 300
c_rt_lib0clear(&___nl__im__148);
#line 300
c_rt_lib0clear(&___nl__im__149);
#line 300
c_rt_lib0clear(&___nl__im__150);
#line 300
if(___nl__bool__146){ goto label_25;}
#line 300
c_rt_lib0move(&___nl__im__145, c_rt_lib0ov_mk_none(___get_global_const(1135)));
#line 300
goto label_24;
#line 300
label_25:
#line 300
c_rt_lib0move(&___nl__im__145, c_rt_lib0ov_mk_none(___get_global_const(1150)));
#line 300
label_24:
#line 300
//clear ___nl__bool__146;
#line 300
c_rt_lib0clear(&___nl__im__147);
#line 300
c_rt_lib0clear(&___nl__im__148);
#line 300
c_rt_lib0clear(&___nl__im__149);
#line 300
c_rt_lib0clear(&___nl__im__150);
#line 300
c_rt_lib0copy(&___nl__im__144, ___nl__im__145);
#line 300
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(96), ___nl__im__144);
#line 300
c_rt_lib0clear(&___nl__im__144);
#line 300
c_rt_lib0clear(&___nl__im__145);
#line 300
//clear ___nl__bool__146;
#line 300
c_rt_lib0clear(&___nl__im__147);
#line 300
c_rt_lib0clear(&___nl__im__148);
#line 300
c_rt_lib0clear(&___nl__im__149);
#line 300
c_rt_lib0clear(&___nl__im__150);
#line 301
goto label_22;
#line 301
label_22:
#line 302
goto label_5;
#line 302
label_16:
#line 302
c_rt_lib0copy(&___nl__im__151, (*___ref___im__0));
#line 302
c_rt_lib0move(&___nl__im__152, ntokenizer_priv0try_get_operator(___nl__im__151, &___nl__im__39));
#line 302
___nl__bool__40 = c_rt_lib0check_true_native(___nl__im__152);
#line 302
c_rt_lib0clear(&___nl__im__151);
#line 302
c_rt_lib0clear(&___nl__im__152);
#line 302
___nl__bool__40 = !___nl__bool__40;
#line 302
if(___nl__bool__40){ goto label_26;}
#line 303
c_rt_lib0move(&___nl__im__154, c_rt_lib0ov_mk_none(___get_global_const(1148)));
#line 303
c_rt_lib0copy(&___nl__im__153, ___nl__im__154);
#line 303
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(96), ___nl__im__153);
#line 303
c_rt_lib0clear(&___nl__im__153);
#line 303
c_rt_lib0clear(&___nl__im__154);
#line 304
c_rt_lib0copy(&___nl__im__155, ___nl__im__39);
#line 304
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(1159), ___nl__im__155);
#line 304
c_rt_lib0clear(&___nl__im__155);
#line 305
c_rt_lib0copy(&___nl__im__157, ___nl__im__39);
#line 305
___nl__int__156 = string0length(___nl__im__157);
#line 305
c_rt_lib0clear(&___nl__im__157);
#line 305
c_rt_lib0move(&___nl__im__158,___get_global_const(289));
#line 305
c_rt_lib0move(&___nl__im__158, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__158));
#line 305
___nl__int__159 = getIntFromImm(___nl__im__158);
#line 305
___nl__int__160 = ___nl__int__159 + ___nl__int__156;
#line 305
c_rt_lib0move(&___nl__im__158, c_rt_lib0int_new(___nl__int__160));
#line 305
c_rt_lib0move(&___nl__string__161,___get_global_const(289));
#line 305
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__161, ___nl__im__158));
#line 305
//clear ___nl__int__156;
#line 305
c_rt_lib0clear(&___nl__im__157);
#line 305
c_rt_lib0clear(&___nl__im__158);
#line 305
//clear ___nl__int__159;
#line 305
//clear ___nl__int__160;
#line 305
c_rt_lib0clear(&___nl__string__161);
#line 306
goto label_5;
#line 306
label_26:
#line 306
c_rt_lib0move(&___nl__im__163,___get_global_const(1170));
#line 306
c_rt_lib0copy(&___nl__im__164, ___nl__im__163);
#line 306
c_rt_lib0copy(&___nl__im__165, ___nl__im__39);
#line 306
c_rt_lib0move(&___nl__im__162, string0index2(___nl__im__164, ___nl__im__165));
#line 306
c_rt_lib0clear(&___nl__im__163);
#line 306
c_rt_lib0clear(&___nl__im__164);
#line 306
c_rt_lib0clear(&___nl__im__165);
#line 306
___nl__int__166 = 0;
#line 306
___nl__int__167 = getIntFromImm(___nl__im__162);
#line 306
___nl__int__168 = ___nl__int__167 >= ___nl__int__166;
#line 306
___nl__bool__40 = ___nl__int__168;
#line 306
c_rt_lib0clear(&___nl__im__162);
#line 306
c_rt_lib0clear(&___nl__im__163);
#line 306
c_rt_lib0clear(&___nl__im__164);
#line 306
c_rt_lib0clear(&___nl__im__165);
#line 306
//clear ___nl__int__166;
#line 306
//clear ___nl__int__167;
#line 306
//clear ___nl__int__168;
#line 306
___nl__bool__40 = !___nl__bool__40;
#line 306
if(___nl__bool__40){ goto label_27;}
#line 307
c_rt_lib0move(&___nl__im__170, c_rt_lib0ov_mk_none(___get_global_const(1165)));
#line 307
c_rt_lib0copy(&___nl__im__169, ___nl__im__170);
#line 307
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(96), ___nl__im__169);
#line 307
c_rt_lib0clear(&___nl__im__169);
#line 307
c_rt_lib0clear(&___nl__im__170);
#line 308
c_rt_lib0copy(&___nl__im__171, ___nl__im__39);
#line 308
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(1159), ___nl__im__171);
#line 308
c_rt_lib0clear(&___nl__im__171);
#line 309
c_rt_lib0move(&___nl__im__172,___get_global_const(289));
#line 309
c_rt_lib0move(&___nl__im__172, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__172));
#line 309
___nl__int__173 = 1;
#line 309
___nl__int__174 = getIntFromImm(___nl__im__172);
#line 309
___nl__int__175 = ___nl__int__174 + ___nl__int__173;
#line 309
c_rt_lib0move(&___nl__im__172, c_rt_lib0int_new(___nl__int__175));
#line 309
c_rt_lib0move(&___nl__string__176,___get_global_const(289));
#line 309
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__176, ___nl__im__172));
#line 309
c_rt_lib0clear(&___nl__im__172);
#line 309
//clear ___nl__int__173;
#line 309
//clear ___nl__int__174;
#line 309
//clear ___nl__int__175;
#line 309
c_rt_lib0clear(&___nl__string__176);
#line 310
goto label_5;
#line 310
label_27:
#line 310
c_rt_lib0copy(&___nl__im__178, ___nl__im__39);
#line 310
___nl__bool__40 = string0is_digit(___nl__im__178);
#line 310
c_rt_lib0clear(&___nl__im__178);
#line 310
if(___nl__bool__40){ goto label_29;}
#line 310
c_rt_lib0move(&___nl__im__181,___get_global_const(346));
#line 310
c_rt_lib0copy(&___nl__string__182, ___nl__im__39);
#line 310
c_rt_lib0copy(&___nl__string__183, ___nl__im__181);
#line 310
___nl__bool__40 = c_rt_lib0eq(___nl__string__182, ___nl__string__183);
#line 310
c_rt_lib0clear(&___nl__im__181);
#line 310
c_rt_lib0clear(&___nl__string__182);
#line 310
c_rt_lib0clear(&___nl__string__183);
#line 310
if(___nl__bool__40){ goto label_31;}
#line 310
c_rt_lib0move(&___nl__im__184,___get_global_const(348));
#line 310
c_rt_lib0copy(&___nl__string__185, ___nl__im__39);
#line 310
c_rt_lib0copy(&___nl__string__186, ___nl__im__184);
#line 310
___nl__bool__40 = c_rt_lib0eq(___nl__string__185, ___nl__string__186);
#line 310
c_rt_lib0clear(&___nl__im__184);
#line 310
c_rt_lib0clear(&___nl__string__185);
#line 310
c_rt_lib0clear(&___nl__string__186);
#line 310
label_31:
#line 310
//clear ___nl__bool__180;
#line 310
c_rt_lib0clear(&___nl__im__181);
#line 310
c_rt_lib0clear(&___nl__string__182);
#line 310
c_rt_lib0clear(&___nl__string__183);
#line 310
c_rt_lib0clear(&___nl__im__184);
#line 310
c_rt_lib0clear(&___nl__string__185);
#line 310
c_rt_lib0clear(&___nl__string__186);
#line 310
//clear ___nl__bool__180;
#line 310
c_rt_lib0clear(&___nl__im__181);
#line 310
c_rt_lib0clear(&___nl__string__182);
#line 310
c_rt_lib0clear(&___nl__string__183);
#line 310
c_rt_lib0clear(&___nl__im__184);
#line 310
c_rt_lib0clear(&___nl__string__185);
#line 310
c_rt_lib0clear(&___nl__string__186);
#line 310
___nl__bool__179 = !___nl__bool__40;
#line 310
if(___nl__bool__179){ goto label_30;}
#line 310
c_rt_lib0move(&___nl__im__187, ntokenizer_priv0get_next_char(___ref___im__0));
#line 310
c_rt_lib0copy(&___nl__im__188, ___nl__im__187);
#line 310
___nl__bool__40 = string0is_digit(___nl__im__188);
#line 310
c_rt_lib0clear(&___nl__im__187);
#line 310
c_rt_lib0clear(&___nl__im__188);
#line 310
label_30:
#line 310
//clear ___nl__bool__179;
#line 310
//clear ___nl__bool__180;
#line 310
c_rt_lib0clear(&___nl__im__181);
#line 310
c_rt_lib0clear(&___nl__string__182);
#line 310
c_rt_lib0clear(&___nl__string__183);
#line 310
c_rt_lib0clear(&___nl__im__184);
#line 310
c_rt_lib0clear(&___nl__string__185);
#line 310
c_rt_lib0clear(&___nl__string__186);
#line 310
c_rt_lib0clear(&___nl__im__187);
#line 310
c_rt_lib0clear(&___nl__im__188);
#line 310
//clear ___nl__bool__179;
#line 310
//clear ___nl__bool__180;
#line 310
c_rt_lib0clear(&___nl__im__181);
#line 310
c_rt_lib0clear(&___nl__string__182);
#line 310
c_rt_lib0clear(&___nl__string__183);
#line 310
c_rt_lib0clear(&___nl__im__184);
#line 310
c_rt_lib0clear(&___nl__string__185);
#line 310
c_rt_lib0clear(&___nl__string__186);
#line 310
c_rt_lib0clear(&___nl__im__187);
#line 310
c_rt_lib0clear(&___nl__im__188);
#line 310
label_29:
#line 310
//clear ___nl__bool__177;
#line 310
c_rt_lib0clear(&___nl__im__178);
#line 310
//clear ___nl__bool__179;
#line 310
//clear ___nl__bool__180;
#line 310
c_rt_lib0clear(&___nl__im__181);
#line 310
c_rt_lib0clear(&___nl__string__182);
#line 310
c_rt_lib0clear(&___nl__string__183);
#line 310
c_rt_lib0clear(&___nl__im__184);
#line 310
c_rt_lib0clear(&___nl__string__185);
#line 310
c_rt_lib0clear(&___nl__string__186);
#line 310
c_rt_lib0clear(&___nl__im__187);
#line 310
c_rt_lib0clear(&___nl__im__188);
#line 310
___nl__bool__40 = !___nl__bool__40;
#line 310
if(___nl__bool__40){ goto label_28;}
#line 311
c_rt_lib0copy(&___nl__im__189, ___nl__im__39);
#line 311
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(1159), ___nl__im__189);
#line 311
c_rt_lib0clear(&___nl__im__189);
#line 312
c_rt_lib0move(&___nl__im__191, c_rt_lib0ov_mk_none(___get_global_const(1146)));
#line 312
c_rt_lib0copy(&___nl__im__190, ___nl__im__191);
#line 312
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(96), ___nl__im__190);
#line 312
c_rt_lib0clear(&___nl__im__190);
#line 312
c_rt_lib0clear(&___nl__im__191);
#line 313
c_rt_lib0move(&___nl__im__192,___get_global_const(289));
#line 313
c_rt_lib0move(&___nl__im__192, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__192));
#line 313
___nl__int__193 = 1;
#line 313
___nl__int__194 = getIntFromImm(___nl__im__192);
#line 313
___nl__int__195 = ___nl__int__194 + ___nl__int__193;
#line 313
c_rt_lib0move(&___nl__im__192, c_rt_lib0int_new(___nl__int__195));
#line 313
c_rt_lib0move(&___nl__string__196,___get_global_const(289));
#line 313
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__196, ___nl__im__192));
#line 313
c_rt_lib0clear(&___nl__im__192);
#line 313
//clear ___nl__int__193;
#line 313
//clear ___nl__int__194;
#line 313
//clear ___nl__int__195;
#line 313
c_rt_lib0clear(&___nl__string__196);
#line 314
c_rt_lib0move(&___nl__im__199,___get_global_const(346));
#line 314
c_rt_lib0copy(&___nl__string__200, ___nl__im__39);
#line 314
c_rt_lib0copy(&___nl__string__201, ___nl__im__199);
#line 314
___nl__bool__197 = c_rt_lib0eq(___nl__string__200, ___nl__string__201);
#line 314
c_rt_lib0clear(&___nl__im__199);
#line 314
c_rt_lib0clear(&___nl__string__200);
#line 314
c_rt_lib0clear(&___nl__string__201);
#line 314
if(___nl__bool__197){ goto label_34;}
#line 314
c_rt_lib0move(&___nl__im__202,___get_global_const(348));
#line 314
c_rt_lib0copy(&___nl__string__203, ___nl__im__39);
#line 314
c_rt_lib0copy(&___nl__string__204, ___nl__im__202);
#line 314
___nl__bool__197 = c_rt_lib0eq(___nl__string__203, ___nl__string__204);
#line 314
c_rt_lib0clear(&___nl__im__202);
#line 314
c_rt_lib0clear(&___nl__string__203);
#line 314
c_rt_lib0clear(&___nl__string__204);
#line 314
label_34:
#line 314
//clear ___nl__bool__198;
#line 314
c_rt_lib0clear(&___nl__im__199);
#line 314
c_rt_lib0clear(&___nl__string__200);
#line 314
c_rt_lib0clear(&___nl__string__201);
#line 314
c_rt_lib0clear(&___nl__im__202);
#line 314
c_rt_lib0clear(&___nl__string__203);
#line 314
c_rt_lib0clear(&___nl__string__204);
#line 314
___nl__bool__197 = !___nl__bool__197;
#line 314
if(___nl__bool__197){ goto label_33;}
#line 315
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 316
c_rt_lib0move(&___nl__im__205,___get_global_const(1159));
#line 316
c_rt_lib0move(&___nl__im__205, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__205));
#line 316
c_rt_lib0copy(&___nl__string__206, ___nl__im__205);
#line 316
c_rt_lib0copy(&___nl__string__207, ___nl__im__39);
#line 316
c_rt_lib0move(&___nl__string__208, c_rt_lib0concat_new(___nl__string__206, ___nl__string__207));
#line 316
c_rt_lib0copy(&___nl__im__205, ___nl__string__208);
#line 316
c_rt_lib0move(&___nl__string__209,___get_global_const(1159));
#line 316
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__209, ___nl__im__205));
#line 316
c_rt_lib0clear(&___nl__im__205);
#line 316
c_rt_lib0clear(&___nl__string__206);
#line 316
c_rt_lib0clear(&___nl__string__207);
#line 316
c_rt_lib0clear(&___nl__string__208);
#line 316
c_rt_lib0clear(&___nl__string__209);
#line 317
c_rt_lib0move(&___nl__im__210,___get_global_const(289));
#line 317
c_rt_lib0move(&___nl__im__210, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__210));
#line 317
___nl__int__211 = 1;
#line 317
___nl__int__212 = getIntFromImm(___nl__im__210);
#line 317
___nl__int__213 = ___nl__int__212 + ___nl__int__211;
#line 317
c_rt_lib0move(&___nl__im__210, c_rt_lib0int_new(___nl__int__213));
#line 317
c_rt_lib0move(&___nl__string__214,___get_global_const(289));
#line 317
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__214, ___nl__im__210));
#line 317
c_rt_lib0clear(&___nl__im__210);
#line 317
//clear ___nl__int__211;
#line 317
//clear ___nl__int__212;
#line 317
//clear ___nl__int__213;
#line 317
c_rt_lib0clear(&___nl__string__214);
#line 318
goto label_32;
#line 318
label_33:
#line 318
label_32:
#line 319
c_rt_lib0move(&___nl__im__218,___get_global_const(21));
#line 319
c_rt_lib0copy(&___nl__string__219, ___nl__im__39);
#line 319
c_rt_lib0copy(&___nl__string__220, ___nl__im__218);
#line 319
___nl__bool__215 = c_rt_lib0eq(___nl__string__219, ___nl__string__220);
#line 319
c_rt_lib0clear(&___nl__im__218);
#line 319
c_rt_lib0clear(&___nl__string__219);
#line 319
c_rt_lib0clear(&___nl__string__220);
#line 319
___nl__bool__217 = !___nl__bool__215;
#line 319
if(___nl__bool__217){ goto label_38;}
#line 319
c_rt_lib0move(&___nl__im__221, ntokenizer_priv0get_char(___ref___im__0));
#line 319
c_rt_lib0move(&___nl__im__222,___get_global_const(1171));
#line 319
c_rt_lib0copy(&___nl__string__223, ___nl__im__221);
#line 319
c_rt_lib0copy(&___nl__string__224, ___nl__im__222);
#line 319
___nl__bool__215 = c_rt_lib0eq(___nl__string__223, ___nl__string__224);
#line 319
c_rt_lib0clear(&___nl__im__221);
#line 319
c_rt_lib0clear(&___nl__im__222);
#line 319
c_rt_lib0clear(&___nl__string__223);
#line 319
c_rt_lib0clear(&___nl__string__224);
#line 319
label_38:
#line 319
//clear ___nl__bool__217;
#line 319
c_rt_lib0clear(&___nl__im__218);
#line 319
c_rt_lib0clear(&___nl__string__219);
#line 319
c_rt_lib0clear(&___nl__string__220);
#line 319
c_rt_lib0clear(&___nl__im__221);
#line 319
c_rt_lib0clear(&___nl__im__222);
#line 319
c_rt_lib0clear(&___nl__string__223);
#line 319
c_rt_lib0clear(&___nl__string__224);
#line 319
___nl__bool__216 = !___nl__bool__215;
#line 319
if(___nl__bool__216){ goto label_37;}
#line 319
c_rt_lib0move(&___nl__im__225, ntokenizer_priv0get_next_char(___ref___im__0));
#line 319
c_rt_lib0copy(&___nl__im__226, ___nl__im__225);
#line 319
___nl__bool__215 = ntokenizer_priv0is_hex_number(___nl__im__226);
#line 319
c_rt_lib0clear(&___nl__im__225);
#line 319
c_rt_lib0clear(&___nl__im__226);
#line 319
label_37:
#line 319
//clear ___nl__bool__216;
#line 319
//clear ___nl__bool__217;
#line 319
c_rt_lib0clear(&___nl__im__218);
#line 319
c_rt_lib0clear(&___nl__string__219);
#line 319
c_rt_lib0clear(&___nl__string__220);
#line 319
c_rt_lib0clear(&___nl__im__221);
#line 319
c_rt_lib0clear(&___nl__im__222);
#line 319
c_rt_lib0clear(&___nl__string__223);
#line 319
c_rt_lib0clear(&___nl__string__224);
#line 319
c_rt_lib0clear(&___nl__im__225);
#line 319
c_rt_lib0clear(&___nl__im__226);
#line 319
___nl__bool__215 = !___nl__bool__215;
#line 319
if(___nl__bool__215){ goto label_36;}
#line 320
c_rt_lib0move(&___nl__im__227, ntokenizer_priv0get_char(___ref___im__0));
#line 320
c_rt_lib0move(&___nl__im__228,___get_global_const(1159));
#line 320
c_rt_lib0move(&___nl__im__228, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__228));
#line 320
c_rt_lib0copy(&___nl__string__229, ___nl__im__228);
#line 320
c_rt_lib0copy(&___nl__string__230, ___nl__im__227);
#line 320
c_rt_lib0move(&___nl__string__231, c_rt_lib0concat_new(___nl__string__229, ___nl__string__230));
#line 320
c_rt_lib0copy(&___nl__im__228, ___nl__string__231);
#line 320
c_rt_lib0move(&___nl__string__232,___get_global_const(1159));
#line 320
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__232, ___nl__im__228));
#line 320
c_rt_lib0clear(&___nl__im__227);
#line 320
c_rt_lib0clear(&___nl__im__228);
#line 320
c_rt_lib0clear(&___nl__string__229);
#line 320
c_rt_lib0clear(&___nl__string__230);
#line 320
c_rt_lib0clear(&___nl__string__231);
#line 320
c_rt_lib0clear(&___nl__string__232);
#line 321
c_rt_lib0move(&___nl__im__233,___get_global_const(289));
#line 321
c_rt_lib0move(&___nl__im__233, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__233));
#line 321
___nl__int__234 = 1;
#line 321
___nl__int__235 = getIntFromImm(___nl__im__233);
#line 321
___nl__int__236 = ___nl__int__235 + ___nl__int__234;
#line 321
c_rt_lib0move(&___nl__im__233, c_rt_lib0int_new(___nl__int__236));
#line 321
c_rt_lib0move(&___nl__string__237,___get_global_const(289));
#line 321
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__237, ___nl__im__233));
#line 321
c_rt_lib0clear(&___nl__im__233);
#line 321
//clear ___nl__int__234;
#line 321
//clear ___nl__int__235;
#line 321
//clear ___nl__int__236;
#line 321
c_rt_lib0clear(&___nl__string__237);
#line 322
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 323
label_40:
#line 323
c_rt_lib0copy(&___nl__im__239, ___nl__im__39);
#line 323
___nl__bool__238 = ntokenizer_priv0is_hex_number(___nl__im__239);
#line 323
c_rt_lib0clear(&___nl__im__239);
#line 323
___nl__bool__238 = !___nl__bool__238;
#line 323
if(___nl__bool__238){ goto label_39;}
#line 324
c_rt_lib0move(&___nl__im__240,___get_global_const(1159));
#line 324
c_rt_lib0move(&___nl__im__240, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__240));
#line 324
c_rt_lib0copy(&___nl__string__241, ___nl__im__240);
#line 324
c_rt_lib0copy(&___nl__string__242, ___nl__im__39);
#line 324
c_rt_lib0move(&___nl__string__243, c_rt_lib0concat_new(___nl__string__241, ___nl__string__242));
#line 324
c_rt_lib0copy(&___nl__im__240, ___nl__string__243);
#line 324
c_rt_lib0move(&___nl__string__244,___get_global_const(1159));
#line 324
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__244, ___nl__im__240));
#line 324
c_rt_lib0clear(&___nl__im__240);
#line 324
c_rt_lib0clear(&___nl__string__241);
#line 324
c_rt_lib0clear(&___nl__string__242);
#line 324
c_rt_lib0clear(&___nl__string__243);
#line 324
c_rt_lib0clear(&___nl__string__244);
#line 325
c_rt_lib0move(&___nl__im__245,___get_global_const(289));
#line 325
c_rt_lib0move(&___nl__im__245, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__245));
#line 325
___nl__int__246 = 1;
#line 325
___nl__int__247 = getIntFromImm(___nl__im__245);
#line 325
___nl__int__248 = ___nl__int__247 + ___nl__int__246;
#line 325
c_rt_lib0move(&___nl__im__245, c_rt_lib0int_new(___nl__int__248));
#line 325
c_rt_lib0move(&___nl__string__249,___get_global_const(289));
#line 325
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__249, ___nl__im__245));
#line 325
c_rt_lib0clear(&___nl__im__245);
#line 325
//clear ___nl__int__246;
#line 325
//clear ___nl__int__247;
#line 325
//clear ___nl__int__248;
#line 325
c_rt_lib0clear(&___nl__string__249);
#line 326
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 327
goto label_40;
#line 327
label_39:
#line 328
goto label_35;
#line 328
label_36:
#line 329
___nl__int__250 = 0;
#line 330
label_42:
#line 331
c_rt_lib0move(&___nl__im__39, ntokenizer_priv0get_char(___ref___im__0));
#line 332
___nl__int__252 = 1;
#line 332
___nl__int__253 = ___nl__int__250 == ___nl__int__252;
#line 332
___nl__bool__251 = ___nl__int__253;
#line 332
//clear ___nl__int__252;
#line 332
//clear ___nl__int__253;
#line 332
//clear ___nl__int__252;
#line 332
//clear ___nl__int__253;
#line 332
___nl__bool__251 = !___nl__bool__251;
#line 332
if(___nl__bool__251){ goto label_44;}
#line 332
___nl__int__254 = 1;
#line 332
___nl__int__250 = ___nl__int__250 + ___nl__int__254;
#line 332
//clear ___nl__int__254;
#line 332
goto label_43;
#line 332
label_44:
#line 332
label_43:
#line 333
c_rt_lib0move(&___nl__im__258,___get_global_const(125));
#line 333
c_rt_lib0copy(&___nl__string__259, ___nl__im__39);
#line 333
c_rt_lib0copy(&___nl__string__260, ___nl__im__258);
#line 333
___nl__bool__255 = c_rt_lib0eq(___nl__string__259, ___nl__string__260);
#line 333
c_rt_lib0clear(&___nl__im__258);
#line 333
c_rt_lib0clear(&___nl__string__259);
#line 333
c_rt_lib0clear(&___nl__string__260);
#line 333
___nl__bool__257 = !___nl__bool__255;
#line 333
if(___nl__bool__257){ goto label_48;}
#line 333
c_rt_lib0move(&___nl__im__261, ntokenizer_priv0get_next_char(___ref___im__0));
#line 333
c_rt_lib0copy(&___nl__im__262, ___nl__im__261);
#line 333
___nl__bool__255 = string0is_digit(___nl__im__262);
#line 333
c_rt_lib0clear(&___nl__im__261);
#line 333
c_rt_lib0clear(&___nl__im__262);
#line 333
label_48:
#line 333
//clear ___nl__bool__257;
#line 333
c_rt_lib0clear(&___nl__im__258);
#line 333
c_rt_lib0clear(&___nl__string__259);
#line 333
c_rt_lib0clear(&___nl__string__260);
#line 333
c_rt_lib0clear(&___nl__im__261);
#line 333
c_rt_lib0clear(&___nl__im__262);
#line 333
___nl__bool__256 = !___nl__bool__255;
#line 333
if(___nl__bool__256){ goto label_47;}
#line 333
___nl__int__263 = 0;
#line 333
___nl__int__264 = ___nl__int__250 == ___nl__int__263;
#line 333
___nl__bool__255 = ___nl__int__264;
#line 333
//clear ___nl__int__263;
#line 333
//clear ___nl__int__264;
#line 333
label_47:
#line 333
//clear ___nl__bool__256;
#line 333
//clear ___nl__bool__257;
#line 333
c_rt_lib0clear(&___nl__im__258);
#line 333
c_rt_lib0clear(&___nl__string__259);
#line 333
c_rt_lib0clear(&___nl__string__260);
#line 333
c_rt_lib0clear(&___nl__im__261);
#line 333
c_rt_lib0clear(&___nl__im__262);
#line 333
//clear ___nl__int__263;
#line 333
//clear ___nl__int__264;
#line 333
___nl__bool__255 = !___nl__bool__255;
#line 333
if(___nl__bool__255){ goto label_46;}
#line 333
___nl__int__250 = 1;
#line 333
goto label_45;
#line 333
label_46:
#line 333
label_45:
#line 334
c_rt_lib0move(&___nl__im__267,___get_global_const(37));
#line 334
c_rt_lib0copy(&___nl__string__268, ___nl__im__39);
#line 334
c_rt_lib0copy(&___nl__string__269, ___nl__im__267);
#line 334
___nl__bool__265 = c_rt_lib0eq(___nl__string__268, ___nl__string__269);
#line 334
c_rt_lib0clear(&___nl__im__267);
#line 334
c_rt_lib0clear(&___nl__string__268);
#line 334
c_rt_lib0clear(&___nl__string__269);
#line 334
if(___nl__bool__265){ goto label_51;}
#line 334
c_rt_lib0copy(&___nl__im__271, ___nl__im__39);
#line 334
___nl__bool__265 = string0is_digit(___nl__im__271);
#line 334
c_rt_lib0clear(&___nl__im__271);
#line 334
if(___nl__bool__265){ goto label_52;}
#line 334
___nl__int__272 = 1;
#line 334
___nl__int__273 = ___nl__int__250 == ___nl__int__272;
#line 334
___nl__bool__265 = ___nl__int__273;
#line 334
//clear ___nl__int__272;
#line 334
//clear ___nl__int__273;
#line 334
label_52:
#line 334
//clear ___nl__bool__270;
#line 334
c_rt_lib0clear(&___nl__im__271);
#line 334
//clear ___nl__int__272;
#line 334
//clear ___nl__int__273;
#line 334
//clear ___nl__bool__270;
#line 334
c_rt_lib0clear(&___nl__im__271);
#line 334
//clear ___nl__int__272;
#line 334
//clear ___nl__int__273;
#line 334
___nl__bool__265 = !___nl__bool__265;
#line 334
//clear ___nl__bool__270;
#line 334
c_rt_lib0clear(&___nl__im__271);
#line 334
//clear ___nl__int__272;
#line 334
//clear ___nl__int__273;
#line 334
label_51:
#line 334
//clear ___nl__bool__266;
#line 334
c_rt_lib0clear(&___nl__im__267);
#line 334
c_rt_lib0clear(&___nl__string__268);
#line 334
c_rt_lib0clear(&___nl__string__269);
#line 334
//clear ___nl__bool__270;
#line 334
c_rt_lib0clear(&___nl__im__271);
#line 334
//clear ___nl__int__272;
#line 334
//clear ___nl__int__273;
#line 334
___nl__bool__265 = !___nl__bool__265;
#line 334
if(___nl__bool__265){ goto label_50;}
#line 334
goto label_41;
#line 334
goto label_49;
#line 334
label_50:
#line 334
label_49:
#line 335
c_rt_lib0move(&___nl__im__274,___get_global_const(1159));
#line 335
c_rt_lib0move(&___nl__im__274, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__274));
#line 335
c_rt_lib0copy(&___nl__string__275, ___nl__im__274);
#line 335
c_rt_lib0copy(&___nl__string__276, ___nl__im__39);
#line 335
c_rt_lib0move(&___nl__string__277, c_rt_lib0concat_new(___nl__string__275, ___nl__string__276));
#line 335
c_rt_lib0copy(&___nl__im__274, ___nl__string__277);
#line 335
c_rt_lib0move(&___nl__string__278,___get_global_const(1159));
#line 335
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__278, ___nl__im__274));
#line 335
c_rt_lib0clear(&___nl__im__274);
#line 335
c_rt_lib0clear(&___nl__string__275);
#line 335
c_rt_lib0clear(&___nl__string__276);
#line 335
c_rt_lib0clear(&___nl__string__277);
#line 335
c_rt_lib0clear(&___nl__string__278);
#line 336
c_rt_lib0move(&___nl__im__279,___get_global_const(289));
#line 336
c_rt_lib0move(&___nl__im__279, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__279));
#line 336
___nl__int__280 = 1;
#line 336
___nl__int__281 = getIntFromImm(___nl__im__279);
#line 336
___nl__int__282 = ___nl__int__281 + ___nl__int__280;
#line 336
c_rt_lib0move(&___nl__im__279, c_rt_lib0int_new(___nl__int__282));
#line 336
c_rt_lib0move(&___nl__string__283,___get_global_const(289));
#line 336
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__283, ___nl__im__279));
#line 336
c_rt_lib0clear(&___nl__im__279);
#line 336
//clear ___nl__int__280;
#line 336
//clear ___nl__int__281;
#line 336
//clear ___nl__int__282;
#line 336
c_rt_lib0clear(&___nl__string__283);
#line 330
goto label_42;
#line 330
label_41:
#line 338
goto label_35;
#line 338
label_35:
#line 339
goto label_5;
#line 339
label_28:
#line 340
c_rt_lib0move(&___nl__im__285, c_rt_lib0ov_mk_none(___get_global_const(140)));
#line 340
c_rt_lib0copy(&___nl__im__284, ___nl__im__285);
#line 340
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(96), ___nl__im__284);
#line 340
c_rt_lib0clear(&___nl__im__284);
#line 340
c_rt_lib0clear(&___nl__im__285);
#line 341
c_rt_lib0copy(&___nl__im__286, ___nl__im__39);
#line 341
c_rt_lib0hash_set_value_dec(___ref___im__0, ___get_global_const(1159), ___nl__im__286);
#line 341
c_rt_lib0clear(&___nl__im__286);
#line 342
goto label_5;
#line 342
label_5:
#line 342
c_rt_lib0clear(&___nl__im__1);
#line 342
c_rt_lib0clear(&___nl__im__2);
#line 342
//clear ___nl__int__3;
#line 342
c_rt_lib0clear(&___nl__im__4);
#line 342
c_rt_lib0clear(&___nl__im__5);
#line 342
//clear ___nl__int__6;
#line 342
//clear ___nl__int__7;
#line 342
//clear ___nl__int__8;
#line 342
c_rt_lib0clear(&___nl__im__9);
#line 342
//clear ___nl__int__10;
#line 342
c_rt_lib0clear(&___nl__im__11);
#line 342
//clear ___nl__int__12;
#line 342
c_rt_lib0clear(&___nl__im__13);
#line 342
c_rt_lib0clear(&___nl__im__14);
#line 342
c_rt_lib0clear(&___nl__im__15);
#line 342
//clear ___nl__int__16;
#line 342
c_rt_lib0clear(&___nl__im__17);
#line 342
c_rt_lib0clear(&___nl__im__18);
#line 342
//clear ___nl__int__19;
#line 342
//clear ___nl__int__20;
#line 342
//clear ___nl__int__21;
#line 342
c_rt_lib0clear(&___nl__im__22);
#line 342
//clear ___nl__int__23;
#line 342
c_rt_lib0clear(&___nl__im__24);
#line 342
//clear ___nl__int__25;
#line 342
c_rt_lib0clear(&___nl__im__26);
#line 342
//clear ___nl__bool__27;
#line 342
c_rt_lib0clear(&___nl__im__28);
#line 342
//clear ___nl__bool__29;
#line 342
//clear ___nl__int__30;
#line 342
c_rt_lib0clear(&___nl__im__31);
#line 342
//clear ___nl__int__32;
#line 342
c_rt_lib0clear(&___nl__im__33);
#line 342
//clear ___nl__int__34;
#line 342
c_rt_lib0clear(&___nl__im__35);
#line 342
c_rt_lib0clear(&___nl__im__36);
#line 342
c_rt_lib0clear(&___nl__im__37);
#line 342
c_rt_lib0clear(&___nl__im__38);
#line 342
c_rt_lib0clear(&___nl__im__39);
#line 342
//clear ___nl__bool__40;
#line 342
c_rt_lib0clear(&___nl__im__41);
#line 342
c_rt_lib0clear(&___nl__string__42);
#line 342
c_rt_lib0clear(&___nl__string__43);
#line 342
c_rt_lib0clear(&___nl__im__44);
#line 342
c_rt_lib0clear(&___nl__im__45);
#line 342
c_rt_lib0clear(&___nl__im__46);
#line 342
c_rt_lib0clear(&___nl__im__47);
#line 342
//clear ___nl__int__48;
#line 342
c_rt_lib0clear(&___nl__im__49);
#line 342
//clear ___nl__int__50;
#line 342
//clear ___nl__int__51;
#line 342
c_rt_lib0clear(&___nl__string__52);
#line 342
//clear ___nl__bool__53;
#line 342
c_rt_lib0clear(&___nl__im__54);
#line 342
c_rt_lib0clear(&___nl__string__55);
#line 342
c_rt_lib0clear(&___nl__string__56);
#line 342
//clear ___nl__int__57;
#line 342
c_rt_lib0clear(&___nl__im__58);
#line 342
//clear ___nl__int__59;
#line 342
//clear ___nl__int__60;
#line 342
c_rt_lib0clear(&___nl__string__61);
#line 342
//clear ___nl__bool__62;
#line 342
c_rt_lib0clear(&___nl__im__63);
#line 342
c_rt_lib0clear(&___nl__im__64);
#line 342
c_rt_lib0clear(&___nl__string__65);
#line 342
c_rt_lib0clear(&___nl__string__66);
#line 342
//clear ___nl__int__67;
#line 342
c_rt_lib0clear(&___nl__im__68);
#line 342
//clear ___nl__int__69;
#line 342
//clear ___nl__int__70;
#line 342
c_rt_lib0clear(&___nl__im__71);
#line 342
c_rt_lib0clear(&___nl__im__72);
#line 342
c_rt_lib0clear(&___nl__im__73);
#line 342
c_rt_lib0clear(&___nl__string__74);
#line 342
c_rt_lib0clear(&___nl__string__75);
#line 342
c_rt_lib0clear(&___nl__string__76);
#line 342
c_rt_lib0clear(&___nl__string__77);
#line 342
//clear ___nl__bool__78;
#line 342
c_rt_lib0clear(&___nl__im__79);
#line 342
c_rt_lib0clear(&___nl__im__80);
#line 342
c_rt_lib0clear(&___nl__string__81);
#line 342
c_rt_lib0clear(&___nl__string__82);
#line 342
c_rt_lib0clear(&___nl__string__83);
#line 342
c_rt_lib0clear(&___nl__im__84);
#line 342
c_rt_lib0clear(&___nl__string__85);
#line 342
c_rt_lib0clear(&___nl__string__86);
#line 342
c_rt_lib0clear(&___nl__im__87);
#line 342
c_rt_lib0clear(&___nl__im__88);
#line 342
c_rt_lib0clear(&___nl__string__89);
#line 342
c_rt_lib0clear(&___nl__string__90);
#line 342
c_rt_lib0clear(&___nl__string__91);
#line 342
c_rt_lib0clear(&___nl__im__92);
#line 342
c_rt_lib0clear(&___nl__string__93);
#line 342
c_rt_lib0clear(&___nl__string__94);
#line 342
c_rt_lib0clear(&___nl__im__95);
#line 342
c_rt_lib0clear(&___nl__im__96);
#line 342
c_rt_lib0clear(&___nl__im__97);
#line 342
c_rt_lib0clear(&___nl__im__98);
#line 342
c_rt_lib0clear(&___nl__im__99);
#line 342
c_rt_lib0clear(&___nl__string__100);
#line 342
c_rt_lib0clear(&___nl__string__101);
#line 342
c_rt_lib0clear(&___nl__string__102);
#line 342
//clear ___nl__int__103;
#line 342
c_rt_lib0clear(&___nl__im__104);
#line 342
//clear ___nl__int__105;
#line 342
//clear ___nl__int__106;
#line 342
c_rt_lib0clear(&___nl__string__107);
#line 342
c_rt_lib0clear(&___nl__im__108);
#line 342
c_rt_lib0clear(&___nl__im__109);
#line 342
c_rt_lib0clear(&___nl__im__110);
#line 342
//clear ___nl__int__111;
#line 342
//clear ___nl__int__112;
#line 342
//clear ___nl__int__113;
#line 342
c_rt_lib0clear(&___nl__string__114);
#line 342
//clear ___nl__bool__115;
#line 342
//clear ___nl__bool__116;
#line 342
c_rt_lib0clear(&___nl__im__117);
#line 342
c_rt_lib0clear(&___nl__string__118);
#line 342
c_rt_lib0clear(&___nl__string__119);
#line 342
//clear ___nl__bool__120;
#line 342
//clear ___nl__bool__121;
#line 342
c_rt_lib0clear(&___nl__im__122);
#line 342
c_rt_lib0clear(&___nl__im__123);
#line 342
c_rt_lib0clear(&___nl__im__124);
#line 342
c_rt_lib0clear(&___nl__string__125);
#line 342
c_rt_lib0clear(&___nl__string__126);
#line 342
c_rt_lib0clear(&___nl__im__127);
#line 342
c_rt_lib0clear(&___nl__string__128);
#line 342
c_rt_lib0clear(&___nl__string__129);
#line 342
c_rt_lib0clear(&___nl__string__130);
#line 342
c_rt_lib0clear(&___nl__string__131);
#line 342
c_rt_lib0clear(&___nl__im__132);
#line 342
//clear ___nl__int__133;
#line 342
//clear ___nl__int__134;
#line 342
//clear ___nl__int__135;
#line 342
c_rt_lib0clear(&___nl__string__136);
#line 342
//clear ___nl__bool__137;
#line 342
c_rt_lib0clear(&___nl__im__138);
#line 342
c_rt_lib0clear(&___nl__im__139);
#line 342
c_rt_lib0clear(&___nl__im__140);
#line 342
c_rt_lib0clear(&___nl__im__141);
#line 342
c_rt_lib0clear(&___nl__im__142);
#line 342
c_rt_lib0clear(&___nl__im__143);
#line 342
c_rt_lib0clear(&___nl__im__144);
#line 342
c_rt_lib0clear(&___nl__im__145);
#line 342
//clear ___nl__bool__146;
#line 342
c_rt_lib0clear(&___nl__im__147);
#line 342
c_rt_lib0clear(&___nl__im__148);
#line 342
c_rt_lib0clear(&___nl__im__149);
#line 342
c_rt_lib0clear(&___nl__im__150);
#line 342
c_rt_lib0clear(&___nl__im__151);
#line 342
c_rt_lib0clear(&___nl__im__152);
#line 342
c_rt_lib0clear(&___nl__im__153);
#line 342
c_rt_lib0clear(&___nl__im__154);
#line 342
c_rt_lib0clear(&___nl__im__155);
#line 342
//clear ___nl__int__156;
#line 342
c_rt_lib0clear(&___nl__im__157);
#line 342
c_rt_lib0clear(&___nl__im__158);
#line 342
//clear ___nl__int__159;
#line 342
//clear ___nl__int__160;
#line 342
c_rt_lib0clear(&___nl__string__161);
#line 342
c_rt_lib0clear(&___nl__im__162);
#line 342
c_rt_lib0clear(&___nl__im__163);
#line 342
c_rt_lib0clear(&___nl__im__164);
#line 342
c_rt_lib0clear(&___nl__im__165);
#line 342
//clear ___nl__int__166;
#line 342
//clear ___nl__int__167;
#line 342
//clear ___nl__int__168;
#line 342
c_rt_lib0clear(&___nl__im__169);
#line 342
c_rt_lib0clear(&___nl__im__170);
#line 342
c_rt_lib0clear(&___nl__im__171);
#line 342
c_rt_lib0clear(&___nl__im__172);
#line 342
//clear ___nl__int__173;
#line 342
//clear ___nl__int__174;
#line 342
//clear ___nl__int__175;
#line 342
c_rt_lib0clear(&___nl__string__176);
#line 342
//clear ___nl__bool__177;
#line 342
c_rt_lib0clear(&___nl__im__178);
#line 342
//clear ___nl__bool__179;
#line 342
//clear ___nl__bool__180;
#line 342
c_rt_lib0clear(&___nl__im__181);
#line 342
c_rt_lib0clear(&___nl__string__182);
#line 342
c_rt_lib0clear(&___nl__string__183);
#line 342
c_rt_lib0clear(&___nl__im__184);
#line 342
c_rt_lib0clear(&___nl__string__185);
#line 342
c_rt_lib0clear(&___nl__string__186);
#line 342
c_rt_lib0clear(&___nl__im__187);
#line 342
c_rt_lib0clear(&___nl__im__188);
#line 342
c_rt_lib0clear(&___nl__im__189);
#line 342
c_rt_lib0clear(&___nl__im__190);
#line 342
c_rt_lib0clear(&___nl__im__191);
#line 342
c_rt_lib0clear(&___nl__im__192);
#line 342
//clear ___nl__int__193;
#line 342
//clear ___nl__int__194;
#line 342
//clear ___nl__int__195;
#line 342
c_rt_lib0clear(&___nl__string__196);
#line 342
//clear ___nl__bool__197;
#line 342
//clear ___nl__bool__198;
#line 342
c_rt_lib0clear(&___nl__im__199);
#line 342
c_rt_lib0clear(&___nl__string__200);
#line 342
c_rt_lib0clear(&___nl__string__201);
#line 342
c_rt_lib0clear(&___nl__im__202);
#line 342
c_rt_lib0clear(&___nl__string__203);
#line 342
c_rt_lib0clear(&___nl__string__204);
#line 342
c_rt_lib0clear(&___nl__im__205);
#line 342
c_rt_lib0clear(&___nl__string__206);
#line 342
c_rt_lib0clear(&___nl__string__207);
#line 342
c_rt_lib0clear(&___nl__string__208);
#line 342
c_rt_lib0clear(&___nl__string__209);
#line 342
c_rt_lib0clear(&___nl__im__210);
#line 342
//clear ___nl__int__211;
#line 342
//clear ___nl__int__212;
#line 342
//clear ___nl__int__213;
#line 342
c_rt_lib0clear(&___nl__string__214);
#line 342
//clear ___nl__bool__215;
#line 342
//clear ___nl__bool__216;
#line 342
//clear ___nl__bool__217;
#line 342
c_rt_lib0clear(&___nl__im__218);
#line 342
c_rt_lib0clear(&___nl__string__219);
#line 342
c_rt_lib0clear(&___nl__string__220);
#line 342
c_rt_lib0clear(&___nl__im__221);
#line 342
c_rt_lib0clear(&___nl__im__222);
#line 342
c_rt_lib0clear(&___nl__string__223);
#line 342
c_rt_lib0clear(&___nl__string__224);
#line 342
c_rt_lib0clear(&___nl__im__225);
#line 342
c_rt_lib0clear(&___nl__im__226);
#line 342
c_rt_lib0clear(&___nl__im__227);
#line 342
c_rt_lib0clear(&___nl__im__228);
#line 342
c_rt_lib0clear(&___nl__string__229);
#line 342
c_rt_lib0clear(&___nl__string__230);
#line 342
c_rt_lib0clear(&___nl__string__231);
#line 342
c_rt_lib0clear(&___nl__string__232);
#line 342
c_rt_lib0clear(&___nl__im__233);
#line 342
//clear ___nl__int__234;
#line 342
//clear ___nl__int__235;
#line 342
//clear ___nl__int__236;
#line 342
c_rt_lib0clear(&___nl__string__237);
#line 342
//clear ___nl__bool__238;
#line 342
c_rt_lib0clear(&___nl__im__239);
#line 342
c_rt_lib0clear(&___nl__im__240);
#line 342
c_rt_lib0clear(&___nl__string__241);
#line 342
c_rt_lib0clear(&___nl__string__242);
#line 342
c_rt_lib0clear(&___nl__string__243);
#line 342
c_rt_lib0clear(&___nl__string__244);
#line 342
c_rt_lib0clear(&___nl__im__245);
#line 342
//clear ___nl__int__246;
#line 342
//clear ___nl__int__247;
#line 342
//clear ___nl__int__248;
#line 342
c_rt_lib0clear(&___nl__string__249);
#line 342
//clear ___nl__int__250;
#line 342
//clear ___nl__bool__251;
#line 342
//clear ___nl__int__252;
#line 342
//clear ___nl__int__253;
#line 342
//clear ___nl__int__254;
#line 342
//clear ___nl__bool__255;
#line 342
//clear ___nl__bool__256;
#line 342
//clear ___nl__bool__257;
#line 342
c_rt_lib0clear(&___nl__im__258);
#line 342
c_rt_lib0clear(&___nl__string__259);
#line 342
c_rt_lib0clear(&___nl__string__260);
#line 342
c_rt_lib0clear(&___nl__im__261);
#line 342
c_rt_lib0clear(&___nl__im__262);
#line 342
//clear ___nl__int__263;
#line 342
//clear ___nl__int__264;
#line 342
//clear ___nl__bool__265;
#line 342
//clear ___nl__bool__266;
#line 342
c_rt_lib0clear(&___nl__im__267);
#line 342
c_rt_lib0clear(&___nl__string__268);
#line 342
c_rt_lib0clear(&___nl__string__269);
#line 342
//clear ___nl__bool__270;
#line 342
c_rt_lib0clear(&___nl__im__271);
#line 342
//clear ___nl__int__272;
#line 342
//clear ___nl__int__273;
#line 342
c_rt_lib0clear(&___nl__im__274);
#line 342
c_rt_lib0clear(&___nl__string__275);
#line 342
c_rt_lib0clear(&___nl__string__276);
#line 342
c_rt_lib0clear(&___nl__string__277);
#line 342
c_rt_lib0clear(&___nl__string__278);
#line 342
c_rt_lib0clear(&___nl__im__279);
#line 342
//clear ___nl__int__280;
#line 342
//clear ___nl__int__281;
#line 342
//clear ___nl__int__282;
#line 342
c_rt_lib0clear(&___nl__string__283);
#line 342
c_rt_lib0clear(&___nl__im__284);
#line 342
c_rt_lib0clear(&___nl__im__285);
#line 342
c_rt_lib0clear(&___nl__im__286);
#line 342
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void ntokenizer_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT ntokenizer_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT ntokenizer_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
