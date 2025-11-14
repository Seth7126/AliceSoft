// 函数: sub_5f77c0
// 地址: 0x5f77c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc2f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CWriteVB::VTable* const var_10_1 = &viewtrans::CWriteVB::`vftable'
int32_t var_4 = 0
int32_t esi = int.d(arg2 * 255f)

if (esi s< 0)
    esi = 0
else if (esi s> 0xff)
    esi = 0xff

int32_t esi_2 = esi << 0x18 | 0xffffff
int32_t __saved_edi
float* result = (*(**(arg1 + 4) + 0x18))(__security_cookie ^ &__saved_edi)

if (result != 0)
    uint128_t xmm2_1 = zx.o(*(arg1 + 0x10))
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc)))
    float xmm2_2 = _mm_cvtepi32_ps(xmm2_1)
    
    if (arg3 != 0)
        xmm0_2 = xmm0_2 - 0.5f
        xmm2_2 = xmm2_2 - 0.5f
    
    *result = xmm0_2
    result[1] = xmm2_2
    result[2] = 0x3f000000
    result[3] = 0x3f800000
    result[4] = esi_2
    result[5] = 0
    result[6] = 0
    int32_t eax_5 = *(arg1 + 0xc) + *(arg1 + 0x14)
    float xmm2_4 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10)))
    float xmm0_4 = _mm_cvtepi32_ps(zx.o(eax_5))
    
    if (arg3 != 0)
        xmm0_4 = xmm0_4 - 0.5f
        xmm2_4 = xmm2_4 - 0.5f
    
    result[8] = xmm2_4
    result[7] = xmm0_4
    result[9] = 0x3f000000
    result[0xa] = 0x3f800000
    result[0xb] = esi_2
    result[0xc] = 0x3f800000
    result[0xd] = 0
    int32_t eax_7 = *(arg1 + 0x10) + *(arg1 + 0x18)
    float xmm0_6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc)))
    float xmm2_6 = _mm_cvtepi32_ps(zx.o(eax_7))
    
    if (arg3 != 0)
        xmm0_6 = xmm0_6 - 0.5f
        xmm2_6 = xmm2_6 - 0.5f
    
    result[0xe] = xmm0_6
    result[0xf] = xmm2_6
    result[0x10] = 0x3f000000
    result[0x11] = 0x3f800000
    result[0x12] = esi_2
    result[0x13] = 0
    result[0x14] = 0x3f800000
    int32_t eax_11 = *(arg1 + 0x10) + *(arg1 + 0x18)
    float xmm0_8 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc) + *(arg1 + 0x14)))
    float xmm2_8 = _mm_cvtepi32_ps(zx.o(eax_11))
    
    if (arg3 != 0)
        xmm0_8 = xmm0_8 - 0.5f
        xmm2_8 = xmm2_8 - 0.5f
    
    result[0x15] = xmm0_8
    result[0x16] = xmm2_8
    result[0x17] = 0x3f000000
    result[0x18] = 0x3f800000
    result[0x19] = esi_2
    result[0x1a] = 0x3f800000
    result[0x1b] = 0x3f800000
    
    if ((*(**(arg1 + 4) + 0x1c))().b != 0)
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
