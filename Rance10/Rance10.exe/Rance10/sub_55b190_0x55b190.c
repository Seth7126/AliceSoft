// 函数: sub_55b190
// 地址: 0x55b190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b2c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm2
float var_2c = xmm2
float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xf4) - *(arg1 + 0xf0)))
void var_44
int32_t* eax_5 = sub_55a920(&var_44, arg1 + 0x1c)
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = muls.dp.d(0x2aaaaaab, eax_5[1] - *eax_5)
int32_t edx_2 = edx_1 s>> 2
sub_417070(&var_44)
float xmm0_3 = _mm_cvtepi32_ps(zx.o((edx_2 u>> 0x1f) + edx_2))
int32_t eax_7 = sub_55aaf0(*(arg1 + 0xac), arg1 + 0xc0)
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_55aaf0(*(arg1 + 0x6c), arg1 + 0xb4) - eax_7
int32_t var_1c = 0
int32_t* esi_4 = *(arg1 + 0xc0)
int32_t edi_1 = *(arg1 + 0xc4)
float xmm0_7 = _mm_cvtepi32_ps(zx.o(result)) * 0.5f + var_2c
float var_24 = xmm0_7

while (esi_4 != edi_1)
    int32_t* ebx_1 = *esi_4
    float var_20 = xmm0_7
    void* ecx_5 = *ebx_1
    int32_t eax_9
    
    if (ecx_5 == 0)
        eax_9 = 0
    else if (*(ebx_1 + 0x16) == 0)
        int32_t* ecx_6 = *(ecx_5 + 0x118)
        
        if (ecx_6 != 0)
            eax_9 = (*(*ecx_6 + 0x14))(eax_2)
        else
            eax_9 = 0
    else
        eax_9 = ebx_1[0xc]
    
    void* ecx_7 = *ebx_1
    float xmm1_3 = arg2 - _mm_cvtepi32_ps(zx.o(eax_9))
    float var_34 = xmm1_3
    var_2c = xmm1_3
    int32_t eax_11
    
    if (ecx_7 == 0)
        eax_11 = 0
    else if (*(ebx_1 + 0x16) == 0)
        int32_t* ecx_8 = *(ecx_7 + 0x118)
        
        if (ecx_8 != 0)
            eax_11 = (*(*ecx_8 + 0x10))(eax_2)
        else
            eax_11 = 0
    else
        eax_11 = ebx_1[0xb]
    
    struct common::CRect::VTable* const var_60 = &common::CRect::`vftable'
    struct common::CPoint::VTable* const var_5c_1 = &common::CPoint::`vftable'
    int32_t var_58_1 = 0
    int32_t var_54_1 = 0
    struct common::CSize::VTable* const var_50_1 = &common::CSize::`vftable'
    int32_t var_4c_1 = 0
    int32_t var_48_1 = 0
    var_24 = var_24 + _mm_cvtepi32_ps(zx.o(eax_11 + *(arg1 + 0xac)))
    int32_t var_8_1 = 0
    float ecx_11 = *ebx_1
    float var_14
    
    if (ecx_11 == 0)
        var_14 = ecx_11
    else if (*(ebx_1 + 0x16) == 0)
        float ecx_12 = *(ecx_11 i+ 0x118)
        
        if (ecx_12 != 0)
            var_14 = (*(*ecx_12 + 0x14))(eax_2)
        else
            var_14 = ecx_12
    else
        var_14 = ebx_1[0xc]
    
    void* ecx_13 = *ebx_1
    float eax_16
    
    if (ecx_13 == 0)
        eax_16 = 0f
    else if (*(ebx_1 + 0x16) == 0)
        int32_t* ecx_14 = *(ecx_13 + 0x118)
        
        if (ecx_14 != 0)
            eax_16 = (*(*ecx_14 + 0x10))(eax_2)
        else
            eax_16 = 0f
    else
        eax_16 = ebx_1[0xb]
    
    char eax_18 =
        sub_55b5a0(var_20, var_34, eax_16, var_14, arg4, arg5, arg6, &var_20, &var_2c, &var_60)
    float* ecx_15 = *ebx_1
    
    if (ecx_15 != 0)
        ebx_1[5].b = eax_18
        ecx_15[6].b = eax_18
    
    float xmm0_14
    
    if (*(arg1 + 0xec) s> 0)
        ecx_15 = &var_34
        int32_t xmm0_15[0x4] = zx.o(*(arg1 + 0xf0))
        float xmm1_8 = _mm_cvtepi32_ps(zx.o(var_1c))
        var_14 = 0f
        float var_38 = 1f
        float xmm0_16 = _mm_cvtepi32_ps(xmm0_15)
        float xmm2_5 =
            (_mm_cvtepi32_ps(zx.o(arg7)) - (xmm1_8 * xmm0_1 / xmm0_3 + xmm0_16)) * 0.00499999989f
        var_34 = xmm2_5
        
        if (xmm2_5 <= 0f)
            ecx_15 = &var_14
        
        float* eax_20 = &var_38
        
        if (1f > *ecx_15)
            eax_20 = ecx_15
        
        xmm0_14 = *eax_20
    else
        xmm0_14 = 1f
    
    var_1c += 1
    float* var_74_3 = ecx_15
    float* var_7c_2 = ecx_15
    result = sub_55b4b0(ebx_1, arg3, var_2c, &var_60, xmm0_14)
    xmm0_7 = var_24
    esi_4 = &esi_4[1]
    int32_t var_8_2 = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
return result
