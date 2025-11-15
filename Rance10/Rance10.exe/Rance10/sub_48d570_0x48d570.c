// 函数: sub_48d570
// 地址: 0x48d570
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = *arg2
void* result = arg2[1]
int32_t esi = 0
uint32_t edi_3 = (result - edx + 3) u>> 2

if (edx u> result)
    edi_3 = 0

if (edi_3 != 0)
    if (edi_3 u>= 8)
        float xmm1_1[0x4] = *(arg1 + 8)
        result = arg1 + 8
        float xmm1_2[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0)
        
        if (edx u> result || edx - 4 + (edi_3 << 2) u< result)
            result = edi_3 & 0xfffffff8
            
            do
                esi += 8
                *edx = _mm_mul_ps(*edx, xmm1_2)
                *(edx + 0x10) = _mm_mul_ps(*(edx + 0x10), xmm1_2)
                edx += 0x20
            while (esi != result)
    
    while (esi != edi_3)
        edx += 4
        esi += 1
        *(edx - 4) = *(arg1 + 8) f* *(edx - 4)

return result
