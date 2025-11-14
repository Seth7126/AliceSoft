// 函数: sub_4a4ac0
// 地址: 0x4a4ac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc8e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = sub_4bb130(arg1 + 0x6c, arg2, arg3, arg4)

if (result.b != 0)
    int32_t var_4 = 0
    sub_403110(arg3, sub_410930(result, arg2, &var_5c, 0x6e0608), nullptr, 0xffffffff)
    int32_t var_4_1 = 0xffffffff
    int32_t var_48
    
    if (var_48 u>= 0x10)
        j__free(var_5c)
    
    int32_t var_74_2 = (*(**(arg1 + 0x5c) + 0xc))(eax_4)
    int32_t var_44
    int32_t* eax_8 = sub_4691f0(&var_44, 0x6e05d4)
    int32_t var_4_2 = 1
    var_4_2.b = 2
    int32_t* eax_10 = sub_403110(arg3, sub_410b00(eax_8, arg2, &var_5c, eax_8), nullptr, 0xffffffff)
    
    if (var_48 u>= 0x10)
        eax_10 = j__free(var_5c)
    
    int32_t var_4_3 = 0xffffffff
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c.b = 0
    int32_t var_30
    
    if (var_30 u>= 0x10)
        eax_10 = j__free(var_44)
    
    int32_t var_4_4 = 3
    int32_t var_2c
    void* ebx
    ebx.b = (*(**(arg1 + 0x5c) + 0x64))(sub_410930(eax_10, arg2, &var_2c, "*\t"), arg3, arg4).b == 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    result.b = ebx.b == 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
