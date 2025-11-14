// 函数: sub_1000dae0
// 地址: 0x1000dae0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019138
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg3
int32_t result

if (edi != 0)
    arg3 = arg1 + 0x7c
    EnterCriticalSection(arg1 + 0x7c)
    int32_t var_4 = 0
    
    if (*(arg1 + 0x18) == 0 || arg2 s<= 1)
        *edi = 0
    else
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(arg2)
        uint32_t eax_6
        int32_t edx_2
        eax_6, edx_2 = sub_10012340(arg6, arg7, arg6, arg7, eax_4, edx_1, 0, 0)
        int32_t eax_8
        uint32_t edx_3
        edx_3:eax_8 = sx.q(arg2 - 1)
        *edi = sub_1000da70(__alldiv(arg4 - eax_6, sbb.d(arg5, edx_2, arg4 u< eax_6), eax_8, edx_3))
    
    LeaveCriticalSection(arg1 + 0x7c)
    result = 0
else
    result = 0x80004003

fsbase->NtTib.ExceptionList = ExceptionList
return result
