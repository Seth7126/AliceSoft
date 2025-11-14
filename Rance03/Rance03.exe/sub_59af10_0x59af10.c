// 函数: sub_59af10
// 地址: 0x59af10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = *(arg1 + 4)
float var_20
struct sealengine::CSphereVolume::VTable** result
int64_t xmm0

if (eax != *(arg1 + 8))
    int128_t xmm0_1 = data_7094e0
    float xmm3_1 = 3.40282347e+38f
    float xmm6_1 = -3.40282347e+38f
    int32_t esi_1 = *(arg1 + 8)
    void* ecx = eax
    float xmm5_1 = xmm0_1:0xc.d
    float xmm1_1 = xmm0_1:8.d
    float xmm4_1 = xmm0_1:4.d
    float xmm2_1 = xmm0_1.d
    
    if (ecx != esi_1)
        void* edx_1 = ecx + 0xc
        
        do
            float xmm0_2 = *(edx_1 - 8)
            
            if (not(xmm2_1 <= xmm0_2))
                xmm2_1 = xmm0_2
            
            if (not(xmm0_2 <= xmm4_1))
                xmm4_1 = xmm0_2
            
            float xmm0_3 = *(edx_1 - 4)
            
            if (not(xmm1_1 <= xmm0_3))
                xmm1_1 = xmm0_3
            
            if (not(xmm0_3 <= xmm5_1))
                xmm5_1 = xmm0_3
            
            float xmm0_4 = *edx_1
            
            if (not(xmm3_1 <= xmm0_4))
                xmm3_1 = xmm0_4
            
            if (not(xmm0_4 <= xmm6_1))
                xmm6_1 = xmm0_4
            
            ecx += 0x14
            edx_1 += 0x14
        while (ecx != esi_1)
    
    float xmm3_2 = (zx.o(0)).d
    float xmm6_3 = (xmm6_1 + xmm3_1) * 0.5f
    float xmm4_3 = (xmm4_1 + xmm2_1) * 0.5f
    float xmm5_3 = (xmm5_1 + xmm1_1) * 0.5f
    var_20 = xmm6_3
    float var_24_1 = xmm5_3
    
    if (eax != esi_1)
        void* ecx_1 = eax + 0xc
        
        do
            float xmm2_3 = xmm4_3 f- *(ecx_1 - 8)
            float xmm1_3 = xmm5_3 f- *(ecx_1 - 4)
            float xmm0_6 = xmm6_3 f- *ecx_1
            float xmm0_9 =
                _mm_sqrt_ss(0, xmm2_3 * xmm2_3 + xmm1_3 * xmm1_3 + xmm0_6 * xmm0_6) f+ *(ecx_1 + 4)
            
            if (not(xmm0_9 <= xmm3_2))
                xmm3_2 = xmm0_9
            
            eax += 0x14
            ecx_1 += 0x14
        while (eax != esi_1)
    
    result = arg2
    xmm0 = xmm4_3.q
    result[4] = xmm3_2
else
    result = arg2
    var_20 = 0f
    xmm0 = _mm_unpacklo_ps(zx.o(0), 0)
    result[4] = 0

*(result + 4) = xmm0
result[3] = var_20
*result = &sealengine::CSphereVolume::`vftable'
return result
