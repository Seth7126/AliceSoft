// 函数: sub_4b96f0
// 地址: 0x4b96f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = *(*(arg1 + 0x60) + 0x70)

if (((*(edx + 0xc4) - *(edx + 0xc0)) & 0xfffffffc) s> 0)
    int32_t esi_1 = **(edx + 0xc0)
    
    if (esi_1 != 0)
        int32_t var_8_1 = esi_1
        void* eax_3 = sub_4f15e0(*(arg1 + 0x64))
        
        if (eax_3 != 0)
            int32_t edx_1 = *(eax_3 + 8)
            
            if (esi_1 s>= edx_1 && *(eax_3 + 4) + edx_1 s> esi_1)
                return *(*(eax_3 + 0xc) + ((esi_1 - edx_1) << 2))

return 0
