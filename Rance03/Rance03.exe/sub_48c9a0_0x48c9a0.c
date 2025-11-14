// 函数: sub_48c9a0
// 地址: 0x48c9a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bae40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CFlatData::VTable** result_2

if (*(arg1 + 8) != 0)
    int32_t var_44
    char* eax_5 = sub_48c5b0(&var_44, arg2)
    int32_t var_4 = 0
    
    if (*(arg1 + 8) != 0)
        result_2 = sub_48cb80(eax_5)
    else
        result_2 = nullptr
    
    int32_t var_4_1 = 0xffffffff
    int32_t var_30
    
    if (var_30 u>= 0x10)
        j__free(var_44)

struct IInterface::partsengine::CFlatData::VTable** result

if (*(arg1 + 8) == 0 || result_2 == 0)
    result = sub_48caa0(arg1, arg2)
    
    if (result == 0)
        struct IInterface::partsengine::CFlatData::VTable** result_1
        
        if (*(arg1 + 8) != result.b)
            int32_t var_2c
            void** eax_7 = sub_48c450(&var_2c, arg2)
            int32_t var_4_2 = 1
            
            if (*(arg1 + 8) != 0)
                result_1 = sub_48cb80(eax_7)
            else
                result_1 = nullptr
            
            int32_t var_18
            
            if (var_18 u>= 0x10)
                j__free(var_2c)
        
        if (*(arg1 + 8) == result.b || result_1 == 0)
            result = nullptr
        else
            result = result_1
else
    result = result_2

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
