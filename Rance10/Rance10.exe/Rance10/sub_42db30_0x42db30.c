// 函数: sub_42db30
// 地址: 0x42db30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0
void* var_2c
int32_t* eax_4 = sub_425ab0(arg1, &var_2c, arg3)
int32_t var_8_1 = 0
void* const edx = &data_75daa0

if (*(arg1 + 4) == 0)
    edx = &data_75cd61

sub_41a330(0x61, edx, arg2, eax_4)
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
