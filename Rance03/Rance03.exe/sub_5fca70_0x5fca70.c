// 函数: sub_5fca70
// 地址: 0x5fca70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CWriteVB::VTable* const var_30 = &viewtrans::CWriteVB::`vftable'
int32_t var_4 = 0
float xmm3

if (*(arg1 + 5) == 0)
    xmm3 = 1f
else
    xmm3 = -1f

float var_14

if (*(arg1 + 4) == 0)
    var_14 = arg2
else
    var_14 = 1f - arg2

int32_t xmm1_4[0x4] = arg2 * 360f * xmm3 * 3.14159274f * 0.00555555569f
int80_t x87_r0
float xmm0_3 = ___libm_sse2_cosf(xmm1_4, x87_r0)
int80_t x87_r1
float xmm0_5 = ___libm_sse2_sinf(xmm1_4, x87_r1)
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(*(arg1 + 0x40))
int32_t* ecx = *(arg1 + 0x24)
int32_t eax_8
int32_t edx_1
edx_1:eax_8 = sx.q(*(arg1 + 0x44))
float xmm7_1 = _mm_cvtepi32_ps(zx.o((eax_4 - edx) s>> 1))
float xmm0_7 = xmm7_1 * xmm0_3
float xmm6_1 = _mm_cvtepi32_ps(zx.o((eax_8 - edx_1) s>> 1))
float xmm2_2 = xmm0_7 ^ 0x80000000
float xmm5_1 = xmm6_1 * xmm0_5
float xmm0_9 = xmm5_1 ^ 0x80000000
float xmm2_7 = xmm7_1 * xmm0_5
float xmm3_3 = xmm6_1 * xmm0_3
float xmm4_1 = xmm3_3 + xmm2_7
float var_14_1 = xmm0_7
int32_t result

if (ecx != 0)
    result = (*(*ecx + 0x18))(eax_2)
    
    if (result != 0)
        float xmm0_14 = (xmm2_2 - xmm0_9) * var_14 + xmm7_1
        float xmm2_8 = (xmm4_1 ^ 0x80000000) * var_14 + xmm6_1
        
        if (arg3 != 0)
            xmm0_14 = xmm0_14 - 0.5f
            xmm2_8 = xmm2_8 - 0.5f
        
        *result = xmm0_14
        float xmm0_15 = (xmm0_7 - xmm0_9) * var_14 + xmm7_1
        *(result + 4) = xmm2_8
        float xmm2_9 = (xmm2_7 - xmm3_3) * var_14 + xmm6_1
        *(result + 8) = 0x3f000000
        *(result + 0xc) = 0x3f800000
        *(result + 0x10) = 0xffffffff
        *(result + 0x14) = 0
        *(result + 0x18) = 0
        
        if (arg3 != 0)
            xmm0_15 = xmm0_15 - 0.5f
            xmm2_9 = xmm2_9 - 0.5f
        
        float xmm3_24 = (xmm3_3 - xmm2_7) * var_14 + xmm6_1
        *(result + 0x1c) = xmm0_15
        float xmm0_16 = (xmm2_2 - xmm5_1) * var_14 + xmm7_1
        *(result + 0x20) = xmm2_9
        *(result + 0x24) = 0x3f000000
        *(result + 0x28) = 0x3f800000
        *(result + 0x2c) = 0xffffffff
        *(result + 0x30) = 0x3f800000
        *(result + 0x34) = 0
        
        if (arg3 != 0)
            xmm0_16 = xmm0_16 - 0.5f
            xmm3_24 = xmm3_24 - 0.5f
        
        float xmm2_10 = xmm4_1 * var_14 + xmm6_1
        *(result + 0x38) = xmm0_16
        float xmm0_17 = (xmm0_7 - xmm5_1) * var_14 + xmm7_1
        *(result + 0x3c) = xmm3_24
        *(result + 0x40) = 0x3f000000
        *(result + 0x44) = 0x3f800000
        *(result + 0x48) = 0xffffffff
        *(result + 0x4c) = 0
        *(result + 0x50) = 0x3f800000
        
        if (arg3 != 0)
            xmm0_17 = xmm0_17 - 0.5f
            xmm2_10 = xmm2_10 - 0.5f
        
        *(result + 0x54) = xmm0_17
        *(result + 0x58) = xmm2_10
        *(result + 0x5c) = 0x3f000000
        *(result + 0x60) = 0x3f800000
        *(result + 0x64) = 0xffffffff
        *(result + 0x68) = 0x3f800000
        *(result + 0x6c) = 0x3f800000
        int32_t* ecx_2 = *(arg1 + 0x24)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x1c))().b != 0)
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
