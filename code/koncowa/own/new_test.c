
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "test_own_var.h"
#include "ptd.h"
#include "own.h"
#line 1 "test_own_var.nl"

static ImmT *__const__f = NULL;
void test_own_var_priv0__const__init();
ImmT test_own_var_priv0__const__sim(int __nr);
ImmT test_own_var_priv0__const__sing(int __nr);

void test_own_var0anon_type00VBnone0pusty0anon_type00int0liczba0anon_type00bool0wyrazenie_logiczne0anon_type00im0napis0anon_type00im0wartosc_imowa0VE0ov_mk(anon_type00VBnone0pusty0anon_type00int0liczba0anon_type00bool0wyrazenie_logiczne0anon_type00im0napis0anon_type00im0wartosc_imowa0VE *var, int label, void *value, INT  size) {
if (var->value.internal != NULL) {
test_own_var0anon_type00VBnone0pusty0anon_type00int0liczba0anon_type00bool0wyrazenie_logiczne0anon_type00im0napis0anon_type00im0wartosc_imowa0VE0clean(*var);
var->value.internal = NULL;
}
var->label = label;
if (value != NULL) {
var->value.internal = alloc_mem(size);
memcpy(var->value.internal, value, size);
}
var->size = size;
}
void test_own_var0anon_type00VBnone0pusty0anon_type00int0liczba0anon_type00bool0wyrazenie_logiczne0anon_type00im0napis0anon_type00im0wartosc_imowa0VE0clean(anon_type00VBnone0pusty0anon_type00int0liczba0anon_type00bool0wyrazenie_logiczne0anon_type00im0napis0anon_type00im0wartosc_imowa0VE var) {
switch (var.label) {
case 1:
free_mem(var.value.liczba0case, sizeof(INT));
break;
case 2:
free_mem(var.value.wyrazenie_logiczne0case, sizeof(bool));
break;
case 3:
c_rt_lib0clear(var.value.napis0case);
free_mem(var.value.internal, sizeof(ImmT));
break;
case 4:
c_rt_lib0clear(var.value.wartosc_imowa0case);
free_mem(var.value.internal, sizeof(ImmT));
break;
}
}
void test_own_var0anon_type00VBnone0pusty0anon_type00int0liczba0anon_type00bool0wyrazenie_logiczne0anon_type00im0napis0anon_type00im0wartosc_imowa0VE0free(anon_type00VBnone0pusty0anon_type00int0liczba0anon_type00bool0wyrazenie_logiczne0anon_type00im0napis0anon_type00im0wartosc_imowa0VE *var){
test_own_var0anon_type00VBnone0pusty0anon_type00int0liczba0anon_type00bool0wyrazenie_logiczne0anon_type00im0napis0anon_type00im0wartosc_imowa0VE0clean(*var);
free_mem(var, sizeof(*var));
}
void test_own_var0anon_type00ownarranon_type00int0push(anon_type00ownarranon_type00int *arr, INT  arg) {
if (arr->value == NULL) {
arr->value = alloc_mem(16*sizeof(INT ));
arr->capacity = 16;
arr->size = 0;
}
if (arr->size+1 == arr->capacity) {
arr->value = realloc_mem(arr->value, arr->capacity*sizeof(INT ), arr->capacity*2*sizeof(INT ));
arr->capacity *= 2;
}
arr->value[arr->size++] = arg;
}
INT  *test_own_var0anon_type00ownarranon_type00int0get_ptr(anon_type00ownarranon_type00int *arr, INT index) {
if (index < 0 || index >= arr->size) {
nl_die();
}
return &(arr->value[index]);
}
INT test_own_var0anon_type00ownarranon_type00int0len(anon_type00ownarranon_type00int *arr) {
return arr->size;
}
void test_own_var0anon_type00ownarranon_type00int0clean(anon_type00ownarranon_type00int arr) {
if (arr.value == NULL) return;
for (unsigned int i = 0; i < arr.size; i++) {
	;
}
free_mem(arr.value, sizeof(INT )*arr.capacity);
arr.value = NULL;
}
void test_own_var0anon_type00ownarranon_type00int0free(anon_type00ownarranon_type00int *arr) {
test_own_var0anon_type00ownarranon_type00int0clean(*arr);
free_mem(arr, sizeof(*arr));
}
void test_own_var0anon_type00RBanon_type00int0pole_ownowe0RE0clean(anon_type00RBanon_type00int0pole_ownowe0RE rec) {
;
}
void test_own_var0anon_type00RBanon_type00int0pole_ownowe0RE0free(anon_type00RBanon_type00int0pole_ownowe0RE *rec) {
test_own_var0anon_type00RBanon_type00int0pole_ownowe0RE0clean(*rec);
free_mem(rec, sizeof(*rec));
}
void test_own_var0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0ov_mk(anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE *var, int label, void *value, INT  size) {
if (var->value.internal != NULL) {
test_own_var0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0clean(*var);
var->value.internal = NULL;
}
var->label = label;
if (value != NULL) {
var->value.internal = alloc_mem(size);
memcpy(var->value.internal, value, size);
}
var->size = size;
}
void test_own_var0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0clean(anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE var) {
switch (var.label) {
case 0:
free_mem(var.value.wariant_ownowy_wewnetrzny0case, sizeof(INT));
break;
}
}
void test_own_var0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0free(anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE *var){
test_own_var0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0clean(*var);
free_mem(var, sizeof(*var));
}
void test_own_var0anon_type00VBanon_type00im0tablica_imowa0anon_type00ownarranon_type00int0tablica_ownowa0anon_type00im0rekord_imowy0anon_type00RBanon_type00int0pole_ownowe0RE0rekord_ownowy0anon_type00im0wariant_imowy0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0wariant_ownowy0VE0ov_mk(anon_type00VBanon_type00im0tablica_imowa0anon_type00ownarranon_type00int0tablica_ownowa0anon_type00im0rekord_imowy0anon_type00RBanon_type00int0pole_ownowe0RE0rekord_ownowy0anon_type00im0wariant_imowy0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0wariant_ownowy0VE *var, int label, void *value, INT  size) {
if (var->value.internal != NULL) {
test_own_var0anon_type00VBanon_type00im0tablica_imowa0anon_type00ownarranon_type00int0tablica_ownowa0anon_type00im0rekord_imowy0anon_type00RBanon_type00int0pole_ownowe0RE0rekord_ownowy0anon_type00im0wariant_imowy0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0wariant_ownowy0VE0clean(*var);
var->value.internal = NULL;
}
var->label = label;
if (value != NULL) {
var->value.internal = alloc_mem(size);
memcpy(var->value.internal, value, size);
}
var->size = size;
}
void test_own_var0anon_type00VBanon_type00im0tablica_imowa0anon_type00ownarranon_type00int0tablica_ownowa0anon_type00im0rekord_imowy0anon_type00RBanon_type00int0pole_ownowe0RE0rekord_ownowy0anon_type00im0wariant_imowy0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0wariant_ownowy0VE0clean(anon_type00VBanon_type00im0tablica_imowa0anon_type00ownarranon_type00int0tablica_ownowa0anon_type00im0rekord_imowy0anon_type00RBanon_type00int0pole_ownowe0RE0rekord_ownowy0anon_type00im0wariant_imowy0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0wariant_ownowy0VE var) {
switch (var.label) {
case 0:
c_rt_lib0clear(var.value.tablica_imowa0case);
free_mem(var.value.internal, sizeof(ImmT));
break;
case 1:
test_own_var0anon_type00ownarranon_type00int0free(var.value.tablica_ownowa0case);
break;
case 2:
c_rt_lib0clear(var.value.rekord_imowy0case);
free_mem(var.value.internal, sizeof(ImmT));
break;
case 3:
test_own_var0anon_type00RBanon_type00int0pole_ownowe0RE0free(var.value.rekord_ownowy0case);
break;
case 4:
c_rt_lib0clear(var.value.wariant_imowy0case);
free_mem(var.value.internal, sizeof(ImmT));
break;
case 5:
test_own_var0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0free(var.value.wariant_ownowy0case);
break;
}
}
void test_own_var0anon_type00VBanon_type00im0tablica_imowa0anon_type00ownarranon_type00int0tablica_ownowa0anon_type00im0rekord_imowy0anon_type00RBanon_type00int0pole_ownowe0RE0rekord_ownowy0anon_type00im0wariant_imowy0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0wariant_ownowy0VE0free(anon_type00VBanon_type00im0tablica_imowa0anon_type00ownarranon_type00int0tablica_ownowa0anon_type00im0rekord_imowy0anon_type00RBanon_type00int0pole_ownowe0RE0rekord_ownowy0anon_type00im0wariant_imowy0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0wariant_ownowy0VE *var){
test_own_var0anon_type00VBanon_type00im0tablica_imowa0anon_type00ownarranon_type00int0tablica_ownowa0anon_type00im0rekord_imowy0anon_type00RBanon_type00int0pole_ownowe0RE0rekord_ownowy0anon_type00im0wariant_imowy0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0wariant_ownowy0VE0clean(*var);
free_mem(var, sizeof(*var));
}
void test_own_var0test_own_var0prosty_wariant0type0ov_mk(test_own_var0prosty_wariant0type *var, int label, void *value, INT  size) {
if (var->value.internal != NULL) {
test_own_var0test_own_var0prosty_wariant0type0clean(*var);
var->value.internal = NULL;
}
var->label = label;
if (value != NULL) {
var->value.internal = alloc_mem(size);
memcpy(var->value.internal, value, size);
}
var->size = size;
}
void test_own_var0test_own_var0prosty_wariant0type0clean(test_own_var0prosty_wariant0type var) {
switch (var.label) {
case 1:
free_mem(var.value.liczba0case, sizeof(INT));
break;
case 2:
free_mem(var.value.wyrazenie_logiczne0case, sizeof(bool));
break;
case 3:
c_rt_lib0clear(var.value.napis0case);
free_mem(var.value.internal, sizeof(ImmT));
break;
case 4:
c_rt_lib0clear(var.value.wartosc_imowa0case);
free_mem(var.value.internal, sizeof(ImmT));
break;
}
}
void test_own_var0test_own_var0prosty_wariant0type0free(test_own_var0prosty_wariant0type *var){
test_own_var0test_own_var0prosty_wariant0type0clean(*var);
free_mem(var, sizeof(*var));
}
void test_own_var0test_own_var0zlozony_wariant0type0ov_mk(test_own_var0zlozony_wariant0type *var, int label, void *value, INT  size) {
if (var->value.internal != NULL) {
test_own_var0test_own_var0zlozony_wariant0type0clean(*var);
var->value.internal = NULL;
}
var->label = label;
if (value != NULL) {
var->value.internal = alloc_mem(size);
memcpy(var->value.internal, value, size);
}
var->size = size;
}
void test_own_var0test_own_var0zlozony_wariant0type0clean(test_own_var0zlozony_wariant0type var) {
switch (var.label) {
case 0:
c_rt_lib0clear(var.value.tablica_imowa0case);
free_mem(var.value.internal, sizeof(ImmT));
break;
case 1:
test_own_var0anon_type00ownarranon_type00int0free(var.value.tablica_ownowa0case);
break;
case 2:
c_rt_lib0clear(var.value.rekord_imowy0case);
free_mem(var.value.internal, sizeof(ImmT));
break;
case 3:
test_own_var0anon_type00RBanon_type00int0pole_ownowe0RE0free(var.value.rekord_ownowy0case);
break;
case 4:
c_rt_lib0clear(var.value.wariant_imowy0case);
free_mem(var.value.internal, sizeof(ImmT));
break;
case 5:
test_own_var0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0free(var.value.wariant_ownowy0case);
break;
}
}
void test_own_var0test_own_var0zlozony_wariant0type0free(test_own_var0zlozony_wariant0type *var){
test_own_var0test_own_var0zlozony_wariant0type0clean(*var);
free_mem(var, sizeof(*var));
}
ImmT  test_own_var_priv0prosty_test();
ImmT  test_own_var_priv0zlozony_test();
ImmT  test_own_var_priv0conv_to_im00ownarranon_type0000int(anon_type00ownarranon_type00int* ___ref___arr__0);
ImmT  test_own_var_priv0conv_to_im00RBanon_type0000int00pole_ownowe00RE(anon_type00RBanon_type00int0pole_ownowe0RE* ___ref___rec__0);
ImmT  test_own_var_priv0conv_to_im00VBanon_type0000int00wariant_ownowy_wewnetrzny00VE(anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE* ___ref___var__0);


ImmT  test_own_var0test0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "test_own_var0test");
return test_own_var0test();
}
ImmT  test_own_var0test() {
test_own_var_priv0__const__init();
#line 9
c_rt_lib0delete(test_own_var_priv0prosty_test());
#line 10
c_rt_lib0delete(test_own_var_priv0zlozony_test());
#line 10
return NULL;
}

ImmT  test_own_var0prosty_wariant0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "test_own_var0prosty_wariant");
return test_own_var0prosty_wariant();
}
ImmT  test_own_var0prosty_wariant() {
test_own_var_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 15
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 16
c_rt_lib0move(&___nl__im__4, ptd0int());
#line 17
c_rt_lib0move(&___nl__im__5, ptd0bool());
#line 18
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 19
c_rt_lib0move(&___nl__im__7, ptd0ptd_im());
#line 19
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(5, ___get_global_const(196), ___nl__im__3, ___get_global_const(178), ___nl__im__4, ___get_global_const(197), ___nl__im__5, ___get_global_const(179), ___nl__im__6, ___get_global_const(198), ___nl__im__7));
#line 19
c_rt_lib0clear(&___nl__im__3);
#line 19
c_rt_lib0clear(&___nl__im__4);
#line 19
c_rt_lib0clear(&___nl__im__5);
#line 19
c_rt_lib0clear(&___nl__im__6);
#line 19
c_rt_lib0clear(&___nl__im__7);
#line 19
c_rt_lib0copy(&___nl__im__8, ___nl__im__2);
#line 19
c_rt_lib0move(&___nl__im__1, own0var(___nl__im__8));
#line 19
c_rt_lib0clear(&___nl__im__2);
#line 19
c_rt_lib0clear(&___nl__im__3);
#line 19
c_rt_lib0clear(&___nl__im__4);
#line 19
c_rt_lib0clear(&___nl__im__5);
#line 19
c_rt_lib0clear(&___nl__im__6);
#line 19
c_rt_lib0clear(&___nl__im__7);
#line 19
c_rt_lib0clear(&___nl__im__8);
#line 19
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 19
c_rt_lib0clear(&___nl__im__1);
#line 19
c_rt_lib0clear(&___nl__im__2);
#line 19
c_rt_lib0clear(&___nl__im__3);
#line 19
c_rt_lib0clear(&___nl__im__4);
#line 19
c_rt_lib0clear(&___nl__im__5);
#line 19
c_rt_lib0clear(&___nl__im__6);
#line 19
c_rt_lib0clear(&___nl__im__7);
#line 19
c_rt_lib0clear(&___nl__im__8);
#line 19
return ___nl__im__0;
#line 19
c_rt_lib0clear(&___nl__im__0);
#line 19
c_rt_lib0clear(&___nl__im__1);
#line 19
c_rt_lib0clear(&___nl__im__2);
#line 19
c_rt_lib0clear(&___nl__im__3);
#line 19
c_rt_lib0clear(&___nl__im__4);
#line 19
c_rt_lib0clear(&___nl__im__5);
#line 19
c_rt_lib0clear(&___nl__im__6);
#line 19
c_rt_lib0clear(&___nl__im__7);
#line 19
c_rt_lib0clear(&___nl__im__8);
#line 19
return NULL;
}

ImmT  test_own_var_priv0prosty_test() {
test_own_var_priv0__const__init();
test_own_var0prosty_wariant0type ___nl__var__0 = {};
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
INT * ___nl__int_ptr__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool * ___nl__bool_ptr__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT * ___nl__im_ptr__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT * ___nl__im_ptr__13 = NULL;
ImmT  ___nl__im__14 = NULL;
test_own_var0prosty_wariant0type ___nl__var__15 = {};
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
INT  ___nl__int__22 = 0;
INT * ___nl__int_ptr__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT * ___nl__int_ptr__30 = NULL;
bool  ___nl__bool__31 = false;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
bool * ___nl__bool_ptr__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT * ___nl__im_ptr__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT * ___nl__im_ptr__40 = NULL;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
INT  ___nl__int__43 = 0;
INT * ___nl__int_ptr__44 = NULL;
INT  ___nl__int__45 = 0;
INT  ___nl__int__46 = 0;
ImmT  ___nl__im__47 = NULL;
test_own_var0prosty_wariant0type ___nl__var__48 = {};
bool  ___nl__bool__49 = false;
bool  ___nl__bool__50 = false;
ImmT  ___nl__im__51 = NULL;
bool  ___nl__bool__52 = false;
ImmT  ___nl__im__53 = NULL;
bool  ___nl__bool__54 = false;
bool * ___nl__bool_ptr__55 = NULL;
ImmT  ___nl__im__56 = NULL;
bool  ___nl__bool__57 = false;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
INT * ___nl__int_ptr__60 = NULL;
ImmT  ___nl__im__61 = NULL;
bool * ___nl__bool_ptr__62 = NULL;
bool  ___nl__bool__63 = false;
ImmT  ___nl__im__64 = NULL;
ImmT * ___nl__im_ptr__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT * ___nl__im_ptr__67 = NULL;
ImmT  ___nl__im__68 = NULL;
bool  ___nl__bool__69 = false;
bool * ___nl__bool_ptr__70 = NULL;
ImmT  ___nl__im__71 = NULL;
test_own_var0prosty_wariant0type ___nl__var__72 = {};
ImmT  ___nl__im__73 = NULL;
bool  ___nl__bool__74 = false;
ImmT  ___nl__im__75 = NULL;
bool  ___nl__bool__76 = false;
ImmT  ___nl__im__77 = NULL;
bool  ___nl__bool__78 = false;
ImmT  ___nl__im__79 = NULL;
ImmT * ___nl__im_ptr__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__string__82 = NULL;
ImmT  ___nl__string__83 = NULL;
ImmT  ___nl__im__84 = NULL;
bool  ___nl__bool__85 = false;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
INT * ___nl__int_ptr__88 = NULL;
ImmT  ___nl__im__89 = NULL;
bool * ___nl__bool_ptr__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT * ___nl__im_ptr__92 = NULL;
bool  ___nl__bool__93 = false;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__string__95 = NULL;
ImmT  ___nl__string__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__string__99 = NULL;
ImmT  ___nl__string__100 = NULL;
ImmT  ___nl__string__101 = NULL;
ImmT * ___nl__im_ptr__102 = NULL;
ImmT  ___nl__im__103 = NULL;
bool  ___nl__bool__104 = false;
ImmT  ___nl__im__105 = NULL;
ImmT * ___nl__im_ptr__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__string__108 = NULL;
ImmT  ___nl__string__109 = NULL;
ImmT  ___nl__im__110 = NULL;
test_own_var0prosty_wariant0type ___nl__var__111 = {};
INT  ___nl__int__112 = 0;
ImmT  ___nl__im__113 = NULL;
bool  ___nl__bool__114 = false;
ImmT  ___nl__im__115 = NULL;
bool  ___nl__bool__116 = false;
ImmT  ___nl__im__117 = NULL;
bool  ___nl__bool__118 = false;
ImmT  ___nl__im__119 = NULL;
ImmT * ___nl__im_ptr__120 = NULL;
INT  ___nl__int__121 = 0;
INT  ___nl__int__122 = 0;
INT  ___nl__int__123 = 0;
ImmT  ___nl__im__124 = NULL;
bool  ___nl__bool__125 = false;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
INT * ___nl__int_ptr__128 = NULL;
ImmT  ___nl__im__129 = NULL;
bool * ___nl__bool_ptr__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT * ___nl__im_ptr__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT * ___nl__im_ptr__134 = NULL;
bool  ___nl__bool__135 = false;
INT  ___nl__int__136 = 0;
INT  ___nl__int__137 = 0;
INT  ___nl__int__138 = 0;
ImmT  ___nl__im__139 = NULL;
INT  ___nl__int__140 = 0;
INT  ___nl__int__141 = 0;
INT  ___nl__int__142 = 0;
bool  ___nl__bool__143 = false;
ImmT  ___nl__im__144 = NULL;
ImmT * ___nl__im_ptr__145 = NULL;
INT  ___nl__int__146 = 0;
INT  ___nl__int__147 = 0;
INT  ___nl__int__148 = 0;
ImmT  ___nl__im__149 = NULL;
#line 24
test_own_var0test_own_var0prosty_wariant0type0ov_mk(&___nl__var__0, 0, NULL, 0);
#line 25
___nl__bool__1 = (___nl__var__0.label == 0);
#line 25
___nl__bool__1 = !___nl__bool__1;
#line 25
___nl__bool__1 = !___nl__bool__1;
#line 25
if(___nl__bool__1){ goto label_2;}
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 25
nl_die_arg(___nl__im__2);
#line 25
goto label_1;
#line 25
label_2:
#line 25
label_1:
#line 26
___nl__bool__3 = (___nl__var__0.label == 1);
#line 26
___nl__bool__3 = !___nl__bool__3;
#line 26
if(___nl__bool__3){ goto label_4;}
#line 26
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 26
nl_die_arg(___nl__im__4);
#line 26
goto label_3;
#line 26
label_4:
#line 26
label_3:
#line 27
___nl__bool__5 = (___nl__var__0.label == 0);
#line 27
if(___nl__bool__5){ goto label_6;}
#line 28
___nl__bool__5 = (___nl__var__0.label == 1);
#line 28
if(___nl__bool__5){ goto label_7;}
#line 30
___nl__bool__5 = (___nl__var__0.label == 2);
#line 30
if(___nl__bool__5){ goto label_8;}
#line 32
___nl__bool__5 = (___nl__var__0.label == 3);
#line 32
if(___nl__bool__5){ goto label_9;}
#line 34
___nl__bool__5 = (___nl__var__0.label == 4);
#line 34
if(___nl__bool__5){ goto label_10;}
#line 34
c_rt_lib0move(&___nl__im__6,___get_global_const(71));
#line 34
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__var__0));
#line 34
nl_die_arg(___nl__im__6);
#line 27
label_6:
#line 28
goto label_5;
#line 28
label_7:
#line 28
if (___nl__var__0.label != 1) nl_die();
___nl__int_ptr__7 = ___nl__var__0.value.liczba0case;
#line 29
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 29
nl_die_arg(___nl__im__8);
#line 30
goto label_5;
#line 30
label_8:
#line 30
if (___nl__var__0.label != 2) nl_die();
___nl__bool_ptr__9 = ___nl__var__0.value.wyrazenie_logiczne0case;
#line 31
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(0));
#line 31
nl_die_arg(___nl__im__10);
#line 32
goto label_5;
#line 32
label_9:
#line 32
if (___nl__var__0.label != 3) nl_die();
___nl__im_ptr__11 = ___nl__var__0.value.napis0case;
#line 33
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 33
nl_die_arg(___nl__im__12);
#line 34
goto label_5;
#line 34
label_10:
#line 34
if (___nl__var__0.label != 4) nl_die();
___nl__im_ptr__13 = ___nl__var__0.value.wartosc_imowa0case;
#line 35
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(0));
#line 35
nl_die_arg(___nl__im__14);
#line 36
goto label_5;
#line 36
label_5:
#line 38
___nl__int__16 = 42;
#line 38
test_own_var0test_own_var0prosty_wariant0type0ov_mk(&___nl__var__15, 1, &___nl__int__16, sizeof(INT ));
#line 39
___nl__bool__17 = (___nl__var__15.label == 1);
#line 39
___nl__bool__17 = !___nl__bool__17;
#line 39
___nl__bool__17 = !___nl__bool__17;
#line 39
if(___nl__bool__17){ goto label_12;}
#line 39
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 39
nl_die_arg(___nl__im__18);
#line 39
goto label_11;
#line 39
label_12:
#line 39
label_11:
#line 40
___nl__bool__19 = (___nl__var__15.label == 2);
#line 40
___nl__bool__19 = !___nl__bool__19;
#line 40
if(___nl__bool__19){ goto label_14;}
#line 40
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 40
nl_die_arg(___nl__im__20);
#line 40
goto label_13;
#line 40
label_14:
#line 40
label_13:
#line 41
if (___nl__var__15.label != 1) nl_die();
___nl__int_ptr__23 = ___nl__var__15.value.liczba0case;
#line 41
___nl__int__22 = (*___nl__int_ptr__23);
#line 41
___nl__int_ptr__23 = NULL;
#line 41
___nl__int__24 = 42;
#line 41
___nl__int__25 = ___nl__int__22 != ___nl__int__24;
#line 41
___nl__bool__21 = ___nl__int__25;
#line 41
//clear ___nl__int__22;
#line 41
//clear ___nl__int__24;
#line 41
//clear ___nl__int__25;
#line 41
___nl__bool__21 = !___nl__bool__21;
#line 41
if(___nl__bool__21){ goto label_16;}
#line 41
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 41
nl_die_arg(___nl__im__26);
#line 41
goto label_15;
#line 41
label_16:
#line 41
label_15:
#line 42
___nl__bool__27 = (___nl__var__15.label == 0);
#line 42
if(___nl__bool__27){ goto label_18;}
#line 44
___nl__bool__27 = (___nl__var__15.label == 1);
#line 44
if(___nl__bool__27){ goto label_19;}
#line 48
___nl__bool__27 = (___nl__var__15.label == 2);
#line 48
if(___nl__bool__27){ goto label_20;}
#line 50
___nl__bool__27 = (___nl__var__15.label == 3);
#line 50
if(___nl__bool__27){ goto label_21;}
#line 52
___nl__bool__27 = (___nl__var__15.label == 4);
#line 52
if(___nl__bool__27){ goto label_22;}
#line 52
c_rt_lib0move(&___nl__im__28,___get_global_const(71));
#line 52
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(2, ___nl__im__28, ___nl__var__15));
#line 52
nl_die_arg(___nl__im__28);
#line 42
label_18:
#line 43
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 43
nl_die_arg(___nl__im__29);
#line 44
goto label_17;
#line 44
label_19:
#line 44
if (___nl__var__15.label != 1) nl_die();
___nl__int_ptr__30 = ___nl__var__15.value.liczba0case;
#line 45
___nl__int__32 = 42;
#line 45
___nl__int__33 = (*___nl__int_ptr__30) != ___nl__int__32;
#line 45
___nl__bool__31 = ___nl__int__33;
#line 45
//clear ___nl__int__32;
#line 45
//clear ___nl__int__33;
#line 45
___nl__bool__31 = !___nl__bool__31;
#line 45
if(___nl__bool__31){ goto label_24;}
#line 45
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(0));
#line 45
nl_die_arg(___nl__im__34);
#line 45
goto label_23;
#line 45
label_24:
#line 45
label_23:
#line 46
(*___nl__int_ptr__30) = 0;
#line 47
___nl__int__35 = 1;
#line 47
(*___nl__int_ptr__30) = (*___nl__int_ptr__30) + ___nl__int__35;
#line 47
//clear ___nl__int__35;
#line 48
goto label_17;
#line 48
label_20:
#line 48
if (___nl__var__15.label != 2) nl_die();
___nl__bool_ptr__36 = ___nl__var__15.value.wyrazenie_logiczne0case;
#line 49
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 49
nl_die_arg(___nl__im__37);
#line 50
goto label_17;
#line 50
label_21:
#line 50
if (___nl__var__15.label != 3) nl_die();
___nl__im_ptr__38 = ___nl__var__15.value.napis0case;
#line 51
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_mk(0));
#line 51
nl_die_arg(___nl__im__39);
#line 52
goto label_17;
#line 52
label_22:
#line 52
if (___nl__var__15.label != 4) nl_die();
___nl__im_ptr__40 = ___nl__var__15.value.wartosc_imowa0case;
#line 53
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(0));
#line 53
nl_die_arg(___nl__im__41);
#line 54
goto label_17;
#line 54
label_17:
#line 55
if (___nl__var__15.label != 1) nl_die();
___nl__int_ptr__44 = ___nl__var__15.value.liczba0case;
#line 55
___nl__int__43 = (*___nl__int_ptr__44);
#line 55
___nl__int_ptr__44 = NULL;
#line 55
___nl__int__45 = 1;
#line 55
___nl__int__46 = ___nl__int__43 != ___nl__int__45;
#line 55
___nl__bool__42 = ___nl__int__46;
#line 55
//clear ___nl__int__43;
#line 55
//clear ___nl__int__45;
#line 55
//clear ___nl__int__46;
#line 55
___nl__bool__42 = !___nl__bool__42;
#line 55
if(___nl__bool__42){ goto label_26;}
#line 55
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_mk(0));
#line 55
nl_die_arg(___nl__im__47);
#line 55
goto label_25;
#line 55
label_26:
#line 55
label_25:
#line 57
___nl__bool__49 = false;
#line 57
test_own_var0test_own_var0prosty_wariant0type0ov_mk(&___nl__var__48, 2, &___nl__bool__49, sizeof(bool ));
#line 58
___nl__bool__50 = (___nl__var__48.label == 2);
#line 58
___nl__bool__50 = !___nl__bool__50;
#line 58
___nl__bool__50 = !___nl__bool__50;
#line 58
if(___nl__bool__50){ goto label_28;}
#line 58
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_mk(0));
#line 58
nl_die_arg(___nl__im__51);
#line 58
goto label_27;
#line 58
label_28:
#line 58
label_27:
#line 59
___nl__bool__52 = (___nl__var__48.label == 3);
#line 59
___nl__bool__52 = !___nl__bool__52;
#line 59
if(___nl__bool__52){ goto label_30;}
#line 59
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_mk(0));
#line 59
nl_die_arg(___nl__im__53);
#line 59
goto label_29;
#line 59
label_30:
#line 59
label_29:
#line 60
if (___nl__var__48.label != 2) nl_die();
___nl__bool_ptr__55 = ___nl__var__48.value.wyrazenie_logiczne0case;
#line 60
___nl__bool__54 = (*___nl__bool_ptr__55);
#line 60
___nl__bool_ptr__55 = NULL;
#line 60
___nl__bool__54 = !___nl__bool__54;
#line 60
if(___nl__bool__54){ goto label_32;}
#line 60
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_mk(0));
#line 60
nl_die_arg(___nl__im__56);
#line 60
goto label_31;
#line 60
label_32:
#line 60
label_31:
#line 61
___nl__bool__57 = (___nl__var__48.label == 0);
#line 61
if(___nl__bool__57){ goto label_34;}
#line 63
___nl__bool__57 = (___nl__var__48.label == 1);
#line 63
if(___nl__bool__57){ goto label_35;}
#line 65
___nl__bool__57 = (___nl__var__48.label == 2);
#line 65
if(___nl__bool__57){ goto label_36;}
#line 68
___nl__bool__57 = (___nl__var__48.label == 3);
#line 68
if(___nl__bool__57){ goto label_37;}
#line 70
___nl__bool__57 = (___nl__var__48.label == 4);
#line 70
if(___nl__bool__57){ goto label_38;}
#line 70
c_rt_lib0move(&___nl__im__58,___get_global_const(71));
#line 70
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_mk(2, ___nl__im__58, ___nl__var__48));
#line 70
nl_die_arg(___nl__im__58);
#line 61
label_34:
#line 62
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(0));
#line 62
nl_die_arg(___nl__im__59);
#line 63
goto label_33;
#line 63
label_35:
#line 63
if (___nl__var__48.label != 1) nl_die();
___nl__int_ptr__60 = ___nl__var__48.value.liczba0case;
#line 64
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_mk(0));
#line 64
nl_die_arg(___nl__im__61);
#line 65
goto label_33;
#line 65
label_36:
#line 65
if (___nl__var__48.label != 2) nl_die();
___nl__bool_ptr__62 = ___nl__var__48.value.wyrazenie_logiczne0case;
#line 66
___nl__bool__63 = (*___nl__bool_ptr__62);
#line 66
___nl__bool__63 = !___nl__bool__63;
#line 66
if(___nl__bool__63){ goto label_40;}
#line 66
c_rt_lib0move(&___nl__im__64, c_rt_lib0array_mk(0));
#line 66
nl_die_arg(___nl__im__64);
#line 66
goto label_39;
#line 66
label_40:
#line 66
label_39:
#line 67
(*___nl__bool_ptr__62) = true;
#line 68
goto label_33;
#line 68
label_37:
#line 68
if (___nl__var__48.label != 3) nl_die();
___nl__im_ptr__65 = ___nl__var__48.value.napis0case;
#line 69
c_rt_lib0move(&___nl__im__66, c_rt_lib0array_mk(0));
#line 69
nl_die_arg(___nl__im__66);
#line 70
goto label_33;
#line 70
label_38:
#line 70
if (___nl__var__48.label != 4) nl_die();
___nl__im_ptr__67 = ___nl__var__48.value.wartosc_imowa0case;
#line 71
c_rt_lib0move(&___nl__im__68, c_rt_lib0array_mk(0));
#line 71
nl_die_arg(___nl__im__68);
#line 72
goto label_33;
#line 72
label_33:
#line 73
if (___nl__var__48.label != 2) nl_die();
___nl__bool_ptr__70 = ___nl__var__48.value.wyrazenie_logiczne0case;
#line 73
___nl__bool__69 = (*___nl__bool_ptr__70);
#line 73
___nl__bool_ptr__70 = NULL;
#line 73
___nl__bool__69 = !___nl__bool__69;
#line 73
___nl__bool__69 = !___nl__bool__69;
#line 73
if(___nl__bool__69){ goto label_42;}
#line 73
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_mk(0));
#line 73
nl_die_arg(___nl__im__71);
#line 73
goto label_41;
#line 73
label_42:
#line 73
label_41:
#line 75
c_rt_lib0move(&___nl__im__73,___get_global_const(199));
#line 75
test_own_var0test_own_var0prosty_wariant0type0ov_mk(&___nl__var__72, 3, &___nl__im__73, sizeof(ImmT ));
#line 76
___nl__bool__74 = (___nl__var__72.label == 3);
#line 76
___nl__bool__74 = !___nl__bool__74;
#line 76
___nl__bool__74 = !___nl__bool__74;
#line 76
if(___nl__bool__74){ goto label_44;}
#line 76
c_rt_lib0move(&___nl__im__75, c_rt_lib0array_mk(0));
#line 76
nl_die_arg(___nl__im__75);
#line 76
goto label_43;
#line 76
label_44:
#line 76
label_43:
#line 77
___nl__bool__76 = (___nl__var__72.label == 4);
#line 77
___nl__bool__76 = !___nl__bool__76;
#line 77
if(___nl__bool__76){ goto label_46;}
#line 77
c_rt_lib0move(&___nl__im__77, c_rt_lib0array_mk(0));
#line 77
nl_die_arg(___nl__im__77);
#line 77
goto label_45;
#line 77
label_46:
#line 77
label_45:
#line 78
if (___nl__var__72.label != 3) nl_die();
___nl__im_ptr__80 = ___nl__var__72.value.napis0case;
#line 78
c_rt_lib0copy(&___nl__im__79, (*___nl__im_ptr__80));
#line 78
___nl__im_ptr__80 = NULL;
#line 78
c_rt_lib0move(&___nl__im__81,___get_global_const(199));
#line 78
c_rt_lib0copy(&___nl__string__82, ___nl__im__79);
#line 78
c_rt_lib0copy(&___nl__string__83, ___nl__im__81);
#line 78
___nl__bool__78 = c_rt_lib0ne(___nl__string__82, ___nl__string__83);
#line 78
c_rt_lib0clear(&___nl__im__79);
#line 78
c_rt_lib0clear(&___nl__im__81);
#line 78
c_rt_lib0clear(&___nl__string__82);
#line 78
c_rt_lib0clear(&___nl__string__83);
#line 78
___nl__bool__78 = !___nl__bool__78;
#line 78
if(___nl__bool__78){ goto label_48;}
#line 78
c_rt_lib0move(&___nl__im__84, c_rt_lib0array_mk(0));
#line 78
nl_die_arg(___nl__im__84);
#line 78
goto label_47;
#line 78
label_48:
#line 78
label_47:
#line 79
___nl__bool__85 = (___nl__var__72.label == 0);
#line 79
if(___nl__bool__85){ goto label_50;}
#line 81
___nl__bool__85 = (___nl__var__72.label == 1);
#line 81
if(___nl__bool__85){ goto label_51;}
#line 83
___nl__bool__85 = (___nl__var__72.label == 2);
#line 83
if(___nl__bool__85){ goto label_52;}
#line 85
___nl__bool__85 = (___nl__var__72.label == 3);
#line 85
if(___nl__bool__85){ goto label_53;}
#line 89
___nl__bool__85 = (___nl__var__72.label == 4);
#line 89
if(___nl__bool__85){ goto label_54;}
#line 89
c_rt_lib0move(&___nl__im__86,___get_global_const(71));
#line 89
c_rt_lib0move(&___nl__im__86, c_rt_lib0array_mk(2, ___nl__im__86, ___nl__var__72));
#line 89
nl_die_arg(___nl__im__86);
#line 79
label_50:
#line 80
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_mk(0));
#line 80
nl_die_arg(___nl__im__87);
#line 81
goto label_49;
#line 81
label_51:
#line 81
if (___nl__var__72.label != 1) nl_die();
___nl__int_ptr__88 = ___nl__var__72.value.liczba0case;
#line 82
c_rt_lib0move(&___nl__im__89, c_rt_lib0array_mk(0));
#line 82
nl_die_arg(___nl__im__89);
#line 83
goto label_49;
#line 83
label_52:
#line 83
if (___nl__var__72.label != 2) nl_die();
___nl__bool_ptr__90 = ___nl__var__72.value.wyrazenie_logiczne0case;
#line 84
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(0));
#line 84
nl_die_arg(___nl__im__91);
#line 85
goto label_49;
#line 85
label_53:
#line 85
if (___nl__var__72.label != 3) nl_die();
___nl__im_ptr__92 = ___nl__var__72.value.napis0case;
#line 86
c_rt_lib0move(&___nl__im__94,___get_global_const(199));
#line 86
c_rt_lib0copy(&___nl__string__95, (*___nl__im_ptr__92));
#line 86
c_rt_lib0copy(&___nl__string__96, ___nl__im__94);
#line 86
___nl__bool__93 = c_rt_lib0ne(___nl__string__95, ___nl__string__96);
#line 86
c_rt_lib0clear(&___nl__im__94);
#line 86
c_rt_lib0clear(&___nl__string__95);
#line 86
c_rt_lib0clear(&___nl__string__96);
#line 86
___nl__bool__93 = !___nl__bool__93;
#line 86
if(___nl__bool__93){ goto label_56;}
#line 86
c_rt_lib0move(&___nl__im__97, c_rt_lib0array_mk(0));
#line 86
nl_die_arg(___nl__im__97);
#line 86
goto label_55;
#line 86
label_56:
#line 86
label_55:
#line 87
c_rt_lib0move(___nl__im_ptr__92,___get_global_const(200));
#line 88
c_rt_lib0move(&___nl__im__98,___get_global_const(176));
#line 88
c_rt_lib0copy(&___nl__string__99, (*___nl__im_ptr__92));
#line 88
c_rt_lib0copy(&___nl__string__100, ___nl__im__98);
#line 88
c_rt_lib0move(&___nl__string__101, c_rt_lib0concat_new(___nl__string__99, ___nl__string__100));
#line 88
c_rt_lib0copy(___nl__im_ptr__92, ___nl__string__101);
#line 88
c_rt_lib0clear(&___nl__im__98);
#line 88
c_rt_lib0clear(&___nl__string__99);
#line 88
c_rt_lib0clear(&___nl__string__100);
#line 88
c_rt_lib0clear(&___nl__string__101);
#line 89
goto label_49;
#line 89
label_54:
#line 89
if (___nl__var__72.label != 4) nl_die();
___nl__im_ptr__102 = ___nl__var__72.value.wartosc_imowa0case;
#line 90
c_rt_lib0move(&___nl__im__103, c_rt_lib0array_mk(0));
#line 90
nl_die_arg(___nl__im__103);
#line 91
goto label_49;
#line 91
label_49:
#line 92
if (___nl__var__72.label != 3) nl_die();
___nl__im_ptr__106 = ___nl__var__72.value.napis0case;
#line 92
c_rt_lib0copy(&___nl__im__105, (*___nl__im_ptr__106));
#line 92
___nl__im_ptr__106 = NULL;
#line 92
c_rt_lib0move(&___nl__im__107,___get_global_const(201));
#line 92
c_rt_lib0copy(&___nl__string__108, ___nl__im__105);
#line 92
c_rt_lib0copy(&___nl__string__109, ___nl__im__107);
#line 92
___nl__bool__104 = c_rt_lib0ne(___nl__string__108, ___nl__string__109);
#line 92
c_rt_lib0clear(&___nl__im__105);
#line 92
c_rt_lib0clear(&___nl__im__107);
#line 92
c_rt_lib0clear(&___nl__string__108);
#line 92
c_rt_lib0clear(&___nl__string__109);
#line 92
___nl__bool__104 = !___nl__bool__104;
#line 92
if(___nl__bool__104){ goto label_58;}
#line 92
c_rt_lib0move(&___nl__im__110, c_rt_lib0array_mk(0));
#line 92
nl_die_arg(___nl__im__110);
#line 92
goto label_57;
#line 92
label_58:
#line 92
label_57:
#line 94
___nl__int__112 = 1234;
#line 94
c_rt_lib0move(&___nl__im__113, c_rt_lib0int_new(___nl__int__112));
#line 94
test_own_var0test_own_var0prosty_wariant0type0ov_mk(&___nl__var__111, 4, &___nl__im__113, sizeof(ImmT ));
#line 95
___nl__bool__114 = (___nl__var__111.label == 4);
#line 95
___nl__bool__114 = !___nl__bool__114;
#line 95
___nl__bool__114 = !___nl__bool__114;
#line 95
if(___nl__bool__114){ goto label_60;}
#line 95
c_rt_lib0move(&___nl__im__115, c_rt_lib0array_mk(0));
#line 95
nl_die_arg(___nl__im__115);
#line 95
goto label_59;
#line 95
label_60:
#line 95
label_59:
#line 96
___nl__bool__116 = (___nl__var__111.label == 0);
#line 96
___nl__bool__116 = !___nl__bool__116;
#line 96
if(___nl__bool__116){ goto label_62;}
#line 96
c_rt_lib0move(&___nl__im__117, c_rt_lib0array_mk(0));
#line 96
nl_die_arg(___nl__im__117);
#line 96
goto label_61;
#line 96
label_62:
#line 96
label_61:
#line 97
if (___nl__var__111.label != 4) nl_die();
___nl__im_ptr__120 = ___nl__var__111.value.wartosc_imowa0case;
#line 97
c_rt_lib0copy(&___nl__im__119, (*___nl__im_ptr__120));
#line 97
___nl__im_ptr__120 = NULL;
#line 97
___nl__int__121 = 1234;
#line 97
___nl__int__122 = getIntFromImm(___nl__im__119);
#line 97
___nl__int__123 = ___nl__int__122 != ___nl__int__121;
#line 97
___nl__bool__118 = ___nl__int__123;
#line 97
c_rt_lib0clear(&___nl__im__119);
#line 97
//clear ___nl__int__121;
#line 97
//clear ___nl__int__122;
#line 97
//clear ___nl__int__123;
#line 97
___nl__bool__118 = !___nl__bool__118;
#line 97
if(___nl__bool__118){ goto label_64;}
#line 97
c_rt_lib0move(&___nl__im__124, c_rt_lib0array_mk(0));
#line 97
nl_die_arg(___nl__im__124);
#line 97
goto label_63;
#line 97
label_64:
#line 97
label_63:
#line 98
___nl__bool__125 = (___nl__var__111.label == 0);
#line 98
if(___nl__bool__125){ goto label_66;}
#line 100
___nl__bool__125 = (___nl__var__111.label == 1);
#line 100
if(___nl__bool__125){ goto label_67;}
#line 102
___nl__bool__125 = (___nl__var__111.label == 2);
#line 102
if(___nl__bool__125){ goto label_68;}
#line 104
___nl__bool__125 = (___nl__var__111.label == 3);
#line 104
if(___nl__bool__125){ goto label_69;}
#line 106
___nl__bool__125 = (___nl__var__111.label == 4);
#line 106
if(___nl__bool__125){ goto label_70;}
#line 106
c_rt_lib0move(&___nl__im__126,___get_global_const(71));
#line 106
c_rt_lib0move(&___nl__im__126, c_rt_lib0array_mk(2, ___nl__im__126, ___nl__var__111));
#line 106
nl_die_arg(___nl__im__126);
#line 98
label_66:
#line 99
c_rt_lib0move(&___nl__im__127, c_rt_lib0array_mk(0));
#line 99
nl_die_arg(___nl__im__127);
#line 100
goto label_65;
#line 100
label_67:
#line 100
if (___nl__var__111.label != 1) nl_die();
___nl__int_ptr__128 = ___nl__var__111.value.liczba0case;
#line 101
c_rt_lib0move(&___nl__im__129, c_rt_lib0array_mk(0));
#line 101
nl_die_arg(___nl__im__129);
#line 102
goto label_65;
#line 102
label_68:
#line 102
if (___nl__var__111.label != 2) nl_die();
___nl__bool_ptr__130 = ___nl__var__111.value.wyrazenie_logiczne0case;
#line 103
c_rt_lib0move(&___nl__im__131, c_rt_lib0array_mk(0));
#line 103
nl_die_arg(___nl__im__131);
#line 104
goto label_65;
#line 104
label_69:
#line 104
if (___nl__var__111.label != 3) nl_die();
___nl__im_ptr__132 = ___nl__var__111.value.napis0case;
#line 105
c_rt_lib0move(&___nl__im__133, c_rt_lib0array_mk(0));
#line 105
nl_die_arg(___nl__im__133);
#line 106
goto label_65;
#line 106
label_70:
#line 106
if (___nl__var__111.label != 4) nl_die();
___nl__im_ptr__134 = ___nl__var__111.value.wartosc_imowa0case;
#line 107
___nl__int__136 = 1234;
#line 107
___nl__int__137 = getIntFromImm((*___nl__im_ptr__134));
#line 107
___nl__int__138 = ___nl__int__137 != ___nl__int__136;
#line 107
___nl__bool__135 = ___nl__int__138;
#line 107
//clear ___nl__int__136;
#line 107
//clear ___nl__int__137;
#line 107
//clear ___nl__int__138;
#line 107
___nl__bool__135 = !___nl__bool__135;
#line 107
if(___nl__bool__135){ goto label_72;}
#line 107
c_rt_lib0move(&___nl__im__139, c_rt_lib0array_mk(0));
#line 107
nl_die_arg(___nl__im__139);
#line 107
goto label_71;
#line 107
label_72:
#line 107
label_71:
#line 108
c_rt_lib0move(___nl__im_ptr__134,___get_global_const(202));
#line 109
___nl__int__140 = 1;
#line 109
___nl__int__141 = getIntFromImm((*___nl__im_ptr__134));
#line 109
___nl__int__142 = ___nl__int__141 + ___nl__int__140;
#line 109
c_rt_lib0move(___nl__im_ptr__134, c_rt_lib0int_new(___nl__int__142));
#line 109
//clear ___nl__int__140;
#line 109
//clear ___nl__int__141;
#line 109
//clear ___nl__int__142;
#line 110
goto label_65;
#line 110
label_65:
#line 111
if (___nl__var__111.label != 4) nl_die();
___nl__im_ptr__145 = ___nl__var__111.value.wartosc_imowa0case;
#line 111
c_rt_lib0copy(&___nl__im__144, (*___nl__im_ptr__145));
#line 111
___nl__im_ptr__145 = NULL;
#line 111
___nl__int__146 = 4321;
#line 111
___nl__int__147 = getIntFromImm(___nl__im__144);
#line 111
___nl__int__148 = ___nl__int__147 != ___nl__int__146;
#line 111
___nl__bool__143 = ___nl__int__148;
#line 111
c_rt_lib0clear(&___nl__im__144);
#line 111
//clear ___nl__int__146;
#line 111
//clear ___nl__int__147;
#line 111
//clear ___nl__int__148;
#line 111
___nl__bool__143 = !___nl__bool__143;
#line 111
if(___nl__bool__143){ goto label_74;}
#line 111
c_rt_lib0move(&___nl__im__149, c_rt_lib0array_mk(0));
#line 111
nl_die_arg(___nl__im__149);
#line 111
goto label_73;
#line 111
label_74:
#line 111
label_73:
#line 111
test_own_var0test_own_var0prosty_wariant0type0clean(___nl__var__0);;
#line 111
//clear ___nl__bool__1;
#line 111
c_rt_lib0clear(&___nl__im__2);
#line 111
//clear ___nl__bool__3;
#line 111
c_rt_lib0clear(&___nl__im__4);
#line 111
//clear ___nl__bool__5;
#line 111
c_rt_lib0clear(&___nl__im__6);
#line 111
c_rt_lib0clear(&___nl__im__8);
#line 111
c_rt_lib0clear(&___nl__im__10);
#line 111
c_rt_lib0clear(&___nl__im__12);
#line 111
c_rt_lib0clear(&___nl__im__14);
#line 111
test_own_var0test_own_var0prosty_wariant0type0clean(___nl__var__15);;
#line 111
//clear ___nl__int__16;
#line 111
//clear ___nl__bool__17;
#line 111
c_rt_lib0clear(&___nl__im__18);
#line 111
//clear ___nl__bool__19;
#line 111
c_rt_lib0clear(&___nl__im__20);
#line 111
//clear ___nl__bool__21;
#line 111
//clear ___nl__int__22;
#line 111
//clear ___nl__int__24;
#line 111
//clear ___nl__int__25;
#line 111
c_rt_lib0clear(&___nl__im__26);
#line 111
//clear ___nl__bool__27;
#line 111
c_rt_lib0clear(&___nl__im__28);
#line 111
c_rt_lib0clear(&___nl__im__29);
#line 111
//clear ___nl__bool__31;
#line 111
//clear ___nl__int__32;
#line 111
//clear ___nl__int__33;
#line 111
c_rt_lib0clear(&___nl__im__34);
#line 111
//clear ___nl__int__35;
#line 111
c_rt_lib0clear(&___nl__im__37);
#line 111
c_rt_lib0clear(&___nl__im__39);
#line 111
c_rt_lib0clear(&___nl__im__41);
#line 111
//clear ___nl__bool__42;
#line 111
//clear ___nl__int__43;
#line 111
//clear ___nl__int__45;
#line 111
//clear ___nl__int__46;
#line 111
c_rt_lib0clear(&___nl__im__47);
#line 111
test_own_var0test_own_var0prosty_wariant0type0clean(___nl__var__48);;
#line 111
//clear ___nl__bool__49;
#line 111
//clear ___nl__bool__50;
#line 111
c_rt_lib0clear(&___nl__im__51);
#line 111
//clear ___nl__bool__52;
#line 111
c_rt_lib0clear(&___nl__im__53);
#line 111
//clear ___nl__bool__54;
#line 111
c_rt_lib0clear(&___nl__im__56);
#line 111
//clear ___nl__bool__57;
#line 111
c_rt_lib0clear(&___nl__im__58);
#line 111
c_rt_lib0clear(&___nl__im__59);
#line 111
c_rt_lib0clear(&___nl__im__61);
#line 111
//clear ___nl__bool__63;
#line 111
c_rt_lib0clear(&___nl__im__64);
#line 111
c_rt_lib0clear(&___nl__im__66);
#line 111
c_rt_lib0clear(&___nl__im__68);
#line 111
//clear ___nl__bool__69;
#line 111
c_rt_lib0clear(&___nl__im__71);
#line 111
test_own_var0test_own_var0prosty_wariant0type0clean(___nl__var__72);;
#line 111
c_rt_lib0clear(&___nl__im__73);
#line 111
//clear ___nl__bool__74;
#line 111
c_rt_lib0clear(&___nl__im__75);
#line 111
//clear ___nl__bool__76;
#line 111
c_rt_lib0clear(&___nl__im__77);
#line 111
//clear ___nl__bool__78;
#line 111
c_rt_lib0clear(&___nl__im__79);
#line 111
c_rt_lib0clear(&___nl__im__81);
#line 111
c_rt_lib0clear(&___nl__string__82);
#line 111
c_rt_lib0clear(&___nl__string__83);
#line 111
c_rt_lib0clear(&___nl__im__84);
#line 111
//clear ___nl__bool__85;
#line 111
c_rt_lib0clear(&___nl__im__86);
#line 111
c_rt_lib0clear(&___nl__im__87);
#line 111
c_rt_lib0clear(&___nl__im__89);
#line 111
c_rt_lib0clear(&___nl__im__91);
#line 111
//clear ___nl__bool__93;
#line 111
c_rt_lib0clear(&___nl__im__94);
#line 111
c_rt_lib0clear(&___nl__string__95);
#line 111
c_rt_lib0clear(&___nl__string__96);
#line 111
c_rt_lib0clear(&___nl__im__97);
#line 111
c_rt_lib0clear(&___nl__im__98);
#line 111
c_rt_lib0clear(&___nl__string__99);
#line 111
c_rt_lib0clear(&___nl__string__100);
#line 111
c_rt_lib0clear(&___nl__string__101);
#line 111
c_rt_lib0clear(&___nl__im__103);
#line 111
//clear ___nl__bool__104;
#line 111
c_rt_lib0clear(&___nl__im__105);
#line 111
c_rt_lib0clear(&___nl__im__107);
#line 111
c_rt_lib0clear(&___nl__string__108);
#line 111
c_rt_lib0clear(&___nl__string__109);
#line 111
c_rt_lib0clear(&___nl__im__110);
#line 111
test_own_var0test_own_var0prosty_wariant0type0clean(___nl__var__111);;
#line 111
//clear ___nl__int__112;
#line 111
c_rt_lib0clear(&___nl__im__113);
#line 111
//clear ___nl__bool__114;
#line 111
c_rt_lib0clear(&___nl__im__115);
#line 111
//clear ___nl__bool__116;
#line 111
c_rt_lib0clear(&___nl__im__117);
#line 111
//clear ___nl__bool__118;
#line 111
c_rt_lib0clear(&___nl__im__119);
#line 111
//clear ___nl__int__121;
#line 111
//clear ___nl__int__122;
#line 111
//clear ___nl__int__123;
#line 111
c_rt_lib0clear(&___nl__im__124);
#line 111
//clear ___nl__bool__125;
#line 111
c_rt_lib0clear(&___nl__im__126);
#line 111
c_rt_lib0clear(&___nl__im__127);
#line 111
c_rt_lib0clear(&___nl__im__129);
#line 111
c_rt_lib0clear(&___nl__im__131);
#line 111
c_rt_lib0clear(&___nl__im__133);
#line 111
//clear ___nl__bool__135;
#line 111
//clear ___nl__int__136;
#line 111
//clear ___nl__int__137;
#line 111
//clear ___nl__int__138;
#line 111
c_rt_lib0clear(&___nl__im__139);
#line 111
//clear ___nl__int__140;
#line 111
//clear ___nl__int__141;
#line 111
//clear ___nl__int__142;
#line 111
//clear ___nl__bool__143;
#line 111
c_rt_lib0clear(&___nl__im__144);
#line 111
//clear ___nl__int__146;
#line 111
//clear ___nl__int__147;
#line 111
//clear ___nl__int__148;
#line 111
c_rt_lib0clear(&___nl__im__149);
#line 111
return NULL;
}

ImmT  test_own_var0zlozony_wariant0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "test_own_var0zlozony_wariant");
return test_own_var0zlozony_wariant();
}
ImmT  test_own_var0zlozony_wariant() {
test_own_var_priv0__const__init();
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
#line 116
c_rt_lib0move(&___nl__im__4, ptd0int());
#line 116
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 116
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__5));
#line 116
c_rt_lib0clear(&___nl__im__4);
#line 116
c_rt_lib0clear(&___nl__im__5);
#line 117
c_rt_lib0move(&___nl__im__7, ptd0int());
#line 117
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 117
c_rt_lib0move(&___nl__im__6, own0arr(___nl__im__8));
#line 117
c_rt_lib0clear(&___nl__im__7);
#line 117
c_rt_lib0clear(&___nl__im__8);
#line 118
c_rt_lib0move(&___nl__im__11, ptd0int());
#line 118
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(1, ___get_global_const(203), ___nl__im__11));
#line 118
c_rt_lib0clear(&___nl__im__11);
#line 118
c_rt_lib0copy(&___nl__im__12, ___nl__im__10);
#line 118
c_rt_lib0move(&___nl__im__9, ptd0rec(___nl__im__12));
#line 118
c_rt_lib0clear(&___nl__im__10);
#line 118
c_rt_lib0clear(&___nl__im__11);
#line 118
c_rt_lib0clear(&___nl__im__12);
#line 119
c_rt_lib0move(&___nl__im__15, ptd0int());
#line 119
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(1, ___get_global_const(204), ___nl__im__15));
#line 119
c_rt_lib0clear(&___nl__im__15);
#line 119
c_rt_lib0copy(&___nl__im__16, ___nl__im__14);
#line 119
c_rt_lib0move(&___nl__im__13, own0rec(___nl__im__16));
#line 119
c_rt_lib0clear(&___nl__im__14);
#line 119
c_rt_lib0clear(&___nl__im__15);
#line 119
c_rt_lib0clear(&___nl__im__16);
#line 120
c_rt_lib0move(&___nl__im__19, ptd0int());
#line 120
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(1, ___get_global_const(205), ___nl__im__19));
#line 120
c_rt_lib0clear(&___nl__im__19);
#line 120
c_rt_lib0copy(&___nl__im__20, ___nl__im__18);
#line 120
c_rt_lib0move(&___nl__im__17, ptd0var(___nl__im__20));
#line 120
c_rt_lib0clear(&___nl__im__18);
#line 120
c_rt_lib0clear(&___nl__im__19);
#line 120
c_rt_lib0clear(&___nl__im__20);
#line 121
c_rt_lib0move(&___nl__im__23, ptd0int());
#line 121
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(1, ___get_global_const(206), ___nl__im__23));
#line 121
c_rt_lib0clear(&___nl__im__23);
#line 121
c_rt_lib0copy(&___nl__im__24, ___nl__im__22);
#line 121
c_rt_lib0move(&___nl__im__21, own0var(___nl__im__24));
#line 121
c_rt_lib0clear(&___nl__im__22);
#line 121
c_rt_lib0clear(&___nl__im__23);
#line 121
c_rt_lib0clear(&___nl__im__24);
#line 121
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(6, ___get_global_const(207), ___nl__im__3, ___get_global_const(208), ___nl__im__6, ___get_global_const(209), ___nl__im__9, ___get_global_const(210), ___nl__im__13, ___get_global_const(211), ___nl__im__17, ___get_global_const(212), ___nl__im__21));
#line 121
c_rt_lib0clear(&___nl__im__3);
#line 121
c_rt_lib0clear(&___nl__im__4);
#line 121
c_rt_lib0clear(&___nl__im__5);
#line 121
c_rt_lib0clear(&___nl__im__6);
#line 121
c_rt_lib0clear(&___nl__im__7);
#line 121
c_rt_lib0clear(&___nl__im__8);
#line 121
c_rt_lib0clear(&___nl__im__9);
#line 121
c_rt_lib0clear(&___nl__im__10);
#line 121
c_rt_lib0clear(&___nl__im__11);
#line 121
c_rt_lib0clear(&___nl__im__12);
#line 121
c_rt_lib0clear(&___nl__im__13);
#line 121
c_rt_lib0clear(&___nl__im__14);
#line 121
c_rt_lib0clear(&___nl__im__15);
#line 121
c_rt_lib0clear(&___nl__im__16);
#line 121
c_rt_lib0clear(&___nl__im__17);
#line 121
c_rt_lib0clear(&___nl__im__18);
#line 121
c_rt_lib0clear(&___nl__im__19);
#line 121
c_rt_lib0clear(&___nl__im__20);
#line 121
c_rt_lib0clear(&___nl__im__21);
#line 121
c_rt_lib0clear(&___nl__im__22);
#line 121
c_rt_lib0clear(&___nl__im__23);
#line 121
c_rt_lib0clear(&___nl__im__24);
#line 121
c_rt_lib0copy(&___nl__im__25, ___nl__im__2);
#line 121
c_rt_lib0move(&___nl__im__1, own0var(___nl__im__25));
#line 121
c_rt_lib0clear(&___nl__im__2);
#line 121
c_rt_lib0clear(&___nl__im__3);
#line 121
c_rt_lib0clear(&___nl__im__4);
#line 121
c_rt_lib0clear(&___nl__im__5);
#line 121
c_rt_lib0clear(&___nl__im__6);
#line 121
c_rt_lib0clear(&___nl__im__7);
#line 121
c_rt_lib0clear(&___nl__im__8);
#line 121
c_rt_lib0clear(&___nl__im__9);
#line 121
c_rt_lib0clear(&___nl__im__10);
#line 121
c_rt_lib0clear(&___nl__im__11);
#line 121
c_rt_lib0clear(&___nl__im__12);
#line 121
c_rt_lib0clear(&___nl__im__13);
#line 121
c_rt_lib0clear(&___nl__im__14);
#line 121
c_rt_lib0clear(&___nl__im__15);
#line 121
c_rt_lib0clear(&___nl__im__16);
#line 121
c_rt_lib0clear(&___nl__im__17);
#line 121
c_rt_lib0clear(&___nl__im__18);
#line 121
c_rt_lib0clear(&___nl__im__19);
#line 121
c_rt_lib0clear(&___nl__im__20);
#line 121
c_rt_lib0clear(&___nl__im__21);
#line 121
c_rt_lib0clear(&___nl__im__22);
#line 121
c_rt_lib0clear(&___nl__im__23);
#line 121
c_rt_lib0clear(&___nl__im__24);
#line 121
c_rt_lib0clear(&___nl__im__25);
#line 121
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 121
c_rt_lib0clear(&___nl__im__1);
#line 121
c_rt_lib0clear(&___nl__im__2);
#line 121
c_rt_lib0clear(&___nl__im__3);
#line 121
c_rt_lib0clear(&___nl__im__4);
#line 121
c_rt_lib0clear(&___nl__im__5);
#line 121
c_rt_lib0clear(&___nl__im__6);
#line 121
c_rt_lib0clear(&___nl__im__7);
#line 121
c_rt_lib0clear(&___nl__im__8);
#line 121
c_rt_lib0clear(&___nl__im__9);
#line 121
c_rt_lib0clear(&___nl__im__10);
#line 121
c_rt_lib0clear(&___nl__im__11);
#line 121
c_rt_lib0clear(&___nl__im__12);
#line 121
c_rt_lib0clear(&___nl__im__13);
#line 121
c_rt_lib0clear(&___nl__im__14);
#line 121
c_rt_lib0clear(&___nl__im__15);
#line 121
c_rt_lib0clear(&___nl__im__16);
#line 121
c_rt_lib0clear(&___nl__im__17);
#line 121
c_rt_lib0clear(&___nl__im__18);
#line 121
c_rt_lib0clear(&___nl__im__19);
#line 121
c_rt_lib0clear(&___nl__im__20);
#line 121
c_rt_lib0clear(&___nl__im__21);
#line 121
c_rt_lib0clear(&___nl__im__22);
#line 121
c_rt_lib0clear(&___nl__im__23);
#line 121
c_rt_lib0clear(&___nl__im__24);
#line 121
c_rt_lib0clear(&___nl__im__25);
#line 121
return ___nl__im__0;
#line 121
c_rt_lib0clear(&___nl__im__0);
#line 121
c_rt_lib0clear(&___nl__im__1);
#line 121
c_rt_lib0clear(&___nl__im__2);
#line 121
c_rt_lib0clear(&___nl__im__3);
#line 121
c_rt_lib0clear(&___nl__im__4);
#line 121
c_rt_lib0clear(&___nl__im__5);
#line 121
c_rt_lib0clear(&___nl__im__6);
#line 121
c_rt_lib0clear(&___nl__im__7);
#line 121
c_rt_lib0clear(&___nl__im__8);
#line 121
c_rt_lib0clear(&___nl__im__9);
#line 121
c_rt_lib0clear(&___nl__im__10);
#line 121
c_rt_lib0clear(&___nl__im__11);
#line 121
c_rt_lib0clear(&___nl__im__12);
#line 121
c_rt_lib0clear(&___nl__im__13);
#line 121
c_rt_lib0clear(&___nl__im__14);
#line 121
c_rt_lib0clear(&___nl__im__15);
#line 121
c_rt_lib0clear(&___nl__im__16);
#line 121
c_rt_lib0clear(&___nl__im__17);
#line 121
c_rt_lib0clear(&___nl__im__18);
#line 121
c_rt_lib0clear(&___nl__im__19);
#line 121
c_rt_lib0clear(&___nl__im__20);
#line 121
c_rt_lib0clear(&___nl__im__21);
#line 121
c_rt_lib0clear(&___nl__im__22);
#line 121
c_rt_lib0clear(&___nl__im__23);
#line 121
c_rt_lib0clear(&___nl__im__24);
#line 121
c_rt_lib0clear(&___nl__im__25);
#line 121
return NULL;
}

ImmT  test_own_var_priv0zlozony_test() {
test_own_var_priv0__const__init();
test_own_var0zlozony_wariant0type ___nl__var__0 = {};
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT * ___nl__im_ptr__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT * ___nl__im_ptr__18 = NULL;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
anon_type00ownarranon_type00int* ___nl__arr_ptr__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT * ___nl__im_ptr__38 = NULL;
ImmT  ___nl__im__39 = NULL;
anon_type00RBanon_type00int0pole_ownowe0RE* ___nl__rec_ptr__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT * ___nl__im_ptr__42 = NULL;
ImmT  ___nl__im__43 = NULL;
anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE* ___nl__var_ptr__44 = NULL;
ImmT  ___nl__im__45 = NULL;
bool  ___nl__bool__46 = false;
INT  ___nl__int__47 = 0;
ImmT  ___nl__im__48 = NULL;
ImmT * ___nl__im_ptr__49 = NULL;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
bool  ___nl__bool__55 = false;
INT  ___nl__int__56 = 0;
ImmT  ___nl__im__57 = NULL;
ImmT * ___nl__im_ptr__58 = NULL;
INT  ___nl__int__59 = 0;
ImmT  ___nl__im__60 = NULL;
INT  ___nl__int__61 = 0;
INT  ___nl__int__62 = 0;
ImmT  ___nl__im__63 = NULL;
test_own_var0zlozony_wariant0type ___nl__var__64 = {};
anon_type00ownarranon_type00int ___nl__arr__65 = {
.capacity = 0,
.size = 0,
.value = NULL
};
INT  ___nl__int__66 = 0;
anon_type00ownarranon_type00int* ___nl__arr_ptr__67 = NULL;
INT  ___nl__int__68 = 0;
bool  ___nl__bool__69 = false;
INT  ___nl__int__70 = 0;
anon_type00ownarranon_type00int* ___nl__arr_ptr__71 = NULL;
INT  ___nl__int__72 = 0;
INT * ___nl__int_ptr__73 = NULL;
INT  ___nl__int__74 = 0;
INT  ___nl__int__75 = 0;
ImmT  ___nl__im__76 = NULL;
bool  ___nl__bool__77 = false;
ImmT  ___nl__im__78 = NULL;
ImmT * ___nl__im_ptr__79 = NULL;
ImmT  ___nl__im__80 = NULL;
anon_type00ownarranon_type00int* ___nl__arr_ptr__81 = NULL;
bool  ___nl__bool__82 = false;
INT  ___nl__int__83 = 0;
INT  ___nl__int__84 = 0;
INT * ___nl__int_ptr__85 = NULL;
INT  ___nl__int__86 = 0;
INT  ___nl__int__87 = 0;
ImmT  ___nl__im__88 = NULL;
INT  ___nl__int__89 = 0;
INT  ___nl__int__90 = 0;
INT * ___nl__int_ptr__91 = NULL;
INT  ___nl__int__92 = 0;
INT  ___nl__int__93 = 0;
INT * ___nl__int_ptr__94 = NULL;
INT  ___nl__int__95 = 0;
ImmT * ___nl__im_ptr__96 = NULL;
ImmT  ___nl__im__97 = NULL;
anon_type00RBanon_type00int0pole_ownowe0RE* ___nl__rec_ptr__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT * ___nl__im_ptr__100 = NULL;
ImmT  ___nl__im__101 = NULL;
anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE* ___nl__var_ptr__102 = NULL;
ImmT  ___nl__im__103 = NULL;
bool  ___nl__bool__104 = false;
INT  ___nl__int__105 = 0;
anon_type00ownarranon_type00int* ___nl__arr_ptr__106 = NULL;
INT  ___nl__int__107 = 0;
INT * ___nl__int_ptr__108 = NULL;
INT  ___nl__int__109 = 0;
INT  ___nl__int__110 = 0;
ImmT  ___nl__im__111 = NULL;
bool  ___nl__bool__112 = false;
INT  ___nl__int__113 = 0;
anon_type00ownarranon_type00int* ___nl__arr_ptr__114 = NULL;
INT  ___nl__int__115 = 0;
INT * ___nl__int_ptr__116 = NULL;
INT  ___nl__int__117 = 0;
INT  ___nl__int__118 = 0;
ImmT  ___nl__im__119 = NULL;
test_own_var0zlozony_wariant0type ___nl__var__120 = {};
ImmT  ___nl__im__121 = NULL;
INT  ___nl__int__122 = 0;
ImmT  ___nl__im__123 = NULL;
ImmT * ___nl__im_ptr__124 = NULL;
ImmT  ___nl__im__125 = NULL;
INT  ___nl__int__126 = 0;
INT  ___nl__int__127 = 0;
INT  ___nl__int__128 = 0;
ImmT  ___nl__string__129 = NULL;
bool  ___nl__bool__130 = false;
INT  ___nl__int__131 = 0;
ImmT  ___nl__im__132 = NULL;
ImmT * ___nl__im_ptr__133 = NULL;
ImmT  ___nl__im__134 = NULL;
INT  ___nl__int__135 = 0;
INT  ___nl__int__136 = 0;
ImmT  ___nl__im__137 = NULL;
bool  ___nl__bool__138 = false;
ImmT  ___nl__im__139 = NULL;
ImmT * ___nl__im_ptr__140 = NULL;
ImmT  ___nl__im__141 = NULL;
anon_type00ownarranon_type00int* ___nl__arr_ptr__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT * ___nl__im_ptr__144 = NULL;
bool  ___nl__bool__145 = false;
INT  ___nl__int__146 = 0;
ImmT  ___nl__im__147 = NULL;
INT  ___nl__int__148 = 0;
INT  ___nl__int__149 = 0;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
INT  ___nl__int__152 = 0;
ImmT  ___nl__im__153 = NULL;
INT  ___nl__int__154 = 0;
INT  ___nl__int__155 = 0;
INT  ___nl__int__156 = 0;
ImmT  ___nl__string__157 = NULL;
anon_type00RBanon_type00int0pole_ownowe0RE* ___nl__rec_ptr__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT * ___nl__im_ptr__160 = NULL;
ImmT  ___nl__im__161 = NULL;
anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE* ___nl__var_ptr__162 = NULL;
ImmT  ___nl__im__163 = NULL;
bool  ___nl__bool__164 = false;
INT  ___nl__int__165 = 0;
ImmT  ___nl__im__166 = NULL;
ImmT * ___nl__im_ptr__167 = NULL;
ImmT  ___nl__im__168 = NULL;
INT  ___nl__int__169 = 0;
INT  ___nl__int__170 = 0;
ImmT  ___nl__im__171 = NULL;
test_own_var0zlozony_wariant0type ___nl__var__172 = {};
anon_type00RBanon_type00int0pole_ownowe0RE ___nl__rec__173 = {};
INT  ___nl__int__174 = 0;
anon_type00RBanon_type00int0pole_ownowe0RE* ___nl__rec_ptr__175 = NULL;
INT * ___nl__int_ptr__176 = NULL;
INT  ___nl__int__177 = 0;
bool  ___nl__bool__178 = false;
INT  ___nl__int__179 = 0;
anon_type00RBanon_type00int0pole_ownowe0RE* ___nl__rec_ptr__180 = NULL;
INT * ___nl__int_ptr__181 = NULL;
INT  ___nl__int__182 = 0;
INT  ___nl__int__183 = 0;
ImmT  ___nl__im__184 = NULL;
bool  ___nl__bool__185 = false;
ImmT  ___nl__im__186 = NULL;
ImmT * ___nl__im_ptr__187 = NULL;
ImmT  ___nl__im__188 = NULL;
anon_type00ownarranon_type00int* ___nl__arr_ptr__189 = NULL;
ImmT  ___nl__im__190 = NULL;
ImmT * ___nl__im_ptr__191 = NULL;
ImmT  ___nl__im__192 = NULL;
anon_type00RBanon_type00int0pole_ownowe0RE* ___nl__rec_ptr__193 = NULL;
bool  ___nl__bool__194 = false;
INT  ___nl__int__195 = 0;
INT * ___nl__int_ptr__196 = NULL;
INT  ___nl__int__197 = 0;
INT  ___nl__int__198 = 0;
ImmT  ___nl__im__199 = NULL;
INT * ___nl__int_ptr__200 = NULL;
INT  ___nl__int__201 = 0;
INT * ___nl__int_ptr__202 = NULL;
INT  ___nl__int__203 = 0;
ImmT * ___nl__im_ptr__204 = NULL;
ImmT  ___nl__im__205 = NULL;
anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE* ___nl__var_ptr__206 = NULL;
ImmT  ___nl__im__207 = NULL;
bool  ___nl__bool__208 = false;
INT  ___nl__int__209 = 0;
anon_type00RBanon_type00int0pole_ownowe0RE* ___nl__rec_ptr__210 = NULL;
INT * ___nl__int_ptr__211 = NULL;
INT  ___nl__int__212 = 0;
INT  ___nl__int__213 = 0;
ImmT  ___nl__im__214 = NULL;
test_own_var0zlozony_wariant0type ___nl__var__215 = {};
ImmT  ___nl__im__216 = NULL;
INT  ___nl__int__217 = 0;
ImmT  ___nl__im__218 = NULL;
ImmT * ___nl__im_ptr__219 = NULL;
ImmT  ___nl__im__220 = NULL;
INT  ___nl__int__221 = 0;
INT  ___nl__int__222 = 0;
INT  ___nl__int__223 = 0;
bool  ___nl__bool__224 = false;
INT  ___nl__int__225 = 0;
ImmT  ___nl__im__226 = NULL;
ImmT * ___nl__im_ptr__227 = NULL;
ImmT  ___nl__im__228 = NULL;
ImmT * ___nl__im_ptr__229 = NULL;
ImmT  ___nl__im__230 = NULL;
INT  ___nl__int__231 = 0;
INT  ___nl__int__232 = 0;
ImmT  ___nl__im__233 = NULL;
bool  ___nl__bool__234 = false;
ImmT  ___nl__im__235 = NULL;
ImmT * ___nl__im_ptr__236 = NULL;
ImmT  ___nl__im__237 = NULL;
anon_type00ownarranon_type00int* ___nl__arr_ptr__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT * ___nl__im_ptr__240 = NULL;
ImmT  ___nl__im__241 = NULL;
anon_type00RBanon_type00int0pole_ownowe0RE* ___nl__rec_ptr__242 = NULL;
ImmT  ___nl__im__243 = NULL;
ImmT * ___nl__im_ptr__244 = NULL;
bool  ___nl__bool__245 = false;
INT  ___nl__int__246 = 0;
ImmT  ___nl__im__247 = NULL;
INT  ___nl__int__248 = 0;
INT  ___nl__int__249 = 0;
ImmT  ___nl__im__250 = NULL;
ImmT  ___nl__im__251 = NULL;
INT  ___nl__int__252 = 0;
ImmT  ___nl__im__253 = NULL;
INT  ___nl__int__254 = 0;
INT  ___nl__int__255 = 0;
INT  ___nl__int__256 = 0;
anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE* ___nl__var_ptr__257 = NULL;
ImmT  ___nl__im__258 = NULL;
bool  ___nl__bool__259 = false;
INT  ___nl__int__260 = 0;
ImmT  ___nl__im__261 = NULL;
ImmT * ___nl__im_ptr__262 = NULL;
ImmT  ___nl__im__263 = NULL;
ImmT * ___nl__im_ptr__264 = NULL;
ImmT  ___nl__im__265 = NULL;
INT  ___nl__int__266 = 0;
INT  ___nl__int__267 = 0;
ImmT  ___nl__im__268 = NULL;
test_own_var0zlozony_wariant0type ___nl__var__269 = {};
anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE ___nl__var__270 = {};
INT  ___nl__int__271 = 0;
anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE* ___nl__var_ptr__272 = NULL;
INT * ___nl__int_ptr__273 = NULL;
INT  ___nl__int__274 = 0;
bool  ___nl__bool__275 = false;
INT  ___nl__int__276 = 0;
anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE* ___nl__var_ptr__277 = NULL;
INT * ___nl__int_ptr__278 = NULL;
INT  ___nl__int__279 = 0;
INT  ___nl__int__280 = 0;
ImmT  ___nl__im__281 = NULL;
bool  ___nl__bool__282 = false;
ImmT  ___nl__im__283 = NULL;
ImmT * ___nl__im_ptr__284 = NULL;
ImmT  ___nl__im__285 = NULL;
anon_type00ownarranon_type00int* ___nl__arr_ptr__286 = NULL;
ImmT  ___nl__im__287 = NULL;
ImmT * ___nl__im_ptr__288 = NULL;
ImmT  ___nl__im__289 = NULL;
anon_type00RBanon_type00int0pole_ownowe0RE* ___nl__rec_ptr__290 = NULL;
ImmT  ___nl__im__291 = NULL;
ImmT * ___nl__im_ptr__292 = NULL;
ImmT  ___nl__im__293 = NULL;
anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE* ___nl__var_ptr__294 = NULL;
bool  ___nl__bool__295 = false;
INT  ___nl__int__296 = 0;
INT * ___nl__int_ptr__297 = NULL;
INT  ___nl__int__298 = 0;
INT  ___nl__int__299 = 0;
ImmT  ___nl__im__300 = NULL;
INT * ___nl__int_ptr__301 = NULL;
INT  ___nl__int__302 = 0;
INT * ___nl__int_ptr__303 = NULL;
INT  ___nl__int__304 = 0;
bool  ___nl__bool__305 = false;
INT  ___nl__int__306 = 0;
anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE* ___nl__var_ptr__307 = NULL;
INT * ___nl__int_ptr__308 = NULL;
INT  ___nl__int__309 = 0;
INT  ___nl__int__310 = 0;
ImmT  ___nl__im__311 = NULL;
#line 126
___nl__int__2 = 0;
#line 126
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__2));
#line 126
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(1, ___nl__im__3));
#line 126
//clear ___nl__int__2;
#line 126
c_rt_lib0clear(&___nl__im__3);
#line 126
test_own_var0test_own_var0zlozony_wariant0type0ov_mk(&___nl__var__0, 0, &___nl__im__1, sizeof(ImmT ));
#line 127
if (___nl__var__0.label != 0) nl_die();
___nl__im_ptr__4 = ___nl__var__0.value.tablica_imowa0case;
#line 127
___nl__int__5 = 1;
#line 127
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__5));
#line 127
c_rt_lib0array_push(___nl__im_ptr__4, ___nl__im__6);
#line 127
___nl__im_ptr__4 = NULL;
#line 127
//clear ___nl__int__5;
#line 127
c_rt_lib0clear(&___nl__im__6);
#line 128
if (___nl__var__0.label != 0) nl_die();
___nl__im_ptr__10 = ___nl__var__0.value.tablica_imowa0case;
#line 128
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 128
___nl__im_ptr__10 = NULL;
#line 128
___nl__int__11 = 1;
#line 128
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__9, ___nl__int__11));
#line 128
___nl__int__8 = getIntFromImm(___nl__im__12);
#line 128
c_rt_lib0clear(&___nl__im__9);
#line 128
//clear ___nl__int__11;
#line 128
c_rt_lib0clear(&___nl__im__12);
#line 128
___nl__int__13 = 1;
#line 128
___nl__int__14 = ___nl__int__8 != ___nl__int__13;
#line 128
___nl__bool__7 = ___nl__int__14;
#line 128
//clear ___nl__int__8;
#line 128
c_rt_lib0clear(&___nl__im__9);
#line 128
//clear ___nl__int__11;
#line 128
c_rt_lib0clear(&___nl__im__12);
#line 128
//clear ___nl__int__13;
#line 128
//clear ___nl__int__14;
#line 128
___nl__bool__7 = !___nl__bool__7;
#line 128
if(___nl__bool__7){ goto label_2;}
#line 128
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 128
nl_die_arg(___nl__im__15);
#line 128
goto label_1;
#line 128
label_2:
#line 128
label_1:
#line 129
___nl__bool__16 = (___nl__var__0.label == 0);
#line 129
if(___nl__bool__16){ goto label_4;}
#line 134
___nl__bool__16 = (___nl__var__0.label == 1);
#line 134
if(___nl__bool__16){ goto label_5;}
#line 136
___nl__bool__16 = (___nl__var__0.label == 2);
#line 136
if(___nl__bool__16){ goto label_6;}
#line 138
___nl__bool__16 = (___nl__var__0.label == 3);
#line 138
if(___nl__bool__16){ goto label_7;}
#line 140
___nl__bool__16 = (___nl__var__0.label == 4);
#line 140
if(___nl__bool__16){ goto label_8;}
#line 142
___nl__bool__16 = (___nl__var__0.label == 5);
#line 142
if(___nl__bool__16){ goto label_9;}
#line 142
c_rt_lib0move(&___nl__im__17,___get_global_const(71));
#line 142
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__var__0));
#line 142
nl_die_arg(___nl__im__17);
#line 129
label_4:
#line 129
if (___nl__var__0.label != 0) nl_die();
___nl__im_ptr__18 = ___nl__var__0.value.tablica_imowa0case;
#line 130
___nl__int__21 = 1;
#line 130
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get((*___nl__im_ptr__18), ___nl__int__21));
#line 130
___nl__int__20 = getIntFromImm(___nl__im__22);
#line 130
//clear ___nl__int__21;
#line 130
c_rt_lib0clear(&___nl__im__22);
#line 130
___nl__int__23 = 1;
#line 130
___nl__int__24 = ___nl__int__20 != ___nl__int__23;
#line 130
___nl__bool__19 = ___nl__int__24;
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
___nl__bool__19 = !___nl__bool__19;
#line 130
if(___nl__bool__19){ goto label_11;}
#line 130
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 130
nl_die_arg(___nl__im__25);
#line 130
goto label_10;
#line 130
label_11:
#line 130
label_10:
#line 131
___nl__int__26 = 4;
#line 131
c_rt_lib0move(&___nl__im__27, c_rt_lib0int_new(___nl__int__26));
#line 131
c_rt_lib0array_push(___nl__im_ptr__18, ___nl__im__27);
#line 131
//clear ___nl__int__26;
#line 131
c_rt_lib0clear(&___nl__im__27);
#line 132
___nl__int__29 = 1;
#line 132
___nl__int__30 = 2;
#line 132
c_rt_lib0move(&___nl__im__28, c_rt_lib0int_new(___nl__int__30));
#line 132
c_rt_lib0array_set(___nl__im_ptr__18, ___nl__int__29, ___nl__im__28);
#line 132
c_rt_lib0clear(&___nl__im__28);
#line 132
//clear ___nl__int__29;
#line 132
//clear ___nl__int__30;
#line 133
___nl__int__32 = 1;
#line 133
c_rt_lib0move(&___nl__im__31, c_rt_lib0get_ref_arr((*___nl__im_ptr__18), ___nl__int__32));
#line 133
___nl__int__33 = 1;
#line 133
___nl__int__34 = getIntFromImm(___nl__im__31);
#line 133
___nl__int__35 = ___nl__int__34 + ___nl__int__33;
#line 133
c_rt_lib0move(&___nl__im__31, c_rt_lib0int_new(___nl__int__35));
#line 133
c_rt_lib0delete(c_rt_lib0set_ref_arr(___nl__im_ptr__18, ___nl__int__32, ___nl__im__31));
#line 133
c_rt_lib0clear(&___nl__im__31);
#line 133
//clear ___nl__int__32;
#line 133
//clear ___nl__int__33;
#line 133
//clear ___nl__int__34;
#line 133
//clear ___nl__int__35;
#line 134
goto label_3;
#line 134
label_5:
#line 134
if (___nl__var__0.label != 1) nl_die();
___nl__arr_ptr__36 = ___nl__var__0.value.tablica_ownowa0case;
#line 135
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 135
nl_die_arg(___nl__im__37);
#line 136
goto label_3;
#line 136
label_6:
#line 136
if (___nl__var__0.label != 2) nl_die();
___nl__im_ptr__38 = ___nl__var__0.value.rekord_imowy0case;
#line 137
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_mk(0));
#line 137
nl_die_arg(___nl__im__39);
#line 138
goto label_3;
#line 138
label_7:
#line 138
if (___nl__var__0.label != 3) nl_die();
___nl__rec_ptr__40 = ___nl__var__0.value.rekord_ownowy0case;
#line 139
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(0));
#line 139
nl_die_arg(___nl__im__41);
#line 140
goto label_3;
#line 140
label_8:
#line 140
if (___nl__var__0.label != 4) nl_die();
___nl__im_ptr__42 = ___nl__var__0.value.wariant_imowy0case;
#line 141
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_mk(0));
#line 141
nl_die_arg(___nl__im__43);
#line 142
goto label_3;
#line 142
label_9:
#line 142
if (___nl__var__0.label != 5) nl_die();
___nl__var_ptr__44 = ___nl__var__0.value.wariant_ownowy0case;
#line 143
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_mk(0));
#line 143
nl_die_arg(___nl__im__45);
#line 144
goto label_3;
#line 144
label_3:
#line 145
if (___nl__var__0.label != 0) nl_die();
___nl__im_ptr__49 = ___nl__var__0.value.tablica_imowa0case;
#line 145
c_rt_lib0copy(&___nl__im__48, (*___nl__im_ptr__49));
#line 145
___nl__im_ptr__49 = NULL;
#line 145
___nl__int__50 = 1;
#line 145
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get(___nl__im__48, ___nl__int__50));
#line 145
___nl__int__47 = getIntFromImm(___nl__im__51);
#line 145
c_rt_lib0clear(&___nl__im__48);
#line 145
//clear ___nl__int__50;
#line 145
c_rt_lib0clear(&___nl__im__51);
#line 145
___nl__int__52 = 3;
#line 145
___nl__int__53 = ___nl__int__47 != ___nl__int__52;
#line 145
___nl__bool__46 = ___nl__int__53;
#line 145
//clear ___nl__int__47;
#line 145
c_rt_lib0clear(&___nl__im__48);
#line 145
//clear ___nl__int__50;
#line 145
c_rt_lib0clear(&___nl__im__51);
#line 145
//clear ___nl__int__52;
#line 145
//clear ___nl__int__53;
#line 145
___nl__bool__46 = !___nl__bool__46;
#line 145
if(___nl__bool__46){ goto label_13;}
#line 145
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_mk(0));
#line 145
nl_die_arg(___nl__im__54);
#line 145
goto label_12;
#line 145
label_13:
#line 145
label_12:
#line 146
if (___nl__var__0.label != 0) nl_die();
___nl__im_ptr__58 = ___nl__var__0.value.tablica_imowa0case;
#line 146
c_rt_lib0copy(&___nl__im__57, (*___nl__im_ptr__58));
#line 146
___nl__im_ptr__58 = NULL;
#line 146
___nl__int__59 = 2;
#line 146
c_rt_lib0move(&___nl__im__60, c_rt_lib0array_get(___nl__im__57, ___nl__int__59));
#line 146
___nl__int__56 = getIntFromImm(___nl__im__60);
#line 146
c_rt_lib0clear(&___nl__im__57);
#line 146
//clear ___nl__int__59;
#line 146
c_rt_lib0clear(&___nl__im__60);
#line 146
___nl__int__61 = 4;
#line 146
___nl__int__62 = ___nl__int__56 != ___nl__int__61;
#line 146
___nl__bool__55 = ___nl__int__62;
#line 146
//clear ___nl__int__56;
#line 146
c_rt_lib0clear(&___nl__im__57);
#line 146
//clear ___nl__int__59;
#line 146
c_rt_lib0clear(&___nl__im__60);
#line 146
//clear ___nl__int__61;
#line 146
//clear ___nl__int__62;
#line 146
___nl__bool__55 = !___nl__bool__55;
#line 146
if(___nl__bool__55){ goto label_15;}
#line 146
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(0));
#line 146
nl_die_arg(___nl__im__63);
#line 146
goto label_14;
#line 146
label_15:
#line 146
label_14:
#line 148
___nl__int__66 = 2;
#line 148
test_own_var0anon_type00ownarranon_type00int0push(&___nl__arr__65, ___nl__int__66);
#line 148
//clear ___nl__int__66;
#line 148
test_own_var0test_own_var0zlozony_wariant0type0ov_mk(&___nl__var__64, 1, &___nl__arr__65, sizeof(anon_type00ownarranon_type00int));
#line 149
if (___nl__var__64.label != 1) nl_die();
___nl__arr_ptr__67 = ___nl__var__64.value.tablica_ownowa0case;
#line 149
___nl__int__68 = 3;
#line 149
test_own_var0anon_type00ownarranon_type00int0push(___nl__arr_ptr__67, ___nl__int__68);
#line 149
___nl__arr_ptr__67 = NULL;
#line 149
//clear ___nl__int__68;
#line 150
if (___nl__var__64.label != 1) nl_die();
___nl__arr_ptr__71 = ___nl__var__64.value.tablica_ownowa0case;
#line 150
___nl__int__72 = 1;
#line 150
___nl__int_ptr__73 = test_own_var0anon_type00ownarranon_type00int0get_ptr(___nl__arr_ptr__71, ___nl__int__72);
#line 150
___nl__int__70 = (*___nl__int_ptr__73);
#line 150
___nl__int_ptr__73 = NULL;
#line 150
___nl__arr_ptr__71 = NULL;
#line 150
//clear ___nl__int__72;
#line 150
___nl__int__74 = 3;
#line 150
___nl__int__75 = ___nl__int__70 != ___nl__int__74;
#line 150
___nl__bool__69 = ___nl__int__75;
#line 150
//clear ___nl__int__70;
#line 150
//clear ___nl__int__72;
#line 150
//clear ___nl__int__74;
#line 150
//clear ___nl__int__75;
#line 150
___nl__bool__69 = !___nl__bool__69;
#line 150
if(___nl__bool__69){ goto label_17;}
#line 150
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_mk(0));
#line 150
nl_die_arg(___nl__im__76);
#line 150
goto label_16;
#line 150
label_17:
#line 150
label_16:
#line 151
___nl__bool__77 = (___nl__var__64.label == 0);
#line 151
if(___nl__bool__77){ goto label_19;}
#line 153
___nl__bool__77 = (___nl__var__64.label == 1);
#line 153
if(___nl__bool__77){ goto label_20;}
#line 158
___nl__bool__77 = (___nl__var__64.label == 2);
#line 158
if(___nl__bool__77){ goto label_21;}
#line 160
___nl__bool__77 = (___nl__var__64.label == 3);
#line 160
if(___nl__bool__77){ goto label_22;}
#line 162
___nl__bool__77 = (___nl__var__64.label == 4);
#line 162
if(___nl__bool__77){ goto label_23;}
#line 164
___nl__bool__77 = (___nl__var__64.label == 5);
#line 164
if(___nl__bool__77){ goto label_24;}
#line 164
c_rt_lib0move(&___nl__im__78,___get_global_const(71));
#line 164
c_rt_lib0move(&___nl__im__78, c_rt_lib0array_mk(2, ___nl__im__78, ___nl__var__64));
#line 164
nl_die_arg(___nl__im__78);
#line 151
label_19:
#line 151
if (___nl__var__64.label != 0) nl_die();
___nl__im_ptr__79 = ___nl__var__64.value.tablica_imowa0case;
#line 152
c_rt_lib0move(&___nl__im__80, c_rt_lib0array_mk(0));
#line 152
nl_die_arg(___nl__im__80);
#line 153
goto label_18;
#line 153
label_20:
#line 153
if (___nl__var__64.label != 1) nl_die();
___nl__arr_ptr__81 = ___nl__var__64.value.tablica_ownowa0case;
#line 154
___nl__int__84 = 1;
#line 154
___nl__int_ptr__85 = test_own_var0anon_type00ownarranon_type00int0get_ptr(___nl__arr_ptr__81, ___nl__int__84);
#line 154
___nl__int__83 = (*___nl__int_ptr__85);
#line 154
___nl__int_ptr__85 = NULL;
#line 154
//clear ___nl__int__84;
#line 154
___nl__int__86 = 3;
#line 154
___nl__int__87 = ___nl__int__83 != ___nl__int__86;
#line 154
___nl__bool__82 = ___nl__int__87;
#line 154
//clear ___nl__int__83;
#line 154
//clear ___nl__int__84;
#line 154
//clear ___nl__int__86;
#line 154
//clear ___nl__int__87;
#line 154
___nl__bool__82 = !___nl__bool__82;
#line 154
if(___nl__bool__82){ goto label_26;}
#line 154
c_rt_lib0move(&___nl__im__88, c_rt_lib0array_mk(0));
#line 154
nl_die_arg(___nl__im__88);
#line 154
goto label_25;
#line 154
label_26:
#line 154
label_25:
#line 155
___nl__int__89 = 6;
#line 155
test_own_var0anon_type00ownarranon_type00int0push(___nl__arr_ptr__81, ___nl__int__89);
#line 155
//clear ___nl__int__89;
#line 156
___nl__int__90 = 1;
#line 156
___nl__int_ptr__91 = test_own_var0anon_type00ownarranon_type00int0get_ptr(___nl__arr_ptr__81, ___nl__int__90);
#line 156
___nl__int__92 = 4;
#line 156
(*___nl__int_ptr__91) = ___nl__int__92;
#line 156
___nl__int_ptr__91 = NULL;
#line 156
//clear ___nl__int__90;
#line 156
//clear ___nl__int__92;
#line 157
___nl__int__93 = 1;
#line 157
___nl__int_ptr__94 = test_own_var0anon_type00ownarranon_type00int0get_ptr(___nl__arr_ptr__81, ___nl__int__93);
#line 157
___nl__int__95 = 1;
#line 157
(*___nl__int_ptr__94) = (*___nl__int_ptr__94) + ___nl__int__95;
#line 157
___nl__int_ptr__94 = NULL;
#line 157
//clear ___nl__int__93;
#line 157
//clear ___nl__int__95;
#line 158
goto label_18;
#line 158
label_21:
#line 158
if (___nl__var__64.label != 2) nl_die();
___nl__im_ptr__96 = ___nl__var__64.value.rekord_imowy0case;
#line 159
c_rt_lib0move(&___nl__im__97, c_rt_lib0array_mk(0));
#line 159
nl_die_arg(___nl__im__97);
#line 160
goto label_18;
#line 160
label_22:
#line 160
if (___nl__var__64.label != 3) nl_die();
___nl__rec_ptr__98 = ___nl__var__64.value.rekord_ownowy0case;
#line 161
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_mk(0));
#line 161
nl_die_arg(___nl__im__99);
#line 162
goto label_18;
#line 162
label_23:
#line 162
if (___nl__var__64.label != 4) nl_die();
___nl__im_ptr__100 = ___nl__var__64.value.wariant_imowy0case;
#line 163
c_rt_lib0move(&___nl__im__101, c_rt_lib0array_mk(0));
#line 163
nl_die_arg(___nl__im__101);
#line 164
goto label_18;
#line 164
label_24:
#line 164
if (___nl__var__64.label != 5) nl_die();
___nl__var_ptr__102 = ___nl__var__64.value.wariant_ownowy0case;
#line 165
c_rt_lib0move(&___nl__im__103, c_rt_lib0array_mk(0));
#line 165
nl_die_arg(___nl__im__103);
#line 166
goto label_18;
#line 166
label_18:
#line 167
if (___nl__var__64.label != 1) nl_die();
___nl__arr_ptr__106 = ___nl__var__64.value.tablica_ownowa0case;
#line 167
___nl__int__107 = 1;
#line 167
___nl__int_ptr__108 = test_own_var0anon_type00ownarranon_type00int0get_ptr(___nl__arr_ptr__106, ___nl__int__107);
#line 167
___nl__int__105 = (*___nl__int_ptr__108);
#line 167
___nl__int_ptr__108 = NULL;
#line 167
___nl__arr_ptr__106 = NULL;
#line 167
//clear ___nl__int__107;
#line 167
___nl__int__109 = 5;
#line 167
___nl__int__110 = ___nl__int__105 != ___nl__int__109;
#line 167
___nl__bool__104 = ___nl__int__110;
#line 167
//clear ___nl__int__105;
#line 167
//clear ___nl__int__107;
#line 167
//clear ___nl__int__109;
#line 167
//clear ___nl__int__110;
#line 167
___nl__bool__104 = !___nl__bool__104;
#line 167
if(___nl__bool__104){ goto label_28;}
#line 167
c_rt_lib0move(&___nl__im__111, c_rt_lib0array_mk(0));
#line 167
nl_die_arg(___nl__im__111);
#line 167
goto label_27;
#line 167
label_28:
#line 167
label_27:
#line 168
if (___nl__var__64.label != 1) nl_die();
___nl__arr_ptr__114 = ___nl__var__64.value.tablica_ownowa0case;
#line 168
___nl__int__115 = 2;
#line 168
___nl__int_ptr__116 = test_own_var0anon_type00ownarranon_type00int0get_ptr(___nl__arr_ptr__114, ___nl__int__115);
#line 168
___nl__int__113 = (*___nl__int_ptr__116);
#line 168
___nl__int_ptr__116 = NULL;
#line 168
___nl__arr_ptr__114 = NULL;
#line 168
//clear ___nl__int__115;
#line 168
___nl__int__117 = 6;
#line 168
___nl__int__118 = ___nl__int__113 != ___nl__int__117;
#line 168
___nl__bool__112 = ___nl__int__118;
#line 168
//clear ___nl__int__113;
#line 168
//clear ___nl__int__115;
#line 168
//clear ___nl__int__117;
#line 168
//clear ___nl__int__118;
#line 168
___nl__bool__112 = !___nl__bool__112;
#line 168
if(___nl__bool__112){ goto label_30;}
#line 168
c_rt_lib0move(&___nl__im__119, c_rt_lib0array_mk(0));
#line 168
nl_die_arg(___nl__im__119);
#line 168
goto label_29;
#line 168
label_30:
#line 168
label_29:
#line 170
___nl__int__122 = 4;
#line 170
c_rt_lib0move(&___nl__im__123, c_rt_lib0int_new(___nl__int__122));
#line 170
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_mk(1, ___get_global_const(203), ___nl__im__123));
#line 170
//clear ___nl__int__122;
#line 170
c_rt_lib0clear(&___nl__im__123);
#line 170
test_own_var0test_own_var0zlozony_wariant0type0ov_mk(&___nl__var__120, 2, &___nl__im__121, sizeof(ImmT ));
#line 171
if (___nl__var__120.label != 2) nl_die();
___nl__im_ptr__124 = ___nl__var__120.value.rekord_imowy0case;
#line 171
c_rt_lib0move(&___nl__im__125,___get_global_const(203));
#line 171
c_rt_lib0move(&___nl__im__125, c_rt_lib0get_ref_hash((*___nl__im_ptr__124), ___nl__im__125));
#line 171
___nl__int__126 = 1;
#line 171
___nl__int__127 = getIntFromImm(___nl__im__125);
#line 171
___nl__int__128 = ___nl__int__127 + ___nl__int__126;
#line 171
c_rt_lib0move(&___nl__im__125, c_rt_lib0int_new(___nl__int__128));
#line 171
c_rt_lib0move(&___nl__string__129,___get_global_const(203));
#line 171
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__124, ___nl__string__129, ___nl__im__125));
#line 171
___nl__im_ptr__124 = NULL;
#line 171
c_rt_lib0clear(&___nl__im__125);
#line 171
//clear ___nl__int__126;
#line 171
//clear ___nl__int__127;
#line 171
//clear ___nl__int__128;
#line 171
c_rt_lib0clear(&___nl__string__129);
#line 172
if (___nl__var__120.label != 2) nl_die();
___nl__im_ptr__133 = ___nl__var__120.value.rekord_imowy0case;
#line 172
c_rt_lib0copy(&___nl__im__132, (*___nl__im_ptr__133));
#line 172
___nl__im_ptr__133 = NULL;
#line 172
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_get_value_dec(___nl__im__132, ___get_global_const(203)));
#line 172
___nl__int__131 = getIntFromImm(___nl__im__134);
#line 172
c_rt_lib0clear(&___nl__im__132);
#line 172
c_rt_lib0clear(&___nl__im__134);
#line 172
___nl__int__135 = 5;
#line 172
___nl__int__136 = ___nl__int__131 != ___nl__int__135;
#line 172
___nl__bool__130 = ___nl__int__136;
#line 172
//clear ___nl__int__131;
#line 172
c_rt_lib0clear(&___nl__im__132);
#line 172
c_rt_lib0clear(&___nl__im__134);
#line 172
//clear ___nl__int__135;
#line 172
//clear ___nl__int__136;
#line 172
___nl__bool__130 = !___nl__bool__130;
#line 172
if(___nl__bool__130){ goto label_32;}
#line 172
c_rt_lib0move(&___nl__im__137, c_rt_lib0array_mk(0));
#line 172
nl_die_arg(___nl__im__137);
#line 172
goto label_31;
#line 172
label_32:
#line 172
label_31:
#line 173
___nl__bool__138 = (___nl__var__120.label == 0);
#line 173
if(___nl__bool__138){ goto label_34;}
#line 175
___nl__bool__138 = (___nl__var__120.label == 1);
#line 175
if(___nl__bool__138){ goto label_35;}
#line 177
___nl__bool__138 = (___nl__var__120.label == 2);
#line 177
if(___nl__bool__138){ goto label_36;}
#line 181
___nl__bool__138 = (___nl__var__120.label == 3);
#line 181
if(___nl__bool__138){ goto label_37;}
#line 183
___nl__bool__138 = (___nl__var__120.label == 4);
#line 183
if(___nl__bool__138){ goto label_38;}
#line 185
___nl__bool__138 = (___nl__var__120.label == 5);
#line 185
if(___nl__bool__138){ goto label_39;}
#line 185
c_rt_lib0move(&___nl__im__139,___get_global_const(71));
#line 185
c_rt_lib0move(&___nl__im__139, c_rt_lib0array_mk(2, ___nl__im__139, ___nl__var__120));
#line 185
nl_die_arg(___nl__im__139);
#line 173
label_34:
#line 173
if (___nl__var__120.label != 0) nl_die();
___nl__im_ptr__140 = ___nl__var__120.value.tablica_imowa0case;
#line 174
c_rt_lib0move(&___nl__im__141, c_rt_lib0array_mk(0));
#line 174
nl_die_arg(___nl__im__141);
#line 175
goto label_33;
#line 175
label_35:
#line 175
if (___nl__var__120.label != 1) nl_die();
___nl__arr_ptr__142 = ___nl__var__120.value.tablica_ownowa0case;
#line 176
c_rt_lib0move(&___nl__im__143, c_rt_lib0array_mk(0));
#line 176
nl_die_arg(___nl__im__143);
#line 177
goto label_33;
#line 177
label_36:
#line 177
if (___nl__var__120.label != 2) nl_die();
___nl__im_ptr__144 = ___nl__var__120.value.rekord_imowy0case;
#line 178
c_rt_lib0move(&___nl__im__147, c_rt_lib0hash_get_value_dec(*___nl__im_ptr__144, ___get_global_const(203)));
#line 178
___nl__int__146 = getIntFromImm(___nl__im__147);
#line 178
c_rt_lib0clear(&___nl__im__147);
#line 178
___nl__int__148 = 5;
#line 178
___nl__int__149 = ___nl__int__146 != ___nl__int__148;
#line 178
___nl__bool__145 = ___nl__int__149;
#line 178
//clear ___nl__int__146;
#line 178
c_rt_lib0clear(&___nl__im__147);
#line 178
//clear ___nl__int__148;
#line 178
//clear ___nl__int__149;
#line 178
___nl__bool__145 = !___nl__bool__145;
#line 178
if(___nl__bool__145){ goto label_41;}
#line 178
c_rt_lib0move(&___nl__im__150, c_rt_lib0array_mk(0));
#line 178
nl_die_arg(___nl__im__150);
#line 178
goto label_40;
#line 178
label_41:
#line 178
label_40:
#line 179
___nl__int__152 = 6;
#line 179
c_rt_lib0move(&___nl__im__151, c_rt_lib0int_new(___nl__int__152));
#line 179
c_rt_lib0hash_set_value_dec(___nl__im_ptr__144, ___get_global_const(203), ___nl__im__151);
#line 179
c_rt_lib0clear(&___nl__im__151);
#line 179
//clear ___nl__int__152;
#line 180
c_rt_lib0move(&___nl__im__153,___get_global_const(203));
#line 180
c_rt_lib0move(&___nl__im__153, c_rt_lib0get_ref_hash((*___nl__im_ptr__144), ___nl__im__153));
#line 180
___nl__int__154 = 1;
#line 180
___nl__int__155 = getIntFromImm(___nl__im__153);
#line 180
___nl__int__156 = ___nl__int__155 + ___nl__int__154;
#line 180
c_rt_lib0move(&___nl__im__153, c_rt_lib0int_new(___nl__int__156));
#line 180
c_rt_lib0move(&___nl__string__157,___get_global_const(203));
#line 180
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__144, ___nl__string__157, ___nl__im__153));
#line 180
c_rt_lib0clear(&___nl__im__153);
#line 180
//clear ___nl__int__154;
#line 180
//clear ___nl__int__155;
#line 180
//clear ___nl__int__156;
#line 180
c_rt_lib0clear(&___nl__string__157);
#line 181
goto label_33;
#line 181
label_37:
#line 181
if (___nl__var__120.label != 3) nl_die();
___nl__rec_ptr__158 = ___nl__var__120.value.rekord_ownowy0case;
#line 182
c_rt_lib0move(&___nl__im__159, c_rt_lib0array_mk(0));
#line 182
nl_die_arg(___nl__im__159);
#line 183
goto label_33;
#line 183
label_38:
#line 183
if (___nl__var__120.label != 4) nl_die();
___nl__im_ptr__160 = ___nl__var__120.value.wariant_imowy0case;
#line 184
c_rt_lib0move(&___nl__im__161, c_rt_lib0array_mk(0));
#line 184
nl_die_arg(___nl__im__161);
#line 185
goto label_33;
#line 185
label_39:
#line 185
if (___nl__var__120.label != 5) nl_die();
___nl__var_ptr__162 = ___nl__var__120.value.wariant_ownowy0case;
#line 186
c_rt_lib0move(&___nl__im__163, c_rt_lib0array_mk(0));
#line 186
nl_die_arg(___nl__im__163);
#line 187
goto label_33;
#line 187
label_33:
#line 188
if (___nl__var__120.label != 2) nl_die();
___nl__im_ptr__167 = ___nl__var__120.value.rekord_imowy0case;
#line 188
c_rt_lib0copy(&___nl__im__166, (*___nl__im_ptr__167));
#line 188
___nl__im_ptr__167 = NULL;
#line 188
c_rt_lib0move(&___nl__im__168, c_rt_lib0hash_get_value_dec(___nl__im__166, ___get_global_const(203)));
#line 188
___nl__int__165 = getIntFromImm(___nl__im__168);
#line 188
c_rt_lib0clear(&___nl__im__166);
#line 188
c_rt_lib0clear(&___nl__im__168);
#line 188
___nl__int__169 = 7;
#line 188
___nl__int__170 = ___nl__int__165 != ___nl__int__169;
#line 188
___nl__bool__164 = ___nl__int__170;
#line 188
//clear ___nl__int__165;
#line 188
c_rt_lib0clear(&___nl__im__166);
#line 188
c_rt_lib0clear(&___nl__im__168);
#line 188
//clear ___nl__int__169;
#line 188
//clear ___nl__int__170;
#line 188
___nl__bool__164 = !___nl__bool__164;
#line 188
if(___nl__bool__164){ goto label_43;}
#line 188
c_rt_lib0move(&___nl__im__171, c_rt_lib0array_mk(0));
#line 188
nl_die_arg(___nl__im__171);
#line 188
goto label_42;
#line 188
label_43:
#line 188
label_42:
#line 190
___nl__int__174 = 6;
#line 190
___nl__rec__173.pole_ownowe0field = ___nl__int__174;
#line 190
//clear ___nl__int__174;
#line 190
test_own_var0test_own_var0zlozony_wariant0type0ov_mk(&___nl__var__172, 3, &___nl__rec__173, sizeof(anon_type00RBanon_type00int0pole_ownowe0RE));
#line 191
if (___nl__var__172.label != 3) nl_die();
___nl__rec_ptr__175 = ___nl__var__172.value.rekord_ownowy0case;
#line 191
___nl__int_ptr__176 = &(___nl__rec_ptr__175->pole_ownowe0field);
#line 191
___nl__int__177 = 1;
#line 191
(*___nl__int_ptr__176) = (*___nl__int_ptr__176) + ___nl__int__177;
#line 191
___nl__int_ptr__176 = NULL;
#line 191
___nl__rec_ptr__175 = NULL;
#line 191
//clear ___nl__int__177;
#line 192
if (___nl__var__172.label != 3) nl_die();
___nl__rec_ptr__180 = ___nl__var__172.value.rekord_ownowy0case;
#line 192
___nl__int_ptr__181 = &(___nl__rec_ptr__180->pole_ownowe0field);
#line 192
___nl__int__179 = (*___nl__int_ptr__181);
#line 192
___nl__int_ptr__181 = NULL;
#line 192
___nl__rec_ptr__180 = NULL;
#line 192
___nl__int__182 = 7;
#line 192
___nl__int__183 = ___nl__int__179 != ___nl__int__182;
#line 192
___nl__bool__178 = ___nl__int__183;
#line 192
//clear ___nl__int__179;
#line 192
//clear ___nl__int__182;
#line 192
//clear ___nl__int__183;
#line 192
___nl__bool__178 = !___nl__bool__178;
#line 192
if(___nl__bool__178){ goto label_45;}
#line 192
c_rt_lib0move(&___nl__im__184, c_rt_lib0array_mk(0));
#line 192
nl_die_arg(___nl__im__184);
#line 192
goto label_44;
#line 192
label_45:
#line 192
label_44:
#line 193
___nl__bool__185 = (___nl__var__172.label == 0);
#line 193
if(___nl__bool__185){ goto label_47;}
#line 195
___nl__bool__185 = (___nl__var__172.label == 1);
#line 195
if(___nl__bool__185){ goto label_48;}
#line 197
___nl__bool__185 = (___nl__var__172.label == 2);
#line 197
if(___nl__bool__185){ goto label_49;}
#line 199
___nl__bool__185 = (___nl__var__172.label == 3);
#line 199
if(___nl__bool__185){ goto label_50;}
#line 203
___nl__bool__185 = (___nl__var__172.label == 4);
#line 203
if(___nl__bool__185){ goto label_51;}
#line 205
___nl__bool__185 = (___nl__var__172.label == 5);
#line 205
if(___nl__bool__185){ goto label_52;}
#line 205
c_rt_lib0move(&___nl__im__186,___get_global_const(71));
#line 205
c_rt_lib0move(&___nl__im__186, c_rt_lib0array_mk(2, ___nl__im__186, ___nl__var__172));
#line 205
nl_die_arg(___nl__im__186);
#line 193
label_47:
#line 193
if (___nl__var__172.label != 0) nl_die();
___nl__im_ptr__187 = ___nl__var__172.value.tablica_imowa0case;
#line 194
c_rt_lib0move(&___nl__im__188, c_rt_lib0array_mk(0));
#line 194
nl_die_arg(___nl__im__188);
#line 195
goto label_46;
#line 195
label_48:
#line 195
if (___nl__var__172.label != 1) nl_die();
___nl__arr_ptr__189 = ___nl__var__172.value.tablica_ownowa0case;
#line 196
c_rt_lib0move(&___nl__im__190, c_rt_lib0array_mk(0));
#line 196
nl_die_arg(___nl__im__190);
#line 197
goto label_46;
#line 197
label_49:
#line 197
if (___nl__var__172.label != 2) nl_die();
___nl__im_ptr__191 = ___nl__var__172.value.rekord_imowy0case;
#line 198
c_rt_lib0move(&___nl__im__192, c_rt_lib0array_mk(0));
#line 198
nl_die_arg(___nl__im__192);
#line 199
goto label_46;
#line 199
label_50:
#line 199
if (___nl__var__172.label != 3) nl_die();
___nl__rec_ptr__193 = ___nl__var__172.value.rekord_ownowy0case;
#line 200
___nl__int_ptr__196 = &(___nl__rec_ptr__193->pole_ownowe0field);
#line 200
___nl__int__195 = (*___nl__int_ptr__196);
#line 200
___nl__int_ptr__196 = NULL;
#line 200
___nl__int__197 = 7;
#line 200
___nl__int__198 = ___nl__int__195 != ___nl__int__197;
#line 200
___nl__bool__194 = ___nl__int__198;
#line 200
//clear ___nl__int__195;
#line 200
//clear ___nl__int__197;
#line 200
//clear ___nl__int__198;
#line 200
___nl__bool__194 = !___nl__bool__194;
#line 200
if(___nl__bool__194){ goto label_54;}
#line 200
c_rt_lib0move(&___nl__im__199, c_rt_lib0array_mk(0));
#line 200
nl_die_arg(___nl__im__199);
#line 200
goto label_53;
#line 200
label_54:
#line 200
label_53:
#line 201
___nl__int_ptr__200 = &(___nl__rec_ptr__193->pole_ownowe0field);
#line 201
___nl__int__201 = 8;
#line 201
(*___nl__int_ptr__200) = ___nl__int__201;
#line 201
___nl__int_ptr__200 = NULL;
#line 201
//clear ___nl__int__201;
#line 202
___nl__int_ptr__202 = &(___nl__rec_ptr__193->pole_ownowe0field);
#line 202
___nl__int__203 = 1;
#line 202
(*___nl__int_ptr__202) = (*___nl__int_ptr__202) + ___nl__int__203;
#line 202
___nl__int_ptr__202 = NULL;
#line 202
//clear ___nl__int__203;
#line 203
goto label_46;
#line 203
label_51:
#line 203
if (___nl__var__172.label != 4) nl_die();
___nl__im_ptr__204 = ___nl__var__172.value.wariant_imowy0case;
#line 204
c_rt_lib0move(&___nl__im__205, c_rt_lib0array_mk(0));
#line 204
nl_die_arg(___nl__im__205);
#line 205
goto label_46;
#line 205
label_52:
#line 205
if (___nl__var__172.label != 5) nl_die();
___nl__var_ptr__206 = ___nl__var__172.value.wariant_ownowy0case;
#line 206
c_rt_lib0move(&___nl__im__207, c_rt_lib0array_mk(0));
#line 206
nl_die_arg(___nl__im__207);
#line 207
goto label_46;
#line 207
label_46:
#line 208
if (___nl__var__172.label != 3) nl_die();
___nl__rec_ptr__210 = ___nl__var__172.value.rekord_ownowy0case;
#line 208
___nl__int_ptr__211 = &(___nl__rec_ptr__210->pole_ownowe0field);
#line 208
___nl__int__209 = (*___nl__int_ptr__211);
#line 208
___nl__int_ptr__211 = NULL;
#line 208
___nl__rec_ptr__210 = NULL;
#line 208
___nl__int__212 = 9;
#line 208
___nl__int__213 = ___nl__int__209 != ___nl__int__212;
#line 208
___nl__bool__208 = ___nl__int__213;
#line 208
//clear ___nl__int__209;
#line 208
//clear ___nl__int__212;
#line 208
//clear ___nl__int__213;
#line 208
___nl__bool__208 = !___nl__bool__208;
#line 208
if(___nl__bool__208){ goto label_56;}
#line 208
c_rt_lib0move(&___nl__im__214, c_rt_lib0array_mk(0));
#line 208
nl_die_arg(___nl__im__214);
#line 208
goto label_55;
#line 208
label_56:
#line 208
label_55:
#line 210
___nl__int__217 = 8;
#line 210
c_rt_lib0move(&___nl__im__218, c_rt_lib0int_new(___nl__int__217));
#line 210
c_rt_lib0move(&___nl__im__216, c_rt_lib0ov_mk_arg(___get_global_const(205), ___nl__im__218));
#line 210
//clear ___nl__int__217;
#line 210
c_rt_lib0clear(&___nl__im__218);
#line 210
test_own_var0test_own_var0zlozony_wariant0type0ov_mk(&___nl__var__215, 4, &___nl__im__216, sizeof(ImmT ));
#line 211
if (___nl__var__215.label != 4) nl_die();
___nl__im_ptr__219 = ___nl__var__215.value.wariant_imowy0case;
#line 211
c_rt_lib0move(&___nl__im__220, c_rt_lib0priv_as((*___nl__im_ptr__219), ___get_global_const(205)));
#line 211
___nl__int__221 = 1;
#line 211
___nl__int__222 = getIntFromImm(___nl__im__220);
#line 211
___nl__int__223 = ___nl__int__222 + ___nl__int__221;
#line 211
c_rt_lib0move(&___nl__im__220, c_rt_lib0int_new(___nl__int__223));
#line 211
c_rt_lib0move(___nl__im_ptr__219, c_rt_lib0ov_mk_arg(___get_global_const(205), ___nl__im__220));
#line 211
___nl__im_ptr__219 = NULL;
#line 211
c_rt_lib0clear(&___nl__im__220);
#line 211
//clear ___nl__int__221;
#line 211
//clear ___nl__int__222;
#line 211
//clear ___nl__int__223;
#line 212
if (___nl__var__215.label != 4) nl_die();
___nl__im_ptr__227 = ___nl__var__215.value.wariant_imowy0case;
#line 212
c_rt_lib0copy(&___nl__im__226, (*___nl__im_ptr__227));
#line 212
___nl__im_ptr__227 = NULL;
#line 212
if (___nl__var__215.label != 4) nl_die();
___nl__im_ptr__229 = ___nl__var__215.value.wariant_imowy0case;
#line 212
c_rt_lib0copy(&___nl__im__228, (*___nl__im_ptr__229));
#line 212
___nl__im_ptr__229 = NULL;
#line 212
c_rt_lib0move(&___nl__im__230, c_rt_lib0priv_as(___nl__im__228, ___get_global_const(205)));
#line 212
___nl__int__225 = getIntFromImm(___nl__im__230);
#line 212
c_rt_lib0clear(&___nl__im__226);
#line 212
c_rt_lib0clear(&___nl__im__228);
#line 212
c_rt_lib0clear(&___nl__im__230);
#line 212
___nl__int__231 = 9;
#line 212
___nl__int__232 = ___nl__int__225 != ___nl__int__231;
#line 212
___nl__bool__224 = ___nl__int__232;
#line 212
//clear ___nl__int__225;
#line 212
c_rt_lib0clear(&___nl__im__226);
#line 212
c_rt_lib0clear(&___nl__im__228);
#line 212
c_rt_lib0clear(&___nl__im__230);
#line 212
//clear ___nl__int__231;
#line 212
//clear ___nl__int__232;
#line 212
___nl__bool__224 = !___nl__bool__224;
#line 212
if(___nl__bool__224){ goto label_58;}
#line 212
c_rt_lib0move(&___nl__im__233, c_rt_lib0array_mk(0));
#line 212
nl_die_arg(___nl__im__233);
#line 212
goto label_57;
#line 212
label_58:
#line 212
label_57:
#line 213
___nl__bool__234 = (___nl__var__215.label == 0);
#line 213
if(___nl__bool__234){ goto label_60;}
#line 215
___nl__bool__234 = (___nl__var__215.label == 1);
#line 215
if(___nl__bool__234){ goto label_61;}
#line 217
___nl__bool__234 = (___nl__var__215.label == 2);
#line 217
if(___nl__bool__234){ goto label_62;}
#line 219
___nl__bool__234 = (___nl__var__215.label == 3);
#line 219
if(___nl__bool__234){ goto label_63;}
#line 221
___nl__bool__234 = (___nl__var__215.label == 4);
#line 221
if(___nl__bool__234){ goto label_64;}
#line 225
___nl__bool__234 = (___nl__var__215.label == 5);
#line 225
if(___nl__bool__234){ goto label_65;}
#line 225
c_rt_lib0move(&___nl__im__235,___get_global_const(71));
#line 225
c_rt_lib0move(&___nl__im__235, c_rt_lib0array_mk(2, ___nl__im__235, ___nl__var__215));
#line 225
nl_die_arg(___nl__im__235);
#line 213
label_60:
#line 213
if (___nl__var__215.label != 0) nl_die();
___nl__im_ptr__236 = ___nl__var__215.value.tablica_imowa0case;
#line 214
c_rt_lib0move(&___nl__im__237, c_rt_lib0array_mk(0));
#line 214
nl_die_arg(___nl__im__237);
#line 215
goto label_59;
#line 215
label_61:
#line 215
if (___nl__var__215.label != 1) nl_die();
___nl__arr_ptr__238 = ___nl__var__215.value.tablica_ownowa0case;
#line 216
c_rt_lib0move(&___nl__im__239, c_rt_lib0array_mk(0));
#line 216
nl_die_arg(___nl__im__239);
#line 217
goto label_59;
#line 217
label_62:
#line 217
if (___nl__var__215.label != 2) nl_die();
___nl__im_ptr__240 = ___nl__var__215.value.rekord_imowy0case;
#line 218
c_rt_lib0move(&___nl__im__241, c_rt_lib0array_mk(0));
#line 218
nl_die_arg(___nl__im__241);
#line 219
goto label_59;
#line 219
label_63:
#line 219
if (___nl__var__215.label != 3) nl_die();
___nl__rec_ptr__242 = ___nl__var__215.value.rekord_ownowy0case;
#line 220
c_rt_lib0move(&___nl__im__243, c_rt_lib0array_mk(0));
#line 220
nl_die_arg(___nl__im__243);
#line 221
goto label_59;
#line 221
label_64:
#line 221
if (___nl__var__215.label != 4) nl_die();
___nl__im_ptr__244 = ___nl__var__215.value.wariant_imowy0case;
#line 222
c_rt_lib0move(&___nl__im__247, c_rt_lib0priv_as((*___nl__im_ptr__244), ___get_global_const(205)));
#line 222
___nl__int__246 = getIntFromImm(___nl__im__247);
#line 222
c_rt_lib0clear(&___nl__im__247);
#line 222
___nl__int__248 = 9;
#line 222
___nl__int__249 = ___nl__int__246 != ___nl__int__248;
#line 222
___nl__bool__245 = ___nl__int__249;
#line 222
//clear ___nl__int__246;
#line 222
c_rt_lib0clear(&___nl__im__247);
#line 222
//clear ___nl__int__248;
#line 222
//clear ___nl__int__249;
#line 222
___nl__bool__245 = !___nl__bool__245;
#line 222
if(___nl__bool__245){ goto label_67;}
#line 222
c_rt_lib0move(&___nl__im__250, c_rt_lib0array_mk(0));
#line 222
nl_die_arg(___nl__im__250);
#line 222
goto label_66;
#line 222
label_67:
#line 222
label_66:
#line 223
c_rt_lib0move(&___nl__im__251, c_rt_lib0priv_as((*___nl__im_ptr__244), ___get_global_const(205)));
#line 223
___nl__int__252 = 10;
#line 223
c_rt_lib0move(&___nl__im__251, c_rt_lib0int_new(___nl__int__252));
#line 223
c_rt_lib0move(___nl__im_ptr__244, c_rt_lib0ov_mk_arg(___get_global_const(205), ___nl__im__251));
#line 223
c_rt_lib0clear(&___nl__im__251);
#line 223
//clear ___nl__int__252;
#line 224
c_rt_lib0move(&___nl__im__253, c_rt_lib0priv_as((*___nl__im_ptr__244), ___get_global_const(205)));
#line 224
___nl__int__254 = 1;
#line 224
___nl__int__255 = getIntFromImm(___nl__im__253);
#line 224
___nl__int__256 = ___nl__int__255 + ___nl__int__254;
#line 224
c_rt_lib0move(&___nl__im__253, c_rt_lib0int_new(___nl__int__256));
#line 224
c_rt_lib0move(___nl__im_ptr__244, c_rt_lib0ov_mk_arg(___get_global_const(205), ___nl__im__253));
#line 224
c_rt_lib0clear(&___nl__im__253);
#line 224
//clear ___nl__int__254;
#line 224
//clear ___nl__int__255;
#line 224
//clear ___nl__int__256;
#line 225
goto label_59;
#line 225
label_65:
#line 225
if (___nl__var__215.label != 5) nl_die();
___nl__var_ptr__257 = ___nl__var__215.value.wariant_ownowy0case;
#line 226
c_rt_lib0move(&___nl__im__258, c_rt_lib0array_mk(0));
#line 226
nl_die_arg(___nl__im__258);
#line 227
goto label_59;
#line 227
label_59:
#line 228
if (___nl__var__215.label != 4) nl_die();
___nl__im_ptr__262 = ___nl__var__215.value.wariant_imowy0case;
#line 228
c_rt_lib0copy(&___nl__im__261, (*___nl__im_ptr__262));
#line 228
___nl__im_ptr__262 = NULL;
#line 228
if (___nl__var__215.label != 4) nl_die();
___nl__im_ptr__264 = ___nl__var__215.value.wariant_imowy0case;
#line 228
c_rt_lib0copy(&___nl__im__263, (*___nl__im_ptr__264));
#line 228
___nl__im_ptr__264 = NULL;
#line 228
c_rt_lib0move(&___nl__im__265, c_rt_lib0priv_as(___nl__im__263, ___get_global_const(205)));
#line 228
___nl__int__260 = getIntFromImm(___nl__im__265);
#line 228
c_rt_lib0clear(&___nl__im__261);
#line 228
c_rt_lib0clear(&___nl__im__263);
#line 228
c_rt_lib0clear(&___nl__im__265);
#line 228
___nl__int__266 = 11;
#line 228
___nl__int__267 = ___nl__int__260 != ___nl__int__266;
#line 228
___nl__bool__259 = ___nl__int__267;
#line 228
//clear ___nl__int__260;
#line 228
c_rt_lib0clear(&___nl__im__261);
#line 228
c_rt_lib0clear(&___nl__im__263);
#line 228
c_rt_lib0clear(&___nl__im__265);
#line 228
//clear ___nl__int__266;
#line 228
//clear ___nl__int__267;
#line 228
___nl__bool__259 = !___nl__bool__259;
#line 228
if(___nl__bool__259){ goto label_69;}
#line 228
c_rt_lib0move(&___nl__im__268, c_rt_lib0array_mk(0));
#line 228
nl_die_arg(___nl__im__268);
#line 228
goto label_68;
#line 228
label_69:
#line 228
label_68:
#line 230
___nl__int__271 = 10;
#line 230
test_own_var0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0ov_mk(&___nl__var__270, 0, &___nl__int__271, sizeof(INT ));
#line 230
//clear ___nl__int__271;
#line 230
test_own_var0test_own_var0zlozony_wariant0type0ov_mk(&___nl__var__269, 5, &___nl__var__270, sizeof(anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE));
#line 231
if (___nl__var__269.label != 5) nl_die();
___nl__var_ptr__272 = ___nl__var__269.value.wariant_ownowy0case;
#line 231
if (___nl__var_ptr__272->label != 0) nl_die();
___nl__int_ptr__273 = ___nl__var_ptr__272->value.wariant_ownowy_wewnetrzny0case;
#line 231
___nl__int__274 = 1;
#line 231
(*___nl__int_ptr__273) = (*___nl__int_ptr__273) + ___nl__int__274;
#line 231
___nl__int_ptr__273 = NULL;
#line 231
___nl__var_ptr__272 = NULL;
#line 231
//clear ___nl__int__274;
#line 232
if (___nl__var__269.label != 5) nl_die();
___nl__var_ptr__277 = ___nl__var__269.value.wariant_ownowy0case;
#line 232
if (___nl__var_ptr__277->label != 0) nl_die();
___nl__int_ptr__278 = ___nl__var_ptr__277->value.wariant_ownowy_wewnetrzny0case;
#line 232
___nl__int__276 = (*___nl__int_ptr__278);
#line 232
___nl__int_ptr__278 = NULL;
#line 232
___nl__var_ptr__277 = NULL;
#line 232
___nl__int__279 = 11;
#line 232
___nl__int__280 = ___nl__int__276 != ___nl__int__279;
#line 232
___nl__bool__275 = ___nl__int__280;
#line 232
//clear ___nl__int__276;
#line 232
//clear ___nl__int__279;
#line 232
//clear ___nl__int__280;
#line 232
___nl__bool__275 = !___nl__bool__275;
#line 232
if(___nl__bool__275){ goto label_71;}
#line 232
c_rt_lib0move(&___nl__im__281, c_rt_lib0array_mk(0));
#line 232
nl_die_arg(___nl__im__281);
#line 232
goto label_70;
#line 232
label_71:
#line 232
label_70:
#line 233
___nl__bool__282 = (___nl__var__269.label == 0);
#line 233
if(___nl__bool__282){ goto label_73;}
#line 235
___nl__bool__282 = (___nl__var__269.label == 1);
#line 235
if(___nl__bool__282){ goto label_74;}
#line 237
___nl__bool__282 = (___nl__var__269.label == 2);
#line 237
if(___nl__bool__282){ goto label_75;}
#line 239
___nl__bool__282 = (___nl__var__269.label == 3);
#line 239
if(___nl__bool__282){ goto label_76;}
#line 241
___nl__bool__282 = (___nl__var__269.label == 4);
#line 241
if(___nl__bool__282){ goto label_77;}
#line 243
___nl__bool__282 = (___nl__var__269.label == 5);
#line 243
if(___nl__bool__282){ goto label_78;}
#line 243
c_rt_lib0move(&___nl__im__283,___get_global_const(71));
#line 243
c_rt_lib0move(&___nl__im__283, c_rt_lib0array_mk(2, ___nl__im__283, ___nl__var__269));
#line 243
nl_die_arg(___nl__im__283);
#line 233
label_73:
#line 233
if (___nl__var__269.label != 0) nl_die();
___nl__im_ptr__284 = ___nl__var__269.value.tablica_imowa0case;
#line 234
c_rt_lib0move(&___nl__im__285, c_rt_lib0array_mk(0));
#line 234
nl_die_arg(___nl__im__285);
#line 235
goto label_72;
#line 235
label_74:
#line 235
if (___nl__var__269.label != 1) nl_die();
___nl__arr_ptr__286 = ___nl__var__269.value.tablica_ownowa0case;
#line 236
c_rt_lib0move(&___nl__im__287, c_rt_lib0array_mk(0));
#line 236
nl_die_arg(___nl__im__287);
#line 237
goto label_72;
#line 237
label_75:
#line 237
if (___nl__var__269.label != 2) nl_die();
___nl__im_ptr__288 = ___nl__var__269.value.rekord_imowy0case;
#line 238
c_rt_lib0move(&___nl__im__289, c_rt_lib0array_mk(0));
#line 238
nl_die_arg(___nl__im__289);
#line 239
goto label_72;
#line 239
label_76:
#line 239
if (___nl__var__269.label != 3) nl_die();
___nl__rec_ptr__290 = ___nl__var__269.value.rekord_ownowy0case;
#line 240
c_rt_lib0move(&___nl__im__291, c_rt_lib0array_mk(0));
#line 240
nl_die_arg(___nl__im__291);
#line 241
goto label_72;
#line 241
label_77:
#line 241
if (___nl__var__269.label != 4) nl_die();
___nl__im_ptr__292 = ___nl__var__269.value.wariant_imowy0case;
#line 242
c_rt_lib0move(&___nl__im__293, c_rt_lib0array_mk(0));
#line 242
nl_die_arg(___nl__im__293);
#line 243
goto label_72;
#line 243
label_78:
#line 243
if (___nl__var__269.label != 5) nl_die();
___nl__var_ptr__294 = ___nl__var__269.value.wariant_ownowy0case;
#line 244
if (___nl__var_ptr__294->label != 0) nl_die();
___nl__int_ptr__297 = ___nl__var_ptr__294->value.wariant_ownowy_wewnetrzny0case;
#line 244
___nl__int__296 = (*___nl__int_ptr__297);
#line 244
___nl__int_ptr__297 = NULL;
#line 244
___nl__int__298 = 11;
#line 244
___nl__int__299 = ___nl__int__296 != ___nl__int__298;
#line 244
___nl__bool__295 = ___nl__int__299;
#line 244
//clear ___nl__int__296;
#line 244
//clear ___nl__int__298;
#line 244
//clear ___nl__int__299;
#line 244
___nl__bool__295 = !___nl__bool__295;
#line 244
if(___nl__bool__295){ goto label_80;}
#line 244
c_rt_lib0move(&___nl__im__300, c_rt_lib0array_mk(0));
#line 244
nl_die_arg(___nl__im__300);
#line 244
goto label_79;
#line 244
label_80:
#line 244
label_79:
#line 245
if (___nl__var_ptr__294->label != 0) nl_die();
___nl__int_ptr__301 = ___nl__var_ptr__294->value.wariant_ownowy_wewnetrzny0case;
#line 245
___nl__int__302 = 12;
#line 245
(*___nl__int_ptr__301) = ___nl__int__302;
#line 245
___nl__int_ptr__301 = NULL;
#line 245
//clear ___nl__int__302;
#line 246
if (___nl__var_ptr__294->label != 0) nl_die();
___nl__int_ptr__303 = ___nl__var_ptr__294->value.wariant_ownowy_wewnetrzny0case;
#line 246
___nl__int__304 = 1;
#line 246
(*___nl__int_ptr__303) = (*___nl__int_ptr__303) + ___nl__int__304;
#line 246
___nl__int_ptr__303 = NULL;
#line 246
//clear ___nl__int__304;
#line 247
goto label_72;
#line 247
label_72:
#line 248
if (___nl__var__269.label != 5) nl_die();
___nl__var_ptr__307 = ___nl__var__269.value.wariant_ownowy0case;
#line 248
if (___nl__var_ptr__307->label != 0) nl_die();
___nl__int_ptr__308 = ___nl__var_ptr__307->value.wariant_ownowy_wewnetrzny0case;
#line 248
___nl__int__306 = (*___nl__int_ptr__308);
#line 248
___nl__int_ptr__308 = NULL;
#line 248
___nl__var_ptr__307 = NULL;
#line 248
___nl__int__309 = 13;
#line 248
___nl__int__310 = ___nl__int__306 != ___nl__int__309;
#line 248
___nl__bool__305 = ___nl__int__310;
#line 248
//clear ___nl__int__306;
#line 248
//clear ___nl__int__309;
#line 248
//clear ___nl__int__310;
#line 248
___nl__bool__305 = !___nl__bool__305;
#line 248
if(___nl__bool__305){ goto label_82;}
#line 248
c_rt_lib0move(&___nl__im__311, c_rt_lib0array_mk(0));
#line 248
nl_die_arg(___nl__im__311);
#line 248
goto label_81;
#line 248
label_82:
#line 248
label_81:
#line 248
test_own_var0test_own_var0zlozony_wariant0type0clean(___nl__var__0);;
#line 248
c_rt_lib0clear(&___nl__im__1);
#line 248
//clear ___nl__int__2;
#line 248
c_rt_lib0clear(&___nl__im__3);
#line 248
//clear ___nl__int__5;
#line 248
c_rt_lib0clear(&___nl__im__6);
#line 248
//clear ___nl__bool__7;
#line 248
//clear ___nl__int__8;
#line 248
c_rt_lib0clear(&___nl__im__9);
#line 248
//clear ___nl__int__11;
#line 248
c_rt_lib0clear(&___nl__im__12);
#line 248
//clear ___nl__int__13;
#line 248
//clear ___nl__int__14;
#line 248
c_rt_lib0clear(&___nl__im__15);
#line 248
//clear ___nl__bool__16;
#line 248
c_rt_lib0clear(&___nl__im__17);
#line 248
//clear ___nl__bool__19;
#line 248
//clear ___nl__int__20;
#line 248
//clear ___nl__int__21;
#line 248
c_rt_lib0clear(&___nl__im__22);
#line 248
//clear ___nl__int__23;
#line 248
//clear ___nl__int__24;
#line 248
c_rt_lib0clear(&___nl__im__25);
#line 248
//clear ___nl__int__26;
#line 248
c_rt_lib0clear(&___nl__im__27);
#line 248
c_rt_lib0clear(&___nl__im__28);
#line 248
//clear ___nl__int__29;
#line 248
//clear ___nl__int__30;
#line 248
c_rt_lib0clear(&___nl__im__31);
#line 248
//clear ___nl__int__32;
#line 248
//clear ___nl__int__33;
#line 248
//clear ___nl__int__34;
#line 248
//clear ___nl__int__35;
#line 248
c_rt_lib0clear(&___nl__im__37);
#line 248
c_rt_lib0clear(&___nl__im__39);
#line 248
c_rt_lib0clear(&___nl__im__41);
#line 248
c_rt_lib0clear(&___nl__im__43);
#line 248
c_rt_lib0clear(&___nl__im__45);
#line 248
//clear ___nl__bool__46;
#line 248
//clear ___nl__int__47;
#line 248
c_rt_lib0clear(&___nl__im__48);
#line 248
//clear ___nl__int__50;
#line 248
c_rt_lib0clear(&___nl__im__51);
#line 248
//clear ___nl__int__52;
#line 248
//clear ___nl__int__53;
#line 248
c_rt_lib0clear(&___nl__im__54);
#line 248
//clear ___nl__bool__55;
#line 248
//clear ___nl__int__56;
#line 248
c_rt_lib0clear(&___nl__im__57);
#line 248
//clear ___nl__int__59;
#line 248
c_rt_lib0clear(&___nl__im__60);
#line 248
//clear ___nl__int__61;
#line 248
//clear ___nl__int__62;
#line 248
c_rt_lib0clear(&___nl__im__63);
#line 248
test_own_var0test_own_var0zlozony_wariant0type0clean(___nl__var__64);;
#line 248

test_own_var0anon_type00ownarranon_type00int0clean(___nl__arr__65);;
#line 248
//clear ___nl__int__66;
#line 248
//clear ___nl__int__68;
#line 248
//clear ___nl__bool__69;
#line 248
//clear ___nl__int__70;
#line 248
//clear ___nl__int__72;
#line 248
//clear ___nl__int__74;
#line 248
//clear ___nl__int__75;
#line 248
c_rt_lib0clear(&___nl__im__76);
#line 248
//clear ___nl__bool__77;
#line 248
c_rt_lib0clear(&___nl__im__78);
#line 248
c_rt_lib0clear(&___nl__im__80);
#line 248
//clear ___nl__bool__82;
#line 248
//clear ___nl__int__83;
#line 248
//clear ___nl__int__84;
#line 248
//clear ___nl__int__86;
#line 248
//clear ___nl__int__87;
#line 248
c_rt_lib0clear(&___nl__im__88);
#line 248
//clear ___nl__int__89;
#line 248
//clear ___nl__int__90;
#line 248
//clear ___nl__int__92;
#line 248
//clear ___nl__int__93;
#line 248
//clear ___nl__int__95;
#line 248
c_rt_lib0clear(&___nl__im__97);
#line 248
c_rt_lib0clear(&___nl__im__99);
#line 248
c_rt_lib0clear(&___nl__im__101);
#line 248
c_rt_lib0clear(&___nl__im__103);
#line 248
//clear ___nl__bool__104;
#line 248
//clear ___nl__int__105;
#line 248
//clear ___nl__int__107;
#line 248
//clear ___nl__int__109;
#line 248
//clear ___nl__int__110;
#line 248
c_rt_lib0clear(&___nl__im__111);
#line 248
//clear ___nl__bool__112;
#line 248
//clear ___nl__int__113;
#line 248
//clear ___nl__int__115;
#line 248
//clear ___nl__int__117;
#line 248
//clear ___nl__int__118;
#line 248
c_rt_lib0clear(&___nl__im__119);
#line 248
test_own_var0test_own_var0zlozony_wariant0type0clean(___nl__var__120);;
#line 248
c_rt_lib0clear(&___nl__im__121);
#line 248
//clear ___nl__int__122;
#line 248
c_rt_lib0clear(&___nl__im__123);
#line 248
c_rt_lib0clear(&___nl__im__125);
#line 248
//clear ___nl__int__126;
#line 248
//clear ___nl__int__127;
#line 248
//clear ___nl__int__128;
#line 248
c_rt_lib0clear(&___nl__string__129);
#line 248
//clear ___nl__bool__130;
#line 248
//clear ___nl__int__131;
#line 248
c_rt_lib0clear(&___nl__im__132);
#line 248
c_rt_lib0clear(&___nl__im__134);
#line 248
//clear ___nl__int__135;
#line 248
//clear ___nl__int__136;
#line 248
c_rt_lib0clear(&___nl__im__137);
#line 248
//clear ___nl__bool__138;
#line 248
c_rt_lib0clear(&___nl__im__139);
#line 248
c_rt_lib0clear(&___nl__im__141);
#line 248
c_rt_lib0clear(&___nl__im__143);
#line 248
//clear ___nl__bool__145;
#line 248
//clear ___nl__int__146;
#line 248
c_rt_lib0clear(&___nl__im__147);
#line 248
//clear ___nl__int__148;
#line 248
//clear ___nl__int__149;
#line 248
c_rt_lib0clear(&___nl__im__150);
#line 248
c_rt_lib0clear(&___nl__im__151);
#line 248
//clear ___nl__int__152;
#line 248
c_rt_lib0clear(&___nl__im__153);
#line 248
//clear ___nl__int__154;
#line 248
//clear ___nl__int__155;
#line 248
//clear ___nl__int__156;
#line 248
c_rt_lib0clear(&___nl__string__157);
#line 248
c_rt_lib0clear(&___nl__im__159);
#line 248
c_rt_lib0clear(&___nl__im__161);
#line 248
c_rt_lib0clear(&___nl__im__163);
#line 248
//clear ___nl__bool__164;
#line 248
//clear ___nl__int__165;
#line 248
c_rt_lib0clear(&___nl__im__166);
#line 248
c_rt_lib0clear(&___nl__im__168);
#line 248
//clear ___nl__int__169;
#line 248
//clear ___nl__int__170;
#line 248
c_rt_lib0clear(&___nl__im__171);
#line 248
test_own_var0test_own_var0zlozony_wariant0type0clean(___nl__var__172);;
#line 248
test_own_var0anon_type00RBanon_type00int0pole_ownowe0RE0clean(___nl__rec__173);;
#line 248
//clear ___nl__int__174;
#line 248
//clear ___nl__int__177;
#line 248
//clear ___nl__bool__178;
#line 248
//clear ___nl__int__179;
#line 248
//clear ___nl__int__182;
#line 248
//clear ___nl__int__183;
#line 248
c_rt_lib0clear(&___nl__im__184);
#line 248
//clear ___nl__bool__185;
#line 248
c_rt_lib0clear(&___nl__im__186);
#line 248
c_rt_lib0clear(&___nl__im__188);
#line 248
c_rt_lib0clear(&___nl__im__190);
#line 248
c_rt_lib0clear(&___nl__im__192);
#line 248
//clear ___nl__bool__194;
#line 248
//clear ___nl__int__195;
#line 248
//clear ___nl__int__197;
#line 248
//clear ___nl__int__198;
#line 248
c_rt_lib0clear(&___nl__im__199);
#line 248
//clear ___nl__int__201;
#line 248
//clear ___nl__int__203;
#line 248
c_rt_lib0clear(&___nl__im__205);
#line 248
c_rt_lib0clear(&___nl__im__207);
#line 248
//clear ___nl__bool__208;
#line 248
//clear ___nl__int__209;
#line 248
//clear ___nl__int__212;
#line 248
//clear ___nl__int__213;
#line 248
c_rt_lib0clear(&___nl__im__214);
#line 248
test_own_var0test_own_var0zlozony_wariant0type0clean(___nl__var__215);;
#line 248
c_rt_lib0clear(&___nl__im__216);
#line 248
//clear ___nl__int__217;
#line 248
c_rt_lib0clear(&___nl__im__218);
#line 248
c_rt_lib0clear(&___nl__im__220);
#line 248
//clear ___nl__int__221;
#line 248
//clear ___nl__int__222;
#line 248
//clear ___nl__int__223;
#line 248
//clear ___nl__bool__224;
#line 248
//clear ___nl__int__225;
#line 248
c_rt_lib0clear(&___nl__im__226);
#line 248
c_rt_lib0clear(&___nl__im__228);
#line 248
c_rt_lib0clear(&___nl__im__230);
#line 248
//clear ___nl__int__231;
#line 248
//clear ___nl__int__232;
#line 248
c_rt_lib0clear(&___nl__im__233);
#line 248
//clear ___nl__bool__234;
#line 248
c_rt_lib0clear(&___nl__im__235);
#line 248
c_rt_lib0clear(&___nl__im__237);
#line 248
c_rt_lib0clear(&___nl__im__239);
#line 248
c_rt_lib0clear(&___nl__im__241);
#line 248
c_rt_lib0clear(&___nl__im__243);
#line 248
//clear ___nl__bool__245;
#line 248
//clear ___nl__int__246;
#line 248
c_rt_lib0clear(&___nl__im__247);
#line 248
//clear ___nl__int__248;
#line 248
//clear ___nl__int__249;
#line 248
c_rt_lib0clear(&___nl__im__250);
#line 248
c_rt_lib0clear(&___nl__im__251);
#line 248
//clear ___nl__int__252;
#line 248
c_rt_lib0clear(&___nl__im__253);
#line 248
//clear ___nl__int__254;
#line 248
//clear ___nl__int__255;
#line 248
//clear ___nl__int__256;
#line 248
c_rt_lib0clear(&___nl__im__258);
#line 248
//clear ___nl__bool__259;
#line 248
//clear ___nl__int__260;
#line 248
c_rt_lib0clear(&___nl__im__261);
#line 248
c_rt_lib0clear(&___nl__im__263);
#line 248
c_rt_lib0clear(&___nl__im__265);
#line 248
//clear ___nl__int__266;
#line 248
//clear ___nl__int__267;
#line 248
c_rt_lib0clear(&___nl__im__268);
#line 248
test_own_var0test_own_var0zlozony_wariant0type0clean(___nl__var__269);;
#line 248
test_own_var0anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE0clean(___nl__var__270);;
#line 248
//clear ___nl__int__271;
#line 248
//clear ___nl__int__274;
#line 248
//clear ___nl__bool__275;
#line 248
//clear ___nl__int__276;
#line 248
//clear ___nl__int__279;
#line 248
//clear ___nl__int__280;
#line 248
c_rt_lib0clear(&___nl__im__281);
#line 248
//clear ___nl__bool__282;
#line 248
c_rt_lib0clear(&___nl__im__283);
#line 248
c_rt_lib0clear(&___nl__im__285);
#line 248
c_rt_lib0clear(&___nl__im__287);
#line 248
c_rt_lib0clear(&___nl__im__289);
#line 248
c_rt_lib0clear(&___nl__im__291);
#line 248
c_rt_lib0clear(&___nl__im__293);
#line 248
//clear ___nl__bool__295;
#line 248
//clear ___nl__int__296;
#line 248
//clear ___nl__int__298;
#line 248
//clear ___nl__int__299;
#line 248
c_rt_lib0clear(&___nl__im__300);
#line 248
//clear ___nl__int__302;
#line 248
//clear ___nl__int__304;
#line 248
//clear ___nl__bool__305;
#line 248
//clear ___nl__int__306;
#line 248
//clear ___nl__int__309;
#line 248
//clear ___nl__int__310;
#line 248
c_rt_lib0clear(&___nl__im__311);
#line 248
return NULL;
}

ImmT  test_own_var0conv_to_im00prosty_wariant(test_own_var0prosty_wariant0type* ___ref___var__0) {
test_own_var_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT * ___nl__int_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
bool * ___nl__bool_ptr__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT * ___nl__im_ptr__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT * ___nl__im_ptr__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
#line 1
___nl__bool__1 = ((*___ref___var__0).label == 0);
#line 1
if(___nl__bool__1){ goto label_2;}
#line 1
___nl__bool__1 = ((*___ref___var__0).label == 1);
#line 1
if(___nl__bool__1){ goto label_3;}
#line 1
___nl__bool__1 = ((*___ref___var__0).label == 2);
#line 1
if(___nl__bool__1){ goto label_4;}
#line 1
___nl__bool__1 = ((*___ref___var__0).label == 3);
#line 1
if(___nl__bool__1){ goto label_5;}
#line 1
___nl__bool__1 = ((*___ref___var__0).label == 4);
#line 1
if(___nl__bool__1){ goto label_6;}
#line 1
c_rt_lib0move(&___nl__im__2,___get_global_const(71));
#line 1
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, (*___ref___var__0)));
#line 1
nl_die_arg(___nl__im__2);
#line 1
label_2:
#line 1
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(196)));
#line 1
c_rt_lib0copy(&___nl__im__3, ___nl__im__4);
#line 1
//clear ___nl__bool__1;
#line 1
c_rt_lib0clear(&___nl__im__2);
#line 1
c_rt_lib0clear(&___nl__im__4);
#line 1
return ___nl__im__3;
#line 1
goto label_1;
#line 1
label_3:
#line 1
if ((*___ref___var__0).label != 1) nl_die();
___nl__int_ptr__5 = (*___ref___var__0).value.liczba0case;
#line 1
___nl__int__8 = (*___nl__int_ptr__5);
#line 1
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__8));
#line 1
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(178), ___nl__im__9));
#line 1
//clear ___nl__int__8;
#line 1
c_rt_lib0clear(&___nl__im__9);
#line 1
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 1
//clear ___nl__bool__1;
#line 1
c_rt_lib0clear(&___nl__im__2);
#line 1
c_rt_lib0clear(&___nl__im__3);
#line 1
c_rt_lib0clear(&___nl__im__4);
#line 1
c_rt_lib0clear(&___nl__im__7);
#line 1
//clear ___nl__int__8;
#line 1
c_rt_lib0clear(&___nl__im__9);
#line 1
return ___nl__im__6;
#line 1
goto label_1;
#line 1
label_4:
#line 1
if ((*___ref___var__0).label != 2) nl_die();
___nl__bool_ptr__10 = (*___ref___var__0).value.wyrazenie_logiczne0case;
#line 1
___nl__bool__13 = (*___nl__bool_ptr__10);
#line 1
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 1
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(197), ___nl__im__14));
#line 1
//clear ___nl__bool__13;
#line 1
c_rt_lib0clear(&___nl__im__14);
#line 1
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 1
//clear ___nl__bool__1;
#line 1
c_rt_lib0clear(&___nl__im__2);
#line 1
c_rt_lib0clear(&___nl__im__3);
#line 1
c_rt_lib0clear(&___nl__im__4);
#line 1
c_rt_lib0clear(&___nl__im__6);
#line 1
c_rt_lib0clear(&___nl__im__7);
#line 1
//clear ___nl__int__8;
#line 1
c_rt_lib0clear(&___nl__im__9);
#line 1
c_rt_lib0clear(&___nl__im__12);
#line 1
//clear ___nl__bool__13;
#line 1
c_rt_lib0clear(&___nl__im__14);
#line 1
return ___nl__im__11;
#line 1
goto label_1;
#line 1
label_5:
#line 1
if ((*___ref___var__0).label != 3) nl_die();
___nl__im_ptr__15 = (*___ref___var__0).value.napis0case;
#line 1
c_rt_lib0copy(&___nl__im__18, (*___nl__im_ptr__15));
#line 1
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(179), ___nl__im__18));
#line 1
c_rt_lib0clear(&___nl__im__18);
#line 1
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1
//clear ___nl__bool__1;
#line 1
c_rt_lib0clear(&___nl__im__2);
#line 1
c_rt_lib0clear(&___nl__im__3);
#line 1
c_rt_lib0clear(&___nl__im__4);
#line 1
c_rt_lib0clear(&___nl__im__6);
#line 1
c_rt_lib0clear(&___nl__im__7);
#line 1
//clear ___nl__int__8;
#line 1
c_rt_lib0clear(&___nl__im__9);
#line 1
c_rt_lib0clear(&___nl__im__11);
#line 1
c_rt_lib0clear(&___nl__im__12);
#line 1
//clear ___nl__bool__13;
#line 1
c_rt_lib0clear(&___nl__im__14);
#line 1
c_rt_lib0clear(&___nl__im__17);
#line 1
c_rt_lib0clear(&___nl__im__18);
#line 1
return ___nl__im__16;
#line 1
goto label_1;
#line 1
label_6:
#line 1
if ((*___ref___var__0).label != 4) nl_die();
___nl__im_ptr__19 = (*___ref___var__0).value.wartosc_imowa0case;
#line 1
c_rt_lib0copy(&___nl__im__22, (*___nl__im_ptr__19));
#line 1
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__im__22));
#line 1
c_rt_lib0clear(&___nl__im__22);
#line 1
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 1
//clear ___nl__bool__1;
#line 1
c_rt_lib0clear(&___nl__im__2);
#line 1
c_rt_lib0clear(&___nl__im__3);
#line 1
c_rt_lib0clear(&___nl__im__4);
#line 1
c_rt_lib0clear(&___nl__im__6);
#line 1
c_rt_lib0clear(&___nl__im__7);
#line 1
//clear ___nl__int__8;
#line 1
c_rt_lib0clear(&___nl__im__9);
#line 1
c_rt_lib0clear(&___nl__im__11);
#line 1
c_rt_lib0clear(&___nl__im__12);
#line 1
//clear ___nl__bool__13;
#line 1
c_rt_lib0clear(&___nl__im__14);
#line 1
c_rt_lib0clear(&___nl__im__16);
#line 1
c_rt_lib0clear(&___nl__im__17);
#line 1
c_rt_lib0clear(&___nl__im__18);
#line 1
c_rt_lib0clear(&___nl__im__21);
#line 1
c_rt_lib0clear(&___nl__im__22);
#line 1
return ___nl__im__20;
#line 1
goto label_1;
#line 1
label_1:
#line 1
//clear ___nl__bool__1;
#line 1
c_rt_lib0clear(&___nl__im__2);
#line 1
c_rt_lib0clear(&___nl__im__3);
#line 1
c_rt_lib0clear(&___nl__im__4);
#line 1
c_rt_lib0clear(&___nl__im__6);
#line 1
c_rt_lib0clear(&___nl__im__7);
#line 1
//clear ___nl__int__8;
#line 1
c_rt_lib0clear(&___nl__im__9);
#line 1
c_rt_lib0clear(&___nl__im__11);
#line 1
c_rt_lib0clear(&___nl__im__12);
#line 1
//clear ___nl__bool__13;
#line 1
c_rt_lib0clear(&___nl__im__14);
#line 1
c_rt_lib0clear(&___nl__im__16);
#line 1
c_rt_lib0clear(&___nl__im__17);
#line 1
c_rt_lib0clear(&___nl__im__18);
#line 1
c_rt_lib0clear(&___nl__im__20);
#line 1
c_rt_lib0clear(&___nl__im__21);
#line 1
c_rt_lib0clear(&___nl__im__22);
#line 1
return NULL;
}

ImmT  test_own_var0conv_to_im00zlozony_wariant(test_own_var0zlozony_wariant0type* ___ref___var__0) {
test_own_var_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT * ___nl__im_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
anon_type00ownarranon_type00int* ___nl__arr_ptr__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT * ___nl__im_ptr__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
anon_type00RBanon_type00int0pole_ownowe0RE* ___nl__rec_ptr__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT * ___nl__im_ptr__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE* ___nl__var_ptr__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
#line 2
___nl__bool__1 = ((*___ref___var__0).label == 0);
#line 2
if(___nl__bool__1){ goto label_2;}
#line 2
___nl__bool__1 = ((*___ref___var__0).label == 1);
#line 2
if(___nl__bool__1){ goto label_3;}
#line 2
___nl__bool__1 = ((*___ref___var__0).label == 2);
#line 2
if(___nl__bool__1){ goto label_4;}
#line 2
___nl__bool__1 = ((*___ref___var__0).label == 3);
#line 2
if(___nl__bool__1){ goto label_5;}
#line 2
___nl__bool__1 = ((*___ref___var__0).label == 4);
#line 2
if(___nl__bool__1){ goto label_6;}
#line 2
___nl__bool__1 = ((*___ref___var__0).label == 5);
#line 2
if(___nl__bool__1){ goto label_7;}
#line 2
c_rt_lib0move(&___nl__im__2,___get_global_const(71));
#line 2
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, (*___ref___var__0)));
#line 2
nl_die_arg(___nl__im__2);
#line 2
label_2:
#line 2
if ((*___ref___var__0).label != 0) nl_die();
___nl__im_ptr__3 = (*___ref___var__0).value.tablica_imowa0case;
#line 2
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__3));
#line 2
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(207), ___nl__im__6));
#line 2
c_rt_lib0clear(&___nl__im__6);
#line 2
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 2
//clear ___nl__bool__1;
#line 2
c_rt_lib0clear(&___nl__im__2);
#line 2
c_rt_lib0clear(&___nl__im__5);
#line 2
c_rt_lib0clear(&___nl__im__6);
#line 2
return ___nl__im__4;
#line 2
goto label_1;
#line 2
label_3:
#line 2
if ((*___ref___var__0).label != 1) nl_die();
___nl__arr_ptr__7 = (*___ref___var__0).value.tablica_ownowa0case;
#line 2
c_rt_lib0move(&___nl__im__10, test_own_var_priv0conv_to_im00ownarranon_type0000int(___nl__arr_ptr__7));
#line 2
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(208), ___nl__im__10));
#line 2
c_rt_lib0clear(&___nl__im__10);
#line 2
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 2
//clear ___nl__bool__1;
#line 2
c_rt_lib0clear(&___nl__im__2);
#line 2
c_rt_lib0clear(&___nl__im__4);
#line 2
c_rt_lib0clear(&___nl__im__5);
#line 2
c_rt_lib0clear(&___nl__im__6);
#line 2
c_rt_lib0clear(&___nl__im__9);
#line 2
c_rt_lib0clear(&___nl__im__10);
#line 2
return ___nl__im__8;
#line 2
goto label_1;
#line 2
label_4:
#line 2
if ((*___ref___var__0).label != 2) nl_die();
___nl__im_ptr__11 = (*___ref___var__0).value.rekord_imowy0case;
#line 2
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__11));
#line 2
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(209), ___nl__im__14));
#line 2
c_rt_lib0clear(&___nl__im__14);
#line 2
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 2
//clear ___nl__bool__1;
#line 2
c_rt_lib0clear(&___nl__im__2);
#line 2
c_rt_lib0clear(&___nl__im__4);
#line 2
c_rt_lib0clear(&___nl__im__5);
#line 2
c_rt_lib0clear(&___nl__im__6);
#line 2
c_rt_lib0clear(&___nl__im__8);
#line 2
c_rt_lib0clear(&___nl__im__9);
#line 2
c_rt_lib0clear(&___nl__im__10);
#line 2
c_rt_lib0clear(&___nl__im__13);
#line 2
c_rt_lib0clear(&___nl__im__14);
#line 2
return ___nl__im__12;
#line 2
goto label_1;
#line 2
label_5:
#line 2
if ((*___ref___var__0).label != 3) nl_die();
___nl__rec_ptr__15 = (*___ref___var__0).value.rekord_ownowy0case;
#line 2
c_rt_lib0move(&___nl__im__18, test_own_var_priv0conv_to_im00RBanon_type0000int00pole_ownowe00RE(___nl__rec_ptr__15));
#line 2
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(210), ___nl__im__18));
#line 2
c_rt_lib0clear(&___nl__im__18);
#line 2
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 2
//clear ___nl__bool__1;
#line 2
c_rt_lib0clear(&___nl__im__2);
#line 2
c_rt_lib0clear(&___nl__im__4);
#line 2
c_rt_lib0clear(&___nl__im__5);
#line 2
c_rt_lib0clear(&___nl__im__6);
#line 2
c_rt_lib0clear(&___nl__im__8);
#line 2
c_rt_lib0clear(&___nl__im__9);
#line 2
c_rt_lib0clear(&___nl__im__10);
#line 2
c_rt_lib0clear(&___nl__im__12);
#line 2
c_rt_lib0clear(&___nl__im__13);
#line 2
c_rt_lib0clear(&___nl__im__14);
#line 2
c_rt_lib0clear(&___nl__im__17);
#line 2
c_rt_lib0clear(&___nl__im__18);
#line 2
return ___nl__im__16;
#line 2
goto label_1;
#line 2
label_6:
#line 2
if ((*___ref___var__0).label != 4) nl_die();
___nl__im_ptr__19 = (*___ref___var__0).value.wariant_imowy0case;
#line 2
c_rt_lib0copy(&___nl__im__22, (*___nl__im_ptr__19));
#line 2
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(211), ___nl__im__22));
#line 2
c_rt_lib0clear(&___nl__im__22);
#line 2
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 2
//clear ___nl__bool__1;
#line 2
c_rt_lib0clear(&___nl__im__2);
#line 2
c_rt_lib0clear(&___nl__im__4);
#line 2
c_rt_lib0clear(&___nl__im__5);
#line 2
c_rt_lib0clear(&___nl__im__6);
#line 2
c_rt_lib0clear(&___nl__im__8);
#line 2
c_rt_lib0clear(&___nl__im__9);
#line 2
c_rt_lib0clear(&___nl__im__10);
#line 2
c_rt_lib0clear(&___nl__im__12);
#line 2
c_rt_lib0clear(&___nl__im__13);
#line 2
c_rt_lib0clear(&___nl__im__14);
#line 2
c_rt_lib0clear(&___nl__im__16);
#line 2
c_rt_lib0clear(&___nl__im__17);
#line 2
c_rt_lib0clear(&___nl__im__18);
#line 2
c_rt_lib0clear(&___nl__im__21);
#line 2
c_rt_lib0clear(&___nl__im__22);
#line 2
return ___nl__im__20;
#line 2
goto label_1;
#line 2
label_7:
#line 2
if ((*___ref___var__0).label != 5) nl_die();
___nl__var_ptr__23 = (*___ref___var__0).value.wariant_ownowy0case;
#line 2
c_rt_lib0move(&___nl__im__26, test_own_var_priv0conv_to_im00VBanon_type0000int00wariant_ownowy_wewnetrzny00VE(___nl__var_ptr__23));
#line 2
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(212), ___nl__im__26));
#line 2
c_rt_lib0clear(&___nl__im__26);
#line 2
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 2
//clear ___nl__bool__1;
#line 2
c_rt_lib0clear(&___nl__im__2);
#line 2
c_rt_lib0clear(&___nl__im__4);
#line 2
c_rt_lib0clear(&___nl__im__5);
#line 2
c_rt_lib0clear(&___nl__im__6);
#line 2
c_rt_lib0clear(&___nl__im__8);
#line 2
c_rt_lib0clear(&___nl__im__9);
#line 2
c_rt_lib0clear(&___nl__im__10);
#line 2
c_rt_lib0clear(&___nl__im__12);
#line 2
c_rt_lib0clear(&___nl__im__13);
#line 2
c_rt_lib0clear(&___nl__im__14);
#line 2
c_rt_lib0clear(&___nl__im__16);
#line 2
c_rt_lib0clear(&___nl__im__17);
#line 2
c_rt_lib0clear(&___nl__im__18);
#line 2
c_rt_lib0clear(&___nl__im__20);
#line 2
c_rt_lib0clear(&___nl__im__21);
#line 2
c_rt_lib0clear(&___nl__im__22);
#line 2
c_rt_lib0clear(&___nl__im__25);
#line 2
c_rt_lib0clear(&___nl__im__26);
#line 2
return ___nl__im__24;
#line 2
goto label_1;
#line 2
label_1:
#line 2
//clear ___nl__bool__1;
#line 2
c_rt_lib0clear(&___nl__im__2);
#line 2
c_rt_lib0clear(&___nl__im__4);
#line 2
c_rt_lib0clear(&___nl__im__5);
#line 2
c_rt_lib0clear(&___nl__im__6);
#line 2
c_rt_lib0clear(&___nl__im__8);
#line 2
c_rt_lib0clear(&___nl__im__9);
#line 2
c_rt_lib0clear(&___nl__im__10);
#line 2
c_rt_lib0clear(&___nl__im__12);
#line 2
c_rt_lib0clear(&___nl__im__13);
#line 2
c_rt_lib0clear(&___nl__im__14);
#line 2
c_rt_lib0clear(&___nl__im__16);
#line 2
c_rt_lib0clear(&___nl__im__17);
#line 2
c_rt_lib0clear(&___nl__im__18);
#line 2
c_rt_lib0clear(&___nl__im__20);
#line 2
c_rt_lib0clear(&___nl__im__21);
#line 2
c_rt_lib0clear(&___nl__im__22);
#line 2
c_rt_lib0clear(&___nl__im__24);
#line 2
c_rt_lib0clear(&___nl__im__25);
#line 2
c_rt_lib0clear(&___nl__im__26);
#line 2
return NULL;
}

ImmT  test_own_var_priv0conv_to_im00ownarranon_type0000int(anon_type00ownarranon_type00int* ___ref___arr__0) {
test_own_var_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT * ___nl__int_ptr__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 3
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 3
___nl__int__3 = 0;
#line 3
___nl__int__4 = 1;
#line 3
___nl__int__5 = test_own_var0anon_type00ownarranon_type00int0len(___ref___arr__0);
#line 3
label_3:
#line 3
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 3
___nl__bool__6 = ___nl__int__7;
#line 3
if(___nl__bool__6){ goto label_1;}
#line 3
___nl__int_ptr__2 = test_own_var0anon_type00ownarranon_type00int0get_ptr(&(*___ref___arr__0), ___nl__int__3);
#line 3
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new((*___nl__int_ptr__2)));
#line 3
c_rt_lib0array_push(&___nl__im__1, ___nl__im__8);
#line 3
c_rt_lib0clear(&___nl__im__8);
#line 3
label_2:
#line 3
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 3
goto label_3;
#line 3
label_1:
#line 3
c_rt_lib0copy(&___nl__im__9, ___nl__im__1);
#line 3
c_rt_lib0clear(&___nl__im__1);
#line 3
//clear ___nl__int__3;
#line 3
//clear ___nl__int__4;
#line 3
//clear ___nl__int__5;
#line 3
//clear ___nl__bool__6;
#line 3
//clear ___nl__int__7;
#line 3
c_rt_lib0clear(&___nl__im__8);
#line 3
return ___nl__im__9;
#line 3
c_rt_lib0clear(&___nl__im__1);
#line 3
//clear ___nl__int__3;
#line 3
//clear ___nl__int__4;
#line 3
//clear ___nl__int__5;
#line 3
//clear ___nl__bool__6;
#line 3
//clear ___nl__int__7;
#line 3
c_rt_lib0clear(&___nl__im__8);
#line 3
c_rt_lib0clear(&___nl__im__9);
#line 3
return NULL;
}

ImmT  test_own_var_priv0conv_to_im00RBanon_type0000int00pole_ownowe00RE(anon_type00RBanon_type00int0pole_ownowe0RE* ___ref___rec__0) {
test_own_var_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT * ___nl__int_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 4
___nl__int_ptr__3 = &((*___ref___rec__0).pole_ownowe0field);
#line 4
___nl__int__2 = (*___nl__int_ptr__3);
#line 4
___nl__int_ptr__3 = NULL;
#line 4
c_rt_lib0move(&___nl__im__4, c_rt_lib0int_new(___nl__int__2));
#line 4
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(1, ___get_global_const(204), ___nl__im__4));
#line 4
//clear ___nl__int__2;
#line 4
c_rt_lib0clear(&___nl__im__4);
#line 4
c_rt_lib0copy(&___nl__im__5, ___nl__im__1);
#line 4
c_rt_lib0clear(&___nl__im__1);
#line 4
//clear ___nl__int__2;
#line 4
c_rt_lib0clear(&___nl__im__4);
#line 4
return ___nl__im__5;
#line 4
c_rt_lib0clear(&___nl__im__1);
#line 4
//clear ___nl__int__2;
#line 4
c_rt_lib0clear(&___nl__im__4);
#line 4
c_rt_lib0clear(&___nl__im__5);
#line 4
return NULL;
}

ImmT  test_own_var_priv0conv_to_im00VBanon_type0000int00wariant_ownowy_wewnetrzny00VE(anon_type00VBanon_type00int0wariant_ownowy_wewnetrzny0VE* ___ref___var__0) {
test_own_var_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
INT * ___nl__int_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
#line 5
___nl__bool__1 = ((*___ref___var__0).label == 0);
#line 5
if(___nl__bool__1){ goto label_2;}
#line 5
c_rt_lib0move(&___nl__im__2,___get_global_const(71));
#line 5
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, (*___ref___var__0)));
#line 5
nl_die_arg(___nl__im__2);
#line 5
label_2:
#line 5
if ((*___ref___var__0).label != 0) nl_die();
___nl__int_ptr__3 = (*___ref___var__0).value.wariant_ownowy_wewnetrzny0case;
#line 5
___nl__int__6 = (*___nl__int_ptr__3);
#line 5
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__6));
#line 5
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(206), ___nl__im__7));
#line 5
//clear ___nl__int__6;
#line 5
c_rt_lib0clear(&___nl__im__7);
#line 5
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 5
//clear ___nl__bool__1;
#line 5
c_rt_lib0clear(&___nl__im__2);
#line 5
c_rt_lib0clear(&___nl__im__5);
#line 5
//clear ___nl__int__6;
#line 5
c_rt_lib0clear(&___nl__im__7);
#line 5
return ___nl__im__4;
#line 5
goto label_1;
#line 5
label_1:
#line 5
//clear ___nl__bool__1;
#line 5
c_rt_lib0clear(&___nl__im__2);
#line 5
c_rt_lib0clear(&___nl__im__4);
#line 5
c_rt_lib0clear(&___nl__im__5);
#line 5
//clear ___nl__int__6;
#line 5
c_rt_lib0clear(&___nl__im__7);
#line 5
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void test_own_var_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT test_own_var_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT test_own_var_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
