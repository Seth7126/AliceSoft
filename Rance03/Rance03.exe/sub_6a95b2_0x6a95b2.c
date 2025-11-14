// 函数: sub_6a95b2
// 地址: 0x6a95b2
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t __saved_esi = 0x16
void var_20
void* var_44 = &var_20
int32_t var_34
sub_6ac299(*arg1, arg1[1], &var_34)
int32_t result

if (arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x16
else if (arg3 != 0)
    void* ecx_1
    ecx_1.b = var_34 == 0x2d
    void* eax_7 = 0xffffffff
    char* ebx_1 = ecx_1 + arg2
    
    if (arg3 != 0xffffffff)
        eax_7 = arg3 - ecx_1
    
    result = __fptostr(ebx_1, eax_7, arg4, &var_34)
    int32_t var_30
    
    if (result != 0)
        *arg2 = 0
    else if (var_30 - 1 s< 0xfffffffc || var_30 - 1 s>= arg4)
        result = __cftoe2_l(arg2, arg3, arg4, arg5, &var_34, 1, arg6)
    else
        if (var_30 - 1 s< var_30 - 1)
            int32_t eax_10
            
            do
                eax_10.b = *ebx_1
                ebx_1 = &ebx_1[1]
            while (eax_10.b != 0)
            
            ebx_1[0xfffffffe] = eax_10.b
        
        result = sub_6a9405(arg2, arg3, arg4, &var_34, 1, arg6)
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x16

sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
