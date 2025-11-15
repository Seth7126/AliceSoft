// 函数: sub_645da0
// 地址: 0x645da0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* var_20 = &var_4
int32_t ebx = 0xfe
int32_t esi = 0xff
int32_t ebp_1 = 0xffffff
int32_t eax_2 = int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x10) + 0xfe)) * arg2)

if (eax_2 - 0xfe s< 0)
    ebx = eax_2

void* edx = nullptr

if (eax_2 - 0xfe s>= 0)
    edx = eax_2 - 0xfe

int32_t ecx_1 = *(arg1 + 0x10)

if (ebx s< 0xfe)
    esi = ebx

int32_t esi_2 = esi << 0x18 | 0xffffff

if (edx + ebx s> ecx_1)
    ebx = ecx_1 - edx
    ebp_1 = not.d(ebx << 0x18)

int32_t* ecx_2 = *(arg1 + 0x18)
void* result

if (ecx_2 != 0)
    result = (*(*ecx_2 + 0x18))()
    
    if (result != 0)
        if (*(arg1 + 0x44) == 0)
            int32_t esi_3 = *(arg1 + 4)
            int32_t edi_1 = *(arg1 + 0x10)
            void* edx_4 = edi_1 - edx
            float xmm6_4 = _mm_cvtepi32_ps(zx.o(edi_1))
            int32_t ecx_7 = *(arg1 + 0xc) + esi_3
            float xmm1_1 = 1f / xmm6_4
            float xmm0_8 = _mm_cvtepi32_ps(zx.o(edx + ebx))
            *(result + 8) = 0x3f000000
            *(result + 0xc) = 0x3f800000
            int32_t xmm7_4 = _mm_cvtepi32_ps(zx.o(esi_3))
            float xmm2_3 = 1f - xmm0_8 * xmm1_1
            *result = xmm7_4
            float xmm0_11 = _mm_cvtepi32_ps(zx.o(edx))
            int32_t xmm3_5 = _mm_cvtepi32_ps(zx.o(edx_4 - ebx))
            *(result + 4) = xmm3_5
            *(result + 0x10) = ebp_1
            *(result + 0x14) = 0
            float xmm5_3 = 1f - xmm0_11 * xmm1_1
            *(result + 0x18) = xmm2_3
            *(result + 0x20) = xmm3_5
            *(result + 0x24) = 0x3f000000
            *(result + 0x28) = 0x3f800000
            int32_t xmm0_14 = _mm_cvtepi32_ps(zx.o(ecx_7))
            int32_t xmm4_4 = _mm_cvtepi32_ps(zx.o(edx_4))
            *(result + 0x1c) = xmm0_14
            *(result + 0x2c) = ebp_1
            *(result + 0x30) = 0x3f800000
            *(result + 0x34) = xmm2_3
            *(result + 0x38) = xmm7_4
            *(result + 0x3c) = xmm4_4
            *(result + 0x40) = 0x3f000000
            *(result + 0x44) = 0x3f800000
            *(result + 0x48) = esi_2
            *(result + 0x4c) = 0
            *(result + 0x50) = xmm5_3
            *(result + 0x54) = xmm0_14
            *(result + 0x58) = xmm4_4
            *(result + 0x5c) = 0x3f000000
            *(result + 0x60) = 0x3f800000
            *(result + 0x64) = esi_2
            *(result + 0x68) = 0x3f800000
            *(result + 0x6c) = xmm5_3
            *(result + 0x70) = xmm7_4
            *(result + 0x74) = xmm6_4
            *(result + 0x78) = 0x3f000000
            *(result + 0x7c) = 0x3f800000
            *(result + 0x80) = 0xffffffff
            *(result + 0x84) = 0
            *(result + 0x88) = 0x3f800000
            *(result + 0x8c) = xmm0_14
            *(result + 0x90) = xmm6_4
            *(result + 0x94) = 0x3f000000
            *(result + 0x98) = 0x3f800000
            *(result + 0x9c) = 0xffffffff
            result += 0xa0
            *(result + 4) = 0x3f800000
        else
            int32_t edx_1 = *(arg1 + 4)
            void* eax_4 = *(arg1 + 8)
            int32_t ecx_4 = *(arg1 + 0xc) + edx_1
            float xmm1 = 1f / _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10)))
            int32_t xmm6_2 = _mm_cvtepi32_ps(zx.o(edx_1))
            int32_t xmm2_2 = _mm_cvtepi32_ps(zx.o(eax_4))
            int32_t xmm0_6 = _mm_cvtepi32_ps(zx.o(ecx_4))
            *(result + 8) = 0x3f000000
            *(result + 0xc) = 0x3f800000
            *result = xmm6_2
            *(result + 4) = xmm2_2
            *(result + 0x10) = 0xffffffff
            *(result + 0x14) = 0
            *(result + 0x18) = 0
            *(result + 0x1c) = xmm0_6
            *(result + 0x20) = xmm2_2
            *(result + 0x24) = 0x3f000000
            *(result + 0x28) = 0x3f800000
            *(result + 0x2c) = 0xffffffff
            *(result + 0x30) = 0x3f800000
            *(result + 0x34) = 0
            *(result + 0x38) = xmm6_2
            *(result + 0x40) = 0x3f000000
            *(result + 0x44) = 0x3f800000
            float xmm3_2 = _mm_cvtepi32_ps(zx.o(edx))
            int32_t xmm4_2 = _mm_cvtepi32_ps(zx.o(eax_4 + edx))
            float xmm7_2 = _mm_cvtepi32_ps(zx.o(edx + ebx))
            *(result + 0x3c) = xmm4_2
            *(result + 0x48) = esi_2
            *(result + 0x4c) = 0
            float xmm3_3 = xmm3_2 * xmm1
            float xmm5_2 = xmm7_2 * xmm1
            *(result + 0x50) = xmm3_3
            *(result + 0x54) = xmm0_6
            *(result + 0x58) = xmm4_2
            *(result + 0x5c) = 0x3f000000
            *(result + 0x60) = 0x3f800000
            *(result + 0x64) = esi_2
            *(result + 0x68) = 0x3f800000
            *(result + 0x6c) = xmm3_3
            *(result + 0x70) = xmm6_2
            *(result + 0x74) = xmm7_2
            *(result + 0x78) = 0x3f000000
            *(result + 0x7c) = 0x3f800000
            *(result + 0x80) = ebp_1
            *(result + 0x84) = 0
            *(result + 0x88) = xmm5_2
            *(result + 0x8c) = xmm0_6
            *(result + 0x90) = xmm7_2
            *(result + 0x94) = 0x3f000000
            *(result + 0x98) = 0x3f800000
            *(result + 0x9c) = ebp_1
            result += 0xa0
            *(result + 4) = xmm5_2
        
        *result = 0x3f800000
        int32_t* ecx_9 = *(arg1 + 0x18)
        
        if (ecx_9 != 0 && (*(*ecx_9 + 0x1c))().b != 0)
            result.b = 1
            *var_20
            return result

result.b = 0
*var_20
return result
