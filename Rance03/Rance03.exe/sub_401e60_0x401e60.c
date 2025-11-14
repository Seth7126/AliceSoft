// 函数: sub_401e60
// 地址: 0x401e60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b29e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
void** edx = arg3
var_30 = 0

if (ecx != 0)
    struct IString::common::CStringWrapper::VTable* const var_2c =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    char var_28 = 0
    int32_t var_4 = 0
    
    if (edx[5] u>= 0x10)
        edx = *edx
    
    char* var_40_2
    
    if ((*(*ecx + 0x9c))(edx, arg4, &var_2c) != 0)
        char* eax_8 = &var_28
        
        if (var_14_1 u>= 0x10)
            eax_8 = var_28.d
        
        var_40_2 = eax_8
    else
        var_40_2 = &data_6d9ff7
    
    sub_401f60(arg2, var_40_2)
    var_2c = &common::CStringWrapper::`vftable'{for `IString'}
    
    if (var_14_1 u>= 0x10)
        j__free(var_28.d)
else
    sub_401f60(arg2, 0x6d9ff6)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return arg2
