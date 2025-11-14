// 函数: sub_592bc0
// 地址: 0x592bc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8498
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CWriteVB::VTable* const var_10 = &sealengine::CWriteVB::`vftable'
int32_t var_4 = 0
int32_t __saved_edi
void* result
int32_t ecx_1
result, ecx_1 = (*(**(arg1 + 0x290) + 0x18))(__security_cookie ^ &__saved_edi)
void* result_1 = result

if (result_1 != 0)
    int32_t eax_4 = *(arg1 + 0x298)
    int32_t ebx_1 = 0
    
    if (eax_4 s> 0)
        do
            int32_t xmm1_6[0x4] = _mm_cvtepi32_ps(zx.o(ebx_1)) * 360f / _mm_cvtepi32_ps(zx.o(eax_4))
                * 3.14159274f * 0.00555555569f
            float xmm0_4 = ___libm_sse2_cosf(xmm1_6)
            float xmm0_6 = ___libm_sse2_sinf(xmm1_6)
            int16_t top = top + 2
            float xmm3_2 = xmm0_6 ^ (data_7094c0).d
            *(result_1 + 4) = 0
            ebx_1 += 1
            *result_1 = xmm0_4 * 0f + xmm0_6
            *(result_1 + 8) = xmm3_2 * 0f + xmm0_4
            __builtin_memset(result_1 + 0xc, 0, 0x18)
            *(result_1 + 0x24) = 0xffffffff
            *(result_1 + 0x28) = 0xffffffff
            __builtin_memset(result_1 + 0x2c, 0, 0x2c)
            result_1 += 0x58
            eax_4 = *(arg1 + 0x298)
        while (ebx_1 s< eax_4)
    
    __builtin_memset(result_1, 0, 0x24)
    *(result_1 + 0x24) = 0xffffffff
    *(result_1 + 0x28) = 0xffffffff
    __builtin_memset(result_1 + 0x2c, 0, 0x2c)
    
    if ((*(**(arg1 + 0x290) + 0x1c))().b != 0)
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
