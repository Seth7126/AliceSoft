// 函数: sub_5762e0
// 地址: 0x5762e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728322
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[1]
int32_t* edi = arg2

if (edi u< ecx)
    result = *arg1

int32_t* ecx_2

if (edi u>= ecx || result u> edi)
    if (ecx == arg1[2])
        int32_t var_24_3 = ecx
        result = sub_5763a0(arg1)
    
    ecx_2 = arg1[1]
    arg2 = ecx_2
    int32_t* var_14_2 = ecx_2
    int32_t var_8_2 = 1
    
    if (ecx_2 != 0)
        result = sub_4275f0(ecx_2, edi)
else
    if (ecx == arg1[2])
        int32_t var_24_1 = ecx
        sub_5763a0(arg1)
    
    ecx_2 = arg1[1]
    arg2 = ecx_2
    int32_t* var_14_1 = ecx_2
    result = &(*arg1)[(edi - result) s/ 0xc * 3]
    int32_t var_8_1 = 0
    
    if (ecx_2 != 0)
        result = sub_4275f0(ecx_2, result)
arg1[1] = &arg1[1][3]
fsbase->NtTib.ExceptionList = ExceptionList
return result
