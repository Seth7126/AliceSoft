// 函数: __wcstombs_s_l
// 地址: 0x70bc6f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_10 = edi

if (arg2 == 0)
    if (arg3 != 0)
    label_70bcc0:
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0x16
else if (arg3 == 0)
    goto label_70bcc0

if (arg2 != 0)
    *arg2 = 0

if (arg1 != 0)
    *arg1 = 0

int32_t eax = arg3

if (arg5 u<= arg3)
    eax = arg5

int32_t var_18_1
int32_t* eax_1

if (eax u<= 0x7fffffff)
    int32_t eax_4 = _wcstombs_l_helper(arg2, arg4, eax, arg6)
    
    if (eax_4 == 0xffffffff)
        if (arg2 != 0)
            *arg2 = 0
        
        return *__errno()
    
    int32_t eax_6 = eax_4 + 1
    int32_t ecx_1
    
    if (arg2 == 0)
        ecx_1 = 0
    label_70bd2f:
        
        if (arg1 != 0)
            *arg1 = eax_6
        
        return ecx_1
    
    if (eax_6 u<= arg3)
        ecx_1 = 0
    label_70bd23:
        arg2[eax_6 - 1] = 0
        goto label_70bd2f
    
    if (arg5 == 0xffffffff)
    label_70bd1b:
        eax_6 = arg3
        ecx_1 = 0x50
        goto label_70bd23
    
    *arg2 = 0
    
    if (arg3 u> eax_6)
        goto label_70bd1b
    
    eax_1 = __errno()
    var_18_1 = 0x22
else
    eax_1 = __errno()
    var_18_1 = 0x16

*eax_1 = var_18_1
__invalid_parameter_noinfo()
return var_18_1
