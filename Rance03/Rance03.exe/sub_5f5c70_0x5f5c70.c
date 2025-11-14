// 函数: sub_5f5c70
// 地址: 0x5f5c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc1f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CWriteVB::VTable* const var_10_1 = &viewtrans::CWriteVB::`vftable'
int32_t var_4 = 0
int32_t* ecx = *(arg1 + 0x20)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != 0)
    int32_t __saved_esi
    result = (*(*ecx + 0x18))(__security_cookie ^ &__saved_esi)
    
    if (result != 0)
        uint128_t xmm2_1 = zx.o(*(arg1 + 0x38))
        float xmm0_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
        float xmm2_2 = _mm_cvtepi32_ps(xmm2_1)
        
        if (arg2 != 0)
            xmm0_2 = xmm0_2 - 0.5f
            xmm2_2 = xmm2_2 - 0.5f
        
        *result = xmm0_2
        void* ecx_1 = &result[4]
        result[1] = xmm2_2
        result[2] = 0x3f000000
        result[3] = 0x3f800000
        *ecx_1 = 0xffffffff
        *(ecx_1 + 4) = 0
        *(ecx_1 + 8) = 0
        int32_t eax_5 = *(arg1 + 0x3c) + *(arg1 + 0x34)
        float xmm2_4 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(eax_5))
        
        if (arg2 != 0)
            xmm0_4 = xmm0_4 - 0.5f
            xmm2_4 = xmm2_4 - 0.5f
        
        *(ecx_1 + 0x10) = xmm2_4
        *(ecx_1 + 0xc) = xmm0_4
        *(ecx_1 + 0x14) = 0x3f000000
        *(ecx_1 + 0x18) = 0x3f800000
        *(ecx_1 + 0x1c) = 0xffffffff
        *(ecx_1 + 0x20) = 0x3f800000
        *(ecx_1 + 0x24) = 0
        int32_t eax_7 = *(arg1 + 0x38) + *(arg1 + 0x40)
        float xmm0_6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
        float xmm2_6 = _mm_cvtepi32_ps(zx.o(eax_7))
        
        if (arg2 != 0)
            xmm0_6 = xmm0_6 - 0.5f
            xmm2_6 = xmm2_6 - 0.5f
        
        *(ecx_1 + 0x28) = xmm0_6
        *(ecx_1 + 0x2c) = xmm2_6
        *(ecx_1 + 0x30) = 0x3f000000
        *(ecx_1 + 0x34) = 0x3f800000
        *(ecx_1 + 0x38) = 0xffffffff
        *(ecx_1 + 0x3c) = 0
        *(ecx_1 + 0x40) = 0x3f800000
        result = *(arg1 + 0x38) + *(arg1 + 0x40)
        float xmm0_8 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c) + *(arg1 + 0x34)))
        float xmm2_8 = _mm_cvtepi32_ps(zx.o(result))
        
        if (arg2 != 0)
            xmm0_8 = xmm0_8 - 0.5f
            xmm2_8 = xmm2_8 - 0.5f
        
        *(ecx_1 + 0x44) = xmm0_8
        *(ecx_1 + 0x48) = xmm2_8
        *(ecx_1 + 0x4c) = 0x3f000000
        *(ecx_1 + 0x50) = 0x3f800000
        *(ecx_1 + 0x54) = 0xffffffff
        *(ecx_1 + 0x58) = 0x3f800000
        *(ecx_1 + 0x5c) = 0x3f800000
        int32_t* ecx_2 = *(arg1 + 0x20)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x1c))().b != 0)
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
