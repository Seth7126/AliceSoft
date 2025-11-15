// 函数: sub_4edbb0
// 地址: 0x4edbb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(*(*(arg1 + 0x68) + 0x70) + 0xbc)

if (esi s> 0)
    int32_t var_c_1 = esi
    void* eax_2 = sub_4f15e0(*(arg1 + 0x6c))
    int32_t edx_1
    
    if (eax_2 != 0)
        edx_1 = *(eax_2 + 8)
    
    void* const eax_6
    
    if (eax_2 == 0 || esi s< edx_1 || *(eax_2 + 4) + edx_1 s<= esi)
        eax_6 = nullptr
    else
        eax_6 = *(*(eax_2 + 0xc) + ((esi - edx_1) << 2))
    
    if (eax_6 != 0)
        int32_t* ecx_2 = *(eax_6 + 0x74)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 8))(1) s>= 0x10)
            return sub_4ed730(arg1) __tailcall
        
        jump(*(**(arg1 + 0x74) + 0x30))

jump(*(**(arg1 + 0x74) + 0x30))
