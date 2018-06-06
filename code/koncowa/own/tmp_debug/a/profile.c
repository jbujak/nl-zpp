
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "profile.h"
#include "c_fe_lib.h"
#include "c_std_lib.h"
#include "nsystem.h"
#include "string.h"
#include "hash.h"
#include "func.h"
#include "array.h"
#include "ptd.h"
#line 1 "profile.nl"

static ImmT *__const__f = NULL;
void profile_priv0__const__init();
ImmT profile_priv0__const__sim(int __nr);
ImmT profile_priv0__const__sing(int __nr);

ImmT  profile_priv0diff_time(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  profile_priv0print_row(ImmT * ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
ImmT  profile_priv0get_profile_global();
ImmT  profile_priv0start(ImmT  ___nl__im__0);
ImmT  profile_priv0stop(ImmT  ___nl__im__0);


ImmT  profile_priv0diff_time(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
profile_priv0__const__init();
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
#line 16
___nl__int__4 = 0;
#line 16
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_get(___nl__im__0, ___nl__int__4));
#line 16
//clear ___nl__int__4;
#line 16
___nl__int__6 = 0;
#line 16
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_get(___nl__im__1, ___nl__int__6));
#line 16
//clear ___nl__int__6;
#line 16
___nl__int__7 = getIntFromImm(___nl__im__3);
#line 16
___nl__int__8 = getIntFromImm(___nl__im__5);
#line 16
___nl__int__2 = ___nl__int__7 - ___nl__int__8;
#line 16
c_rt_lib0clear(&___nl__im__3);
#line 16
//clear ___nl__int__4;
#line 16
c_rt_lib0clear(&___nl__im__5);
#line 16
//clear ___nl__int__6;
#line 16
//clear ___nl__int__7;
#line 16
//clear ___nl__int__8;
#line 17
___nl__int__11 = 1;
#line 17
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__11));
#line 17
//clear ___nl__int__11;
#line 17
___nl__int__13 = 1;
#line 17
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__1, ___nl__int__13));
#line 17
//clear ___nl__int__13;
#line 17
___nl__int__14 = getIntFromImm(___nl__im__10);
#line 17
___nl__int__15 = getIntFromImm(___nl__im__12);
#line 17
___nl__int__9 = ___nl__int__14 - ___nl__int__15;
#line 17
c_rt_lib0clear(&___nl__im__10);
#line 17
//clear ___nl__int__11;
#line 17
c_rt_lib0clear(&___nl__im__12);
#line 17
//clear ___nl__int__13;
#line 17
//clear ___nl__int__14;
#line 17
//clear ___nl__int__15;
#line 18
___nl__int__17 = 0;
#line 18
___nl__int__18 = ___nl__int__9 < ___nl__int__17;
#line 18
___nl__bool__16 = ___nl__int__18;
#line 18
//clear ___nl__int__17;
#line 18
//clear ___nl__int__18;
#line 18
___nl__bool__16 = !___nl__bool__16;
#line 18
if(___nl__bool__16){ goto label_2;}
#line 19
___nl__int__19 = 1;
#line 19
___nl__int__2 = ___nl__int__2 - ___nl__int__19;
#line 19
//clear ___nl__int__19;
#line 20
___nl__int__20 = 1000000;
#line 20
___nl__int__9 = ___nl__int__9 + ___nl__int__20;
#line 20
//clear ___nl__int__20;
#line 21
goto label_1;
#line 21
label_2:
#line 21
label_1:
#line 22
___nl__int__24 = 1000.0;
#line 22
___nl__int__23 = ___nl__int__2 * ___nl__int__24;
#line 22
//clear ___nl__int__24;
#line 22
___nl__int__26 = 1000.0;
#line 22
___nl__int__25 = ___nl__int__9 / ___nl__int__26;
#line 22
//clear ___nl__int__26;
#line 22
___nl__int__22 = ___nl__int__23 + ___nl__int__25;
#line 22
//clear ___nl__int__23;
#line 22
//clear ___nl__int__24;
#line 22
//clear ___nl__int__25;
#line 22
//clear ___nl__int__26;
#line 22
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__22));
#line 22
c_rt_lib0clear(&___nl__im__0);
#line 22
c_rt_lib0clear(&___nl__im__1);
#line 22
//clear ___nl__int__2;
#line 22
c_rt_lib0clear(&___nl__im__3);
#line 22
//clear ___nl__int__4;
#line 22
c_rt_lib0clear(&___nl__im__5);
#line 22
//clear ___nl__int__6;
#line 22
//clear ___nl__int__7;
#line 22
//clear ___nl__int__8;
#line 22
//clear ___nl__int__9;
#line 22
c_rt_lib0clear(&___nl__im__10);
#line 22
//clear ___nl__int__11;
#line 22
c_rt_lib0clear(&___nl__im__12);
#line 22
//clear ___nl__int__13;
#line 22
//clear ___nl__int__14;
#line 22
//clear ___nl__int__15;
#line 22
//clear ___nl__bool__16;
#line 22
//clear ___nl__int__17;
#line 22
//clear ___nl__int__18;
#line 22
//clear ___nl__int__19;
#line 22
//clear ___nl__int__20;
#line 22
//clear ___nl__int__22;
#line 22
//clear ___nl__int__23;
#line 22
//clear ___nl__int__24;
#line 22
//clear ___nl__int__25;
#line 22
//clear ___nl__int__26;
#line 22
return ___nl__im__21;
#line 22
c_rt_lib0clear(&___nl__im__0);
#line 22
c_rt_lib0clear(&___nl__im__1);
#line 22
//clear ___nl__int__2;
#line 22
c_rt_lib0clear(&___nl__im__3);
#line 22
//clear ___nl__int__4;
#line 22
c_rt_lib0clear(&___nl__im__5);
#line 22
//clear ___nl__int__6;
#line 22
//clear ___nl__int__7;
#line 22
//clear ___nl__int__8;
#line 22
//clear ___nl__int__9;
#line 22
c_rt_lib0clear(&___nl__im__10);
#line 22
//clear ___nl__int__11;
#line 22
c_rt_lib0clear(&___nl__im__12);
#line 22
//clear ___nl__int__13;
#line 22
//clear ___nl__int__14;
#line 22
//clear ___nl__int__15;
#line 22
//clear ___nl__bool__16;
#line 22
//clear ___nl__int__17;
#line 22
//clear ___nl__int__18;
#line 22
//clear ___nl__int__19;
#line 22
//clear ___nl__int__20;
#line 22
c_rt_lib0clear(&___nl__im__21);
#line 22
//clear ___nl__int__22;
#line 22
//clear ___nl__int__23;
#line 22
//clear ___nl__int__24;
#line 22
//clear ___nl__int__25;
#line 22
//clear ___nl__int__26;
#line 22
return NULL;
}

ImmT  profile_priv0print_row(ImmT * ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
profile_priv0__const__init();
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
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__string__17 = NULL;
ImmT  ___nl__string__18 = NULL;
ImmT  ___nl__string__19 = NULL;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__string__32 = NULL;
ImmT  ___nl__string__33 = NULL;
ImmT  ___nl__string__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__string__36 = NULL;
ImmT  ___nl__string__37 = NULL;
ImmT  ___nl__string__38 = NULL;
ImmT  ___nl__im__39 = NULL;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
INT  ___nl__int__49 = 0;
INT  ___nl__int__50 = 0;
INT  ___nl__int__51 = 0;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__string__55 = NULL;
ImmT  ___nl__string__56 = NULL;
ImmT  ___nl__string__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
INT  ___nl__int__60 = 0;
INT  ___nl__int__61 = 0;
INT  ___nl__int__62 = 0;
INT  ___nl__int__63 = 0;
INT  ___nl__int__64 = 0;
ImmT  ___nl__string__65 = NULL;
ImmT  ___nl__string__66 = NULL;
ImmT  ___nl__string__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__string__69 = NULL;
ImmT  ___nl__string__70 = NULL;
ImmT  ___nl__string__71 = NULL;
ImmT  ___nl__string__72 = NULL;
ImmT  ___nl__string__73 = NULL;
ImmT  ___nl__string__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__string__76 = NULL;
ImmT  ___nl__string__77 = NULL;
ImmT  ___nl__string__78 = NULL;
ImmT  ___nl__string__79 = NULL;
ImmT  ___nl__string__80 = NULL;
ImmT  ___nl__string__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__string__83 = NULL;
ImmT  ___nl__string__84 = NULL;
ImmT  ___nl__string__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__string__87 = NULL;
ImmT  ___nl__string__88 = NULL;
ImmT  ___nl__string__89 = NULL;
ImmT  ___nl__string__90 = NULL;
#line 26
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 27
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(898)));
#line 27
___nl__int__6 = 0;
#line 27
___nl__int__7 = 1;
#line 27
___nl__int__8 = c_rt_lib0array_len(___nl__im__4);
#line 27
label_3:
#line 27
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 27
___nl__bool__9 = ___nl__int__10;
#line 27
if(___nl__bool__9){ goto label_1;}
#line 27
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__4, ___nl__int__6));
#line 27
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 28
c_rt_lib0move(&___nl__im__13,___get_global_const(1243));
#line 28
c_rt_lib0copy(&___nl__im__15, ___nl__im__1);
#line 28
c_rt_lib0copy(&___nl__im__16, ___nl__im__5);
#line 28
c_rt_lib0move(&___nl__im__14, profile_priv0diff_time(___nl__im__15, ___nl__im__16));
#line 28
c_rt_lib0clear(&___nl__im__15);
#line 28
c_rt_lib0clear(&___nl__im__16);
#line 28
c_rt_lib0copy(&___nl__string__17, ___nl__im__13);
#line 28
c_rt_lib0copy(&___nl__string__18, ___nl__im__14);
#line 28
c_rt_lib0move(&___nl__string__19, c_rt_lib0concat_new(___nl__string__17, ___nl__string__18));
#line 28
c_rt_lib0copy(&___nl__im__12, ___nl__string__19);
#line 28
c_rt_lib0clear(&___nl__im__13);
#line 28
c_rt_lib0clear(&___nl__im__14);
#line 28
c_rt_lib0clear(&___nl__im__15);
#line 28
c_rt_lib0clear(&___nl__im__16);
#line 28
c_rt_lib0clear(&___nl__string__17);
#line 28
c_rt_lib0clear(&___nl__string__18);
#line 28
c_rt_lib0clear(&___nl__string__19);
#line 29
c_rt_lib0copy(&___nl__im__21, ___nl__im__12);
#line 29
c_rt_lib0move(&___nl__im__22,___get_global_const(125));
#line 29
c_rt_lib0copy(&___nl__im__23, ___nl__im__22);
#line 29
c_rt_lib0move(&___nl__im__24, string0index2(___nl__im__21, ___nl__im__23));
#line 29
___nl__int__20 = getIntFromImm(___nl__im__24);
#line 29
c_rt_lib0clear(&___nl__im__21);
#line 29
c_rt_lib0clear(&___nl__im__22);
#line 29
c_rt_lib0clear(&___nl__im__23);
#line 29
c_rt_lib0clear(&___nl__im__24);
#line 30
c_rt_lib0copy(&___nl__im__26, ___nl__im__12);
#line 30
___nl__int__25 = string0length(___nl__im__26);
#line 30
c_rt_lib0clear(&___nl__im__26);
#line 31
c_rt_lib0move(&___nl__im__28,___get_global_const(41));
#line 31
c_rt_lib0move(&___nl__im__28, c_rt_lib0unary_minus(___nl__im__28));
#line 31
___nl__int__29 = getIntFromImm(___nl__im__28);
#line 31
___nl__int__30 = ___nl__int__20 == ___nl__int__29;
#line 31
___nl__bool__27 = ___nl__int__30;
#line 31
c_rt_lib0clear(&___nl__im__28);
#line 31
//clear ___nl__int__29;
#line 31
//clear ___nl__int__30;
#line 31
___nl__bool__27 = !___nl__bool__27;
#line 31
if(___nl__bool__27){ goto label_5;}
#line 32
c_rt_lib0move(&___nl__im__31,___get_global_const(1244));
#line 32
c_rt_lib0copy(&___nl__string__32, ___nl__im__12);
#line 32
c_rt_lib0copy(&___nl__string__33, ___nl__im__31);
#line 32
c_rt_lib0move(&___nl__string__34, c_rt_lib0concat_new(___nl__string__32, ___nl__string__33));
#line 32
c_rt_lib0copy(&___nl__im__12, ___nl__string__34);
#line 32
c_rt_lib0clear(&___nl__im__31);
#line 32
c_rt_lib0clear(&___nl__string__32);
#line 32
c_rt_lib0clear(&___nl__string__33);
#line 32
c_rt_lib0clear(&___nl__string__34);
#line 33
goto label_4;
#line 33
label_5:
#line 34
c_rt_lib0move(&___nl__im__35,___get_global_const(1245));
#line 34
c_rt_lib0copy(&___nl__string__36, ___nl__im__12);
#line 34
c_rt_lib0copy(&___nl__string__37, ___nl__im__35);
#line 34
c_rt_lib0move(&___nl__string__38, c_rt_lib0concat_new(___nl__string__36, ___nl__string__37));
#line 34
c_rt_lib0copy(&___nl__im__12, ___nl__string__38);
#line 34
c_rt_lib0clear(&___nl__im__35);
#line 34
c_rt_lib0clear(&___nl__string__36);
#line 34
c_rt_lib0clear(&___nl__string__37);
#line 34
c_rt_lib0clear(&___nl__string__38);
#line 35
c_rt_lib0copy(&___nl__im__39, ___nl__im__12);
#line 35
___nl__int__40 = 0;
#line 35
___nl__int__41 = ___nl__int__40;
#line 35
___nl__int__43 = 4;
#line 35
___nl__int__42 = ___nl__int__20 + ___nl__int__43;
#line 35
//clear ___nl__int__43;
#line 35
___nl__int__44 = ___nl__int__42;
#line 35
c_rt_lib0move(&___nl__im__12, string0substr(___nl__im__39, ___nl__int__41, ___nl__int__44));
#line 35
c_rt_lib0clear(&___nl__im__39);
#line 35
//clear ___nl__int__40;
#line 35
//clear ___nl__int__41;
#line 35
//clear ___nl__int__42;
#line 35
//clear ___nl__int__43;
#line 35
//clear ___nl__int__44;
#line 35
c_rt_lib0clear(&___nl__im__39);
#line 35
//clear ___nl__int__40;
#line 35
//clear ___nl__int__41;
#line 35
//clear ___nl__int__42;
#line 35
//clear ___nl__int__43;
#line 35
//clear ___nl__int__44;
#line 36
___nl__int__25 = ___nl__int__20;
#line 37
goto label_4;
#line 37
label_4:
#line 38
c_rt_lib0copy(&___nl__im__48, ___nl__im__12);
#line 38
___nl__int__50 = 7;
#line 38
___nl__int__49 = ___nl__int__25 - ___nl__int__50;
#line 38
//clear ___nl__int__50;
#line 38
___nl__int__51 = ___nl__int__49;
#line 38
___nl__int__52 = 4;
#line 38
___nl__int__53 = ___nl__int__52;
#line 38
c_rt_lib0move(&___nl__im__47, string0substr(___nl__im__48, ___nl__int__51, ___nl__int__53));
#line 38
c_rt_lib0clear(&___nl__im__48);
#line 38
//clear ___nl__int__49;
#line 38
//clear ___nl__int__50;
#line 38
//clear ___nl__int__51;
#line 38
//clear ___nl__int__52;
#line 38
//clear ___nl__int__53;
#line 38
c_rt_lib0move(&___nl__im__54,___get_global_const(439));
#line 38
c_rt_lib0copy(&___nl__string__55, ___nl__im__47);
#line 38
c_rt_lib0copy(&___nl__string__56, ___nl__im__54);
#line 38
c_rt_lib0move(&___nl__string__57, c_rt_lib0concat_new(___nl__string__55, ___nl__string__56));
#line 38
c_rt_lib0copy(&___nl__im__46, ___nl__string__57);
#line 38
c_rt_lib0clear(&___nl__im__47);
#line 38
c_rt_lib0clear(&___nl__im__48);
#line 38
//clear ___nl__int__49;
#line 38
//clear ___nl__int__50;
#line 38
//clear ___nl__int__51;
#line 38
//clear ___nl__int__52;
#line 38
//clear ___nl__int__53;
#line 38
c_rt_lib0clear(&___nl__im__54);
#line 38
c_rt_lib0clear(&___nl__string__55);
#line 38
c_rt_lib0clear(&___nl__string__56);
#line 38
c_rt_lib0clear(&___nl__string__57);
#line 38
c_rt_lib0copy(&___nl__im__59, ___nl__im__12);
#line 38
___nl__int__61 = 3;
#line 38
___nl__int__60 = ___nl__int__25 - ___nl__int__61;
#line 38
//clear ___nl__int__61;
#line 38
___nl__int__62 = ___nl__int__60;
#line 38
___nl__int__63 = 7;
#line 38
___nl__int__64 = ___nl__int__63;
#line 38
c_rt_lib0move(&___nl__im__58, string0substr(___nl__im__59, ___nl__int__62, ___nl__int__64));
#line 38
c_rt_lib0clear(&___nl__im__59);
#line 38
//clear ___nl__int__60;
#line 38
//clear ___nl__int__61;
#line 38
//clear ___nl__int__62;
#line 38
//clear ___nl__int__63;
#line 38
//clear ___nl__int__64;
#line 38
c_rt_lib0copy(&___nl__string__65, ___nl__im__46);
#line 38
c_rt_lib0copy(&___nl__string__66, ___nl__im__58);
#line 38
c_rt_lib0move(&___nl__string__67, c_rt_lib0concat_new(___nl__string__65, ___nl__string__66));
#line 38
c_rt_lib0copy(&___nl__im__45, ___nl__string__67);
#line 38
c_rt_lib0clear(&___nl__im__46);
#line 38
c_rt_lib0clear(&___nl__im__47);
#line 38
c_rt_lib0clear(&___nl__im__48);
#line 38
//clear ___nl__int__49;
#line 38
//clear ___nl__int__50;
#line 38
//clear ___nl__int__51;
#line 38
//clear ___nl__int__52;
#line 38
//clear ___nl__int__53;
#line 38
c_rt_lib0clear(&___nl__im__54);
#line 38
c_rt_lib0clear(&___nl__string__55);
#line 38
c_rt_lib0clear(&___nl__string__56);
#line 38
c_rt_lib0clear(&___nl__string__57);
#line 38
c_rt_lib0clear(&___nl__im__58);
#line 38
c_rt_lib0clear(&___nl__im__59);
#line 38
//clear ___nl__int__60;
#line 38
//clear ___nl__int__61;
#line 38
//clear ___nl__int__62;
#line 38
//clear ___nl__int__63;
#line 38
//clear ___nl__int__64;
#line 38
c_rt_lib0clear(&___nl__string__65);
#line 38
c_rt_lib0clear(&___nl__string__66);
#line 38
c_rt_lib0clear(&___nl__string__67);
#line 38
c_rt_lib0move(&___nl__im__68, string0tab());
#line 38
c_rt_lib0copy(&___nl__string__69, ___nl__im__45);
#line 38
c_rt_lib0copy(&___nl__string__70, ___nl__im__68);
#line 38
c_rt_lib0move(&___nl__string__71, c_rt_lib0concat_new(___nl__string__69, ___nl__string__70));
#line 38
c_rt_lib0copy(&___nl__im__12, ___nl__string__71);
#line 38
c_rt_lib0clear(&___nl__im__45);
#line 38
c_rt_lib0clear(&___nl__im__46);
#line 38
c_rt_lib0clear(&___nl__im__47);
#line 38
c_rt_lib0clear(&___nl__im__48);
#line 38
//clear ___nl__int__49;
#line 38
//clear ___nl__int__50;
#line 38
//clear ___nl__int__51;
#line 38
//clear ___nl__int__52;
#line 38
//clear ___nl__int__53;
#line 38
c_rt_lib0clear(&___nl__im__54);
#line 38
c_rt_lib0clear(&___nl__string__55);
#line 38
c_rt_lib0clear(&___nl__string__56);
#line 38
c_rt_lib0clear(&___nl__string__57);
#line 38
c_rt_lib0clear(&___nl__im__58);
#line 38
c_rt_lib0clear(&___nl__im__59);
#line 38
//clear ___nl__int__60;
#line 38
//clear ___nl__int__61;
#line 38
//clear ___nl__int__62;
#line 38
//clear ___nl__int__63;
#line 38
//clear ___nl__int__64;
#line 38
c_rt_lib0clear(&___nl__string__65);
#line 38
c_rt_lib0clear(&___nl__string__66);
#line 38
c_rt_lib0clear(&___nl__string__67);
#line 38
c_rt_lib0clear(&___nl__im__68);
#line 38
c_rt_lib0clear(&___nl__string__69);
#line 38
c_rt_lib0clear(&___nl__string__70);
#line 38
c_rt_lib0clear(&___nl__string__71);
#line 38
c_rt_lib0clear(&___nl__im__45);
#line 38
c_rt_lib0clear(&___nl__im__46);
#line 38
c_rt_lib0clear(&___nl__im__47);
#line 38
c_rt_lib0clear(&___nl__im__48);
#line 38
//clear ___nl__int__49;
#line 38
//clear ___nl__int__50;
#line 38
//clear ___nl__int__51;
#line 38
//clear ___nl__int__52;
#line 38
//clear ___nl__int__53;
#line 38
c_rt_lib0clear(&___nl__im__54);
#line 38
c_rt_lib0clear(&___nl__string__55);
#line 38
c_rt_lib0clear(&___nl__string__56);
#line 38
c_rt_lib0clear(&___nl__string__57);
#line 38
c_rt_lib0clear(&___nl__im__58);
#line 38
c_rt_lib0clear(&___nl__im__59);
#line 38
//clear ___nl__int__60;
#line 38
//clear ___nl__int__61;
#line 38
//clear ___nl__int__62;
#line 38
//clear ___nl__int__63;
#line 38
//clear ___nl__int__64;
#line 38
c_rt_lib0clear(&___nl__string__65);
#line 38
c_rt_lib0clear(&___nl__string__66);
#line 38
c_rt_lib0clear(&___nl__string__67);
#line 38
c_rt_lib0clear(&___nl__im__68);
#line 38
c_rt_lib0clear(&___nl__string__69);
#line 38
c_rt_lib0clear(&___nl__string__70);
#line 38
c_rt_lib0clear(&___nl__string__71);
#line 39
c_rt_lib0copy(&___nl__string__72, ___nl__im__3);
#line 39
c_rt_lib0copy(&___nl__string__73, ___nl__im__12);
#line 39
c_rt_lib0move(&___nl__string__74, c_rt_lib0concat_new(___nl__string__72, ___nl__string__73));
#line 39
c_rt_lib0copy(&___nl__im__3, ___nl__string__74);
#line 39
c_rt_lib0clear(&___nl__string__72);
#line 39
c_rt_lib0clear(&___nl__string__73);
#line 39
c_rt_lib0clear(&___nl__string__74);
#line 39
c_rt_lib0clear(&___nl__im__5);
#line 39
label_2:
#line 40
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 40
goto label_3;
#line 40
label_1:
#line 41
c_rt_lib0move(&___nl__im__75, string0tab());
#line 41
c_rt_lib0copy(&___nl__string__76, ___nl__im__3);
#line 41
c_rt_lib0copy(&___nl__string__77, ___nl__im__75);
#line 41
c_rt_lib0move(&___nl__string__78, c_rt_lib0concat_new(___nl__string__76, ___nl__string__77));
#line 41
c_rt_lib0copy(&___nl__im__3, ___nl__string__78);
#line 41
c_rt_lib0clear(&___nl__im__75);
#line 41
c_rt_lib0clear(&___nl__string__76);
#line 41
c_rt_lib0clear(&___nl__string__77);
#line 41
c_rt_lib0clear(&___nl__string__78);
#line 42
c_rt_lib0copy(&___nl__string__79, ___nl__im__3);
#line 42
c_rt_lib0copy(&___nl__string__80, ___nl__im__2);
#line 42
c_rt_lib0move(&___nl__string__81, c_rt_lib0concat_new(___nl__string__79, ___nl__string__80));
#line 42
c_rt_lib0copy(&___nl__im__3, ___nl__string__81);
#line 42
c_rt_lib0clear(&___nl__string__79);
#line 42
c_rt_lib0clear(&___nl__string__80);
#line 42
c_rt_lib0clear(&___nl__string__81);
#line 43
c_rt_lib0move(&___nl__im__82, string0lf());
#line 43
c_rt_lib0copy(&___nl__string__83, ___nl__im__3);
#line 43
c_rt_lib0copy(&___nl__string__84, ___nl__im__82);
#line 43
c_rt_lib0move(&___nl__string__85, c_rt_lib0concat_new(___nl__string__83, ___nl__string__84));
#line 43
c_rt_lib0copy(&___nl__im__3, ___nl__string__85);
#line 43
c_rt_lib0clear(&___nl__im__82);
#line 43
c_rt_lib0clear(&___nl__string__83);
#line 43
c_rt_lib0clear(&___nl__string__84);
#line 43
c_rt_lib0clear(&___nl__string__85);
#line 44
c_rt_lib0move(&___nl__im__86,___get_global_const(204));
#line 44
c_rt_lib0move(&___nl__im__86, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__86));
#line 44
c_rt_lib0copy(&___nl__string__87, ___nl__im__86);
#line 44
c_rt_lib0copy(&___nl__string__88, ___nl__im__3);
#line 44
c_rt_lib0move(&___nl__string__89, c_rt_lib0concat_new(___nl__string__87, ___nl__string__88));
#line 44
c_rt_lib0copy(&___nl__im__86, ___nl__string__89);
#line 44
c_rt_lib0move(&___nl__string__90,___get_global_const(204));
#line 44
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__90, ___nl__im__86));
#line 44
c_rt_lib0clear(&___nl__im__86);
#line 44
c_rt_lib0clear(&___nl__string__87);
#line 44
c_rt_lib0clear(&___nl__string__88);
#line 44
c_rt_lib0clear(&___nl__string__89);
#line 44
c_rt_lib0clear(&___nl__string__90);
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
//clear ___nl__int__6;
#line 44
//clear ___nl__int__7;
#line 44
//clear ___nl__int__8;
#line 44
//clear ___nl__bool__9;
#line 44
//clear ___nl__int__10;
#line 44
c_rt_lib0clear(&___nl__im__11);
#line 44
c_rt_lib0clear(&___nl__im__12);
#line 44
c_rt_lib0clear(&___nl__im__13);
#line 44
c_rt_lib0clear(&___nl__im__14);
#line 44
c_rt_lib0clear(&___nl__im__15);
#line 44
c_rt_lib0clear(&___nl__im__16);
#line 44
c_rt_lib0clear(&___nl__string__17);
#line 44
c_rt_lib0clear(&___nl__string__18);
#line 44
c_rt_lib0clear(&___nl__string__19);
#line 44
//clear ___nl__int__20;
#line 44
c_rt_lib0clear(&___nl__im__21);
#line 44
c_rt_lib0clear(&___nl__im__22);
#line 44
c_rt_lib0clear(&___nl__im__23);
#line 44
c_rt_lib0clear(&___nl__im__24);
#line 44
//clear ___nl__int__25;
#line 44
c_rt_lib0clear(&___nl__im__26);
#line 44
//clear ___nl__bool__27;
#line 44
c_rt_lib0clear(&___nl__im__28);
#line 44
//clear ___nl__int__29;
#line 44
//clear ___nl__int__30;
#line 44
c_rt_lib0clear(&___nl__im__31);
#line 44
c_rt_lib0clear(&___nl__string__32);
#line 44
c_rt_lib0clear(&___nl__string__33);
#line 44
c_rt_lib0clear(&___nl__string__34);
#line 44
c_rt_lib0clear(&___nl__im__35);
#line 44
c_rt_lib0clear(&___nl__string__36);
#line 44
c_rt_lib0clear(&___nl__string__37);
#line 44
c_rt_lib0clear(&___nl__string__38);
#line 44
c_rt_lib0clear(&___nl__im__39);
#line 44
//clear ___nl__int__40;
#line 44
//clear ___nl__int__41;
#line 44
//clear ___nl__int__42;
#line 44
//clear ___nl__int__43;
#line 44
//clear ___nl__int__44;
#line 44
c_rt_lib0clear(&___nl__im__45);
#line 44
c_rt_lib0clear(&___nl__im__46);
#line 44
c_rt_lib0clear(&___nl__im__47);
#line 44
c_rt_lib0clear(&___nl__im__48);
#line 44
//clear ___nl__int__49;
#line 44
//clear ___nl__int__50;
#line 44
//clear ___nl__int__51;
#line 44
//clear ___nl__int__52;
#line 44
//clear ___nl__int__53;
#line 44
c_rt_lib0clear(&___nl__im__54);
#line 44
c_rt_lib0clear(&___nl__string__55);
#line 44
c_rt_lib0clear(&___nl__string__56);
#line 44
c_rt_lib0clear(&___nl__string__57);
#line 44
c_rt_lib0clear(&___nl__im__58);
#line 44
c_rt_lib0clear(&___nl__im__59);
#line 44
//clear ___nl__int__60;
#line 44
//clear ___nl__int__61;
#line 44
//clear ___nl__int__62;
#line 44
//clear ___nl__int__63;
#line 44
//clear ___nl__int__64;
#line 44
c_rt_lib0clear(&___nl__string__65);
#line 44
c_rt_lib0clear(&___nl__string__66);
#line 44
c_rt_lib0clear(&___nl__string__67);
#line 44
c_rt_lib0clear(&___nl__im__68);
#line 44
c_rt_lib0clear(&___nl__string__69);
#line 44
c_rt_lib0clear(&___nl__string__70);
#line 44
c_rt_lib0clear(&___nl__string__71);
#line 44
c_rt_lib0clear(&___nl__string__72);
#line 44
c_rt_lib0clear(&___nl__string__73);
#line 44
c_rt_lib0clear(&___nl__string__74);
#line 44
c_rt_lib0clear(&___nl__im__75);
#line 44
c_rt_lib0clear(&___nl__string__76);
#line 44
c_rt_lib0clear(&___nl__string__77);
#line 44
c_rt_lib0clear(&___nl__string__78);
#line 44
c_rt_lib0clear(&___nl__string__79);
#line 44
c_rt_lib0clear(&___nl__string__80);
#line 44
c_rt_lib0clear(&___nl__string__81);
#line 44
c_rt_lib0clear(&___nl__im__82);
#line 44
c_rt_lib0clear(&___nl__string__83);
#line 44
c_rt_lib0clear(&___nl__string__84);
#line 44
c_rt_lib0clear(&___nl__string__85);
#line 44
c_rt_lib0clear(&___nl__im__86);
#line 44
c_rt_lib0clear(&___nl__string__87);
#line 44
c_rt_lib0clear(&___nl__string__88);
#line 44
c_rt_lib0clear(&___nl__string__89);
#line 44
c_rt_lib0clear(&___nl__string__90);
#line 44
return NULL;
}

ImmT  profile_priv0get_profile_global() {
profile_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 48
c_rt_lib0move(&___nl__im__0, c_std_lib0get_profile_global());
#line 49
c_rt_lib0copy(&___nl__im__3, ___nl__im__0);
#line 49
___nl__int__2 = hash0size(___nl__im__3);
#line 49
c_rt_lib0clear(&___nl__im__3);
#line 49
___nl__int__4 = 0;
#line 49
___nl__int__5 = ___nl__int__2 == ___nl__int__4;
#line 49
___nl__bool__1 = ___nl__int__5;
#line 49
//clear ___nl__int__2;
#line 49
c_rt_lib0clear(&___nl__im__3);
#line 49
//clear ___nl__int__4;
#line 49
//clear ___nl__int__5;
#line 49
//clear ___nl__int__2;
#line 49
c_rt_lib0clear(&___nl__im__3);
#line 49
//clear ___nl__int__4;
#line 49
//clear ___nl__int__5;
#line 49
___nl__bool__1 = !___nl__bool__1;
#line 49
if(___nl__bool__1){ goto label_2;}
#line 49
c_rt_lib0move(&___nl__im__6,___get_global_const(37));
#line 49
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(0));
#line 49
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(2, ___get_global_const(204), ___nl__im__6, ___get_global_const(898), ___nl__im__7));
#line 49
c_rt_lib0clear(&___nl__im__6);
#line 49
c_rt_lib0clear(&___nl__im__7);
#line 49
c_rt_lib0clear(&___nl__im__6);
#line 49
c_rt_lib0clear(&___nl__im__7);
#line 49
goto label_1;
#line 49
label_2:
#line 49
label_1:
#line 50
c_rt_lib0copy(&___nl__im__8, ___nl__im__0);
#line 50
c_rt_lib0clear(&___nl__im__0);
#line 50
//clear ___nl__bool__1;
#line 50
//clear ___nl__int__2;
#line 50
c_rt_lib0clear(&___nl__im__3);
#line 50
//clear ___nl__int__4;
#line 50
//clear ___nl__int__5;
#line 50
c_rt_lib0clear(&___nl__im__6);
#line 50
c_rt_lib0clear(&___nl__im__7);
#line 50
return ___nl__im__8;
#line 50
c_rt_lib0clear(&___nl__im__0);
#line 50
//clear ___nl__bool__1;
#line 50
//clear ___nl__int__2;
#line 50
c_rt_lib0clear(&___nl__im__3);
#line 50
//clear ___nl__int__4;
#line 50
//clear ___nl__int__5;
#line 50
c_rt_lib0clear(&___nl__im__6);
#line 50
c_rt_lib0clear(&___nl__im__7);
#line 50
c_rt_lib0clear(&___nl__im__8);
#line 50
return NULL;
}

ImmT  profile0sub0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "profile0sub");
ImmT  var0 = (_tab[0]);
func0func_t0type var1 = (_tab[1]);
ImmT  var2 = (_tab[2]);
return profile0sub(var0, var1, var2);
}
ImmT  profile0sub(ImmT  ___nl__im__0,func0func_t0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
profile_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 54
c_rt_lib0copy(&___nl__im__5, ___nl__im__0);
#line 54
c_rt_lib0copy(&___nl__im__6, ___nl__im__1);
#line 54
c_rt_lib0move(&___nl__im__4, profile0sub_ref(___nl__im__5, ___nl__im__6, &___nl__im__2));
#line 54
c_rt_lib0clear(&___nl__im__5);
#line 54
c_rt_lib0clear(&___nl__im__6);
#line 54
c_rt_lib0copy(&___nl__im__3, ___nl__im__4);
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
c_rt_lib0clear(&___nl__im__1);
#line 54
c_rt_lib0clear(&___nl__im__2);
#line 54
c_rt_lib0clear(&___nl__im__4);
#line 54
c_rt_lib0clear(&___nl__im__5);
#line 54
c_rt_lib0clear(&___nl__im__6);
#line 54
return ___nl__im__3;
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
return NULL;
}

ImmT  profile0sub_ref0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "profile0sub_ref");
ImmT  var0 = (_tab[0]);
func0func_t0type var1 = (_tab[1]);
ImmT  var2 = (_tab[2]);
return profile0sub_ref(var0, var1, &var2);
}
ImmT  profile0sub_ref(ImmT  ___nl__im__0,func0func_t0type ___nl__im__1,ImmT * ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
profile_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__string__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__string__17 = NULL;
ImmT  ___nl__string__18 = NULL;
ImmT  ___nl__string__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
#line 58
c_rt_lib0move(&___nl__im__3, profile_priv0get_profile_global());
#line 59
c_rt_lib0move(&___nl__im__4, nsystem0time_microsec());
#line 60
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(898)));
#line 61
c_rt_lib0move(&___nl__im__6,___get_global_const(898));
#line 61
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_ref_hash(___nl__im__3, ___nl__im__6));
#line 61
c_rt_lib0copy(&___nl__im__7, ___nl__im__4);
#line 61
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__7));
#line 61
c_rt_lib0move(&___nl__string__8,___get_global_const(898));
#line 61
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__3, ___nl__string__8, ___nl__im__6));
#line 61
c_rt_lib0clear(&___nl__im__6);
#line 61
c_rt_lib0clear(&___nl__im__7);
#line 61
c_rt_lib0clear(&___nl__string__8);
#line 62
c_rt_lib0copy(&___nl__im__9, ___nl__im__4);
#line 62
c_rt_lib0copy(&___nl__im__10, ___nl__im__0);
#line 62
c_rt_lib0delete(profile_priv0print_row(&___nl__im__3, ___nl__im__9, ___nl__im__10));
#line 62
c_rt_lib0clear(&___nl__im__9);
#line 62
c_rt_lib0clear(&___nl__im__10);
#line 63
c_rt_lib0copy(&___nl__im__11, ___nl__im__3);
#line 63
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__im__11));
#line 63
c_rt_lib0clear(&___nl__im__11);
#line 64
c_rt_lib0copy(&___nl__im__13, ___nl__im__1);
#line 64
c_rt_lib0move(&___nl__im__12, func0exec_ref(___nl__im__13, ___ref___im__2));
#line 64
c_rt_lib0clear(&___nl__im__13);
#line 65
c_rt_lib0move(&___nl__im__3, profile_priv0get_profile_global());
#line 66
c_rt_lib0move(&___nl__im__4, nsystem0time_microsec());
#line 67
c_rt_lib0copy(&___nl__im__14, ___nl__im__4);
#line 67
c_rt_lib0move(&___nl__im__16,___get_global_const(1246));
#line 67
c_rt_lib0copy(&___nl__string__17, ___nl__im__16);
#line 67
c_rt_lib0copy(&___nl__string__18, ___nl__im__0);
#line 67
c_rt_lib0move(&___nl__string__19, c_rt_lib0concat_new(___nl__string__17, ___nl__string__18));
#line 67
c_rt_lib0copy(&___nl__im__15, ___nl__string__19);
#line 67
c_rt_lib0clear(&___nl__im__16);
#line 67
c_rt_lib0clear(&___nl__string__17);
#line 67
c_rt_lib0clear(&___nl__string__18);
#line 67
c_rt_lib0clear(&___nl__string__19);
#line 67
c_rt_lib0copy(&___nl__im__20, ___nl__im__15);
#line 67
c_rt_lib0delete(profile_priv0print_row(&___nl__im__3, ___nl__im__14, ___nl__im__20));
#line 67
c_rt_lib0clear(&___nl__im__14);
#line 67
c_rt_lib0clear(&___nl__im__15);
#line 67
c_rt_lib0clear(&___nl__im__16);
#line 67
c_rt_lib0clear(&___nl__string__17);
#line 67
c_rt_lib0clear(&___nl__string__18);
#line 67
c_rt_lib0clear(&___nl__string__19);
#line 67
c_rt_lib0clear(&___nl__im__20);
#line 68
c_rt_lib0copy(&___nl__im__21, ___nl__im__5);
#line 68
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(898), ___nl__im__21);
#line 68
c_rt_lib0clear(&___nl__im__21);
#line 69
c_rt_lib0copy(&___nl__im__22, ___nl__im__3);
#line 69
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__im__22));
#line 69
c_rt_lib0clear(&___nl__im__22);
#line 70
c_rt_lib0copy(&___nl__im__23, ___nl__im__12);
#line 70
c_rt_lib0clear(&___nl__im__0);
#line 70
c_rt_lib0clear(&___nl__im__1);
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 70
c_rt_lib0clear(&___nl__im__6);
#line 70
c_rt_lib0clear(&___nl__im__7);
#line 70
c_rt_lib0clear(&___nl__string__8);
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
c_rt_lib0clear(&___nl__im__14);
#line 70
c_rt_lib0clear(&___nl__im__15);
#line 70
c_rt_lib0clear(&___nl__im__16);
#line 70
c_rt_lib0clear(&___nl__string__17);
#line 70
c_rt_lib0clear(&___nl__string__18);
#line 70
c_rt_lib0clear(&___nl__string__19);
#line 70
c_rt_lib0clear(&___nl__im__20);
#line 70
c_rt_lib0clear(&___nl__im__21);
#line 70
c_rt_lib0clear(&___nl__im__22);
#line 70
return ___nl__im__23;
#line 70
c_rt_lib0clear(&___nl__im__0);
#line 70
c_rt_lib0clear(&___nl__im__1);
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 70
c_rt_lib0clear(&___nl__im__6);
#line 70
c_rt_lib0clear(&___nl__im__7);
#line 70
c_rt_lib0clear(&___nl__string__8);
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
c_rt_lib0clear(&___nl__im__14);
#line 70
c_rt_lib0clear(&___nl__im__15);
#line 70
c_rt_lib0clear(&___nl__im__16);
#line 70
c_rt_lib0clear(&___nl__string__17);
#line 70
c_rt_lib0clear(&___nl__string__18);
#line 70
c_rt_lib0clear(&___nl__string__19);
#line 70
c_rt_lib0clear(&___nl__im__20);
#line 70
c_rt_lib0clear(&___nl__im__21);
#line 70
c_rt_lib0clear(&___nl__im__22);
#line 70
c_rt_lib0clear(&___nl__im__23);
#line 70
return NULL;
}

ImmT  profile0save0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile0save");
ImmT  var0 = (_tab[0]);
return profile0save(var0);
}
ImmT  profile0save(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
profile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
#line 74
c_rt_lib0move(&___nl__im__1, profile_priv0get_profile_global());
#line 75
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(898)));
#line 75
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 75
___nl__int__3 = c_rt_lib0array_len(___nl__im__5);
#line 75
c_rt_lib0clear(&___nl__im__4);
#line 75
c_rt_lib0clear(&___nl__im__5);
#line 75
___nl__int__6 = 0;
#line 75
___nl__int__7 = ___nl__int__3 != ___nl__int__6;
#line 75
___nl__bool__2 = ___nl__int__7;
#line 75
//clear ___nl__int__3;
#line 75
c_rt_lib0clear(&___nl__im__4);
#line 75
c_rt_lib0clear(&___nl__im__5);
#line 75
//clear ___nl__int__6;
#line 75
//clear ___nl__int__7;
#line 75
//clear ___nl__int__3;
#line 75
c_rt_lib0clear(&___nl__im__4);
#line 75
c_rt_lib0clear(&___nl__im__5);
#line 75
//clear ___nl__int__6;
#line 75
//clear ___nl__int__7;
#line 75
___nl__bool__2 = !___nl__bool__2;
#line 75
if(___nl__bool__2){ goto label_2;}
#line 75
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 75
nl_die_arg(___nl__im__8);
#line 75
goto label_1;
#line 75
label_2:
#line 75
label_1:
#line 76
c_rt_lib0copy(&___nl__im__9, ___nl__im__0);
#line 76
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 76
c_rt_lib0copy(&___nl__im__11, ___nl__im__10);
#line 76
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__im__9, ___nl__im__11));
#line 76
c_rt_lib0clear(&___nl__im__9);
#line 76
c_rt_lib0clear(&___nl__im__10);
#line 76
c_rt_lib0clear(&___nl__im__11);
#line 77
c_rt_lib0move(&___nl__im__13,___get_global_const(37));
#line 77
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 77
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(204), ___nl__im__12);
#line 77
c_rt_lib0clear(&___nl__im__12);
#line 77
c_rt_lib0clear(&___nl__im__13);
#line 78
c_rt_lib0copy(&___nl__im__14, ___nl__im__1);
#line 78
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__im__14));
#line 78
c_rt_lib0clear(&___nl__im__14);
#line 78
c_rt_lib0clear(&___nl__im__0);
#line 78
c_rt_lib0clear(&___nl__im__1);
#line 78
//clear ___nl__bool__2;
#line 78
//clear ___nl__int__3;
#line 78
c_rt_lib0clear(&___nl__im__4);
#line 78
c_rt_lib0clear(&___nl__im__5);
#line 78
//clear ___nl__int__6;
#line 78
//clear ___nl__int__7;
#line 78
c_rt_lib0clear(&___nl__im__8);
#line 78
c_rt_lib0clear(&___nl__im__9);
#line 78
c_rt_lib0clear(&___nl__im__10);
#line 78
c_rt_lib0clear(&___nl__im__11);
#line 78
c_rt_lib0clear(&___nl__im__12);
#line 78
c_rt_lib0clear(&___nl__im__13);
#line 78
c_rt_lib0clear(&___nl__im__14);
#line 78
return NULL;
}

ImmT  profile_priv0start(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
profile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__string__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
#line 82
c_rt_lib0move(&___nl__im__1, profile_priv0get_profile_global());
#line 83
c_rt_lib0copy(&___nl__im__4, ___nl__im__1);
#line 83
___nl__int__3 = hash0size(___nl__im__4);
#line 83
c_rt_lib0clear(&___nl__im__4);
#line 83
___nl__int__5 = 0;
#line 83
___nl__int__6 = ___nl__int__3 == ___nl__int__5;
#line 83
___nl__bool__2 = ___nl__int__6;
#line 83
//clear ___nl__int__3;
#line 83
c_rt_lib0clear(&___nl__im__4);
#line 83
//clear ___nl__int__5;
#line 83
//clear ___nl__int__6;
#line 83
___nl__bool__2 = !___nl__bool__2;
#line 83
if(___nl__bool__2){ goto label_2;}
#line 83
c_rt_lib0clear(&___nl__im__0);
#line 83
c_rt_lib0clear(&___nl__im__1);
#line 83
//clear ___nl__bool__2;
#line 83
//clear ___nl__int__3;
#line 83
c_rt_lib0clear(&___nl__im__4);
#line 83
//clear ___nl__int__5;
#line 83
//clear ___nl__int__6;
#line 83
return NULL;
#line 83
goto label_1;
#line 83
label_2:
#line 83
label_1:
#line 84
c_rt_lib0move(&___nl__im__7, nsystem0time_microsec());
#line 85
c_rt_lib0move(&___nl__im__8,___get_global_const(898));
#line 85
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__8));
#line 85
c_rt_lib0copy(&___nl__im__9, ___nl__im__7);
#line 85
c_rt_lib0delete(array0push(&___nl__im__8, ___nl__im__9));
#line 85
c_rt_lib0move(&___nl__string__10,___get_global_const(898));
#line 85
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__10, ___nl__im__8));
#line 85
c_rt_lib0clear(&___nl__im__8);
#line 85
c_rt_lib0clear(&___nl__im__9);
#line 85
c_rt_lib0clear(&___nl__string__10);
#line 86
c_rt_lib0copy(&___nl__im__11, ___nl__im__7);
#line 86
c_rt_lib0copy(&___nl__im__12, ___nl__im__0);
#line 86
c_rt_lib0delete(profile_priv0print_row(&___nl__im__1, ___nl__im__11, ___nl__im__12));
#line 86
c_rt_lib0clear(&___nl__im__11);
#line 86
c_rt_lib0clear(&___nl__im__12);
#line 87
c_rt_lib0copy(&___nl__im__13, ___nl__im__1);
#line 87
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__im__13));
#line 87
c_rt_lib0clear(&___nl__im__13);
#line 87
c_rt_lib0clear(&___nl__im__0);
#line 87
c_rt_lib0clear(&___nl__im__1);
#line 87
//clear ___nl__bool__2;
#line 87
//clear ___nl__int__3;
#line 87
c_rt_lib0clear(&___nl__im__4);
#line 87
//clear ___nl__int__5;
#line 87
//clear ___nl__int__6;
#line 87
c_rt_lib0clear(&___nl__im__7);
#line 87
c_rt_lib0clear(&___nl__im__8);
#line 87
c_rt_lib0clear(&___nl__im__9);
#line 87
c_rt_lib0clear(&___nl__string__10);
#line 87
c_rt_lib0clear(&___nl__im__11);
#line 87
c_rt_lib0clear(&___nl__im__12);
#line 87
c_rt_lib0clear(&___nl__im__13);
#line 87
return NULL;
}

ImmT  profile_priv0stop(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
profile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__string__11 = NULL;
ImmT  ___nl__string__12 = NULL;
ImmT  ___nl__string__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__string__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 91
c_rt_lib0move(&___nl__im__1, profile_priv0get_profile_global());
#line 92
c_rt_lib0copy(&___nl__im__4, ___nl__im__1);
#line 92
___nl__int__3 = hash0size(___nl__im__4);
#line 92
c_rt_lib0clear(&___nl__im__4);
#line 92
___nl__int__5 = 0;
#line 92
___nl__int__6 = ___nl__int__3 == ___nl__int__5;
#line 92
___nl__bool__2 = ___nl__int__6;
#line 92
//clear ___nl__int__3;
#line 92
c_rt_lib0clear(&___nl__im__4);
#line 92
//clear ___nl__int__5;
#line 92
//clear ___nl__int__6;
#line 92
___nl__bool__2 = !___nl__bool__2;
#line 92
if(___nl__bool__2){ goto label_2;}
#line 92
c_rt_lib0clear(&___nl__im__0);
#line 92
c_rt_lib0clear(&___nl__im__1);
#line 92
//clear ___nl__bool__2;
#line 92
//clear ___nl__int__3;
#line 92
c_rt_lib0clear(&___nl__im__4);
#line 92
//clear ___nl__int__5;
#line 92
//clear ___nl__int__6;
#line 92
return NULL;
#line 92
goto label_1;
#line 92
label_2:
#line 92
label_1:
#line 93
c_rt_lib0move(&___nl__im__7, nsystem0time_microsec());
#line 94
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 94
c_rt_lib0move(&___nl__im__10,___get_global_const(1246));
#line 94
c_rt_lib0copy(&___nl__string__11, ___nl__im__10);
#line 94
c_rt_lib0copy(&___nl__string__12, ___nl__im__0);
#line 94
c_rt_lib0move(&___nl__string__13, c_rt_lib0concat_new(___nl__string__11, ___nl__string__12));
#line 94
c_rt_lib0copy(&___nl__im__9, ___nl__string__13);
#line 94
c_rt_lib0clear(&___nl__im__10);
#line 94
c_rt_lib0clear(&___nl__string__11);
#line 94
c_rt_lib0clear(&___nl__string__12);
#line 94
c_rt_lib0clear(&___nl__string__13);
#line 94
c_rt_lib0copy(&___nl__im__14, ___nl__im__9);
#line 94
c_rt_lib0delete(profile_priv0print_row(&___nl__im__1, ___nl__im__8, ___nl__im__14));
#line 94
c_rt_lib0clear(&___nl__im__8);
#line 94
c_rt_lib0clear(&___nl__im__9);
#line 94
c_rt_lib0clear(&___nl__im__10);
#line 94
c_rt_lib0clear(&___nl__string__11);
#line 94
c_rt_lib0clear(&___nl__string__12);
#line 94
c_rt_lib0clear(&___nl__string__13);
#line 94
c_rt_lib0clear(&___nl__im__14);
#line 95
c_rt_lib0move(&___nl__im__15,___get_global_const(898));
#line 95
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash(___nl__im__1, ___nl__im__15));
#line 95
c_rt_lib0delete(array0pop(&___nl__im__15));
#line 95
c_rt_lib0move(&___nl__string__16,___get_global_const(898));
#line 95
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__1, ___nl__string__16, ___nl__im__15));
#line 95
c_rt_lib0clear(&___nl__im__15);
#line 95
c_rt_lib0clear(&___nl__string__16);
#line 96
c_rt_lib0copy(&___nl__im__17, ___nl__im__1);
#line 96
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__im__17));
#line 96
c_rt_lib0clear(&___nl__im__17);
#line 96
c_rt_lib0clear(&___nl__im__0);
#line 96
c_rt_lib0clear(&___nl__im__1);
#line 96
//clear ___nl__bool__2;
#line 96
//clear ___nl__int__3;
#line 96
c_rt_lib0clear(&___nl__im__4);
#line 96
//clear ___nl__int__5;
#line 96
//clear ___nl__int__6;
#line 96
c_rt_lib0clear(&___nl__im__7);
#line 96
c_rt_lib0clear(&___nl__im__8);
#line 96
c_rt_lib0clear(&___nl__im__9);
#line 96
c_rt_lib0clear(&___nl__im__10);
#line 96
c_rt_lib0clear(&___nl__string__11);
#line 96
c_rt_lib0clear(&___nl__string__12);
#line 96
c_rt_lib0clear(&___nl__string__13);
#line 96
c_rt_lib0clear(&___nl__im__14);
#line 96
c_rt_lib0clear(&___nl__im__15);
#line 96
c_rt_lib0clear(&___nl__string__16);
#line 96
c_rt_lib0clear(&___nl__im__17);
#line 96
return NULL;
}

ImmT  profile0begin0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile0begin");
ImmT  var0 = (_tab[0]);
return profile0begin(var0);
}
ImmT  profile0begin(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
profile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 100
c_rt_lib0copy(&___nl__im__1, ___nl__im__0);
#line 100
c_rt_lib0delete(profile_priv0start(___nl__im__1));
#line 100
c_rt_lib0clear(&___nl__im__1);
#line 100
c_rt_lib0clear(&___nl__im__0);
#line 100
c_rt_lib0clear(&___nl__im__1);
#line 100
return NULL;
}

ImmT  profile0end0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile0end");
ImmT  var0 = (_tab[0]);
return profile0end(var0);
}
ImmT  profile0end(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
profile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 104
c_rt_lib0copy(&___nl__im__1, ___nl__im__0);
#line 104
c_rt_lib0delete(profile_priv0stop(___nl__im__1));
#line 104
c_rt_lib0clear(&___nl__im__1);
#line 104
c_rt_lib0clear(&___nl__im__0);
#line 104
c_rt_lib0clear(&___nl__im__1);
#line 104
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void profile_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT profile_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT profile_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
