// 函数: sub_5dbdd0
// 地址: 0x5dbdd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = *(arg1 + 4)
struct sealengine::CSphereVolume::VTable** result
int32_t ecx
int64_t xmm0

if (eax != *(arg1 + 8))
    int128_t xmm0_1 = data_79aae0
    int32_t ecx_1 = *(arg1 + 8)
    float xmm5_1 = -3.40282347e+38f
    float xmm4_1 = xmm0_1:0xc.d
    float xmm6_1 = xmm0_1:8.d
    float xmm3_1 = xmm0_1:4.d
    float xmm7_1 = xmm0_1.d
    float var_1c_1 = 3.40282347e+38f
    
    if (eax != ecx_1)
        void* esi_1 = eax + 0xc
        
        do
            float xmm2_1 = *(esi_1 + 4)
            eax += 0x14
            float xmm1_1 = *(esi_1 - 8)
            float xmm1_3 = _mm_max_ss(xmm1_1 + xmm2_1, xmm3_1)
            float xmm0_4 = _mm_min_ss(xmm1_1 - xmm2_1, xmm7_1)
            xmm3_1 = xmm1_3
            float xmm1_4 = *(esi_1 - 4)
            xmm7_1 = xmm0_4
            float xmm1_6 = _mm_max_ss(xmm1_4 + xmm2_1, xmm4_1)
            float xmm0_7 = _mm_min_ss(xmm1_4 - xmm2_1, xmm6_1)
            xmm4_1 = xmm1_6
            float xmm1_7 = *esi_1
            xmm6_1 = xmm0_7
            esi_1 += 0x14
            xmm5_1 = _mm_max_ss(xmm1_7 + xmm2_1, xmm5_1)
            var_1c_1 = __minss_xmmss_memss(xmm1_7 - xmm2_1, var_1c_1)
        while (eax != ecx_1)
    
    void* eax_1 = *(arg1 + 4)
    int32_t xmm6_2 = (zx.o(0)).d
    float xmm5_3 = (xmm5_1 + var_1c_1) * 0.5f
    float xmm4_3 = (xmm4_1 + xmm6_1) * 0.5f
    float xmm3_3 = (xmm3_1 + xmm7_1) * 0.5f
    int128_t var_18_1
    var_18_1:8.d = xmm5_3
    var_18_1:4.d = xmm4_3
    var_18_1.d = xmm3_3
    
    if (eax_1 != ecx_1)
        void* edx = eax_1 + 0xc
        
        do
            float xmm0_12 = xmm3_3 f- *(edx - 8)
            float xmm2_3 = xmm4_3 f- *(edx - 4)
            float xmm1_11 = xmm5_3 f- *edx
            float xmm0_17 =
                sub_484cc0(xmm0_12 * xmm0_12 + xmm2_3 * xmm2_3 + xmm1_11 * xmm1_11) f+ *(edx + 4)
            eax_1 += 0x14
            edx += 0x14
            xmm6_2 = _mm_max_ss(xmm0_17, xmm6_2)
        while (eax_1 != ecx_1)
    
    result = arg2
    xmm0 = var_18_1.q
    ecx = var_18_1:8.d
    result[4] = xmm6_2
else
    result = arg2
    xmm0 = data_7fd4d8.q
    ecx = data_7fd4e0
    result[4] = 0

*(result + 4) = xmm0
result[3] = ecx
*result = &sealengine::CSphereVolume::`vftable'
return result
