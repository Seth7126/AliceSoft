// 函数: sub_501c80
// 地址: 0x501c80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736f28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** i
i.b = arg2[0x2a].b

if (i.b != 0)
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** eax_3 = sub_4ef140(arg1[0x2d])
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = muls.dp.d(0x2aaaaaab, arg1[0x5e] - arg1[0x5d])
    int32_t edi_1 = arg1[0x46]
    int32_t ecx_3 = arg1[0x45]
    int32_t edx_2 = edx_1 s>> 2
    int32_t esi_3 = (edx_2 u>> 0x1f) + edx_2
    int32_t var_38 = 0
    int32_t temp0_1 = divs.dp.d(sx.q(edi_1), ecx_3)
    int32_t var_48 = esi_3
    int32_t var_34 = temp0_1
    int32_t* ecx_4 = &var_34
    
    if (temp0_1 s>= esi_3)
        ecx_4 = &var_48
    
    int32_t var_88_1 = 1
    int32_t eax_8 = *ecx_4
    int32_t ecx_5 = arg1[0x47]
    var_34 = ecx_5
    float eax_10 = eax_3[0x46]
    int32_t eax_11 = arg1[0x60]
    int32_t eax_12 = arg1[0x44]
    var_48 = eax_12
    int32_t eax_13
    int32_t edx_4
    edx_4:eax_13 = sx.q(eax_12)
    int32_t* edx_5 = &var_34
    int32_t eax_15 = (eax_13 - edx_4) s>> 1
    int32_t var_3c = eax_15
    int32_t* ecx_6 = &var_38
    
    if (ecx_5 s>= eax_15)
        edx_5 = &var_3c
    
    int32_t esi_4 = arg1[0x48]
    
    if (*edx_5 s> 0)
        ecx_6 = edx_5
    
    int32_t eax_16 = *ecx_6
    int32_t* ecx_7 = &var_34
    int32_t eax_18
    int32_t edx_6
    edx_6:eax_18 = sx.q(edi_1)
    var_34 = esi_4
    int32_t eax_20 = (eax_18 - edx_6) s>> 1
    var_3c = eax_20
    int32_t* eax_21 = &var_38
    var_38 = 0
    
    if (esi_4 s>= eax_20)
        ecx_7 = &var_3c
    
    if (*ecx_7 s> 0)
        eax_21 = ecx_7
    
    int32_t eax_22 = *eax_21
    int32_t esi_5 = *(arg1[0x63] + 0xa4)
    int32_t ecx_9 = (*(*arg1 + 0x24))(var_88_1)
    int32_t ecx_10
    
    if (esi_5 - 1 u> 8)
        ecx_10 = 0
    else
        switch (esi_5 + &jump_table_50235c[2]:3)
            case &lookup_table_502368, &lookup_table_502368[3], &lookup_table_502368[6]
                ecx_10 = 0
            case &lookup_table_502368[1], &lookup_table_502368[4], &lookup_table_502368[7]
                int32_t eax_28
                int32_t edx_7
                edx_7:eax_28 = sx.q(ecx_9)
                ecx_10 = neg.d((eax_28 - edx_7) s>> 1)
            case &lookup_table_502368[2], &lookup_table_502368[5], &lookup_table_502368[8]
                ecx_10 = neg.d(ecx_9)
    
    void* eax_31 = arg1[0x63]
    int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(ecx_10))
    int32_t var_88_2 = 1
    int32_t esi_7 = *(eax_31 + 0xa4)
    int32_t eax_32 = *arg1
    var_3c = xmm0_2
    int32_t ecx_12 = (*(eax_32 + 0x28))(var_88_2)
    int32_t ecx_13
    
    if (esi_7 - 1 u> 8)
        ecx_13 = 0
    else
        switch (esi_7 + &jump_table_502374[2]:3)
            case &lookup_table_502380, &lookup_table_502380[1], &lookup_table_502380[2]
                ecx_13 = 0
            case &lookup_table_502380[3], &lookup_table_502380[4], &lookup_table_502380[5]
                int32_t eax_36
                int32_t edx_8
                edx_8:eax_36 = sx.q(ecx_12)
                ecx_13 = neg.d((eax_36 - edx_8) s>> 1)
            case &lookup_table_502380[6], &lookup_table_502380[7], &lookup_table_502380[8]
                ecx_13 = neg.d(ecx_12)
    
    void* ecx_14 = arg1[0x63]
    int32_t var_88_3 = 1
    float var_64
    int32_t* var_90_1 = &var_64
    var_38 = _mm_cvtepi32_ps(zx.o(ecx_13))
    float var_6c
    sub_4eddb0(ecx_14, &var_6c, var_90_1, ecx_14 + 0x260, var_88_3)
    void* ecx_15 = arg1[0x63]
    sub_4eddb0(ecx_15, &var_34, &var_64, ecx_15 + 0x260, 1)
    int32_t esi_11 = (arg1[0x2f] - arg1[0x2e]) s>> 2
    bool cond:3_1 = *(arg1 + 0x199) != 0
    var_34 = esi_11
    float var_40
    float edi_5
    
    if (cond:3_1)
        edi_5 = eax_10
    else
        void* edi_2 = data_7fcb64
        float var_50 = 0f
        var_40 = 0f
        
        if (sub_47d5a0(edi_2) != 0 && (***(edi_2 + 0xc))(&var_50, &var_40) != 0)
            long double x87_r0
            long double x87_r1
            float eax_45 = sub_63cd60(var_50, x87_r0, x87_r1)
            float ecx_19 = var_40
            var_50 = eax_45
            long double x87_r2
            var_40 = sub_63cd60(ecx_19, x87_r1, x87_r2)
        
        int32_t edi_4 = var_48 - 0x10
        
        if ((*(*arg1 + 0x48))(eax_2) == 0)
            arg1[0x10] = 0xffffffff
            edi_5 = eax_10
        else
            float xmm2_1 = var_6c
            int32_t xmm1_2 = _mm_cvtepi32_ps(zx.o(var_50))
            
            if (xmm1_2 f< xmm2_1)
                arg1[0x10] = 0xffffffff
                edi_5 = eax_10
            else if (_mm_cvtepi32_ps(zx.o(edi_4)) + xmm2_1 f< xmm1_2)
                arg1[0x10] = 0xffffffff
                edi_5 = eax_10
            else
                float xmm2_2 = var_64
                float xmm1_4 = _mm_cvtepi32_ps(zx.o(var_40))
                
                if (xmm1_4 < xmm2_2)
                    arg1[0x10] = 0xffffffff
                    edi_5 = eax_10
                else if (_mm_cvtepi32_ps(zx.o(esi_11 * ecx_3)) + xmm2_2 < xmm1_4)
                    arg1[0x10] = 0xffffffff
                    edi_5 = eax_10
                else
                    edi_5 = eax_10
                    int32_t eax_52 = int.d((xmm1_4 - xmm2_2) / _mm_cvtepi32_ps(zx.o(ecx_3))
                        + _mm_cvtepi32_ps(zx.o(edi_5)))
                    
                    if (eax_52 s< esi_3)
                        arg1[0x10] = eax_52
    
    char var_2d_1
    
    if (edi_5 s<= eax_11)
        var_2d_1 = 1
    
    if (edi_5 s> eax_11 || eax_11 s>= eax_8 i+ edi_5)
        var_2d_1 = 0
    
    int32_t eax_57
    int32_t ecx_23
    eax_57, ecx_23 = (*(*arg1 + 0x48))(eax_2)
    
    if (eax_57.b != 0 || *(arg1 + 0x199) != eax_57.b)
        ecx_23 = arg1[0x10]
    
    if ((eax_57.b == 0 && *(arg1 + 0x199) == eax_57.b) || edi_5 s> ecx_23
            || ecx_23 s>= eax_8 i+ edi_5)
        eax_57.b = 0
    else
        eax_57.b = 1
    
    ecx_23.b = var_2d_1
    var_64.b = ecx_23.b
    char var_2e_1 = eax_57.b
    var_64:1.b = eax_57.b
    float eax_59 = var_64
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<class <lambda_b5e6248a4cca9627f92cb0abf4c6df28>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::VTable
        * const var_ac = &std::_Func_impl<class <lambda_b5e6248a4cca9627f92cb0abf4c6df28>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    int32_t* var_a8_1 = arg1
    float var_a4_1 = eax_59
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<class <lambda_b5e6248a4cca9627f92cb0abf4c6df28>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::VTable
        * const* var_88_6 = &var_ac
    sub_4c2b20(&arg1[0x12], var_ac)
    int32_t xmm2_3 = var_3c
    int32_t xmm1_8 = var_38
    
    if (var_2d_1 != 0)
        void* ecx_25 = arg1[0x2b]
        *(ecx_25 + 0x90) = xmm2_3
        *(ecx_25 + 0x94) = _mm_cvtepi32_ps(zx.o((eax_11 i- edi_5) * ecx_3)) f+ xmm1_8
        *(arg1[0x2b] + 0x1a9) = 1
    
    *(arg1[0x2b] + 0xaa) = var_2d_1
    
    if (var_2e_1 != 0)
        void* ecx_26 = arg1[0x2c]
        int32_t eax_67 = (arg1[0x10] i- edi_5) * ecx_3
        *(ecx_26 + 0x90) = xmm2_3
        *(ecx_26 + 0x94) = _mm_cvtepi32_ps(zx.o(eax_67)) f+ xmm1_8
    
    int32_t var_88_7 = 2
    *(arg1[0x2c] + 0xaa) = var_2e_1
    *(arg1[0x2c] + 0x1a9) = 1
    void* ecx_27 = arg1[0x2d]
    float xmm0_22 = _mm_cvtepi32_ps(zx.o(var_48 - 0x10))
    void* var_2c
    int32_t* var_8c_4 = &var_2c
    *(ecx_27 + 0x94) = xmm1_8
    *(ecx_27 + 0x90) = xmm0_22 f+ xmm2_3
    char* eax_72 = sub_4ee1f0(arg1[0x63], var_8c_4, var_88_7)
    int32_t var_8_1 = 0
    char* ecx_30 = arg1[0x2d] + 0x1e8
    
    if (ecx_30 != eax_72)
        sub_403590(ecx_30, eax_72, 0, 0xffffffff)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    char* eax_75 = sub_4ee1f0(arg1[0x63], &var_2c, 3)
    int32_t var_8_3 = 1
    char* ecx_33 = arg1[0x2d] + 0x200
    
    if (ecx_33 != eax_75)
        sub_403590(ecx_33, eax_75, 0, 0xffffffff)
    
    int32_t var_8_4 = 0xffffffff
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    int32_t eax_78 = arg1[0x11]
    
    if (eax_78 != eax_11)
        if (eax_11 s< edi_5 && arg1[0x66].b != 0)
            int32_t var_88_13 = eax_11
            sub_4f7c10(&eax_3[0x33])
        else if (eax_78 != eax_11 && edi_5 i+ eax_8 s<= eax_11 && arg1[0x66].b != 0)
            int32_t var_88_14 = eax_11 - eax_8 + 1
            sub_4f7c10(&eax_3[0x33])
    
    void* eax_83 = arg1[0x2a]
    int32_t xmm0_24 = var_3c
    int32_t xmm3_1 = var_38
    arg1[0x66].b = 0
    arg1[0x11] = eax_11
    *(eax_83 + 0x90) = xmm0_24
    *(eax_83 + 0x94) = xmm3_1
    
    if (esi_3 != 0)
        int32_t eax_84 = 0
        int32_t var_4c_2 = 0
        
        if (var_34 s> 0)
            float esi_13 = edi_5
            int32_t edi_7 = edi_5 i* 0x18
            var_40 = esi_13
            int32_t var_44_2 = edi_7
            
            do
                var_48 = sub_4efcc0(*(arg1[0x2e] + (eax_84 << 2)))
                
                if (esi_3 s> esi_13)
                    void* edi_8 = &arg1[0x31]
                    int32_t eax_89
                    int32_t edx_10
                    edx_10:eax_89 = muls.dp.d(0x2aaaaaab, *(edi_8 + 0xb4) - *(edi_8 + 0xb0))
                    int32_t edx_11 = edx_10 s>> 2
                    
                    if ((edx_11 u>> 0x1f) + edx_11 s> esi_13 && esi_13 s>= 0)
                        edi_8 = *(edi_8 + 0xb0) + var_44_2
                    
                    void* esi_17 = *(var_48 + 0x44)
                    sub_555e00(esi_17, 0x13, 1)
                    sub_55d4d0(*(esi_17 + 0x80), edi_8)
                    edi_7 = var_44_2
                else
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c.b = 0
                    sub_403490(&var_2c, &data_75d217, nullptr)
                    int32_t var_8_5 = 2
                    void* esi_15 = *(var_48 + 0x44)
                    sub_555e00(esi_15, 0x13, 1)
                    sub_55d4d0(*(esi_15 + 0x80), &var_2c)
                    int32_t var_8_6 = 0xffffffff
                    
                    if (var_18_1 u>= 0x10)
                        sub_403160(var_2c, var_18_1 + 1, 1)
                
                edi_7 += 0x18
                eax_84 = var_4c_2 + 1
                esi_13 = var_40 i+ 1
                var_4c_2 = eax_84
                var_40 = esi_13
                var_44_2 = edi_7
            while (eax_84 s< var_34)
            
            xmm3_1 = var_38
            xmm0_24 = var_3c
            edi_5 = eax_10
    
    i = arg1[0x2e]
    
    if (i != arg1[0x2f])
        float xmm1_10 = _mm_cvtepi32_ps(zx.o(eax_16))
        float xmm2_5 = _mm_cvtepi32_ps(zx.o(eax_22))
        
        do
            void* edx_12 = *i
            void* ecx_47 = i - arg1[0x2e]
            i = &i[1]
            *(edx_12 + 0x90) = xmm1_10 f+ xmm0_24
            *(edx_12 + 0x94) = _mm_cvtepi32_ps(zx.o((ecx_47 s>> 2) * ecx_3)) f+ xmm3_1 + xmm2_5
            *(edx_12 + 0x1a9) = 1
        while (i != arg1[0x2f])
    
    if (arg1[0x4f] != edi_5)
        arg1[0x4f] = edi_5
        arg1[0x62].b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return i
