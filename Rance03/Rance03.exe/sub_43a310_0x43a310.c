// 函数: sub_43a310
// 地址: 0x43a310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6148
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IString::common::CStringWrapper::VTable* const var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg3
int32_t* result

if (arg2 == 0)
label_43a3ba:
    var_2c = &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    char var_28 = 0
    int32_t var_4 = 0
    
    if (esi[5] u>= 0x10)
        esi = *esi
    
    char ebx_1
    
    if (sub_5df150(esi, &var_2c).b != 0)
        int32_t* edx_5 = &var_28
        
        if (var_14_1 u>= 0x10)
            edx_5 = var_28.d
        
        void* ecx_8
        
        if (*edx_5 != 0)
            char* ecx_9 = edx_5
            
            do
                result.b = *ecx_9
                ecx_9 = &ecx_9[1]
            while (result.b != 0)
            
            ecx_8 = ecx_9 - &ecx_9[1]
        else
            ecx_8 = nullptr
        
        sub_402110(0x43a3f2, edx_5, ecx_8)
        ebx_1 = 1
    else
        ebx_1 = 0
    
    var_2c = &common::CStringWrapper::`vftable'{for `IString'}
    
    if (var_14_1 u>= 0x10)
        j__free(var_28.d)
    
    result.b = ebx_1
else
    int32_t* edx_1
    
    if (esi[5] u< 0x10)
        edx_1 = esi
    else
        edx_1 = *esi
    
    int32_t* eax_6 = (*(*arg2 + 0x3c))(edx_1)
    
    if (eax_6 == 0)
        goto label_43a3ba
    
    if ((*(*eax_6 + 4))(eax_4) == 0xc)
        char* edx_3 = (*(*eax_6 + 0x1c))()
        
        if (*edx_3 != 0)
            char* ecx_4 = edx_3
            char* eax_8
            
            do
                eax_8.b = *ecx_4
                ecx_4 = &ecx_4[1]
            while (eax_8.b != 0)
            sub_402110(arg1, edx_3, ecx_4 - &ecx_4[1])
            result.b = 1
        else
            sub_402110(arg1, edx_3, nullptr)
            result.b = 1
    else
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
