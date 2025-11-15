// 函数: sub_4ee0e0
// 地址: 0x4ee0e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(*(*(arg1 + 0x68) + 0x70) + 0xbc)

if (esi s> 0)
    int32_t var_8_1 = esi
    void* eax_1 = sub_4f15e0(*(arg1 + 0x6c))
    
    if (eax_1 != 0)
        int32_t edx_1 = *(eax_1 + 8)
        
        if (esi s>= edx_1 && *(eax_1 + 4) + edx_1 s> esi)
            int32_t result
            result.b = *(*(eax_1 + 0xc) + ((esi - edx_1) << 2)) != 0
            return result

int32_t eax_5
eax_5.b = false
return 0
