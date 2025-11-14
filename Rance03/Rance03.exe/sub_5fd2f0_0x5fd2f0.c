// 函数: sub_5fd2f0
// 地址: 0x5fd2f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc4e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm2 = arg2
struct viewtrans::CWriteVB::VTable* const var_10 = &viewtrans::CWriteVB::`vftable'
int32_t var_4 = 0

if (*(arg1 + 4) != 0)
    xmm2 = 1f - xmm2

uint128_t xmm1 = zx.o(*(arg1 + 0x3c))
int32_t* ecx = *(arg1 + 0x24)
float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
float xmm1_1 = _mm_cvtepi32_ps(xmm1)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != 0)
    result = (*(*ecx + 0x18))(eax_2)
    
    if (result != 0)
        int32_t xmm4_1 = (zx.o(0)).d
        int32_t xmm1_2 = (zx.o(0)).d
        float xmm2_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_3 * xmm2)))
        float xmm0_5 = xmm2_2
        
        if (arg3 != 0)
            xmm0_5 = xmm0_5 - 0.5f
            xmm1_2 = -0x41000000
        
        *result = xmm0_5
        float xmm0_6 = xmm0_3
        result[1] = xmm1_2
        float xmm1_3 = xmm0_6
        result[2] = 0x3f000000
        result[3] = 0x3f800000
        result[4] = 0xffffffff
        result[5] = 0
        result[6] = 0
        
        if (arg3 != 0)
            xmm1_3 = xmm1_3 - 0.5f
            xmm4_1 = -0x41000000
        
        result[7] = xmm1_3
        float xmm1_4 = xmm1_1
        result[8] = xmm4_1
        float xmm4_2 = xmm1_4
        result[9] = 0x3f000000
        result[0xa] = 0x3f800000
        result[0xb] = 0xffffffff
        result[0xc] = 0x3f800000
        result[0xd] = 0
        
        if (arg3 != 0)
            xmm2_2 = xmm2_2 - 0.5f
            xmm4_2 = xmm4_2 - 0.5f
        
        result[0xe] = xmm2_2
        result[0xf] = xmm4_2
        result[0x10] = 0x3f000000
        result[0x11] = 0x3f800000
        result[0x12] = 0xffffffff
        result[0x13] = 0
        result[0x14] = 0x3f800000
        
        if (arg3 != 0)
            xmm0_6 = xmm0_6 - 0.5f
            xmm1_4 = xmm1_4 - 0.5f
        
        result[0x15] = xmm0_6
        result[0x16] = xmm1_4
        result[0x17] = 0x3f000000
        result[0x18] = 0x3f800000
        result[0x19] = 0xffffffff
        result[0x1a] = 0x3f800000
        result[0x1b] = 0x3f800000
        int32_t* ecx_2 = *(arg1 + 0x24)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x1c))().b != 0)
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
