// 函数: sub_608ab0
// 地址: 0x608ab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728322
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1[1]
int32_t* edi = arg2
int32_t ecx

if (edi u< result)
    ecx = *arg1

int32_t* ecx_3

if (edi u>= result || ecx u> edi)
    if (result == arg1[2])
        result = sub_606690(arg1, 1)
    
    ecx_3 = arg1[1]
    arg2 = ecx_3
    int32_t* var_14_2 = ecx_3
    int32_t var_8_2 = 1
else
    if (result == arg1[2])
        result = sub_606690(arg1, 1)
    
    ecx_3 = arg1[1]
    edi = ((edi - ecx) & 0xfffffff0) + *arg1
    arg2 = ecx_3
    int32_t* var_14_1 = ecx_3
    int32_t var_8_1 = 0

if (ecx_3 != 0)
    *ecx_3 = *edi
    result = sub_4275f0(&ecx_3[1], &edi[1])

arg1[1] += 0x10
fsbase->NtTib.ExceptionList = ExceptionList
return result
