// 函数: sub_5d1750
// 地址: 0x5d1750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca318
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_38
sub_448e90(&var_38, arg2[1] - *arg2)
int32_t var_4 = 0
int32_t eax_7 = 0
int32_t edx = arg2[1]
char* edi = var_38
int32_t edx_1 = edx - *arg2

if (edx != *arg2)
    do
        char* ecx_1
        ecx_1.b = (*arg2)[eax_7]
        ecx_1.b -= eax_7.b
        ecx_1.b -= 0x60
        edi[eax_7] = ecx_1.b
        eax_7 += 1
    while (eax_7 u< edx_1)

int32_t var_2c
int32_t var_50_1 = var_2c
int32_t var_14 = 0xf
char* result_1 = nullptr
char var_28 = 0
int32_t var_34
sub_488110(&var_28, edi, var_34)
char* result = &var_28

if (arg1 != &var_28)
    if (arg1[5] u>= 0x10)
        j__free(*arg1)
    
    arg1[5] = 0xf
    arg1[4] = 0
    *arg1 = 0
    
    if (var_14 u>= 0x10)
        *arg1 = var_28.d
    label_5d1847:
        result = result_1
        arg1[4] = result
        arg1[5] = var_14
    else
        if (result_1 == 0xffffffff)
            goto label_5d1847
        
        _memcpy(arg1, &var_28, &result_1[1], eax_4)
        result = result_1
        arg1[4] = result
        arg1[5] = var_14
else if (var_14 u>= 0x10)
    result = j__free(var_28.d)

if (edi != 0)
    result = j__free(edi)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
