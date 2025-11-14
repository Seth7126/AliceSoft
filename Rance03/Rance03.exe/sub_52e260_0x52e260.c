// 函数: sub_52e260
// 地址: 0x52e260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 0x1c)

if (i != *(arg1 + 0x20))
    int32_t ebx_1 = 0
    int32_t ebp_1 = 0
    
    for (; i != *(arg1 + 0x20); i = &i[1])
        void* esi_1 = *i
        int32_t ecx_1 = *(esi_1 + 0xc) + *(esi_1 + 0x14)
        
        if (ebx_1 s< ecx_1)
            ebx_1 = ecx_1
        
        int32_t ecx_3 = *(esi_1 + 0x10) + *(esi_1 + 0x18)
        
        if (ebp_1 s< ecx_3)
            ebp_1 = ecx_3
    
    int32_t ecx_4 = 1
    
    if (ebx_1 s> 1)
        do
            ecx_4 *= 2
        while (ecx_4 s< ebx_1)
    
    int32_t eax = 1
    
    if (ebp_1 s> 1)
        do
            eax *= 2
        while (eax s< ebp_1)
    
    if (*(arg1 + 4) s> ecx_4)
        *(arg1 + 4) = ecx_4
    
    if (*(arg1 + 8) s> eax)
        *(arg1 + 8) = eax
    
    int32_t ebx_2 = *(arg1 + 0x14)
    
    for (int32_t* i_1 = *(arg1 + 0x10); i_1 != ebx_2; i_1 = &i_1[5])
        (**i_1)(0)
    
    i = *(arg1 + 0x10)
    *(arg1 + 0x14) = i

return i
