
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "csv.h"
#include "string.h"
#include "array.h"
#line 1 "csv.nl"

static ImmT *__const__f = NULL;
void csv_priv0__const__init();
ImmT csv_priv0__const__sim(int __nr);
ImmT csv_priv0__const__sing(int __nr);

ImmT  csv_priv0get_char(ImmT  ___nl__im__0,ImmT * ___ref___im__1);
ImmT  csv_priv0end(ImmT * ___ref___im__0,ImmT * ___ref___im__1,ImmT  ___nl__im__2);


ImmT  csv0save0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "csv0save");
ImmT  var0 = (_tab[0]);
return csv0save(var0);
}
ImmT  csv0save(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
csv_priv0__const__init();
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
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
bool  ___nl__bool__22 = false;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
bool  ___nl__bool__26 = false;
bool  ___nl__bool__27 = false;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
#line 10
c_rt_lib0move(&___nl__im__1,___get_global_const(283));
#line 11
c_rt_lib0move(&___nl__im__2, string0tab());
#line 12
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__1, ___nl__im__1));
#line 13
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 14
___nl__int__6 = 0;
#line 14
___nl__int__7 = 1;
#line 14
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 14
label_3:
#line 14
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 14
___nl__bool__9 = ___nl__int__10;
#line 14
if(___nl__bool__9){ goto label_1;}
#line 14
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 14
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 15
___nl__int__12 = c_rt_lib0array_len(___nl__im__5);
#line 16
___nl__int__13 = 0;
#line 16
___nl__int__14 = 1;
#line 16
label_6:
#line 16
___nl__int__16 = ___nl__int__13 >= ___nl__int__12;
#line 16
___nl__bool__15 = ___nl__int__16;
#line 16
if(___nl__bool__15){ goto label_4;}
#line 17
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__5, ___nl__int__13));
#line 18
___nl__int__18 = string0length(___nl__im__17);
#line 19
___nl__bool__19 = false;
#line 20
___nl__int__20 = 0;
#line 20
___nl__int__21 = 1;
#line 20
label_9:
#line 20
___nl__int__23 = ___nl__int__20 >= ___nl__int__18;
#line 20
___nl__bool__22 = ___nl__int__23;
#line 20
if(___nl__bool__22){ goto label_7;}
#line 21
___nl__int__25 = 1;
#line 21
c_rt_lib0move(&___nl__im__24, string0substr(___nl__im__17, ___nl__int__20, ___nl__int__25));
#line 21
//clear ___nl__int__25;
#line 22
___nl__int__28 = string0ord(___nl__im__24);
#line 22
___nl__int__29 = 32;
#line 22
___nl__int__30 = ___nl__int__28 < ___nl__int__29;
#line 22
___nl__bool__26 = ___nl__int__30;
#line 22
//clear ___nl__int__28;
#line 22
//clear ___nl__int__29;
#line 22
//clear ___nl__int__30;
#line 22
if(___nl__bool__26){ goto label_12;}
#line 22
___nl__bool__26 = c_rt_lib0eq(___nl__im__24, ___nl__im__1);
#line 22
label_12:
#line 22
//clear ___nl__bool__27;
#line 22
//clear ___nl__int__28;
#line 22
//clear ___nl__int__29;
#line 22
//clear ___nl__int__30;
#line 22
//clear ___nl__bool__27;
#line 22
//clear ___nl__int__28;
#line 22
//clear ___nl__int__29;
#line 22
//clear ___nl__int__30;
#line 22
___nl__bool__26 = !___nl__bool__26;
#line 22
if(___nl__bool__26){ goto label_11;}
#line 22
___nl__bool__19 = true;
#line 22
goto label_10;
#line 22
label_11:
#line 22
label_10:
#line 22
//clear ___nl__bool__26;
#line 22
//clear ___nl__bool__27;
#line 22
//clear ___nl__int__28;
#line 22
//clear ___nl__int__29;
#line 22
//clear ___nl__int__30;
#line 22
label_8:
#line 23
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 23
goto label_9;
#line 23
label_7:
#line 24
___nl__bool__31 = ___nl__bool__19;
#line 24
___nl__bool__31 = !___nl__bool__31;
#line 24
if(___nl__bool__31){ goto label_14;}
#line 24
c_rt_lib0move(&___nl__im__33, string0replace(___nl__im__17, ___nl__im__1, ___nl__im__3));
#line 24
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__1, ___nl__im__33));
#line 24
c_rt_lib0clear(&___nl__im__33);
#line 24
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__32, ___nl__im__1));
#line 24
c_rt_lib0clear(&___nl__im__32);
#line 24
c_rt_lib0clear(&___nl__im__33);
#line 24
c_rt_lib0clear(&___nl__im__32);
#line 24
c_rt_lib0clear(&___nl__im__33);
#line 24
goto label_13;
#line 24
label_14:
#line 24
label_13:
#line 24
//clear ___nl__bool__31;
#line 24
c_rt_lib0clear(&___nl__im__32);
#line 24
c_rt_lib0clear(&___nl__im__33);
#line 25
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__17));
#line 26
___nl__int__36 = 1;
#line 26
___nl__int__35 = ___nl__int__12 - ___nl__int__36;
#line 26
//clear ___nl__int__36;
#line 26
___nl__int__37 = ___nl__int__13 == ___nl__int__35;
#line 26
___nl__bool__34 = ___nl__int__37;
#line 26
//clear ___nl__int__35;
#line 26
//clear ___nl__int__36;
#line 26
//clear ___nl__int__37;
#line 26
//clear ___nl__int__35;
#line 26
//clear ___nl__int__36;
#line 26
//clear ___nl__int__37;
#line 26
___nl__bool__34 = !___nl__bool__34;
#line 26
//clear ___nl__int__35;
#line 26
//clear ___nl__int__36;
#line 26
//clear ___nl__int__37;
#line 26
___nl__bool__34 = !___nl__bool__34;
#line 26
if(___nl__bool__34){ goto label_16;}
#line 26
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__2));
#line 26
goto label_15;
#line 26
label_16:
#line 26
label_15:
#line 26
//clear ___nl__bool__34;
#line 26
//clear ___nl__int__35;
#line 26
//clear ___nl__int__36;
#line 26
//clear ___nl__int__37;
#line 26
label_5:
#line 27
___nl__int__13 = ___nl__int__13 + ___nl__int__14;
#line 27
goto label_6;
#line 27
label_4:
#line 28
c_rt_lib0move(&___nl__im__38, string0lf());
#line 28
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__38));
#line 28
c_rt_lib0clear(&___nl__im__38);
#line 28
c_rt_lib0clear(&___nl__im__5);
#line 28
label_2:
#line 29
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 29
goto label_3;
#line 29
label_1:
#line 30
c_rt_lib0copy(&___nl__im__39, ___nl__im__4);
#line 30
c_rt_lib0clear(&___nl__im__0);
#line 30
c_rt_lib0clear(&___nl__im__1);
#line 30
c_rt_lib0clear(&___nl__im__2);
#line 30
c_rt_lib0clear(&___nl__im__3);
#line 30
c_rt_lib0clear(&___nl__im__4);
#line 30
c_rt_lib0clear(&___nl__im__5);
#line 30
//clear ___nl__int__6;
#line 30
//clear ___nl__int__7;
#line 30
//clear ___nl__int__8;
#line 30
//clear ___nl__bool__9;
#line 30
//clear ___nl__int__10;
#line 30
c_rt_lib0clear(&___nl__im__11);
#line 30
//clear ___nl__int__12;
#line 30
//clear ___nl__int__13;
#line 30
//clear ___nl__int__14;
#line 30
//clear ___nl__bool__15;
#line 30
//clear ___nl__int__16;
#line 30
c_rt_lib0clear(&___nl__im__17);
#line 30
//clear ___nl__int__18;
#line 30
//clear ___nl__bool__19;
#line 30
//clear ___nl__int__20;
#line 30
//clear ___nl__int__21;
#line 30
//clear ___nl__bool__22;
#line 30
//clear ___nl__int__23;
#line 30
c_rt_lib0clear(&___nl__im__24);
#line 30
//clear ___nl__int__25;
#line 30
//clear ___nl__bool__26;
#line 30
//clear ___nl__bool__27;
#line 30
//clear ___nl__int__28;
#line 30
//clear ___nl__int__29;
#line 30
//clear ___nl__int__30;
#line 30
//clear ___nl__bool__31;
#line 30
c_rt_lib0clear(&___nl__im__32);
#line 30
c_rt_lib0clear(&___nl__im__33);
#line 30
//clear ___nl__bool__34;
#line 30
//clear ___nl__int__35;
#line 30
//clear ___nl__int__36;
#line 30
//clear ___nl__int__37;
#line 30
c_rt_lib0clear(&___nl__im__38);
#line 30
return ___nl__im__39;
#line 30
c_rt_lib0clear(&___nl__im__0);
#line 30
c_rt_lib0clear(&___nl__im__1);
#line 30
c_rt_lib0clear(&___nl__im__2);
#line 30
c_rt_lib0clear(&___nl__im__3);
#line 30
c_rt_lib0clear(&___nl__im__4);
#line 30
c_rt_lib0clear(&___nl__im__5);
#line 30
//clear ___nl__int__6;
#line 30
//clear ___nl__int__7;
#line 30
//clear ___nl__int__8;
#line 30
//clear ___nl__bool__9;
#line 30
//clear ___nl__int__10;
#line 30
c_rt_lib0clear(&___nl__im__11);
#line 30
//clear ___nl__int__12;
#line 30
//clear ___nl__int__13;
#line 30
//clear ___nl__int__14;
#line 30
//clear ___nl__bool__15;
#line 30
//clear ___nl__int__16;
#line 30
c_rt_lib0clear(&___nl__im__17);
#line 30
//clear ___nl__int__18;
#line 30
//clear ___nl__bool__19;
#line 30
//clear ___nl__int__20;
#line 30
//clear ___nl__int__21;
#line 30
//clear ___nl__bool__22;
#line 30
//clear ___nl__int__23;
#line 30
c_rt_lib0clear(&___nl__im__24);
#line 30
//clear ___nl__int__25;
#line 30
//clear ___nl__bool__26;
#line 30
//clear ___nl__bool__27;
#line 30
//clear ___nl__int__28;
#line 30
//clear ___nl__int__29;
#line 30
//clear ___nl__int__30;
#line 30
//clear ___nl__bool__31;
#line 30
c_rt_lib0clear(&___nl__im__32);
#line 30
c_rt_lib0clear(&___nl__im__33);
#line 30
//clear ___nl__bool__34;
#line 30
//clear ___nl__int__35;
#line 30
//clear ___nl__int__36;
#line 30
//clear ___nl__int__37;
#line 30
c_rt_lib0clear(&___nl__im__38);
#line 30
c_rt_lib0clear(&___nl__im__39);
#line 30
return NULL;
}

ImmT  csv_priv0get_char(ImmT  ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
csv_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
#line 34
___nl__int__4 = getIntFromImm((*___ref___im__1));
#line 34
___nl__int__5 = 1;
#line 34
___nl__int__6 = getIntFromImm((*___ref___im__1));
#line 34
___nl__int__7 = ___nl__int__6 + ___nl__int__5;
#line 34
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__7));
#line 34
//clear ___nl__int__5;
#line 34
//clear ___nl__int__6;
#line 34
//clear ___nl__int__7;
#line 34
___nl__int__8 = 1;
#line 34
c_rt_lib0move(&___nl__im__3, string0substr(___nl__im__0, ___nl__int__4, ___nl__int__8));
#line 34
//clear ___nl__int__4;
#line 34
//clear ___nl__int__5;
#line 34
//clear ___nl__int__6;
#line 34
//clear ___nl__int__7;
#line 34
//clear ___nl__int__8;
#line 34
c_rt_lib0copy(&___nl__im__2, ___nl__im__3);
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
c_rt_lib0clear(&___nl__im__3);
#line 34
//clear ___nl__int__4;
#line 34
//clear ___nl__int__5;
#line 34
//clear ___nl__int__6;
#line 34
//clear ___nl__int__7;
#line 34
//clear ___nl__int__8;
#line 34
return ___nl__im__2;
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
c_rt_lib0clear(&___nl__im__2);
#line 34
c_rt_lib0clear(&___nl__im__3);
#line 34
//clear ___nl__int__4;
#line 34
//clear ___nl__int__5;
#line 34
//clear ___nl__int__6;
#line 34
//clear ___nl__int__7;
#line 34
//clear ___nl__int__8;
#line 34
return NULL;
}

ImmT  csv_priv0end(ImmT * ___ref___im__0,ImmT * ___ref___im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__2);
csv_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 38
c_rt_lib0delete(array0push(___ref___im__1, ___nl__im__2));
#line 39
c_rt_lib0delete(array0push(___ref___im__0, (*___ref___im__1)));
#line 40
c_rt_lib0copy(&___nl__im__3, (*___ref___im__0));
#line 40
c_rt_lib0clear(&___nl__im__2);
#line 40
return ___nl__im__3;
#line 40
c_rt_lib0clear(&___nl__im__2);
#line 40
c_rt_lib0clear(&___nl__im__3);
#line 40
return NULL;
}

ImmT  csv0load0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "csv0load");
ImmT  var0 = (_tab[0]);
return csv0load(var0);
}
ImmT  csv0load(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
csv_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
bool  ___nl__bool__35 = false;
bool  ___nl__bool__36 = false;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
bool  ___nl__bool__42 = false;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
INT  ___nl__int__48 = 0;
bool  ___nl__bool__49 = false;
bool  ___nl__bool__50 = false;
bool  ___nl__bool__51 = false;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
INT  ___nl__int__54 = 0;
INT  ___nl__int__55 = 0;
INT  ___nl__int__56 = 0;
bool  ___nl__bool__57 = false;
INT  ___nl__int__58 = 0;
INT  ___nl__int__59 = 0;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
INT  ___nl__int__62 = 0;
bool  ___nl__bool__63 = false;
INT  ___nl__int__64 = 0;
bool  ___nl__bool__65 = false;
INT  ___nl__int__66 = 0;
INT  ___nl__int__67 = 0;
bool  ___nl__bool__68 = false;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
#line 44
c_rt_lib0move(&___nl__im__1,___get_global_const(283));
#line 45
c_rt_lib0move(&___nl__im__2, string0tab());
#line 46
___nl__int__3 = string0ord(___nl__im__2);
#line 47
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 48
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 49
___nl__int__6 = string0length(___nl__im__0);
#line 50
___nl__int__8 = 0;
#line 50
___nl__int__9 = ___nl__int__6 == ___nl__int__8;
#line 50
___nl__bool__7 = ___nl__int__9;
#line 50
//clear ___nl__int__8;
#line 50
//clear ___nl__int__9;
#line 50
___nl__bool__7 = !___nl__bool__7;
#line 50
if(___nl__bool__7){ goto label_2;}
#line 50
c_rt_lib0copy(&___nl__im__10, ___nl__im__4);
#line 50
c_rt_lib0clear(&___nl__im__0);
#line 50
c_rt_lib0clear(&___nl__im__1);
#line 50
c_rt_lib0clear(&___nl__im__2);
#line 50
//clear ___nl__int__3;
#line 50
c_rt_lib0clear(&___nl__im__4);
#line 50
c_rt_lib0clear(&___nl__im__5);
#line 50
//clear ___nl__int__6;
#line 50
//clear ___nl__bool__7;
#line 50
//clear ___nl__int__8;
#line 50
//clear ___nl__int__9;
#line 50
return ___nl__im__10;
#line 50
goto label_1;
#line 50
label_2:
#line 50
label_1:
#line 50
//clear ___nl__bool__7;
#line 50
//clear ___nl__int__8;
#line 50
//clear ___nl__int__9;
#line 50
c_rt_lib0clear(&___nl__im__10);
#line 51
___nl__int__15 = 1;
#line 51
___nl__int__14 = ___nl__int__6 - ___nl__int__15;
#line 51
//clear ___nl__int__15;
#line 51
___nl__int__16 = 1;
#line 51
c_rt_lib0move(&___nl__im__13, string0substr(___nl__im__0, ___nl__int__14, ___nl__int__16));
#line 51
//clear ___nl__int__14;
#line 51
//clear ___nl__int__15;
#line 51
//clear ___nl__int__16;
#line 51
___nl__int__12 = string0ord(___nl__im__13);
#line 51
c_rt_lib0clear(&___nl__im__13);
#line 51
//clear ___nl__int__14;
#line 51
//clear ___nl__int__15;
#line 51
//clear ___nl__int__16;
#line 51
___nl__int__17 = 10;
#line 51
___nl__int__18 = ___nl__int__12 == ___nl__int__17;
#line 51
___nl__bool__11 = ___nl__int__18;
#line 51
//clear ___nl__int__12;
#line 51
c_rt_lib0clear(&___nl__im__13);
#line 51
//clear ___nl__int__14;
#line 51
//clear ___nl__int__15;
#line 51
//clear ___nl__int__16;
#line 51
//clear ___nl__int__17;
#line 51
//clear ___nl__int__18;
#line 51
___nl__bool__11 = !___nl__bool__11;
#line 51
if(___nl__bool__11){ goto label_4;}
#line 52
___nl__int__19 = 1;
#line 52
___nl__int__6 = ___nl__int__6 - ___nl__int__19;
#line 52
//clear ___nl__int__19;
#line 53
___nl__int__24 = 1;
#line 53
___nl__int__23 = ___nl__int__6 - ___nl__int__24;
#line 53
//clear ___nl__int__24;
#line 53
___nl__int__25 = 1;
#line 53
c_rt_lib0move(&___nl__im__22, string0substr(___nl__im__0, ___nl__int__23, ___nl__int__25));
#line 53
//clear ___nl__int__23;
#line 53
//clear ___nl__int__24;
#line 53
//clear ___nl__int__25;
#line 53
___nl__int__21 = string0ord(___nl__im__22);
#line 53
c_rt_lib0clear(&___nl__im__22);
#line 53
//clear ___nl__int__23;
#line 53
//clear ___nl__int__24;
#line 53
//clear ___nl__int__25;
#line 53
___nl__int__26 = 13;
#line 53
___nl__int__27 = ___nl__int__21 == ___nl__int__26;
#line 53
___nl__bool__20 = ___nl__int__27;
#line 53
//clear ___nl__int__21;
#line 53
c_rt_lib0clear(&___nl__im__22);
#line 53
//clear ___nl__int__23;
#line 53
//clear ___nl__int__24;
#line 53
//clear ___nl__int__25;
#line 53
//clear ___nl__int__26;
#line 53
//clear ___nl__int__27;
#line 53
___nl__bool__20 = !___nl__bool__20;
#line 53
if(___nl__bool__20){ goto label_6;}
#line 53
___nl__int__28 = 1;
#line 53
___nl__int__6 = ___nl__int__6 - ___nl__int__28;
#line 53
//clear ___nl__int__28;
#line 53
goto label_5;
#line 53
label_6:
#line 53
label_5:
#line 53
//clear ___nl__bool__20;
#line 53
//clear ___nl__int__21;
#line 53
c_rt_lib0clear(&___nl__im__22);
#line 53
//clear ___nl__int__23;
#line 53
//clear ___nl__int__24;
#line 53
//clear ___nl__int__25;
#line 53
//clear ___nl__int__26;
#line 53
//clear ___nl__int__27;
#line 53
//clear ___nl__int__28;
#line 54
goto label_3;
#line 54
label_4:
#line 54
label_3:
#line 54
//clear ___nl__bool__11;
#line 54
//clear ___nl__int__12;
#line 54
c_rt_lib0clear(&___nl__im__13);
#line 54
//clear ___nl__int__14;
#line 54
//clear ___nl__int__15;
#line 54
//clear ___nl__int__16;
#line 54
//clear ___nl__int__17;
#line 54
//clear ___nl__int__18;
#line 54
//clear ___nl__int__19;
#line 54
//clear ___nl__bool__20;
#line 54
//clear ___nl__int__21;
#line 54
c_rt_lib0clear(&___nl__im__22);
#line 54
//clear ___nl__int__23;
#line 54
//clear ___nl__int__24;
#line 54
//clear ___nl__int__25;
#line 54
//clear ___nl__int__26;
#line 54
//clear ___nl__int__27;
#line 54
//clear ___nl__int__28;
#line 55
c_rt_lib0move(&___nl__im__29,___get_global_const(37));
#line 56
c_rt_lib0move(&___nl__im__30,___get_global_const(21));
#line 57
label_8:
#line 57
___nl__int__32 = getIntFromImm(___nl__im__30);
#line 57
___nl__int__33 = ___nl__int__32 < ___nl__int__6;
#line 57
___nl__bool__31 = ___nl__int__33;
#line 57
//clear ___nl__int__32;
#line 57
//clear ___nl__int__33;
#line 57
___nl__bool__31 = !___nl__bool__31;
#line 57
if(___nl__bool__31){ goto label_7;}
#line 58
c_rt_lib0move(&___nl__im__34, csv_priv0get_char(___nl__im__0, &___nl__im__30));
#line 59
___nl__bool__35 = c_rt_lib0eq(___nl__im__34, ___nl__im__1);
#line 59
___nl__bool__35 = !___nl__bool__35;
#line 59
if(___nl__bool__35){ goto label_10;}
#line 60
label_12:
#line 61
___nl__int__37 = getIntFromImm(___nl__im__30);
#line 61
___nl__int__38 = ___nl__int__37 >= ___nl__int__6;
#line 61
___nl__bool__36 = ___nl__int__38;
#line 61
//clear ___nl__int__37;
#line 61
//clear ___nl__int__38;
#line 61
//clear ___nl__int__37;
#line 61
//clear ___nl__int__38;
#line 61
___nl__bool__36 = !___nl__bool__36;
#line 61
if(___nl__bool__36){ goto label_14;}
#line 61
c_rt_lib0move(&___nl__im__40, csv_priv0end(&___nl__im__4, &___nl__im__5, ___nl__im__29));
#line 61
c_rt_lib0copy(&___nl__im__39, ___nl__im__40);
#line 61
c_rt_lib0clear(&___nl__im__0);
#line 61
c_rt_lib0clear(&___nl__im__1);
#line 61
c_rt_lib0clear(&___nl__im__2);
#line 61
//clear ___nl__int__3;
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 61
c_rt_lib0clear(&___nl__im__5);
#line 61
//clear ___nl__int__6;
#line 61
//clear ___nl__bool__7;
#line 61
//clear ___nl__int__8;
#line 61
//clear ___nl__int__9;
#line 61
c_rt_lib0clear(&___nl__im__10);
#line 61
//clear ___nl__bool__11;
#line 61
//clear ___nl__int__12;
#line 61
c_rt_lib0clear(&___nl__im__13);
#line 61
//clear ___nl__int__14;
#line 61
//clear ___nl__int__15;
#line 61
//clear ___nl__int__16;
#line 61
//clear ___nl__int__17;
#line 61
//clear ___nl__int__18;
#line 61
//clear ___nl__int__19;
#line 61
//clear ___nl__bool__20;
#line 61
//clear ___nl__int__21;
#line 61
c_rt_lib0clear(&___nl__im__22);
#line 61
//clear ___nl__int__23;
#line 61
//clear ___nl__int__24;
#line 61
//clear ___nl__int__25;
#line 61
//clear ___nl__int__26;
#line 61
//clear ___nl__int__27;
#line 61
//clear ___nl__int__28;
#line 61
c_rt_lib0clear(&___nl__im__29);
#line 61
c_rt_lib0clear(&___nl__im__30);
#line 61
//clear ___nl__bool__31;
#line 61
//clear ___nl__int__32;
#line 61
//clear ___nl__int__33;
#line 61
c_rt_lib0clear(&___nl__im__34);
#line 61
//clear ___nl__bool__35;
#line 61
//clear ___nl__bool__36;
#line 61
//clear ___nl__int__37;
#line 61
//clear ___nl__int__38;
#line 61
c_rt_lib0clear(&___nl__im__40);
#line 61
return ___nl__im__39;
#line 61
goto label_13;
#line 61
label_14:
#line 61
label_13:
#line 61
//clear ___nl__bool__36;
#line 61
//clear ___nl__int__37;
#line 61
//clear ___nl__int__38;
#line 61
c_rt_lib0clear(&___nl__im__39);
#line 61
c_rt_lib0clear(&___nl__im__40);
#line 62
c_rt_lib0move(&___nl__im__34, csv_priv0get_char(___nl__im__0, &___nl__im__30));
#line 63
___nl__bool__41 = c_rt_lib0eq(___nl__im__34, ___nl__im__1);
#line 63
___nl__bool__41 = !___nl__bool__41;
#line 63
if(___nl__bool__41){ goto label_16;}
#line 64
___nl__int__43 = getIntFromImm(___nl__im__30);
#line 64
___nl__int__44 = ___nl__int__43 >= ___nl__int__6;
#line 64
___nl__bool__42 = ___nl__int__44;
#line 64
//clear ___nl__int__43;
#line 64
//clear ___nl__int__44;
#line 64
//clear ___nl__int__43;
#line 64
//clear ___nl__int__44;
#line 64
___nl__bool__42 = !___nl__bool__42;
#line 64
if(___nl__bool__42){ goto label_18;}
#line 64
c_rt_lib0move(&___nl__im__46, csv_priv0end(&___nl__im__4, &___nl__im__5, ___nl__im__29));
#line 64
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 64
c_rt_lib0clear(&___nl__im__0);
#line 64
c_rt_lib0clear(&___nl__im__1);
#line 64
c_rt_lib0clear(&___nl__im__2);
#line 64
//clear ___nl__int__3;
#line 64
c_rt_lib0clear(&___nl__im__4);
#line 64
c_rt_lib0clear(&___nl__im__5);
#line 64
//clear ___nl__int__6;
#line 64
//clear ___nl__bool__7;
#line 64
//clear ___nl__int__8;
#line 64
//clear ___nl__int__9;
#line 64
c_rt_lib0clear(&___nl__im__10);
#line 64
//clear ___nl__bool__11;
#line 64
//clear ___nl__int__12;
#line 64
c_rt_lib0clear(&___nl__im__13);
#line 64
//clear ___nl__int__14;
#line 64
//clear ___nl__int__15;
#line 64
//clear ___nl__int__16;
#line 64
//clear ___nl__int__17;
#line 64
//clear ___nl__int__18;
#line 64
//clear ___nl__int__19;
#line 64
//clear ___nl__bool__20;
#line 64
//clear ___nl__int__21;
#line 64
c_rt_lib0clear(&___nl__im__22);
#line 64
//clear ___nl__int__23;
#line 64
//clear ___nl__int__24;
#line 64
//clear ___nl__int__25;
#line 64
//clear ___nl__int__26;
#line 64
//clear ___nl__int__27;
#line 64
//clear ___nl__int__28;
#line 64
c_rt_lib0clear(&___nl__im__29);
#line 64
c_rt_lib0clear(&___nl__im__30);
#line 64
//clear ___nl__bool__31;
#line 64
//clear ___nl__int__32;
#line 64
//clear ___nl__int__33;
#line 64
c_rt_lib0clear(&___nl__im__34);
#line 64
//clear ___nl__bool__35;
#line 64
//clear ___nl__bool__36;
#line 64
//clear ___nl__int__37;
#line 64
//clear ___nl__int__38;
#line 64
c_rt_lib0clear(&___nl__im__39);
#line 64
c_rt_lib0clear(&___nl__im__40);
#line 64
//clear ___nl__bool__41;
#line 64
//clear ___nl__bool__42;
#line 64
//clear ___nl__int__43;
#line 64
//clear ___nl__int__44;
#line 64
c_rt_lib0clear(&___nl__im__46);
#line 64
return ___nl__im__45;
#line 64
goto label_17;
#line 64
label_18:
#line 64
label_17:
#line 64
//clear ___nl__bool__42;
#line 64
//clear ___nl__int__43;
#line 64
//clear ___nl__int__44;
#line 64
c_rt_lib0clear(&___nl__im__45);
#line 64
c_rt_lib0clear(&___nl__im__46);
#line 65
c_rt_lib0move(&___nl__im__34, csv_priv0get_char(___nl__im__0, &___nl__im__30));
#line 66
___nl__bool__47 = c_rt_lib0ne(___nl__im__34, ___nl__im__1);
#line 66
___nl__bool__47 = !___nl__bool__47;
#line 66
if(___nl__bool__47){ goto label_20;}
#line 66
goto label_11;
#line 66
goto label_19;
#line 66
label_20:
#line 66
label_19:
#line 66
//clear ___nl__bool__47;
#line 67
goto label_15;
#line 67
label_16:
#line 67
label_15:
#line 67
//clear ___nl__bool__41;
#line 67
//clear ___nl__bool__42;
#line 67
//clear ___nl__int__43;
#line 67
//clear ___nl__int__44;
#line 67
c_rt_lib0clear(&___nl__im__45);
#line 67
c_rt_lib0clear(&___nl__im__46);
#line 67
//clear ___nl__bool__47;
#line 68
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_add(___nl__im__29, ___nl__im__34));
#line 60
goto label_12;
#line 60
label_11:
#line 70
goto label_9;
#line 70
label_10:
#line 71
___nl__int__48 = string0ord(___nl__im__34);
#line 72
label_22:
#line 72
___nl__int__52 = ___nl__int__48 != ___nl__int__3;
#line 72
___nl__bool__49 = ___nl__int__52;
#line 72
//clear ___nl__int__52;
#line 72
___nl__bool__51 = !___nl__bool__49;
#line 72
if(___nl__bool__51){ goto label_24;}
#line 72
___nl__int__53 = 10;
#line 72
___nl__int__54 = ___nl__int__48 != ___nl__int__53;
#line 72
___nl__bool__49 = ___nl__int__54;
#line 72
//clear ___nl__int__53;
#line 72
//clear ___nl__int__54;
#line 72
label_24:
#line 72
//clear ___nl__bool__51;
#line 72
//clear ___nl__int__52;
#line 72
//clear ___nl__int__53;
#line 72
//clear ___nl__int__54;
#line 72
___nl__bool__50 = !___nl__bool__49;
#line 72
if(___nl__bool__50){ goto label_23;}
#line 72
___nl__int__55 = 13;
#line 72
___nl__int__56 = ___nl__int__48 != ___nl__int__55;
#line 72
___nl__bool__49 = ___nl__int__56;
#line 72
//clear ___nl__int__55;
#line 72
//clear ___nl__int__56;
#line 72
label_23:
#line 72
//clear ___nl__bool__50;
#line 72
//clear ___nl__bool__51;
#line 72
//clear ___nl__int__52;
#line 72
//clear ___nl__int__53;
#line 72
//clear ___nl__int__54;
#line 72
//clear ___nl__int__55;
#line 72
//clear ___nl__int__56;
#line 72
___nl__bool__49 = !___nl__bool__49;
#line 72
if(___nl__bool__49){ goto label_21;}
#line 73
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_add(___nl__im__29, ___nl__im__34));
#line 74
___nl__int__58 = getIntFromImm(___nl__im__30);
#line 74
___nl__int__59 = ___nl__int__58 >= ___nl__int__6;
#line 74
___nl__bool__57 = ___nl__int__59;
#line 74
//clear ___nl__int__58;
#line 74
//clear ___nl__int__59;
#line 74
//clear ___nl__int__58;
#line 74
//clear ___nl__int__59;
#line 74
___nl__bool__57 = !___nl__bool__57;
#line 74
if(___nl__bool__57){ goto label_26;}
#line 74
c_rt_lib0move(&___nl__im__61, csv_priv0end(&___nl__im__4, &___nl__im__5, ___nl__im__29));
#line 74
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 74
c_rt_lib0clear(&___nl__im__0);
#line 74
c_rt_lib0clear(&___nl__im__1);
#line 74
c_rt_lib0clear(&___nl__im__2);
#line 74
//clear ___nl__int__3;
#line 74
c_rt_lib0clear(&___nl__im__4);
#line 74
c_rt_lib0clear(&___nl__im__5);
#line 74
//clear ___nl__int__6;
#line 74
//clear ___nl__bool__7;
#line 74
//clear ___nl__int__8;
#line 74
//clear ___nl__int__9;
#line 74
c_rt_lib0clear(&___nl__im__10);
#line 74
//clear ___nl__bool__11;
#line 74
//clear ___nl__int__12;
#line 74
c_rt_lib0clear(&___nl__im__13);
#line 74
//clear ___nl__int__14;
#line 74
//clear ___nl__int__15;
#line 74
//clear ___nl__int__16;
#line 74
//clear ___nl__int__17;
#line 74
//clear ___nl__int__18;
#line 74
//clear ___nl__int__19;
#line 74
//clear ___nl__bool__20;
#line 74
//clear ___nl__int__21;
#line 74
c_rt_lib0clear(&___nl__im__22);
#line 74
//clear ___nl__int__23;
#line 74
//clear ___nl__int__24;
#line 74
//clear ___nl__int__25;
#line 74
//clear ___nl__int__26;
#line 74
//clear ___nl__int__27;
#line 74
//clear ___nl__int__28;
#line 74
c_rt_lib0clear(&___nl__im__29);
#line 74
c_rt_lib0clear(&___nl__im__30);
#line 74
//clear ___nl__bool__31;
#line 74
//clear ___nl__int__32;
#line 74
//clear ___nl__int__33;
#line 74
c_rt_lib0clear(&___nl__im__34);
#line 74
//clear ___nl__bool__35;
#line 74
//clear ___nl__bool__36;
#line 74
//clear ___nl__int__37;
#line 74
//clear ___nl__int__38;
#line 74
c_rt_lib0clear(&___nl__im__39);
#line 74
c_rt_lib0clear(&___nl__im__40);
#line 74
//clear ___nl__bool__41;
#line 74
//clear ___nl__bool__42;
#line 74
//clear ___nl__int__43;
#line 74
//clear ___nl__int__44;
#line 74
c_rt_lib0clear(&___nl__im__45);
#line 74
c_rt_lib0clear(&___nl__im__46);
#line 74
//clear ___nl__bool__47;
#line 74
//clear ___nl__int__48;
#line 74
//clear ___nl__bool__49;
#line 74
//clear ___nl__bool__50;
#line 74
//clear ___nl__bool__51;
#line 74
//clear ___nl__int__52;
#line 74
//clear ___nl__int__53;
#line 74
//clear ___nl__int__54;
#line 74
//clear ___nl__int__55;
#line 74
//clear ___nl__int__56;
#line 74
//clear ___nl__bool__57;
#line 74
//clear ___nl__int__58;
#line 74
//clear ___nl__int__59;
#line 74
c_rt_lib0clear(&___nl__im__61);
#line 74
return ___nl__im__60;
#line 74
goto label_25;
#line 74
label_26:
#line 74
label_25:
#line 74
//clear ___nl__bool__57;
#line 74
//clear ___nl__int__58;
#line 74
//clear ___nl__int__59;
#line 74
c_rt_lib0clear(&___nl__im__60);
#line 74
c_rt_lib0clear(&___nl__im__61);
#line 75
c_rt_lib0move(&___nl__im__34, csv_priv0get_char(___nl__im__0, &___nl__im__30));
#line 76
___nl__int__48 = string0ord(___nl__im__34);
#line 77
goto label_22;
#line 77
label_21:
#line 78
goto label_9;
#line 78
label_9:
#line 78
//clear ___nl__bool__35;
#line 78
//clear ___nl__bool__36;
#line 78
//clear ___nl__int__37;
#line 78
//clear ___nl__int__38;
#line 78
c_rt_lib0clear(&___nl__im__39);
#line 78
c_rt_lib0clear(&___nl__im__40);
#line 78
//clear ___nl__bool__41;
#line 78
//clear ___nl__bool__42;
#line 78
//clear ___nl__int__43;
#line 78
//clear ___nl__int__44;
#line 78
c_rt_lib0clear(&___nl__im__45);
#line 78
c_rt_lib0clear(&___nl__im__46);
#line 78
//clear ___nl__bool__47;
#line 78
//clear ___nl__int__48;
#line 78
//clear ___nl__bool__49;
#line 78
//clear ___nl__bool__50;
#line 78
//clear ___nl__bool__51;
#line 78
//clear ___nl__int__52;
#line 78
//clear ___nl__int__53;
#line 78
//clear ___nl__int__54;
#line 78
//clear ___nl__int__55;
#line 78
//clear ___nl__int__56;
#line 78
//clear ___nl__bool__57;
#line 78
//clear ___nl__int__58;
#line 78
//clear ___nl__int__59;
#line 78
c_rt_lib0clear(&___nl__im__60);
#line 78
c_rt_lib0clear(&___nl__im__61);
#line 79
c_rt_lib0delete(array0push(&___nl__im__5, ___nl__im__29));
#line 80
c_rt_lib0move(&___nl__im__29,___get_global_const(37));
#line 81
___nl__int__62 = string0ord(___nl__im__34);
#line 82
___nl__int__64 = ___nl__int__62 == ___nl__int__3;
#line 82
___nl__bool__63 = ___nl__int__64;
#line 82
//clear ___nl__int__64;
#line 82
//clear ___nl__int__64;
#line 82
___nl__bool__63 = !___nl__bool__63;
#line 82
if(___nl__bool__63){ goto label_28;}
#line 82
goto label_8;
#line 82
goto label_27;
#line 82
label_28:
#line 82
label_27:
#line 82
//clear ___nl__bool__63;
#line 82
//clear ___nl__int__64;
#line 83
___nl__int__66 = 13;
#line 83
___nl__int__67 = ___nl__int__62 == ___nl__int__66;
#line 83
___nl__bool__65 = ___nl__int__67;
#line 83
//clear ___nl__int__66;
#line 83
//clear ___nl__int__67;
#line 83
___nl__bool__65 = !___nl__bool__65;
#line 83
if(___nl__bool__65){ goto label_30;}
#line 84
c_rt_lib0move(&___nl__im__34, csv_priv0get_char(___nl__im__0, &___nl__im__30));
#line 85
___nl__int__62 = string0ord(___nl__im__34);
#line 86
goto label_29;
#line 86
label_30:
#line 86
label_29:
#line 86
//clear ___nl__bool__65;
#line 86
//clear ___nl__int__66;
#line 86
//clear ___nl__int__67;
#line 87
___nl__int__69 = 10;
#line 87
___nl__int__70 = ___nl__int__62 == ___nl__int__69;
#line 87
___nl__bool__68 = ___nl__int__70;
#line 87
//clear ___nl__int__69;
#line 87
//clear ___nl__int__70;
#line 87
___nl__bool__68 = !___nl__bool__68;
#line 87
if(___nl__bool__68){ goto label_32;}
#line 88
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__5));
#line 89
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 90
goto label_8;
#line 91
goto label_31;
#line 91
label_32:
#line 91
label_31:
#line 91
//clear ___nl__bool__68;
#line 91
//clear ___nl__int__69;
#line 91
//clear ___nl__int__70;
#line 92
goto label_8;
#line 92
label_7:
#line 93
c_rt_lib0move(&___nl__im__72, csv_priv0end(&___nl__im__4, &___nl__im__5, ___nl__im__29));
#line 93
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 93
c_rt_lib0clear(&___nl__im__0);
#line 93
c_rt_lib0clear(&___nl__im__1);
#line 93
c_rt_lib0clear(&___nl__im__2);
#line 93
//clear ___nl__int__3;
#line 93
c_rt_lib0clear(&___nl__im__4);
#line 93
c_rt_lib0clear(&___nl__im__5);
#line 93
//clear ___nl__int__6;
#line 93
//clear ___nl__bool__7;
#line 93
//clear ___nl__int__8;
#line 93
//clear ___nl__int__9;
#line 93
c_rt_lib0clear(&___nl__im__10);
#line 93
//clear ___nl__bool__11;
#line 93
//clear ___nl__int__12;
#line 93
c_rt_lib0clear(&___nl__im__13);
#line 93
//clear ___nl__int__14;
#line 93
//clear ___nl__int__15;
#line 93
//clear ___nl__int__16;
#line 93
//clear ___nl__int__17;
#line 93
//clear ___nl__int__18;
#line 93
//clear ___nl__int__19;
#line 93
//clear ___nl__bool__20;
#line 93
//clear ___nl__int__21;
#line 93
c_rt_lib0clear(&___nl__im__22);
#line 93
//clear ___nl__int__23;
#line 93
//clear ___nl__int__24;
#line 93
//clear ___nl__int__25;
#line 93
//clear ___nl__int__26;
#line 93
//clear ___nl__int__27;
#line 93
//clear ___nl__int__28;
#line 93
c_rt_lib0clear(&___nl__im__29);
#line 93
c_rt_lib0clear(&___nl__im__30);
#line 93
//clear ___nl__bool__31;
#line 93
//clear ___nl__int__32;
#line 93
//clear ___nl__int__33;
#line 93
c_rt_lib0clear(&___nl__im__34);
#line 93
//clear ___nl__bool__35;
#line 93
//clear ___nl__bool__36;
#line 93
//clear ___nl__int__37;
#line 93
//clear ___nl__int__38;
#line 93
c_rt_lib0clear(&___nl__im__39);
#line 93
c_rt_lib0clear(&___nl__im__40);
#line 93
//clear ___nl__bool__41;
#line 93
//clear ___nl__bool__42;
#line 93
//clear ___nl__int__43;
#line 93
//clear ___nl__int__44;
#line 93
c_rt_lib0clear(&___nl__im__45);
#line 93
c_rt_lib0clear(&___nl__im__46);
#line 93
//clear ___nl__bool__47;
#line 93
//clear ___nl__int__48;
#line 93
//clear ___nl__bool__49;
#line 93
//clear ___nl__bool__50;
#line 93
//clear ___nl__bool__51;
#line 93
//clear ___nl__int__52;
#line 93
//clear ___nl__int__53;
#line 93
//clear ___nl__int__54;
#line 93
//clear ___nl__int__55;
#line 93
//clear ___nl__int__56;
#line 93
//clear ___nl__bool__57;
#line 93
//clear ___nl__int__58;
#line 93
//clear ___nl__int__59;
#line 93
c_rt_lib0clear(&___nl__im__60);
#line 93
c_rt_lib0clear(&___nl__im__61);
#line 93
//clear ___nl__int__62;
#line 93
//clear ___nl__bool__63;
#line 93
//clear ___nl__int__64;
#line 93
//clear ___nl__bool__65;
#line 93
//clear ___nl__int__66;
#line 93
//clear ___nl__int__67;
#line 93
//clear ___nl__bool__68;
#line 93
//clear ___nl__int__69;
#line 93
//clear ___nl__int__70;
#line 93
c_rt_lib0clear(&___nl__im__72);
#line 93
return ___nl__im__71;
#line 93
c_rt_lib0clear(&___nl__im__0);
#line 93
c_rt_lib0clear(&___nl__im__1);
#line 93
c_rt_lib0clear(&___nl__im__2);
#line 93
//clear ___nl__int__3;
#line 93
c_rt_lib0clear(&___nl__im__4);
#line 93
c_rt_lib0clear(&___nl__im__5);
#line 93
//clear ___nl__int__6;
#line 93
//clear ___nl__bool__7;
#line 93
//clear ___nl__int__8;
#line 93
//clear ___nl__int__9;
#line 93
c_rt_lib0clear(&___nl__im__10);
#line 93
//clear ___nl__bool__11;
#line 93
//clear ___nl__int__12;
#line 93
c_rt_lib0clear(&___nl__im__13);
#line 93
//clear ___nl__int__14;
#line 93
//clear ___nl__int__15;
#line 93
//clear ___nl__int__16;
#line 93
//clear ___nl__int__17;
#line 93
//clear ___nl__int__18;
#line 93
//clear ___nl__int__19;
#line 93
//clear ___nl__bool__20;
#line 93
//clear ___nl__int__21;
#line 93
c_rt_lib0clear(&___nl__im__22);
#line 93
//clear ___nl__int__23;
#line 93
//clear ___nl__int__24;
#line 93
//clear ___nl__int__25;
#line 93
//clear ___nl__int__26;
#line 93
//clear ___nl__int__27;
#line 93
//clear ___nl__int__28;
#line 93
c_rt_lib0clear(&___nl__im__29);
#line 93
c_rt_lib0clear(&___nl__im__30);
#line 93
//clear ___nl__bool__31;
#line 93
//clear ___nl__int__32;
#line 93
//clear ___nl__int__33;
#line 93
c_rt_lib0clear(&___nl__im__34);
#line 93
//clear ___nl__bool__35;
#line 93
//clear ___nl__bool__36;
#line 93
//clear ___nl__int__37;
#line 93
//clear ___nl__int__38;
#line 93
c_rt_lib0clear(&___nl__im__39);
#line 93
c_rt_lib0clear(&___nl__im__40);
#line 93
//clear ___nl__bool__41;
#line 93
//clear ___nl__bool__42;
#line 93
//clear ___nl__int__43;
#line 93
//clear ___nl__int__44;
#line 93
c_rt_lib0clear(&___nl__im__45);
#line 93
c_rt_lib0clear(&___nl__im__46);
#line 93
//clear ___nl__bool__47;
#line 93
//clear ___nl__int__48;
#line 93
//clear ___nl__bool__49;
#line 93
//clear ___nl__bool__50;
#line 93
//clear ___nl__bool__51;
#line 93
//clear ___nl__int__52;
#line 93
//clear ___nl__int__53;
#line 93
//clear ___nl__int__54;
#line 93
//clear ___nl__int__55;
#line 93
//clear ___nl__int__56;
#line 93
//clear ___nl__bool__57;
#line 93
//clear ___nl__int__58;
#line 93
//clear ___nl__int__59;
#line 93
c_rt_lib0clear(&___nl__im__60);
#line 93
c_rt_lib0clear(&___nl__im__61);
#line 93
//clear ___nl__int__62;
#line 93
//clear ___nl__bool__63;
#line 93
//clear ___nl__int__64;
#line 93
//clear ___nl__bool__65;
#line 93
//clear ___nl__int__66;
#line 93
//clear ___nl__int__67;
#line 93
//clear ___nl__bool__68;
#line 93
//clear ___nl__int__69;
#line 93
//clear ___nl__int__70;
#line 93
c_rt_lib0clear(&___nl__im__71);
#line 93
c_rt_lib0clear(&___nl__im__72);
#line 93
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void csv_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT csv_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT csv_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
