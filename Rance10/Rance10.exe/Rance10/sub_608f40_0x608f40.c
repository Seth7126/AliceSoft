// 函数: sub_608f40
// 地址: 0x608f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742a7f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
int32_t var_28
int32_t __saved_ebp
int32_t* eax_4 = (*(arg1 + 0x24))(&var_28, arg3, arg4, __security_cookie ^ &__saved_ebp)
*arg2 = *eax_4
arg2[1] = eax_4[1]
arg2[2] = eax_4[2]
arg2[3] = eax_4[3]
arg2[4] = eax_4[4]
*eax_4 = 0xffffffff
int32_t var_14_1 = 1
int32_t var_8_1 = 1
sub_601c30(&var_28)

if (sub_6015f0(var_28) != 0)
    void* ecx_6 = data_7fcbb0
    int32_t var_20
    
    if (ecx_6 != 0)
        sub_621db0(ecx_6, var_20)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
