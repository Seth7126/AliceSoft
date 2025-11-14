// 函数: sub_5fd950
// 地址: 0x5fd950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc4e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CWriteVB::VTable* const var_10 = &viewtrans::CWriteVB::`vftable'
int32_t var_4 = 0
int32_t result = int.d(arg2 * 255f)

if (result s< 0)
    result = 0
else if (result s> 0xff)
    result = 0xff

uint128_t xmm2 = zx.o(*(arg1 + 0x40))
float xmm1_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
int32_t edi_2 = (0xffffffff - result) << 0x18 | 0xffffff
float xmm3_1 = arg2 * arg2
float xmm2_1 = _mm_cvtepi32_ps(xmm2)
float xmm4_1 = xmm1_1 - xmm1_1 * xmm3_1
float xmm3_3 = xmm2_1 - xmm2_1 * xmm3_1

if (not(1f <= xmm4_1))
    xmm4_1 = 1f

if (not(1f <= xmm3_3))
    xmm3_3 = 1f

int32_t* ecx = *(arg1 + 0x20)
float xmm1_3 = (xmm1_1 - xmm4_1) * 0.5f
float xmm2_3 = (xmm2_1 - xmm3_3) * 0.5f

if (ecx != 0)
    result = (*(*ecx + 0x18))(eax_2)
    
    if (result != 0)
        uint128_t xmm2_4 = zx.o(*(arg1 + 0x38))
        float xmm0_8 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34))) - xmm1_3
        float xmm2_6 = _mm_cvtepi32_ps(xmm2_4) - xmm2_3
        
        if (arg3 != 0)
            xmm0_8 = xmm0_8 - 0.5f
            xmm2_6 = xmm2_6 - 0.5f
        
        *result = xmm0_8
        int32_t* ecx_1 = result + 0x10
        *(result + 4) = xmm2_6
        *(result + 8) = 0x3f000000
        *(result + 0xc) = 0x3f800000
        *ecx_1 = edi_2
        ecx_1[1] = 0
        ecx_1[2] = 0
        int32_t eax_5 = *(arg1 + 0x34) + *(arg1 + 0x3c)
        float xmm2_9 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38))) - xmm2_3
        float xmm0_11 = _mm_cvtepi32_ps(zx.o(eax_5)) + xmm1_3
        
        if (arg3 != 0)
            xmm0_11 = xmm0_11 - 0.5f
            xmm2_9 = xmm2_9 - 0.5f
        
        ecx_1[4] = xmm2_9
        ecx_1[3] = xmm0_11
        ecx_1[5] = 0x3f000000
        ecx_1[6] = 0x3f800000
        ecx_1[7] = edi_2
        ecx_1[8] = 0x3f800000
        ecx_1[9] = 0
        int32_t eax_7 = *(arg1 + 0x40) + *(arg1 + 0x38)
        float xmm0_14 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34))) - xmm1_3
        float xmm2_12 = _mm_cvtepi32_ps(zx.o(eax_7)) + xmm2_3
        
        if (arg3 != 0)
            xmm0_14 = xmm0_14 - 0.5f
            xmm2_12 = xmm2_12 - 0.5f
        
        ecx_1[0xa] = xmm0_14
        ecx_1[0xb] = xmm2_12
        ecx_1[0xc] = 0x3f000000
        ecx_1[0xd] = 0x3f800000
        ecx_1[0xe] = edi_2
        ecx_1[0xf] = 0
        ecx_1[0x10] = 0x3f800000
        result = *(arg1 + 0x40) + *(arg1 + 0x38)
        float xmm0_17 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c))) + xmm1_3
        float xmm2_15 = _mm_cvtepi32_ps(zx.o(result)) + xmm2_3
        
        if (arg3 != 0)
            xmm0_17 = xmm0_17 - 0.5f
            xmm2_15 = xmm2_15 - 0.5f
        
        ecx_1[0x11] = xmm0_17
        ecx_1[0x12] = xmm2_15
        ecx_1[0x13] = 0x3f000000
        ecx_1[0x14] = 0x3f800000
        ecx_1[0x15] = edi_2
        ecx_1[0x16] = 0x3f800000
        ecx_1[0x17] = 0x3f800000
        int32_t* ecx_2 = *(arg1 + 0x20)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x1c))().b != 0)
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
