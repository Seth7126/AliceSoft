// 函数: sub_4b9820
// 地址: 0x4b9820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_90 = 0xffffffff
int32_t (* var_94)(void* arg1) = sub_7326fc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIMessageVariable::VTable* const var_8c
int32_t eax_2 = __security_cookie ^ &var_8c
int32_t var_8 = eax_2
int32_t var_ac = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_a0 = 0
int32_t var_84 = *(arg1 + 4)
int32_t var_58 = *(arg1 + 8)
int32_t eax_5 = *(arg1 + 0xc)
int32_t* var_a4 = arg2
var_8c = &partsengine::CGUIMessageVariable::`vftable'
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
int32_t var_30 = 1
int32_t var_2c = eax_5
int32_t var_28 = 0
char var_24 = 0
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
int32_t var_90_1 = 1
int32_t var_b0 = 0.d
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
sub_4b9a20(arg2, &var_8c, &var_8)
int32_t var_a0_1 = 1
var_90_1.b = 0
`eh vector vbase constructor iterator'(&var_8c, 0x2c, 3, sub_5038a0)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_8 ^ &var_8c)
return arg2
