// 函数: sub_4d66c0
// 地址: 0x4d66c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x10)
int32_t result

if (esi != 0 && *(esi + 8) == 3)
    int32_t edi_2 = arg2 - *(esi + 0x3c)
    
    if (arg2 - *(esi + 0x3c) s>= 0)
        int32_t eax
        int32_t edx_1
        edx_1:eax = muls.dp.d(0x2aaaaaab, *(esi + 0x48) - *(esi + 0x44))
        int32_t edx_2 = edx_1 s>> 1
        
        if ((edx_2 u>> 0x1f) + edx_2 s> edi_2)
            result = *(esi + 0x44) + edi_2 * 0xc
            
            if (result != 0)
                int32_t ecx_3 = *result
                
                if (ecx_3 != *(result + 4))
                    result.b = *ecx_3 != 0
                    return result

result.b = 0
return result
