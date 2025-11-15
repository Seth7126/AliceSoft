// 函数: sub_51aa90
// 地址: 0x51aa90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = 0
int32_t ebp_2 = (*(arg1 + 0x48) - *(arg1 + 0x44)) s>> 2
void* result

if (ebp_2 s> 0)
    do
        int32_t edi_1
        
        if (esi s< 0 || (*(arg1 + 0x48) - *(arg1 + 0x44)) s>> 2 s<= esi)
            edi_1 = 0
        else
            edi_1 = *(*(arg1 + 0x44) + (esi << 2))
        
        int32_t var_14_1 = edi_1
        result = sub_4f15e0(*(arg1 + 0x58))
        
        if (result != 0)
            int32_t edx_1 = *(result + 8)
            
            if (edi_1 s>= edx_1 && *(result + 4) + edx_1 s> edi_1)
                void* edi_3 = *(*(result + 0xc) + ((edi_1 - edx_1) << 2))
                
                if (edi_3 != 0)
                    sub_4eec50(edi_3, 1, 1)
                    
                    if (*(*(edi_3 + 0x74) + 0xf1) != 0)
                        result.b = 1
                        return result
        
        esi += 1
    while (esi s< ebp_2)

result.b = 0
return result
