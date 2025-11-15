// 函数: sub_4ee010
// 地址: 0x4ee010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

while (true)
    if (*(arg1 + 0x244) != 0)
        return arg1
    
    void* eax_2 = *(arg1 + 0x7c)
    
    if (eax_2 == 0)
        break
    
    arg1 = eax_2

void* const eax_3 = sub_4ed6f0(arg1)

if (eax_3 != 0)
    while (*(eax_3 + 0x244) == 0)
        int32_t esi_1 = *(*(*(eax_3 + 0x68) + 0x70) + 0xbc)
        
        if (esi_1 s<= 0)
            return nullptr
        
        int32_t var_8_1 = esi_1
        void* eax_4 = sub_4f15e0(*(eax_3 + 0x6c))
        int32_t edx_1
        
        if (eax_4 != 0)
            edx_1 = *(eax_4 + 8)
        
        if (eax_4 == 0 || esi_1 s< edx_1 || *(eax_4 + 4) + edx_1 s<= esi_1)
            eax_3 = nullptr
        else
            eax_3 = *(*(eax_4 + 0xc) + ((esi_1 - edx_1) << 2))
        
        if (eax_3 == 0)
            return eax_3

return eax_3
