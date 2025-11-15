// 函数: sub_525180
// 地址: 0x525180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_e8 = 0xffffffff
int32_t (* var_ec)(void* arg1) = sub_73964c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIMessageVariable::VTable* const var_e4
int32_t eax_2 = __security_cookie ^ &var_e4
int32_t var_8 = eax_2
int32_t var_104 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_f8 = 0
int32_t var_dc = *(arg1 + 4)
int32_t var_b0 = *(arg1 + 8)
int32_t var_84 = *(arg1 + 0xc)
int32_t var_58 = *(arg1 + 0x10)
int32_t eax_6
eax_6.b = *(arg1 + 0x14)
int32_t* var_fc = arg2
var_e4 = &partsengine::CGUIMessageVariable::`vftable'
int32_t var_e0 = 1
int32_t var_d8 = 0
char var_d4 = 0
int32_t var_bc = 0xf
int32_t var_c0 = 0
char var_d0 = 0
struct partsengine::CGUIMessageVariable::VTable* const var_b8 =
    &partsengine::CGUIMessageVariable::`vftable'
int32_t var_b4 = 1
int32_t var_ac = 0
char var_a8 = 0
int32_t var_90 = 0xf
int32_t var_94 = 0
char var_a4 = 0
struct partsengine::CGUIMessageVariable::VTable* const var_8c =
    &partsengine::CGUIMessageVariable::`vftable'
int32_t var_88 = 1
int32_t var_80 = 0
char var_7c = 0
int32_t var_64 = 0xf
int32_t var_68 = 0
char var_78 = 0
struct partsengine::CGUIMessageVariable::VTable* const var_60 =
    &partsengine::CGUIMessageVariable::`vftable'
int32_t var_5c = 1
int32_t var_54 = 0
char var_50 = 0
int32_t var_38 = 0xf
int32_t var_3c = 0
char var_4c = 0
struct partsengine::CGUIMessageVariable::VTable* const var_34 =
    &partsengine::CGUIMessageVariable::`vftable'
int32_t var_30 = 3
int32_t var_2c = 0
int32_t var_28 = 0
char var_24 = eax_6.b
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
int32_t var_e8_1 = 1
int32_t var_108 = 0.d
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
sub_4b9a20(arg2, &var_e4, &var_8)
int32_t var_f8_1 = 1
var_e8_1.b = 0
`eh vector vbase constructor iterator'(&var_e4, 0x2c, 5, sub_5038a0)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_8 ^ &var_e4)
return arg2
