// 函数: sub_4ed730
// 地址: 0x4ed730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(*(*(arg1 + 0x68) + 0x70) + 0xbc)

if (esi s> 0)
    int32_t var_8_1 = esi
    void* eax_1 = sub_4f15e0(*(arg1 + 0x6c))
    int32_t edx_1
    
    if (eax_1 != 0)
        edx_1 = *(eax_1 + 8)
    
    void* const ecx_2
    
    if (eax_1 == 0 || esi s< edx_1 || *(eax_1 + 4) + edx_1 s<= esi)
        ecx_2 = nullptr
    else
        ecx_2 = *(*(eax_1 + 0xc) + ((esi - edx_1) << 2))
    
    if (ecx_2 != 0)
        jump(*(**(ecx_2 + 0x74) + 0x30))

return 1
