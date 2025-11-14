// 函数: sub_10015caf
// 地址: 0x10015caf
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_28 = edi
int32_t var_1c = 0x404e
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
int32_t ecx

while (arg2 u> 0)
    int32_t edx_1 = *arg3
    int32_t ebx_1 = arg3[1]
    int32_t var_14_1 = *arg3
    int32_t var_10
    int32_t* edi_1 = &var_10
    void* esi_2 = &arg3[1]
    *edi_1 = *esi_2
    edi_1[1] = *(esi_2 + 4)
    int32_t edi_4 = edx_1 * 2
    int32_t edx_3 = (ebx_1 * 2) | edx_1 u>> 0x1f
    int32_t ecx_5 = (arg3[2] * 2) | ebx_1 u>> 0x1f
    int32_t var_18 = edi_4
    var_18 = 0
    int32_t ecx_7 = (ecx_5 * 2) | edx_3 u>> 0x1f
    int32_t esi_8 = edi_4 * 2
    int32_t edx_5 = (edx_3 * 2) | edi_4 u>> 0x1f
    int32_t edi_6 = esi_8 + var_14_1
    *arg3 = esi_8
    arg3[1] = edx_5
    arg3[2] = ecx_7
    
    if (edi_6 u< esi_8 || edi_6 u< var_14_1)
        var_18 = 1
    
    int32_t ebx_5 = 0
    *arg3 = edi_6
    
    if (var_18 != 0)
        if (edx_5 + 1 u< edx_5 || edx_5 + 1 u< 1)
            ebx_5 = 1
        
        arg3[1] = edx_5 + 1
        
        if (ebx_5 != 0)
            arg3[2] = ecx_7 + 1
    
    int32_t ecx_9 = arg3[1]
    int32_t edx_6 = var_10
    int32_t ebx_6 = ecx_9 + edx_6
    int32_t esi_10 = 0
    
    if (ebx_6 u< ecx_9 || ebx_6 u< edx_6)
        esi_10 = 1
    
    arg3[1] = ebx_6
    
    if (esi_10 != 0)
        arg3[2] += 1
    
    int32_t var_c
    arg3[2] += var_c
    var_18 = 0
    ecx = edi_6 * 2
    int32_t edi_8 = (ebx_6 * 2) | edi_6 u>> 0x1f
    int32_t ebx_8 = (arg3[2] * 2) | ebx_6 u>> 0x1f
    *arg3 = ecx
    arg3[1] = edi_8
    arg3[2] = ebx_8
    int32_t edx_11 = sx.d(*arg1)
    int32_t esi_13 = ecx + edx_11
    int32_t var_14_2 = edx_11
    
    if (esi_13 u< ecx || esi_13 u< edx_11)
        var_18 = 1
    
    bool cond:0_1 = var_18 == 0
    *arg3 = esi_13
    
    if (not(cond:0_1))
        int32_t edx_12 = 0
        
        if (edi_8 + 1 u< edi_8 || edi_8 + 1 u< 1)
            edx_12 = 1
        
        arg3[1] = edi_8 + 1
        
        if (edx_12 != 0)
            arg3[2] = ebx_8 + 1
    
    arg2 -= 1
    arg1 = &arg1[1]

while (arg3[2] == 0)
    int32_t ecx_11 = arg3[1]
    arg3[2] = ecx_11 u>> 0x10
    int32_t edx_15 = *arg3
    var_1c += 0xfff0
    arg3[1] = ecx_11 << 0x10 | edx_15 u>> 0x10
    *arg3 = edx_15 << 0x10

if ((arg3[2] & 0x8000) == 0)
    do
        int32_t esi_14 = *arg3
        int32_t edi_11 = arg3[1]
        var_1c += 0xffff
        *arg3 = esi_14 * 2
        ecx = (arg3[2] * 2) | edi_11 u>> 0x1f
        arg3[1] = (edi_11 * 2) | esi_14 u>> 0x1f
        arg3[2] = ecx
    while ((0x8000 & ecx) == 0)

ecx.w = var_1c.w
*(arg3 + 0xa) = ecx.w
sub_10001d19(eax_1 ^ &__saved_ebp)
return arg3
