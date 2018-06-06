
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "string_compiler.h"
#include "nlasm.h"
#include "translator.h"
#include "nparser.h"
#include "module_checker.h"
#include "type_checker.h"
#include "array.h"
#include "hash.h"
#include "generator_js.h"
#include "post_processing.h"
#include "ptd.h"
#include "pretty_printer.h"
#include "nast.h"
#include "compiler_lib.h"
#include "compiler_lib.h"
#line 1 "string_compiler.nl"

static ImmT *__const__f = NULL;
void string_compiler_priv0__const__init();
ImmT string_compiler_priv0__const__sim(int __nr);
ImmT string_compiler_priv0__const__sing(int __nr);



ImmT  string_compiler0compile0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_compiler0compile");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string_compiler0compile(var0, var1);
}
ImmT  string_compiler0compile(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_compiler_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
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
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
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
#line 24
c_rt_lib0copy(&___nl__im__3, ___nl__im__0);
#line 24
c_rt_lib0copy(&___nl__im__4, ___nl__im__1);
#line 24
c_rt_lib0move(&___nl__im__2, nparser0sparse(___nl__im__3, ___nl__im__4));
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 24
c_rt_lib0clear(&___nl__im__4);
#line 25
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(81));
#line 25
if(___nl__bool__5){ goto label_2;}
#line 38
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(140));
#line 38
if(___nl__bool__5){ goto label_3;}
#line 38
c_rt_lib0move(&___nl__im__6,___get_global_const(16));
#line 38
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__2));
#line 38
nl_die_arg(___nl__im__6);
#line 25
label_2:
#line 25
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(81)));
#line 25
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 26
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 27
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(0));
#line 28
c_rt_lib0copy(&___nl__im__12, ___nl__im__7);
#line 28
___nl__bool__13 = false;
#line 28
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 28
c_rt_lib0move(&___nl__im__11, module_checker0check_module(___nl__im__12, ___nl__im__14, &___nl__im__10));
#line 28
c_rt_lib0clear(&___nl__im__12);
#line 28
//clear ___nl__bool__13;
#line 28
c_rt_lib0clear(&___nl__im__14);
#line 29
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(51)));
#line 30
c_rt_lib0copy(&___nl__im__17, ___nl__im__9);
#line 30
___nl__int__16 = c_rt_lib0array_len(___nl__im__17);
#line 30
c_rt_lib0clear(&___nl__im__17);
#line 30
___nl__int__18 = 0;
#line 30
___nl__int__19 = ___nl__int__16 == ___nl__int__18;
#line 30
___nl__bool__15 = ___nl__int__19;
#line 30
//clear ___nl__int__16;
#line 30
c_rt_lib0clear(&___nl__im__17);
#line 30
//clear ___nl__int__18;
#line 30
//clear ___nl__int__19;
#line 30
___nl__bool__15 = !___nl__bool__15;
#line 30
if(___nl__bool__15){ goto label_5;}
#line 31
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(0));
#line 32
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(121)));
#line 32
c_rt_lib0copy(&___nl__im__22, ___nl__im__21);
#line 32
c_rt_lib0copy(&___nl__im__23, ___nl__im__7);
#line 32
c_rt_lib0delete(hash0set_value(&___nl__im__20, ___nl__im__22, ___nl__im__23));
#line 32
c_rt_lib0clear(&___nl__im__21);
#line 32
c_rt_lib0clear(&___nl__im__22);
#line 32
c_rt_lib0clear(&___nl__im__23);
#line 33
c_rt_lib0copy(&___nl__im__25, ___nl__im__20);
#line 33
c_rt_lib0move(&___nl__im__24, type_checker0check_modules(&___nl__im__20, ___nl__im__25));
#line 33
c_rt_lib0clear(&___nl__im__25);
#line 34
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_const(51)));
#line 35
goto label_4;
#line 35
label_5:
#line 35
label_4:
#line 36
c_rt_lib0copy(&___nl__im__28, ___nl__im__9);
#line 36
___nl__int__27 = c_rt_lib0array_len(___nl__im__28);
#line 36
c_rt_lib0clear(&___nl__im__28);
#line 36
___nl__int__29 = 0;
#line 36
___nl__int__30 = ___nl__int__27 == ___nl__int__29;
#line 36
___nl__bool__26 = ___nl__int__30;
#line 36
//clear ___nl__int__27;
#line 36
c_rt_lib0clear(&___nl__im__28);
#line 36
//clear ___nl__int__29;
#line 36
//clear ___nl__int__30;
#line 36
___nl__bool__26 = !___nl__bool__26;
#line 36
if(___nl__bool__26){ goto label_7;}
#line 36
c_rt_lib0copy(&___nl__im__34, ___nl__im__7);
#line 36
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(0));
#line 36
c_rt_lib0copy(&___nl__im__36, ___nl__im__35);
#line 36
c_rt_lib0move(&___nl__im__33, translator0translate(___nl__im__34, ___nl__im__36));
#line 36
c_rt_lib0clear(&___nl__im__34);
#line 36
c_rt_lib0clear(&___nl__im__35);
#line 36
c_rt_lib0clear(&___nl__im__36);
#line 36
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_const(81), ___nl__im__33));
#line 36
c_rt_lib0clear(&___nl__im__33);
#line 36
c_rt_lib0clear(&___nl__im__34);
#line 36
c_rt_lib0clear(&___nl__im__35);
#line 36
c_rt_lib0clear(&___nl__im__36);
#line 36
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
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
//clear ___nl__bool__5;
#line 36
c_rt_lib0clear(&___nl__im__6);
#line 36
c_rt_lib0clear(&___nl__im__7);
#line 36
c_rt_lib0clear(&___nl__im__8);
#line 36
c_rt_lib0clear(&___nl__im__9);
#line 36
c_rt_lib0clear(&___nl__im__10);
#line 36
c_rt_lib0clear(&___nl__im__11);
#line 36
c_rt_lib0clear(&___nl__im__12);
#line 36
//clear ___nl__bool__13;
#line 36
c_rt_lib0clear(&___nl__im__14);
#line 36
//clear ___nl__bool__15;
#line 36
//clear ___nl__int__16;
#line 36
c_rt_lib0clear(&___nl__im__17);
#line 36
//clear ___nl__int__18;
#line 36
//clear ___nl__int__19;
#line 36
c_rt_lib0clear(&___nl__im__20);
#line 36
c_rt_lib0clear(&___nl__im__21);
#line 36
c_rt_lib0clear(&___nl__im__22);
#line 36
c_rt_lib0clear(&___nl__im__23);
#line 36
c_rt_lib0clear(&___nl__im__24);
#line 36
c_rt_lib0clear(&___nl__im__25);
#line 36
//clear ___nl__bool__26;
#line 36
//clear ___nl__int__27;
#line 36
c_rt_lib0clear(&___nl__im__28);
#line 36
//clear ___nl__int__29;
#line 36
//clear ___nl__int__30;
#line 36
c_rt_lib0clear(&___nl__im__32);
#line 36
c_rt_lib0clear(&___nl__im__33);
#line 36
c_rt_lib0clear(&___nl__im__34);
#line 36
c_rt_lib0clear(&___nl__im__35);
#line 36
c_rt_lib0clear(&___nl__im__36);
#line 36
return ___nl__im__31;
#line 36
goto label_6;
#line 36
label_7:
#line 36
label_6:
#line 37
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__9));
#line 37
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 37
c_rt_lib0clear(&___nl__im__0);
#line 37
c_rt_lib0clear(&___nl__im__1);
#line 37
c_rt_lib0clear(&___nl__im__2);
#line 37
c_rt_lib0clear(&___nl__im__3);
#line 37
c_rt_lib0clear(&___nl__im__4);
#line 37
//clear ___nl__bool__5;
#line 37
c_rt_lib0clear(&___nl__im__6);
#line 37
c_rt_lib0clear(&___nl__im__7);
#line 37
c_rt_lib0clear(&___nl__im__8);
#line 37
c_rt_lib0clear(&___nl__im__9);
#line 37
c_rt_lib0clear(&___nl__im__10);
#line 37
c_rt_lib0clear(&___nl__im__11);
#line 37
c_rt_lib0clear(&___nl__im__12);
#line 37
//clear ___nl__bool__13;
#line 37
c_rt_lib0clear(&___nl__im__14);
#line 37
//clear ___nl__bool__15;
#line 37
//clear ___nl__int__16;
#line 37
c_rt_lib0clear(&___nl__im__17);
#line 37
//clear ___nl__int__18;
#line 37
//clear ___nl__int__19;
#line 37
c_rt_lib0clear(&___nl__im__20);
#line 37
c_rt_lib0clear(&___nl__im__21);
#line 37
c_rt_lib0clear(&___nl__im__22);
#line 37
c_rt_lib0clear(&___nl__im__23);
#line 37
c_rt_lib0clear(&___nl__im__24);
#line 37
c_rt_lib0clear(&___nl__im__25);
#line 37
//clear ___nl__bool__26;
#line 37
//clear ___nl__int__27;
#line 37
c_rt_lib0clear(&___nl__im__28);
#line 37
//clear ___nl__int__29;
#line 37
//clear ___nl__int__30;
#line 37
c_rt_lib0clear(&___nl__im__31);
#line 37
c_rt_lib0clear(&___nl__im__32);
#line 37
c_rt_lib0clear(&___nl__im__33);
#line 37
c_rt_lib0clear(&___nl__im__34);
#line 37
c_rt_lib0clear(&___nl__im__35);
#line 37
c_rt_lib0clear(&___nl__im__36);
#line 37
c_rt_lib0clear(&___nl__im__38);
#line 37
return ___nl__im__37;
#line 38
goto label_1;
#line 38
label_3:
#line 38
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__2, ___get_global_const(140)));
#line 38
c_rt_lib0copy(&___nl__im__39, ___nl__im__40);
#line 39
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__39));
#line 39
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 39
c_rt_lib0clear(&___nl__im__0);
#line 39
c_rt_lib0clear(&___nl__im__1);
#line 39
c_rt_lib0clear(&___nl__im__2);
#line 39
c_rt_lib0clear(&___nl__im__3);
#line 39
c_rt_lib0clear(&___nl__im__4);
#line 39
//clear ___nl__bool__5;
#line 39
c_rt_lib0clear(&___nl__im__6);
#line 39
c_rt_lib0clear(&___nl__im__7);
#line 39
c_rt_lib0clear(&___nl__im__8);
#line 39
c_rt_lib0clear(&___nl__im__9);
#line 39
c_rt_lib0clear(&___nl__im__10);
#line 39
c_rt_lib0clear(&___nl__im__11);
#line 39
c_rt_lib0clear(&___nl__im__12);
#line 39
//clear ___nl__bool__13;
#line 39
c_rt_lib0clear(&___nl__im__14);
#line 39
//clear ___nl__bool__15;
#line 39
//clear ___nl__int__16;
#line 39
c_rt_lib0clear(&___nl__im__17);
#line 39
//clear ___nl__int__18;
#line 39
//clear ___nl__int__19;
#line 39
c_rt_lib0clear(&___nl__im__20);
#line 39
c_rt_lib0clear(&___nl__im__21);
#line 39
c_rt_lib0clear(&___nl__im__22);
#line 39
c_rt_lib0clear(&___nl__im__23);
#line 39
c_rt_lib0clear(&___nl__im__24);
#line 39
c_rt_lib0clear(&___nl__im__25);
#line 39
//clear ___nl__bool__26;
#line 39
//clear ___nl__int__27;
#line 39
c_rt_lib0clear(&___nl__im__28);
#line 39
//clear ___nl__int__29;
#line 39
//clear ___nl__int__30;
#line 39
c_rt_lib0clear(&___nl__im__31);
#line 39
c_rt_lib0clear(&___nl__im__32);
#line 39
c_rt_lib0clear(&___nl__im__33);
#line 39
c_rt_lib0clear(&___nl__im__34);
#line 39
c_rt_lib0clear(&___nl__im__35);
#line 39
c_rt_lib0clear(&___nl__im__36);
#line 39
c_rt_lib0clear(&___nl__im__37);
#line 39
c_rt_lib0clear(&___nl__im__38);
#line 39
c_rt_lib0clear(&___nl__im__39);
#line 39
c_rt_lib0clear(&___nl__im__40);
#line 39
c_rt_lib0clear(&___nl__im__42);
#line 39
return ___nl__im__41;
#line 40
goto label_1;
#line 40
label_1:
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
//clear ___nl__bool__5;
#line 40
c_rt_lib0clear(&___nl__im__6);
#line 40
c_rt_lib0clear(&___nl__im__7);
#line 40
c_rt_lib0clear(&___nl__im__8);
#line 40
c_rt_lib0clear(&___nl__im__9);
#line 40
c_rt_lib0clear(&___nl__im__10);
#line 40
c_rt_lib0clear(&___nl__im__11);
#line 40
c_rt_lib0clear(&___nl__im__12);
#line 40
//clear ___nl__bool__13;
#line 40
c_rt_lib0clear(&___nl__im__14);
#line 40
//clear ___nl__bool__15;
#line 40
//clear ___nl__int__16;
#line 40
c_rt_lib0clear(&___nl__im__17);
#line 40
//clear ___nl__int__18;
#line 40
//clear ___nl__int__19;
#line 40
c_rt_lib0clear(&___nl__im__20);
#line 40
c_rt_lib0clear(&___nl__im__21);
#line 40
c_rt_lib0clear(&___nl__im__22);
#line 40
c_rt_lib0clear(&___nl__im__23);
#line 40
c_rt_lib0clear(&___nl__im__24);
#line 40
c_rt_lib0clear(&___nl__im__25);
#line 40
//clear ___nl__bool__26;
#line 40
//clear ___nl__int__27;
#line 40
c_rt_lib0clear(&___nl__im__28);
#line 40
//clear ___nl__int__29;
#line 40
//clear ___nl__int__30;
#line 40
c_rt_lib0clear(&___nl__im__31);
#line 40
c_rt_lib0clear(&___nl__im__32);
#line 40
c_rt_lib0clear(&___nl__im__33);
#line 40
c_rt_lib0clear(&___nl__im__34);
#line 40
c_rt_lib0clear(&___nl__im__35);
#line 40
c_rt_lib0clear(&___nl__im__36);
#line 40
c_rt_lib0clear(&___nl__im__37);
#line 40
c_rt_lib0clear(&___nl__im__38);
#line 40
c_rt_lib0clear(&___nl__im__39);
#line 40
c_rt_lib0clear(&___nl__im__40);
#line 40
c_rt_lib0clear(&___nl__im__41);
#line 40
c_rt_lib0clear(&___nl__im__42);
#line 40
return NULL;
}

ImmT  string_compiler0modules_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0modules_t");
return string_compiler0modules_t();
}
ImmT  string_compiler0modules_t() {
string_compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 44
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 44
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 44
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(1335), ___nl__im__4, ___get_global_const(222), ___nl__im__5));
#line 44
c_rt_lib0clear(&___nl__im__4);
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0copy(&___nl__im__6, ___nl__im__3);
#line 44
c_rt_lib0move(&___nl__im__2, ptd0rec(___nl__im__6));
#line 44
c_rt_lib0clear(&___nl__im__3);
#line 44
c_rt_lib0clear(&___nl__im__4);
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0clear(&___nl__im__6);
#line 44
c_rt_lib0copy(&___nl__im__7, ___nl__im__2);
#line 44
c_rt_lib0move(&___nl__im__1, ptd0hash(___nl__im__7));
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
c_rt_lib0clear(&___nl__im__7);
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
c_rt_lib0clear(&___nl__im__7);
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
c_rt_lib0clear(&___nl__im__7);
#line 44
return NULL;
}

ImmT  string_compiler0type_check_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0type_check_t");
return string_compiler0type_check_t();
}
ImmT  string_compiler0type_check_t() {
string_compiler_priv0__const__init();
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
#line 48
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 48
c_rt_lib0copy(&___nl__im__6, ___nl__im__5);
#line 48
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__6));
#line 48
c_rt_lib0clear(&___nl__im__5);
#line 48
c_rt_lib0clear(&___nl__im__6);
#line 48
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 48
c_rt_lib0copy(&___nl__im__9, ___nl__im__8);
#line 48
c_rt_lib0move(&___nl__im__7, ptd0arr(___nl__im__9));
#line 48
c_rt_lib0clear(&___nl__im__8);
#line 48
c_rt_lib0clear(&___nl__im__9);
#line 48
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(1312), ___nl__im__4, ___get_global_const(1336), ___nl__im__7));
#line 48
c_rt_lib0clear(&___nl__im__4);
#line 48
c_rt_lib0clear(&___nl__im__5);
#line 48
c_rt_lib0clear(&___nl__im__6);
#line 48
c_rt_lib0clear(&___nl__im__7);
#line 48
c_rt_lib0clear(&___nl__im__8);
#line 48
c_rt_lib0clear(&___nl__im__9);
#line 48
c_rt_lib0copy(&___nl__im__10, ___nl__im__3);
#line 48
c_rt_lib0move(&___nl__im__2, ptd0rec(___nl__im__10));
#line 48
c_rt_lib0clear(&___nl__im__3);
#line 48
c_rt_lib0clear(&___nl__im__4);
#line 48
c_rt_lib0clear(&___nl__im__5);
#line 48
c_rt_lib0clear(&___nl__im__6);
#line 48
c_rt_lib0clear(&___nl__im__7);
#line 48
c_rt_lib0clear(&___nl__im__8);
#line 48
c_rt_lib0clear(&___nl__im__9);
#line 48
c_rt_lib0clear(&___nl__im__10);
#line 48
c_rt_lib0copy(&___nl__im__11, ___nl__im__2);
#line 48
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__11));
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
c_rt_lib0clear(&___nl__im__7);
#line 48
c_rt_lib0clear(&___nl__im__8);
#line 48
c_rt_lib0clear(&___nl__im__9);
#line 48
c_rt_lib0clear(&___nl__im__10);
#line 48
c_rt_lib0clear(&___nl__im__11);
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
c_rt_lib0clear(&___nl__im__7);
#line 48
c_rt_lib0clear(&___nl__im__8);
#line 48
c_rt_lib0clear(&___nl__im__9);
#line 48
c_rt_lib0clear(&___nl__im__10);
#line 48
c_rt_lib0clear(&___nl__im__11);
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
c_rt_lib0clear(&___nl__im__7);
#line 48
c_rt_lib0clear(&___nl__im__8);
#line 48
c_rt_lib0clear(&___nl__im__9);
#line 48
c_rt_lib0clear(&___nl__im__10);
#line 48
c_rt_lib0clear(&___nl__im__11);
#line 48
return NULL;
}

ImmT  string_compiler0printed_struct_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0printed_struct_t");
return string_compiler0printed_struct_t();
}
ImmT  string_compiler0printed_struct_t() {
string_compiler_priv0__const__init();
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
#line 53
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 53
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 53
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__5));
#line 53
c_rt_lib0clear(&___nl__im__4);
#line 53
c_rt_lib0clear(&___nl__im__5);
#line 54
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 54
c_rt_lib0move(&___nl__im__10, ptd0string());
#line 54
c_rt_lib0move(&___nl__im__11, ptd0string());
#line 54
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(3, ___get_global_const(121), ___nl__im__9, ___get_global_const(1231), ___nl__im__10, ___get_global_const(1178), ___nl__im__11));
#line 54
c_rt_lib0clear(&___nl__im__9);
#line 54
c_rt_lib0clear(&___nl__im__10);
#line 54
c_rt_lib0clear(&___nl__im__11);
#line 54
c_rt_lib0copy(&___nl__im__12, ___nl__im__8);
#line 54
c_rt_lib0move(&___nl__im__7, ptd0rec(___nl__im__12));
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
c_rt_lib0copy(&___nl__im__13, ___nl__im__7);
#line 54
c_rt_lib0move(&___nl__im__6, ptd0arr(___nl__im__13));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(448), ___nl__im__3, ___get_global_const(120), ___nl__im__6));
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
c_rt_lib0copy(&___nl__im__14, ___nl__im__2);
#line 54
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__14));
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
return NULL;
}

ImmT  string_compiler0error_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0error_t");
return string_compiler0error_t();
}
ImmT  string_compiler0error_t() {
string_compiler_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 59
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_const(53), ___get_global_const(54)));
#line 59
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 59
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 59
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(140), ___nl__im__3, ___get_global_const(380), ___nl__im__4));
#line 59
c_rt_lib0clear(&___nl__im__3);
#line 59
c_rt_lib0clear(&___nl__im__4);
#line 59
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 59
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__5));
#line 59
c_rt_lib0clear(&___nl__im__2);
#line 59
c_rt_lib0clear(&___nl__im__3);
#line 59
c_rt_lib0clear(&___nl__im__4);
#line 59
c_rt_lib0clear(&___nl__im__5);
#line 59
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 59
c_rt_lib0clear(&___nl__im__1);
#line 59
c_rt_lib0clear(&___nl__im__2);
#line 59
c_rt_lib0clear(&___nl__im__3);
#line 59
c_rt_lib0clear(&___nl__im__4);
#line 59
c_rt_lib0clear(&___nl__im__5);
#line 59
return ___nl__im__0;
#line 59
c_rt_lib0clear(&___nl__im__0);
#line 59
c_rt_lib0clear(&___nl__im__1);
#line 59
c_rt_lib0clear(&___nl__im__2);
#line 59
c_rt_lib0clear(&___nl__im__3);
#line 59
c_rt_lib0clear(&___nl__im__4);
#line 59
c_rt_lib0clear(&___nl__im__5);
#line 59
return NULL;
}

ImmT  string_compiler0print_modules0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0print_modules");
ImmT  var0 = (_tab[0]);
return string_compiler0print_modules(var0);
}
ImmT  string_compiler0print_modules(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 63
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 64
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 64
label_3:
#line 64
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 64
if(___nl__bool__3){ goto label_1;}
#line 64
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 64
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 65
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 65
c_rt_lib0copy(&___nl__im__8, ___nl__im__4);
#line 65
c_rt_lib0move(&___nl__im__7, pretty_printer0print_module_to_struct(___nl__im__8));
#line 65
c_rt_lib0clear(&___nl__im__8);
#line 65
c_rt_lib0copy(&___nl__im__9, ___nl__im__7);
#line 65
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__6, ___nl__im__9));
#line 65
c_rt_lib0clear(&___nl__im__6);
#line 65
c_rt_lib0clear(&___nl__im__7);
#line 65
c_rt_lib0clear(&___nl__im__8);
#line 65
c_rt_lib0clear(&___nl__im__9);
#line 65
label_2:
#line 66
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 66
goto label_3;
#line 66
label_1:
#line 67
c_rt_lib0copy(&___nl__im__10, ___nl__im__1);
#line 67
c_rt_lib0clear(&___nl__im__0);
#line 67
c_rt_lib0clear(&___nl__im__1);
#line 67
c_rt_lib0clear(&___nl__im__2);
#line 67
//clear ___nl__bool__3;
#line 67
c_rt_lib0clear(&___nl__im__4);
#line 67
c_rt_lib0clear(&___nl__im__5);
#line 67
c_rt_lib0clear(&___nl__im__6);
#line 67
c_rt_lib0clear(&___nl__im__7);
#line 67
c_rt_lib0clear(&___nl__im__8);
#line 67
c_rt_lib0clear(&___nl__im__9);
#line 67
return ___nl__im__10;
#line 67
c_rt_lib0clear(&___nl__im__0);
#line 67
c_rt_lib0clear(&___nl__im__1);
#line 67
c_rt_lib0clear(&___nl__im__2);
#line 67
//clear ___nl__bool__3;
#line 67
c_rt_lib0clear(&___nl__im__4);
#line 67
c_rt_lib0clear(&___nl__im__5);
#line 67
c_rt_lib0clear(&___nl__im__6);
#line 67
c_rt_lib0clear(&___nl__im__7);
#line 67
c_rt_lib0clear(&___nl__im__8);
#line 67
c_rt_lib0clear(&___nl__im__9);
#line 67
c_rt_lib0clear(&___nl__im__10);
#line 67
return NULL;
}

ImmT  string_compiler0parse_module0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0parse_module");
string_compiler0modules_t0type var0 = (_tab[0]);
return string_compiler0parse_module(var0);
}
ImmT  string_compiler0parse_module(string_compiler0modules_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
bool  ___nl__bool__26 = false;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
bool  ___nl__bool__39 = false;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
INT  ___nl__int__45 = 0;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
#line 74
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 75
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 76
c_rt_lib0move(&___nl__im__6, c_rt_lib0init_iter(___nl__im__0));
#line 76
label_3:
#line 76
___nl__bool__4 = c_rt_lib0is_end_hash(___nl__im__6);
#line 76
if(___nl__bool__4){ goto label_1;}
#line 76
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_key_iter(___nl__im__6));
#line 76
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__3));
#line 77
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(1335)));
#line 77
c_rt_lib0copy(&___nl__im__9, ___nl__im__8);
#line 77
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(222)));
#line 77
c_rt_lib0copy(&___nl__im__11, ___nl__im__10);
#line 77
c_rt_lib0move(&___nl__im__7, nparser0sparse(___nl__im__9, ___nl__im__11));
#line 77
c_rt_lib0clear(&___nl__im__8);
#line 77
c_rt_lib0clear(&___nl__im__9);
#line 77
c_rt_lib0clear(&___nl__im__10);
#line 77
c_rt_lib0clear(&___nl__im__11);
#line 77
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(81));
#line 77
if(___nl__bool__12){ goto label_5;}
#line 84
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(140));
#line 84
if(___nl__bool__12){ goto label_6;}
#line 84
c_rt_lib0move(&___nl__im__13,___get_global_const(16));
#line 84
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__7));
#line 84
nl_die_arg(___nl__im__13);
#line 77
label_5:
#line 77
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(81)));
#line 77
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 78
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(0));
#line 79
c_rt_lib0copy(&___nl__im__18, ___nl__im__14);
#line 79
___nl__bool__19 = false;
#line 79
c_rt_lib0move(&___nl__im__20, c_rt_lib0bool_to_nl_native(___nl__bool__19));
#line 79
c_rt_lib0move(&___nl__im__17, module_checker0check_module(___nl__im__18, ___nl__im__20, &___nl__im__16));
#line 79
c_rt_lib0clear(&___nl__im__18);
#line 79
//clear ___nl__bool__19;
#line 79
c_rt_lib0clear(&___nl__im__20);
#line 80
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(51)));
#line 80
___nl__int__23 = 0;
#line 80
___nl__int__24 = 1;
#line 80
___nl__int__25 = c_rt_lib0array_len(___nl__im__21);
#line 80
label_9:
#line 80
___nl__int__27 = ___nl__int__23 >= ___nl__int__25;
#line 80
___nl__bool__26 = ___nl__int__27;
#line 80
if(___nl__bool__26){ goto label_7;}
#line 80
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__21, ___nl__int__23));
#line 80
c_rt_lib0copy(&___nl__im__22, ___nl__im__28);
#line 81
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_mk(2, ___get_global_const(140), ___nl__im__22, ___get_global_const(380), ___nl__im__3));
#line 81
c_rt_lib0copy(&___nl__im__30, ___nl__im__29);
#line 81
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__30));
#line 81
c_rt_lib0clear(&___nl__im__29);
#line 81
c_rt_lib0clear(&___nl__im__30);
#line 81
c_rt_lib0clear(&___nl__im__22);
#line 81
label_8:
#line 82
___nl__int__23 = ___nl__int__23 + ___nl__int__24;
#line 82
goto label_9;
#line 82
label_7:
#line 83
c_rt_lib0copy(&___nl__im__31, ___nl__im__3);
#line 83
c_rt_lib0copy(&___nl__im__32, ___nl__im__14);
#line 83
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__31, ___nl__im__32));
#line 83
c_rt_lib0clear(&___nl__im__31);
#line 83
c_rt_lib0clear(&___nl__im__32);
#line 84
goto label_4;
#line 84
label_6:
#line 84
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(140)));
#line 84
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 85
___nl__int__36 = 0;
#line 85
___nl__int__37 = 1;
#line 85
___nl__int__38 = c_rt_lib0array_len(___nl__im__33);
#line 85
label_12:
#line 85
___nl__int__40 = ___nl__int__36 >= ___nl__int__38;
#line 85
___nl__bool__39 = ___nl__int__40;
#line 85
if(___nl__bool__39){ goto label_10;}
#line 85
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_get(___nl__im__33, ___nl__int__36));
#line 85
c_rt_lib0copy(&___nl__im__35, ___nl__im__41);
#line 86
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_mk(2, ___get_global_const(140), ___nl__im__35, ___get_global_const(380), ___nl__im__3));
#line 86
c_rt_lib0copy(&___nl__im__43, ___nl__im__42);
#line 86
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__43));
#line 86
c_rt_lib0clear(&___nl__im__42);
#line 86
c_rt_lib0clear(&___nl__im__43);
#line 86
c_rt_lib0clear(&___nl__im__35);
#line 86
label_11:
#line 87
___nl__int__36 = ___nl__int__36 + ___nl__int__37;
#line 87
goto label_12;
#line 87
label_10:
#line 88
goto label_4;
#line 88
label_4:
#line 88
label_2:
#line 89
c_rt_lib0move(&___nl__im__6, c_rt_lib0next_iter(___nl__im__6));
#line 89
goto label_3;
#line 89
label_1:
#line 90
c_rt_lib0copy(&___nl__im__46, ___nl__im__1);
#line 90
___nl__int__45 = c_rt_lib0array_len(___nl__im__46);
#line 90
c_rt_lib0clear(&___nl__im__46);
#line 90
___nl__int__47 = 0;
#line 90
___nl__int__48 = ___nl__int__45 > ___nl__int__47;
#line 90
___nl__bool__44 = ___nl__int__48;
#line 90
//clear ___nl__int__45;
#line 90
c_rt_lib0clear(&___nl__im__46);
#line 90
//clear ___nl__int__47;
#line 90
//clear ___nl__int__48;
#line 90
___nl__bool__44 = !___nl__bool__44;
#line 90
if(___nl__bool__44){ goto label_14;}
#line 90
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 90
c_rt_lib0copy(&___nl__im__49, ___nl__im__50);
#line 90
c_rt_lib0clear(&___nl__im__0);
#line 90
c_rt_lib0clear(&___nl__im__1);
#line 90
c_rt_lib0clear(&___nl__im__2);
#line 90
c_rt_lib0clear(&___nl__im__3);
#line 90
//clear ___nl__bool__4;
#line 90
c_rt_lib0clear(&___nl__im__5);
#line 90
c_rt_lib0clear(&___nl__im__6);
#line 90
c_rt_lib0clear(&___nl__im__7);
#line 90
c_rt_lib0clear(&___nl__im__8);
#line 90
c_rt_lib0clear(&___nl__im__9);
#line 90
c_rt_lib0clear(&___nl__im__10);
#line 90
c_rt_lib0clear(&___nl__im__11);
#line 90
//clear ___nl__bool__12;
#line 90
c_rt_lib0clear(&___nl__im__13);
#line 90
c_rt_lib0clear(&___nl__im__14);
#line 90
c_rt_lib0clear(&___nl__im__15);
#line 90
c_rt_lib0clear(&___nl__im__16);
#line 90
c_rt_lib0clear(&___nl__im__17);
#line 90
c_rt_lib0clear(&___nl__im__18);
#line 90
//clear ___nl__bool__19;
#line 90
c_rt_lib0clear(&___nl__im__20);
#line 90
c_rt_lib0clear(&___nl__im__21);
#line 90
c_rt_lib0clear(&___nl__im__22);
#line 90
//clear ___nl__int__23;
#line 90
//clear ___nl__int__24;
#line 90
//clear ___nl__int__25;
#line 90
//clear ___nl__bool__26;
#line 90
//clear ___nl__int__27;
#line 90
c_rt_lib0clear(&___nl__im__28);
#line 90
c_rt_lib0clear(&___nl__im__29);
#line 90
c_rt_lib0clear(&___nl__im__30);
#line 90
c_rt_lib0clear(&___nl__im__31);
#line 90
c_rt_lib0clear(&___nl__im__32);
#line 90
c_rt_lib0clear(&___nl__im__33);
#line 90
c_rt_lib0clear(&___nl__im__34);
#line 90
c_rt_lib0clear(&___nl__im__35);
#line 90
//clear ___nl__int__36;
#line 90
//clear ___nl__int__37;
#line 90
//clear ___nl__int__38;
#line 90
//clear ___nl__bool__39;
#line 90
//clear ___nl__int__40;
#line 90
c_rt_lib0clear(&___nl__im__41);
#line 90
c_rt_lib0clear(&___nl__im__42);
#line 90
c_rt_lib0clear(&___nl__im__43);
#line 90
//clear ___nl__bool__44;
#line 90
//clear ___nl__int__45;
#line 90
c_rt_lib0clear(&___nl__im__46);
#line 90
//clear ___nl__int__47;
#line 90
//clear ___nl__int__48;
#line 90
c_rt_lib0clear(&___nl__im__50);
#line 90
return ___nl__im__49;
#line 90
goto label_13;
#line 90
label_14:
#line 90
label_13:
#line 91
c_rt_lib0move(&___nl__im__52, c_rt_lib0ov_mk_arg(___get_global_const(81), ___nl__im__2));
#line 91
c_rt_lib0copy(&___nl__im__51, ___nl__im__52);
#line 91
c_rt_lib0clear(&___nl__im__0);
#line 91
c_rt_lib0clear(&___nl__im__1);
#line 91
c_rt_lib0clear(&___nl__im__2);
#line 91
c_rt_lib0clear(&___nl__im__3);
#line 91
//clear ___nl__bool__4;
#line 91
c_rt_lib0clear(&___nl__im__5);
#line 91
c_rt_lib0clear(&___nl__im__6);
#line 91
c_rt_lib0clear(&___nl__im__7);
#line 91
c_rt_lib0clear(&___nl__im__8);
#line 91
c_rt_lib0clear(&___nl__im__9);
#line 91
c_rt_lib0clear(&___nl__im__10);
#line 91
c_rt_lib0clear(&___nl__im__11);
#line 91
//clear ___nl__bool__12;
#line 91
c_rt_lib0clear(&___nl__im__13);
#line 91
c_rt_lib0clear(&___nl__im__14);
#line 91
c_rt_lib0clear(&___nl__im__15);
#line 91
c_rt_lib0clear(&___nl__im__16);
#line 91
c_rt_lib0clear(&___nl__im__17);
#line 91
c_rt_lib0clear(&___nl__im__18);
#line 91
//clear ___nl__bool__19;
#line 91
c_rt_lib0clear(&___nl__im__20);
#line 91
c_rt_lib0clear(&___nl__im__21);
#line 91
c_rt_lib0clear(&___nl__im__22);
#line 91
//clear ___nl__int__23;
#line 91
//clear ___nl__int__24;
#line 91
//clear ___nl__int__25;
#line 91
//clear ___nl__bool__26;
#line 91
//clear ___nl__int__27;
#line 91
c_rt_lib0clear(&___nl__im__28);
#line 91
c_rt_lib0clear(&___nl__im__29);
#line 91
c_rt_lib0clear(&___nl__im__30);
#line 91
c_rt_lib0clear(&___nl__im__31);
#line 91
c_rt_lib0clear(&___nl__im__32);
#line 91
c_rt_lib0clear(&___nl__im__33);
#line 91
c_rt_lib0clear(&___nl__im__34);
#line 91
c_rt_lib0clear(&___nl__im__35);
#line 91
//clear ___nl__int__36;
#line 91
//clear ___nl__int__37;
#line 91
//clear ___nl__int__38;
#line 91
//clear ___nl__bool__39;
#line 91
//clear ___nl__int__40;
#line 91
c_rt_lib0clear(&___nl__im__41);
#line 91
c_rt_lib0clear(&___nl__im__42);
#line 91
c_rt_lib0clear(&___nl__im__43);
#line 91
//clear ___nl__bool__44;
#line 91
//clear ___nl__int__45;
#line 91
c_rt_lib0clear(&___nl__im__46);
#line 91
//clear ___nl__int__47;
#line 91
//clear ___nl__int__48;
#line 91
c_rt_lib0clear(&___nl__im__49);
#line 91
c_rt_lib0clear(&___nl__im__50);
#line 91
c_rt_lib0clear(&___nl__im__52);
#line 91
return ___nl__im__51;
#line 91
c_rt_lib0clear(&___nl__im__0);
#line 91
c_rt_lib0clear(&___nl__im__1);
#line 91
c_rt_lib0clear(&___nl__im__2);
#line 91
c_rt_lib0clear(&___nl__im__3);
#line 91
//clear ___nl__bool__4;
#line 91
c_rt_lib0clear(&___nl__im__5);
#line 91
c_rt_lib0clear(&___nl__im__6);
#line 91
c_rt_lib0clear(&___nl__im__7);
#line 91
c_rt_lib0clear(&___nl__im__8);
#line 91
c_rt_lib0clear(&___nl__im__9);
#line 91
c_rt_lib0clear(&___nl__im__10);
#line 91
c_rt_lib0clear(&___nl__im__11);
#line 91
//clear ___nl__bool__12;
#line 91
c_rt_lib0clear(&___nl__im__13);
#line 91
c_rt_lib0clear(&___nl__im__14);
#line 91
c_rt_lib0clear(&___nl__im__15);
#line 91
c_rt_lib0clear(&___nl__im__16);
#line 91
c_rt_lib0clear(&___nl__im__17);
#line 91
c_rt_lib0clear(&___nl__im__18);
#line 91
//clear ___nl__bool__19;
#line 91
c_rt_lib0clear(&___nl__im__20);
#line 91
c_rt_lib0clear(&___nl__im__21);
#line 91
c_rt_lib0clear(&___nl__im__22);
#line 91
//clear ___nl__int__23;
#line 91
//clear ___nl__int__24;
#line 91
//clear ___nl__int__25;
#line 91
//clear ___nl__bool__26;
#line 91
//clear ___nl__int__27;
#line 91
c_rt_lib0clear(&___nl__im__28);
#line 91
c_rt_lib0clear(&___nl__im__29);
#line 91
c_rt_lib0clear(&___nl__im__30);
#line 91
c_rt_lib0clear(&___nl__im__31);
#line 91
c_rt_lib0clear(&___nl__im__32);
#line 91
c_rt_lib0clear(&___nl__im__33);
#line 91
c_rt_lib0clear(&___nl__im__34);
#line 91
c_rt_lib0clear(&___nl__im__35);
#line 91
//clear ___nl__int__36;
#line 91
//clear ___nl__int__37;
#line 91
//clear ___nl__int__38;
#line 91
//clear ___nl__bool__39;
#line 91
//clear ___nl__int__40;
#line 91
c_rt_lib0clear(&___nl__im__41);
#line 91
c_rt_lib0clear(&___nl__im__42);
#line 91
c_rt_lib0clear(&___nl__im__43);
#line 91
//clear ___nl__bool__44;
#line 91
//clear ___nl__int__45;
#line 91
c_rt_lib0clear(&___nl__im__46);
#line 91
//clear ___nl__int__47;
#line 91
//clear ___nl__int__48;
#line 91
c_rt_lib0clear(&___nl__im__49);
#line 91
c_rt_lib0clear(&___nl__im__50);
#line 91
c_rt_lib0clear(&___nl__im__51);
#line 91
c_rt_lib0clear(&___nl__im__52);
#line 91
return NULL;
}

ImmT  string_compiler0check_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_compiler0check_type");
string_compiler0type_check_t0type var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string_compiler0check_type(var0, var1);
}
ImmT  string_compiler0check_type(string_compiler0type_check_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_compiler_priv0__const__init();
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
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
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
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
bool  ___nl__bool__41 = false;
INT  ___nl__int__42 = 0;
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
INT  ___nl__int__63 = 0;
INT  ___nl__int__64 = 0;
INT  ___nl__int__65 = 0;
bool  ___nl__bool__66 = false;
INT  ___nl__int__67 = 0;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
bool  ___nl__bool__75 = false;
INT  ___nl__int__76 = 0;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
INT  ___nl__int__79 = 0;
INT  ___nl__int__80 = 0;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
#line 98
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 99
___nl__int__4 = 0;
#line 99
___nl__int__5 = 1;
#line 99
___nl__int__6 = c_rt_lib0array_len(___nl__im__0);
#line 99
label_3:
#line 99
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 99
___nl__bool__7 = ___nl__int__8;
#line 99
if(___nl__bool__7){ goto label_1;}
#line 99
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__0, ___nl__int__4));
#line 99
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 100
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(0));
#line 101
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(0));
#line 102
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(0));
#line 103
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(1336)));
#line 103
___nl__int__15 = 0;
#line 103
___nl__int__16 = 1;
#line 103
___nl__int__17 = c_rt_lib0array_len(___nl__im__13);
#line 103
label_6:
#line 103
___nl__int__19 = ___nl__int__15 >= ___nl__int__17;
#line 103
___nl__bool__18 = ___nl__int__19;
#line 103
if(___nl__bool__18){ goto label_4;}
#line 103
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__13, ___nl__int__15));
#line 103
c_rt_lib0copy(&___nl__im__14, ___nl__im__20);
#line 104
c_rt_lib0copy(&___nl__im__23, ___nl__im__1);
#line 104
c_rt_lib0copy(&___nl__im__24, ___nl__im__14);
#line 104
c_rt_lib0move(&___nl__im__22, hash0get_value(___nl__im__23, ___nl__im__24));
#line 104
c_rt_lib0clear(&___nl__im__23);
#line 104
c_rt_lib0clear(&___nl__im__24);
#line 104
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(121)));
#line 104
c_rt_lib0clear(&___nl__im__22);
#line 104
c_rt_lib0clear(&___nl__im__23);
#line 104
c_rt_lib0clear(&___nl__im__24);
#line 104
c_rt_lib0copy(&___nl__im__25, ___nl__im__21);
#line 104
c_rt_lib0copy(&___nl__im__27, ___nl__im__1);
#line 104
c_rt_lib0copy(&___nl__im__28, ___nl__im__14);
#line 104
c_rt_lib0move(&___nl__im__26, hash0get_value(___nl__im__27, ___nl__im__28));
#line 104
c_rt_lib0clear(&___nl__im__27);
#line 104
c_rt_lib0clear(&___nl__im__28);
#line 104
c_rt_lib0copy(&___nl__im__29, ___nl__im__26);
#line 104
c_rt_lib0delete(hash0set_value(&___nl__im__10, ___nl__im__25, ___nl__im__29));
#line 104
c_rt_lib0clear(&___nl__im__21);
#line 104
c_rt_lib0clear(&___nl__im__22);
#line 104
c_rt_lib0clear(&___nl__im__23);
#line 104
c_rt_lib0clear(&___nl__im__24);
#line 104
c_rt_lib0clear(&___nl__im__25);
#line 104
c_rt_lib0clear(&___nl__im__26);
#line 104
c_rt_lib0clear(&___nl__im__27);
#line 104
c_rt_lib0clear(&___nl__im__28);
#line 104
c_rt_lib0clear(&___nl__im__29);
#line 105
c_rt_lib0copy(&___nl__im__32, ___nl__im__1);
#line 105
c_rt_lib0copy(&___nl__im__33, ___nl__im__14);
#line 105
c_rt_lib0move(&___nl__im__31, hash0get_value(___nl__im__32, ___nl__im__33));
#line 105
c_rt_lib0clear(&___nl__im__32);
#line 105
c_rt_lib0clear(&___nl__im__33);
#line 105
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_const(121)));
#line 105
c_rt_lib0clear(&___nl__im__31);
#line 105
c_rt_lib0clear(&___nl__im__32);
#line 105
c_rt_lib0clear(&___nl__im__33);
#line 105
c_rt_lib0copy(&___nl__im__34, ___nl__im__30);
#line 105
c_rt_lib0copy(&___nl__im__35, ___nl__im__14);
#line 105
c_rt_lib0delete(hash0set_value(&___nl__im__12, ___nl__im__34, ___nl__im__35));
#line 105
c_rt_lib0clear(&___nl__im__30);
#line 105
c_rt_lib0clear(&___nl__im__31);
#line 105
c_rt_lib0clear(&___nl__im__32);
#line 105
c_rt_lib0clear(&___nl__im__33);
#line 105
c_rt_lib0clear(&___nl__im__34);
#line 105
c_rt_lib0clear(&___nl__im__35);
#line 105
c_rt_lib0clear(&___nl__im__14);
#line 105
label_5:
#line 106
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 106
goto label_6;
#line 106
label_4:
#line 107
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(1312)));
#line 107
___nl__int__38 = 0;
#line 107
___nl__int__39 = 1;
#line 107
___nl__int__40 = c_rt_lib0array_len(___nl__im__36);
#line 107
label_9:
#line 107
___nl__int__42 = ___nl__int__38 >= ___nl__int__40;
#line 107
___nl__bool__41 = ___nl__int__42;
#line 107
if(___nl__bool__41){ goto label_7;}
#line 107
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get(___nl__im__36, ___nl__int__38));
#line 107
c_rt_lib0copy(&___nl__im__37, ___nl__im__43);
#line 108
c_rt_lib0copy(&___nl__im__46, ___nl__im__1);
#line 108
c_rt_lib0copy(&___nl__im__47, ___nl__im__37);
#line 108
c_rt_lib0move(&___nl__im__45, hash0get_value(___nl__im__46, ___nl__im__47));
#line 108
c_rt_lib0clear(&___nl__im__46);
#line 108
c_rt_lib0clear(&___nl__im__47);
#line 108
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_const(121)));
#line 108
c_rt_lib0clear(&___nl__im__45);
#line 108
c_rt_lib0clear(&___nl__im__46);
#line 108
c_rt_lib0clear(&___nl__im__47);
#line 108
c_rt_lib0copy(&___nl__im__48, ___nl__im__44);
#line 108
c_rt_lib0copy(&___nl__im__50, ___nl__im__1);
#line 108
c_rt_lib0copy(&___nl__im__51, ___nl__im__37);
#line 108
c_rt_lib0move(&___nl__im__49, hash0get_value(___nl__im__50, ___nl__im__51));
#line 108
c_rt_lib0clear(&___nl__im__50);
#line 108
c_rt_lib0clear(&___nl__im__51);
#line 108
c_rt_lib0copy(&___nl__im__52, ___nl__im__49);
#line 108
c_rt_lib0delete(hash0set_value(&___nl__im__11, ___nl__im__48, ___nl__im__52));
#line 108
c_rt_lib0clear(&___nl__im__44);
#line 108
c_rt_lib0clear(&___nl__im__45);
#line 108
c_rt_lib0clear(&___nl__im__46);
#line 108
c_rt_lib0clear(&___nl__im__47);
#line 108
c_rt_lib0clear(&___nl__im__48);
#line 108
c_rt_lib0clear(&___nl__im__49);
#line 108
c_rt_lib0clear(&___nl__im__50);
#line 108
c_rt_lib0clear(&___nl__im__51);
#line 108
c_rt_lib0clear(&___nl__im__52);
#line 109
c_rt_lib0copy(&___nl__im__55, ___nl__im__1);
#line 109
c_rt_lib0copy(&___nl__im__56, ___nl__im__37);
#line 109
c_rt_lib0move(&___nl__im__54, hash0get_value(___nl__im__55, ___nl__im__56));
#line 109
c_rt_lib0clear(&___nl__im__55);
#line 109
c_rt_lib0clear(&___nl__im__56);
#line 109
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(121)));
#line 109
c_rt_lib0clear(&___nl__im__54);
#line 109
c_rt_lib0clear(&___nl__im__55);
#line 109
c_rt_lib0clear(&___nl__im__56);
#line 109
c_rt_lib0copy(&___nl__im__57, ___nl__im__53);
#line 109
c_rt_lib0copy(&___nl__im__58, ___nl__im__37);
#line 109
c_rt_lib0delete(hash0set_value(&___nl__im__12, ___nl__im__57, ___nl__im__58));
#line 109
c_rt_lib0clear(&___nl__im__53);
#line 109
c_rt_lib0clear(&___nl__im__54);
#line 109
c_rt_lib0clear(&___nl__im__55);
#line 109
c_rt_lib0clear(&___nl__im__56);
#line 109
c_rt_lib0clear(&___nl__im__57);
#line 109
c_rt_lib0clear(&___nl__im__58);
#line 109
c_rt_lib0clear(&___nl__im__37);
#line 109
label_8:
#line 110
___nl__int__38 = ___nl__int__38 + ___nl__int__39;
#line 110
goto label_9;
#line 110
label_7:
#line 111
c_rt_lib0copy(&___nl__im__60, ___nl__im__10);
#line 111
c_rt_lib0move(&___nl__im__59, type_checker0check_modules(&___nl__im__11, ___nl__im__60));
#line 111
c_rt_lib0clear(&___nl__im__60);
#line 112
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_const(51)));
#line 112
___nl__int__63 = 0;
#line 112
___nl__int__64 = 1;
#line 112
___nl__int__65 = c_rt_lib0array_len(___nl__im__61);
#line 112
label_12:
#line 112
___nl__int__67 = ___nl__int__63 >= ___nl__int__65;
#line 112
___nl__bool__66 = ___nl__int__67;
#line 112
if(___nl__bool__66){ goto label_10;}
#line 112
c_rt_lib0move(&___nl__im__68, c_rt_lib0array_get(___nl__im__61, ___nl__int__63));
#line 112
c_rt_lib0copy(&___nl__im__62, ___nl__im__68);
#line 113
c_rt_lib0copy(&___nl__im__71, ___nl__im__12);
#line 113
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_const(167)));
#line 113
c_rt_lib0copy(&___nl__im__73, ___nl__im__72);
#line 113
c_rt_lib0move(&___nl__im__70, hash0get_value(___nl__im__71, ___nl__im__73));
#line 113
c_rt_lib0clear(&___nl__im__71);
#line 113
c_rt_lib0clear(&___nl__im__72);
#line 113
c_rt_lib0clear(&___nl__im__73);
#line 113
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_mk(2, ___get_global_const(140), ___nl__im__62, ___get_global_const(380), ___nl__im__70));
#line 113
c_rt_lib0clear(&___nl__im__70);
#line 113
c_rt_lib0clear(&___nl__im__71);
#line 113
c_rt_lib0clear(&___nl__im__72);
#line 113
c_rt_lib0clear(&___nl__im__73);
#line 113
c_rt_lib0copy(&___nl__im__74, ___nl__im__69);
#line 113
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__74));
#line 113
c_rt_lib0clear(&___nl__im__69);
#line 113
c_rt_lib0clear(&___nl__im__70);
#line 113
c_rt_lib0clear(&___nl__im__71);
#line 113
c_rt_lib0clear(&___nl__im__72);
#line 113
c_rt_lib0clear(&___nl__im__73);
#line 113
c_rt_lib0clear(&___nl__im__74);
#line 113
c_rt_lib0clear(&___nl__im__62);
#line 113
label_11:
#line 114
___nl__int__63 = ___nl__int__63 + ___nl__int__64;
#line 114
goto label_12;
#line 114
label_10:
#line 115
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_const(51)));
#line 115
c_rt_lib0copy(&___nl__im__78, ___nl__im__77);
#line 115
___nl__int__76 = c_rt_lib0array_len(___nl__im__78);
#line 115
c_rt_lib0clear(&___nl__im__77);
#line 115
c_rt_lib0clear(&___nl__im__78);
#line 115
___nl__int__79 = 0;
#line 115
___nl__int__80 = ___nl__int__76 > ___nl__int__79;
#line 115
___nl__bool__75 = ___nl__int__80;
#line 115
//clear ___nl__int__76;
#line 115
c_rt_lib0clear(&___nl__im__77);
#line 115
c_rt_lib0clear(&___nl__im__78);
#line 115
//clear ___nl__int__79;
#line 115
//clear ___nl__int__80;
#line 115
___nl__bool__75 = !___nl__bool__75;
#line 115
if(___nl__bool__75){ goto label_14;}
#line 115
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__2));
#line 115
c_rt_lib0copy(&___nl__im__81, ___nl__im__82);
#line 115
c_rt_lib0clear(&___nl__im__0);
#line 115
c_rt_lib0clear(&___nl__im__1);
#line 115
c_rt_lib0clear(&___nl__im__2);
#line 115
c_rt_lib0clear(&___nl__im__3);
#line 115
//clear ___nl__int__4;
#line 115
//clear ___nl__int__5;
#line 115
//clear ___nl__int__6;
#line 115
//clear ___nl__bool__7;
#line 115
//clear ___nl__int__8;
#line 115
c_rt_lib0clear(&___nl__im__9);
#line 115
c_rt_lib0clear(&___nl__im__10);
#line 115
c_rt_lib0clear(&___nl__im__11);
#line 115
c_rt_lib0clear(&___nl__im__12);
#line 115
c_rt_lib0clear(&___nl__im__13);
#line 115
c_rt_lib0clear(&___nl__im__14);
#line 115
//clear ___nl__int__15;
#line 115
//clear ___nl__int__16;
#line 115
//clear ___nl__int__17;
#line 115
//clear ___nl__bool__18;
#line 115
//clear ___nl__int__19;
#line 115
c_rt_lib0clear(&___nl__im__20);
#line 115
c_rt_lib0clear(&___nl__im__21);
#line 115
c_rt_lib0clear(&___nl__im__22);
#line 115
c_rt_lib0clear(&___nl__im__23);
#line 115
c_rt_lib0clear(&___nl__im__24);
#line 115
c_rt_lib0clear(&___nl__im__25);
#line 115
c_rt_lib0clear(&___nl__im__26);
#line 115
c_rt_lib0clear(&___nl__im__27);
#line 115
c_rt_lib0clear(&___nl__im__28);
#line 115
c_rt_lib0clear(&___nl__im__29);
#line 115
c_rt_lib0clear(&___nl__im__30);
#line 115
c_rt_lib0clear(&___nl__im__31);
#line 115
c_rt_lib0clear(&___nl__im__32);
#line 115
c_rt_lib0clear(&___nl__im__33);
#line 115
c_rt_lib0clear(&___nl__im__34);
#line 115
c_rt_lib0clear(&___nl__im__35);
#line 115
c_rt_lib0clear(&___nl__im__36);
#line 115
c_rt_lib0clear(&___nl__im__37);
#line 115
//clear ___nl__int__38;
#line 115
//clear ___nl__int__39;
#line 115
//clear ___nl__int__40;
#line 115
//clear ___nl__bool__41;
#line 115
//clear ___nl__int__42;
#line 115
c_rt_lib0clear(&___nl__im__43);
#line 115
c_rt_lib0clear(&___nl__im__44);
#line 115
c_rt_lib0clear(&___nl__im__45);
#line 115
c_rt_lib0clear(&___nl__im__46);
#line 115
c_rt_lib0clear(&___nl__im__47);
#line 115
c_rt_lib0clear(&___nl__im__48);
#line 115
c_rt_lib0clear(&___nl__im__49);
#line 115
c_rt_lib0clear(&___nl__im__50);
#line 115
c_rt_lib0clear(&___nl__im__51);
#line 115
c_rt_lib0clear(&___nl__im__52);
#line 115
c_rt_lib0clear(&___nl__im__53);
#line 115
c_rt_lib0clear(&___nl__im__54);
#line 115
c_rt_lib0clear(&___nl__im__55);
#line 115
c_rt_lib0clear(&___nl__im__56);
#line 115
c_rt_lib0clear(&___nl__im__57);
#line 115
c_rt_lib0clear(&___nl__im__58);
#line 115
c_rt_lib0clear(&___nl__im__59);
#line 115
c_rt_lib0clear(&___nl__im__60);
#line 115
c_rt_lib0clear(&___nl__im__61);
#line 115
c_rt_lib0clear(&___nl__im__62);
#line 115
//clear ___nl__int__63;
#line 115
//clear ___nl__int__64;
#line 115
//clear ___nl__int__65;
#line 115
//clear ___nl__bool__66;
#line 115
//clear ___nl__int__67;
#line 115
c_rt_lib0clear(&___nl__im__68);
#line 115
c_rt_lib0clear(&___nl__im__69);
#line 115
c_rt_lib0clear(&___nl__im__70);
#line 115
c_rt_lib0clear(&___nl__im__71);
#line 115
c_rt_lib0clear(&___nl__im__72);
#line 115
c_rt_lib0clear(&___nl__im__73);
#line 115
c_rt_lib0clear(&___nl__im__74);
#line 115
//clear ___nl__bool__75;
#line 115
//clear ___nl__int__76;
#line 115
c_rt_lib0clear(&___nl__im__77);
#line 115
c_rt_lib0clear(&___nl__im__78);
#line 115
//clear ___nl__int__79;
#line 115
//clear ___nl__int__80;
#line 115
c_rt_lib0clear(&___nl__im__82);
#line 115
return ___nl__im__81;
#line 115
goto label_13;
#line 115
label_14:
#line 115
label_13:
#line 115
c_rt_lib0clear(&___nl__im__3);
#line 115
label_2:
#line 116
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 116
goto label_3;
#line 116
label_1:
#line 117
c_rt_lib0move(&___nl__im__85,___get_global_const(37));
#line 117
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_arg(___get_global_const(81), ___nl__im__85));
#line 117
c_rt_lib0clear(&___nl__im__85);
#line 117
c_rt_lib0copy(&___nl__im__83, ___nl__im__84);
#line 117
c_rt_lib0clear(&___nl__im__0);
#line 117
c_rt_lib0clear(&___nl__im__1);
#line 117
c_rt_lib0clear(&___nl__im__2);
#line 117
c_rt_lib0clear(&___nl__im__3);
#line 117
//clear ___nl__int__4;
#line 117
//clear ___nl__int__5;
#line 117
//clear ___nl__int__6;
#line 117
//clear ___nl__bool__7;
#line 117
//clear ___nl__int__8;
#line 117
c_rt_lib0clear(&___nl__im__9);
#line 117
c_rt_lib0clear(&___nl__im__10);
#line 117
c_rt_lib0clear(&___nl__im__11);
#line 117
c_rt_lib0clear(&___nl__im__12);
#line 117
c_rt_lib0clear(&___nl__im__13);
#line 117
c_rt_lib0clear(&___nl__im__14);
#line 117
//clear ___nl__int__15;
#line 117
//clear ___nl__int__16;
#line 117
//clear ___nl__int__17;
#line 117
//clear ___nl__bool__18;
#line 117
//clear ___nl__int__19;
#line 117
c_rt_lib0clear(&___nl__im__20);
#line 117
c_rt_lib0clear(&___nl__im__21);
#line 117
c_rt_lib0clear(&___nl__im__22);
#line 117
c_rt_lib0clear(&___nl__im__23);
#line 117
c_rt_lib0clear(&___nl__im__24);
#line 117
c_rt_lib0clear(&___nl__im__25);
#line 117
c_rt_lib0clear(&___nl__im__26);
#line 117
c_rt_lib0clear(&___nl__im__27);
#line 117
c_rt_lib0clear(&___nl__im__28);
#line 117
c_rt_lib0clear(&___nl__im__29);
#line 117
c_rt_lib0clear(&___nl__im__30);
#line 117
c_rt_lib0clear(&___nl__im__31);
#line 117
c_rt_lib0clear(&___nl__im__32);
#line 117
c_rt_lib0clear(&___nl__im__33);
#line 117
c_rt_lib0clear(&___nl__im__34);
#line 117
c_rt_lib0clear(&___nl__im__35);
#line 117
c_rt_lib0clear(&___nl__im__36);
#line 117
c_rt_lib0clear(&___nl__im__37);
#line 117
//clear ___nl__int__38;
#line 117
//clear ___nl__int__39;
#line 117
//clear ___nl__int__40;
#line 117
//clear ___nl__bool__41;
#line 117
//clear ___nl__int__42;
#line 117
c_rt_lib0clear(&___nl__im__43);
#line 117
c_rt_lib0clear(&___nl__im__44);
#line 117
c_rt_lib0clear(&___nl__im__45);
#line 117
c_rt_lib0clear(&___nl__im__46);
#line 117
c_rt_lib0clear(&___nl__im__47);
#line 117
c_rt_lib0clear(&___nl__im__48);
#line 117
c_rt_lib0clear(&___nl__im__49);
#line 117
c_rt_lib0clear(&___nl__im__50);
#line 117
c_rt_lib0clear(&___nl__im__51);
#line 117
c_rt_lib0clear(&___nl__im__52);
#line 117
c_rt_lib0clear(&___nl__im__53);
#line 117
c_rt_lib0clear(&___nl__im__54);
#line 117
c_rt_lib0clear(&___nl__im__55);
#line 117
c_rt_lib0clear(&___nl__im__56);
#line 117
c_rt_lib0clear(&___nl__im__57);
#line 117
c_rt_lib0clear(&___nl__im__58);
#line 117
c_rt_lib0clear(&___nl__im__59);
#line 117
c_rt_lib0clear(&___nl__im__60);
#line 117
c_rt_lib0clear(&___nl__im__61);
#line 117
c_rt_lib0clear(&___nl__im__62);
#line 117
//clear ___nl__int__63;
#line 117
//clear ___nl__int__64;
#line 117
//clear ___nl__int__65;
#line 117
//clear ___nl__bool__66;
#line 117
//clear ___nl__int__67;
#line 117
c_rt_lib0clear(&___nl__im__68);
#line 117
c_rt_lib0clear(&___nl__im__69);
#line 117
c_rt_lib0clear(&___nl__im__70);
#line 117
c_rt_lib0clear(&___nl__im__71);
#line 117
c_rt_lib0clear(&___nl__im__72);
#line 117
c_rt_lib0clear(&___nl__im__73);
#line 117
c_rt_lib0clear(&___nl__im__74);
#line 117
//clear ___nl__bool__75;
#line 117
//clear ___nl__int__76;
#line 117
c_rt_lib0clear(&___nl__im__77);
#line 117
c_rt_lib0clear(&___nl__im__78);
#line 117
//clear ___nl__int__79;
#line 117
//clear ___nl__int__80;
#line 117
c_rt_lib0clear(&___nl__im__81);
#line 117
c_rt_lib0clear(&___nl__im__82);
#line 117
c_rt_lib0clear(&___nl__im__84);
#line 117
c_rt_lib0clear(&___nl__im__85);
#line 117
return ___nl__im__83;
#line 117
c_rt_lib0clear(&___nl__im__0);
#line 117
c_rt_lib0clear(&___nl__im__1);
#line 117
c_rt_lib0clear(&___nl__im__2);
#line 117
c_rt_lib0clear(&___nl__im__3);
#line 117
//clear ___nl__int__4;
#line 117
//clear ___nl__int__5;
#line 117
//clear ___nl__int__6;
#line 117
//clear ___nl__bool__7;
#line 117
//clear ___nl__int__8;
#line 117
c_rt_lib0clear(&___nl__im__9);
#line 117
c_rt_lib0clear(&___nl__im__10);
#line 117
c_rt_lib0clear(&___nl__im__11);
#line 117
c_rt_lib0clear(&___nl__im__12);
#line 117
c_rt_lib0clear(&___nl__im__13);
#line 117
c_rt_lib0clear(&___nl__im__14);
#line 117
//clear ___nl__int__15;
#line 117
//clear ___nl__int__16;
#line 117
//clear ___nl__int__17;
#line 117
//clear ___nl__bool__18;
#line 117
//clear ___nl__int__19;
#line 117
c_rt_lib0clear(&___nl__im__20);
#line 117
c_rt_lib0clear(&___nl__im__21);
#line 117
c_rt_lib0clear(&___nl__im__22);
#line 117
c_rt_lib0clear(&___nl__im__23);
#line 117
c_rt_lib0clear(&___nl__im__24);
#line 117
c_rt_lib0clear(&___nl__im__25);
#line 117
c_rt_lib0clear(&___nl__im__26);
#line 117
c_rt_lib0clear(&___nl__im__27);
#line 117
c_rt_lib0clear(&___nl__im__28);
#line 117
c_rt_lib0clear(&___nl__im__29);
#line 117
c_rt_lib0clear(&___nl__im__30);
#line 117
c_rt_lib0clear(&___nl__im__31);
#line 117
c_rt_lib0clear(&___nl__im__32);
#line 117
c_rt_lib0clear(&___nl__im__33);
#line 117
c_rt_lib0clear(&___nl__im__34);
#line 117
c_rt_lib0clear(&___nl__im__35);
#line 117
c_rt_lib0clear(&___nl__im__36);
#line 117
c_rt_lib0clear(&___nl__im__37);
#line 117
//clear ___nl__int__38;
#line 117
//clear ___nl__int__39;
#line 117
//clear ___nl__int__40;
#line 117
//clear ___nl__bool__41;
#line 117
//clear ___nl__int__42;
#line 117
c_rt_lib0clear(&___nl__im__43);
#line 117
c_rt_lib0clear(&___nl__im__44);
#line 117
c_rt_lib0clear(&___nl__im__45);
#line 117
c_rt_lib0clear(&___nl__im__46);
#line 117
c_rt_lib0clear(&___nl__im__47);
#line 117
c_rt_lib0clear(&___nl__im__48);
#line 117
c_rt_lib0clear(&___nl__im__49);
#line 117
c_rt_lib0clear(&___nl__im__50);
#line 117
c_rt_lib0clear(&___nl__im__51);
#line 117
c_rt_lib0clear(&___nl__im__52);
#line 117
c_rt_lib0clear(&___nl__im__53);
#line 117
c_rt_lib0clear(&___nl__im__54);
#line 117
c_rt_lib0clear(&___nl__im__55);
#line 117
c_rt_lib0clear(&___nl__im__56);
#line 117
c_rt_lib0clear(&___nl__im__57);
#line 117
c_rt_lib0clear(&___nl__im__58);
#line 117
c_rt_lib0clear(&___nl__im__59);
#line 117
c_rt_lib0clear(&___nl__im__60);
#line 117
c_rt_lib0clear(&___nl__im__61);
#line 117
c_rt_lib0clear(&___nl__im__62);
#line 117
//clear ___nl__int__63;
#line 117
//clear ___nl__int__64;
#line 117
//clear ___nl__int__65;
#line 117
//clear ___nl__bool__66;
#line 117
//clear ___nl__int__67;
#line 117
c_rt_lib0clear(&___nl__im__68);
#line 117
c_rt_lib0clear(&___nl__im__69);
#line 117
c_rt_lib0clear(&___nl__im__70);
#line 117
c_rt_lib0clear(&___nl__im__71);
#line 117
c_rt_lib0clear(&___nl__im__72);
#line 117
c_rt_lib0clear(&___nl__im__73);
#line 117
c_rt_lib0clear(&___nl__im__74);
#line 117
//clear ___nl__bool__75;
#line 117
//clear ___nl__int__76;
#line 117
c_rt_lib0clear(&___nl__im__77);
#line 117
c_rt_lib0clear(&___nl__im__78);
#line 117
//clear ___nl__int__79;
#line 117
//clear ___nl__int__80;
#line 117
c_rt_lib0clear(&___nl__im__81);
#line 117
c_rt_lib0clear(&___nl__im__82);
#line 117
c_rt_lib0clear(&___nl__im__83);
#line 117
c_rt_lib0clear(&___nl__im__84);
#line 117
c_rt_lib0clear(&___nl__im__85);
#line 117
return NULL;
}

ImmT  string_compiler0compile_to_nlasm0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0compile_to_nlasm");
ImmT  var0 = (_tab[0]);
return string_compiler0compile_to_nlasm(var0);
}
ImmT  string_compiler0compile_to_nlasm(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_compiler_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
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
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
bool  ___nl__bool__35 = false;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
bool  ___nl__bool__46 = false;
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
#line 124
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 125
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 126
c_rt_lib0move(&___nl__im__6, c_rt_lib0init_iter(___nl__im__0));
#line 126
label_3:
#line 126
___nl__bool__4 = c_rt_lib0is_end_hash(___nl__im__6);
#line 126
if(___nl__bool__4){ goto label_1;}
#line 126
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_key_iter(___nl__im__6));
#line 126
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__3));
#line 127
c_rt_lib0copy(&___nl__im__8, ___nl__im__5);
#line 127
c_rt_lib0copy(&___nl__im__9, ___nl__im__3);
#line 127
c_rt_lib0move(&___nl__im__7, nparser0sparse(___nl__im__8, ___nl__im__9));
#line 127
c_rt_lib0clear(&___nl__im__8);
#line 127
c_rt_lib0clear(&___nl__im__9);
#line 127
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(81));
#line 127
if(___nl__bool__10){ goto label_5;}
#line 132
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(140));
#line 132
if(___nl__bool__10){ goto label_6;}
#line 132
c_rt_lib0move(&___nl__im__11,___get_global_const(16));
#line 132
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__7));
#line 132
nl_die_arg(___nl__im__11);
#line 127
label_5:
#line 127
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(81)));
#line 127
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 128
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(0));
#line 129
c_rt_lib0copy(&___nl__im__16, ___nl__im__12);
#line 129
___nl__bool__17 = false;
#line 129
c_rt_lib0move(&___nl__im__18, c_rt_lib0bool_to_nl_native(___nl__bool__17));
#line 129
c_rt_lib0move(&___nl__im__15, module_checker0check_module(___nl__im__16, ___nl__im__18, &___nl__im__14));
#line 129
c_rt_lib0clear(&___nl__im__16);
#line 129
//clear ___nl__bool__17;
#line 129
c_rt_lib0clear(&___nl__im__18);
#line 130
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(51)));
#line 130
c_rt_lib0copy(&___nl__im__20, ___nl__im__19);
#line 130
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__20));
#line 130
c_rt_lib0clear(&___nl__im__19);
#line 130
c_rt_lib0clear(&___nl__im__20);
#line 131
c_rt_lib0copy(&___nl__im__21, ___nl__im__3);
#line 131
c_rt_lib0copy(&___nl__im__22, ___nl__im__12);
#line 131
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__21, ___nl__im__22));
#line 131
c_rt_lib0clear(&___nl__im__21);
#line 131
c_rt_lib0clear(&___nl__im__22);
#line 132
goto label_4;
#line 132
label_6:
#line 132
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(140)));
#line 132
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 133
c_rt_lib0copy(&___nl__im__25, ___nl__im__23);
#line 133
c_rt_lib0delete(array0append(&___nl__im__1, ___nl__im__25));
#line 133
c_rt_lib0clear(&___nl__im__25);
#line 134
goto label_4;
#line 134
label_4:
#line 134
label_2:
#line 135
c_rt_lib0move(&___nl__im__6, c_rt_lib0next_iter(___nl__im__6));
#line 135
goto label_3;
#line 135
label_1:
#line 136
c_rt_lib0copy(&___nl__im__28, ___nl__im__1);
#line 136
___nl__int__27 = c_rt_lib0array_len(___nl__im__28);
#line 136
c_rt_lib0clear(&___nl__im__28);
#line 136
___nl__int__29 = 0;
#line 136
___nl__int__30 = ___nl__int__27 > ___nl__int__29;
#line 136
___nl__bool__26 = ___nl__int__30;
#line 136
//clear ___nl__int__27;
#line 136
c_rt_lib0clear(&___nl__im__28);
#line 136
//clear ___nl__int__29;
#line 136
//clear ___nl__int__30;
#line 136
___nl__bool__26 = !___nl__bool__26;
#line 136
if(___nl__bool__26){ goto label_8;}
#line 136
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 136
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 136
c_rt_lib0clear(&___nl__im__0);
#line 136
c_rt_lib0clear(&___nl__im__1);
#line 136
c_rt_lib0clear(&___nl__im__2);
#line 136
c_rt_lib0clear(&___nl__im__3);
#line 136
//clear ___nl__bool__4;
#line 136
c_rt_lib0clear(&___nl__im__5);
#line 136
c_rt_lib0clear(&___nl__im__6);
#line 136
c_rt_lib0clear(&___nl__im__7);
#line 136
c_rt_lib0clear(&___nl__im__8);
#line 136
c_rt_lib0clear(&___nl__im__9);
#line 136
//clear ___nl__bool__10;
#line 136
c_rt_lib0clear(&___nl__im__11);
#line 136
c_rt_lib0clear(&___nl__im__12);
#line 136
c_rt_lib0clear(&___nl__im__13);
#line 136
c_rt_lib0clear(&___nl__im__14);
#line 136
c_rt_lib0clear(&___nl__im__15);
#line 136
c_rt_lib0clear(&___nl__im__16);
#line 136
//clear ___nl__bool__17;
#line 136
c_rt_lib0clear(&___nl__im__18);
#line 136
c_rt_lib0clear(&___nl__im__19);
#line 136
c_rt_lib0clear(&___nl__im__20);
#line 136
c_rt_lib0clear(&___nl__im__21);
#line 136
c_rt_lib0clear(&___nl__im__22);
#line 136
c_rt_lib0clear(&___nl__im__23);
#line 136
c_rt_lib0clear(&___nl__im__24);
#line 136
c_rt_lib0clear(&___nl__im__25);
#line 136
//clear ___nl__bool__26;
#line 136
//clear ___nl__int__27;
#line 136
c_rt_lib0clear(&___nl__im__28);
#line 136
//clear ___nl__int__29;
#line 136
//clear ___nl__int__30;
#line 136
c_rt_lib0clear(&___nl__im__32);
#line 136
return ___nl__im__31;
#line 136
goto label_7;
#line 136
label_8:
#line 136
label_7:
#line 137
c_rt_lib0copy(&___nl__im__34, ___nl__im__2);
#line 137
c_rt_lib0move(&___nl__im__33, type_checker0check_modules(&___nl__im__2, ___nl__im__34));
#line 137
c_rt_lib0clear(&___nl__im__34);
#line 138
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(51)));
#line 138
c_rt_lib0copy(&___nl__im__38, ___nl__im__37);
#line 138
___nl__int__36 = c_rt_lib0array_len(___nl__im__38);
#line 138
c_rt_lib0clear(&___nl__im__37);
#line 138
c_rt_lib0clear(&___nl__im__38);
#line 138
___nl__int__39 = 0;
#line 138
___nl__int__40 = ___nl__int__36 > ___nl__int__39;
#line 138
___nl__bool__35 = ___nl__int__40;
#line 138
//clear ___nl__int__36;
#line 138
c_rt_lib0clear(&___nl__im__37);
#line 138
c_rt_lib0clear(&___nl__im__38);
#line 138
//clear ___nl__int__39;
#line 138
//clear ___nl__int__40;
#line 138
___nl__bool__35 = !___nl__bool__35;
#line 138
if(___nl__bool__35){ goto label_10;}
#line 138
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(51)));
#line 138
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__43));
#line 138
c_rt_lib0clear(&___nl__im__43);
#line 138
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 138
c_rt_lib0clear(&___nl__im__0);
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
//clear ___nl__bool__10;
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
//clear ___nl__bool__17;
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
//clear ___nl__bool__26;
#line 138
//clear ___nl__int__27;
#line 138
c_rt_lib0clear(&___nl__im__28);
#line 138
//clear ___nl__int__29;
#line 138
//clear ___nl__int__30;
#line 138
c_rt_lib0clear(&___nl__im__31);
#line 138
c_rt_lib0clear(&___nl__im__32);
#line 138
c_rt_lib0clear(&___nl__im__33);
#line 138
c_rt_lib0clear(&___nl__im__34);
#line 138
//clear ___nl__bool__35;
#line 138
//clear ___nl__int__36;
#line 138
c_rt_lib0clear(&___nl__im__37);
#line 138
c_rt_lib0clear(&___nl__im__38);
#line 138
//clear ___nl__int__39;
#line 138
//clear ___nl__int__40;
#line 138
c_rt_lib0clear(&___nl__im__42);
#line 138
c_rt_lib0clear(&___nl__im__43);
#line 138
return ___nl__im__41;
#line 138
goto label_9;
#line 138
label_10:
#line 138
label_9:
#line 139
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(0));
#line 140
c_rt_lib0move(&___nl__im__48, c_rt_lib0init_iter(___nl__im__2));
#line 140
label_13:
#line 140
___nl__bool__46 = c_rt_lib0is_end_hash(___nl__im__48);
#line 140
if(___nl__bool__46){ goto label_11;}
#line 140
c_rt_lib0move(&___nl__im__45, c_rt_lib0get_key_iter(___nl__im__48));
#line 140
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__45));
#line 141
c_rt_lib0copy(&___nl__im__49, ___nl__im__45);
#line 141
c_rt_lib0copy(&___nl__im__51, ___nl__im__47);
#line 141
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_mk(0));
#line 141
c_rt_lib0copy(&___nl__im__53, ___nl__im__52);
#line 141
c_rt_lib0move(&___nl__im__50, translator0translate(___nl__im__51, ___nl__im__53));
#line 141
c_rt_lib0clear(&___nl__im__51);
#line 141
c_rt_lib0clear(&___nl__im__52);
#line 141
c_rt_lib0clear(&___nl__im__53);
#line 141
c_rt_lib0copy(&___nl__im__54, ___nl__im__50);
#line 141
c_rt_lib0delete(hash0set_value(&___nl__im__44, ___nl__im__49, ___nl__im__54));
#line 141
c_rt_lib0clear(&___nl__im__49);
#line 141
c_rt_lib0clear(&___nl__im__50);
#line 141
c_rt_lib0clear(&___nl__im__51);
#line 141
c_rt_lib0clear(&___nl__im__52);
#line 141
c_rt_lib0clear(&___nl__im__53);
#line 141
c_rt_lib0clear(&___nl__im__54);
#line 141
label_12:
#line 142
c_rt_lib0move(&___nl__im__48, c_rt_lib0next_iter(___nl__im__48));
#line 142
goto label_13;
#line 142
label_11:
#line 143
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_mk(0));
#line 143
c_rt_lib0copy(&___nl__im__57, ___nl__im__56);
#line 143
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_const(83)));
#line 143
c_rt_lib0copy(&___nl__im__59, ___nl__im__58);
#line 143
c_rt_lib0move(&___nl__im__55, post_processing0init(___nl__im__57, ___nl__im__59));
#line 143
c_rt_lib0clear(&___nl__im__56);
#line 143
c_rt_lib0clear(&___nl__im__57);
#line 143
c_rt_lib0clear(&___nl__im__58);
#line 143
c_rt_lib0clear(&___nl__im__59);
#line 144
c_rt_lib0delete(post_processing0find(&___nl__im__55, &___nl__im__44));
#line 145
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_arg(___get_global_const(81), ___nl__im__44));
#line 145
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 145
c_rt_lib0clear(&___nl__im__0);
#line 145
c_rt_lib0clear(&___nl__im__1);
#line 145
c_rt_lib0clear(&___nl__im__2);
#line 145
c_rt_lib0clear(&___nl__im__3);
#line 145
//clear ___nl__bool__4;
#line 145
c_rt_lib0clear(&___nl__im__5);
#line 145
c_rt_lib0clear(&___nl__im__6);
#line 145
c_rt_lib0clear(&___nl__im__7);
#line 145
c_rt_lib0clear(&___nl__im__8);
#line 145
c_rt_lib0clear(&___nl__im__9);
#line 145
//clear ___nl__bool__10;
#line 145
c_rt_lib0clear(&___nl__im__11);
#line 145
c_rt_lib0clear(&___nl__im__12);
#line 145
c_rt_lib0clear(&___nl__im__13);
#line 145
c_rt_lib0clear(&___nl__im__14);
#line 145
c_rt_lib0clear(&___nl__im__15);
#line 145
c_rt_lib0clear(&___nl__im__16);
#line 145
//clear ___nl__bool__17;
#line 145
c_rt_lib0clear(&___nl__im__18);
#line 145
c_rt_lib0clear(&___nl__im__19);
#line 145
c_rt_lib0clear(&___nl__im__20);
#line 145
c_rt_lib0clear(&___nl__im__21);
#line 145
c_rt_lib0clear(&___nl__im__22);
#line 145
c_rt_lib0clear(&___nl__im__23);
#line 145
c_rt_lib0clear(&___nl__im__24);
#line 145
c_rt_lib0clear(&___nl__im__25);
#line 145
//clear ___nl__bool__26;
#line 145
//clear ___nl__int__27;
#line 145
c_rt_lib0clear(&___nl__im__28);
#line 145
//clear ___nl__int__29;
#line 145
//clear ___nl__int__30;
#line 145
c_rt_lib0clear(&___nl__im__31);
#line 145
c_rt_lib0clear(&___nl__im__32);
#line 145
c_rt_lib0clear(&___nl__im__33);
#line 145
c_rt_lib0clear(&___nl__im__34);
#line 145
//clear ___nl__bool__35;
#line 145
//clear ___nl__int__36;
#line 145
c_rt_lib0clear(&___nl__im__37);
#line 145
c_rt_lib0clear(&___nl__im__38);
#line 145
//clear ___nl__int__39;
#line 145
//clear ___nl__int__40;
#line 145
c_rt_lib0clear(&___nl__im__41);
#line 145
c_rt_lib0clear(&___nl__im__42);
#line 145
c_rt_lib0clear(&___nl__im__43);
#line 145
c_rt_lib0clear(&___nl__im__44);
#line 145
c_rt_lib0clear(&___nl__im__45);
#line 145
//clear ___nl__bool__46;
#line 145
c_rt_lib0clear(&___nl__im__47);
#line 145
c_rt_lib0clear(&___nl__im__48);
#line 145
c_rt_lib0clear(&___nl__im__49);
#line 145
c_rt_lib0clear(&___nl__im__50);
#line 145
c_rt_lib0clear(&___nl__im__51);
#line 145
c_rt_lib0clear(&___nl__im__52);
#line 145
c_rt_lib0clear(&___nl__im__53);
#line 145
c_rt_lib0clear(&___nl__im__54);
#line 145
c_rt_lib0clear(&___nl__im__55);
#line 145
c_rt_lib0clear(&___nl__im__56);
#line 145
c_rt_lib0clear(&___nl__im__57);
#line 145
c_rt_lib0clear(&___nl__im__58);
#line 145
c_rt_lib0clear(&___nl__im__59);
#line 145
c_rt_lib0clear(&___nl__im__61);
#line 145
return ___nl__im__60;
#line 145
c_rt_lib0clear(&___nl__im__0);
#line 145
c_rt_lib0clear(&___nl__im__1);
#line 145
c_rt_lib0clear(&___nl__im__2);
#line 145
c_rt_lib0clear(&___nl__im__3);
#line 145
//clear ___nl__bool__4;
#line 145
c_rt_lib0clear(&___nl__im__5);
#line 145
c_rt_lib0clear(&___nl__im__6);
#line 145
c_rt_lib0clear(&___nl__im__7);
#line 145
c_rt_lib0clear(&___nl__im__8);
#line 145
c_rt_lib0clear(&___nl__im__9);
#line 145
//clear ___nl__bool__10;
#line 145
c_rt_lib0clear(&___nl__im__11);
#line 145
c_rt_lib0clear(&___nl__im__12);
#line 145
c_rt_lib0clear(&___nl__im__13);
#line 145
c_rt_lib0clear(&___nl__im__14);
#line 145
c_rt_lib0clear(&___nl__im__15);
#line 145
c_rt_lib0clear(&___nl__im__16);
#line 145
//clear ___nl__bool__17;
#line 145
c_rt_lib0clear(&___nl__im__18);
#line 145
c_rt_lib0clear(&___nl__im__19);
#line 145
c_rt_lib0clear(&___nl__im__20);
#line 145
c_rt_lib0clear(&___nl__im__21);
#line 145
c_rt_lib0clear(&___nl__im__22);
#line 145
c_rt_lib0clear(&___nl__im__23);
#line 145
c_rt_lib0clear(&___nl__im__24);
#line 145
c_rt_lib0clear(&___nl__im__25);
#line 145
//clear ___nl__bool__26;
#line 145
//clear ___nl__int__27;
#line 145
c_rt_lib0clear(&___nl__im__28);
#line 145
//clear ___nl__int__29;
#line 145
//clear ___nl__int__30;
#line 145
c_rt_lib0clear(&___nl__im__31);
#line 145
c_rt_lib0clear(&___nl__im__32);
#line 145
c_rt_lib0clear(&___nl__im__33);
#line 145
c_rt_lib0clear(&___nl__im__34);
#line 145
//clear ___nl__bool__35;
#line 145
//clear ___nl__int__36;
#line 145
c_rt_lib0clear(&___nl__im__37);
#line 145
c_rt_lib0clear(&___nl__im__38);
#line 145
//clear ___nl__int__39;
#line 145
//clear ___nl__int__40;
#line 145
c_rt_lib0clear(&___nl__im__41);
#line 145
c_rt_lib0clear(&___nl__im__42);
#line 145
c_rt_lib0clear(&___nl__im__43);
#line 145
c_rt_lib0clear(&___nl__im__44);
#line 145
c_rt_lib0clear(&___nl__im__45);
#line 145
//clear ___nl__bool__46;
#line 145
c_rt_lib0clear(&___nl__im__47);
#line 145
c_rt_lib0clear(&___nl__im__48);
#line 145
c_rt_lib0clear(&___nl__im__49);
#line 145
c_rt_lib0clear(&___nl__im__50);
#line 145
c_rt_lib0clear(&___nl__im__51);
#line 145
c_rt_lib0clear(&___nl__im__52);
#line 145
c_rt_lib0clear(&___nl__im__53);
#line 145
c_rt_lib0clear(&___nl__im__54);
#line 145
c_rt_lib0clear(&___nl__im__55);
#line 145
c_rt_lib0clear(&___nl__im__56);
#line 145
c_rt_lib0clear(&___nl__im__57);
#line 145
c_rt_lib0clear(&___nl__im__58);
#line 145
c_rt_lib0clear(&___nl__im__59);
#line 145
c_rt_lib0clear(&___nl__im__60);
#line 145
c_rt_lib0clear(&___nl__im__61);
#line 145
return NULL;
}

ImmT  string_compiler0compile_to_js0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_compiler0compile_to_js");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string_compiler0compile_to_js(var0, var1);
}
ImmT  string_compiler0compile_to_js(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_compiler_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
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
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 152
c_rt_lib0copy(&___nl__im__5, ___nl__im__0);
#line 152
c_rt_lib0move(&___nl__im__4, string_compiler0compile_to_nlasm(___nl__im__5));
#line 152
c_rt_lib0clear(&___nl__im__5);
#line 152
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(81));
#line 152
if(___nl__bool__3){ goto label_1;}
#line 152
c_rt_lib0clear(&___nl__im__0);
#line 152
c_rt_lib0clear(&___nl__im__1);
#line 152
c_rt_lib0clear(&___nl__im__2);
#line 152
//clear ___nl__bool__3;
#line 152
c_rt_lib0clear(&___nl__im__5);
#line 152
return ___nl__im__4;
#line 152
label_1:
#line 152
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(81)));
#line 153
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 154
c_rt_lib0move(&___nl__im__10, c_rt_lib0init_iter(___nl__im__2));
#line 154
label_4:
#line 154
___nl__bool__8 = c_rt_lib0is_end_hash(___nl__im__10);
#line 154
if(___nl__bool__8){ goto label_2;}
#line 154
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_key_iter(___nl__im__10));
#line 154
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value(___nl__im__2, ___nl__im__7));
#line 155
c_rt_lib0copy(&___nl__im__11, ___nl__im__7);
#line 155
c_rt_lib0copy(&___nl__im__13, ___nl__im__9);
#line 155
c_rt_lib0copy(&___nl__im__14, ___nl__im__1);
#line 155
c_rt_lib0move(&___nl__im__12, generator_js0generate(___nl__im__13, ___nl__im__14));
#line 155
c_rt_lib0clear(&___nl__im__13);
#line 155
c_rt_lib0clear(&___nl__im__14);
#line 155
c_rt_lib0copy(&___nl__im__15, ___nl__im__12);
#line 155
c_rt_lib0delete(hash0set_value(&___nl__im__6, ___nl__im__11, ___nl__im__15));
#line 155
c_rt_lib0clear(&___nl__im__11);
#line 155
c_rt_lib0clear(&___nl__im__12);
#line 155
c_rt_lib0clear(&___nl__im__13);
#line 155
c_rt_lib0clear(&___nl__im__14);
#line 155
c_rt_lib0clear(&___nl__im__15);
#line 155
label_3:
#line 156
c_rt_lib0move(&___nl__im__10, c_rt_lib0next_iter(___nl__im__10));
#line 156
goto label_4;
#line 156
label_2:
#line 157
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(81), ___nl__im__6));
#line 157
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 157
c_rt_lib0clear(&___nl__im__0);
#line 157
c_rt_lib0clear(&___nl__im__1);
#line 157
c_rt_lib0clear(&___nl__im__2);
#line 157
//clear ___nl__bool__3;
#line 157
c_rt_lib0clear(&___nl__im__4);
#line 157
c_rt_lib0clear(&___nl__im__5);
#line 157
c_rt_lib0clear(&___nl__im__6);
#line 157
c_rt_lib0clear(&___nl__im__7);
#line 157
//clear ___nl__bool__8;
#line 157
c_rt_lib0clear(&___nl__im__9);
#line 157
c_rt_lib0clear(&___nl__im__10);
#line 157
c_rt_lib0clear(&___nl__im__11);
#line 157
c_rt_lib0clear(&___nl__im__12);
#line 157
c_rt_lib0clear(&___nl__im__13);
#line 157
c_rt_lib0clear(&___nl__im__14);
#line 157
c_rt_lib0clear(&___nl__im__15);
#line 157
c_rt_lib0clear(&___nl__im__17);
#line 157
return ___nl__im__16;
#line 157
c_rt_lib0clear(&___nl__im__0);
#line 157
c_rt_lib0clear(&___nl__im__1);
#line 157
c_rt_lib0clear(&___nl__im__2);
#line 157
//clear ___nl__bool__3;
#line 157
c_rt_lib0clear(&___nl__im__4);
#line 157
c_rt_lib0clear(&___nl__im__5);
#line 157
c_rt_lib0clear(&___nl__im__6);
#line 157
c_rt_lib0clear(&___nl__im__7);
#line 157
//clear ___nl__bool__8;
#line 157
c_rt_lib0clear(&___nl__im__9);
#line 157
c_rt_lib0clear(&___nl__im__10);
#line 157
c_rt_lib0clear(&___nl__im__11);
#line 157
c_rt_lib0clear(&___nl__im__12);
#line 157
c_rt_lib0clear(&___nl__im__13);
#line 157
c_rt_lib0clear(&___nl__im__14);
#line 157
c_rt_lib0clear(&___nl__im__15);
#line 157
c_rt_lib0clear(&___nl__im__16);
#line 157
c_rt_lib0clear(&___nl__im__17);
#line 157
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void string_compiler_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT string_compiler_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT string_compiler_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
