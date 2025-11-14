// 函数: sub_612230
// 地址: 0x612230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cd64e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void var_88
sub_608f00(&var_88)
int32_t var_c_1 = 0
struct IShaderParam::graphengine::CShaderParam::VTable* var_50
sub_609200(&var_88, sub_608f00(&var_50))
int32_t var_84 = 0x14
int32_t var_80 = 4

if (sub_608f90(arg1 + 0x50, &var_88) != 0)
    int32_t* ecx_4 = *(arg1 + 0x4c)
    
    if (ecx_4 != 0)
        (*(*ecx_4 + 4))(eax_2)
        *(arg1 + 0x4c) = 0
    
    int32_t* ecx_5 = *(arg1 + 0x48)
    
    if (ecx_5 != 0)
        (*(*ecx_5 + 4))(eax_2)
        *(arg1 + 0x48) = 0
    
    sub_6093d0(arg1 + 0x50)
    void* var_c0_2 = arg1 + 0x50
    
    if (sub_612900(arg1, &var_88) == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (sub_612940(arg1, &var_88, 0) == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    sub_609200(arg1 + 0x50, &var_88)

float* var_94
sub_42f420(&var_94, 4)
var_c_1.b = 1
float xmm0_1 = _mm_cvtepi32_ps(zx.o(arg13))
float* ecx_11 = var_94
*ecx_11 = 2f / xmm0_1
ecx_11[1] = -2f / _mm_cvtepi32_ps(zx.o(arg14))
ecx_11[2] = 0xbf800000
ecx_11[3] = 0x3f800000
int32_t edx = *(arg1 + 0xbc)
int32_t* edi = *(*(arg1 + 4) + 0x38)
void* ebx

if (edx == 0)
    ebx.b = 0
else
    (*(*edi + 0xc0))(edi, edx, 0, 0, ecx_11, 0, 0)
    float var_a8 = 0f
    int32_t* var_a0 = nullptr
    int32_t var_9c_1 = 0
    int32_t var_98_1 = 0
    sub_42f4d0(&var_a0, 0x80, &var_a8)
    var_c_1.b = 2
    double* eax_10
    float xmm0_8
    int80_t x87_r0
    eax_10, xmm0_8 = ___libm_sse2_tanf(arg2 * 0.5f * 3.14159274f * 0.00555555569f, x87_r0)
    int16_t top_1 = 1
    float xmm2_2 = _mm_cvtepi32_ps(zx.o(arg4))
    float xmm3_1 = _mm_cvtepi32_ps(zx.o(arg3))
    float xmm1_3 = xmm0_8 * xmm2_2
    float xmm2_4 = arg12 - arg11
    int32_t xmm1_4 = (zx.o(0)).d
    xmm2_4 f- 0
    eax_10:1.b = (xmm2_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_4, 0f) ? 1 : 0) << 2
        | (xmm2_4 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm1_4 = 1f / xmm2_4
    
    int32_t* eax_11 = var_a0
    int32_t i = 0
    *eax_11 = arg7
    ebx = &eax_11[0xd]
    eax_11[1] = xmm1_4
    eax_11[2] = arg12
    eax_11[4] = arg5
    eax_11[5] = arg6
    eax_11[8] = xmm0_8
    float xmm4_2 = arg9
    eax_11[9] = xmm1_3 / xmm3_1
    eax_11[0xa] = 1f / xmm0_8
    eax_11[0xb] = xmm3_1 / xmm1_3
    float xmm3_4 = arg10 - xmm4_2
    arg10 = xmm3_4
    
    do
        float xmm0_14 = _mm_cvtepi32_ps(zx.o(i))
        float xmm0_18 = xmm0_14 * 0.0416666679f * arg8 * 2f * 3.14159274f
        var_a8 = xmm0_14 * xmm3_4 * 0.0416666679f + xmm4_2
        *(ebx - 4) = ___libm_sse2_sinf(xmm0_18, eax_2) * var_a8
        top_1 += 2
        i += 1
        xmm3_4 = arg10
        xmm4_2 = arg9
        *ebx = ___libm_sse2_cosf(xmm0_18) * var_a8
        ebx += 0x10
    while (i s< 0x18)
    
    int32_t ecx_13 = *(arg1 + 0xc4)
    int32_t* edi_1 = var_a0
    int32_t* edx_1 = *(*(arg1 + 4) + 0x38)
    
    if (ecx_13 == 0)
    label_6125c9:
        ebx.b = 0
        j__free(edi_1)
        ecx_11 = var_94
    else
        (*(*edx_1 + 0xc0))(edx_1, ecx_13, 0, 0, edi_1, 0, 0)
        float eax_14 = *(arg1 + 0xbc)
        ebx = *(arg1 + 4)
        
        if (eax_14 == 0)
            goto label_6125c9
        
        var_a8 = eax_14
        
        if (*(ebx + 0x144) != eax_14)
            int32_t* eax_15 = *(ebx + 0x38)
            (*(*eax_15 + 0x1c))(eax_15, 0, 1, &var_a8)
            *(ebx + 0x144) = var_a8
        
        if (sub_60a7f0(arg1 + 0xc0, *(arg1 + 4)) == 0)
            goto label_6125c9
        
        ebx.b = 1
        j__free(edi_1)
        ecx_11 = var_94

j__free(ecx_11)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
