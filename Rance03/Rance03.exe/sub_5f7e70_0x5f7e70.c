// 函数: sub_5f7e70
// 地址: 0x5f7e70
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
int32_t ebx = int.d(_mm_cvtepi32_ps(zx.o(ecx + 0xfe)) * arg2)
void* ebx_1 = ebx - 0xfe

if (ebx - 0xfe s< 0)
    edi = ebx_1 + 0xfe
    ebx_1 = nullptr

void* eax_4 = 0xff
int32_t ebp = 0xffffff

if (edi s< 0xfe)
    eax_4 = edi

int32_t eax_6 = eax_4 << 0x18 | 0xffffff

if (ebx_1 + edi s> ecx)
    edi = ecx - ebx_1
    ebp = (0xffffffff - edi) << 0x18 | 0xffffff

int32_t* ecx_1 = *(arg1 + 8)
float* result

if (ecx_1 == 0)
    result.b = 0
else
    result = (*(*ecx_1 + 0x18))(eax_2)
    
    if (result == 0)
        result.b = 0
    else
        void* ecx_4 = *(arg1 + 0x40) - ebx_1 - edi
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
        float xmm1_1 = _mm_cvtepi32_ps(zx.o(ecx_4))
        
        if (arg3 != 0)
            xmm0_4 = xmm0_4 - 0.5f
            xmm1_1 = xmm1_1 - 0.5f
        
        result[1] = xmm1_1
        void* ecx_5 = &result[4]
        *result = xmm0_4
        result[2] = 0x3f000000
        result[3] = 0x3f800000
        *ecx_5 = ebp
        uint128_t xmm0_5 = zx.o(*(arg1 + 0x40))
        float xmm5_2 = _mm_cvtepi32_ps(zx.o(ebx_1 + edi))
        *(ecx_5 + 4) = 0
        *(ecx_5 + 8) = 1f - xmm5_2 / _mm_cvtepi32_ps(xmm0_5)
        void* eax_13 = *(arg1 + 0x40) - ebx_1 - edi
        float xmm0_8 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
        float xmm1_5 = _mm_cvtepi32_ps(zx.o(eax_13))
        
        if (arg3 != 0)
            xmm0_8 = xmm0_8 - 0.5f
            xmm1_5 = xmm1_5 - 0.5f
        
        *(ecx_5 + 0xc) = xmm0_8
        *(ecx_5 + 0x10) = xmm1_5
        *(ecx_5 + 0x14) = 0x3f000000
        *(ecx_5 + 0x18) = 0x3f800000
        *(ecx_5 + 0x1c) = ebp
        float xmm0_10 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
        *(ecx_5 + 0x20) = 0x3f800000
        *(ecx_5 + 0x24) = 1f - xmm5_2 / xmm0_10
        void* eax_15 = *(arg1 + 0x40) - ebx_1
        float xmm0_13 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
        float xmm1_7 = _mm_cvtepi32_ps(zx.o(eax_15))
        
        if (arg3 != 0)
            xmm0_13 = xmm0_13 - 0.5f
            xmm1_7 = xmm1_7 - 0.5f
        
        *(ecx_5 + 0x28) = xmm0_13
        *(ecx_5 + 0x2c) = xmm1_7
        *(ecx_5 + 0x30) = 0x3f000000
        *(ecx_5 + 0x34) = 0x3f800000
        *(ecx_5 + 0x38) = eax_6
        float xmm0_15 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
        *(ecx_5 + 0x3c) = 0
        float xmm2_3 = _mm_cvtepi32_ps(zx.o(ebx_1))
        *(ecx_5 + 0x40) = 1f - xmm2_3 / xmm0_15
        void* eax_19 = *(arg1 + 0x40) - ebx_1
        ebx_1.b = arg3
        float xmm0_18 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
        float xmm1_11 = _mm_cvtepi32_ps(zx.o(eax_19))
        
        if (ebx_1.b != 0)
            xmm0_18 = xmm0_18 - 0.5f
            xmm1_11 = xmm1_11 - 0.5f
        
        *(ecx_5 + 0x44) = xmm0_18
        *(ecx_5 + 0x48) = xmm1_11
        *(ecx_5 + 0x4c) = 0x3f000000
        *(ecx_5 + 0x50) = 0x3f800000
        *(ecx_5 + 0x54) = eax_6
        uint128_t xmm0_19 = zx.o(*(arg1 + 0x40))
        *(ecx_5 + 0x58) = 0x3f800000
        *(ecx_5 + 0x5c) = 1f - xmm2_3 / _mm_cvtepi32_ps(xmm0_19)
        uint128_t xmm1_12 = zx.o(*(arg1 + 0x40))
        float xmm0_22 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
        float xmm1_13 = _mm_cvtepi32_ps(xmm1_12)
        
        if (ebx_1.b != 0)
            xmm0_22 = xmm0_22 - 0.5f
            xmm1_13 = xmm1_13 - 0.5f
        
        *(ecx_5 + 0x60) = xmm0_22
        *(ecx_5 + 0x64) = xmm1_13
        *(ecx_5 + 0x68) = 0x3f000000
        *(ecx_5 + 0x6c) = 0x3f800000
        *(ecx_5 + 0x70) = 0xffffffff
        *(ecx_5 + 0x74) = 0
        *(ecx_5 + 0x78) = 0x3f800000
        result = *(arg1 + 0x34) + *(arg1 + 0x3c)
        float xmm1_15 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
        float xmm0_24 = _mm_cvtepi32_ps(zx.o(result))
        
        if (ebx_1.b != 0)
            xmm0_24 = xmm0_24 - 0.5f
            xmm1_15 = xmm1_15 - 0.5f
        
        *(ecx_5 + 0x7c) = xmm0_24
        *(ecx_5 + 0x80) = xmm1_15
        *(ecx_5 + 0x84) = 0x3f000000
        *(ecx_5 + 0x88) = 0x3f800000
        *(ecx_5 + 0x8c) = 0xffffffff
        *(ecx_5 + 0x90) = 0x3f800000
        *(ecx_5 + 0x94) = 0x3f800000
        int32_t* ecx_6 = *(arg1 + 8)
        
        if (ecx_6 == 0)
            result.b = 0
        else if ((*(*ecx_6 + 0x1c))().b == 0)
            result.b = 0
        else
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
