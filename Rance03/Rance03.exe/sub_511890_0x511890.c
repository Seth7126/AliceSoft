// 函数: sub_511890
// 地址: 0x511890
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool var_5 = *(arg1 + 0x1c) != 0
sub_414b60(arg2 + 4, &var_5)
sub_468ec0(arg2, 4)

for (int32_t* i = *(arg1 + 0x28); i != *(arg1 + 0x2c); i = &i[1])
    int32_t ecx_3 = (*(**i + 8))()
    int32_t eax_4 = *(arg2 + 8)
    int32_t var_4_1 = ecx_3
    char var_9 = ecx_3.b
    int32_t edx_1
    
    if (&var_9 u< eax_4)
        edx_1 = *(arg2 + 4)
    
    if (&var_9 u>= eax_4 || edx_1 u> &var_9)
        if (eax_4 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
            ecx_3 = var_4_1
        
        char* eax_6 = *(arg2 + 8)
        
        if (eax_6 != 0)
            *eax_6 = ecx_3.b
    else
        if (eax_4 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
            ecx_3 = var_4_1
        
        char* edx_2 = *(arg2 + 8)
        
        if (edx_2 != 0)
            int32_t eax_5
            eax_5.b = *(&var_9 - edx_1 + *(arg2 + 4))
            *edx_2 = eax_5.b
    
    *(arg2 + 8) += 1
    int32_t eax_7 = *(arg2 + 8)
    uint8_t ebx_4 = (ecx_3 u>> 8).b
    uint8_t var_8 = ebx_4
    int32_t edx_3
    
    if (&var_8 u< eax_7)
        edx_3 = *(arg2 + 4)
        ecx_3 = var_4_1
    
    if (&var_8 u>= eax_7 || edx_3 u> &var_8)
        if (eax_7 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
            ecx_3 = var_4_1
        
        uint8_t* eax_9 = *(arg2 + 8)
        
        if (eax_9 != 0)
            *eax_9 = ebx_4
    else
        if (eax_7 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
            ecx_3 = var_4_1
        
        char* edx_4 = *(arg2 + 8)
        
        if (edx_4 != 0)
            int32_t eax_8
            eax_8.b = *(&var_8 - edx_3 + *(arg2 + 4))
            *edx_4 = eax_8.b
    
    *(arg2 + 8) += 1
    int32_t eax_10 = *(arg2 + 8)
    uint8_t ebx_7 = (ecx_3 u>> 0x10).b
    uint8_t var_7 = ebx_7
    int32_t edx_5
    
    if (&var_7 u< eax_10)
        edx_5 = *(arg2 + 4)
        ecx_3 = var_4_1
    
    if (&var_7 u>= eax_10 || edx_5 u> &var_7)
        if (eax_10 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
            ecx_3 = var_4_1
        
        uint8_t* eax_12 = *(arg2 + 8)
        
        if (eax_12 != 0)
            *eax_12 = ebx_7
    else
        if (eax_10 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
            ecx_3 = var_4_1
        
        char* edx_6 = *(arg2 + 8)
        
        if (edx_6 != 0)
            int32_t eax_11
            eax_11.b = *(&var_7 - edx_5 + *(arg2 + 4))
            *edx_6 = eax_11.b
    
    *(arg2 + 8) += 1
    int32_t eax_13 = *(arg2 + 8)
    uint32_t ecx_10 = ecx_3 u>> 0x18
    char var_6 = ecx_10.b
    int32_t edx_7
    
    if (&var_6 u< eax_13)
        edx_7 = *(arg2 + 4)
    
    if (&var_6 u>= eax_13 || edx_7 u> &var_6)
        if (eax_13 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
        
        char* eax_15 = *(arg2 + 8)
        
        if (eax_15 != 0)
            *eax_15 = ecx_10.b
    else
        if (eax_13 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
        
        char* ecx_12 = *(arg2 + 8)
        
        if (ecx_12 != 0)
            int32_t eax_14
            eax_14.b = *(&var_6 - edx_7 + *(arg2 + 4))
            *ecx_12 = eax_14.b
    
    *(arg2 + 8) += 1
    
    if ((*(**i + 0x6c))(arg2) == 0)
        return 0

return 1
