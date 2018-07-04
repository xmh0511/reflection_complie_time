//
// Created by xmh on 18-7-2.
//

#ifndef UNTITLED51_REFLECTION_HPP_HPP
#define UNTITLED51_REFLECTION_HPP_HPP
#include <array>
#include <string>
#include <tuple>
#include <assert.h>
#include <utility>
#define MARCO_EXPAND(...) __VA_ARGS__
#define parmas_place() 200,199,198,197,196,195,194,193,192,191,190,189,188,187,186,185,184,183,182,181,180,179,178,177,176,175,174,173,172,171,170,169,168,167,166,165,164,163,162,161,160,159,158,157,156,155,154,153,152,151,150,149,148,147,146,145,144,143,142,141,140,139,138,137,136,135,134,133,132,131,130,129,128,127,126,125,124,123,122,121,120,119,118,117,116,115,114,113,112,111,110,109,108,107,106,105,104,103,102,101,100,99,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define get_args_(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92,_93,_94,_95,_96,_97,_98,_99,_100,_101,_102,_103,_104,_105,_106,_107,_108,_109,_110,_111,_112,_113,_114,_115,_116,_117,_118,_119,_120,_121,_122,_123,_124,_125,_126,_127,_128,_129,_130,_131,_132,_133,_134,_135,_136,_137,_138,_139,_140,_141,_142,_143,_144,_145,_146,_147,_148,_149,_150,_151,_152,_153,_154,_155,_156,_157,_158,_159,_160,_161,_162,_163,_164,_165,_166,_167,_168,_169,_170,_171,_172,_173,_174,_175,_176,_177,_178,_179,_180,_181,_182,_183,_184,_185,_186,_187,_188,_189,_190,_191,_192,_193,_194,_195,_196,_197,_198,_199,_200,N,...) N
#define get_args_count_help(...) get_args_(__VA_ARGS__)
#define get_args_count(...) get_args_count_help(__VA_ARGS__,parmas_place())

#define concat_A_B_help(A,B) A##_##B
#define concat_A_B(A,B) concat_A_B_help(A,B)

#define create_member_addr_1(STRUCT_NAME,element,...) &STRUCT_NAME::element
#define create_member_addr_2(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_1(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_3(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_2(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_4(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_3(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_5(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_4(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_6(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_5(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_7(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_6(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_8(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_7(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_9(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_8(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_10(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_9(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_11(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_10(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_12(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_11(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_13(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_12(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_14(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_13(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_15(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_14(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_16(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_15(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_17(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_16(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_18(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_17(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_19(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_18(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_20(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_19(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_21(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_20(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_22(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_21(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_23(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_22(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_24(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_23(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_25(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_24(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_26(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_25(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_27(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_26(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_28(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_27(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_29(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_28(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_30(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_29(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_31(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_30(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_32(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_31(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_33(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_32(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_34(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_33(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_35(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_34(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_36(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_35(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_37(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_36(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_38(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_37(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_39(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_38(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_40(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_39(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_41(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_40(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_42(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_41(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_43(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_42(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_44(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_43(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_45(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_44(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_46(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_45(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_47(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_46(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_48(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_47(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_49(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_48(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_50(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_49(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_51(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_50(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_52(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_51(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_53(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_52(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_54(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_53(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_55(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_54(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_56(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_55(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_57(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_56(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_58(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_57(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_59(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_58(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_60(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_59(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_61(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_60(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_62(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_61(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_63(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_62(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_64(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_63(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_65(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_64(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_66(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_65(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_67(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_66(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_68(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_67(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_69(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_68(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_70(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_69(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_71(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_70(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_72(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_71(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_73(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_72(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_74(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_73(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_75(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_74(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_76(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_75(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_77(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_76(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_78(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_77(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_79(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_78(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_80(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_79(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_81(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_80(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_82(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_81(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_83(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_82(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_84(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_83(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_85(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_84(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_86(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_85(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_87(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_86(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_88(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_87(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_89(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_88(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_90(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_89(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_91(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_90(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_92(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_91(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_93(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_92(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_94(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_93(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_95(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_94(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_96(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_95(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_97(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_96(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_98(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_97(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_99(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_98(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_100(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_99(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_101(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_100(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_102(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_101(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_103(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_102(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_104(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_103(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_105(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_104(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_106(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_105(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_107(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_106(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_108(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_107(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_109(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_108(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_110(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_109(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_111(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_110(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_112(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_111(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_113(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_112(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_114(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_113(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_115(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_114(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_116(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_115(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_117(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_116(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_118(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_117(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_119(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_118(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_120(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_119(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_121(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_120(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_122(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_121(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_123(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_122(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_124(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_123(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_125(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_124(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_126(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_125(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_127(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_126(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_128(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_127(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_129(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_128(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_130(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_129(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_131(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_130(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_132(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_131(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_133(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_132(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_134(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_133(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_135(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_134(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_136(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_135(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_137(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_136(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_138(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_137(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_139(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_138(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_140(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_139(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_141(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_140(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_142(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_141(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_143(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_142(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_144(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_143(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_145(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_144(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_146(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_145(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_147(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_146(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_148(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_147(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_149(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_148(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_150(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_149(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_151(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_150(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_152(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_151(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_153(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_152(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_154(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_153(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_155(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_154(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_156(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_155(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_157(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_156(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_158(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_157(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_159(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_158(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_160(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_159(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_161(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_160(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_162(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_161(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_163(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_162(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_164(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_163(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_165(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_164(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_166(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_165(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_167(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_166(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_168(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_167(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_169(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_168(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_170(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_169(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_171(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_170(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_172(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_171(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_173(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_172(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_174(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_173(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_175(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_174(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_176(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_175(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_177(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_176(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_178(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_177(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_179(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_178(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_180(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_179(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_181(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_180(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_182(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_181(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_183(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_182(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_184(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_183(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_185(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_184(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_186(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_185(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_187(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_186(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_188(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_187(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_189(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_188(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_190(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_189(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_191(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_190(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_192(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_191(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_193(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_192(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_194(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_193(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_195(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_194(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_196(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_195(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_197(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_196(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_198(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_197(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_199(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_198(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_200(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_199(STRUCT_NAME,__VA_ARGS__))

#define create_member_str_1(element,...) std::string(#element)
#define create_member_str_2(element,...) std::string(#element),MARCO_EXPAND(create_member_str_1(__VA_ARGS__))
#define create_member_str_3(element,...) std::string(#element),MARCO_EXPAND(create_member_str_2(__VA_ARGS__))
#define create_member_str_4(element,...) std::string(#element),MARCO_EXPAND(create_member_str_3(__VA_ARGS__))
#define create_member_str_5(element,...) std::string(#element),MARCO_EXPAND(create_member_str_4(__VA_ARGS__))
#define create_member_str_6(element,...) std::string(#element),MARCO_EXPAND(create_member_str_5(__VA_ARGS__))
#define create_member_str_7(element,...) std::string(#element),MARCO_EXPAND(create_member_str_6(__VA_ARGS__))
#define create_member_str_8(element,...) std::string(#element),MARCO_EXPAND(create_member_str_7(__VA_ARGS__))
#define create_member_str_9(element,...) std::string(#element),MARCO_EXPAND(create_member_str_8(__VA_ARGS__))
#define create_member_str_10(element,...) std::string(#element),MARCO_EXPAND(create_member_str_9(__VA_ARGS__))
#define create_member_str_11(element,...) std::string(#element),MARCO_EXPAND(create_member_str_10(__VA_ARGS__))
#define create_member_str_12(element,...) std::string(#element),MARCO_EXPAND(create_member_str_11(__VA_ARGS__))
#define create_member_str_13(element,...) std::string(#element),MARCO_EXPAND(create_member_str_12(__VA_ARGS__))
#define create_member_str_14(element,...) std::string(#element),MARCO_EXPAND(create_member_str_13(__VA_ARGS__))
#define create_member_str_15(element,...) std::string(#element),MARCO_EXPAND(create_member_str_14(__VA_ARGS__))
#define create_member_str_16(element,...) std::string(#element),MARCO_EXPAND(create_member_str_15(__VA_ARGS__))
#define create_member_str_17(element,...) std::string(#element),MARCO_EXPAND(create_member_str_16(__VA_ARGS__))
#define create_member_str_18(element,...) std::string(#element),MARCO_EXPAND(create_member_str_17(__VA_ARGS__))
#define create_member_str_19(element,...) std::string(#element),MARCO_EXPAND(create_member_str_18(__VA_ARGS__))
#define create_member_str_20(element,...) std::string(#element),MARCO_EXPAND(create_member_str_19(__VA_ARGS__))
#define create_member_str_21(element,...) std::string(#element),MARCO_EXPAND(create_member_str_20(__VA_ARGS__))
#define create_member_str_22(element,...) std::string(#element),MARCO_EXPAND(create_member_str_21(__VA_ARGS__))
#define create_member_str_23(element,...) std::string(#element),MARCO_EXPAND(create_member_str_22(__VA_ARGS__))
#define create_member_str_24(element,...) std::string(#element),MARCO_EXPAND(create_member_str_23(__VA_ARGS__))
#define create_member_str_25(element,...) std::string(#element),MARCO_EXPAND(create_member_str_24(__VA_ARGS__))
#define create_member_str_26(element,...) std::string(#element),MARCO_EXPAND(create_member_str_25(__VA_ARGS__))
#define create_member_str_27(element,...) std::string(#element),MARCO_EXPAND(create_member_str_26(__VA_ARGS__))
#define create_member_str_28(element,...) std::string(#element),MARCO_EXPAND(create_member_str_27(__VA_ARGS__))
#define create_member_str_29(element,...) std::string(#element),MARCO_EXPAND(create_member_str_28(__VA_ARGS__))
#define create_member_str_30(element,...) std::string(#element),MARCO_EXPAND(create_member_str_29(__VA_ARGS__))
#define create_member_str_31(element,...) std::string(#element),MARCO_EXPAND(create_member_str_30(__VA_ARGS__))
#define create_member_str_32(element,...) std::string(#element),MARCO_EXPAND(create_member_str_31(__VA_ARGS__))
#define create_member_str_33(element,...) std::string(#element),MARCO_EXPAND(create_member_str_32(__VA_ARGS__))
#define create_member_str_34(element,...) std::string(#element),MARCO_EXPAND(create_member_str_33(__VA_ARGS__))
#define create_member_str_35(element,...) std::string(#element),MARCO_EXPAND(create_member_str_34(__VA_ARGS__))
#define create_member_str_36(element,...) std::string(#element),MARCO_EXPAND(create_member_str_35(__VA_ARGS__))
#define create_member_str_37(element,...) std::string(#element),MARCO_EXPAND(create_member_str_36(__VA_ARGS__))
#define create_member_str_38(element,...) std::string(#element),MARCO_EXPAND(create_member_str_37(__VA_ARGS__))
#define create_member_str_39(element,...) std::string(#element),MARCO_EXPAND(create_member_str_38(__VA_ARGS__))
#define create_member_str_40(element,...) std::string(#element),MARCO_EXPAND(create_member_str_39(__VA_ARGS__))
#define create_member_str_41(element,...) std::string(#element),MARCO_EXPAND(create_member_str_40(__VA_ARGS__))
#define create_member_str_42(element,...) std::string(#element),MARCO_EXPAND(create_member_str_41(__VA_ARGS__))
#define create_member_str_43(element,...) std::string(#element),MARCO_EXPAND(create_member_str_42(__VA_ARGS__))
#define create_member_str_44(element,...) std::string(#element),MARCO_EXPAND(create_member_str_43(__VA_ARGS__))
#define create_member_str_45(element,...) std::string(#element),MARCO_EXPAND(create_member_str_44(__VA_ARGS__))
#define create_member_str_46(element,...) std::string(#element),MARCO_EXPAND(create_member_str_45(__VA_ARGS__))
#define create_member_str_47(element,...) std::string(#element),MARCO_EXPAND(create_member_str_46(__VA_ARGS__))
#define create_member_str_48(element,...) std::string(#element),MARCO_EXPAND(create_member_str_47(__VA_ARGS__))
#define create_member_str_49(element,...) std::string(#element),MARCO_EXPAND(create_member_str_48(__VA_ARGS__))
#define create_member_str_50(element,...) std::string(#element),MARCO_EXPAND(create_member_str_49(__VA_ARGS__))
#define create_member_str_51(element,...) std::string(#element),MARCO_EXPAND(create_member_str_50(__VA_ARGS__))
#define create_member_str_52(element,...) std::string(#element),MARCO_EXPAND(create_member_str_51(__VA_ARGS__))
#define create_member_str_53(element,...) std::string(#element),MARCO_EXPAND(create_member_str_52(__VA_ARGS__))
#define create_member_str_54(element,...) std::string(#element),MARCO_EXPAND(create_member_str_53(__VA_ARGS__))
#define create_member_str_55(element,...) std::string(#element),MARCO_EXPAND(create_member_str_54(__VA_ARGS__))
#define create_member_str_56(element,...) std::string(#element),MARCO_EXPAND(create_member_str_55(__VA_ARGS__))
#define create_member_str_57(element,...) std::string(#element),MARCO_EXPAND(create_member_str_56(__VA_ARGS__))
#define create_member_str_58(element,...) std::string(#element),MARCO_EXPAND(create_member_str_57(__VA_ARGS__))
#define create_member_str_59(element,...) std::string(#element),MARCO_EXPAND(create_member_str_58(__VA_ARGS__))
#define create_member_str_60(element,...) std::string(#element),MARCO_EXPAND(create_member_str_59(__VA_ARGS__))
#define create_member_str_61(element,...) std::string(#element),MARCO_EXPAND(create_member_str_60(__VA_ARGS__))
#define create_member_str_62(element,...) std::string(#element),MARCO_EXPAND(create_member_str_61(__VA_ARGS__))
#define create_member_str_63(element,...) std::string(#element),MARCO_EXPAND(create_member_str_62(__VA_ARGS__))
#define create_member_str_64(element,...) std::string(#element),MARCO_EXPAND(create_member_str_63(__VA_ARGS__))
#define create_member_str_65(element,...) std::string(#element),MARCO_EXPAND(create_member_str_64(__VA_ARGS__))
#define create_member_str_66(element,...) std::string(#element),MARCO_EXPAND(create_member_str_65(__VA_ARGS__))
#define create_member_str_67(element,...) std::string(#element),MARCO_EXPAND(create_member_str_66(__VA_ARGS__))
#define create_member_str_68(element,...) std::string(#element),MARCO_EXPAND(create_member_str_67(__VA_ARGS__))
#define create_member_str_69(element,...) std::string(#element),MARCO_EXPAND(create_member_str_68(__VA_ARGS__))
#define create_member_str_70(element,...) std::string(#element),MARCO_EXPAND(create_member_str_69(__VA_ARGS__))
#define create_member_str_71(element,...) std::string(#element),MARCO_EXPAND(create_member_str_70(__VA_ARGS__))
#define create_member_str_72(element,...) std::string(#element),MARCO_EXPAND(create_member_str_71(__VA_ARGS__))
#define create_member_str_73(element,...) std::string(#element),MARCO_EXPAND(create_member_str_72(__VA_ARGS__))
#define create_member_str_74(element,...) std::string(#element),MARCO_EXPAND(create_member_str_73(__VA_ARGS__))
#define create_member_str_75(element,...) std::string(#element),MARCO_EXPAND(create_member_str_74(__VA_ARGS__))
#define create_member_str_76(element,...) std::string(#element),MARCO_EXPAND(create_member_str_75(__VA_ARGS__))
#define create_member_str_77(element,...) std::string(#element),MARCO_EXPAND(create_member_str_76(__VA_ARGS__))
#define create_member_str_78(element,...) std::string(#element),MARCO_EXPAND(create_member_str_77(__VA_ARGS__))
#define create_member_str_79(element,...) std::string(#element),MARCO_EXPAND(create_member_str_78(__VA_ARGS__))
#define create_member_str_80(element,...) std::string(#element),MARCO_EXPAND(create_member_str_79(__VA_ARGS__))
#define create_member_str_81(element,...) std::string(#element),MARCO_EXPAND(create_member_str_80(__VA_ARGS__))
#define create_member_str_82(element,...) std::string(#element),MARCO_EXPAND(create_member_str_81(__VA_ARGS__))
#define create_member_str_83(element,...) std::string(#element),MARCO_EXPAND(create_member_str_82(__VA_ARGS__))
#define create_member_str_84(element,...) std::string(#element),MARCO_EXPAND(create_member_str_83(__VA_ARGS__))
#define create_member_str_85(element,...) std::string(#element),MARCO_EXPAND(create_member_str_84(__VA_ARGS__))
#define create_member_str_86(element,...) std::string(#element),MARCO_EXPAND(create_member_str_85(__VA_ARGS__))
#define create_member_str_87(element,...) std::string(#element),MARCO_EXPAND(create_member_str_86(__VA_ARGS__))
#define create_member_str_88(element,...) std::string(#element),MARCO_EXPAND(create_member_str_87(__VA_ARGS__))
#define create_member_str_89(element,...) std::string(#element),MARCO_EXPAND(create_member_str_88(__VA_ARGS__))
#define create_member_str_90(element,...) std::string(#element),MARCO_EXPAND(create_member_str_89(__VA_ARGS__))
#define create_member_str_91(element,...) std::string(#element),MARCO_EXPAND(create_member_str_90(__VA_ARGS__))
#define create_member_str_92(element,...) std::string(#element),MARCO_EXPAND(create_member_str_91(__VA_ARGS__))
#define create_member_str_93(element,...) std::string(#element),MARCO_EXPAND(create_member_str_92(__VA_ARGS__))
#define create_member_str_94(element,...) std::string(#element),MARCO_EXPAND(create_member_str_93(__VA_ARGS__))
#define create_member_str_95(element,...) std::string(#element),MARCO_EXPAND(create_member_str_94(__VA_ARGS__))
#define create_member_str_96(element,...) std::string(#element),MARCO_EXPAND(create_member_str_95(__VA_ARGS__))
#define create_member_str_97(element,...) std::string(#element),MARCO_EXPAND(create_member_str_96(__VA_ARGS__))
#define create_member_str_98(element,...) std::string(#element),MARCO_EXPAND(create_member_str_97(__VA_ARGS__))
#define create_member_str_99(element,...) std::string(#element),MARCO_EXPAND(create_member_str_98(__VA_ARGS__))
#define create_member_str_100(element,...) std::string(#element),MARCO_EXPAND(create_member_str_99(__VA_ARGS__))
#define create_member_str_101(element,...) std::string(#element),MARCO_EXPAND(create_member_str_100(__VA_ARGS__))
#define create_member_str_102(element,...) std::string(#element),MARCO_EXPAND(create_member_str_101(__VA_ARGS__))
#define create_member_str_103(element,...) std::string(#element),MARCO_EXPAND(create_member_str_102(__VA_ARGS__))
#define create_member_str_104(element,...) std::string(#element),MARCO_EXPAND(create_member_str_103(__VA_ARGS__))
#define create_member_str_105(element,...) std::string(#element),MARCO_EXPAND(create_member_str_104(__VA_ARGS__))
#define create_member_str_106(element,...) std::string(#element),MARCO_EXPAND(create_member_str_105(__VA_ARGS__))
#define create_member_str_107(element,...) std::string(#element),MARCO_EXPAND(create_member_str_106(__VA_ARGS__))
#define create_member_str_108(element,...) std::string(#element),MARCO_EXPAND(create_member_str_107(__VA_ARGS__))
#define create_member_str_109(element,...) std::string(#element),MARCO_EXPAND(create_member_str_108(__VA_ARGS__))
#define create_member_str_110(element,...) std::string(#element),MARCO_EXPAND(create_member_str_109(__VA_ARGS__))
#define create_member_str_111(element,...) std::string(#element),MARCO_EXPAND(create_member_str_110(__VA_ARGS__))
#define create_member_str_112(element,...) std::string(#element),MARCO_EXPAND(create_member_str_111(__VA_ARGS__))
#define create_member_str_113(element,...) std::string(#element),MARCO_EXPAND(create_member_str_112(__VA_ARGS__))
#define create_member_str_114(element,...) std::string(#element),MARCO_EXPAND(create_member_str_113(__VA_ARGS__))
#define create_member_str_115(element,...) std::string(#element),MARCO_EXPAND(create_member_str_114(__VA_ARGS__))
#define create_member_str_116(element,...) std::string(#element),MARCO_EXPAND(create_member_str_115(__VA_ARGS__))
#define create_member_str_117(element,...) std::string(#element),MARCO_EXPAND(create_member_str_116(__VA_ARGS__))
#define create_member_str_118(element,...) std::string(#element),MARCO_EXPAND(create_member_str_117(__VA_ARGS__))
#define create_member_str_119(element,...) std::string(#element),MARCO_EXPAND(create_member_str_118(__VA_ARGS__))
#define create_member_str_120(element,...) std::string(#element),MARCO_EXPAND(create_member_str_119(__VA_ARGS__))
#define create_member_str_121(element,...) std::string(#element),MARCO_EXPAND(create_member_str_120(__VA_ARGS__))
#define create_member_str_122(element,...) std::string(#element),MARCO_EXPAND(create_member_str_121(__VA_ARGS__))
#define create_member_str_123(element,...) std::string(#element),MARCO_EXPAND(create_member_str_122(__VA_ARGS__))
#define create_member_str_124(element,...) std::string(#element),MARCO_EXPAND(create_member_str_123(__VA_ARGS__))
#define create_member_str_125(element,...) std::string(#element),MARCO_EXPAND(create_member_str_124(__VA_ARGS__))
#define create_member_str_126(element,...) std::string(#element),MARCO_EXPAND(create_member_str_125(__VA_ARGS__))
#define create_member_str_127(element,...) std::string(#element),MARCO_EXPAND(create_member_str_126(__VA_ARGS__))
#define create_member_str_128(element,...) std::string(#element),MARCO_EXPAND(create_member_str_127(__VA_ARGS__))
#define create_member_str_129(element,...) std::string(#element),MARCO_EXPAND(create_member_str_128(__VA_ARGS__))
#define create_member_str_130(element,...) std::string(#element),MARCO_EXPAND(create_member_str_129(__VA_ARGS__))
#define create_member_str_131(element,...) std::string(#element),MARCO_EXPAND(create_member_str_130(__VA_ARGS__))
#define create_member_str_132(element,...) std::string(#element),MARCO_EXPAND(create_member_str_131(__VA_ARGS__))
#define create_member_str_133(element,...) std::string(#element),MARCO_EXPAND(create_member_str_132(__VA_ARGS__))
#define create_member_str_134(element,...) std::string(#element),MARCO_EXPAND(create_member_str_133(__VA_ARGS__))
#define create_member_str_135(element,...) std::string(#element),MARCO_EXPAND(create_member_str_134(__VA_ARGS__))
#define create_member_str_136(element,...) std::string(#element),MARCO_EXPAND(create_member_str_135(__VA_ARGS__))
#define create_member_str_137(element,...) std::string(#element),MARCO_EXPAND(create_member_str_136(__VA_ARGS__))
#define create_member_str_138(element,...) std::string(#element),MARCO_EXPAND(create_member_str_137(__VA_ARGS__))
#define create_member_str_139(element,...) std::string(#element),MARCO_EXPAND(create_member_str_138(__VA_ARGS__))
#define create_member_str_140(element,...) std::string(#element),MARCO_EXPAND(create_member_str_139(__VA_ARGS__))
#define create_member_str_141(element,...) std::string(#element),MARCO_EXPAND(create_member_str_140(__VA_ARGS__))
#define create_member_str_142(element,...) std::string(#element),MARCO_EXPAND(create_member_str_141(__VA_ARGS__))
#define create_member_str_143(element,...) std::string(#element),MARCO_EXPAND(create_member_str_142(__VA_ARGS__))
#define create_member_str_144(element,...) std::string(#element),MARCO_EXPAND(create_member_str_143(__VA_ARGS__))
#define create_member_str_145(element,...) std::string(#element),MARCO_EXPAND(create_member_str_144(__VA_ARGS__))
#define create_member_str_146(element,...) std::string(#element),MARCO_EXPAND(create_member_str_145(__VA_ARGS__))
#define create_member_str_147(element,...) std::string(#element),MARCO_EXPAND(create_member_str_146(__VA_ARGS__))
#define create_member_str_148(element,...) std::string(#element),MARCO_EXPAND(create_member_str_147(__VA_ARGS__))
#define create_member_str_149(element,...) std::string(#element),MARCO_EXPAND(create_member_str_148(__VA_ARGS__))
#define create_member_str_150(element,...) std::string(#element),MARCO_EXPAND(create_member_str_149(__VA_ARGS__))
#define create_member_str_151(element,...) std::string(#element),MARCO_EXPAND(create_member_str_150(__VA_ARGS__))
#define create_member_str_152(element,...) std::string(#element),MARCO_EXPAND(create_member_str_151(__VA_ARGS__))
#define create_member_str_153(element,...) std::string(#element),MARCO_EXPAND(create_member_str_152(__VA_ARGS__))
#define create_member_str_154(element,...) std::string(#element),MARCO_EXPAND(create_member_str_153(__VA_ARGS__))
#define create_member_str_155(element,...) std::string(#element),MARCO_EXPAND(create_member_str_154(__VA_ARGS__))
#define create_member_str_156(element,...) std::string(#element),MARCO_EXPAND(create_member_str_155(__VA_ARGS__))
#define create_member_str_157(element,...) std::string(#element),MARCO_EXPAND(create_member_str_156(__VA_ARGS__))
#define create_member_str_158(element,...) std::string(#element),MARCO_EXPAND(create_member_str_157(__VA_ARGS__))
#define create_member_str_159(element,...) std::string(#element),MARCO_EXPAND(create_member_str_158(__VA_ARGS__))
#define create_member_str_160(element,...) std::string(#element),MARCO_EXPAND(create_member_str_159(__VA_ARGS__))
#define create_member_str_161(element,...) std::string(#element),MARCO_EXPAND(create_member_str_160(__VA_ARGS__))
#define create_member_str_162(element,...) std::string(#element),MARCO_EXPAND(create_member_str_161(__VA_ARGS__))
#define create_member_str_163(element,...) std::string(#element),MARCO_EXPAND(create_member_str_162(__VA_ARGS__))
#define create_member_str_164(element,...) std::string(#element),MARCO_EXPAND(create_member_str_163(__VA_ARGS__))
#define create_member_str_165(element,...) std::string(#element),MARCO_EXPAND(create_member_str_164(__VA_ARGS__))
#define create_member_str_166(element,...) std::string(#element),MARCO_EXPAND(create_member_str_165(__VA_ARGS__))
#define create_member_str_167(element,...) std::string(#element),MARCO_EXPAND(create_member_str_166(__VA_ARGS__))
#define create_member_str_168(element,...) std::string(#element),MARCO_EXPAND(create_member_str_167(__VA_ARGS__))
#define create_member_str_169(element,...) std::string(#element),MARCO_EXPAND(create_member_str_168(__VA_ARGS__))
#define create_member_str_170(element,...) std::string(#element),MARCO_EXPAND(create_member_str_169(__VA_ARGS__))
#define create_member_str_171(element,...) std::string(#element),MARCO_EXPAND(create_member_str_170(__VA_ARGS__))
#define create_member_str_172(element,...) std::string(#element),MARCO_EXPAND(create_member_str_171(__VA_ARGS__))
#define create_member_str_173(element,...) std::string(#element),MARCO_EXPAND(create_member_str_172(__VA_ARGS__))
#define create_member_str_174(element,...) std::string(#element),MARCO_EXPAND(create_member_str_173(__VA_ARGS__))
#define create_member_str_175(element,...) std::string(#element),MARCO_EXPAND(create_member_str_174(__VA_ARGS__))
#define create_member_str_176(element,...) std::string(#element),MARCO_EXPAND(create_member_str_175(__VA_ARGS__))
#define create_member_str_177(element,...) std::string(#element),MARCO_EXPAND(create_member_str_176(__VA_ARGS__))
#define create_member_str_178(element,...) std::string(#element),MARCO_EXPAND(create_member_str_177(__VA_ARGS__))
#define create_member_str_179(element,...) std::string(#element),MARCO_EXPAND(create_member_str_178(__VA_ARGS__))
#define create_member_str_180(element,...) std::string(#element),MARCO_EXPAND(create_member_str_179(__VA_ARGS__))
#define create_member_str_181(element,...) std::string(#element),MARCO_EXPAND(create_member_str_180(__VA_ARGS__))
#define create_member_str_182(element,...) std::string(#element),MARCO_EXPAND(create_member_str_181(__VA_ARGS__))
#define create_member_str_183(element,...) std::string(#element),MARCO_EXPAND(create_member_str_182(__VA_ARGS__))
#define create_member_str_184(element,...) std::string(#element),MARCO_EXPAND(create_member_str_183(__VA_ARGS__))
#define create_member_str_185(element,...) std::string(#element),MARCO_EXPAND(create_member_str_184(__VA_ARGS__))
#define create_member_str_186(element,...) std::string(#element),MARCO_EXPAND(create_member_str_185(__VA_ARGS__))
#define create_member_str_187(element,...) std::string(#element),MARCO_EXPAND(create_member_str_186(__VA_ARGS__))
#define create_member_str_188(element,...) std::string(#element),MARCO_EXPAND(create_member_str_187(__VA_ARGS__))
#define create_member_str_189(element,...) std::string(#element),MARCO_EXPAND(create_member_str_188(__VA_ARGS__))
#define create_member_str_190(element,...) std::string(#element),MARCO_EXPAND(create_member_str_189(__VA_ARGS__))
#define create_member_str_191(element,...) std::string(#element),MARCO_EXPAND(create_member_str_190(__VA_ARGS__))
#define create_member_str_192(element,...) std::string(#element),MARCO_EXPAND(create_member_str_191(__VA_ARGS__))
#define create_member_str_193(element,...) std::string(#element),MARCO_EXPAND(create_member_str_192(__VA_ARGS__))
#define create_member_str_194(element,...) std::string(#element),MARCO_EXPAND(create_member_str_193(__VA_ARGS__))
#define create_member_str_195(element,...) std::string(#element),MARCO_EXPAND(create_member_str_194(__VA_ARGS__))
#define create_member_str_196(element,...) std::string(#element),MARCO_EXPAND(create_member_str_195(__VA_ARGS__))
#define create_member_str_197(element,...) std::string(#element),MARCO_EXPAND(create_member_str_196(__VA_ARGS__))
#define create_member_str_198(element,...) std::string(#element),MARCO_EXPAND(create_member_str_197(__VA_ARGS__))
#define create_member_str_199(element,...) std::string(#element),MARCO_EXPAND(create_member_str_198(__VA_ARGS__))
#define create_member_str_200(element,...) std::string(#element),MARCO_EXPAND(create_member_str_199(__VA_ARGS__))

#define reflection(STRUCT_NAME,...) \
static std::array<std::string,get_args_count(__VA_ARGS__)> STRUCT_NAME##_##arr = {concat_A_B(create_member_str,get_args_count(__VA_ARGS__))(__VA_ARGS__)}; \
inline auto reflect_function(const STRUCT_NAME&) \
{ \
    struct struct_meta_info_ \
    { \
           auto get_member_addr() \
           { \
                 return  std::make_tuple(concat_A_B(create_member_addr,get_args_count(__VA_ARGS__))(STRUCT_NAME,__VA_ARGS__));            \
           } \
                     \
           auto get_member_str_arr() \
           { \
                return  STRUCT_NAME##_##arr;           \
           }               \
    }; \
    return struct_meta_info_{}; \
}

template<typename T>
struct is_a_class_point:std::false_type
{

};
template<typename T>
struct is_a_class_point<T*>:std::true_type
{

};

template<typename T>
struct remove_ref_and_point
{
    using type = T;
};
template<typename T>
struct remove_ref_and_point<T*>
{
    using type = typename remove_ref_and_point<T>::type;
};

template<typename T>
struct remove_ref_and_point<T&>
{
    using type = typename remove_ref_and_point<T>::type;
};
template<typename T,typename U = void>
struct has_reflect
{
    static const bool value = false;
};

template<typename T>
struct has_reflect<T,std::void_t<decltype(reflect_function(std::declval<T>()))>>
{
    static const bool value = true;
};

template<typename Class,typename F>
std::enable_if_t<has_reflect<typename remove_ref_and_point<Class>::type>::value,void> get_member(Class&& obj,const std::string& member_name,F&& lambda)
{
     auto meta_info = reflect_function(typename remove_ref_and_point<Class>::type{});
      auto members_str = meta_info.get_member_str_arr();
     for(int i=0;i<members_str.size();i++){
         if(members_str[i] == member_name){
             each_tuple(i,meta_info.get_member_addr(),std::forward<F>(lambda));
             break;
         }
     }
}
template<typename Class,typename F>
std::enable_if_t<!has_reflect<typename remove_ref_and_point<Class>::type>::value,void> get_member(Class&& obj,const std::string& member_name,F&& lambda)
{
    static_assert(has_reflect<typename remove_ref_and_point<Class>::type>::value,"not a reflection type");
};

template<int Index,typename F,typename T,std::size_t First,std::size_t...inter_quence>
void dynamic_each_tuple(int find_index,const std::tuple<T>& tuple,std::index_sequence<First,inter_quence...>&&,F&& lambda)
{
    if(find_index==Index)
    {
        lambda(std::get<First>(tuple));
    }
};

template<int Index,typename F,typename T,typename...Args,std::size_t First,std::size_t...inter_quence>
void dynamic_each_tuple(int find_index,const std::tuple<T,Args...>& tuple,std::index_sequence<First,inter_quence...>&&,F&& lambda)
{
    if(find_index==Index)
    {
        lambda(std::get<0>(tuple));
    }
    dynamic_each_tuple<Index+1>(find_index,std::tuple<Args...>(std::get<inter_quence>(tuple)...),std::make_index_sequence<sizeof...(Args)>{},std::forward<F>(lambda));
}

template<typename Tuple,typename F>
void each_tuple(int find_index,const Tuple& t,F&& lambda)
{
    dynamic_each_tuple<0>(find_index,t,std::make_index_sequence<std::tuple_size<Tuple>::value>{},std::forward<F>(lambda));
};

template<typename T,typename F>
std::enable_if_t<!is_a_class_point<T>::value> get_member_from_t(T&& t,const std::string& name,F&& function)
{
    get_member(std::forward<T>(t),name,[&t,lambda = std::move(function)](auto offset){
        lambda((t.*offset));
    });
};

template<typename T,typename F>
std::enable_if_t<is_a_class_point<T>::value> get_member_from_t(T&& t,const std::string& name,F&& function)
{
    get_member(std::forward<T>(t),name,[&t,lambda = std::move(function)](auto offset){
        lambda((t->*offset));
    });
};
#endif //UNTITLED51_REFLECTION_HPP_HPP
