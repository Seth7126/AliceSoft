// 函数: sub_69ab80
// 地址: 0x69ab80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7485a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x75) = 1

if (arg3 == 0)
    *(arg1 + 0x70) = 1
    int32_t var_8_1 = 0
    int32_t eax_8 = __Cnd_broadcast(arg1 + 0x44)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8

int32_t edx = *arg2
*arg2 = 0
arg2[1].b = 0
int32_t eax_6 = __Cnd_register_at_thread_exit(arg1 + 0x44, edx, arg1 + 0x70)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
