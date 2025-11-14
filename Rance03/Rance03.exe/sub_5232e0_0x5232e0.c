// 函数: sub_5232e0
// 地址: 0x5232e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x18) == *(arg1 + 0x1c))
    for (int32_t i = 0; i s< 5; i += 1)
        int32_t eax_3 = (*(*arg2 + 0x54))()
        int32_t ecx_2 = *(arg1 + 0x1c)
        int32_t var_8 = eax_3
        int32_t edx_1
        
        if (&var_8 u< ecx_2)
            edx_1 = *(arg1 + 0x18)
        
        if (&var_8 u>= ecx_2 || edx_1 u> &var_8)
            if (ecx_2 == *(arg1 + 0x20))
                int32_t var_1c_2 = ecx_2
                sub_412f20(arg1 + 0x18)
            
            int32_t* eax_6 = *(arg1 + 0x1c)
            
            if (eax_6 != 0)
                *eax_6 = eax_3
        else
            if (ecx_2 == *(arg1 + 0x20))
                int32_t var_1c_1 = ecx_2
                sub_412f20(arg1 + 0x18)
            
            int32_t* ecx_4 = *(arg1 + 0x1c)
            
            if (ecx_4 != 0)
                *ecx_4 = *(*(arg1 + 0x18) + ((&var_8 - edx_1) s>> 2 << 2))
        
        *(arg1 + 0x1c) += 4
        
        if (*(*(arg1 + 0x18) + ((*(arg1 + 0x1c) - *(arg1 + 0x18)) s>> 2 << 2) - 4) == 0)
            int32_t eax_7
            eax_7.b = 0
            return eax_7

int32_t* eax_8 = *(arg1 + 0x18)
*(arg1 + 0x24) = *eax_8
_memcpy(eax_8, &eax_8[1], (*(arg1 + 0x1c) - &eax_8[1]) & 0xfffffffc)
*(arg1 + 0x1c) -= 4
int32_t ecx_13 = *(arg1 + 0x1c)
int32_t eax_9

if (arg1 + 0x24 u< ecx_13)
    eax_9 = *(arg1 + 0x18)

if (arg1 + 0x24 u>= ecx_13 || eax_9 u> arg1 + 0x24)
    if (ecx_13 == *(arg1 + 0x20))
        int32_t var_1c_5 = ecx_13
        sub_412f20(arg1 + 0x18)
    
    int32_t* ecx_17 = *(arg1 + 0x1c)
    
    if (ecx_17 != 0)
        *ecx_17 = *(arg1 + 0x24)
else
    if (ecx_13 == *(arg1 + 0x20))
        int32_t var_1c_4 = ecx_13
        sub_412f20(arg1 + 0x18)
    
    int32_t* ecx_15 = *(arg1 + 0x1c)
    
    if (ecx_15 != 0)
        *ecx_15 = *(*(arg1 + 0x18) + ((arg1 + 0x24 - eax_9) s>> 2 << 2))
        int32_t eax_11
        eax_11.b = 1
        *(arg1 + 0x1c) += 4
        return eax_11

*(arg1 + 0x1c) += 4
eax_9.b = 1
return eax_9
