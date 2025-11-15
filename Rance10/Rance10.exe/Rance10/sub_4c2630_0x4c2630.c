// 函数: sub_4c2630
// 地址: 0x4c2630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7330fc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_74 = 0
int32_t var_64 = *(arg1 + 4)
int32_t eax_4 = *(arg1 + 8)
int32_t* var_78 = arg2
struct partsengine::CGUIMessageVariable::VTable* const var_6c =
    &partsengine::CGUIMessageVariable::`vftable'
int32_t var_68 = 1
int32_t var_60 = 0
char var_5c = 0
int32_t var_44 = 0xf
int32_t var_48 = 0
char var_58 = 0
struct partsengine::CGUIMessageVariable::VTable* const var_40 =
    &partsengine::CGUIMessageVariable::`vftable'
int32_t var_3c = 1
int32_t var_38 = eax_4
int32_t var_34 = 0
char var_30 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 1
int32_t var_84 = 0.d
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
sub_4b9a20(arg2, &var_6c, &var_14)
int32_t var_74_1 = 1
var_8_1.b = 0
`eh vector vbase constructor iterator'(&var_6c, 0x2c, 2, sub_5038a0)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return arg2
