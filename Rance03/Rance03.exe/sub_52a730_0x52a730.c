// 函数: sub_52a730
// 地址: 0x52a730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3758
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x3c)
int32_t __saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != 0 && (*(*ecx + 0x14))(__security_cookie ^ &__saved_edi).b != 0)
    struct sealengine::CWriteVB::VTable* const var_10_1 = &sealengine::CWriteVB::`vftable'
    int32_t* edi_1 = arg3
    int32_t* esi_1 = arg2
    int32_t var_4 = 0
    float xmm6_1 = *esi_1
    float xmm1_3 = edi_1[2] f* esi_1[1] - edi_1[1] f* esi_1[2]
    float xmm1_4 = *edi_1
    float xmm6_3 = xmm6_1 f* edi_1[1] - xmm1_4 f* esi_1[1]
    float xmm7_3 = xmm1_4 f* esi_1[2] - xmm6_1 f* edi_1[2]
    result = (*(**(arg1 + 0x3c) + 0x18))()
    
    if (result == 0)
    label_52acbf:
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t* ecx_2 = *(arg1 + 0x20)
    float xmm0_5 = ecx_2[1]
    float xmm0_6 = *ecx_2
    float xmm0_9 = *(arg1 + 0x1c) + edi_1[2] f* xmm0_6 + esi_1[2] f* xmm0_5
    float xmm1_10 = *(arg1 + 0x18) + xmm0_6 f* edi_1[1] + xmm0_5 f* esi_1[1]
    *result = *(arg1 + 0x14) + *edi_1 * xmm0_6 + *esi_1 * xmm0_5
    result[2] = xmm0_9
    result[1] = xmm1_10
    result[3] = xmm1_3
    result[4] = xmm7_3
    result[5] = xmm6_3
    result[6] = 0
    result[7] = 0
    result[8] = 0
    result[9] = 0xffffffff
    result[0xa] = 0xffffffff
    int32_t* eax_6 = *(arg1 + 0x2c)
    int32_t eax_7 = *eax_6
    result[0xc] = eax_6[1]
    result[0xb] = eax_7
    result[0xd] = *(*(arg1 + 0x20) + 8)
    __builtin_memset(&result[0xe], 0, 0x20)
    void* eax_10 = *(arg1 + 0x20)
    float xmm0_14 = *(eax_10 + 0x10)
    float xmm0_15 = *(eax_10 + 0xc)
    float xmm3_5 = *(arg1 + 0x18) + xmm0_15 f* edi_1[1] + xmm0_14 f* esi_1[1]
    float xmm0_18 = *(arg1 + 0x1c) + edi_1[2] f* xmm0_15 + esi_1[2] f* xmm0_14
    result[0x16] = *edi_1 * xmm0_15 f+ *(arg1 + 0x14) + *esi_1 * xmm0_14
    result[0x17] = xmm3_5
    result[0x18] = xmm0_18
    result[0x19] = xmm1_3
    result[0x1a] = xmm7_3
    result[0x1b] = xmm6_3
    result[0x1c] = 0
    result[0x1d] = 0
    result[0x1e] = 0
    result[0x1f] = 0xffffffff
    result[0x20] = 0xffffffff
    void* eax_11 = *(arg1 + 0x2c)
    int32_t eax_12 = *(eax_11 + 8)
    result[0x22] = *(eax_11 + 0xc)
    result[0x21] = eax_12
    result[0x23] = *(*(arg1 + 0x20) + 0x14)
    __builtin_memset(&result[0x24], 0, 0x20)
    void* eax_15 = *(arg1 + 0x20)
    float xmm0_23 = *(eax_15 + 0x1c)
    float xmm3_6 = *(eax_15 + 0x18)
    float xmm5_6 = *esi_1 * xmm0_23
    float xmm7_9 = esi_1[2] f* xmm0_23
    float xmm4_9 = *(arg1 + 0x14) + xmm3_6 f* *edi_1
    float xmm0_27 = *(arg1 + 0x1c) + xmm3_6 f* edi_1[2]
    result[0x2d] = *(arg1 + 0x18) + xmm3_6 f* edi_1[1] + xmm0_23 f* esi_1[1]
    result[0x2c] = xmm4_9 + xmm5_6
    result[0x2e] = xmm0_27 + xmm7_9
    result[0x2f] = xmm1_3
    result[0x30] = xmm7_3
    result[0x31] = xmm6_3
    result[0x32] = 0
    result[0x33] = 0
    result[0x34] = 0
    result[0x35] = 0xffffffff
    result[0x36] = 0xffffffff
    void* eax_16 = *(arg1 + 0x2c)
    int32_t xmm0_31 = *(eax_16 + 0x14)
    result[0x37] = *(eax_16 + 0x10)
    result[0x38] = xmm0_31
    result[0x39] = *(*(arg1 + 0x20) + 0x20)
    __builtin_memset(&result[0x3a], 0, 0x20)
    void* eax_20 = *(arg1 + 0x20)
    float xmm0_32 = *(eax_20 + 0x28)
    float xmm2_8 = *(eax_20 + 0x24)
    float xmm5_8 = xmm0_32 f* esi_1[1]
    float xmm6_11 = esi_1[2] f* xmm0_32
    float xmm2_9 = xmm2_8 f* edi_1[2]
    float xmm1_16 = *(arg1 + 0x18) + xmm2_8 f* edi_1[1]
    float xmm0_35 = *(arg1 + 0x1c)
    result[0x42] = xmm2_8 f* *edi_1 f+ *(arg1 + 0x14) + *esi_1 * xmm0_32
    result[0x43] = xmm1_16 + xmm5_8
    result[0x44] = xmm0_35 + xmm2_9 + xmm6_11
    result[0x45] = xmm1_3
    result[0x46] = xmm7_3
    result[0x47] = xmm6_3
    result[0x48] = 0
    result[0x49] = 0
    result[0x4a] = 0
    result[0x4b] = 0xffffffff
    result[0x4c] = 0xffffffff
    void* eax_21 = *(arg1 + 0x2c)
    int32_t xmm0_40 = *(eax_21 + 0x1c)
    result[0x4d] = *(eax_21 + 0x18)
    result[0x4e] = xmm0_40
    result[0x4f] = *(*(arg1 + 0x20) + 0x2c)
    __builtin_memset(&result[0x50], 0, 0x20)
    
    if ((*(**(arg1 + 0x3c) + 0x1c))().b == 0)
        goto label_52acbf

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
