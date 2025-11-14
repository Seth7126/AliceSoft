// 函数: sub_53e7a0
// 地址: 0x53e7a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(arg1 + 0x1d8)
void* result

if (ecx != 0)
    int32_t var_8
    int32_t var_4
    sub_5617e0(ecx, &var_8, &var_4)
    uint128_t xmm1_1 = zx.o(var_4)
    int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(var_8))
    int32_t xmm1_2 = _mm_cvtepi32_ps(xmm1_1)
    *(arg1 + 0x130) = xmm0_2
    *(arg1 + 0x134) = xmm1_2
    result = *(arg1 + 0x1d8)
    int32_t ecx_1 = *(result + 0x20)
    
    if (ecx_1 != 0xffffffff)
        result = *(result + 0x24)
        
        if (result != 0xffffffff)
            *(arg1 + 0x138) = _mm_cvtepi32_ps(zx.o(ecx_1))
            uint128_t result_1 = zx.o(result)
            result.b = 1
            *(arg1 + 0x13c) = _mm_cvtepi32_ps(result_1)
            return result
    
    *(arg1 + 0x138) = xmm0_2
    *(arg1 + 0x13c) = xmm1_2

result.b = 1
return result
