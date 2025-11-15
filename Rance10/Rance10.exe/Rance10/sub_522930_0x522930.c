// 函数: sub_522930
// 地址: 0x522930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    return arg3

int32_t var_10 = arg2
void* eax_1 = sub_4f15e0(*(arg1 + 0x224))

if (eax_1 != 0)
    int32_t edi_1 = *(eax_1 + 8)
    
    if (arg2 s>= edi_1 && *(eax_1 + 4) + edi_1 s> arg2)
        int32_t eax_2
        eax_2.b = *(*(eax_1 + 0xc) + ((arg2 - edi_1) << 2)) != 0
        
        if (eax_2.b != 0)
            int32_t var_10_1 = arg2
            void* eax_3 = sub_4f15e0(*(arg1 + 0x224))
            int32_t edx_3
            
            if (eax_3 != 0)
                edx_3 = *(eax_3 + 8)
            
            void* const esi_2
            
            if (eax_3 == 0 || arg2 s< edx_3 || *(eax_3 + 4) + edx_3 s<= arg2)
                esi_2 = nullptr
            else
                esi_2 = *(*(eax_3 + 0xc) + ((arg2 - edx_3) << 2))
            
            int32_t eax_8 = (*(**(esi_2 + 0x74) + 0x30))()
            int32_t* ecx_6 = *(esi_2 + 0x74)
            
            if (*(arg1 + 0xc) == 0)
                return (*(*ecx_6 + 0x24))(eax_8)
            
            return (*(*ecx_6 + 0x28))(eax_8)

return arg3
