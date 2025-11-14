// 函数: sub_6a94f1
// 地址: 0x6a94f1
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t __saved_esi = 0x16
void var_20
void* var_40 = &var_20
int32_t var_30
sub_6ac299(*arg1, arg1[1], &var_30)
int32_t result

if (arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x16
else if (arg3 != 0)
    int32_t ecx_1 = 0xffffffff
    
    if (arg3 != 0xffffffff)
        int32_t eax_5
        eax_5.b = var_30 == 0x2d
        ecx_1 = arg3 - eax_5
    
    void* eax_8
    eax_8.b = var_30 == 0x2d
    int32_t var_2c
    result = __fptostr(eax_8 + arg2, ecx_1, var_2c + arg4, &var_30)
    
    if (result == 0)
        result = sub_6a9405(arg2, arg3, arg4, &var_30, 0, arg5)
    else
        *arg2 = 0
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x16

sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
