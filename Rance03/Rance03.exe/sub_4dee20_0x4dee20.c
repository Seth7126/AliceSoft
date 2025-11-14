// 函数: sub_4dee20
// 地址: 0x4dee20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0058
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_88
int32_t eax_2 = __security_cookie ^ &var_88
int32_t __saved_edi
int32_t var_9c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_402110(&arg1[0x2a], 0x6da5b2, nullptr)
sub_402110(&arg1[0x30], 0x6da5b1, nullptr)
struct partsengine::CCharSpriteProperty::VTable* var_78
sub_4ff2c0(&var_78)
int32_t var_4 = 0
sub_4e0140(arg1, &var_78)
sub_4c8ce0(&var_78)
int32_t eax_7 = sub_4ff540(&var_78)
void* esi_1 = arg1[0x3c]
int32_t* result
int32_t edx
edx:result = sx.q(eax_7)
int32_t ebp_1 = ((edx & 3) + result) s>> 2

while (arg2[4] u> 0)
    result = esi_1 + ebp_1
    
    if (arg3 s<= result)
        if (&arg1[0x30] != arg2)
            result = sub_401ff0(&arg1[0x30], arg2, 0, 0xffffffff)
        
        break
    
    void* var_28
    sub_4dfe60(&var_28, arg2)
    var_4.b = 1
    sub_403110(&arg1[0x2a], &var_28, nullptr, 0xffffffff)
    struct IString::common::CStringWrapper::VTable* const var_44 =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    char var_40 = 0
    sub_401ff0(&var_40, &var_28, 0, 0xffffffff)
    var_4.b = 2
    int32_t var_7c
    result = sub_44cd50(&var_44, &var_7c)
    var_44 = &common::CStringWrapper::`vftable'{for `IString'}
    
    if (var_2c_1 u>= 0x10)
        result = j__free(var_40.d)
    
    esi_1 += var_7c
    var_4.b = 0
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_88)
return result
