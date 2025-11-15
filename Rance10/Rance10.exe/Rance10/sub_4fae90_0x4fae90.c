// 函数: sub_4fae90
// 地址: 0x4fae90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7369b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t esi
int32_t var_14 = esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 0x24)

if (ecx == 0)
    sub_6d090a()
    noreturn

int32_t __saved_ebp
void* arg_4
int32_t result = (*(*ecx + 8))(&arg_4, __security_cookie ^ &__saved_ebp)

if (arg2 u>= 0x10)
    sub_403160(arg_4, arg2 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
