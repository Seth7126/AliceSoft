// 函数: sub_5fac40
// 地址: 0x5fac40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc1f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CWriteVB::VTable* const var_10_1 = &viewtrans::CWriteVB::`vftable'
int32_t var_4 = 0
int32_t __saved_esi
int32_t* result = (*(**(arg1 + 0x68) + 0x18))(__security_cookie ^ &__saved_esi)

if (result != 0)
    int32_t xmm1_1 = (zx.o(0)).d
    int32_t xmm0_1 = (zx.o(0)).d
    int32_t xmm3_1 = (zx.o(0)).d
    
    if (arg2 != 0)
        xmm0_1 = -0x41000000
        xmm3_1 = -0x41000000
    
    *result = xmm0_1
    int32_t xmm4_1 = (zx.o(0)).d
    result[1] = xmm3_1
    result[2] = 0x3f000000
    result[3] = 0x3f800000
    result[4] = 0xffffffff
    result[5] = 0
    result[6] = 0
    float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 4)))
    
    if (arg2 != 0)
        xmm0_3 = xmm0_3 - 0.5f
        xmm4_1 = -0x41000000
    
    result[7] = xmm0_3
    result[8] = xmm4_1
    result[9] = 0x3f000000
    result[0xa] = 0x3f800000
    result[0xb] = 0xffffffff
    result[0xc] = 0x3f800000
    result[0xd] = 0
    float xmm0_5 = _mm_cvtepi32_ps(zx.o(*(arg1 + 8)))
    
    if (arg2 != 0)
        xmm1_1 = -0x41000000
        xmm0_5 = xmm0_5 - 0.5f
    
    result[0xe] = xmm1_1
    result[0xf] = xmm0_5
    result[0x10] = 0x3f000000
    result[0x11] = 0x3f800000
    result[0x12] = 0xffffffff
    result[0x13] = 0
    result[0x14] = 0x3f800000
    uint128_t xmm1_2 = zx.o(*(arg1 + 8))
    float xmm0_7 = _mm_cvtepi32_ps(zx.o(*(arg1 + 4)))
    float xmm1_3 = _mm_cvtepi32_ps(xmm1_2)
    
    if (arg2 != 0)
        xmm0_7 = xmm0_7 - 0.5f
        xmm1_3 = xmm1_3 - 0.5f
    
    result[0x15] = xmm0_7
    result[0x16] = xmm1_3
    result[0x17] = 0x3f000000
    result[0x18] = 0x3f800000
    result[0x19] = 0xffffffff
    result[0x1a] = 0x3f800000
    result[0x1b] = 0x3f800000
    
    if ((*(**(arg1 + 0x68) + 0x1c))().b != 0)
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
