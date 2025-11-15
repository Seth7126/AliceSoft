// 函数: sub_55ac70
// 地址: 0x55ac70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b2c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_38 = ebx
int32_t eax_4 = sub_55ab70(ebx + 0xb4, ebx + 0x38)
sub_559960(ebx + 0xcc)
int32_t var_14 = 0
int32_t result_1 = 1
int32_t* ecx_1 = ebx + 0xb4
int32_t edx_1 = 0
int32_t i = 0
int32_t result = (ecx_1[1] - *ecx_1) s>> 2
int32_t var_18 = 0

if (result == 0)
    *(ebx + 0xec) = 0
else
    float xmm1_3 = _mm_cvtepi32_ps(zx.o(eax_4)) + arg5
    float var_30_1 = xmm1_3
    
    do
        int32_t eax_7 = *ecx_1
        float xmm0_2 = _mm_cvtepi32_ps(zx.o(edx_1))
        int32_t* esi_1 = *(eax_7 + (i << 2))
        float xmm0_3 = xmm0_2 + arg2
        void* ecx_2 = *esi_1
        int32_t eax_8
        
        if (ecx_2 == 0)
            eax_8 = 0
        else if (*(esi_1 + 0x16) == 0)
            int32_t* ecx_3 = *(ecx_2 + 0x118)
            
            if (ecx_3 != 0)
                eax_8 = (*(*ecx_3 + 0x14))(eax_2)
                xmm1_3 = var_30_1
            else
                eax_8 = 0
        else
            eax_8 = esi_1[0xc]
        
        void* ecx_4 = *esi_1
        float xmm1_4 = xmm1_3 - _mm_cvtepi32_ps(zx.o(eax_8))
        float var_28 = xmm1_4
        float var_20 = xmm1_4
        int32_t eax_10
        
        if (ecx_4 == 0)
            eax_10 = 0
        else if (*(esi_1 + 0x16) == 0)
            int32_t* ecx_5 = *(ecx_4 + 0x118)
            
            if (ecx_5 != 0)
                eax_10 = (*(*ecx_5 + 0x10))(eax_2)
            else
                eax_10 = 0
        else
            eax_10 = esi_1[0xb]
        
        int32_t eax_12 = eax_10 + *(ebx + 0x6c)
        var_18 += eax_12
        struct common::CRect::VTable* const var_60 = &common::CRect::`vftable'
        struct common::CPoint::VTable* const var_5c_1 = &common::CPoint::`vftable'
        int32_t var_58_1 = 0
        int32_t var_54_1 = 0
        struct common::CSize::VTable* const var_50_1 = &common::CSize::`vftable'
        int32_t var_4c_1 = 0
        int32_t var_48_1 = 0
        int32_t var_8_1 = 0
        void* ecx_6 = *esi_1
        float var_24 = 0f
        float ebx_1
        
        if (ecx_6 == 0)
            ebx_1 = 0f
        else if (*(esi_1 + 0x16) == 0)
            int32_t* ecx_7 = *(ecx_6 + 0x118)
            
            if (ecx_7 != 0)
                ebx_1 = (*(*ecx_7 + 0x14))(eax_2)
            else
                ebx_1 = 0f
        else
            ebx_1 = esi_1[0xc]
        
        void* ecx_8 = *esi_1
        float eax_15
        
        if (ecx_8 == 0)
            eax_15 = 0f
        else if (*(esi_1 + 0x16) == 0)
            int32_t* ecx_9 = *(ecx_8 + 0x118)
            
            if (ecx_9 != 0)
                eax_15 = (*(*ecx_9 + 0x10))(eax_2)
            else
                eax_15 = 0f
        else
            eax_15 = esi_1[0xb]
        
        char eax_17 =
            sub_55b5a0(xmm0_3, var_28, eax_15, ebx_1, arg6, arg7, arg8, &var_24, &var_20, &var_60)
        void* const ecx_10 = *esi_1
        
        if (ecx_10 != 0)
            esi_1[5].b = eax_17
            *(ecx_10 + 0x18) = eax_17
        
        ebx = var_38
        int32_t eax_18 = *(ebx + 0xec)
        float xmm0_9 = _mm_cvtepi32_ps(zx.o(eax_18))
        float xmm0_10
        
        if (eax_18 s> 0)
            float* ecx_11 = &var_28
            float xmm1_7 = _mm_cvtepi32_ps(zx.o(var_14))
            float var_3c = 0f
            float var_40 = 1f
            float xmm2_5 = (_mm_cvtepi32_ps(zx.o(arg9))
                - (xmm1_7 * xmm0_9 + _mm_cvtepi32_ps(zx.o(*(ebx + 0xf0))))) * 0.00499999989f
            var_28 = xmm2_5
            
            if (xmm2_5 <= 0f)
                ecx_11 = &var_3c
            
            float* eax_19 = &var_40
            
            if (1f > *ecx_11)
                eax_19 = ecx_11
            
            ecx_10 = nullptr
            xmm0_10 = *eax_19
            int32_t result_2 = zx.d(result_1.b)
            
            if (1f > xmm0_10)
                result_2 = 0
            
            result_1 = result_2
        else
            xmm0_10 = 1f
        
        var_14 += 1
        void* const var_74_3 = ecx_10
        void* const var_7c_2 = ecx_10
        var_28 = xmm0_10
        sub_55b4b0(esi_1, arg4, var_20, &var_60, xmm0_10)
        void* j = *(ebx + 0xd8)
        
        for (int32_t ecx_12 = *(ebx + 0xdc); j != ecx_12; j += 0x1c)
            if (i s>= *(j + 4) && *(j + 0xc) s>= i)
                int32_t var_74_5 = *(j + 0x18)
                int32_t var_78_3 = *(j + 0x14)
                int32_t var_80_3 = ecx_12
                sub_55aff0(ebx, eax_12, arg3, arg4, xmm0_3, arg5, arg6, arg7, arg8, var_28, 
                    *(j + 0x10))
                break
        
        xmm1_3 = var_30_1
        ecx_1 = ebx + 0xb4
        edx_1 = var_18
        i += 1
        int32_t var_8_2 = 0xffffffff
    while (i u< (ecx_1[1] - *ecx_1) s>> 2)
    
    result = result_1
    
    if (result.b != 0)
        *(ebx + 0xec) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
