
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
ImmT  ___nl__string__4 = NULL;
ImmT  ___nl__string__5 = NULL;
ImmT  ___nl__string__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
bool  ___nl__bool__27 = false;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
bool  ___nl__bool__34 = false;
bool  ___nl__bool__35 = false;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
ImmT  ___nl__string__40 = NULL;
ImmT  ___nl__string__41 = NULL;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__string__48 = NULL;
ImmT  ___nl__string__49 = NULL;
ImmT  ___nl__string__50 = NULL;
ImmT  ___nl__string__51 = NULL;
ImmT  ___nl__string__52 = NULL;
ImmT  ___nl__string__53 = NULL;
ImmT  ___nl__string__54 = NULL;
ImmT  ___nl__string__55 = NULL;
ImmT  ___nl__string__56 = NULL;
bool  ___nl__bool__57 = false;
INT  ___nl__int__58 = 0;
INT  ___nl__int__59 = 0;
INT  ___nl__int__60 = 0;
ImmT  ___nl__string__61 = NULL;
ImmT  ___nl__string__62 = NULL;
ImmT  ___nl__string__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__string__65 = NULL;
ImmT  ___nl__string__66 = NULL;
ImmT  ___nl__string__67 = NULL;
ImmT  ___nl__im__68 = NULL;
#line 10
c_rt_lib0move(&___nl__im__1,___get_global_const(286));
#line 11
c_rt_lib0move(&___nl__im__2, string0tab());
#line 12
c_rt_lib0copy(&___nl__string__4, ___nl__im__1);
#line 12
c_rt_lib0copy(&___nl__string__5, ___nl__im__1);
#line 12
c_rt_lib0move(&___nl__string__6, c_rt_lib0concat_new(___nl__string__4, ___nl__string__5));
#line 12
c_rt_lib0copy(&___nl__im__3, ___nl__string__6);
#line 12
c_rt_lib0clear(&___nl__string__4);
#line 12
c_rt_lib0clear(&___nl__string__5);
#line 12
c_rt_lib0clear(&___nl__string__6);
#line 13
c_rt_lib0move(&___nl__im__7,___get_global_const(37));
#line 14
___nl__int__9 = 0;
#line 14
___nl__int__10 = 1;
#line 14
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 14
label_3:
#line 14
___nl__int__13 = ___nl__int__9 >= ___nl__int__11;
#line 14
___nl__bool__12 = ___nl__int__13;
#line 14
if(___nl__bool__12){ goto label_1;}
#line 14
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 14
c_rt_lib0copy(&___nl__im__8, ___nl__im__14);
#line 15
c_rt_lib0copy(&___nl__im__16, ___nl__im__8);
#line 15
___nl__int__15 = c_rt_lib0array_len(___nl__im__16);
#line 15
c_rt_lib0clear(&___nl__im__16);
#line 16
___nl__int__17 = 0;
#line 16
___nl__int__18 = 1;
#line 16
label_6:
#line 16
___nl__int__20 = ___nl__int__17 >= ___nl__int__15;
#line 16
___nl__bool__19 = ___nl__int__20;
#line 16
if(___nl__bool__19){ goto label_4;}
#line 17
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__8, ___nl__int__17));
#line 18
c_rt_lib0copy(&___nl__im__23, ___nl__im__21);
#line 18
___nl__int__22 = string0length(___nl__im__23);
#line 18
c_rt_lib0clear(&___nl__im__23);
#line 19
___nl__bool__24 = false;
#line 20
___nl__int__25 = 0;
#line 20
___nl__int__26 = 1;
#line 20
label_9:
#line 20
___nl__int__28 = ___nl__int__25 >= ___nl__int__22;
#line 20
___nl__bool__27 = ___nl__int__28;
#line 20
if(___nl__bool__27){ goto label_7;}
#line 21
c_rt_lib0copy(&___nl__im__30, ___nl__im__21);
#line 21
___nl__int__31 = ___nl__int__25;
#line 21
___nl__int__32 = 1;
#line 21
___nl__int__33 = ___nl__int__32;
#line 21
c_rt_lib0move(&___nl__im__29, string0substr(___nl__im__30, ___nl__int__31, ___nl__int__33));
#line 21
c_rt_lib0clear(&___nl__im__30);
#line 21
//clear ___nl__int__31;
#line 21
//clear ___nl__int__32;
#line 21
//clear ___nl__int__33;
#line 22
c_rt_lib0copy(&___nl__im__37, ___nl__im__29);
#line 22
___nl__int__36 = string0ord(___nl__im__37);
#line 22
c_rt_lib0clear(&___nl__im__37);
#line 22
___nl__int__38 = 32;
#line 22
___nl__int__39 = ___nl__int__36 < ___nl__int__38;
#line 22
___nl__bool__34 = ___nl__int__39;
#line 22
//clear ___nl__int__36;
#line 22
c_rt_lib0clear(&___nl__im__37);
#line 22
//clear ___nl__int__38;
#line 22
//clear ___nl__int__39;
#line 22
if(___nl__bool__34){ goto label_12;}
#line 22
c_rt_lib0copy(&___nl__string__40, ___nl__im__29);
#line 22
c_rt_lib0copy(&___nl__string__41, ___nl__im__1);
#line 22
___nl__bool__34 = c_rt_lib0eq(___nl__string__40, ___nl__string__41);
#line 22
c_rt_lib0clear(&___nl__string__40);
#line 22
c_rt_lib0clear(&___nl__string__41);
#line 22
label_12:
#line 22
//clear ___nl__bool__35;
#line 22
//clear ___nl__int__36;
#line 22
c_rt_lib0clear(&___nl__im__37);
#line 22
//clear ___nl__int__38;
#line 22
//clear ___nl__int__39;
#line 22
c_rt_lib0clear(&___nl__string__40);
#line 22
c_rt_lib0clear(&___nl__string__41);
#line 22
//clear ___nl__bool__35;
#line 22
//clear ___nl__int__36;
#line 22
c_rt_lib0clear(&___nl__im__37);
#line 22
//clear ___nl__int__38;
#line 22
//clear ___nl__int__39;
#line 22
c_rt_lib0clear(&___nl__string__40);
#line 22
c_rt_lib0clear(&___nl__string__41);
#line 22
___nl__bool__34 = !___nl__bool__34;
#line 22
if(___nl__bool__34){ goto label_11;}
#line 22
___nl__bool__24 = true;
#line 22
goto label_10;
#line 22
label_11:
#line 22
label_10:
#line 22
label_8:
#line 23
___nl__int__25 = ___nl__int__25 + ___nl__int__26;
#line 23
goto label_9;
#line 23
label_7:
#line 24
___nl__bool__42 = ___nl__bool__24;
#line 24
___nl__bool__42 = !___nl__bool__42;
#line 24
if(___nl__bool__42){ goto label_14;}
#line 24
c_rt_lib0copy(&___nl__im__45, ___nl__im__21);
#line 24
c_rt_lib0copy(&___nl__im__46, ___nl__im__1);
#line 24
c_rt_lib0copy(&___nl__im__47, ___nl__im__3);
#line 24
c_rt_lib0move(&___nl__im__44, string0replace(___nl__im__45, ___nl__im__46, ___nl__im__47));
#line 24
c_rt_lib0clear(&___nl__im__45);
#line 24
c_rt_lib0clear(&___nl__im__46);
#line 24
c_rt_lib0clear(&___nl__im__47);
#line 24
c_rt_lib0copy(&___nl__string__48, ___nl__im__1);
#line 24
c_rt_lib0copy(&___nl__string__49, ___nl__im__44);
#line 24
c_rt_lib0move(&___nl__string__50, c_rt_lib0concat_new(___nl__string__48, ___nl__string__49));
#line 24
c_rt_lib0copy(&___nl__im__43, ___nl__string__50);
#line 24
c_rt_lib0clear(&___nl__im__44);
#line 24
c_rt_lib0clear(&___nl__im__45);
#line 24
c_rt_lib0clear(&___nl__im__46);
#line 24
c_rt_lib0clear(&___nl__im__47);
#line 24
c_rt_lib0clear(&___nl__string__48);
#line 24
c_rt_lib0clear(&___nl__string__49);
#line 24
c_rt_lib0clear(&___nl__string__50);
#line 24
c_rt_lib0copy(&___nl__string__51, ___nl__im__43);
#line 24
c_rt_lib0copy(&___nl__string__52, ___nl__im__1);
#line 24
c_rt_lib0move(&___nl__string__53, c_rt_lib0concat_new(___nl__string__51, ___nl__string__52));
#line 24
c_rt_lib0copy(&___nl__im__21, ___nl__string__53);
#line 24
c_rt_lib0clear(&___nl__im__43);
#line 24
c_rt_lib0clear(&___nl__im__44);
#line 24
c_rt_lib0clear(&___nl__im__45);
#line 24
c_rt_lib0clear(&___nl__im__46);
#line 24
c_rt_lib0clear(&___nl__im__47);
#line 24
c_rt_lib0clear(&___nl__string__48);
#line 24
c_rt_lib0clear(&___nl__string__49);
#line 24
c_rt_lib0clear(&___nl__string__50);
#line 24
c_rt_lib0clear(&___nl__string__51);
#line 24
c_rt_lib0clear(&___nl__string__52);
#line 24
c_rt_lib0clear(&___nl__string__53);
#line 24
c_rt_lib0clear(&___nl__im__43);
#line 24
c_rt_lib0clear(&___nl__im__44);
#line 24
c_rt_lib0clear(&___nl__im__45);
#line 24
c_rt_lib0clear(&___nl__im__46);
#line 24
c_rt_lib0clear(&___nl__im__47);
#line 24
c_rt_lib0clear(&___nl__string__48);
#line 24
c_rt_lib0clear(&___nl__string__49);
#line 24
c_rt_lib0clear(&___nl__string__50);
#line 24
c_rt_lib0clear(&___nl__string__51);
#line 24
c_rt_lib0clear(&___nl__string__52);
#line 24
c_rt_lib0clear(&___nl__string__53);
#line 24
goto label_13;
#line 24
label_14:
#line 24
label_13:
#line 25
c_rt_lib0copy(&___nl__string__54, ___nl__im__7);
#line 25
c_rt_lib0copy(&___nl__string__55, ___nl__im__21);
#line 25
c_rt_lib0move(&___nl__string__56, c_rt_lib0concat_new(___nl__string__54, ___nl__string__55));
#line 25
c_rt_lib0copy(&___nl__im__7, ___nl__string__56);
#line 25
c_rt_lib0clear(&___nl__string__54);
#line 25
c_rt_lib0clear(&___nl__string__55);
#line 25
c_rt_lib0clear(&___nl__string__56);
#line 26
___nl__int__59 = 1;
#line 26
___nl__int__58 = ___nl__int__15 - ___nl__int__59;
#line 26
//clear ___nl__int__59;
#line 26
___nl__int__60 = ___nl__int__17 == ___nl__int__58;
#line 26
___nl__bool__57 = ___nl__int__60;
#line 26
//clear ___nl__int__58;
#line 26
//clear ___nl__int__59;
#line 26
//clear ___nl__int__60;
#line 26
//clear ___nl__int__58;
#line 26
//clear ___nl__int__59;
#line 26
//clear ___nl__int__60;
#line 26
___nl__bool__57 = !___nl__bool__57;
#line 26
//clear ___nl__int__58;
#line 26
//clear ___nl__int__59;
#line 26
//clear ___nl__int__60;
#line 26
___nl__bool__57 = !___nl__bool__57;
#line 26
if(___nl__bool__57){ goto label_16;}
#line 26
c_rt_lib0copy(&___nl__string__61, ___nl__im__7);
#line 26
c_rt_lib0copy(&___nl__string__62, ___nl__im__2);
#line 26
c_rt_lib0move(&___nl__string__63, c_rt_lib0concat_new(___nl__string__61, ___nl__string__62));
#line 26
c_rt_lib0copy(&___nl__im__7, ___nl__string__63);
#line 26
c_rt_lib0clear(&___nl__string__61);
#line 26
c_rt_lib0clear(&___nl__string__62);
#line 26
c_rt_lib0clear(&___nl__string__63);
#line 26
goto label_15;
#line 26
label_16:
#line 26
label_15:
#line 26
label_5:
#line 27
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 27
goto label_6;
#line 27
label_4:
#line 28
c_rt_lib0move(&___nl__im__64, string0lf());
#line 28
c_rt_lib0copy(&___nl__string__65, ___nl__im__7);
#line 28
c_rt_lib0copy(&___nl__string__66, ___nl__im__64);
#line 28
c_rt_lib0move(&___nl__string__67, c_rt_lib0concat_new(___nl__string__65, ___nl__string__66));
#line 28
c_rt_lib0copy(&___nl__im__7, ___nl__string__67);
#line 28
c_rt_lib0clear(&___nl__im__64);
#line 28
c_rt_lib0clear(&___nl__string__65);
#line 28
c_rt_lib0clear(&___nl__string__66);
#line 28
c_rt_lib0clear(&___nl__string__67);
#line 28
c_rt_lib0clear(&___nl__im__8);
#line 28
label_2:
#line 29
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 29
goto label_3;
#line 29
label_1:
#line 30
c_rt_lib0copy(&___nl__im__68, ___nl__im__7);
#line 30
c_rt_lib0clear(&___nl__im__0);
#line 30
c_rt_lib0clear(&___nl__im__1);
#line 30
c_rt_lib0clear(&___nl__im__2);
#line 30
c_rt_lib0clear(&___nl__im__3);
#line 30
c_rt_lib0clear(&___nl__string__4);
#line 30
c_rt_lib0clear(&___nl__string__5);
#line 30
c_rt_lib0clear(&___nl__string__6);
#line 30
c_rt_lib0clear(&___nl__im__7);
#line 30
c_rt_lib0clear(&___nl__im__8);
#line 30
//clear ___nl__int__9;
#line 30
//clear ___nl__int__10;
#line 30
//clear ___nl__int__11;
#line 30
//clear ___nl__bool__12;
#line 30
//clear ___nl__int__13;
#line 30
c_rt_lib0clear(&___nl__im__14);
#line 30
//clear ___nl__int__15;
#line 30
c_rt_lib0clear(&___nl__im__16);
#line 30
//clear ___nl__int__17;
#line 30
//clear ___nl__int__18;
#line 30
//clear ___nl__bool__19;
#line 30
//clear ___nl__int__20;
#line 30
c_rt_lib0clear(&___nl__im__21);
#line 30
//clear ___nl__int__22;
#line 30
c_rt_lib0clear(&___nl__im__23);
#line 30
//clear ___nl__bool__24;
#line 30
//clear ___nl__int__25;
#line 30
//clear ___nl__int__26;
#line 30
//clear ___nl__bool__27;
#line 30
//clear ___nl__int__28;
#line 30
c_rt_lib0clear(&___nl__im__29);
#line 30
c_rt_lib0clear(&___nl__im__30);
#line 30
//clear ___nl__int__31;
#line 30
//clear ___nl__int__32;
#line 30
//clear ___nl__int__33;
#line 30
//clear ___nl__bool__34;
#line 30
//clear ___nl__bool__35;
#line 30
//clear ___nl__int__36;
#line 30
c_rt_lib0clear(&___nl__im__37);
#line 30
//clear ___nl__int__38;
#line 30
//clear ___nl__int__39;
#line 30
c_rt_lib0clear(&___nl__string__40);
#line 30
c_rt_lib0clear(&___nl__string__41);
#line 30
//clear ___nl__bool__42;
#line 30
c_rt_lib0clear(&___nl__im__43);
#line 30
c_rt_lib0clear(&___nl__im__44);
#line 30
c_rt_lib0clear(&___nl__im__45);
#line 30
c_rt_lib0clear(&___nl__im__46);
#line 30
c_rt_lib0clear(&___nl__im__47);
#line 30
c_rt_lib0clear(&___nl__string__48);
#line 30
c_rt_lib0clear(&___nl__string__49);
#line 30
c_rt_lib0clear(&___nl__string__50);
#line 30
c_rt_lib0clear(&___nl__string__51);
#line 30
c_rt_lib0clear(&___nl__string__52);
#line 30
c_rt_lib0clear(&___nl__string__53);
#line 30
c_rt_lib0clear(&___nl__string__54);
#line 30
c_rt_lib0clear(&___nl__string__55);
#line 30
c_rt_lib0clear(&___nl__string__56);
#line 30
//clear ___nl__bool__57;
#line 30
//clear ___nl__int__58;
#line 30
//clear ___nl__int__59;
#line 30
//clear ___nl__int__60;
#line 30
c_rt_lib0clear(&___nl__string__61);
#line 30
c_rt_lib0clear(&___nl__string__62);
#line 30
c_rt_lib0clear(&___nl__string__63);
#line 30
c_rt_lib0clear(&___nl__im__64);
#line 30
c_rt_lib0clear(&___nl__string__65);
#line 30
c_rt_lib0clear(&___nl__string__66);
#line 30
c_rt_lib0clear(&___nl__string__67);
#line 30
return ___nl__im__68;
#line 30
c_rt_lib0clear(&___nl__im__0);
#line 30
c_rt_lib0clear(&___nl__im__1);
#line 30
c_rt_lib0clear(&___nl__im__2);
#line 30
c_rt_lib0clear(&___nl__im__3);
#line 30
c_rt_lib0clear(&___nl__string__4);
#line 30
c_rt_lib0clear(&___nl__string__5);
#line 30
c_rt_lib0clear(&___nl__string__6);
#line 30
c_rt_lib0clear(&___nl__im__7);
#line 30
c_rt_lib0clear(&___nl__im__8);
#line 30
//clear ___nl__int__9;
#line 30
//clear ___nl__int__10;
#line 30
//clear ___nl__int__11;
#line 30
//clear ___nl__bool__12;
#line 30
//clear ___nl__int__13;
#line 30
c_rt_lib0clear(&___nl__im__14);
#line 30
//clear ___nl__int__15;
#line 30
c_rt_lib0clear(&___nl__im__16);
#line 30
//clear ___nl__int__17;
#line 30
//clear ___nl__int__18;
#line 30
//clear ___nl__bool__19;
#line 30
//clear ___nl__int__20;
#line 30
c_rt_lib0clear(&___nl__im__21);
#line 30
//clear ___nl__int__22;
#line 30
c_rt_lib0clear(&___nl__im__23);
#line 30
//clear ___nl__bool__24;
#line 30
//clear ___nl__int__25;
#line 30
//clear ___nl__int__26;
#line 30
//clear ___nl__bool__27;
#line 30
//clear ___nl__int__28;
#line 30
c_rt_lib0clear(&___nl__im__29);
#line 30
c_rt_lib0clear(&___nl__im__30);
#line 30
//clear ___nl__int__31;
#line 30
//clear ___nl__int__32;
#line 30
//clear ___nl__int__33;
#line 30
//clear ___nl__bool__34;
#line 30
//clear ___nl__bool__35;
#line 30
//clear ___nl__int__36;
#line 30
c_rt_lib0clear(&___nl__im__37);
#line 30
//clear ___nl__int__38;
#line 30
//clear ___nl__int__39;
#line 30
c_rt_lib0clear(&___nl__string__40);
#line 30
c_rt_lib0clear(&___nl__string__41);
#line 30
//clear ___nl__bool__42;
#line 30
c_rt_lib0clear(&___nl__im__43);
#line 30
c_rt_lib0clear(&___nl__im__44);
#line 30
c_rt_lib0clear(&___nl__im__45);
#line 30
c_rt_lib0clear(&___nl__im__46);
#line 30
c_rt_lib0clear(&___nl__im__47);
#line 30
c_rt_lib0clear(&___nl__string__48);
#line 30
c_rt_lib0clear(&___nl__string__49);
#line 30
c_rt_lib0clear(&___nl__string__50);
#line 30
c_rt_lib0clear(&___nl__string__51);
#line 30
c_rt_lib0clear(&___nl__string__52);
#line 30
c_rt_lib0clear(&___nl__string__53);
#line 30
c_rt_lib0clear(&___nl__string__54);
#line 30
c_rt_lib0clear(&___nl__string__55);
#line 30
c_rt_lib0clear(&___nl__string__56);
#line 30
//clear ___nl__bool__57;
#line 30
//clear ___nl__int__58;
#line 30
//clear ___nl__int__59;
#line 30
//clear ___nl__int__60;
#line 30
c_rt_lib0clear(&___nl__string__61);
#line 30
c_rt_lib0clear(&___nl__string__62);
#line 30
c_rt_lib0clear(&___nl__string__63);
#line 30
c_rt_lib0clear(&___nl__im__64);
#line 30
c_rt_lib0clear(&___nl__string__65);
#line 30
c_rt_lib0clear(&___nl__string__66);
#line 30
c_rt_lib0clear(&___nl__string__67);
#line 30
c_rt_lib0clear(&___nl__im__68);
#line 30
return NULL;
}

ImmT  csv_priv0get_char(ImmT  ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
csv_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
#line 34
c_rt_lib0copy(&___nl__im__4, ___nl__im__0);
#line 34
___nl__int__5 = getIntFromImm((*___ref___im__1));
#line 34
___nl__int__6 = 1;
#line 34
___nl__int__7 = getIntFromImm((*___ref___im__1));
#line 34
___nl__int__8 = ___nl__int__7 + ___nl__int__6;
#line 34
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__8));
#line 34
//clear ___nl__int__6;
#line 34
//clear ___nl__int__7;
#line 34
//clear ___nl__int__8;
#line 34
___nl__int__9 = ___nl__int__5;
#line 34
___nl__int__10 = 1;
#line 34
___nl__int__11 = ___nl__int__10;
#line 34
c_rt_lib0move(&___nl__im__3, string0substr(___nl__im__4, ___nl__int__9, ___nl__int__11));
#line 34
c_rt_lib0clear(&___nl__im__4);
#line 34
//clear ___nl__int__5;
#line 34
//clear ___nl__int__6;
#line 34
//clear ___nl__int__7;
#line 34
//clear ___nl__int__8;
#line 34
//clear ___nl__int__9;
#line 34
//clear ___nl__int__10;
#line 34
//clear ___nl__int__11;
#line 34
c_rt_lib0copy(&___nl__im__2, ___nl__im__3);
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
c_rt_lib0clear(&___nl__im__3);
#line 34
c_rt_lib0clear(&___nl__im__4);
#line 34
//clear ___nl__int__5;
#line 34
//clear ___nl__int__6;
#line 34
//clear ___nl__int__7;
#line 34
//clear ___nl__int__8;
#line 34
//clear ___nl__int__9;
#line 34
//clear ___nl__int__10;
#line 34
//clear ___nl__int__11;
#line 34
return ___nl__im__2;
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
c_rt_lib0clear(&___nl__im__2);
#line 34
c_rt_lib0clear(&___nl__im__3);
#line 34
c_rt_lib0clear(&___nl__im__4);
#line 34
//clear ___nl__int__5;
#line 34
//clear ___nl__int__6;
#line 34
//clear ___nl__int__7;
#line 34
//clear ___nl__int__8;
#line 34
//clear ___nl__int__9;
#line 34
//clear ___nl__int__10;
#line 34
//clear ___nl__int__11;
#line 34
return NULL;
}

ImmT  csv_priv0end(ImmT * ___ref___im__0,ImmT * ___ref___im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__2);
csv_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 38
c_rt_lib0copy(&___nl__im__3, ___nl__im__2);
#line 38
c_rt_lib0delete(array0push(___ref___im__1, ___nl__im__3));
#line 38
c_rt_lib0clear(&___nl__im__3);
#line 39
c_rt_lib0copy(&___nl__im__4, (*___ref___im__1));
#line 39
c_rt_lib0delete(array0push(___ref___im__0, ___nl__im__4));
#line 39
c_rt_lib0clear(&___nl__im__4);
#line 40
c_rt_lib0copy(&___nl__im__5, (*___ref___im__0));
#line 40
c_rt_lib0clear(&___nl__im__2);
#line 40
c_rt_lib0clear(&___nl__im__3);
#line 40
c_rt_lib0clear(&___nl__im__4);
#line 40
return ___nl__im__5;
#line 40
c_rt_lib0clear(&___nl__im__2);
#line 40
c_rt_lib0clear(&___nl__im__3);
#line 40
c_rt_lib0clear(&___nl__im__4);
#line 40
c_rt_lib0clear(&___nl__im__5);
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
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
bool  ___nl__bool__26 = false;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
bool  ___nl__bool__46 = false;
ImmT  ___nl__string__47 = NULL;
ImmT  ___nl__string__48 = NULL;
bool  ___nl__bool__49 = false;
INT  ___nl__int__50 = 0;
INT  ___nl__int__51 = 0;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
bool  ___nl__bool__56 = false;
ImmT  ___nl__string__57 = NULL;
ImmT  ___nl__string__58 = NULL;
bool  ___nl__bool__59 = false;
INT  ___nl__int__60 = 0;
INT  ___nl__int__61 = 0;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
bool  ___nl__bool__66 = false;
ImmT  ___nl__string__67 = NULL;
ImmT  ___nl__string__68 = NULL;
ImmT  ___nl__string__69 = NULL;
ImmT  ___nl__string__70 = NULL;
ImmT  ___nl__string__71 = NULL;
INT  ___nl__int__72 = 0;
ImmT  ___nl__im__73 = NULL;
bool  ___nl__bool__74 = false;
bool  ___nl__bool__75 = false;
bool  ___nl__bool__76 = false;
INT  ___nl__int__77 = 0;
INT  ___nl__int__78 = 0;
INT  ___nl__int__79 = 0;
INT  ___nl__int__80 = 0;
INT  ___nl__int__81 = 0;
ImmT  ___nl__string__82 = NULL;
ImmT  ___nl__string__83 = NULL;
ImmT  ___nl__string__84 = NULL;
bool  ___nl__bool__85 = false;
INT  ___nl__int__86 = 0;
INT  ___nl__int__87 = 0;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
INT  ___nl__int__94 = 0;
ImmT  ___nl__im__95 = NULL;
bool  ___nl__bool__96 = false;
INT  ___nl__int__97 = 0;
bool  ___nl__bool__98 = false;
INT  ___nl__int__99 = 0;
INT  ___nl__int__100 = 0;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
bool  ___nl__bool__103 = false;
INT  ___nl__int__104 = 0;
INT  ___nl__int__105 = 0;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
#line 44
c_rt_lib0move(&___nl__im__1,___get_global_const(286));
#line 45
c_rt_lib0move(&___nl__im__2, string0tab());
#line 46
c_rt_lib0copy(&___nl__im__4, ___nl__im__2);
#line 46
___nl__int__3 = string0ord(___nl__im__4);
#line 46
c_rt_lib0clear(&___nl__im__4);
#line 47
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 48
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 49
c_rt_lib0copy(&___nl__im__8, ___nl__im__0);
#line 49
___nl__int__7 = string0length(___nl__im__8);
#line 49
c_rt_lib0clear(&___nl__im__8);
#line 50
___nl__int__10 = 0;
#line 50
___nl__int__11 = ___nl__int__7 == ___nl__int__10;
#line 50
___nl__bool__9 = ___nl__int__11;
#line 50
//clear ___nl__int__10;
#line 50
//clear ___nl__int__11;
#line 50
___nl__bool__9 = !___nl__bool__9;
#line 50
if(___nl__bool__9){ goto label_2;}
#line 50
c_rt_lib0copy(&___nl__im__12, ___nl__im__5);
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
c_rt_lib0clear(&___nl__im__6);
#line 50
//clear ___nl__int__7;
#line 50
c_rt_lib0clear(&___nl__im__8);
#line 50
//clear ___nl__bool__9;
#line 50
//clear ___nl__int__10;
#line 50
//clear ___nl__int__11;
#line 50
return ___nl__im__12;
#line 50
goto label_1;
#line 50
label_2:
#line 50
label_1:
#line 51
c_rt_lib0copy(&___nl__im__16, ___nl__im__0);
#line 51
___nl__int__18 = 1;
#line 51
___nl__int__17 = ___nl__int__7 - ___nl__int__18;
#line 51
//clear ___nl__int__18;
#line 51
___nl__int__19 = ___nl__int__17;
#line 51
___nl__int__20 = 1;
#line 51
___nl__int__21 = ___nl__int__20;
#line 51
c_rt_lib0move(&___nl__im__15, string0substr(___nl__im__16, ___nl__int__19, ___nl__int__21));
#line 51
c_rt_lib0clear(&___nl__im__16);
#line 51
//clear ___nl__int__17;
#line 51
//clear ___nl__int__18;
#line 51
//clear ___nl__int__19;
#line 51
//clear ___nl__int__20;
#line 51
//clear ___nl__int__21;
#line 51
c_rt_lib0copy(&___nl__im__22, ___nl__im__15);
#line 51
___nl__int__14 = string0ord(___nl__im__22);
#line 51
c_rt_lib0clear(&___nl__im__15);
#line 51
c_rt_lib0clear(&___nl__im__16);
#line 51
//clear ___nl__int__17;
#line 51
//clear ___nl__int__18;
#line 51
//clear ___nl__int__19;
#line 51
//clear ___nl__int__20;
#line 51
//clear ___nl__int__21;
#line 51
c_rt_lib0clear(&___nl__im__22);
#line 51
___nl__int__23 = 10;
#line 51
___nl__int__24 = ___nl__int__14 == ___nl__int__23;
#line 51
___nl__bool__13 = ___nl__int__24;
#line 51
//clear ___nl__int__14;
#line 51
c_rt_lib0clear(&___nl__im__15);
#line 51
c_rt_lib0clear(&___nl__im__16);
#line 51
//clear ___nl__int__17;
#line 51
//clear ___nl__int__18;
#line 51
//clear ___nl__int__19;
#line 51
//clear ___nl__int__20;
#line 51
//clear ___nl__int__21;
#line 51
c_rt_lib0clear(&___nl__im__22);
#line 51
//clear ___nl__int__23;
#line 51
//clear ___nl__int__24;
#line 51
___nl__bool__13 = !___nl__bool__13;
#line 51
if(___nl__bool__13){ goto label_4;}
#line 52
___nl__int__25 = 1;
#line 52
___nl__int__7 = ___nl__int__7 - ___nl__int__25;
#line 52
//clear ___nl__int__25;
#line 53
c_rt_lib0copy(&___nl__im__29, ___nl__im__0);
#line 53
___nl__int__31 = 1;
#line 53
___nl__int__30 = ___nl__int__7 - ___nl__int__31;
#line 53
//clear ___nl__int__31;
#line 53
___nl__int__32 = ___nl__int__30;
#line 53
___nl__int__33 = 1;
#line 53
___nl__int__34 = ___nl__int__33;
#line 53
c_rt_lib0move(&___nl__im__28, string0substr(___nl__im__29, ___nl__int__32, ___nl__int__34));
#line 53
c_rt_lib0clear(&___nl__im__29);
#line 53
//clear ___nl__int__30;
#line 53
//clear ___nl__int__31;
#line 53
//clear ___nl__int__32;
#line 53
//clear ___nl__int__33;
#line 53
//clear ___nl__int__34;
#line 53
c_rt_lib0copy(&___nl__im__35, ___nl__im__28);
#line 53
___nl__int__27 = string0ord(___nl__im__35);
#line 53
c_rt_lib0clear(&___nl__im__28);
#line 53
c_rt_lib0clear(&___nl__im__29);
#line 53
//clear ___nl__int__30;
#line 53
//clear ___nl__int__31;
#line 53
//clear ___nl__int__32;
#line 53
//clear ___nl__int__33;
#line 53
//clear ___nl__int__34;
#line 53
c_rt_lib0clear(&___nl__im__35);
#line 53
___nl__int__36 = 13;
#line 53
___nl__int__37 = ___nl__int__27 == ___nl__int__36;
#line 53
___nl__bool__26 = ___nl__int__37;
#line 53
//clear ___nl__int__27;
#line 53
c_rt_lib0clear(&___nl__im__28);
#line 53
c_rt_lib0clear(&___nl__im__29);
#line 53
//clear ___nl__int__30;
#line 53
//clear ___nl__int__31;
#line 53
//clear ___nl__int__32;
#line 53
//clear ___nl__int__33;
#line 53
//clear ___nl__int__34;
#line 53
c_rt_lib0clear(&___nl__im__35);
#line 53
//clear ___nl__int__36;
#line 53
//clear ___nl__int__37;
#line 53
___nl__bool__26 = !___nl__bool__26;
#line 53
if(___nl__bool__26){ goto label_6;}
#line 53
___nl__int__38 = 1;
#line 53
___nl__int__7 = ___nl__int__7 - ___nl__int__38;
#line 53
//clear ___nl__int__38;
#line 53
goto label_5;
#line 53
label_6:
#line 53
label_5:
#line 54
goto label_3;
#line 54
label_4:
#line 54
label_3:
#line 55
c_rt_lib0move(&___nl__im__39,___get_global_const(37));
#line 56
c_rt_lib0move(&___nl__im__40,___get_global_const(21));
#line 57
label_8:
#line 57
___nl__int__42 = getIntFromImm(___nl__im__40);
#line 57
___nl__int__43 = ___nl__int__42 < ___nl__int__7;
#line 57
___nl__bool__41 = ___nl__int__43;
#line 57
//clear ___nl__int__42;
#line 57
//clear ___nl__int__43;
#line 57
___nl__bool__41 = !___nl__bool__41;
#line 57
if(___nl__bool__41){ goto label_7;}
#line 58
c_rt_lib0copy(&___nl__im__45, ___nl__im__0);
#line 58
c_rt_lib0move(&___nl__im__44, csv_priv0get_char(___nl__im__45, &___nl__im__40));
#line 58
c_rt_lib0clear(&___nl__im__45);
#line 59
c_rt_lib0copy(&___nl__string__47, ___nl__im__44);
#line 59
c_rt_lib0copy(&___nl__string__48, ___nl__im__1);
#line 59
___nl__bool__46 = c_rt_lib0eq(___nl__string__47, ___nl__string__48);
#line 59
c_rt_lib0clear(&___nl__string__47);
#line 59
c_rt_lib0clear(&___nl__string__48);
#line 59
___nl__bool__46 = !___nl__bool__46;
#line 59
if(___nl__bool__46){ goto label_10;}
#line 60
label_12:
#line 61
___nl__int__50 = getIntFromImm(___nl__im__40);
#line 61
___nl__int__51 = ___nl__int__50 >= ___nl__int__7;
#line 61
___nl__bool__49 = ___nl__int__51;
#line 61
//clear ___nl__int__50;
#line 61
//clear ___nl__int__51;
#line 61
//clear ___nl__int__50;
#line 61
//clear ___nl__int__51;
#line 61
___nl__bool__49 = !___nl__bool__49;
#line 61
if(___nl__bool__49){ goto label_14;}
#line 61
c_rt_lib0copy(&___nl__im__54, ___nl__im__39);
#line 61
c_rt_lib0move(&___nl__im__53, csv_priv0end(&___nl__im__5, &___nl__im__6, ___nl__im__54));
#line 61
c_rt_lib0clear(&___nl__im__54);
#line 61
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
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
c_rt_lib0clear(&___nl__im__6);
#line 61
//clear ___nl__int__7;
#line 61
c_rt_lib0clear(&___nl__im__8);
#line 61
//clear ___nl__bool__9;
#line 61
//clear ___nl__int__10;
#line 61
//clear ___nl__int__11;
#line 61
c_rt_lib0clear(&___nl__im__12);
#line 61
//clear ___nl__bool__13;
#line 61
//clear ___nl__int__14;
#line 61
c_rt_lib0clear(&___nl__im__15);
#line 61
c_rt_lib0clear(&___nl__im__16);
#line 61
//clear ___nl__int__17;
#line 61
//clear ___nl__int__18;
#line 61
//clear ___nl__int__19;
#line 61
//clear ___nl__int__20;
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
//clear ___nl__bool__26;
#line 61
//clear ___nl__int__27;
#line 61
c_rt_lib0clear(&___nl__im__28);
#line 61
c_rt_lib0clear(&___nl__im__29);
#line 61
//clear ___nl__int__30;
#line 61
//clear ___nl__int__31;
#line 61
//clear ___nl__int__32;
#line 61
//clear ___nl__int__33;
#line 61
//clear ___nl__int__34;
#line 61
c_rt_lib0clear(&___nl__im__35);
#line 61
//clear ___nl__int__36;
#line 61
//clear ___nl__int__37;
#line 61
//clear ___nl__int__38;
#line 61
c_rt_lib0clear(&___nl__im__39);
#line 61
c_rt_lib0clear(&___nl__im__40);
#line 61
//clear ___nl__bool__41;
#line 61
//clear ___nl__int__42;
#line 61
//clear ___nl__int__43;
#line 61
c_rt_lib0clear(&___nl__im__44);
#line 61
c_rt_lib0clear(&___nl__im__45);
#line 61
//clear ___nl__bool__46;
#line 61
c_rt_lib0clear(&___nl__string__47);
#line 61
c_rt_lib0clear(&___nl__string__48);
#line 61
//clear ___nl__bool__49;
#line 61
//clear ___nl__int__50;
#line 61
//clear ___nl__int__51;
#line 61
c_rt_lib0clear(&___nl__im__53);
#line 61
c_rt_lib0clear(&___nl__im__54);
#line 61
return ___nl__im__52;
#line 61
goto label_13;
#line 61
label_14:
#line 61
label_13:
#line 62
c_rt_lib0copy(&___nl__im__55, ___nl__im__0);
#line 62
c_rt_lib0move(&___nl__im__44, csv_priv0get_char(___nl__im__55, &___nl__im__40));
#line 62
c_rt_lib0clear(&___nl__im__55);
#line 62
c_rt_lib0clear(&___nl__im__55);
#line 63
c_rt_lib0copy(&___nl__string__57, ___nl__im__44);
#line 63
c_rt_lib0copy(&___nl__string__58, ___nl__im__1);
#line 63
___nl__bool__56 = c_rt_lib0eq(___nl__string__57, ___nl__string__58);
#line 63
c_rt_lib0clear(&___nl__string__57);
#line 63
c_rt_lib0clear(&___nl__string__58);
#line 63
___nl__bool__56 = !___nl__bool__56;
#line 63
if(___nl__bool__56){ goto label_16;}
#line 64
___nl__int__60 = getIntFromImm(___nl__im__40);
#line 64
___nl__int__61 = ___nl__int__60 >= ___nl__int__7;
#line 64
___nl__bool__59 = ___nl__int__61;
#line 64
//clear ___nl__int__60;
#line 64
//clear ___nl__int__61;
#line 64
//clear ___nl__int__60;
#line 64
//clear ___nl__int__61;
#line 64
___nl__bool__59 = !___nl__bool__59;
#line 64
if(___nl__bool__59){ goto label_18;}
#line 64
c_rt_lib0copy(&___nl__im__64, ___nl__im__39);
#line 64
c_rt_lib0move(&___nl__im__63, csv_priv0end(&___nl__im__5, &___nl__im__6, ___nl__im__64));
#line 64
c_rt_lib0clear(&___nl__im__64);
#line 64
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
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
c_rt_lib0clear(&___nl__im__6);
#line 64
//clear ___nl__int__7;
#line 64
c_rt_lib0clear(&___nl__im__8);
#line 64
//clear ___nl__bool__9;
#line 64
//clear ___nl__int__10;
#line 64
//clear ___nl__int__11;
#line 64
c_rt_lib0clear(&___nl__im__12);
#line 64
//clear ___nl__bool__13;
#line 64
//clear ___nl__int__14;
#line 64
c_rt_lib0clear(&___nl__im__15);
#line 64
c_rt_lib0clear(&___nl__im__16);
#line 64
//clear ___nl__int__17;
#line 64
//clear ___nl__int__18;
#line 64
//clear ___nl__int__19;
#line 64
//clear ___nl__int__20;
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
//clear ___nl__bool__26;
#line 64
//clear ___nl__int__27;
#line 64
c_rt_lib0clear(&___nl__im__28);
#line 64
c_rt_lib0clear(&___nl__im__29);
#line 64
//clear ___nl__int__30;
#line 64
//clear ___nl__int__31;
#line 64
//clear ___nl__int__32;
#line 64
//clear ___nl__int__33;
#line 64
//clear ___nl__int__34;
#line 64
c_rt_lib0clear(&___nl__im__35);
#line 64
//clear ___nl__int__36;
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
//clear ___nl__int__42;
#line 64
//clear ___nl__int__43;
#line 64
c_rt_lib0clear(&___nl__im__44);
#line 64
c_rt_lib0clear(&___nl__im__45);
#line 64
//clear ___nl__bool__46;
#line 64
c_rt_lib0clear(&___nl__string__47);
#line 64
c_rt_lib0clear(&___nl__string__48);
#line 64
//clear ___nl__bool__49;
#line 64
//clear ___nl__int__50;
#line 64
//clear ___nl__int__51;
#line 64
c_rt_lib0clear(&___nl__im__52);
#line 64
c_rt_lib0clear(&___nl__im__53);
#line 64
c_rt_lib0clear(&___nl__im__54);
#line 64
c_rt_lib0clear(&___nl__im__55);
#line 64
//clear ___nl__bool__56;
#line 64
c_rt_lib0clear(&___nl__string__57);
#line 64
c_rt_lib0clear(&___nl__string__58);
#line 64
//clear ___nl__bool__59;
#line 64
//clear ___nl__int__60;
#line 64
//clear ___nl__int__61;
#line 64
c_rt_lib0clear(&___nl__im__63);
#line 64
c_rt_lib0clear(&___nl__im__64);
#line 64
return ___nl__im__62;
#line 64
goto label_17;
#line 64
label_18:
#line 64
label_17:
#line 65
c_rt_lib0copy(&___nl__im__65, ___nl__im__0);
#line 65
c_rt_lib0move(&___nl__im__44, csv_priv0get_char(___nl__im__65, &___nl__im__40));
#line 65
c_rt_lib0clear(&___nl__im__65);
#line 65
c_rt_lib0clear(&___nl__im__65);
#line 66
c_rt_lib0copy(&___nl__string__67, ___nl__im__44);
#line 66
c_rt_lib0copy(&___nl__string__68, ___nl__im__1);
#line 66
___nl__bool__66 = c_rt_lib0ne(___nl__string__67, ___nl__string__68);
#line 66
c_rt_lib0clear(&___nl__string__67);
#line 66
c_rt_lib0clear(&___nl__string__68);
#line 66
c_rt_lib0clear(&___nl__string__67);
#line 66
c_rt_lib0clear(&___nl__string__68);
#line 66
___nl__bool__66 = !___nl__bool__66;
#line 66
if(___nl__bool__66){ goto label_20;}
#line 66
goto label_11;
#line 66
goto label_19;
#line 66
label_20:
#line 66
label_19:
#line 67
goto label_15;
#line 67
label_16:
#line 67
label_15:
#line 68
c_rt_lib0copy(&___nl__string__69, ___nl__im__39);
#line 68
c_rt_lib0copy(&___nl__string__70, ___nl__im__44);
#line 68
c_rt_lib0move(&___nl__string__71, c_rt_lib0concat_new(___nl__string__69, ___nl__string__70));
#line 68
c_rt_lib0copy(&___nl__im__39, ___nl__string__71);
#line 68
c_rt_lib0clear(&___nl__string__69);
#line 68
c_rt_lib0clear(&___nl__string__70);
#line 68
c_rt_lib0clear(&___nl__string__71);
#line 60
goto label_12;
#line 60
label_11:
#line 70
goto label_9;
#line 70
label_10:
#line 71
c_rt_lib0copy(&___nl__im__73, ___nl__im__44);
#line 71
___nl__int__72 = string0ord(___nl__im__73);
#line 71
c_rt_lib0clear(&___nl__im__73);
#line 72
label_22:
#line 72
___nl__int__77 = ___nl__int__72 != ___nl__int__3;
#line 72
___nl__bool__74 = ___nl__int__77;
#line 72
//clear ___nl__int__77;
#line 72
___nl__bool__76 = !___nl__bool__74;
#line 72
if(___nl__bool__76){ goto label_24;}
#line 72
___nl__int__78 = 10;
#line 72
___nl__int__79 = ___nl__int__72 != ___nl__int__78;
#line 72
___nl__bool__74 = ___nl__int__79;
#line 72
//clear ___nl__int__78;
#line 72
//clear ___nl__int__79;
#line 72
label_24:
#line 72
//clear ___nl__bool__76;
#line 72
//clear ___nl__int__77;
#line 72
//clear ___nl__int__78;
#line 72
//clear ___nl__int__79;
#line 72
___nl__bool__75 = !___nl__bool__74;
#line 72
if(___nl__bool__75){ goto label_23;}
#line 72
___nl__int__80 = 13;
#line 72
___nl__int__81 = ___nl__int__72 != ___nl__int__80;
#line 72
___nl__bool__74 = ___nl__int__81;
#line 72
//clear ___nl__int__80;
#line 72
//clear ___nl__int__81;
#line 72
label_23:
#line 72
//clear ___nl__bool__75;
#line 72
//clear ___nl__bool__76;
#line 72
//clear ___nl__int__77;
#line 72
//clear ___nl__int__78;
#line 72
//clear ___nl__int__79;
#line 72
//clear ___nl__int__80;
#line 72
//clear ___nl__int__81;
#line 72
___nl__bool__74 = !___nl__bool__74;
#line 72
if(___nl__bool__74){ goto label_21;}
#line 73
c_rt_lib0copy(&___nl__string__82, ___nl__im__39);
#line 73
c_rt_lib0copy(&___nl__string__83, ___nl__im__44);
#line 73
c_rt_lib0move(&___nl__string__84, c_rt_lib0concat_new(___nl__string__82, ___nl__string__83));
#line 73
c_rt_lib0copy(&___nl__im__39, ___nl__string__84);
#line 73
c_rt_lib0clear(&___nl__string__82);
#line 73
c_rt_lib0clear(&___nl__string__83);
#line 73
c_rt_lib0clear(&___nl__string__84);
#line 74
___nl__int__86 = getIntFromImm(___nl__im__40);
#line 74
___nl__int__87 = ___nl__int__86 >= ___nl__int__7;
#line 74
___nl__bool__85 = ___nl__int__87;
#line 74
//clear ___nl__int__86;
#line 74
//clear ___nl__int__87;
#line 74
//clear ___nl__int__86;
#line 74
//clear ___nl__int__87;
#line 74
___nl__bool__85 = !___nl__bool__85;
#line 74
if(___nl__bool__85){ goto label_26;}
#line 74
c_rt_lib0copy(&___nl__im__90, ___nl__im__39);
#line 74
c_rt_lib0move(&___nl__im__89, csv_priv0end(&___nl__im__5, &___nl__im__6, ___nl__im__90));
#line 74
c_rt_lib0clear(&___nl__im__90);
#line 74
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
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
c_rt_lib0clear(&___nl__im__6);
#line 74
//clear ___nl__int__7;
#line 74
c_rt_lib0clear(&___nl__im__8);
#line 74
//clear ___nl__bool__9;
#line 74
//clear ___nl__int__10;
#line 74
//clear ___nl__int__11;
#line 74
c_rt_lib0clear(&___nl__im__12);
#line 74
//clear ___nl__bool__13;
#line 74
//clear ___nl__int__14;
#line 74
c_rt_lib0clear(&___nl__im__15);
#line 74
c_rt_lib0clear(&___nl__im__16);
#line 74
//clear ___nl__int__17;
#line 74
//clear ___nl__int__18;
#line 74
//clear ___nl__int__19;
#line 74
//clear ___nl__int__20;
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
//clear ___nl__bool__26;
#line 74
//clear ___nl__int__27;
#line 74
c_rt_lib0clear(&___nl__im__28);
#line 74
c_rt_lib0clear(&___nl__im__29);
#line 74
//clear ___nl__int__30;
#line 74
//clear ___nl__int__31;
#line 74
//clear ___nl__int__32;
#line 74
//clear ___nl__int__33;
#line 74
//clear ___nl__int__34;
#line 74
c_rt_lib0clear(&___nl__im__35);
#line 74
//clear ___nl__int__36;
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
//clear ___nl__int__42;
#line 74
//clear ___nl__int__43;
#line 74
c_rt_lib0clear(&___nl__im__44);
#line 74
c_rt_lib0clear(&___nl__im__45);
#line 74
//clear ___nl__bool__46;
#line 74
c_rt_lib0clear(&___nl__string__47);
#line 74
c_rt_lib0clear(&___nl__string__48);
#line 74
//clear ___nl__bool__49;
#line 74
//clear ___nl__int__50;
#line 74
//clear ___nl__int__51;
#line 74
c_rt_lib0clear(&___nl__im__52);
#line 74
c_rt_lib0clear(&___nl__im__53);
#line 74
c_rt_lib0clear(&___nl__im__54);
#line 74
c_rt_lib0clear(&___nl__im__55);
#line 74
//clear ___nl__bool__56;
#line 74
c_rt_lib0clear(&___nl__string__57);
#line 74
c_rt_lib0clear(&___nl__string__58);
#line 74
//clear ___nl__bool__59;
#line 74
//clear ___nl__int__60;
#line 74
//clear ___nl__int__61;
#line 74
c_rt_lib0clear(&___nl__im__62);
#line 74
c_rt_lib0clear(&___nl__im__63);
#line 74
c_rt_lib0clear(&___nl__im__64);
#line 74
c_rt_lib0clear(&___nl__im__65);
#line 74
//clear ___nl__bool__66;
#line 74
c_rt_lib0clear(&___nl__string__67);
#line 74
c_rt_lib0clear(&___nl__string__68);
#line 74
c_rt_lib0clear(&___nl__string__69);
#line 74
c_rt_lib0clear(&___nl__string__70);
#line 74
c_rt_lib0clear(&___nl__string__71);
#line 74
//clear ___nl__int__72;
#line 74
c_rt_lib0clear(&___nl__im__73);
#line 74
//clear ___nl__bool__74;
#line 74
//clear ___nl__bool__75;
#line 74
//clear ___nl__bool__76;
#line 74
//clear ___nl__int__77;
#line 74
//clear ___nl__int__78;
#line 74
//clear ___nl__int__79;
#line 74
//clear ___nl__int__80;
#line 74
//clear ___nl__int__81;
#line 74
c_rt_lib0clear(&___nl__string__82);
#line 74
c_rt_lib0clear(&___nl__string__83);
#line 74
c_rt_lib0clear(&___nl__string__84);
#line 74
//clear ___nl__bool__85;
#line 74
//clear ___nl__int__86;
#line 74
//clear ___nl__int__87;
#line 74
c_rt_lib0clear(&___nl__im__89);
#line 74
c_rt_lib0clear(&___nl__im__90);
#line 74
return ___nl__im__88;
#line 74
goto label_25;
#line 74
label_26:
#line 74
label_25:
#line 75
c_rt_lib0copy(&___nl__im__91, ___nl__im__0);
#line 75
c_rt_lib0move(&___nl__im__44, csv_priv0get_char(___nl__im__91, &___nl__im__40));
#line 75
c_rt_lib0clear(&___nl__im__91);
#line 75
c_rt_lib0clear(&___nl__im__91);
#line 76
c_rt_lib0copy(&___nl__im__92, ___nl__im__44);
#line 76
___nl__int__72 = string0ord(___nl__im__92);
#line 76
c_rt_lib0clear(&___nl__im__92);
#line 76
c_rt_lib0clear(&___nl__im__92);
#line 77
goto label_22;
#line 77
label_21:
#line 78
goto label_9;
#line 78
label_9:
#line 79
c_rt_lib0copy(&___nl__im__93, ___nl__im__39);
#line 79
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__93));
#line 79
c_rt_lib0clear(&___nl__im__93);
#line 80
c_rt_lib0move(&___nl__im__39,___get_global_const(37));
#line 81
c_rt_lib0copy(&___nl__im__95, ___nl__im__44);
#line 81
___nl__int__94 = string0ord(___nl__im__95);
#line 81
c_rt_lib0clear(&___nl__im__95);
#line 82
___nl__int__97 = ___nl__int__94 == ___nl__int__3;
#line 82
___nl__bool__96 = ___nl__int__97;
#line 82
//clear ___nl__int__97;
#line 82
//clear ___nl__int__97;
#line 82
___nl__bool__96 = !___nl__bool__96;
#line 82
if(___nl__bool__96){ goto label_28;}
#line 82
goto label_8;
#line 82
goto label_27;
#line 82
label_28:
#line 82
label_27:
#line 83
___nl__int__99 = 13;
#line 83
___nl__int__100 = ___nl__int__94 == ___nl__int__99;
#line 83
___nl__bool__98 = ___nl__int__100;
#line 83
//clear ___nl__int__99;
#line 83
//clear ___nl__int__100;
#line 83
___nl__bool__98 = !___nl__bool__98;
#line 83
if(___nl__bool__98){ goto label_30;}
#line 84
c_rt_lib0copy(&___nl__im__101, ___nl__im__0);
#line 84
c_rt_lib0move(&___nl__im__44, csv_priv0get_char(___nl__im__101, &___nl__im__40));
#line 84
c_rt_lib0clear(&___nl__im__101);
#line 84
c_rt_lib0clear(&___nl__im__101);
#line 85
c_rt_lib0copy(&___nl__im__102, ___nl__im__44);
#line 85
___nl__int__94 = string0ord(___nl__im__102);
#line 85
c_rt_lib0clear(&___nl__im__102);
#line 85
c_rt_lib0clear(&___nl__im__102);
#line 86
goto label_29;
#line 86
label_30:
#line 86
label_29:
#line 87
___nl__int__104 = 10;
#line 87
___nl__int__105 = ___nl__int__94 == ___nl__int__104;
#line 87
___nl__bool__103 = ___nl__int__105;
#line 87
//clear ___nl__int__104;
#line 87
//clear ___nl__int__105;
#line 87
___nl__bool__103 = !___nl__bool__103;
#line 87
if(___nl__bool__103){ goto label_32;}
#line 88
c_rt_lib0copy(&___nl__im__106, ___nl__im__6);
#line 88
c_rt_lib0delete(array0push(&___nl__im__5, ___nl__im__106));
#line 88
c_rt_lib0clear(&___nl__im__106);
#line 89
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 90
goto label_8;
#line 91
goto label_31;
#line 91
label_32:
#line 91
label_31:
#line 92
goto label_8;
#line 92
label_7:
#line 93
c_rt_lib0copy(&___nl__im__109, ___nl__im__39);
#line 93
c_rt_lib0move(&___nl__im__108, csv_priv0end(&___nl__im__5, &___nl__im__6, ___nl__im__109));
#line 93
c_rt_lib0clear(&___nl__im__109);
#line 93
c_rt_lib0copy(&___nl__im__107, ___nl__im__108);
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
c_rt_lib0clear(&___nl__im__6);
#line 93
//clear ___nl__int__7;
#line 93
c_rt_lib0clear(&___nl__im__8);
#line 93
//clear ___nl__bool__9;
#line 93
//clear ___nl__int__10;
#line 93
//clear ___nl__int__11;
#line 93
c_rt_lib0clear(&___nl__im__12);
#line 93
//clear ___nl__bool__13;
#line 93
//clear ___nl__int__14;
#line 93
c_rt_lib0clear(&___nl__im__15);
#line 93
c_rt_lib0clear(&___nl__im__16);
#line 93
//clear ___nl__int__17;
#line 93
//clear ___nl__int__18;
#line 93
//clear ___nl__int__19;
#line 93
//clear ___nl__int__20;
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
//clear ___nl__bool__26;
#line 93
//clear ___nl__int__27;
#line 93
c_rt_lib0clear(&___nl__im__28);
#line 93
c_rt_lib0clear(&___nl__im__29);
#line 93
//clear ___nl__int__30;
#line 93
//clear ___nl__int__31;
#line 93
//clear ___nl__int__32;
#line 93
//clear ___nl__int__33;
#line 93
//clear ___nl__int__34;
#line 93
c_rt_lib0clear(&___nl__im__35);
#line 93
//clear ___nl__int__36;
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
//clear ___nl__int__42;
#line 93
//clear ___nl__int__43;
#line 93
c_rt_lib0clear(&___nl__im__44);
#line 93
c_rt_lib0clear(&___nl__im__45);
#line 93
//clear ___nl__bool__46;
#line 93
c_rt_lib0clear(&___nl__string__47);
#line 93
c_rt_lib0clear(&___nl__string__48);
#line 93
//clear ___nl__bool__49;
#line 93
//clear ___nl__int__50;
#line 93
//clear ___nl__int__51;
#line 93
c_rt_lib0clear(&___nl__im__52);
#line 93
c_rt_lib0clear(&___nl__im__53);
#line 93
c_rt_lib0clear(&___nl__im__54);
#line 93
c_rt_lib0clear(&___nl__im__55);
#line 93
//clear ___nl__bool__56;
#line 93
c_rt_lib0clear(&___nl__string__57);
#line 93
c_rt_lib0clear(&___nl__string__58);
#line 93
//clear ___nl__bool__59;
#line 93
//clear ___nl__int__60;
#line 93
//clear ___nl__int__61;
#line 93
c_rt_lib0clear(&___nl__im__62);
#line 93
c_rt_lib0clear(&___nl__im__63);
#line 93
c_rt_lib0clear(&___nl__im__64);
#line 93
c_rt_lib0clear(&___nl__im__65);
#line 93
//clear ___nl__bool__66;
#line 93
c_rt_lib0clear(&___nl__string__67);
#line 93
c_rt_lib0clear(&___nl__string__68);
#line 93
c_rt_lib0clear(&___nl__string__69);
#line 93
c_rt_lib0clear(&___nl__string__70);
#line 93
c_rt_lib0clear(&___nl__string__71);
#line 93
//clear ___nl__int__72;
#line 93
c_rt_lib0clear(&___nl__im__73);
#line 93
//clear ___nl__bool__74;
#line 93
//clear ___nl__bool__75;
#line 93
//clear ___nl__bool__76;
#line 93
//clear ___nl__int__77;
#line 93
//clear ___nl__int__78;
#line 93
//clear ___nl__int__79;
#line 93
//clear ___nl__int__80;
#line 93
//clear ___nl__int__81;
#line 93
c_rt_lib0clear(&___nl__string__82);
#line 93
c_rt_lib0clear(&___nl__string__83);
#line 93
c_rt_lib0clear(&___nl__string__84);
#line 93
//clear ___nl__bool__85;
#line 93
//clear ___nl__int__86;
#line 93
//clear ___nl__int__87;
#line 93
c_rt_lib0clear(&___nl__im__88);
#line 93
c_rt_lib0clear(&___nl__im__89);
#line 93
c_rt_lib0clear(&___nl__im__90);
#line 93
c_rt_lib0clear(&___nl__im__91);
#line 93
c_rt_lib0clear(&___nl__im__92);
#line 93
c_rt_lib0clear(&___nl__im__93);
#line 93
//clear ___nl__int__94;
#line 93
c_rt_lib0clear(&___nl__im__95);
#line 93
//clear ___nl__bool__96;
#line 93
//clear ___nl__int__97;
#line 93
//clear ___nl__bool__98;
#line 93
//clear ___nl__int__99;
#line 93
//clear ___nl__int__100;
#line 93
c_rt_lib0clear(&___nl__im__101);
#line 93
c_rt_lib0clear(&___nl__im__102);
#line 93
//clear ___nl__bool__103;
#line 93
//clear ___nl__int__104;
#line 93
//clear ___nl__int__105;
#line 93
c_rt_lib0clear(&___nl__im__106);
#line 93
c_rt_lib0clear(&___nl__im__108);
#line 93
c_rt_lib0clear(&___nl__im__109);
#line 93
return ___nl__im__107;
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
c_rt_lib0clear(&___nl__im__6);
#line 93
//clear ___nl__int__7;
#line 93
c_rt_lib0clear(&___nl__im__8);
#line 93
//clear ___nl__bool__9;
#line 93
//clear ___nl__int__10;
#line 93
//clear ___nl__int__11;
#line 93
c_rt_lib0clear(&___nl__im__12);
#line 93
//clear ___nl__bool__13;
#line 93
//clear ___nl__int__14;
#line 93
c_rt_lib0clear(&___nl__im__15);
#line 93
c_rt_lib0clear(&___nl__im__16);
#line 93
//clear ___nl__int__17;
#line 93
//clear ___nl__int__18;
#line 93
//clear ___nl__int__19;
#line 93
//clear ___nl__int__20;
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
//clear ___nl__bool__26;
#line 93
//clear ___nl__int__27;
#line 93
c_rt_lib0clear(&___nl__im__28);
#line 93
c_rt_lib0clear(&___nl__im__29);
#line 93
//clear ___nl__int__30;
#line 93
//clear ___nl__int__31;
#line 93
//clear ___nl__int__32;
#line 93
//clear ___nl__int__33;
#line 93
//clear ___nl__int__34;
#line 93
c_rt_lib0clear(&___nl__im__35);
#line 93
//clear ___nl__int__36;
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
//clear ___nl__int__42;
#line 93
//clear ___nl__int__43;
#line 93
c_rt_lib0clear(&___nl__im__44);
#line 93
c_rt_lib0clear(&___nl__im__45);
#line 93
//clear ___nl__bool__46;
#line 93
c_rt_lib0clear(&___nl__string__47);
#line 93
c_rt_lib0clear(&___nl__string__48);
#line 93
//clear ___nl__bool__49;
#line 93
//clear ___nl__int__50;
#line 93
//clear ___nl__int__51;
#line 93
c_rt_lib0clear(&___nl__im__52);
#line 93
c_rt_lib0clear(&___nl__im__53);
#line 93
c_rt_lib0clear(&___nl__im__54);
#line 93
c_rt_lib0clear(&___nl__im__55);
#line 93
//clear ___nl__bool__56;
#line 93
c_rt_lib0clear(&___nl__string__57);
#line 93
c_rt_lib0clear(&___nl__string__58);
#line 93
//clear ___nl__bool__59;
#line 93
//clear ___nl__int__60;
#line 93
//clear ___nl__int__61;
#line 93
c_rt_lib0clear(&___nl__im__62);
#line 93
c_rt_lib0clear(&___nl__im__63);
#line 93
c_rt_lib0clear(&___nl__im__64);
#line 93
c_rt_lib0clear(&___nl__im__65);
#line 93
//clear ___nl__bool__66;
#line 93
c_rt_lib0clear(&___nl__string__67);
#line 93
c_rt_lib0clear(&___nl__string__68);
#line 93
c_rt_lib0clear(&___nl__string__69);
#line 93
c_rt_lib0clear(&___nl__string__70);
#line 93
c_rt_lib0clear(&___nl__string__71);
#line 93
//clear ___nl__int__72;
#line 93
c_rt_lib0clear(&___nl__im__73);
#line 93
//clear ___nl__bool__74;
#line 93
//clear ___nl__bool__75;
#line 93
//clear ___nl__bool__76;
#line 93
//clear ___nl__int__77;
#line 93
//clear ___nl__int__78;
#line 93
//clear ___nl__int__79;
#line 93
//clear ___nl__int__80;
#line 93
//clear ___nl__int__81;
#line 93
c_rt_lib0clear(&___nl__string__82);
#line 93
c_rt_lib0clear(&___nl__string__83);
#line 93
c_rt_lib0clear(&___nl__string__84);
#line 93
//clear ___nl__bool__85;
#line 93
//clear ___nl__int__86;
#line 93
//clear ___nl__int__87;
#line 93
c_rt_lib0clear(&___nl__im__88);
#line 93
c_rt_lib0clear(&___nl__im__89);
#line 93
c_rt_lib0clear(&___nl__im__90);
#line 93
c_rt_lib0clear(&___nl__im__91);
#line 93
c_rt_lib0clear(&___nl__im__92);
#line 93
c_rt_lib0clear(&___nl__im__93);
#line 93
//clear ___nl__int__94;
#line 93
c_rt_lib0clear(&___nl__im__95);
#line 93
//clear ___nl__bool__96;
#line 93
//clear ___nl__int__97;
#line 93
//clear ___nl__bool__98;
#line 93
//clear ___nl__int__99;
#line 93
//clear ___nl__int__100;
#line 93
c_rt_lib0clear(&___nl__im__101);
#line 93
c_rt_lib0clear(&___nl__im__102);
#line 93
//clear ___nl__bool__103;
#line 93
//clear ___nl__int__104;
#line 93
//clear ___nl__int__105;
#line 93
c_rt_lib0clear(&___nl__im__106);
#line 93
c_rt_lib0clear(&___nl__im__107);
#line 93
c_rt_lib0clear(&___nl__im__108);
#line 93
c_rt_lib0clear(&___nl__im__109);
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
