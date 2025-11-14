// 函数: sub_468c20
// 地址: 0x468c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9278
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_28
int32_t eax_2 = __security_cookie ^ &var_28
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
void* result

if (ecx + arg3 u<= *(arg1 + 8))
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28 = 0
    sub_402110(&var_28, ecx, arg3)
    int32_t var_4 = 0
    char* edx_1 = &var_28
    
    if (var_14_1 u>= 0x10)
        edx_1 = var_28.d
    
    void* ecx_2
    
    if (*edx_1 != 0)
        char* ecx_3 = edx_1
        char i
        
        do
            i = *ecx_3
            ecx_3 = &ecx_3[1]
        while (i != 0)
        ecx_2 = ecx_3 - &ecx_3[1]
    else
        ecx_2 = nullptr
    
    sub_402110(arg2, edx_1, ecx_2)
    
    if (var_14_1 u>= 0x10)
        j__free(var_28.d)
    
    *(arg1 + 4) += arg3
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
