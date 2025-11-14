// 函数: sub_5b8630
// 地址: 0x5b8630
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
int32_t* edi = arg2

if (edi u< ecx)
    result = *arg1

int32_t* ecx_3

if (edi u>= ecx || result u> edi)
    if (ecx == arg1[2])
        int32_t var_20_2 = ecx
        result = sub_5b8b10(arg1)
    
    ecx_3 = arg1[1]
    arg2 = ecx_3
    int32_t* var_10_2 = ecx_3
    int32_t var_4_1 = 1
    
    if (ecx_3 != 0)
        *ecx_3 = *edi
        ecx_3[1] = edi[1]
        result = sub_453d80(&ecx_3[2], &edi[2])
else
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x66666667, edi - result)
    int32_t edx_2 = edx_1 s>> 3
    
    if (ecx == arg1[2])
        int32_t var_20_1 = ecx
        sub_5b8b10(arg1)
    
    result = *arg1
    void* edx_3 = &result[((edx_2 u>> 0x1f) + edx_2) * 5]
    ecx_3 = arg1[1]
    arg2 = ecx_3
    int32_t* var_10_1 = ecx_3
    int32_t var_4 = 0
    
    if (ecx_3 != 0)
        *ecx_3 = *edx_3
        ecx_3[1] = *(edx_3 + 4)
        result = sub_453d80(&ecx_3[2], edx_3 + 8)
arg1[1] = &arg1[1][5]
fsbase->NtTib.ExceptionList = ExceptionList
return result
