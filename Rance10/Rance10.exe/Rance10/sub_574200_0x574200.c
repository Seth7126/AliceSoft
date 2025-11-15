// 函数: sub_574200
// 地址: 0x574200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x28)
float xmm1_1 = arg3 f- *(arg1 + 0x20)
int32_t edx = int.d((arg2 f- *(arg1 + 0x18)) * _mm_cvtepi32_ps(zx.o(eax))
    / (*(arg1 + 0x1c) f- *(arg1 + 0x18)))
int32_t ecx =
    int.d(xmm1_1 * _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c))) / (*(arg1 + 0x24) f- *(arg1 + 0x20)))

if (edx s>= 0 && edx s< eax && ecx s>= 0 && ecx s< *(arg1 + 0x2c))
    int32_t ecx_1 = *(arg1 + 0xc)
    int32_t edx_1 = (eax * ecx + edx) * 3
    
    for (int32_t* i = *(ecx_1 + (edx_1 << 2)); i != *(ecx_1 + (edx_1 << 2) + 4); i = &i[1])
        int32_t* result = *i
        float xmm4_1 = result[6]
        float xmm3_4 = result[8]
        
        if (not((arg3 f- result[2]) * (*result - xmm4_1)
                - (arg2 f- *result) * (result[2] f- xmm3_4) f> 0))
            float xmm6_1 = result[3]
            float xmm5_1 = result[5]
            
            if (not((xmm6_1 f- *result) * (arg3 - xmm5_1)
                    - (xmm5_1 f- result[2]) * (arg2 - xmm6_1) f> 0) && (xmm4_1 - xmm6_1) * (arg3 - xmm3_4)
                    - (arg2 - xmm4_1) * (xmm3_4 - xmm5_1) f<= 0)
                return result

return 0
