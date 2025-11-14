// 函数: sub_6a38e0
// 地址: 0x6a38e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0
int32_t edi_2

if (arg2 != 1)
    int32_t eax_39 = arg3 & 0x80000003
    bool cond:1_1 = eax_39 != 0
    
    if (eax_39 s< 0)
        cond:1_1 = ((eax_39 - 1) | 0xfffffffc) != 0xffffffff
    
    int32_t eax_44
    int32_t edx_15
    
    if (not(cond:1_1))
        edx_15:eax_44 = sx.q(arg3)
    
    int32_t eax_47
    int32_t edx_17
    
    if (cond:1_1 || mods.dp.d(edx_15:eax_44, 0x64) == 0)
        edx_17:eax_47 = sx.q(arg3 + 0x76c)
    
    int32_t edi_3
    
    if ((not(cond:1_1) && mods.dp.d(edx_15:eax_44, 0x64) != 0)
            || mods.dp.d(edx_17:eax_47, 0x190) == 0)
        edi_3 = *((arg4 << 2) + &data_74b030)
    else
        edi_3 = *((arg4 << 2) + &data_74affc)
    
    edi_2 = edi_3 + arg7
else
    int32_t eax_1 = arg3 & 0x80000003
    bool cond:2_1 = eax_1 != 0
    
    if (eax_1 s< 0)
        int32_t eax_3 = (eax_1 - 1) | 0xfffffffc
        eax_1 = eax_3 + 1
        cond:2_1 = eax_3 != 0xffffffff
    
    int32_t eax_5
    int32_t edx_1
    
    if (not(cond:2_1))
        edx_1:eax_5 = sx.q(arg3)
    
    int32_t eax_8
    int32_t edx_3
    
    if (cond:2_1 || mods.dp.d(edx_1:eax_5, 0x64) == 0)
        edx_3:eax_8 = sx.q(arg3 + 0x76c)
    
    int32_t eax_11
    int32_t edi
    
    if ((not(cond:2_1) && mods.dp.d(edx_1:eax_5, 0x64) != 0) || mods.dp.d(edx_3:eax_8, 0x190) == 0)
        eax_11 = arg4 << 2
        edi = *(eax_11 + &data_74b030)
    else
        eax_11 = arg4 << 2
        edi = *(eax_11 + &data_74affc)
    
    int32_t eax_20
    int32_t edx_7
    edx_7:eax_20 = sx.q(arg3 - 1)
    int32_t temp1_3 = mods.dp.d(
        sx.q(((eax_20 + (edx_7 & 3)) s>> 2) + edi + 1 + divs.dp.d(sx.q(arg3 + 0x12b), 0x190)
            - divs.dp.d(sx.q(arg3 - 1), 0x64) + arg3 * 0x16d - 0x63db), 
        7)
    int32_t eax_28 = arg5 * 7 - temp1_3
    
    if (temp1_3 s<= arg6)
        eax_28 -= 7
    
    edi_2 = edi + 1 + eax_28 + arg6
    
    if (arg5 == 5)
        int32_t eax_31
        int32_t edx_11
        
        if (eax_1 == 0)
            edx_11:eax_31 = sx.q(arg3)
        
        int32_t eax_34
        int32_t edx_13
        
        if (eax_1 != 0 || mods.dp.d(edx_11:eax_31, 0x64) == 0)
            edx_13:eax_34 = sx.q(arg3 + 0x76c)
        
        int32_t eax_37
        
        if ((eax_1 == 0 && mods.dp.d(edx_11:eax_31, 0x64) != 0)
                || mods.dp.d(edx_13:eax_34, 0x190) == 0)
            eax_37 = *(eax_11 + &data_74b034)
        else
            eax_37 = *(eax_11 + &data_74b000)
        
        if (edi_2 s> eax_37)
            edi_2 -= 7

int32_t result = ((arg8 * 0x3c + arg9) * 0x3c + arg10) * 0x3e8 + arg11

if (arg1 != 1)
    data_74a624 = result
    data_74a620 = edi_2
    
    if (sub_6a3242(&var_8) != 0)
        int32_t var_30
        __builtin_memset(&var_30, 0, 0x14)
        __invoke_watson()
        noreturn
    
    result = var_8 * 0x3e8
    int32_t ecx_5 = data_74a624
    int32_t ecx_6 = ecx_5 + result
    data_74a624 = ecx_6
    
    if (ecx_5 + result s>= 0)
        result = 0x5265c00
        
        if (ecx_6 s>= 0x5265c00)
            data_74a620 += 1
            data_74a624 = ecx_6 - 0x5265c00
    else
        data_74a620 -= 1
        data_74a624 = ecx_6 + 0x5265c00
    
    data_74a61c = arg3
else
    data_74a614 = edi_2
    data_74a618 = result
    data_74a610 = arg3

return result
