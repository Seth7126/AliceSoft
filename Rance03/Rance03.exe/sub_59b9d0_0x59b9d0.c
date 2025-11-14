// 函数: sub_59b9d0
// 地址: 0x59b9d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8708
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CWriteVB::VTable* const var_10 = &sealengine::CWriteVB::`vftable'
int32_t var_4 = 0
int32_t __saved_esi
int32_t ebx
ebx.b = (*(*arg9 + 0x9c))(__security_cookie ^ &__saved_esi)
float* result = (*(**(arg1 + 4) + 0x18))()

if (result != 0)
    float xmm3 = arg2
    float xmm0_1 = xmm3
    float xmm4_1 = arg3
    
    if (ebx.b != 0)
        xmm0_1 = xmm0_1 - 0.5f
        xmm4_1 = xmm4_1 - 0.5f
    
    float xmm5_1 = arg3
    *result = xmm0_1
    result[1] = xmm4_1
    result[2] = 0x3f000000
    result[3] = 0x3f800000
    result[4] = arg6
    result[5] = 0
    result[6] = 0
    float xmm0_3 = xmm3 + arg4
    float xmm4_2 = xmm0_3
    
    if (ebx.b != 0)
        xmm4_2 = xmm4_2 - 0.5f
        xmm5_1 = xmm5_1 - 0.5f
    
    result[8] = xmm5_1
    result[7] = xmm4_2
    result[9] = 0x3f000000
    result[0xa] = 0x3f800000
    result[0xb] = arg6
    result[0xc] = arg7
    result[0xd] = 0
    float xmm1_1 = arg3 + arg5
    float xmm4_3 = xmm1_1
    
    if (ebx.b != 0)
        xmm3 = xmm3 - 0.5f
        xmm4_3 = xmm4_3 - 0.5f
    
    result[0xe] = xmm3
    result[0xf] = xmm4_3
    result[0x10] = 0x3f000000
    result[0x11] = 0x3f800000
    result[0x12] = arg6
    result[0x13] = 0
    result[0x14] = arg8
    
    if (ebx.b != 0)
        xmm0_3 = xmm0_3 - 0.5f
        xmm1_1 = xmm1_1 - 0.5f
    
    result[0x15] = xmm0_3
    result[0x16] = xmm1_1
    result[0x17] = 0x3f000000
    result[0x18] = 0x3f800000
    result[0x19] = arg6
    int32_t* ecx_3 = *(arg1 + 4)
    result[0x1a] = arg7
    result[0x1b] = arg8
    
    if ((*(*ecx_3 + 0x1c))().b != 0)
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
