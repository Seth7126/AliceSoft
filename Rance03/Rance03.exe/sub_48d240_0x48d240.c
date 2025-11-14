// 函数: sub_48d240
// 地址: 0x48d240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6baff8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char var_4c
sub_402a20(&var_4c, arg2)
int32_t var_c_1 = 0
int32_t var_34
char* eax_5 = sub_402d30(&var_34, &var_4c)
int32_t var_38

if (&var_4c != eax_5)
    if (var_38 u>= 0x10)
        j__free(var_4c.d)
    
    var_38 = 0xf
    int32_t var_3c_1 = 0
    var_4c = 0
    sub_4030b0(&var_4c, eax_5)

int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

struct IInterface::partsengine::CFlatData::VTable** result = sub_48cd10(arg1, &var_4c)

if (result == 0)
    result = sub_48c9a0(arg1, &var_4c)
    
    if (result != 0)
        int32_t var_58 = 0
        int32_t var_54_1 = 0
        int32_t var_50_1 = 0
        var_c_1.b = 1
        char eax_8 = sub_48ce40(arg1, &var_4c, &var_58)
        int32_t ebx
        
        if (eax_8 != 0)
            sub_401f60(&var_34, 0x6da1d7)
            var_c_1.b = 2
            var_c_1.b = 1
            ebx.b = sub_487130(result, &var_34, &var_58) == 0
            
            if (var_20 u>= 0x10)
                j__free(var_34)
        
        if (eax_8 == 0 || ebx.b == 0)
            *sub_427f90(arg1 + 0xc, &var_4c) = result
            (*result)->__offset(0x0).d(eax_4)
        else
            (*result)->__offset(0x4).d(eax_4)
            result = nullptr
        
        int32_t eax_13 = var_58
        
        if (eax_13 != 0)
            j__free(eax_13)

if (var_38 u>= 0x10)
    j__free(var_4c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
