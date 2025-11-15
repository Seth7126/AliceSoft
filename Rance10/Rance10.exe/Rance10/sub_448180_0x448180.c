// 函数: sub_448180
// 地址: 0x448180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ebp = arg2
int32_t edi = 0
void* ebx = arg1 + 0x30
int32_t var_8 = *(arg1 + 4)

while (true)
    int32_t eax_1 = *(arg1 + 8)
    
    if (sub_448920(&arg2, ebp) == 0)
        break
    
    *(arg1 + 0xc) += arg2
    
    if (sub_436bf0(&var_8, ebx, ebp, eax_1, *(arg1 + 0xc) << 3) == 0)
        break
    
    edi += 1
    ebx -= 0xffffff80
    
    if (edi s>= 4)
        int32_t edi_1 = *(arg1 + 8)
        
        if (sub_448a30(&arg2, ebp) != 0)
            *(arg1 + 0x10) += arg2
            
            if (sub_436bf0(&var_8, arg1 + 0x230, ebp, edi_1, *(arg1 + 0x10) << 3) != 0)
                int32_t edi_2 = *(arg1 + 8)
                
                if (sub_448a30(&arg2, ebp) != 0)
                    *(arg1 + 0x14) += arg2
                    
                    if (sub_436bf0(&var_8, arg1 + 0x2b0, ebp, edi_2, *(arg1 + 0x14) << 3) != 0)
                        return 1
        
        break

return 0
