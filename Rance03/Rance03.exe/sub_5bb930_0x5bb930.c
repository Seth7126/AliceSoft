// 函数: sub_5bb930
// 地址: 0x5bb930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b39c2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg1[1]
int32_t* edi = arg2
int32_t ecx

if (edi u< result)
    ecx = *arg1

int32_t* ecx_3

if (edi u>= result || ecx u> edi)
    if (result == arg1[2])
        result = sub_5bba10(arg1, 1)
    
    ecx_3 = arg1[1]
    arg2 = ecx_3
    int32_t* var_10_2 = ecx_3
    int32_t var_4_1 = 1
else
    if (result == arg1[2])
        result = sub_5bba10(arg1, 1)
    
    ecx_3 = arg1[1]
    edi = ((edi - ecx) & 0xfffffff0) + *arg1
    arg2 = ecx_3
    int32_t* var_10_1 = ecx_3
    int32_t var_4 = 0

if (ecx_3 != 0)
    *ecx_3 = *edi
    result = sub_453d80(&ecx_3[1], &edi[1])

arg1[1] += 0x10
fsbase->NtTib.ExceptionList = ExceptionList
return result
