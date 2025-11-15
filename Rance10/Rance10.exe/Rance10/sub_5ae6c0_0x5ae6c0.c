// 函数: sub_5ae6c0
// 地址: 0x5ae6c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0xec) != 0)
    for (int32_t* i = *arg2; i != arg2[1]; i = &i[1])
        void* ecx = *i
        
        if (*(ecx + 0xc) == *(arg1 + 0x3fc))
            float xmm0_1 = *(arg1 + 0x404)
            float xmm4_2 = *(arg1 + 0x470) f* *(arg1 + 0x108)
            float xmm1_1 = *(arg1 + 0x40c)
            float xmm0_2 = *(arg1 + 0x408)
            float xmm0_4 = *(ecx + 0x3c) - xmm1_1
            *(arg1 + 0x404) = _mm_unpacklo_ps((*(ecx + 0x34) - xmm0_1) * xmm4_2 + xmm0_1, 
                (*(ecx + 0x38) - xmm0_2) * xmm4_2 + xmm0_2)
            *(arg1 + 0x40c) = xmm0_4 * xmm4_2 + xmm1_1
            break

int32_t result = *(arg1 + 0x56c)
int32_t** esi_2 = *(arg1 + 0x568)
int32_t edi_1 = 0
uint32_t ebx_3 = (result - esi_2 + 3) u>> 2

if (esi_2 u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = sub_57bb80(*esi_2, arg2)
        edi_1 += 1
        esi_2 = &esi_2[1]
    while (edi_1 != ebx_3)

return result
