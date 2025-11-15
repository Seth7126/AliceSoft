// 函数: sub_4ed8c0
// 地址: 0x4ed8c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(*(*(arg1 + 0x68) + 0x70) + 0xbc)

if (esi s> 0)
    int32_t var_c_1 = esi
    void* eax_2 = sub_4f15e0(*(arg1 + 0x6c))
    int32_t edx_1
    
    if (eax_2 != 0)
        edx_1 = *(eax_2 + 8)
    
    int32_t ecx_2
    
    if (eax_2 == 0 || esi s< edx_1 || *(eax_2 + 4) + edx_1 s<= esi)
        ecx_2 = 0
    else
        ecx_2 = *(*(eax_2 + 0xc) + ((esi - edx_1) << 2))
    
    if (ecx_2 != 0)
        int32_t eax_6 = sub_4ed8c0()
        return *(arg1 + 0x98) + eax_6

return *(arg1 + 0x98)
