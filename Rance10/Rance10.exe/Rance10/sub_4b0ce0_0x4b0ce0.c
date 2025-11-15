// 函数: sub_4b0ce0
// 地址: 0x4b0ce0
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

int32_t* ecx_3

if (edi u>= ecx || result u> edi)
    if (ecx == arg1[2])
        result = sub_4b0da0(arg1, 1)
    
    ecx_3 = arg1[1]
    arg2 = ecx_3
    int32_t* var_14_2 = ecx_3
    int32_t var_8_2 = 1
    
    if (ecx_3 != 0)
        result = sub_4275f0(ecx_3, edi)
else
    if (ecx == arg1[2])
        sub_4b0da0(arg1, 1)
    
    result = &(*arg1)[(edi - result) s/ 0xc * 3]
    ecx_3 = arg1[1]
    arg2 = ecx_3
    int32_t* var_14_1 = ecx_3
    int32_t var_8_1 = 0
    
    if (ecx_3 != 0)
        result = sub_4275f0(ecx_3, result)
arg1[1] = &arg1[1][3]
fsbase->NtTib.ExceptionList = ExceptionList
return result
