// 函数: sub_5f88c0
// 地址: 0x5f88c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc358
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CWriteVB::VTable* const var_10 = &viewtrans::CWriteVB::`vftable'
int32_t var_4 = 0
void* edi = 0xfe
int32_t ecx = *(arg1 + 0x3c)
int32_t ebp = int.d(_mm_cvtepi32_ps(zx.o(ecx + 0xfe)) * arg2)
void* ebp_1 = ebp - 0xfe

if (ebp - 0xfe s< 0)
    edi = ebp_1 + 0xfe
    ebp_1 = nullptr

void* eax_4 = 0xff
int32_t ebx = 0xffffff

if (edi s< 0xfe)
    eax_4 = edi

int32_t eax_6 = eax_4 << 0x18 | 0xffffff

if (edi + ebp_1 s> ecx)
    edi = ecx - ebp_1
    ebx = (0xffffffff - edi) << 0x18 | 0xffffff

int32_t* ecx_1 = *(arg1 + 8)
float* result

if (ecx_1 == 0)
    result.b = 0
else
    result = (*(*ecx_1 + 0x18))(eax_2)
    
    if (result == 0)
        result.b = 0
    else
        uint128_t xmm1 = zx.o(*(arg1 + 0x38) + *(arg1 + 0x40))
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c) - ebp_1 - edi))
        float xmm1_1 = _mm_cvtepi32_ps(xmm1)
        
        if (arg3 != 0)
            xmm0_4 = xmm0_4 - 0.5f
            xmm1_1 = xmm1_1 - 0.5f
        
        void* ecx_5 = &result[4]
        *result = xmm0_4
        result[1] = xmm1_1
        result[2] = 0x3f000000
        result[3] = 0x3f800000
        *ecx_5 = ebx
        float xmm0_6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
        *(ecx_5 + 8) = 0x3f800000
        float xmm3_2 = _mm_cvtepi32_ps(zx.o(edi + ebp_1))
        *(ecx_5 + 4) = 1f - xmm3_2 / xmm0_6
        void* eax_14 = *(arg1 + 0x3c) - ebp_1 - edi
        float xmm1_5 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
        float xmm0_9 = _mm_cvtepi32_ps(zx.o(eax_14))
        
        if (arg3 != 0)
            xmm0_9 = xmm0_9 - 0.5f
            xmm1_5 = xmm1_5 - 0.5f
        
        *(ecx_5 + 0xc) = xmm0_9
        *(ecx_5 + 0x10) = xmm1_5
        *(ecx_5 + 0x14) = 0x3f000000
        *(ecx_5 + 0x18) = 0x3f800000
        *(ecx_5 + 0x1c) = ebx
        float xmm0_11 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
        *(ecx_5 + 0x24) = 0
        float xmm3_5 = _mm_cvtepi32_ps(zx.o(ebp_1))
        *(ecx_5 + 0x20) = 1f - xmm3_2 / xmm0_11
        int32_t eax_16 = *(arg1 + 0x38) + *(arg1 + 0x40)
        float xmm0_15 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c))) - xmm3_5
        float xmm1_7 = _mm_cvtepi32_ps(zx.o(eax_16))
        
        if (arg3 != 0)
            xmm0_15 = xmm0_15 - 0.5f
            xmm1_7 = xmm1_7 - 0.5f
        
        *(ecx_5 + 0x28) = xmm0_15
        *(ecx_5 + 0x2c) = xmm1_7
        *(ecx_5 + 0x30) = 0x3f000000
        *(ecx_5 + 0x34) = 0x3f800000
        *(ecx_5 + 0x38) = eax_6
        uint128_t xmm0_16 = zx.o(*(arg1 + 0x3c))
        *(ecx_5 + 0x40) = 0x3f800000
        *(ecx_5 + 0x3c) = 1f - xmm3_5 / _mm_cvtepi32_ps(xmm0_16)
        uint128_t xmm1_10 = zx.o(*(arg1 + 0x38))
        float xmm0_20 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
        float xmm1_11 = _mm_cvtepi32_ps(xmm1_10)
        float xmm0_21 = xmm0_20 - xmm3_5
        
        if (arg3 != 0)
            xmm0_21 = xmm0_21 - 0.5f
            xmm1_11 = xmm1_11 - 0.5f
        
        *(ecx_5 + 0x44) = xmm0_21
        *(ecx_5 + 0x48) = xmm1_11
        *(ecx_5 + 0x4c) = 0x3f000000
        *(ecx_5 + 0x50) = 0x3f800000
        *(ecx_5 + 0x54) = eax_6
        float xmm0_23 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
        *(ecx_5 + 0x5c) = 0
        *(ecx_5 + 0x58) = 1f - xmm3_5 / xmm0_23
        result = *(arg1 + 0x38) + *(arg1 + 0x40)
        float xmm0_25 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
        float xmm1_13 = _mm_cvtepi32_ps(zx.o(result))
        
        if (arg3 != 0)
            xmm0_25 = xmm0_25 - 0.5f
            xmm1_13 = xmm1_13 - 0.5f
        
        *(ecx_5 + 0x60) = xmm0_25
        *(ecx_5 + 0x64) = xmm1_13
        *(ecx_5 + 0x68) = 0x3f000000
        *(ecx_5 + 0x6c) = 0x3f800000
        *(ecx_5 + 0x70) = 0xffffffff
        *(ecx_5 + 0x74) = 0x3f800000
        *(ecx_5 + 0x78) = 0x3f800000
        uint128_t xmm1_14 = zx.o(*(arg1 + 0x38))
        float xmm0_27 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
        float xmm1_15 = _mm_cvtepi32_ps(xmm1_14)
        
        if (arg3 != 0)
            xmm0_27 = xmm0_27 - 0.5f
            xmm1_15 = xmm1_15 - 0.5f
        
        *(ecx_5 + 0x7c) = xmm0_27
        *(ecx_5 + 0x80) = xmm1_15
        *(ecx_5 + 0x84) = 0x3f000000
        *(ecx_5 + 0x88) = 0x3f800000
        *(ecx_5 + 0x8c) = 0xffffffff
        *(ecx_5 + 0x90) = 0x3f800000
        *(ecx_5 + 0x94) = 0
        int32_t* ecx_6 = *(arg1 + 8)
        
        if (ecx_6 == 0)
            result.b = 0
        else if ((*(*ecx_6 + 0x1c))().b == 0)
            result.b = 0
        else
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
