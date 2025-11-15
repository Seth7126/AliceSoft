// 函数: sub_582530
// 地址: 0x582530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0x220)
void* result

if (ecx != 0)
    int32_t var_8
    int32_t var_4
    sub_59f570(ecx, &var_8, &var_4)
    uint128_t xmm1_1 = zx.o(var_4)
    result = *(arg1 + 0x220)
    int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(var_8))
    int32_t xmm1_2 = _mm_cvtepi32_ps(xmm1_1)
    *(arg1 + 0x17c) = xmm0_2
    *(arg1 + 0x180) = xmm1_2
    int32_t ecx_1 = *(result + 0x10)
    
    if (ecx_1 != 0xffffffff)
        result = *(result + 0x14)
        
        if (result != 0xffffffff)
            *(arg1 + 0x184) = _mm_cvtepi32_ps(zx.o(ecx_1))
            uint128_t result_1 = zx.o(result)
            result.b = 1
            *(arg1 + 0x188) = _mm_cvtepi32_ps(result_1)
            return result
    
    *(arg1 + 0x184) = xmm0_2
    *(arg1 + 0x188) = xmm1_2

result.b = 1
return result
