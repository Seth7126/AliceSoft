// 函数: sub_645930
// 地址: 0x645930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* var_18 = &var_4
int32_t ebp_1 = 0xff
int32_t esi = 0xfe
int32_t edi = 0xffffff
int32_t eax_2 = int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0xc) + 0xfe)) * arg2)

if (eax_2 - 0xfe s< 0)
    esi = eax_2

void* edx = nullptr

if (eax_2 - 0xfe s>= 0)
    edx = eax_2 - 0xfe

int32_t ecx_1 = *(arg1 + 0xc)

if (esi s< 0xfe)
    ebp_1 = esi

int32_t ebp_3 = ebp_1 << 0x18 | 0xffffff

if (edx + esi s> ecx_1)
    esi = ecx_1 - edx
    edi = not.d(esi << 0x18)

int32_t* ecx_2 = *(arg1 + 0x18)
void* result

if (ecx_2 != 0)
    result = (*(*ecx_2 + 0x18))()
    
    if (result != 0)
        int32_t edx_1 = *(arg1 + 8)
        
        if (*(arg1 + 0x44) == 0)
            int32_t ecx_5 = *(arg1 + 0xc)
            float xmm3_4 = _mm_cvtepi32_ps(zx.o(ecx_5))
            float xmm1_1 = 1f / xmm3_4
            int32_t xmm7_4 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10) + edx_1))
            float xmm2_4 = _mm_cvtepi32_ps(zx.o(edx))
            float xmm5_4 = xmm3_4 - xmm2_4
            float xmm0_6 = _mm_cvtepi32_ps(zx.o(edx + esi))
            *(result + 8) = 0x3f000000
            *(result + 0xc) = 0x3f800000
            *(result + 4) = xmm7_4
            int32_t xmm4_4 = _mm_cvtepi32_ps(zx.o(ecx_5 - edx - esi))
            float xmm3_5 = 1f - xmm0_6 * xmm1_1
            *result = xmm4_4
            float xmm6_3 = 1f - xmm2_4 * xmm1_1
            *(result + 0x10) = edi
            *(result + 0x18) = 0x3f800000
            int32_t xmm1_3 = _mm_cvtepi32_ps(zx.o(edx_1))
            *(result + 0x14) = xmm3_5
            *(result + 0x1c) = xmm4_4
            *(result + 0x20) = xmm1_3
            *(result + 0x24) = 0x3f000000
            *(result + 0x28) = 0x3f800000
            *(result + 0x2c) = edi
            *(result + 0x30) = xmm3_5
            *(result + 0x34) = 0
            *(result + 0x38) = xmm5_4
            *(result + 0x3c) = xmm7_4
            *(result + 0x40) = 0x3f000000
            *(result + 0x44) = 0x3f800000
            *(result + 0x48) = ebp_3
            *(result + 0x4c) = xmm6_3
            *(result + 0x50) = 0x3f800000
            *(result + 0x54) = xmm5_4
            *(result + 0x58) = xmm1_3
            *(result + 0x5c) = 0x3f000000
            *(result + 0x60) = 0x3f800000
            *(result + 0x64) = ebp_3
            *(result + 0x68) = xmm6_3
            *(result + 0x6c) = 0
            *(result + 0x74) = xmm7_4
            *(result + 0x78) = 0x3f000000
            *(result + 0x7c) = 0x3f800000
            int32_t xmm0_9 = _mm_cvtepi32_ps(zx.o(ecx_5))
            *(result + 0x70) = xmm0_9
            *(result + 0x80) = 0xffffffff
            *(result + 0x84) = 0x3f800000
            *(result + 0x88) = 0x3f800000
            *(result + 0x8c) = xmm0_9
            *(result + 0x90) = xmm1_3
            *(result + 0x94) = 0x3f000000
            *(result + 0x98) = 0x3f800000
            *(result + 0x9c) = 0xffffffff
            result += 0xa0
            *result = 0x3f800000
        else
            int32_t ecx_4 = *(arg1 + 0x10) + edx_1
            float xmm1 = 1f / _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc)))
            int32_t xmm5_2 = _mm_cvtepi32_ps(zx.o(ecx_4))
            float xmm3_2 = _mm_cvtepi32_ps(zx.o(edx))
            int32_t xmm7_2 = _mm_cvtepi32_ps(zx.o(edx_1))
            *result = 0
            *(result + 8) = 0x3f000000
            *(result + 0xc) = 0x3f800000
            *(result + 4) = xmm5_2
            *(result + 0x10) = 0xffffffff
            *(result + 0x14) = 0
            *(result + 0x18) = 0x3f800000
            *(result + 0x1c) = 0
            *(result + 0x20) = xmm7_2
            *(result + 0x24) = 0x3f000000
            *(result + 0x28) = 0x3f800000
            *(result + 0x2c) = 0xffffffff
            *(result + 0x30) = 0
            *(result + 0x34) = 0
            *(result + 0x38) = xmm3_2
            *(result + 0x3c) = xmm5_2
            *(result + 0x40) = 0x3f000000
            *(result + 0x44) = 0x3f800000
            *(result + 0x48) = ebp_3
            *(result + 0x50) = 0x3f800000
            float xmm6_2 = _mm_cvtepi32_ps(zx.o(edx + esi))
            float xmm2_2 = xmm3_2 * xmm1
            float xmm4_2 = xmm6_2 * xmm1
            *(result + 0x4c) = xmm2_2
            *(result + 0x54) = xmm3_2
            *(result + 0x58) = xmm7_2
            *(result + 0x5c) = 0x3f000000
            *(result + 0x60) = 0x3f800000
            *(result + 0x64) = ebp_3
            *(result + 0x68) = xmm2_2
            *(result + 0x6c) = 0
            *(result + 0x70) = xmm6_2
            *(result + 0x74) = xmm5_2
            *(result + 0x78) = 0x3f000000
            *(result + 0x7c) = 0x3f800000
            *(result + 0x80) = edi
            *(result + 0x84) = xmm4_2
            *(result + 0x88) = 0x3f800000
            *(result + 0x8c) = xmm6_2
            *(result + 0x90) = xmm7_2
            *(result + 0x94) = 0x3f000000
            *(result + 0x98) = 0x3f800000
            *(result + 0x9c) = edi
            result += 0xa0
            *result = xmm4_2
        
        *(result + 4) = 0
        int32_t* ecx_6 = *(arg1 + 0x18)
        
        if (ecx_6 != 0 && (*(*ecx_6 + 0x1c))().b != 0)
            result.b = 1
            *var_18
            return result

result.b = 0
*var_18
return result
