// 函数: sub_5fbbd0
// 地址: 0x5fbbd0
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
int32_t* result = (*(**(arg1 + 0x98) + 0x18))(__security_cookie ^ &__saved_esi)

if (result != 0)
    int32_t xmm0_1 = *(arg1 + 0x5c)
    int32_t xmm1_1 = *(arg1 + 0x60)
    *result = *(arg1 + 0x58)
    result[1] = xmm0_1
    result[2] = xmm1_1
    __builtin_memset(&result[3], 0, 0x18)
    result[9] = 0xffffffff
    result[0xa] = 0xffffffff
    __builtin_memset(&result[0xb], 0, 0x2c)
    int32_t xmm0_2 = *(arg1 + 0x6c)
    int32_t xmm1_2 = *(arg1 + 0x70)
    result[0x16] = *(arg1 + 0x68)
    result[0x17] = xmm0_2
    result[0x18] = xmm1_2
    __builtin_memset(&result[0x19], 0, 0x18)
    result[0x1f] = 0xffffffff
    result[0x20] = 0xffffffff
    result[0x21] = 0x3f800000
    __builtin_memset(&result[0x22], 0, 0x28)
    int32_t xmm0_3 = *(arg1 + 0x7c)
    int32_t xmm1_3 = *(arg1 + 0x80)
    result[0x2c] = *(arg1 + 0x78)
    result[0x2d] = xmm0_3
    result[0x2e] = xmm1_3
    __builtin_memset(&result[0x2f], 0, 0x18)
    result[0x35] = 0xffffffff
    result[0x36] = 0xffffffff
    result[0x37] = 0
    result[0x38] = 0x3f800000
    __builtin_memset(&result[0x39], 0, 0x24)
    int32_t xmm0_4 = *(arg1 + 0x8c)
    int32_t xmm1_4 = *(arg1 + 0x90)
    result[0x42] = *(arg1 + 0x88)
    result[0x43] = xmm0_4
    result[0x44] = xmm1_4
    __builtin_memset(&result[0x45], 0, 0x18)
    result[0x4b] = 0xffffffff
    result[0x4c] = 0xffffffff
    result[0x4d] = 0x3f800000
    result[0x4e] = 0x3f800000
    __builtin_memset(&result[0x4f], 0, 0x24)
    
    if ((*(**(arg1 + 0x98) + 0x1c))().b != 0)
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
