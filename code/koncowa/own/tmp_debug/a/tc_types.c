
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "tc_types.h"
#include "hash.h"
#include "ptd.h"
#include "tct.h"
#include "boolean_t.h"
#include "nast.h"
#include "singleton.h"
#include "compiler_lib.h"
#include "compiler_lib.h"
#include "tct.h"
#include "tc_types.h"
#include "boolean_t.h"
#include "nast.h"
#line 1 "tc_types.nl"

static ImmT *__const__f = NULL;
void tc_types_priv0__const__init();
ImmT tc_types_priv0__const__sim(int __nr);
ImmT tc_types_priv0__const__sing(int __nr);

ImmT  tc_types_priv0op_def(ImmT * ___ref___im__0,ImmT  ___nl__im__1,tct0meta_type0type ___nl__im__2,tct0meta_type0type ___nl__im__3,tct0meta_type0type ___nl__im__4);
ImmT  tc_types_priv0get_binary_ops();


ImmT  tc_types_priv0op_def(ImmT * ___ref___im__0,ImmT  ___nl__im__1,tct0meta_type0type ___nl__im__2,tct0meta_type0type ___nl__im__3,tct0meta_type0type ___nl__im__4) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
c_rt_lib0arg_val(___nl__im__4);
tc_types_priv0__const__init();
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 16
c_rt_lib0copy(&___nl__im__5, ___nl__im__1);
#line 16
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_const(1354), ___nl__im__2, ___get_global_const(1355), ___nl__im__3, ___get_global_const(394), ___nl__im__4));
#line 16
c_rt_lib0copy(&___nl__im__7, ___nl__im__6);
#line 16
c_rt_lib0delete(hash0set_value(___ref___im__0, ___nl__im__5, ___nl__im__7));
#line 16
c_rt_lib0clear(&___nl__im__5);
#line 16
c_rt_lib0clear(&___nl__im__6);
#line 16
c_rt_lib0clear(&___nl__im__7);
#line 16
c_rt_lib0clear(&___nl__im__1);
#line 16
c_rt_lib0clear(&___nl__im__2);
#line 16
c_rt_lib0clear(&___nl__im__3);
#line 16
c_rt_lib0clear(&___nl__im__4);
#line 16
c_rt_lib0clear(&___nl__im__5);
#line 16
c_rt_lib0clear(&___nl__im__6);
#line 16
c_rt_lib0clear(&___nl__im__7);
#line 16
return NULL;
}

tc_types0bin_op_type0type tc_types0get_bin_op_def0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tc_types0get_bin_op_def");
ImmT  var0 = (_tab[0]);
return tc_types0get_bin_op_def(var0);
}
tc_types0bin_op_type0type tc_types0get_bin_op_def(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tc_types_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 20
c_rt_lib0move(&___nl__im__3, tc_types_priv0get_binary_ops());
#line 20
c_rt_lib0copy(&___nl__im__4, ___nl__im__3);
#line 20
c_rt_lib0copy(&___nl__im__5, ___nl__im__0);
#line 20
c_rt_lib0move(&___nl__im__2, hash0get_value(___nl__im__4, ___nl__im__5));
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0clear(&___nl__im__5);
#line 20
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0clear(&___nl__im__5);
#line 20
return ___nl__im__1;
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0clear(&___nl__im__5);
#line 20
return NULL;
}

ImmT  tc_types_priv0get_binary_ops() {
tc_types_priv0__const__init();
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
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
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
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
#line 24
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 25
c_rt_lib0move(&___nl__im__1,___get_global_const(354));
#line 25
c_rt_lib0copy(&___nl__im__2, ___nl__im__1);
#line 25
c_rt_lib0move(&___nl__im__3, tct0int());
#line 25
c_rt_lib0copy(&___nl__im__4, ___nl__im__3);
#line 25
c_rt_lib0move(&___nl__im__5, tct0int());
#line 25
c_rt_lib0copy(&___nl__im__6, ___nl__im__5);
#line 25
c_rt_lib0move(&___nl__im__7, tct0int());
#line 25
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 25
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__2, ___nl__im__4, ___nl__im__6, ___nl__im__8));
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
#line 26
c_rt_lib0move(&___nl__im__9,___get_global_const(110));
#line 26
c_rt_lib0copy(&___nl__im__10, ___nl__im__9);
#line 26
c_rt_lib0move(&___nl__im__11, tct0int());
#line 26
c_rt_lib0copy(&___nl__im__12, ___nl__im__11);
#line 26
c_rt_lib0move(&___nl__im__13, tct0int());
#line 26
c_rt_lib0copy(&___nl__im__14, ___nl__im__13);
#line 26
c_rt_lib0move(&___nl__im__15, tct0int());
#line 26
c_rt_lib0copy(&___nl__im__16, ___nl__im__15);
#line 26
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__10, ___nl__im__12, ___nl__im__14, ___nl__im__16));
#line 26
c_rt_lib0clear(&___nl__im__9);
#line 26
c_rt_lib0clear(&___nl__im__10);
#line 26
c_rt_lib0clear(&___nl__im__11);
#line 26
c_rt_lib0clear(&___nl__im__12);
#line 26
c_rt_lib0clear(&___nl__im__13);
#line 26
c_rt_lib0clear(&___nl__im__14);
#line 26
c_rt_lib0clear(&___nl__im__15);
#line 26
c_rt_lib0clear(&___nl__im__16);
#line 27
c_rt_lib0move(&___nl__im__17,___get_global_const(357));
#line 27
c_rt_lib0copy(&___nl__im__18, ___nl__im__17);
#line 27
c_rt_lib0move(&___nl__im__19, tct0int());
#line 27
c_rt_lib0copy(&___nl__im__20, ___nl__im__19);
#line 27
c_rt_lib0move(&___nl__im__21, tct0int());
#line 27
c_rt_lib0copy(&___nl__im__22, ___nl__im__21);
#line 27
c_rt_lib0move(&___nl__im__23, tct0int());
#line 27
c_rt_lib0copy(&___nl__im__24, ___nl__im__23);
#line 27
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__18, ___nl__im__20, ___nl__im__22, ___nl__im__24));
#line 27
c_rt_lib0clear(&___nl__im__17);
#line 27
c_rt_lib0clear(&___nl__im__18);
#line 27
c_rt_lib0clear(&___nl__im__19);
#line 27
c_rt_lib0clear(&___nl__im__20);
#line 27
c_rt_lib0clear(&___nl__im__21);
#line 27
c_rt_lib0clear(&___nl__im__22);
#line 27
c_rt_lib0clear(&___nl__im__23);
#line 27
c_rt_lib0clear(&___nl__im__24);
#line 28
c_rt_lib0move(&___nl__im__25,___get_global_const(348));
#line 28
c_rt_lib0copy(&___nl__im__26, ___nl__im__25);
#line 28
c_rt_lib0move(&___nl__im__27, tct0int());
#line 28
c_rt_lib0copy(&___nl__im__28, ___nl__im__27);
#line 28
c_rt_lib0move(&___nl__im__29, tct0int());
#line 28
c_rt_lib0copy(&___nl__im__30, ___nl__im__29);
#line 28
c_rt_lib0move(&___nl__im__31, tct0int());
#line 28
c_rt_lib0copy(&___nl__im__32, ___nl__im__31);
#line 28
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__26, ___nl__im__28, ___nl__im__30, ___nl__im__32));
#line 28
c_rt_lib0clear(&___nl__im__25);
#line 28
c_rt_lib0clear(&___nl__im__26);
#line 28
c_rt_lib0clear(&___nl__im__27);
#line 28
c_rt_lib0clear(&___nl__im__28);
#line 28
c_rt_lib0clear(&___nl__im__29);
#line 28
c_rt_lib0clear(&___nl__im__30);
#line 28
c_rt_lib0clear(&___nl__im__31);
#line 28
c_rt_lib0clear(&___nl__im__32);
#line 29
c_rt_lib0move(&___nl__im__33,___get_global_const(346));
#line 29
c_rt_lib0copy(&___nl__im__34, ___nl__im__33);
#line 29
c_rt_lib0move(&___nl__im__35, tct0int());
#line 29
c_rt_lib0copy(&___nl__im__36, ___nl__im__35);
#line 29
c_rt_lib0move(&___nl__im__37, tct0int());
#line 29
c_rt_lib0copy(&___nl__im__38, ___nl__im__37);
#line 29
c_rt_lib0move(&___nl__im__39, tct0int());
#line 29
c_rt_lib0copy(&___nl__im__40, ___nl__im__39);
#line 29
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__34, ___nl__im__36, ___nl__im__38, ___nl__im__40));
#line 29
c_rt_lib0clear(&___nl__im__33);
#line 29
c_rt_lib0clear(&___nl__im__34);
#line 29
c_rt_lib0clear(&___nl__im__35);
#line 29
c_rt_lib0clear(&___nl__im__36);
#line 29
c_rt_lib0clear(&___nl__im__37);
#line 29
c_rt_lib0clear(&___nl__im__38);
#line 29
c_rt_lib0clear(&___nl__im__39);
#line 29
c_rt_lib0clear(&___nl__im__40);
#line 30
c_rt_lib0move(&___nl__im__41,___get_global_const(125));
#line 30
c_rt_lib0copy(&___nl__im__42, ___nl__im__41);
#line 30
c_rt_lib0move(&___nl__im__43, tct0string());
#line 30
c_rt_lib0copy(&___nl__im__44, ___nl__im__43);
#line 30
c_rt_lib0move(&___nl__im__45, tct0string());
#line 30
c_rt_lib0copy(&___nl__im__46, ___nl__im__45);
#line 30
c_rt_lib0move(&___nl__im__47, tct0string());
#line 30
c_rt_lib0copy(&___nl__im__48, ___nl__im__47);
#line 30
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__42, ___nl__im__44, ___nl__im__46, ___nl__im__48));
#line 30
c_rt_lib0clear(&___nl__im__41);
#line 30
c_rt_lib0clear(&___nl__im__42);
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
c_rt_lib0clear(&___nl__im__48);
#line 31
c_rt_lib0move(&___nl__im__49,___get_global_const(368));
#line 31
c_rt_lib0copy(&___nl__im__50, ___nl__im__49);
#line 31
c_rt_lib0move(&___nl__im__51, tct0int());
#line 31
c_rt_lib0copy(&___nl__im__52, ___nl__im__51);
#line 31
c_rt_lib0move(&___nl__im__53, tct0int());
#line 31
c_rt_lib0copy(&___nl__im__54, ___nl__im__53);
#line 31
c_rt_lib0move(&___nl__im__55, tct0bool());
#line 31
c_rt_lib0copy(&___nl__im__56, ___nl__im__55);
#line 31
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__50, ___nl__im__52, ___nl__im__54, ___nl__im__56));
#line 31
c_rt_lib0clear(&___nl__im__49);
#line 31
c_rt_lib0clear(&___nl__im__50);
#line 31
c_rt_lib0clear(&___nl__im__51);
#line 31
c_rt_lib0clear(&___nl__im__52);
#line 31
c_rt_lib0clear(&___nl__im__53);
#line 31
c_rt_lib0clear(&___nl__im__54);
#line 31
c_rt_lib0clear(&___nl__im__55);
#line 31
c_rt_lib0clear(&___nl__im__56);
#line 32
c_rt_lib0move(&___nl__im__57,___get_global_const(358));
#line 32
c_rt_lib0copy(&___nl__im__58, ___nl__im__57);
#line 32
c_rt_lib0move(&___nl__im__59, tct0int());
#line 32
c_rt_lib0copy(&___nl__im__60, ___nl__im__59);
#line 32
c_rt_lib0move(&___nl__im__61, tct0int());
#line 32
c_rt_lib0copy(&___nl__im__62, ___nl__im__61);
#line 32
c_rt_lib0move(&___nl__im__63, tct0bool());
#line 32
c_rt_lib0copy(&___nl__im__64, ___nl__im__63);
#line 32
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__58, ___nl__im__60, ___nl__im__62, ___nl__im__64));
#line 32
c_rt_lib0clear(&___nl__im__57);
#line 32
c_rt_lib0clear(&___nl__im__58);
#line 32
c_rt_lib0clear(&___nl__im__59);
#line 32
c_rt_lib0clear(&___nl__im__60);
#line 32
c_rt_lib0clear(&___nl__im__61);
#line 32
c_rt_lib0clear(&___nl__im__62);
#line 32
c_rt_lib0clear(&___nl__im__63);
#line 32
c_rt_lib0clear(&___nl__im__64);
#line 33
c_rt_lib0move(&___nl__im__65,___get_global_const(360));
#line 33
c_rt_lib0copy(&___nl__im__66, ___nl__im__65);
#line 33
c_rt_lib0move(&___nl__im__67, tct0int());
#line 33
c_rt_lib0copy(&___nl__im__68, ___nl__im__67);
#line 33
c_rt_lib0move(&___nl__im__69, tct0int());
#line 33
c_rt_lib0copy(&___nl__im__70, ___nl__im__69);
#line 33
c_rt_lib0move(&___nl__im__71, tct0bool());
#line 33
c_rt_lib0copy(&___nl__im__72, ___nl__im__71);
#line 33
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__66, ___nl__im__68, ___nl__im__70, ___nl__im__72));
#line 33
c_rt_lib0clear(&___nl__im__65);
#line 33
c_rt_lib0clear(&___nl__im__66);
#line 33
c_rt_lib0clear(&___nl__im__67);
#line 33
c_rt_lib0clear(&___nl__im__68);
#line 33
c_rt_lib0clear(&___nl__im__69);
#line 33
c_rt_lib0clear(&___nl__im__70);
#line 33
c_rt_lib0clear(&___nl__im__71);
#line 33
c_rt_lib0clear(&___nl__im__72);
#line 34
c_rt_lib0move(&___nl__im__73,___get_global_const(366));
#line 34
c_rt_lib0copy(&___nl__im__74, ___nl__im__73);
#line 34
c_rt_lib0move(&___nl__im__75, tct0int());
#line 34
c_rt_lib0copy(&___nl__im__76, ___nl__im__75);
#line 34
c_rt_lib0move(&___nl__im__77, tct0int());
#line 34
c_rt_lib0copy(&___nl__im__78, ___nl__im__77);
#line 34
c_rt_lib0move(&___nl__im__79, tct0bool());
#line 34
c_rt_lib0copy(&___nl__im__80, ___nl__im__79);
#line 34
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__74, ___nl__im__76, ___nl__im__78, ___nl__im__80));
#line 34
c_rt_lib0clear(&___nl__im__73);
#line 34
c_rt_lib0clear(&___nl__im__74);
#line 34
c_rt_lib0clear(&___nl__im__75);
#line 34
c_rt_lib0clear(&___nl__im__76);
#line 34
c_rt_lib0clear(&___nl__im__77);
#line 34
c_rt_lib0clear(&___nl__im__78);
#line 34
c_rt_lib0clear(&___nl__im__79);
#line 34
c_rt_lib0clear(&___nl__im__80);
#line 35
c_rt_lib0move(&___nl__im__81,___get_global_const(362));
#line 35
c_rt_lib0copy(&___nl__im__82, ___nl__im__81);
#line 35
c_rt_lib0move(&___nl__im__83, tct0int());
#line 35
c_rt_lib0copy(&___nl__im__84, ___nl__im__83);
#line 35
c_rt_lib0move(&___nl__im__85, tct0int());
#line 35
c_rt_lib0copy(&___nl__im__86, ___nl__im__85);
#line 35
c_rt_lib0move(&___nl__im__87, tct0bool());
#line 35
c_rt_lib0copy(&___nl__im__88, ___nl__im__87);
#line 35
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__82, ___nl__im__84, ___nl__im__86, ___nl__im__88));
#line 35
c_rt_lib0clear(&___nl__im__81);
#line 35
c_rt_lib0clear(&___nl__im__82);
#line 35
c_rt_lib0clear(&___nl__im__83);
#line 35
c_rt_lib0clear(&___nl__im__84);
#line 35
c_rt_lib0clear(&___nl__im__85);
#line 35
c_rt_lib0clear(&___nl__im__86);
#line 35
c_rt_lib0clear(&___nl__im__87);
#line 35
c_rt_lib0clear(&___nl__im__88);
#line 36
c_rt_lib0move(&___nl__im__89,___get_global_const(364));
#line 36
c_rt_lib0copy(&___nl__im__90, ___nl__im__89);
#line 36
c_rt_lib0move(&___nl__im__91, tct0int());
#line 36
c_rt_lib0copy(&___nl__im__92, ___nl__im__91);
#line 36
c_rt_lib0move(&___nl__im__93, tct0int());
#line 36
c_rt_lib0copy(&___nl__im__94, ___nl__im__93);
#line 36
c_rt_lib0move(&___nl__im__95, tct0bool());
#line 36
c_rt_lib0copy(&___nl__im__96, ___nl__im__95);
#line 36
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__90, ___nl__im__92, ___nl__im__94, ___nl__im__96));
#line 36
c_rt_lib0clear(&___nl__im__89);
#line 36
c_rt_lib0clear(&___nl__im__90);
#line 36
c_rt_lib0clear(&___nl__im__91);
#line 36
c_rt_lib0clear(&___nl__im__92);
#line 36
c_rt_lib0clear(&___nl__im__93);
#line 36
c_rt_lib0clear(&___nl__im__94);
#line 36
c_rt_lib0clear(&___nl__im__95);
#line 36
c_rt_lib0clear(&___nl__im__96);
#line 37
c_rt_lib0move(&___nl__im__97,___get_global_const(350));
#line 37
c_rt_lib0copy(&___nl__im__98, ___nl__im__97);
#line 37
c_rt_lib0move(&___nl__im__99, tct0string());
#line 37
c_rt_lib0copy(&___nl__im__100, ___nl__im__99);
#line 37
c_rt_lib0move(&___nl__im__101, tct0string());
#line 37
c_rt_lib0copy(&___nl__im__102, ___nl__im__101);
#line 37
c_rt_lib0move(&___nl__im__103, tct0bool());
#line 37
c_rt_lib0copy(&___nl__im__104, ___nl__im__103);
#line 37
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__98, ___nl__im__100, ___nl__im__102, ___nl__im__104));
#line 37
c_rt_lib0clear(&___nl__im__97);
#line 37
c_rt_lib0clear(&___nl__im__98);
#line 37
c_rt_lib0clear(&___nl__im__99);
#line 37
c_rt_lib0clear(&___nl__im__100);
#line 37
c_rt_lib0clear(&___nl__im__101);
#line 37
c_rt_lib0clear(&___nl__im__102);
#line 37
c_rt_lib0clear(&___nl__im__103);
#line 37
c_rt_lib0clear(&___nl__im__104);
#line 38
c_rt_lib0move(&___nl__im__105,___get_global_const(351));
#line 38
c_rt_lib0copy(&___nl__im__106, ___nl__im__105);
#line 38
c_rt_lib0move(&___nl__im__107, tct0string());
#line 38
c_rt_lib0copy(&___nl__im__108, ___nl__im__107);
#line 38
c_rt_lib0move(&___nl__im__109, tct0string());
#line 38
c_rt_lib0copy(&___nl__im__110, ___nl__im__109);
#line 38
c_rt_lib0move(&___nl__im__111, tct0bool());
#line 38
c_rt_lib0copy(&___nl__im__112, ___nl__im__111);
#line 38
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__106, ___nl__im__108, ___nl__im__110, ___nl__im__112));
#line 38
c_rt_lib0clear(&___nl__im__105);
#line 38
c_rt_lib0clear(&___nl__im__106);
#line 38
c_rt_lib0clear(&___nl__im__107);
#line 38
c_rt_lib0clear(&___nl__im__108);
#line 38
c_rt_lib0clear(&___nl__im__109);
#line 38
c_rt_lib0clear(&___nl__im__110);
#line 38
c_rt_lib0clear(&___nl__im__111);
#line 38
c_rt_lib0clear(&___nl__im__112);
#line 39
c_rt_lib0move(&___nl__im__113,___get_global_const(980));
#line 39
c_rt_lib0copy(&___nl__im__114, ___nl__im__113);
#line 39
c_rt_lib0move(&___nl__im__115, tct0bool());
#line 39
c_rt_lib0copy(&___nl__im__116, ___nl__im__115);
#line 39
c_rt_lib0move(&___nl__im__117, tct0bool());
#line 39
c_rt_lib0copy(&___nl__im__118, ___nl__im__117);
#line 39
c_rt_lib0move(&___nl__im__119, tct0bool());
#line 39
c_rt_lib0copy(&___nl__im__120, ___nl__im__119);
#line 39
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__114, ___nl__im__116, ___nl__im__118, ___nl__im__120));
#line 39
c_rt_lib0clear(&___nl__im__113);
#line 39
c_rt_lib0clear(&___nl__im__114);
#line 39
c_rt_lib0clear(&___nl__im__115);
#line 39
c_rt_lib0clear(&___nl__im__116);
#line 39
c_rt_lib0clear(&___nl__im__117);
#line 39
c_rt_lib0clear(&___nl__im__118);
#line 39
c_rt_lib0clear(&___nl__im__119);
#line 39
c_rt_lib0clear(&___nl__im__120);
#line 40
c_rt_lib0move(&___nl__im__121,___get_global_const(981));
#line 40
c_rt_lib0copy(&___nl__im__122, ___nl__im__121);
#line 40
c_rt_lib0move(&___nl__im__123, tct0bool());
#line 40
c_rt_lib0copy(&___nl__im__124, ___nl__im__123);
#line 40
c_rt_lib0move(&___nl__im__125, tct0bool());
#line 40
c_rt_lib0copy(&___nl__im__126, ___nl__im__125);
#line 40
c_rt_lib0move(&___nl__im__127, tct0bool());
#line 40
c_rt_lib0copy(&___nl__im__128, ___nl__im__127);
#line 40
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__122, ___nl__im__124, ___nl__im__126, ___nl__im__128));
#line 40
c_rt_lib0clear(&___nl__im__121);
#line 40
c_rt_lib0clear(&___nl__im__122);
#line 40
c_rt_lib0clear(&___nl__im__123);
#line 40
c_rt_lib0clear(&___nl__im__124);
#line 40
c_rt_lib0clear(&___nl__im__125);
#line 40
c_rt_lib0clear(&___nl__im__126);
#line 40
c_rt_lib0clear(&___nl__im__127);
#line 40
c_rt_lib0clear(&___nl__im__128);
#line 41
c_rt_lib0move(&___nl__im__129,___get_global_const(1058));
#line 41
c_rt_lib0copy(&___nl__im__130, ___nl__im__129);
#line 41
c_rt_lib0move(&___nl__im__131, tct0int());
#line 41
c_rt_lib0copy(&___nl__im__132, ___nl__im__131);
#line 41
c_rt_lib0move(&___nl__im__133, tct0int());
#line 41
c_rt_lib0copy(&___nl__im__134, ___nl__im__133);
#line 41
c_rt_lib0move(&___nl__im__135, tct0int());
#line 41
c_rt_lib0copy(&___nl__im__136, ___nl__im__135);
#line 41
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__130, ___nl__im__132, ___nl__im__134, ___nl__im__136));
#line 41
c_rt_lib0clear(&___nl__im__129);
#line 41
c_rt_lib0clear(&___nl__im__130);
#line 41
c_rt_lib0clear(&___nl__im__131);
#line 41
c_rt_lib0clear(&___nl__im__132);
#line 41
c_rt_lib0clear(&___nl__im__133);
#line 41
c_rt_lib0clear(&___nl__im__134);
#line 41
c_rt_lib0clear(&___nl__im__135);
#line 41
c_rt_lib0clear(&___nl__im__136);
#line 42
c_rt_lib0move(&___nl__im__137,___get_global_const(1061));
#line 42
c_rt_lib0copy(&___nl__im__138, ___nl__im__137);
#line 42
c_rt_lib0move(&___nl__im__139, tct0int());
#line 42
c_rt_lib0copy(&___nl__im__140, ___nl__im__139);
#line 42
c_rt_lib0move(&___nl__im__141, tct0int());
#line 42
c_rt_lib0copy(&___nl__im__142, ___nl__im__141);
#line 42
c_rt_lib0move(&___nl__im__143, tct0int());
#line 42
c_rt_lib0copy(&___nl__im__144, ___nl__im__143);
#line 42
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__138, ___nl__im__140, ___nl__im__142, ___nl__im__144));
#line 42
c_rt_lib0clear(&___nl__im__137);
#line 42
c_rt_lib0clear(&___nl__im__138);
#line 42
c_rt_lib0clear(&___nl__im__139);
#line 42
c_rt_lib0clear(&___nl__im__140);
#line 42
c_rt_lib0clear(&___nl__im__141);
#line 42
c_rt_lib0clear(&___nl__im__142);
#line 42
c_rt_lib0clear(&___nl__im__143);
#line 42
c_rt_lib0clear(&___nl__im__144);
#line 43
c_rt_lib0move(&___nl__im__145,___get_global_const(1060));
#line 43
c_rt_lib0copy(&___nl__im__146, ___nl__im__145);
#line 43
c_rt_lib0move(&___nl__im__147, tct0int());
#line 43
c_rt_lib0copy(&___nl__im__148, ___nl__im__147);
#line 43
c_rt_lib0move(&___nl__im__149, tct0int());
#line 43
c_rt_lib0copy(&___nl__im__150, ___nl__im__149);
#line 43
c_rt_lib0move(&___nl__im__151, tct0int());
#line 43
c_rt_lib0copy(&___nl__im__152, ___nl__im__151);
#line 43
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__146, ___nl__im__148, ___nl__im__150, ___nl__im__152));
#line 43
c_rt_lib0clear(&___nl__im__145);
#line 43
c_rt_lib0clear(&___nl__im__146);
#line 43
c_rt_lib0clear(&___nl__im__147);
#line 43
c_rt_lib0clear(&___nl__im__148);
#line 43
c_rt_lib0clear(&___nl__im__149);
#line 43
c_rt_lib0clear(&___nl__im__150);
#line 43
c_rt_lib0clear(&___nl__im__151);
#line 43
c_rt_lib0clear(&___nl__im__152);
#line 44
c_rt_lib0move(&___nl__im__153,___get_global_const(1062));
#line 44
c_rt_lib0copy(&___nl__im__154, ___nl__im__153);
#line 44
c_rt_lib0move(&___nl__im__155, tct0string());
#line 44
c_rt_lib0copy(&___nl__im__156, ___nl__im__155);
#line 44
c_rt_lib0move(&___nl__im__157, tct0string());
#line 44
c_rt_lib0copy(&___nl__im__158, ___nl__im__157);
#line 44
c_rt_lib0move(&___nl__im__159, tct0string());
#line 44
c_rt_lib0copy(&___nl__im__160, ___nl__im__159);
#line 44
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__154, ___nl__im__156, ___nl__im__158, ___nl__im__160));
#line 44
c_rt_lib0clear(&___nl__im__153);
#line 44
c_rt_lib0clear(&___nl__im__154);
#line 44
c_rt_lib0clear(&___nl__im__155);
#line 44
c_rt_lib0clear(&___nl__im__156);
#line 44
c_rt_lib0clear(&___nl__im__157);
#line 44
c_rt_lib0clear(&___nl__im__158);
#line 44
c_rt_lib0clear(&___nl__im__159);
#line 44
c_rt_lib0clear(&___nl__im__160);
#line 45
c_rt_lib0move(&___nl__im__161,___get_global_const(1059));
#line 45
c_rt_lib0copy(&___nl__im__162, ___nl__im__161);
#line 45
c_rt_lib0move(&___nl__im__163, tct0int());
#line 45
c_rt_lib0copy(&___nl__im__164, ___nl__im__163);
#line 45
c_rt_lib0move(&___nl__im__165, tct0int());
#line 45
c_rt_lib0copy(&___nl__im__166, ___nl__im__165);
#line 45
c_rt_lib0move(&___nl__im__167, tct0int());
#line 45
c_rt_lib0copy(&___nl__im__168, ___nl__im__167);
#line 45
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__162, ___nl__im__164, ___nl__im__166, ___nl__im__168));
#line 45
c_rt_lib0clear(&___nl__im__161);
#line 45
c_rt_lib0clear(&___nl__im__162);
#line 45
c_rt_lib0clear(&___nl__im__163);
#line 45
c_rt_lib0clear(&___nl__im__164);
#line 45
c_rt_lib0clear(&___nl__im__165);
#line 45
c_rt_lib0clear(&___nl__im__166);
#line 45
c_rt_lib0clear(&___nl__im__167);
#line 45
c_rt_lib0clear(&___nl__im__168);
#line 46
c_rt_lib0copy(&___nl__im__171, ___nl__im__0);
#line 46
c_rt_lib0move(&___nl__im__170, singleton0sigleton_do_not_use_without_approval(___nl__im__171));
#line 46
c_rt_lib0clear(&___nl__im__171);
#line 46
c_rt_lib0copy(&___nl__im__169, ___nl__im__170);
#line 46
c_rt_lib0clear(&___nl__im__0);
#line 46
c_rt_lib0clear(&___nl__im__1);
#line 46
c_rt_lib0clear(&___nl__im__2);
#line 46
c_rt_lib0clear(&___nl__im__3);
#line 46
c_rt_lib0clear(&___nl__im__4);
#line 46
c_rt_lib0clear(&___nl__im__5);
#line 46
c_rt_lib0clear(&___nl__im__6);
#line 46
c_rt_lib0clear(&___nl__im__7);
#line 46
c_rt_lib0clear(&___nl__im__8);
#line 46
c_rt_lib0clear(&___nl__im__9);
#line 46
c_rt_lib0clear(&___nl__im__10);
#line 46
c_rt_lib0clear(&___nl__im__11);
#line 46
c_rt_lib0clear(&___nl__im__12);
#line 46
c_rt_lib0clear(&___nl__im__13);
#line 46
c_rt_lib0clear(&___nl__im__14);
#line 46
c_rt_lib0clear(&___nl__im__15);
#line 46
c_rt_lib0clear(&___nl__im__16);
#line 46
c_rt_lib0clear(&___nl__im__17);
#line 46
c_rt_lib0clear(&___nl__im__18);
#line 46
c_rt_lib0clear(&___nl__im__19);
#line 46
c_rt_lib0clear(&___nl__im__20);
#line 46
c_rt_lib0clear(&___nl__im__21);
#line 46
c_rt_lib0clear(&___nl__im__22);
#line 46
c_rt_lib0clear(&___nl__im__23);
#line 46
c_rt_lib0clear(&___nl__im__24);
#line 46
c_rt_lib0clear(&___nl__im__25);
#line 46
c_rt_lib0clear(&___nl__im__26);
#line 46
c_rt_lib0clear(&___nl__im__27);
#line 46
c_rt_lib0clear(&___nl__im__28);
#line 46
c_rt_lib0clear(&___nl__im__29);
#line 46
c_rt_lib0clear(&___nl__im__30);
#line 46
c_rt_lib0clear(&___nl__im__31);
#line 46
c_rt_lib0clear(&___nl__im__32);
#line 46
c_rt_lib0clear(&___nl__im__33);
#line 46
c_rt_lib0clear(&___nl__im__34);
#line 46
c_rt_lib0clear(&___nl__im__35);
#line 46
c_rt_lib0clear(&___nl__im__36);
#line 46
c_rt_lib0clear(&___nl__im__37);
#line 46
c_rt_lib0clear(&___nl__im__38);
#line 46
c_rt_lib0clear(&___nl__im__39);
#line 46
c_rt_lib0clear(&___nl__im__40);
#line 46
c_rt_lib0clear(&___nl__im__41);
#line 46
c_rt_lib0clear(&___nl__im__42);
#line 46
c_rt_lib0clear(&___nl__im__43);
#line 46
c_rt_lib0clear(&___nl__im__44);
#line 46
c_rt_lib0clear(&___nl__im__45);
#line 46
c_rt_lib0clear(&___nl__im__46);
#line 46
c_rt_lib0clear(&___nl__im__47);
#line 46
c_rt_lib0clear(&___nl__im__48);
#line 46
c_rt_lib0clear(&___nl__im__49);
#line 46
c_rt_lib0clear(&___nl__im__50);
#line 46
c_rt_lib0clear(&___nl__im__51);
#line 46
c_rt_lib0clear(&___nl__im__52);
#line 46
c_rt_lib0clear(&___nl__im__53);
#line 46
c_rt_lib0clear(&___nl__im__54);
#line 46
c_rt_lib0clear(&___nl__im__55);
#line 46
c_rt_lib0clear(&___nl__im__56);
#line 46
c_rt_lib0clear(&___nl__im__57);
#line 46
c_rt_lib0clear(&___nl__im__58);
#line 46
c_rt_lib0clear(&___nl__im__59);
#line 46
c_rt_lib0clear(&___nl__im__60);
#line 46
c_rt_lib0clear(&___nl__im__61);
#line 46
c_rt_lib0clear(&___nl__im__62);
#line 46
c_rt_lib0clear(&___nl__im__63);
#line 46
c_rt_lib0clear(&___nl__im__64);
#line 46
c_rt_lib0clear(&___nl__im__65);
#line 46
c_rt_lib0clear(&___nl__im__66);
#line 46
c_rt_lib0clear(&___nl__im__67);
#line 46
c_rt_lib0clear(&___nl__im__68);
#line 46
c_rt_lib0clear(&___nl__im__69);
#line 46
c_rt_lib0clear(&___nl__im__70);
#line 46
c_rt_lib0clear(&___nl__im__71);
#line 46
c_rt_lib0clear(&___nl__im__72);
#line 46
c_rt_lib0clear(&___nl__im__73);
#line 46
c_rt_lib0clear(&___nl__im__74);
#line 46
c_rt_lib0clear(&___nl__im__75);
#line 46
c_rt_lib0clear(&___nl__im__76);
#line 46
c_rt_lib0clear(&___nl__im__77);
#line 46
c_rt_lib0clear(&___nl__im__78);
#line 46
c_rt_lib0clear(&___nl__im__79);
#line 46
c_rt_lib0clear(&___nl__im__80);
#line 46
c_rt_lib0clear(&___nl__im__81);
#line 46
c_rt_lib0clear(&___nl__im__82);
#line 46
c_rt_lib0clear(&___nl__im__83);
#line 46
c_rt_lib0clear(&___nl__im__84);
#line 46
c_rt_lib0clear(&___nl__im__85);
#line 46
c_rt_lib0clear(&___nl__im__86);
#line 46
c_rt_lib0clear(&___nl__im__87);
#line 46
c_rt_lib0clear(&___nl__im__88);
#line 46
c_rt_lib0clear(&___nl__im__89);
#line 46
c_rt_lib0clear(&___nl__im__90);
#line 46
c_rt_lib0clear(&___nl__im__91);
#line 46
c_rt_lib0clear(&___nl__im__92);
#line 46
c_rt_lib0clear(&___nl__im__93);
#line 46
c_rt_lib0clear(&___nl__im__94);
#line 46
c_rt_lib0clear(&___nl__im__95);
#line 46
c_rt_lib0clear(&___nl__im__96);
#line 46
c_rt_lib0clear(&___nl__im__97);
#line 46
c_rt_lib0clear(&___nl__im__98);
#line 46
c_rt_lib0clear(&___nl__im__99);
#line 46
c_rt_lib0clear(&___nl__im__100);
#line 46
c_rt_lib0clear(&___nl__im__101);
#line 46
c_rt_lib0clear(&___nl__im__102);
#line 46
c_rt_lib0clear(&___nl__im__103);
#line 46
c_rt_lib0clear(&___nl__im__104);
#line 46
c_rt_lib0clear(&___nl__im__105);
#line 46
c_rt_lib0clear(&___nl__im__106);
#line 46
c_rt_lib0clear(&___nl__im__107);
#line 46
c_rt_lib0clear(&___nl__im__108);
#line 46
c_rt_lib0clear(&___nl__im__109);
#line 46
c_rt_lib0clear(&___nl__im__110);
#line 46
c_rt_lib0clear(&___nl__im__111);
#line 46
c_rt_lib0clear(&___nl__im__112);
#line 46
c_rt_lib0clear(&___nl__im__113);
#line 46
c_rt_lib0clear(&___nl__im__114);
#line 46
c_rt_lib0clear(&___nl__im__115);
#line 46
c_rt_lib0clear(&___nl__im__116);
#line 46
c_rt_lib0clear(&___nl__im__117);
#line 46
c_rt_lib0clear(&___nl__im__118);
#line 46
c_rt_lib0clear(&___nl__im__119);
#line 46
c_rt_lib0clear(&___nl__im__120);
#line 46
c_rt_lib0clear(&___nl__im__121);
#line 46
c_rt_lib0clear(&___nl__im__122);
#line 46
c_rt_lib0clear(&___nl__im__123);
#line 46
c_rt_lib0clear(&___nl__im__124);
#line 46
c_rt_lib0clear(&___nl__im__125);
#line 46
c_rt_lib0clear(&___nl__im__126);
#line 46
c_rt_lib0clear(&___nl__im__127);
#line 46
c_rt_lib0clear(&___nl__im__128);
#line 46
c_rt_lib0clear(&___nl__im__129);
#line 46
c_rt_lib0clear(&___nl__im__130);
#line 46
c_rt_lib0clear(&___nl__im__131);
#line 46
c_rt_lib0clear(&___nl__im__132);
#line 46
c_rt_lib0clear(&___nl__im__133);
#line 46
c_rt_lib0clear(&___nl__im__134);
#line 46
c_rt_lib0clear(&___nl__im__135);
#line 46
c_rt_lib0clear(&___nl__im__136);
#line 46
c_rt_lib0clear(&___nl__im__137);
#line 46
c_rt_lib0clear(&___nl__im__138);
#line 46
c_rt_lib0clear(&___nl__im__139);
#line 46
c_rt_lib0clear(&___nl__im__140);
#line 46
c_rt_lib0clear(&___nl__im__141);
#line 46
c_rt_lib0clear(&___nl__im__142);
#line 46
c_rt_lib0clear(&___nl__im__143);
#line 46
c_rt_lib0clear(&___nl__im__144);
#line 46
c_rt_lib0clear(&___nl__im__145);
#line 46
c_rt_lib0clear(&___nl__im__146);
#line 46
c_rt_lib0clear(&___nl__im__147);
#line 46
c_rt_lib0clear(&___nl__im__148);
#line 46
c_rt_lib0clear(&___nl__im__149);
#line 46
c_rt_lib0clear(&___nl__im__150);
#line 46
c_rt_lib0clear(&___nl__im__151);
#line 46
c_rt_lib0clear(&___nl__im__152);
#line 46
c_rt_lib0clear(&___nl__im__153);
#line 46
c_rt_lib0clear(&___nl__im__154);
#line 46
c_rt_lib0clear(&___nl__im__155);
#line 46
c_rt_lib0clear(&___nl__im__156);
#line 46
c_rt_lib0clear(&___nl__im__157);
#line 46
c_rt_lib0clear(&___nl__im__158);
#line 46
c_rt_lib0clear(&___nl__im__159);
#line 46
c_rt_lib0clear(&___nl__im__160);
#line 46
c_rt_lib0clear(&___nl__im__161);
#line 46
c_rt_lib0clear(&___nl__im__162);
#line 46
c_rt_lib0clear(&___nl__im__163);
#line 46
c_rt_lib0clear(&___nl__im__164);
#line 46
c_rt_lib0clear(&___nl__im__165);
#line 46
c_rt_lib0clear(&___nl__im__166);
#line 46
c_rt_lib0clear(&___nl__im__167);
#line 46
c_rt_lib0clear(&___nl__im__168);
#line 46
c_rt_lib0clear(&___nl__im__170);
#line 46
c_rt_lib0clear(&___nl__im__171);
#line 46
return ___nl__im__169;
#line 46
c_rt_lib0clear(&___nl__im__0);
#line 46
c_rt_lib0clear(&___nl__im__1);
#line 46
c_rt_lib0clear(&___nl__im__2);
#line 46
c_rt_lib0clear(&___nl__im__3);
#line 46
c_rt_lib0clear(&___nl__im__4);
#line 46
c_rt_lib0clear(&___nl__im__5);
#line 46
c_rt_lib0clear(&___nl__im__6);
#line 46
c_rt_lib0clear(&___nl__im__7);
#line 46
c_rt_lib0clear(&___nl__im__8);
#line 46
c_rt_lib0clear(&___nl__im__9);
#line 46
c_rt_lib0clear(&___nl__im__10);
#line 46
c_rt_lib0clear(&___nl__im__11);
#line 46
c_rt_lib0clear(&___nl__im__12);
#line 46
c_rt_lib0clear(&___nl__im__13);
#line 46
c_rt_lib0clear(&___nl__im__14);
#line 46
c_rt_lib0clear(&___nl__im__15);
#line 46
c_rt_lib0clear(&___nl__im__16);
#line 46
c_rt_lib0clear(&___nl__im__17);
#line 46
c_rt_lib0clear(&___nl__im__18);
#line 46
c_rt_lib0clear(&___nl__im__19);
#line 46
c_rt_lib0clear(&___nl__im__20);
#line 46
c_rt_lib0clear(&___nl__im__21);
#line 46
c_rt_lib0clear(&___nl__im__22);
#line 46
c_rt_lib0clear(&___nl__im__23);
#line 46
c_rt_lib0clear(&___nl__im__24);
#line 46
c_rt_lib0clear(&___nl__im__25);
#line 46
c_rt_lib0clear(&___nl__im__26);
#line 46
c_rt_lib0clear(&___nl__im__27);
#line 46
c_rt_lib0clear(&___nl__im__28);
#line 46
c_rt_lib0clear(&___nl__im__29);
#line 46
c_rt_lib0clear(&___nl__im__30);
#line 46
c_rt_lib0clear(&___nl__im__31);
#line 46
c_rt_lib0clear(&___nl__im__32);
#line 46
c_rt_lib0clear(&___nl__im__33);
#line 46
c_rt_lib0clear(&___nl__im__34);
#line 46
c_rt_lib0clear(&___nl__im__35);
#line 46
c_rt_lib0clear(&___nl__im__36);
#line 46
c_rt_lib0clear(&___nl__im__37);
#line 46
c_rt_lib0clear(&___nl__im__38);
#line 46
c_rt_lib0clear(&___nl__im__39);
#line 46
c_rt_lib0clear(&___nl__im__40);
#line 46
c_rt_lib0clear(&___nl__im__41);
#line 46
c_rt_lib0clear(&___nl__im__42);
#line 46
c_rt_lib0clear(&___nl__im__43);
#line 46
c_rt_lib0clear(&___nl__im__44);
#line 46
c_rt_lib0clear(&___nl__im__45);
#line 46
c_rt_lib0clear(&___nl__im__46);
#line 46
c_rt_lib0clear(&___nl__im__47);
#line 46
c_rt_lib0clear(&___nl__im__48);
#line 46
c_rt_lib0clear(&___nl__im__49);
#line 46
c_rt_lib0clear(&___nl__im__50);
#line 46
c_rt_lib0clear(&___nl__im__51);
#line 46
c_rt_lib0clear(&___nl__im__52);
#line 46
c_rt_lib0clear(&___nl__im__53);
#line 46
c_rt_lib0clear(&___nl__im__54);
#line 46
c_rt_lib0clear(&___nl__im__55);
#line 46
c_rt_lib0clear(&___nl__im__56);
#line 46
c_rt_lib0clear(&___nl__im__57);
#line 46
c_rt_lib0clear(&___nl__im__58);
#line 46
c_rt_lib0clear(&___nl__im__59);
#line 46
c_rt_lib0clear(&___nl__im__60);
#line 46
c_rt_lib0clear(&___nl__im__61);
#line 46
c_rt_lib0clear(&___nl__im__62);
#line 46
c_rt_lib0clear(&___nl__im__63);
#line 46
c_rt_lib0clear(&___nl__im__64);
#line 46
c_rt_lib0clear(&___nl__im__65);
#line 46
c_rt_lib0clear(&___nl__im__66);
#line 46
c_rt_lib0clear(&___nl__im__67);
#line 46
c_rt_lib0clear(&___nl__im__68);
#line 46
c_rt_lib0clear(&___nl__im__69);
#line 46
c_rt_lib0clear(&___nl__im__70);
#line 46
c_rt_lib0clear(&___nl__im__71);
#line 46
c_rt_lib0clear(&___nl__im__72);
#line 46
c_rt_lib0clear(&___nl__im__73);
#line 46
c_rt_lib0clear(&___nl__im__74);
#line 46
c_rt_lib0clear(&___nl__im__75);
#line 46
c_rt_lib0clear(&___nl__im__76);
#line 46
c_rt_lib0clear(&___nl__im__77);
#line 46
c_rt_lib0clear(&___nl__im__78);
#line 46
c_rt_lib0clear(&___nl__im__79);
#line 46
c_rt_lib0clear(&___nl__im__80);
#line 46
c_rt_lib0clear(&___nl__im__81);
#line 46
c_rt_lib0clear(&___nl__im__82);
#line 46
c_rt_lib0clear(&___nl__im__83);
#line 46
c_rt_lib0clear(&___nl__im__84);
#line 46
c_rt_lib0clear(&___nl__im__85);
#line 46
c_rt_lib0clear(&___nl__im__86);
#line 46
c_rt_lib0clear(&___nl__im__87);
#line 46
c_rt_lib0clear(&___nl__im__88);
#line 46
c_rt_lib0clear(&___nl__im__89);
#line 46
c_rt_lib0clear(&___nl__im__90);
#line 46
c_rt_lib0clear(&___nl__im__91);
#line 46
c_rt_lib0clear(&___nl__im__92);
#line 46
c_rt_lib0clear(&___nl__im__93);
#line 46
c_rt_lib0clear(&___nl__im__94);
#line 46
c_rt_lib0clear(&___nl__im__95);
#line 46
c_rt_lib0clear(&___nl__im__96);
#line 46
c_rt_lib0clear(&___nl__im__97);
#line 46
c_rt_lib0clear(&___nl__im__98);
#line 46
c_rt_lib0clear(&___nl__im__99);
#line 46
c_rt_lib0clear(&___nl__im__100);
#line 46
c_rt_lib0clear(&___nl__im__101);
#line 46
c_rt_lib0clear(&___nl__im__102);
#line 46
c_rt_lib0clear(&___nl__im__103);
#line 46
c_rt_lib0clear(&___nl__im__104);
#line 46
c_rt_lib0clear(&___nl__im__105);
#line 46
c_rt_lib0clear(&___nl__im__106);
#line 46
c_rt_lib0clear(&___nl__im__107);
#line 46
c_rt_lib0clear(&___nl__im__108);
#line 46
c_rt_lib0clear(&___nl__im__109);
#line 46
c_rt_lib0clear(&___nl__im__110);
#line 46
c_rt_lib0clear(&___nl__im__111);
#line 46
c_rt_lib0clear(&___nl__im__112);
#line 46
c_rt_lib0clear(&___nl__im__113);
#line 46
c_rt_lib0clear(&___nl__im__114);
#line 46
c_rt_lib0clear(&___nl__im__115);
#line 46
c_rt_lib0clear(&___nl__im__116);
#line 46
c_rt_lib0clear(&___nl__im__117);
#line 46
c_rt_lib0clear(&___nl__im__118);
#line 46
c_rt_lib0clear(&___nl__im__119);
#line 46
c_rt_lib0clear(&___nl__im__120);
#line 46
c_rt_lib0clear(&___nl__im__121);
#line 46
c_rt_lib0clear(&___nl__im__122);
#line 46
c_rt_lib0clear(&___nl__im__123);
#line 46
c_rt_lib0clear(&___nl__im__124);
#line 46
c_rt_lib0clear(&___nl__im__125);
#line 46
c_rt_lib0clear(&___nl__im__126);
#line 46
c_rt_lib0clear(&___nl__im__127);
#line 46
c_rt_lib0clear(&___nl__im__128);
#line 46
c_rt_lib0clear(&___nl__im__129);
#line 46
c_rt_lib0clear(&___nl__im__130);
#line 46
c_rt_lib0clear(&___nl__im__131);
#line 46
c_rt_lib0clear(&___nl__im__132);
#line 46
c_rt_lib0clear(&___nl__im__133);
#line 46
c_rt_lib0clear(&___nl__im__134);
#line 46
c_rt_lib0clear(&___nl__im__135);
#line 46
c_rt_lib0clear(&___nl__im__136);
#line 46
c_rt_lib0clear(&___nl__im__137);
#line 46
c_rt_lib0clear(&___nl__im__138);
#line 46
c_rt_lib0clear(&___nl__im__139);
#line 46
c_rt_lib0clear(&___nl__im__140);
#line 46
c_rt_lib0clear(&___nl__im__141);
#line 46
c_rt_lib0clear(&___nl__im__142);
#line 46
c_rt_lib0clear(&___nl__im__143);
#line 46
c_rt_lib0clear(&___nl__im__144);
#line 46
c_rt_lib0clear(&___nl__im__145);
#line 46
c_rt_lib0clear(&___nl__im__146);
#line 46
c_rt_lib0clear(&___nl__im__147);
#line 46
c_rt_lib0clear(&___nl__im__148);
#line 46
c_rt_lib0clear(&___nl__im__149);
#line 46
c_rt_lib0clear(&___nl__im__150);
#line 46
c_rt_lib0clear(&___nl__im__151);
#line 46
c_rt_lib0clear(&___nl__im__152);
#line 46
c_rt_lib0clear(&___nl__im__153);
#line 46
c_rt_lib0clear(&___nl__im__154);
#line 46
c_rt_lib0clear(&___nl__im__155);
#line 46
c_rt_lib0clear(&___nl__im__156);
#line 46
c_rt_lib0clear(&___nl__im__157);
#line 46
c_rt_lib0clear(&___nl__im__158);
#line 46
c_rt_lib0clear(&___nl__im__159);
#line 46
c_rt_lib0clear(&___nl__im__160);
#line 46
c_rt_lib0clear(&___nl__im__161);
#line 46
c_rt_lib0clear(&___nl__im__162);
#line 46
c_rt_lib0clear(&___nl__im__163);
#line 46
c_rt_lib0clear(&___nl__im__164);
#line 46
c_rt_lib0clear(&___nl__im__165);
#line 46
c_rt_lib0clear(&___nl__im__166);
#line 46
c_rt_lib0clear(&___nl__im__167);
#line 46
c_rt_lib0clear(&___nl__im__168);
#line 46
c_rt_lib0clear(&___nl__im__169);
#line 46
c_rt_lib0clear(&___nl__im__170);
#line 46
c_rt_lib0clear(&___nl__im__171);
#line 46
return NULL;
}

ImmT  tc_types0errors_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0errors_t");
return tc_types0errors_t();
}
ImmT  tc_types0errors_t() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 51
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 52
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 53
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(53), ___get_global_const(989)));
#line 53
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 54
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(53), ___get_global_const(989)));
#line 54
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 54
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(995), ___nl__im__3, ___get_global_const(167), ___nl__im__4, ___get_global_const(141), ___nl__im__5, ___get_global_const(51), ___nl__im__6));
#line 54
c_rt_lib0clear(&___nl__im__3);
#line 54
c_rt_lib0clear(&___nl__im__4);
#line 54
c_rt_lib0clear(&___nl__im__5);
#line 54
c_rt_lib0clear(&___nl__im__6);
#line 54
c_rt_lib0copy(&___nl__im__7, ___nl__im__2);
#line 54
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__7));
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
return NULL;
}

ImmT  tc_types0bin_op_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0bin_op_type");
return tc_types0bin_op_type();
}
ImmT  tc_types0bin_op_type() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 59
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 59
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 59
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 59
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 59
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 59
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 59
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(1354), ___nl__im__3, ___get_global_const(1355), ___nl__im__4, ___get_global_const(394), ___nl__im__5));
#line 59
c_rt_lib0clear(&___nl__im__3);
#line 59
c_rt_lib0clear(&___nl__im__4);
#line 59
c_rt_lib0clear(&___nl__im__5);
#line 59
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 59
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__6));
#line 59
c_rt_lib0clear(&___nl__im__2);
#line 59
c_rt_lib0clear(&___nl__im__3);
#line 59
c_rt_lib0clear(&___nl__im__4);
#line 59
c_rt_lib0clear(&___nl__im__5);
#line 59
c_rt_lib0clear(&___nl__im__6);
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
c_rt_lib0clear(&___nl__im__6);
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
c_rt_lib0clear(&___nl__im__6);
#line 59
return NULL;
}

ImmT  tc_types0defs_funs_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0defs_funs_t");
return tc_types0defs_funs_t();
}
ImmT  tc_types0defs_funs_t() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 63
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tc_types0def_fun_t0ptr, ___get_global_const(48), ___get_global_const(1356)));
#line 63
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 63
c_rt_lib0copy(&___nl__im__4, ___nl__im__3);
#line 63
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__4));
#line 63
c_rt_lib0clear(&___nl__im__3);
#line 63
c_rt_lib0clear(&___nl__im__4);
#line 63
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 63
c_rt_lib0move(&___nl__im__1, ptd0hash(___nl__im__5));
#line 63
c_rt_lib0clear(&___nl__im__2);
#line 63
c_rt_lib0clear(&___nl__im__3);
#line 63
c_rt_lib0clear(&___nl__im__4);
#line 63
c_rt_lib0clear(&___nl__im__5);
#line 63
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 63
c_rt_lib0clear(&___nl__im__1);
#line 63
c_rt_lib0clear(&___nl__im__2);
#line 63
c_rt_lib0clear(&___nl__im__3);
#line 63
c_rt_lib0clear(&___nl__im__4);
#line 63
c_rt_lib0clear(&___nl__im__5);
#line 63
return ___nl__im__0;
#line 63
c_rt_lib0clear(&___nl__im__0);
#line 63
c_rt_lib0clear(&___nl__im__1);
#line 63
c_rt_lib0clear(&___nl__im__2);
#line 63
c_rt_lib0clear(&___nl__im__3);
#line 63
c_rt_lib0clear(&___nl__im__4);
#line 63
c_rt_lib0clear(&___nl__im__5);
#line 63
return NULL;
}

ImmT  tc_types0return_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0return_t");
return tc_types0return_t();
}
ImmT  tc_types0return_t() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 68
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(53), ___get_global_const(989)));
#line 68
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 69
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(53), ___get_global_const(989)));
#line 69
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 70
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(tc_types0deref_types0ptr, ___get_global_const(48), ___get_global_const(49)));
#line 70
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 70
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(51), ___nl__im__3, ___get_global_const(141), ___nl__im__4, ___get_global_const(99), ___nl__im__5));
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 70
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 70
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__6));
#line 70
c_rt_lib0clear(&___nl__im__2);
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 70
c_rt_lib0clear(&___nl__im__6);
#line 70
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 70
c_rt_lib0clear(&___nl__im__1);
#line 70
c_rt_lib0clear(&___nl__im__2);
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 70
c_rt_lib0clear(&___nl__im__6);
#line 70
return ___nl__im__0;
#line 70
c_rt_lib0clear(&___nl__im__0);
#line 70
c_rt_lib0clear(&___nl__im__1);
#line 70
c_rt_lib0clear(&___nl__im__2);
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 70
c_rt_lib0clear(&___nl__im__6);
#line 70
return NULL;
}

ImmT  tc_types0modules_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0modules_t");
return tc_types0modules_t();
}
ImmT  tc_types0modules_t() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 75
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(95), ___get_global_const(96)));
#line 75
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 75
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 75
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__5));
#line 75
c_rt_lib0clear(&___nl__im__4);
#line 75
c_rt_lib0clear(&___nl__im__5);
#line 75
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tc_types0env0ptr, ___get_global_const(48), ___get_global_const(1321)));
#line 75
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 75
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tc_types0defs_funs_t0ptr, ___get_global_const(48), ___get_global_const(1357)));
#line 75
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 75
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(448), ___nl__im__3, ___get_global_const(1321), ___nl__im__6, ___get_global_const(1325), ___nl__im__7));
#line 75
c_rt_lib0clear(&___nl__im__3);
#line 75
c_rt_lib0clear(&___nl__im__4);
#line 75
c_rt_lib0clear(&___nl__im__5);
#line 75
c_rt_lib0clear(&___nl__im__6);
#line 75
c_rt_lib0clear(&___nl__im__7);
#line 75
c_rt_lib0copy(&___nl__im__8, ___nl__im__2);
#line 75
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__8));
#line 75
c_rt_lib0clear(&___nl__im__2);
#line 75
c_rt_lib0clear(&___nl__im__3);
#line 75
c_rt_lib0clear(&___nl__im__4);
#line 75
c_rt_lib0clear(&___nl__im__5);
#line 75
c_rt_lib0clear(&___nl__im__6);
#line 75
c_rt_lib0clear(&___nl__im__7);
#line 75
c_rt_lib0clear(&___nl__im__8);
#line 75
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 75
c_rt_lib0clear(&___nl__im__1);
#line 75
c_rt_lib0clear(&___nl__im__2);
#line 75
c_rt_lib0clear(&___nl__im__3);
#line 75
c_rt_lib0clear(&___nl__im__4);
#line 75
c_rt_lib0clear(&___nl__im__5);
#line 75
c_rt_lib0clear(&___nl__im__6);
#line 75
c_rt_lib0clear(&___nl__im__7);
#line 75
c_rt_lib0clear(&___nl__im__8);
#line 75
return ___nl__im__0;
#line 75
c_rt_lib0clear(&___nl__im__0);
#line 75
c_rt_lib0clear(&___nl__im__1);
#line 75
c_rt_lib0clear(&___nl__im__2);
#line 75
c_rt_lib0clear(&___nl__im__3);
#line 75
c_rt_lib0clear(&___nl__im__4);
#line 75
c_rt_lib0clear(&___nl__im__5);
#line 75
c_rt_lib0clear(&___nl__im__6);
#line 75
c_rt_lib0clear(&___nl__im__7);
#line 75
c_rt_lib0clear(&___nl__im__8);
#line 75
return NULL;
}

ImmT  tc_types0deref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0deref_type");
return tc_types0deref_type();
}
ImmT  tc_types0deref_type() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 79
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 79
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 79
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 79
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(169), ___nl__im__3, ___get_global_const(167), ___nl__im__4, ___get_global_const(1322), ___nl__im__5));
#line 79
c_rt_lib0clear(&___nl__im__3);
#line 79
c_rt_lib0clear(&___nl__im__4);
#line 79
c_rt_lib0clear(&___nl__im__5);
#line 79
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 79
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__6));
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
return NULL;
}

ImmT  tc_types0deref_types0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0deref_types");
return tc_types0deref_types();
}
ImmT  tc_types0deref_types() {
tc_types_priv0__const__init();
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
#line 83
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(tc_types0deref_type0ptr, ___get_global_const(48), ___get_global_const(52)));
#line 83
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 83
c_rt_lib0copy(&___nl__im__5, ___nl__im__4);
#line 83
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__5));
#line 83
c_rt_lib0clear(&___nl__im__4);
#line 83
c_rt_lib0clear(&___nl__im__5);
#line 83
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tc_types0deref_type0ptr, ___get_global_const(48), ___get_global_const(52)));
#line 83
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 83
c_rt_lib0copy(&___nl__im__8, ___nl__im__7);
#line 83
c_rt_lib0move(&___nl__im__6, ptd0arr(___nl__im__8));
#line 83
c_rt_lib0clear(&___nl__im__7);
#line 83
c_rt_lib0clear(&___nl__im__8);
#line 83
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(187), ___nl__im__3, ___get_global_const(189), ___nl__im__6));
#line 83
c_rt_lib0clear(&___nl__im__3);
#line 83
c_rt_lib0clear(&___nl__im__4);
#line 83
c_rt_lib0clear(&___nl__im__5);
#line 83
c_rt_lib0clear(&___nl__im__6);
#line 83
c_rt_lib0clear(&___nl__im__7);
#line 83
c_rt_lib0clear(&___nl__im__8);
#line 83
c_rt_lib0copy(&___nl__im__9, ___nl__im__2);
#line 83
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__9));
#line 83
c_rt_lib0clear(&___nl__im__2);
#line 83
c_rt_lib0clear(&___nl__im__3);
#line 83
c_rt_lib0clear(&___nl__im__4);
#line 83
c_rt_lib0clear(&___nl__im__5);
#line 83
c_rt_lib0clear(&___nl__im__6);
#line 83
c_rt_lib0clear(&___nl__im__7);
#line 83
c_rt_lib0clear(&___nl__im__8);
#line 83
c_rt_lib0clear(&___nl__im__9);
#line 83
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 83
c_rt_lib0clear(&___nl__im__1);
#line 83
c_rt_lib0clear(&___nl__im__2);
#line 83
c_rt_lib0clear(&___nl__im__3);
#line 83
c_rt_lib0clear(&___nl__im__4);
#line 83
c_rt_lib0clear(&___nl__im__5);
#line 83
c_rt_lib0clear(&___nl__im__6);
#line 83
c_rt_lib0clear(&___nl__im__7);
#line 83
c_rt_lib0clear(&___nl__im__8);
#line 83
c_rt_lib0clear(&___nl__im__9);
#line 83
return ___nl__im__0;
#line 83
c_rt_lib0clear(&___nl__im__0);
#line 83
c_rt_lib0clear(&___nl__im__1);
#line 83
c_rt_lib0clear(&___nl__im__2);
#line 83
c_rt_lib0clear(&___nl__im__3);
#line 83
c_rt_lib0clear(&___nl__im__4);
#line 83
c_rt_lib0clear(&___nl__im__5);
#line 83
c_rt_lib0clear(&___nl__im__6);
#line 83
c_rt_lib0clear(&___nl__im__7);
#line 83
c_rt_lib0clear(&___nl__im__8);
#line 83
c_rt_lib0clear(&___nl__im__9);
#line 83
return NULL;
}

ImmT  tc_types0env0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0env");
return tc_types0env();
}
ImmT  tc_types0env() {
tc_types_priv0__const__init();
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
#line 88
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 89
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tc_types0vars_t0ptr, ___get_global_const(48), ___get_global_const(1358)));
#line 89
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 89
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(95), ___get_global_const(96)));
#line 89
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 89
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(884), ___nl__im__6, ___get_global_const(1070), ___nl__im__7));
#line 89
c_rt_lib0clear(&___nl__im__6);
#line 89
c_rt_lib0clear(&___nl__im__7);
#line 89
c_rt_lib0copy(&___nl__im__8, ___nl__im__5);
#line 89
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__8));
#line 89
c_rt_lib0clear(&___nl__im__5);
#line 89
c_rt_lib0clear(&___nl__im__6);
#line 89
c_rt_lib0clear(&___nl__im__7);
#line 89
c_rt_lib0clear(&___nl__im__8);
#line 90
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 90
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 91
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(tc_types0deref_types0ptr, ___get_global_const(48), ___get_global_const(49)));
#line 91
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 91
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(992), ___nl__im__3, ___get_global_const(1359), ___nl__im__4, ___get_global_const(398), ___nl__im__9, ___get_global_const(99), ___nl__im__10));
#line 91
c_rt_lib0clear(&___nl__im__3);
#line 91
c_rt_lib0clear(&___nl__im__4);
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
c_rt_lib0copy(&___nl__im__11, ___nl__im__2);
#line 91
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__11));
#line 91
c_rt_lib0clear(&___nl__im__2);
#line 91
c_rt_lib0clear(&___nl__im__3);
#line 91
c_rt_lib0clear(&___nl__im__4);
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
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 91
c_rt_lib0clear(&___nl__im__1);
#line 91
c_rt_lib0clear(&___nl__im__2);
#line 91
c_rt_lib0clear(&___nl__im__3);
#line 91
c_rt_lib0clear(&___nl__im__4);
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
return ___nl__im__0;
#line 91
c_rt_lib0clear(&___nl__im__0);
#line 91
c_rt_lib0clear(&___nl__im__1);
#line 91
c_rt_lib0clear(&___nl__im__2);
#line 91
c_rt_lib0clear(&___nl__im__3);
#line 91
c_rt_lib0clear(&___nl__im__4);
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
return NULL;
}

ImmT  tc_types0var_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0var_t");
return tc_types0var_t();
}
ImmT  tc_types0var_t() {
tc_types_priv0__const__init();
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
#line 97
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 97
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 97
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(78), ___nl__im__5, ___get_global_const(79), ___nl__im__6));
#line 97
c_rt_lib0clear(&___nl__im__5);
#line 97
c_rt_lib0clear(&___nl__im__6);
#line 97
c_rt_lib0copy(&___nl__im__7, ___nl__im__4);
#line 97
c_rt_lib0move(&___nl__im__3, ptd0var(___nl__im__7));
#line 97
c_rt_lib0clear(&___nl__im__4);
#line 97
c_rt_lib0clear(&___nl__im__5);
#line 97
c_rt_lib0clear(&___nl__im__6);
#line 97
c_rt_lib0clear(&___nl__im__7);
#line 98
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 98
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 99
c_rt_lib0move(&___nl__im__11, ptd0none());
#line 99
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 99
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_const(74), ___nl__im__11, ___get_global_const(1360), ___nl__im__12));
#line 99
c_rt_lib0clear(&___nl__im__11);
#line 99
c_rt_lib0clear(&___nl__im__12);
#line 99
c_rt_lib0copy(&___nl__im__13, ___nl__im__10);
#line 99
c_rt_lib0move(&___nl__im__9, ptd0var(___nl__im__13));
#line 99
c_rt_lib0clear(&___nl__im__10);
#line 99
c_rt_lib0clear(&___nl__im__11);
#line 99
c_rt_lib0clear(&___nl__im__12);
#line 99
c_rt_lib0clear(&___nl__im__13);
#line 99
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(1361), ___nl__im__3, ___get_global_const(96), ___nl__im__8, ___get_global_const(1362), ___nl__im__9));
#line 99
c_rt_lib0clear(&___nl__im__3);
#line 99
c_rt_lib0clear(&___nl__im__4);
#line 99
c_rt_lib0clear(&___nl__im__5);
#line 99
c_rt_lib0clear(&___nl__im__6);
#line 99
c_rt_lib0clear(&___nl__im__7);
#line 99
c_rt_lib0clear(&___nl__im__8);
#line 99
c_rt_lib0clear(&___nl__im__9);
#line 99
c_rt_lib0clear(&___nl__im__10);
#line 99
c_rt_lib0clear(&___nl__im__11);
#line 99
c_rt_lib0clear(&___nl__im__12);
#line 99
c_rt_lib0clear(&___nl__im__13);
#line 99
c_rt_lib0copy(&___nl__im__14, ___nl__im__2);
#line 99
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__14));
#line 99
c_rt_lib0clear(&___nl__im__2);
#line 99
c_rt_lib0clear(&___nl__im__3);
#line 99
c_rt_lib0clear(&___nl__im__4);
#line 99
c_rt_lib0clear(&___nl__im__5);
#line 99
c_rt_lib0clear(&___nl__im__6);
#line 99
c_rt_lib0clear(&___nl__im__7);
#line 99
c_rt_lib0clear(&___nl__im__8);
#line 99
c_rt_lib0clear(&___nl__im__9);
#line 99
c_rt_lib0clear(&___nl__im__10);
#line 99
c_rt_lib0clear(&___nl__im__11);
#line 99
c_rt_lib0clear(&___nl__im__12);
#line 99
c_rt_lib0clear(&___nl__im__13);
#line 99
c_rt_lib0clear(&___nl__im__14);
#line 99
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 99
c_rt_lib0clear(&___nl__im__1);
#line 99
c_rt_lib0clear(&___nl__im__2);
#line 99
c_rt_lib0clear(&___nl__im__3);
#line 99
c_rt_lib0clear(&___nl__im__4);
#line 99
c_rt_lib0clear(&___nl__im__5);
#line 99
c_rt_lib0clear(&___nl__im__6);
#line 99
c_rt_lib0clear(&___nl__im__7);
#line 99
c_rt_lib0clear(&___nl__im__8);
#line 99
c_rt_lib0clear(&___nl__im__9);
#line 99
c_rt_lib0clear(&___nl__im__10);
#line 99
c_rt_lib0clear(&___nl__im__11);
#line 99
c_rt_lib0clear(&___nl__im__12);
#line 99
c_rt_lib0clear(&___nl__im__13);
#line 99
c_rt_lib0clear(&___nl__im__14);
#line 99
return ___nl__im__0;
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
c_rt_lib0clear(&___nl__im__5);
#line 99
c_rt_lib0clear(&___nl__im__6);
#line 99
c_rt_lib0clear(&___nl__im__7);
#line 99
c_rt_lib0clear(&___nl__im__8);
#line 99
c_rt_lib0clear(&___nl__im__9);
#line 99
c_rt_lib0clear(&___nl__im__10);
#line 99
c_rt_lib0clear(&___nl__im__11);
#line 99
c_rt_lib0clear(&___nl__im__12);
#line 99
c_rt_lib0clear(&___nl__im__13);
#line 99
c_rt_lib0clear(&___nl__im__14);
#line 99
return NULL;
}

ImmT  tc_types0fun_arg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0fun_arg_t");
return tc_types0fun_arg_t();
}
ImmT  tc_types0fun_arg_t() {
tc_types_priv0__const__init();
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
#line 105
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 106
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 106
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 107
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 107
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 107
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_const(74), ___nl__im__7, ___get_global_const(40), ___nl__im__8));
#line 107
c_rt_lib0clear(&___nl__im__7);
#line 107
c_rt_lib0clear(&___nl__im__8);
#line 107
c_rt_lib0copy(&___nl__im__9, ___nl__im__6);
#line 107
c_rt_lib0move(&___nl__im__5, ptd0var(___nl__im__9));
#line 107
c_rt_lib0clear(&___nl__im__6);
#line 107
c_rt_lib0clear(&___nl__im__7);
#line 107
c_rt_lib0clear(&___nl__im__8);
#line 107
c_rt_lib0clear(&___nl__im__9);
#line 107
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(121), ___nl__im__3, ___get_global_const(96), ___nl__im__4, ___get_global_const(273), ___nl__im__5));
#line 107
c_rt_lib0clear(&___nl__im__3);
#line 107
c_rt_lib0clear(&___nl__im__4);
#line 107
c_rt_lib0clear(&___nl__im__5);
#line 107
c_rt_lib0clear(&___nl__im__6);
#line 107
c_rt_lib0clear(&___nl__im__7);
#line 107
c_rt_lib0clear(&___nl__im__8);
#line 107
c_rt_lib0clear(&___nl__im__9);
#line 107
c_rt_lib0copy(&___nl__im__10, ___nl__im__2);
#line 107
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__10));
#line 107
c_rt_lib0clear(&___nl__im__2);
#line 107
c_rt_lib0clear(&___nl__im__3);
#line 107
c_rt_lib0clear(&___nl__im__4);
#line 107
c_rt_lib0clear(&___nl__im__5);
#line 107
c_rt_lib0clear(&___nl__im__6);
#line 107
c_rt_lib0clear(&___nl__im__7);
#line 107
c_rt_lib0clear(&___nl__im__8);
#line 107
c_rt_lib0clear(&___nl__im__9);
#line 107
c_rt_lib0clear(&___nl__im__10);
#line 107
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 107
c_rt_lib0clear(&___nl__im__1);
#line 107
c_rt_lib0clear(&___nl__im__2);
#line 107
c_rt_lib0clear(&___nl__im__3);
#line 107
c_rt_lib0clear(&___nl__im__4);
#line 107
c_rt_lib0clear(&___nl__im__5);
#line 107
c_rt_lib0clear(&___nl__im__6);
#line 107
c_rt_lib0clear(&___nl__im__7);
#line 107
c_rt_lib0clear(&___nl__im__8);
#line 107
c_rt_lib0clear(&___nl__im__9);
#line 107
c_rt_lib0clear(&___nl__im__10);
#line 107
return ___nl__im__0;
#line 107
c_rt_lib0clear(&___nl__im__0);
#line 107
c_rt_lib0clear(&___nl__im__1);
#line 107
c_rt_lib0clear(&___nl__im__2);
#line 107
c_rt_lib0clear(&___nl__im__3);
#line 107
c_rt_lib0clear(&___nl__im__4);
#line 107
c_rt_lib0clear(&___nl__im__5);
#line 107
c_rt_lib0clear(&___nl__im__6);
#line 107
c_rt_lib0clear(&___nl__im__7);
#line 107
c_rt_lib0clear(&___nl__im__8);
#line 107
c_rt_lib0clear(&___nl__im__9);
#line 107
c_rt_lib0clear(&___nl__im__10);
#line 107
return NULL;
}

ImmT  tc_types0def_fun_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0def_fun_t");
return tc_types0def_fun_t();
}
ImmT  tc_types0def_fun_t() {
tc_types_priv0__const__init();
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
#line 113
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(320)));
#line 113
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 114
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 114
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 114
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 114
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(79), ___nl__im__6, ___get_global_const(78), ___nl__im__7));
#line 114
c_rt_lib0clear(&___nl__im__6);
#line 114
c_rt_lib0clear(&___nl__im__7);
#line 114
c_rt_lib0copy(&___nl__im__8, ___nl__im__5);
#line 114
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__8));
#line 114
c_rt_lib0clear(&___nl__im__5);
#line 114
c_rt_lib0clear(&___nl__im__6);
#line 114
c_rt_lib0clear(&___nl__im__7);
#line 114
c_rt_lib0clear(&___nl__im__8);
#line 115
c_rt_lib0move(&___nl__im__11, ptd0none());
#line 115
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 115
c_rt_lib0copy(&___nl__im__14, ___nl__im__13);
#line 115
c_rt_lib0move(&___nl__im__12, ptd0arr(___nl__im__14));
#line 115
c_rt_lib0clear(&___nl__im__13);
#line 115
c_rt_lib0clear(&___nl__im__14);
#line 115
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_const(79), ___nl__im__11, ___get_global_const(78), ___nl__im__12));
#line 115
c_rt_lib0clear(&___nl__im__11);
#line 115
c_rt_lib0clear(&___nl__im__12);
#line 115
c_rt_lib0clear(&___nl__im__13);
#line 115
c_rt_lib0clear(&___nl__im__14);
#line 115
c_rt_lib0copy(&___nl__im__15, ___nl__im__10);
#line 115
c_rt_lib0move(&___nl__im__9, ptd0var(___nl__im__15));
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
c_rt_lib0clear(&___nl__im__15);
#line 116
c_rt_lib0move(&___nl__im__16, ptd0string());
#line 117
c_rt_lib0move(&___nl__im__17, ptd0string());
#line 118
c_rt_lib0move(&___nl__im__20, ptd0none());
#line 118
c_rt_lib0move(&___nl__im__21, ptd0none());
#line 118
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(2, ___get_global_const(438), ___nl__im__20, ___get_global_const(220), ___nl__im__21));
#line 118
c_rt_lib0clear(&___nl__im__20);
#line 118
c_rt_lib0clear(&___nl__im__21);
#line 118
c_rt_lib0copy(&___nl__im__22, ___nl__im__19);
#line 118
c_rt_lib0move(&___nl__im__18, ptd0var(___nl__im__22));
#line 118
c_rt_lib0clear(&___nl__im__19);
#line 118
c_rt_lib0clear(&___nl__im__20);
#line 118
c_rt_lib0clear(&___nl__im__21);
#line 118
c_rt_lib0clear(&___nl__im__22);
#line 119
c_rt_lib0move(&___nl__im__24, c_rt_lib0func_new(tc_types0fun_arg_t0ptr, ___get_global_const(48), ___get_global_const(1363)));
#line 119
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__24));
#line 119
c_rt_lib0copy(&___nl__im__25, ___nl__im__24);
#line 119
c_rt_lib0move(&___nl__im__23, ptd0arr(___nl__im__25));
#line 119
c_rt_lib0clear(&___nl__im__24);
#line 119
c_rt_lib0clear(&___nl__im__25);
#line 120
c_rt_lib0move(&___nl__im__26, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 120
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__26));
#line 120
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(8, ___get_global_const(237), ___nl__im__3, ___get_global_const(1330), ___nl__im__4, ___get_global_const(1324), ___nl__im__9, ___get_global_const(121), ___nl__im__16, ___get_global_const(167), ___nl__im__17, ___get_global_const(219), ___nl__im__18, ___get_global_const(118), ___nl__im__23, ___get_global_const(398), ___nl__im__26));
#line 120
c_rt_lib0clear(&___nl__im__3);
#line 120
c_rt_lib0clear(&___nl__im__4);
#line 120
c_rt_lib0clear(&___nl__im__5);
#line 120
c_rt_lib0clear(&___nl__im__6);
#line 120
c_rt_lib0clear(&___nl__im__7);
#line 120
c_rt_lib0clear(&___nl__im__8);
#line 120
c_rt_lib0clear(&___nl__im__9);
#line 120
c_rt_lib0clear(&___nl__im__10);
#line 120
c_rt_lib0clear(&___nl__im__11);
#line 120
c_rt_lib0clear(&___nl__im__12);
#line 120
c_rt_lib0clear(&___nl__im__13);
#line 120
c_rt_lib0clear(&___nl__im__14);
#line 120
c_rt_lib0clear(&___nl__im__15);
#line 120
c_rt_lib0clear(&___nl__im__16);
#line 120
c_rt_lib0clear(&___nl__im__17);
#line 120
c_rt_lib0clear(&___nl__im__18);
#line 120
c_rt_lib0clear(&___nl__im__19);
#line 120
c_rt_lib0clear(&___nl__im__20);
#line 120
c_rt_lib0clear(&___nl__im__21);
#line 120
c_rt_lib0clear(&___nl__im__22);
#line 120
c_rt_lib0clear(&___nl__im__23);
#line 120
c_rt_lib0clear(&___nl__im__24);
#line 120
c_rt_lib0clear(&___nl__im__25);
#line 120
c_rt_lib0clear(&___nl__im__26);
#line 120
c_rt_lib0copy(&___nl__im__27, ___nl__im__2);
#line 120
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__27));
#line 120
c_rt_lib0clear(&___nl__im__2);
#line 120
c_rt_lib0clear(&___nl__im__3);
#line 120
c_rt_lib0clear(&___nl__im__4);
#line 120
c_rt_lib0clear(&___nl__im__5);
#line 120
c_rt_lib0clear(&___nl__im__6);
#line 120
c_rt_lib0clear(&___nl__im__7);
#line 120
c_rt_lib0clear(&___nl__im__8);
#line 120
c_rt_lib0clear(&___nl__im__9);
#line 120
c_rt_lib0clear(&___nl__im__10);
#line 120
c_rt_lib0clear(&___nl__im__11);
#line 120
c_rt_lib0clear(&___nl__im__12);
#line 120
c_rt_lib0clear(&___nl__im__13);
#line 120
c_rt_lib0clear(&___nl__im__14);
#line 120
c_rt_lib0clear(&___nl__im__15);
#line 120
c_rt_lib0clear(&___nl__im__16);
#line 120
c_rt_lib0clear(&___nl__im__17);
#line 120
c_rt_lib0clear(&___nl__im__18);
#line 120
c_rt_lib0clear(&___nl__im__19);
#line 120
c_rt_lib0clear(&___nl__im__20);
#line 120
c_rt_lib0clear(&___nl__im__21);
#line 120
c_rt_lib0clear(&___nl__im__22);
#line 120
c_rt_lib0clear(&___nl__im__23);
#line 120
c_rt_lib0clear(&___nl__im__24);
#line 120
c_rt_lib0clear(&___nl__im__25);
#line 120
c_rt_lib0clear(&___nl__im__26);
#line 120
c_rt_lib0clear(&___nl__im__27);
#line 120
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 120
c_rt_lib0clear(&___nl__im__1);
#line 120
c_rt_lib0clear(&___nl__im__2);
#line 120
c_rt_lib0clear(&___nl__im__3);
#line 120
c_rt_lib0clear(&___nl__im__4);
#line 120
c_rt_lib0clear(&___nl__im__5);
#line 120
c_rt_lib0clear(&___nl__im__6);
#line 120
c_rt_lib0clear(&___nl__im__7);
#line 120
c_rt_lib0clear(&___nl__im__8);
#line 120
c_rt_lib0clear(&___nl__im__9);
#line 120
c_rt_lib0clear(&___nl__im__10);
#line 120
c_rt_lib0clear(&___nl__im__11);
#line 120
c_rt_lib0clear(&___nl__im__12);
#line 120
c_rt_lib0clear(&___nl__im__13);
#line 120
c_rt_lib0clear(&___nl__im__14);
#line 120
c_rt_lib0clear(&___nl__im__15);
#line 120
c_rt_lib0clear(&___nl__im__16);
#line 120
c_rt_lib0clear(&___nl__im__17);
#line 120
c_rt_lib0clear(&___nl__im__18);
#line 120
c_rt_lib0clear(&___nl__im__19);
#line 120
c_rt_lib0clear(&___nl__im__20);
#line 120
c_rt_lib0clear(&___nl__im__21);
#line 120
c_rt_lib0clear(&___nl__im__22);
#line 120
c_rt_lib0clear(&___nl__im__23);
#line 120
c_rt_lib0clear(&___nl__im__24);
#line 120
c_rt_lib0clear(&___nl__im__25);
#line 120
c_rt_lib0clear(&___nl__im__26);
#line 120
c_rt_lib0clear(&___nl__im__27);
#line 120
return ___nl__im__0;
#line 120
c_rt_lib0clear(&___nl__im__0);
#line 120
c_rt_lib0clear(&___nl__im__1);
#line 120
c_rt_lib0clear(&___nl__im__2);
#line 120
c_rt_lib0clear(&___nl__im__3);
#line 120
c_rt_lib0clear(&___nl__im__4);
#line 120
c_rt_lib0clear(&___nl__im__5);
#line 120
c_rt_lib0clear(&___nl__im__6);
#line 120
c_rt_lib0clear(&___nl__im__7);
#line 120
c_rt_lib0clear(&___nl__im__8);
#line 120
c_rt_lib0clear(&___nl__im__9);
#line 120
c_rt_lib0clear(&___nl__im__10);
#line 120
c_rt_lib0clear(&___nl__im__11);
#line 120
c_rt_lib0clear(&___nl__im__12);
#line 120
c_rt_lib0clear(&___nl__im__13);
#line 120
c_rt_lib0clear(&___nl__im__14);
#line 120
c_rt_lib0clear(&___nl__im__15);
#line 120
c_rt_lib0clear(&___nl__im__16);
#line 120
c_rt_lib0clear(&___nl__im__17);
#line 120
c_rt_lib0clear(&___nl__im__18);
#line 120
c_rt_lib0clear(&___nl__im__19);
#line 120
c_rt_lib0clear(&___nl__im__20);
#line 120
c_rt_lib0clear(&___nl__im__21);
#line 120
c_rt_lib0clear(&___nl__im__22);
#line 120
c_rt_lib0clear(&___nl__im__23);
#line 120
c_rt_lib0clear(&___nl__im__24);
#line 120
c_rt_lib0clear(&___nl__im__25);
#line 120
c_rt_lib0clear(&___nl__im__26);
#line 120
c_rt_lib0clear(&___nl__im__27);
#line 120
return NULL;
}

ImmT  tc_types0vars_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0vars_t");
return tc_types0vars_t();
}
ImmT  tc_types0vars_t() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 125
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(tc_types0var_t0ptr, ___get_global_const(48), ___get_global_const(988)));
#line 125
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 125
c_rt_lib0copy(&___nl__im__3, ___nl__im__2);
#line 125
c_rt_lib0move(&___nl__im__1, ptd0hash(___nl__im__3));
#line 125
c_rt_lib0clear(&___nl__im__2);
#line 125
c_rt_lib0clear(&___nl__im__3);
#line 125
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 125
c_rt_lib0clear(&___nl__im__1);
#line 125
c_rt_lib0clear(&___nl__im__2);
#line 125
c_rt_lib0clear(&___nl__im__3);
#line 125
return ___nl__im__0;
#line 125
c_rt_lib0clear(&___nl__im__0);
#line 125
c_rt_lib0clear(&___nl__im__1);
#line 125
c_rt_lib0clear(&___nl__im__2);
#line 125
c_rt_lib0clear(&___nl__im__3);
#line 125
return NULL;
}

ImmT  tc_types0type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0type");
return tc_types0type();
}
ImmT  tc_types0type() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 129
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tc_types0value_src0ptr, ___get_global_const(48), ___get_global_const(1364)));
#line 129
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 129
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 129
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 129
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(76), ___nl__im__3, ___get_global_const(96), ___nl__im__4));
#line 129
c_rt_lib0clear(&___nl__im__3);
#line 129
c_rt_lib0clear(&___nl__im__4);
#line 129
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 129
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__5));
#line 129
c_rt_lib0clear(&___nl__im__2);
#line 129
c_rt_lib0clear(&___nl__im__3);
#line 129
c_rt_lib0clear(&___nl__im__4);
#line 129
c_rt_lib0clear(&___nl__im__5);
#line 129
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 129
c_rt_lib0clear(&___nl__im__1);
#line 129
c_rt_lib0clear(&___nl__im__2);
#line 129
c_rt_lib0clear(&___nl__im__3);
#line 129
c_rt_lib0clear(&___nl__im__4);
#line 129
c_rt_lib0clear(&___nl__im__5);
#line 129
return ___nl__im__0;
#line 129
c_rt_lib0clear(&___nl__im__0);
#line 129
c_rt_lib0clear(&___nl__im__1);
#line 129
c_rt_lib0clear(&___nl__im__2);
#line 129
c_rt_lib0clear(&___nl__im__3);
#line 129
c_rt_lib0clear(&___nl__im__4);
#line 129
c_rt_lib0clear(&___nl__im__5);
#line 129
return NULL;
}

ImmT  tc_types0value_src0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0value_src");
return tc_types0value_src();
}
ImmT  tc_types0value_src() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 133
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 133
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 133
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 133
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(1308), ___nl__im__3, ___get_global_const(1309), ___nl__im__4, ___get_global_const(1314), ___nl__im__5));
#line 133
c_rt_lib0clear(&___nl__im__3);
#line 133
c_rt_lib0clear(&___nl__im__4);
#line 133
c_rt_lib0clear(&___nl__im__5);
#line 133
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 133
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__6));
#line 133
c_rt_lib0clear(&___nl__im__2);
#line 133
c_rt_lib0clear(&___nl__im__3);
#line 133
c_rt_lib0clear(&___nl__im__4);
#line 133
c_rt_lib0clear(&___nl__im__5);
#line 133
c_rt_lib0clear(&___nl__im__6);
#line 133
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 133
c_rt_lib0clear(&___nl__im__1);
#line 133
c_rt_lib0clear(&___nl__im__2);
#line 133
c_rt_lib0clear(&___nl__im__3);
#line 133
c_rt_lib0clear(&___nl__im__4);
#line 133
c_rt_lib0clear(&___nl__im__5);
#line 133
c_rt_lib0clear(&___nl__im__6);
#line 133
return ___nl__im__0;
#line 133
c_rt_lib0clear(&___nl__im__0);
#line 133
c_rt_lib0clear(&___nl__im__1);
#line 133
c_rt_lib0clear(&___nl__im__2);
#line 133
c_rt_lib0clear(&___nl__im__3);
#line 133
c_rt_lib0clear(&___nl__im__4);
#line 133
c_rt_lib0clear(&___nl__im__5);
#line 133
c_rt_lib0clear(&___nl__im__6);
#line 133
return NULL;
}

ImmT  tc_types0lval_path0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0lval_path");
return tc_types0lval_path();
}
ImmT  tc_types0lval_path() {
tc_types_priv0__const__init();
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
#line 137
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 137
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 137
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 137
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 137
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 137
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(5, ___get_global_const(474), ___nl__im__4, ___get_global_const(377), ___nl__im__5, ___get_global_const(532), ___nl__im__6, ___get_global_const(1365), ___nl__im__7, ___get_global_const(522), ___nl__im__8));
#line 137
c_rt_lib0clear(&___nl__im__4);
#line 137
c_rt_lib0clear(&___nl__im__5);
#line 137
c_rt_lib0clear(&___nl__im__6);
#line 137
c_rt_lib0clear(&___nl__im__7);
#line 137
c_rt_lib0clear(&___nl__im__8);
#line 137
c_rt_lib0copy(&___nl__im__9, ___nl__im__3);
#line 137
c_rt_lib0move(&___nl__im__2, ptd0var(___nl__im__9));
#line 137
c_rt_lib0clear(&___nl__im__3);
#line 137
c_rt_lib0clear(&___nl__im__4);
#line 137
c_rt_lib0clear(&___nl__im__5);
#line 137
c_rt_lib0clear(&___nl__im__6);
#line 137
c_rt_lib0clear(&___nl__im__7);
#line 137
c_rt_lib0clear(&___nl__im__8);
#line 137
c_rt_lib0clear(&___nl__im__9);
#line 137
c_rt_lib0copy(&___nl__im__10, ___nl__im__2);
#line 137
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__10));
#line 137
c_rt_lib0clear(&___nl__im__2);
#line 137
c_rt_lib0clear(&___nl__im__3);
#line 137
c_rt_lib0clear(&___nl__im__4);
#line 137
c_rt_lib0clear(&___nl__im__5);
#line 137
c_rt_lib0clear(&___nl__im__6);
#line 137
c_rt_lib0clear(&___nl__im__7);
#line 137
c_rt_lib0clear(&___nl__im__8);
#line 137
c_rt_lib0clear(&___nl__im__9);
#line 137
c_rt_lib0clear(&___nl__im__10);
#line 137
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 137
c_rt_lib0clear(&___nl__im__1);
#line 137
c_rt_lib0clear(&___nl__im__2);
#line 137
c_rt_lib0clear(&___nl__im__3);
#line 137
c_rt_lib0clear(&___nl__im__4);
#line 137
c_rt_lib0clear(&___nl__im__5);
#line 137
c_rt_lib0clear(&___nl__im__6);
#line 137
c_rt_lib0clear(&___nl__im__7);
#line 137
c_rt_lib0clear(&___nl__im__8);
#line 137
c_rt_lib0clear(&___nl__im__9);
#line 137
c_rt_lib0clear(&___nl__im__10);
#line 137
return ___nl__im__0;
#line 137
c_rt_lib0clear(&___nl__im__0);
#line 137
c_rt_lib0clear(&___nl__im__1);
#line 137
c_rt_lib0clear(&___nl__im__2);
#line 137
c_rt_lib0clear(&___nl__im__3);
#line 137
c_rt_lib0clear(&___nl__im__4);
#line 137
c_rt_lib0clear(&___nl__im__5);
#line 137
c_rt_lib0clear(&___nl__im__6);
#line 137
c_rt_lib0clear(&___nl__im__7);
#line 137
c_rt_lib0clear(&___nl__im__8);
#line 137
c_rt_lib0clear(&___nl__im__9);
#line 137
c_rt_lib0clear(&___nl__im__10);
#line 137
return NULL;
}

ImmT  tc_types0walk_arg0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0walk_arg");
return tc_types0walk_arg();
}
ImmT  tc_types0walk_arg() {
tc_types_priv0__const__init();
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
#line 142
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 142
c_rt_lib0copy(&___nl__im__6, ___nl__im__5);
#line 142
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__6));
#line 142
c_rt_lib0clear(&___nl__im__5);
#line 142
c_rt_lib0clear(&___nl__im__6);
#line 142
c_rt_lib0copy(&___nl__im__7, ___nl__im__4);
#line 142
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__7));
#line 142
c_rt_lib0clear(&___nl__im__4);
#line 142
c_rt_lib0clear(&___nl__im__5);
#line 142
c_rt_lib0clear(&___nl__im__6);
#line 142
c_rt_lib0clear(&___nl__im__7);
#line 143
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(tc_types0errors_t0ptr, ___get_global_const(48), ___get_global_const(989)));
#line 143
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 144
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tc_types0modules_t0ptr, ___get_global_const(48), ___get_global_const(1366)));
#line 144
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 144
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(1367), ___nl__im__3, ___get_global_const(51), ___nl__im__8, ___get_global_const(194), ___nl__im__9));
#line 144
c_rt_lib0clear(&___nl__im__3);
#line 144
c_rt_lib0clear(&___nl__im__4);
#line 144
c_rt_lib0clear(&___nl__im__5);
#line 144
c_rt_lib0clear(&___nl__im__6);
#line 144
c_rt_lib0clear(&___nl__im__7);
#line 144
c_rt_lib0clear(&___nl__im__8);
#line 144
c_rt_lib0clear(&___nl__im__9);
#line 144
c_rt_lib0copy(&___nl__im__10, ___nl__im__2);
#line 144
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__10));
#line 144
c_rt_lib0clear(&___nl__im__2);
#line 144
c_rt_lib0clear(&___nl__im__3);
#line 144
c_rt_lib0clear(&___nl__im__4);
#line 144
c_rt_lib0clear(&___nl__im__5);
#line 144
c_rt_lib0clear(&___nl__im__6);
#line 144
c_rt_lib0clear(&___nl__im__7);
#line 144
c_rt_lib0clear(&___nl__im__8);
#line 144
c_rt_lib0clear(&___nl__im__9);
#line 144
c_rt_lib0clear(&___nl__im__10);
#line 144
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 144
c_rt_lib0clear(&___nl__im__1);
#line 144
c_rt_lib0clear(&___nl__im__2);
#line 144
c_rt_lib0clear(&___nl__im__3);
#line 144
c_rt_lib0clear(&___nl__im__4);
#line 144
c_rt_lib0clear(&___nl__im__5);
#line 144
c_rt_lib0clear(&___nl__im__6);
#line 144
c_rt_lib0clear(&___nl__im__7);
#line 144
c_rt_lib0clear(&___nl__im__8);
#line 144
c_rt_lib0clear(&___nl__im__9);
#line 144
c_rt_lib0clear(&___nl__im__10);
#line 144
return ___nl__im__0;
#line 144
c_rt_lib0clear(&___nl__im__0);
#line 144
c_rt_lib0clear(&___nl__im__1);
#line 144
c_rt_lib0clear(&___nl__im__2);
#line 144
c_rt_lib0clear(&___nl__im__3);
#line 144
c_rt_lib0clear(&___nl__im__4);
#line 144
c_rt_lib0clear(&___nl__im__5);
#line 144
c_rt_lib0clear(&___nl__im__6);
#line 144
c_rt_lib0clear(&___nl__im__7);
#line 144
c_rt_lib0clear(&___nl__im__8);
#line 144
c_rt_lib0clear(&___nl__im__9);
#line 144
c_rt_lib0clear(&___nl__im__10);
#line 144
return NULL;
}

ImmT  tc_types0ref_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0ref_t");
return tc_types0ref_t();
}
ImmT  tc_types0ref_t() {
tc_types_priv0__const__init();
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
#line 150
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 151
c_rt_lib0move(&___nl__im__6, ptd0int());
#line 151
c_rt_lib0copy(&___nl__im__7, ___nl__im__6);
#line 151
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__7));
#line 151
c_rt_lib0clear(&___nl__im__6);
#line 151
c_rt_lib0clear(&___nl__im__7);
#line 151
c_rt_lib0copy(&___nl__im__8, ___nl__im__5);
#line 151
c_rt_lib0move(&___nl__im__4, ptd0hash(___nl__im__8));
#line 151
c_rt_lib0clear(&___nl__im__5);
#line 151
c_rt_lib0clear(&___nl__im__6);
#line 151
c_rt_lib0clear(&___nl__im__7);
#line 151
c_rt_lib0clear(&___nl__im__8);
#line 152
c_rt_lib0move(&___nl__im__11, ptd0int());
#line 152
c_rt_lib0copy(&___nl__im__12, ___nl__im__11);
#line 152
c_rt_lib0move(&___nl__im__10, ptd0arr(___nl__im__12));
#line 152
c_rt_lib0clear(&___nl__im__11);
#line 152
c_rt_lib0clear(&___nl__im__12);
#line 152
c_rt_lib0copy(&___nl__im__13, ___nl__im__10);
#line 152
c_rt_lib0move(&___nl__im__9, ptd0hash(___nl__im__13));
#line 152
c_rt_lib0clear(&___nl__im__10);
#line 152
c_rt_lib0clear(&___nl__im__11);
#line 152
c_rt_lib0clear(&___nl__im__12);
#line 152
c_rt_lib0clear(&___nl__im__13);
#line 153
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(95), ___get_global_const(96)));
#line 153
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__14));
#line 154
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(95), ___get_global_const(96)));
#line 154
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__15));
#line 154
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(5, ___get_global_const(1311), ___nl__im__3, ___get_global_const(239), ___nl__im__4, ___get_global_const(325), ___nl__im__9, ___get_global_const(1312), ___nl__im__14, ___get_global_const(1313), ___nl__im__15));
#line 154
c_rt_lib0clear(&___nl__im__3);
#line 154
c_rt_lib0clear(&___nl__im__4);
#line 154
c_rt_lib0clear(&___nl__im__5);
#line 154
c_rt_lib0clear(&___nl__im__6);
#line 154
c_rt_lib0clear(&___nl__im__7);
#line 154
c_rt_lib0clear(&___nl__im__8);
#line 154
c_rt_lib0clear(&___nl__im__9);
#line 154
c_rt_lib0clear(&___nl__im__10);
#line 154
c_rt_lib0clear(&___nl__im__11);
#line 154
c_rt_lib0clear(&___nl__im__12);
#line 154
c_rt_lib0clear(&___nl__im__13);
#line 154
c_rt_lib0clear(&___nl__im__14);
#line 154
c_rt_lib0clear(&___nl__im__15);
#line 154
c_rt_lib0copy(&___nl__im__16, ___nl__im__2);
#line 154
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__16));
#line 154
c_rt_lib0clear(&___nl__im__2);
#line 154
c_rt_lib0clear(&___nl__im__3);
#line 154
c_rt_lib0clear(&___nl__im__4);
#line 154
c_rt_lib0clear(&___nl__im__5);
#line 154
c_rt_lib0clear(&___nl__im__6);
#line 154
c_rt_lib0clear(&___nl__im__7);
#line 154
c_rt_lib0clear(&___nl__im__8);
#line 154
c_rt_lib0clear(&___nl__im__9);
#line 154
c_rt_lib0clear(&___nl__im__10);
#line 154
c_rt_lib0clear(&___nl__im__11);
#line 154
c_rt_lib0clear(&___nl__im__12);
#line 154
c_rt_lib0clear(&___nl__im__13);
#line 154
c_rt_lib0clear(&___nl__im__14);
#line 154
c_rt_lib0clear(&___nl__im__15);
#line 154
c_rt_lib0clear(&___nl__im__16);
#line 154
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 154
c_rt_lib0clear(&___nl__im__1);
#line 154
c_rt_lib0clear(&___nl__im__2);
#line 154
c_rt_lib0clear(&___nl__im__3);
#line 154
c_rt_lib0clear(&___nl__im__4);
#line 154
c_rt_lib0clear(&___nl__im__5);
#line 154
c_rt_lib0clear(&___nl__im__6);
#line 154
c_rt_lib0clear(&___nl__im__7);
#line 154
c_rt_lib0clear(&___nl__im__8);
#line 154
c_rt_lib0clear(&___nl__im__9);
#line 154
c_rt_lib0clear(&___nl__im__10);
#line 154
c_rt_lib0clear(&___nl__im__11);
#line 154
c_rt_lib0clear(&___nl__im__12);
#line 154
c_rt_lib0clear(&___nl__im__13);
#line 154
c_rt_lib0clear(&___nl__im__14);
#line 154
c_rt_lib0clear(&___nl__im__15);
#line 154
c_rt_lib0clear(&___nl__im__16);
#line 154
return ___nl__im__0;
#line 154
c_rt_lib0clear(&___nl__im__0);
#line 154
c_rt_lib0clear(&___nl__im__1);
#line 154
c_rt_lib0clear(&___nl__im__2);
#line 154
c_rt_lib0clear(&___nl__im__3);
#line 154
c_rt_lib0clear(&___nl__im__4);
#line 154
c_rt_lib0clear(&___nl__im__5);
#line 154
c_rt_lib0clear(&___nl__im__6);
#line 154
c_rt_lib0clear(&___nl__im__7);
#line 154
c_rt_lib0clear(&___nl__im__8);
#line 154
c_rt_lib0clear(&___nl__im__9);
#line 154
c_rt_lib0clear(&___nl__im__10);
#line 154
c_rt_lib0clear(&___nl__im__11);
#line 154
c_rt_lib0clear(&___nl__im__12);
#line 154
c_rt_lib0clear(&___nl__im__13);
#line 154
c_rt_lib0clear(&___nl__im__14);
#line 154
c_rt_lib0clear(&___nl__im__15);
#line 154
c_rt_lib0clear(&___nl__im__16);
#line 154
return NULL;
}

ImmT  tc_types0stack_info_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0stack_info_type");
return tc_types0stack_info_type();
}
ImmT  tc_types0stack_info_type() {
tc_types_priv0__const__init();
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
#line 160
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 161
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 162
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 163
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 164
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 165
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 166
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 167
c_rt_lib0move(&___nl__im__10, ptd0string());
#line 167
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(8, ___get_global_const(1253), ___nl__im__3, ___get_global_const(1174), ___nl__im__4, ___get_global_const(1247), ___nl__im__5, ___get_global_const(1172), ___nl__im__6, ___get_global_const(1248), ___nl__im__7, ___get_global_const(1173), ___nl__im__8, ___get_global_const(1255), ___nl__im__9, ___get_global_const(1176), ___nl__im__10));
#line 167
c_rt_lib0clear(&___nl__im__3);
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
c_rt_lib0copy(&___nl__im__11, ___nl__im__2);
#line 167
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__11));
#line 167
c_rt_lib0clear(&___nl__im__2);
#line 167
c_rt_lib0clear(&___nl__im__3);
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
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 167
c_rt_lib0clear(&___nl__im__1);
#line 167
c_rt_lib0clear(&___nl__im__2);
#line 167
c_rt_lib0clear(&___nl__im__3);
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
return ___nl__im__0;
#line 167
c_rt_lib0clear(&___nl__im__0);
#line 167
c_rt_lib0clear(&___nl__im__1);
#line 167
c_rt_lib0clear(&___nl__im__2);
#line 167
c_rt_lib0clear(&___nl__im__3);
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
return NULL;
}

ImmT  tc_types0check_info0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0check_info");
return tc_types0check_info();
}
ImmT  tc_types0check_info() {
tc_types_priv0__const__init();
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
#line 173
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 175
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 175
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 176
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 176
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 177
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tc_types0stack_info_type0ptr, ___get_global_const(48), ___get_global_const(1368)));
#line 177
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 177
c_rt_lib0copy(&___nl__im__10, ___nl__im__9);
#line 177
c_rt_lib0move(&___nl__im__8, ptd0arr(___nl__im__10));
#line 177
c_rt_lib0clear(&___nl__im__9);
#line 177
c_rt_lib0clear(&___nl__im__10);
#line 177
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(239), ___nl__im__6, ___get_global_const(325), ___nl__im__7, ___get_global_const(898), ___nl__im__8));
#line 177
c_rt_lib0clear(&___nl__im__6);
#line 177
c_rt_lib0clear(&___nl__im__7);
#line 177
c_rt_lib0clear(&___nl__im__8);
#line 177
c_rt_lib0clear(&___nl__im__9);
#line 177
c_rt_lib0clear(&___nl__im__10);
#line 177
c_rt_lib0copy(&___nl__im__11, ___nl__im__5);
#line 177
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__11));
#line 177
c_rt_lib0clear(&___nl__im__5);
#line 177
c_rt_lib0clear(&___nl__im__6);
#line 177
c_rt_lib0clear(&___nl__im__7);
#line 177
c_rt_lib0clear(&___nl__im__8);
#line 177
c_rt_lib0clear(&___nl__im__9);
#line 177
c_rt_lib0clear(&___nl__im__10);
#line 177
c_rt_lib0clear(&___nl__im__11);
#line 177
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(81), ___nl__im__3, ___get_global_const(80), ___nl__im__4));
#line 177
c_rt_lib0clear(&___nl__im__3);
#line 177
c_rt_lib0clear(&___nl__im__4);
#line 177
c_rt_lib0clear(&___nl__im__5);
#line 177
c_rt_lib0clear(&___nl__im__6);
#line 177
c_rt_lib0clear(&___nl__im__7);
#line 177
c_rt_lib0clear(&___nl__im__8);
#line 177
c_rt_lib0clear(&___nl__im__9);
#line 177
c_rt_lib0clear(&___nl__im__10);
#line 177
c_rt_lib0clear(&___nl__im__11);
#line 177
c_rt_lib0copy(&___nl__im__12, ___nl__im__2);
#line 177
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__12));
#line 177
c_rt_lib0clear(&___nl__im__2);
#line 177
c_rt_lib0clear(&___nl__im__3);
#line 177
c_rt_lib0clear(&___nl__im__4);
#line 177
c_rt_lib0clear(&___nl__im__5);
#line 177
c_rt_lib0clear(&___nl__im__6);
#line 177
c_rt_lib0clear(&___nl__im__7);
#line 177
c_rt_lib0clear(&___nl__im__8);
#line 177
c_rt_lib0clear(&___nl__im__9);
#line 177
c_rt_lib0clear(&___nl__im__10);
#line 177
c_rt_lib0clear(&___nl__im__11);
#line 177
c_rt_lib0clear(&___nl__im__12);
#line 177
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 177
c_rt_lib0clear(&___nl__im__1);
#line 177
c_rt_lib0clear(&___nl__im__2);
#line 177
c_rt_lib0clear(&___nl__im__3);
#line 177
c_rt_lib0clear(&___nl__im__4);
#line 177
c_rt_lib0clear(&___nl__im__5);
#line 177
c_rt_lib0clear(&___nl__im__6);
#line 177
c_rt_lib0clear(&___nl__im__7);
#line 177
c_rt_lib0clear(&___nl__im__8);
#line 177
c_rt_lib0clear(&___nl__im__9);
#line 177
c_rt_lib0clear(&___nl__im__10);
#line 177
c_rt_lib0clear(&___nl__im__11);
#line 177
c_rt_lib0clear(&___nl__im__12);
#line 177
return ___nl__im__0;
#line 177
c_rt_lib0clear(&___nl__im__0);
#line 177
c_rt_lib0clear(&___nl__im__1);
#line 177
c_rt_lib0clear(&___nl__im__2);
#line 177
c_rt_lib0clear(&___nl__im__3);
#line 177
c_rt_lib0clear(&___nl__im__4);
#line 177
c_rt_lib0clear(&___nl__im__5);
#line 177
c_rt_lib0clear(&___nl__im__6);
#line 177
c_rt_lib0clear(&___nl__im__7);
#line 177
c_rt_lib0clear(&___nl__im__8);
#line 177
c_rt_lib0clear(&___nl__im__9);
#line 177
c_rt_lib0clear(&___nl__im__10);
#line 177
c_rt_lib0clear(&___nl__im__11);
#line 177
c_rt_lib0clear(&___nl__im__12);
#line 177
return NULL;
}

ImmT  tc_types0special_functions0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0special_functions");
return tc_types0special_functions();
}
ImmT  tc_types0special_functions() {
tc_types_priv0__const__init();
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
#line 183
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(387), ___get_global_const(388)));
#line 183
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 183
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tc_types0fun_arg_t0ptr, ___get_global_const(48), ___get_global_const(1363)));
#line 183
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 183
c_rt_lib0copy(&___nl__im__7, ___nl__im__6);
#line 183
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__7));
#line 183
c_rt_lib0clear(&___nl__im__6);
#line 183
c_rt_lib0clear(&___nl__im__7);
#line 183
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(296), ___nl__im__4, ___get_global_const(1348), ___nl__im__5));
#line 183
c_rt_lib0clear(&___nl__im__4);
#line 183
c_rt_lib0clear(&___nl__im__5);
#line 183
c_rt_lib0clear(&___nl__im__6);
#line 183
c_rt_lib0clear(&___nl__im__7);
#line 183
c_rt_lib0copy(&___nl__im__8, ___nl__im__3);
#line 183
c_rt_lib0move(&___nl__im__2, ptd0rec(___nl__im__8));
#line 183
c_rt_lib0clear(&___nl__im__3);
#line 183
c_rt_lib0clear(&___nl__im__4);
#line 183
c_rt_lib0clear(&___nl__im__5);
#line 183
c_rt_lib0clear(&___nl__im__6);
#line 183
c_rt_lib0clear(&___nl__im__7);
#line 183
c_rt_lib0clear(&___nl__im__8);
#line 183
c_rt_lib0copy(&___nl__im__9, ___nl__im__2);
#line 183
c_rt_lib0move(&___nl__im__1, ptd0hash(___nl__im__9));
#line 183
c_rt_lib0clear(&___nl__im__2);
#line 183
c_rt_lib0clear(&___nl__im__3);
#line 183
c_rt_lib0clear(&___nl__im__4);
#line 183
c_rt_lib0clear(&___nl__im__5);
#line 183
c_rt_lib0clear(&___nl__im__6);
#line 183
c_rt_lib0clear(&___nl__im__7);
#line 183
c_rt_lib0clear(&___nl__im__8);
#line 183
c_rt_lib0clear(&___nl__im__9);
#line 183
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 183
c_rt_lib0clear(&___nl__im__1);
#line 183
c_rt_lib0clear(&___nl__im__2);
#line 183
c_rt_lib0clear(&___nl__im__3);
#line 183
c_rt_lib0clear(&___nl__im__4);
#line 183
c_rt_lib0clear(&___nl__im__5);
#line 183
c_rt_lib0clear(&___nl__im__6);
#line 183
c_rt_lib0clear(&___nl__im__7);
#line 183
c_rt_lib0clear(&___nl__im__8);
#line 183
c_rt_lib0clear(&___nl__im__9);
#line 183
return ___nl__im__0;
#line 183
c_rt_lib0clear(&___nl__im__0);
#line 183
c_rt_lib0clear(&___nl__im__1);
#line 183
c_rt_lib0clear(&___nl__im__2);
#line 183
c_rt_lib0clear(&___nl__im__3);
#line 183
c_rt_lib0clear(&___nl__im__4);
#line 183
c_rt_lib0clear(&___nl__im__5);
#line 183
c_rt_lib0clear(&___nl__im__6);
#line 183
c_rt_lib0clear(&___nl__im__7);
#line 183
c_rt_lib0clear(&___nl__im__8);
#line 183
c_rt_lib0clear(&___nl__im__9);
#line 183
return NULL;
}

tc_types0type0type tc_types0get_default_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0get_default_type");
return tc_types0get_default_type();
}
tc_types0type0type tc_types0get_default_type() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 187
c_rt_lib0move(&___nl__im__2, tct0tct_im());
#line 187
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(1314)));
#line 187
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(96), ___nl__im__2, ___get_global_const(76), ___nl__im__3));
#line 187
c_rt_lib0clear(&___nl__im__2);
#line 187
c_rt_lib0clear(&___nl__im__3);
#line 187
c_rt_lib0copy(&___nl__im__0, ___nl__im__1);
#line 187
c_rt_lib0clear(&___nl__im__1);
#line 187
c_rt_lib0clear(&___nl__im__2);
#line 187
c_rt_lib0clear(&___nl__im__3);
#line 187
return ___nl__im__0;
#line 187
c_rt_lib0clear(&___nl__im__0);
#line 187
c_rt_lib0clear(&___nl__im__1);
#line 187
c_rt_lib0clear(&___nl__im__2);
#line 187
c_rt_lib0clear(&___nl__im__3);
#line 187
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void tc_types_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT tc_types_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT tc_types_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
