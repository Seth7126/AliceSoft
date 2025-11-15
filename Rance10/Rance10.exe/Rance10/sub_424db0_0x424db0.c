// 函数: sub_424db0
// 地址: 0x424db0
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
char* edi = arg2

if (edi u< ecx)
    result = *arg1

if (edi u>= ecx || result u> edi)
    if (ecx == arg1[2])
        result = sub_4170d0(arg1, 1)
    
    char* ecx_3 = arg1[1]
    arg2 = ecx_3
    char* var_14_2 = ecx_3
    int32_t var_8_2 = 1
    
    if (ecx_3 != 0)
        int32_t var_24_2 = 0xffffffff
        int32_t var_28_2 = 0
        *(ecx_3 + 0x14) = 0xf
        *(ecx_3 + 0x10) = 0
        *ecx_3 = 0
        result = sub_403590(ecx_3, edi, 0, 0xffffffff)
else
    if (ecx == arg1[2])
        sub_4170d0(arg1, 1)
    
    char* edx_3 = arg1[1]
    arg2 = edx_3
    char* var_14_1 = edx_3
    result = &(*arg1)[(edi - result) s/ 0x18 * 6]
    int32_t var_8_1 = 0
    
    if (edx_3 != 0)
        int32_t var_24_1 = 0xffffffff
        int32_t var_28_1 = 0
        *(edx_3 + 0x14) = 0xf
        *(edx_3 + 0x10) = 0
        *edx_3 = 0
        result = sub_403590(edx_3, result, 0, 0xffffffff)

arg1[1] = &arg1[1][6]
fsbase->NtTib.ExceptionList = ExceptionList
return result
