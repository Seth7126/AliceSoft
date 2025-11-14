// 函数: sub_5e0070
// 地址: 0x5e0070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b39c2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[1]
char* edi = arg2

if (edi u< ecx)
    result = *arg1

char* ecx_2

if (edi u>= ecx || result u> edi)
    if (ecx == arg1[2])
        int32_t var_20_3 = ecx
        result = sub_5e0130(arg1)
    
    ecx_2 = arg1[1]
    arg2 = ecx_2
    char* var_10_2 = ecx_2
    int32_t var_4_1 = 1
    
    if (ecx_2 != 0)
        result = sub_5e01a0(ecx_2, edi)
else
    if (ecx == arg1[2])
        int32_t var_20_1 = ecx
        sub_5e0130(arg1)
    
    ecx_2 = arg1[1]
    result = &(*arg1)[(edi - result) s/ 0x30 * 0xc]
    arg2 = ecx_2
    char* var_10_1 = ecx_2
    int32_t var_4 = 0
    
    if (ecx_2 != 0)
        result = sub_5e01a0(ecx_2, result)
arg1[1] = &arg1[1][0xc]
fsbase->NtTib.ExceptionList = ExceptionList
return result
