// 函数: sub_67a7a0
// 地址: 0x67a7a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = *(arg1 + 0x1c0)
int32_t edi = 0
int32_t i_2 = *(arg1 + 0x5c)
int32_t ebx = *(result + 0x18)

if (arg3 s> 0)
    do
        int32_t i_1 = i_2
        result = *(arg2 + (edi << 2))
        
        if (i_2 != 0)
            int32_t i
            
            do
                uint32_t edx_4 = (zx.d(*(result + 1)) u>> 2 << 5) + (zx.d(*(result + 2)) u>> 3)
                int32_t ecx_4 = *(ebx + (zx.d(*result) u>> 3 << 2))
                int16_t temp0_1 = *(ecx_4 + (edx_4 << 1))
                *(ecx_4 + (edx_4 << 1)) += 1
                int16_t* edx_5 = ecx_4 + (edx_4 << 1)
                ecx_4.w = *edx_5
                
                if (temp0_1 == 0xffff)
                    *edx_5 = ecx_4.w - 1
                
                result += 3
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        edi += 1
    while (edi s< arg3)

return result
