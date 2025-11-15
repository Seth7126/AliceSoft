// 函数: sub_4efe00
// 地址: 0x4efe00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(arg1 + 0x11c)

if (esi != 0)
    int32_t var_8_1 = esi
    void* eax_1 = sub_4f15e0(*(arg1 + 0x78))
    
    if (eax_1 != 0)
        int32_t edx_1 = *(eax_1 + 8)
        
        if (esi s>= edx_1 && *(eax_1 + 4) + edx_1 s> esi)
            int32_t result = *(*(eax_1 + 0xc) + ((esi - edx_1) << 2))
            
            if (result != 0)
                if (*(result + 0xab) == 0)
                    return 0
                
                return result

return 0
