// 函数: sub_64e520
// 地址: 0x64e520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 0x80)

if (result != 0)
    uint32_t esi_1 = 0
    int32_t i = result s>> 1
    
    if (i != 0)
        do
            esi_1 += 1
            i s>>= 1
        while (i != 0)
        
        if (esi_1 s> 0xe)
            *(**(arg1 + 0x78) + 0x14) = 0x29
            int32_t* eax_2 = *(arg1 + 0x78)
            (**eax_2)(eax_2)
    
    int32_t edx_1 = *(arg1 + 0x7c)
    uint32_t ecx_2 = esi_1 << 4
    char* eax_4
    
    if (*(arg1 + 0x6c) == 0)
        int32_t edx_2 = *(arg1 + (edx_1 << 2) + 0x3c)
        int32_t eax_5 = sx.d(*(edx_2 + ecx_2 + 0x400))
        eax_4 = sub_64e3c0(eax_5, *(edx_2 + (ecx_2 << 2)), arg1, eax_5)
    else
        eax_4 = *(arg1 + (edx_1 << 2) + 0x5c)
        *(eax_4 + (ecx_2 << 2)) += 1
    
    if (esi_1 != 0)
        eax_4 = sub_64e3c0(eax_4, *(arg1 + 0x80), arg1, esi_1)
    
    int32_t var_c_4 = *(arg1 + 0x84)
    char* edx_5 = *(arg1 + 0x88)
    *(arg1 + 0x80) = 0
    result = sub_64e4f0(eax_4, edx_5, arg1, var_c_4)
    *(arg1 + 0x84) = 0

return result
