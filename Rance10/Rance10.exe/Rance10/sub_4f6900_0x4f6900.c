// 函数: sub_4f6900
// 地址: 0x4f6900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(data_7fcba4 + 0x1b4)
int32_t var_14 = arg1
void* eax = sub_4f15e0(edi + 0x34)

if (eax != 0)
    int32_t edx_1 = *(eax + 8)
    
    if (arg1 s>= edx_1 && *(eax + 4) + edx_1 s> arg1)
        int32_t eax_1
        eax_1.b = *(*(eax + 0xc) + ((arg1 - edx_1) << 2)) != 0
        
        if (eax_1.b != 0)
            int32_t var_14_1 = arg1
            struct partsengine::CPartsList::VTable** eax_2 = sub_4f14d0(edi + 0x34)
            
            if (eax_2 != 0)
                int32_t edi_1 = eax_2[2]
                
                if (arg1 s>= edi_1 && eax_2[1] + edi_1 s> arg1)
                    int32_t vFunc_0 = eax_2[3][arg1 - edi_1].vFunc_0
                    
                    if (vFunc_0 != 0)
                        return vFunc_0
                    
                    int32_t var_14_2 = arg1
                    return sub_526580(eax_2)

return 0
