// 函数: sub_5fe900
// 地址: 0x5fe900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct sys43vm::CCallFuncCount::VTable* var_4c
sub_5fe030(&var_4c, arg1)
int32_t var_8_1 = 0

if (arg1 + 8 != arg2 + 8)
    sub_403590(arg1 + 8, arg2 + 8, 0, 0xffffffff)

*(arg1 + 0x20) = *(arg2 + 0x20)
sub_5fe0d0(arg1 + 0x24, arg2 + 0x24)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x34) = *(arg2 + 0x34)
void* var_44

if (arg2 + 8 != &var_44)
    sub_403590(arg2 + 8, &var_44, 0, 0xffffffff)

int32_t var_2c
*(arg2 + 0x20) = var_2c
void var_28
sub_5fe0d0(arg2 + 0x24, &var_28)
int32_t var_1c
*(arg2 + 0x30) = var_1c
int32_t var_18
*(arg2 + 0x34) = var_18
var_4c = &sys43vm::CCallFuncCount::`vftable'
sub_471bb0(&var_28)
int32_t result_1
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_44, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
