// 函数: sub_6a9337
// 地址: 0x6a9337
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_40 = 0x16
void var_20
void* var_44 = &var_20
int32_t var_30[0x4]
sub_6ac299(*arg1, arg1[1], &var_30)
int32_t result
void* eax_3

if (arg2 != 0)
    if (arg3 == 0)
        eax_3 = __errno()
        goto label_6a9375
    
    int32_t ecx_1 = 0xffffffff
    
    if (arg3 != 0xffffffff)
        int32_t eax_4
        eax_4.b = var_30[0] == 0x2d
        int32_t eax_5
        eax_5.b = arg4 s> 0
        ecx_1 = arg3 - eax_4 - eax_5
    
    void* ecx_4
    ecx_4.b = var_30[0] == 0x2d
    void* eax_7
    eax_7.b = arg4 s> 0
    result = __fptostr(eax_7 + ecx_4 + arg2, ecx_1, arg4 + 1, &var_30)
    
    if (result == 0)
        result = __cftoe2_l(arg2, arg3, arg4, arg5, &var_30, 0, arg6)
    else
        *arg2 = 0
else
    eax_3 = __errno()
label_6a9375:
    *eax_3 = 0x16
    __invalid_parameter_noinfo()
    result = 0x16
sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
