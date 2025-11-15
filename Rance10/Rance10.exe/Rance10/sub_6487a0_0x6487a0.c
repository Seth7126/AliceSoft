// 函数: sub_6487a0
// 地址: 0x6487a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm2

if (*(arg1 + 0x45) == 0)
    xmm2 = 6.28318548f
else
    xmm2 = -6.28318548f

float var_28

if (*(arg1 + 0x44) == 0)
    var_28 = arg2
else
    var_28 = 1f - arg2

int32_t xmm1[0x4] = arg2 * xmm2
int80_t x87_r0
float xmm0_3 = ___libm_sse2_cosf(xmm1, x87_r0)
int80_t x87_r1
float xmm0_5 = ___libm_sse2_sinf(xmm1, x87_r1)
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*(arg1 + 0xc))
int32_t* ecx = *(arg1 + 0x30)
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(*(arg1 + 0x10))
float xmm6_1 = _mm_cvtepi32_ps(zx.o((eax_1 - edx) s>> 1))
float xmm0_7 = xmm6_1 * xmm0_3
float xmm5_1 = _mm_cvtepi32_ps(zx.o((eax_5 - edx_1) s>> 1))
float xmm3_1 = xmm5_1 * xmm0_5
float xmm1_3 = (xmm0_7 - xmm3_1) * var_28
float xmm3_3 = (xmm3_1 + xmm0_7) * var_28
float xmm1_5 = xmm6_1 * xmm0_5
float xmm2_3 = xmm5_1 * xmm0_3
float xmm4_4 = (xmm2_3 + xmm1_5) * var_28
int32_t result

if (ecx != 0)
    result = (*(*ecx + 0x18))()
    
    if (result != 0)
        *result = xmm6_1 - xmm1_3
        *(result + 4) = xmm5_1 - xmm4_4
        *(result + 8) = 0x3f000000
        *(result + 0xc) = 0x3f800000
        *(result + 0x10) = 0xffffffff
        *(result + 0x14) = 0
        *(result + 0x18) = 0
        *(result + 0x1c) = xmm3_3 + xmm6_1
        *(result + 0x20) = (xmm1_5 - xmm2_3) * var_28 + xmm5_1
        *(result + 0x24) = 0x3f000000
        *(result + 0x28) = 0x3f800000
        *(result + 0x2c) = 0xffffffff
        *(result + 0x30) = 0x3f800000
        *(result + 0x34) = 0
        *(result + 0x38) = xmm6_1 - xmm3_3
        *(result + 0x3c) = (xmm2_3 - xmm1_5) * var_28 + xmm5_1
        *(result + 0x40) = 0x3f000000
        *(result + 0x44) = 0x3f800000
        *(result + 0x48) = 0xffffffff
        *(result + 0x4c) = 0
        *(result + 0x50) = 0x3f800000
        *(result + 0x54) = xmm1_3 + xmm6_1
        *(result + 0x58) = xmm4_4 + xmm5_1
        *(result + 0x5c) = 0x3f000000
        *(result + 0x60) = 0x3f800000
        *(result + 0x64) = 0xffffffff
        *(result + 0x68) = 0x3f800000
        *(result + 0x6c) = 0x3f800000
        int32_t* ecx_1 = *(arg1 + 0x30)
        
        if (ecx_1 != 0 && (*(*ecx_1 + 0x1c))().b != 0)
            result.b = 1
            return result

result.b = 0
return result
