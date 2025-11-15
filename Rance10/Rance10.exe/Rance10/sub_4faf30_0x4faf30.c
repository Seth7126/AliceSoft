// 函数: sub_4faf30
// 地址: 0x4faf30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73534c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
int32_t eax_3 = *(arg1 + 4)
int32_t* var_4c = arg2
struct partsengine::CGUIMessageVariable::VTable* const var_40 =
    &partsengine::CGUIMessageVariable::`vftable'
int32_t var_3c = 1
int32_t var_38 = eax_3
int32_t var_34 = 0
char var_30 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 1
int32_t var_58 = 0.d
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
sub_4b9a20(arg2, &var_40, &var_14)
int32_t var_48_1 = 1
var_8_1.b = 0
`eh vector vbase constructor iterator'(&var_40, 0x2c, 1, sub_5038a0)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return arg2
