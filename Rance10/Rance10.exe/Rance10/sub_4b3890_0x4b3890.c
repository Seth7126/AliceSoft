// 函数: sub_4b3890
// 地址: 0x4b3890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx_5 = *(arg1 + 0x158)
int32_t esi = *(*(*(ecx_5 + 0x68) + 0x70) + 0xbc)

if (esi s> 0)
    int32_t var_8_1 = esi
    void* eax_2 = sub_4f15e0(*(ecx_5 + 0x6c))
    int32_t edx_1
    
    if (eax_2 != 0)
        edx_1 = *(eax_2 + 8)
    
    void* const esi_2
    
    if (eax_2 == 0 || esi s< edx_1 || *(eax_2 + 4) + edx_1 s<= esi)
        esi_2 = nullptr
    else
        esi_2 = *(*(eax_2 + 0xc) + ((esi - edx_1) << 2))
    
    if (esi_2 != 0)
        int32_t* ecx_2 = *(esi_2 + 0x74)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 8))(1) == 0xe)
            return sub_4efb00(esi_2) __tailcall

return 0
