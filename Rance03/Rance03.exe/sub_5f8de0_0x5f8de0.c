// 函数: sub_5f8de0
// 地址: 0x5f8de0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc328
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CWriteVB::VTable* const var_10 = &viewtrans::CWriteVB::`vftable'
int32_t var_4 = 0
void* edi = 0xfe
int32_t ecx = *(arg1 + 0x40)
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
        uint128_t xmm1 = zx.o(*(arg1 + 0x38))
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
        float xmm1_1 = _mm_cvtepi32_ps(xmm1)
        
        if (arg3 != 0)
            xmm0_4 = xmm0_4 - 0.5f
            xmm1_1 = xmm1_1 - 0.5f
        
        *result = xmm0_4
        void* ecx_2 = &result[4]
        result[1] = xmm1_1
        result[2] = 0x3f000000
        result[3] = 0x3f800000
        *ecx_2 = 0xffffffff
        *(ecx_2 + 4) = 0
        *(ecx_2 + 8) = 0
        int32_t eax_9 = *(arg1 + 0x34) + *(arg1 + 0x3c)
        float xmm1_3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
        float xmm0_6 = _mm_cvtepi32_ps(zx.o(eax_9))
        
        if (arg3 != 0)
            xmm0_6 = xmm0_6 - 0.5f
            xmm1_3 = xmm1_3 - 0.5f
        
        *(ecx_2 + 0xc) = xmm0_6
        *(ecx_2 + 0x10) = xmm1_3
        *(ecx_2 + 0x14) = 0x3f000000
        *(ecx_2 + 0x18) = 0x3f800000
        *(ecx_2 + 0x1c) = 0xffffffff
        *(ecx_2 + 0x20) = 0x3f800000
        *(ecx_2 + 0x24) = 0
        uint128_t xmm0_7 = zx.o(*(arg1 + 0x38))
        uint128_t xmm1_4 = zx.o(*(arg1 + 0x34))
        float xmm3_2 = _mm_cvtepi32_ps(zx.o(ebp_1))
        float xmm0_8 = _mm_cvtepi32_ps(xmm0_7)
        float xmm1_5 = _mm_cvtepi32_ps(xmm1_4)
        float xmm0_9 = xmm0_8 + xmm3_2
        
        if (arg3 != 0)
            xmm1_5 = xmm1_5 - 0.5f
            xmm0_9 = xmm0_9 - 0.5f
        
        *(ecx_2 + 0x28) = xmm1_5
        *(ecx_2 + 0x2c) = xmm0_9
        *(ecx_2 + 0x30) = 0x3f000000
        *(ecx_2 + 0x34) = 0x3f800000
        *(ecx_2 + 0x38) = eax_6
        float xmm0_11 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
        *(ecx_2 + 0x3c) = 0
        *(ecx_2 + 0x40) = xmm3_2 / xmm0_11
        int32_t eax_11 = *(arg1 + 0x34) + *(arg1 + 0x3c)
        float xmm0_13 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
        float xmm1_9 = _mm_cvtepi32_ps(zx.o(eax_11))
        float xmm0_14 = xmm0_13 + xmm3_2
        
        if (arg3 != 0)
            xmm1_9 = xmm1_9 - 0.5f
            xmm0_14 = xmm0_14 - 0.5f
        
        *(ecx_2 + 0x48) = xmm0_14
        *(ecx_2 + 0x44) = xmm1_9
        *(ecx_2 + 0x4c) = 0x3f000000
        *(ecx_2 + 0x50) = 0x3f800000
        *(ecx_2 + 0x54) = eax_6
        float xmm0_16 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
        int32_t edx_2
        edx_2.b = arg3
        *(ecx_2 + 0x58) = 0x3f800000
        *(ecx_2 + 0x5c) = xmm3_2 / xmm0_16
        uint128_t xmm0_17 = zx.o(*(arg1 + 0x34))
        float xmm3_5 = _mm_cvtepi32_ps(zx.o(edi + ebp_1))
        float xmm0_18 = _mm_cvtepi32_ps(xmm0_17)
        float xmm1_10 = xmm3_5
        
        if (edx_2.b != 0)
            xmm0_18 = xmm0_18 - 0.5f
            xmm1_10 = xmm1_10 - 0.5f
        
        *(ecx_2 + 0x60) = xmm0_18
        *(ecx_2 + 0x64) = xmm1_10
        *(ecx_2 + 0x68) = 0x3f000000
        *(ecx_2 + 0x6c) = 0x3f800000
        *(ecx_2 + 0x70) = ebx
        float xmm0_20 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
        *(ecx_2 + 0x74) = 0
        *(ecx_2 + 0x78) = xmm3_5 / xmm0_20
        float xmm1_13 = xmm3_5
        float xmm0_22 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
        
        if (edx_2.b != 0)
            xmm0_22 = xmm0_22 - 0.5f
            xmm1_13 = xmm1_13 - 0.5f
        
        *(ecx_2 + 0x7c) = xmm0_22
        *(ecx_2 + 0x80) = xmm1_13
        *(ecx_2 + 0x84) = 0x3f000000
        *(ecx_2 + 0x88) = 0x3f800000
        *(ecx_2 + 0x8c) = ebx
        float xmm0_24 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
        *(ecx_2 + 0x90) = 0x3f800000
        *(ecx_2 + 0x94) = xmm3_5 / xmm0_24
        int32_t* ecx_3 = *(arg1 + 8)
        
        if (ecx_3 == 0)
            result.b = 0
        else if ((*(*ecx_3 + 0x1c))().b == 0)
            result.b = 0
        else
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
