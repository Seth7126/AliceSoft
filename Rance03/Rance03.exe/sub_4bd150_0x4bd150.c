// 函数: sub_4bd150
// 地址: 0x4bd150
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
        result = sub_4bd2a0(arg1, 1)
    
    ecx_3 = arg1[1]
    arg2 = ecx_3
    int32_t* var_10_2 = ecx_3
    int32_t var_4_1 = 1
    
    if (ecx_3 != 0)
        *ecx_3 = *edi
        ecx_3[1] = edi[1]
        result = sub_4bf370(&ecx_3[2], &edi[2])
else
    void* edi_1 = edi - result
    void* edx_1
    edx_1:result = muls.dp.d(0xb21642c9, edi_1)
    
    if (ecx == arg1[2])
        result = sub_4bd2a0(arg1, 1)
    
    ecx_3 = arg1[1]
    arg2 = ecx_3
    int32_t* var_10_1 = ecx_3
    void* edx_5 = &(*arg1)[edi_1 s/ 0x5c * 0x17]
    int32_t var_4 = 0
    
    if (ecx_3 != 0)
        *ecx_3 = *edx_5
        ecx_3[1] = *(edx_5 + 4)
        result = sub_4bf370(&ecx_3[2], edx_5 + 8)
arg1[1] = &arg1[1][0x17]
fsbase->NtTib.ExceptionList = ExceptionList
return result
