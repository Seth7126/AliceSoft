// 函数: sub_4b2a90
// 地址: 0x4b2a90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bd667
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_9c
int32_t eax_2 = __security_cookie ^ &var_9c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = sub_4a26a0(arg1[0x5e], arg2)
struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<struct std::_Callable_obj<class <lambda_25abf16e56161a34925a7e3631690c7f>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::VTable
    * const var_c4 = &std::_Func_impl<struct std::_Callable_obj<class <lambda_25abf16e56161a34925a7e3631690c7f>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
int32_t* var_c0 = arg1
int32_t var_bc = ebx.b.d
struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<struct std::_Callable_obj<class <lambda_25abf16e56161a34925a7e3631690c7f>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::VTable
    * const* var_b4 = &var_c4
int32_t var_c_1 = 0xffffffff
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_47eb70(&arg1[0xf], var_c4)

if (ebx.b != 0)
    void* eax_7 = sub_4a3ac0(arg1[0x27])
    int32_t eax_8
    int32_t edx_1
    edx_1:eax_8 = muls.dp.d(0x2aaaaaab, arg1[0x59] - arg1[0x58])
    int32_t eax_9 = arg1[0x43]
    int32_t ecx_5 = arg1[0x40]
    int32_t edx_2 = edx_1 s>> 2
    int32_t result_5 = (edx_2 u>> 0x1f) + edx_2
    int32_t temp0_1 = divs.dp.d(sx.q(arg1[0x41]), ecx_5)
    int32_t var_88
    int32_t* ecx_6 = &var_88
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result_5
    var_88 = temp0_1
    void* edi_2 = *(eax_7 + 0x100)
    
    if (temp0_1 s>= result_5)
        ecx_6 = &result_1
    
    int32_t ebx_3 = arg1[0x5b]
    int32_t eax_13 = *ecx_6
    void* eax_14 = arg1[0x5e]
    var_88 = &partsengine::COriginPosMode::`vftable'
    int32_t var_84_1 = *(eax_14 + 0x88)
    int32_t var_c_2 = 1
    int32_t eax_18 = sub_50feb0(&var_88, (*(*arg1 + 0x28))(1))
    result_1 = &partsengine::COriginPosMode::`vftable'
    void* eax_19 = arg1[0x5e]
    int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_18))
    int32_t var_8c_1 = *(eax_19 + 0x88)
    var_88 = xmm0_2
    int32_t var_c_3 = 2
    int32_t eax_23 = sub_50ff00(&result_1, (*(*arg1 + 0x2c))(1))
    int32_t var_c_4 = 0xffffffff
    void* ecx_11 = arg1[0x5e]
    result_1 = _mm_cvtepi32_ps(zx.o(eax_23))
    float xmm0_6 = sub_4a1c10(ecx_11) f+ var_88
    float xmm0_8 = sub_4a1cf0(arg1[0x5e]) f+ result_1
    result_1 = arg1[0x3f]
    int32_t eax_27 = (arg1[0x29] - arg1[0x28]) s>> 2
    int32_t eax_28 = data_75d4e0
    int32_t var_64 = 0
    int32_t var_5c = 0
    var_88 = eax_28
    
    if (sub_46cb80(eax_28) != 0)
        (***(var_88 + 0xc))(&var_64, &var_5c)
    
    if ((*(*arg1 + 0x54))(eax_4) == 0)
        arg1[0xd] = 0xffffffff
    else
        int32_t xmm2_2 = _mm_cvtepi32_ps(zx.o(var_64))
        
        if (xmm2_2 f< xmm0_6)
            arg1[0xd] = 0xffffffff
        else if (_mm_cvtepi32_ps(zx.o(&result_1[-4])) + xmm0_6 f< xmm2_2)
            arg1[0xd] = 0xffffffff
        else
            float xmm1_3 = _mm_cvtepi32_ps(zx.o(var_5c))
            
            if (xmm1_3 < xmm0_8)
                arg1[0xd] = 0xffffffff
            else if (_mm_cvtepi32_ps(zx.o(eax_27 * ecx_5)) + xmm0_8 < xmm1_3)
                arg1[0xd] = 0xffffffff
            else
                int32_t eax_38 = int.d((xmm1_3 - xmm0_8) / _mm_cvtepi32_ps(zx.o(ecx_5))
                    + _mm_cvtepi32_ps(zx.o(edi_2)))
                
                if (eax_38 s< result_5)
                    arg1[0xd] = eax_38
    
    char var_92_1
    
    if (edi_2 s<= ebx_3)
        var_92_1 = 1
    
    if (edi_2 s> ebx_3 || ebx_3 s>= eax_13 + edi_2)
        var_92_1 = 0
    
    void* eax_43
    int32_t ecx_19
    eax_43, ecx_19 = (*(*arg1 + 0x54))()
    
    if (eax_43.b != 0)
        ecx_19 = arg1[0xd]
    
    if (eax_43.b == 0 || edi_2 s> ecx_19 || ecx_19 s>= eax_13 + edi_2)
        eax_43.b = 0
    else
        eax_43.b = 1
    
    ecx_19.b = var_92_1
    char var_91_1 = eax_43.b
    char var_53_1 = eax_43.b
    var_c4 = &std::_Func_impl<struct std::_Callable_obj<class <lambda_322e1048fb33ac16e6e624942a4c4967>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    int32_t* var_c0_1 = arg1
    int32_t var_bc_1 = ecx_19.b.d
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<struct std::_Callable_obj<class <lambda_25abf16e56161a34925a7e3631690c7f>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::VTable
        * const* var_b4_2 = &var_c4
    int32_t var_c_5 = 0xffffffff
    sub_47eb70(&arg1[0xf], var_c4)
    void* eax_49
    
    if (var_92_1 == 0)
        eax_49 = arg1[0x25]
        
        if (*(eax_49 + 0x8c) != 0)
            *(eax_49 + 0x8c) = 0
            *(eax_49 + 0x70) = 1
    else
        void* ecx_21 = arg1[0x25]
        float xmm0_19 = *(ecx_21 + 0x7c)
        xmm0_19 - xmm0_6
        int32_t eax_48
        eax_48:1.b = (xmm0_19 == xmm0_6 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_19, xmm0_6) ? 1 : 0) << 2 | (xmm0_19 < xmm0_6 ? 1 : 0)
        float xmm2_6 = _mm_cvtepi32_ps(zx.o((ebx_3 - edi_2) * ecx_5)) + xmm0_8
        bool p_2 = unimplemented  {test ah, 0x44}
        bool p_4
        
        if (not(p_2))
            float xmm0_20 = *(ecx_21 + 0x80)
            xmm0_20 - xmm2_6
            eax_48:1.b = (xmm0_20 == xmm2_6 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_20, xmm2_6) ? 1 : 0) << 2 | (xmm0_20 < xmm2_6 ? 1 : 0)
            p_4 = unimplemented  {test ah, 0x44}
        
        if (p_2 || p_4)
            *(ecx_21 + 0x7c) = xmm0_6
            *(ecx_21 + 0x80) = xmm2_6
            *(ecx_21 + 0x70) = 1
        
        eax_49 = arg1[0x25]
        
        if (*(eax_49 + 0x47d) != 1)
            *(eax_49 + 0x47d) = 1
            *(eax_49 + 0x70) = 1
    
    if (var_91_1 == 0)
        void* eax_53 = arg1[0x26]
        
        if (*(eax_53 + 0x8c) != 0)
            *(eax_53 + 0x8c) = 0
            *(eax_53 + 0x70) = 1
    else
        void* ecx_22 = arg1[0x26]
        float xmm0_21 = *(ecx_22 + 0x7c)
        xmm0_21 - xmm0_6
        int32_t eax_52
        eax_52:1.b = (xmm0_21 == xmm0_6 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_21, xmm0_6) ? 1 : 0) << 2 | (xmm0_21 < xmm0_6 ? 1 : 0)
        float xmm2_9 = _mm_cvtepi32_ps(zx.o((arg1[0xd] - edi_2) * ecx_5)) + xmm0_8
        bool p_6 = unimplemented  {test ah, 0x44}
        bool p_8
        
        if (not(p_6))
            float xmm0_22 = *(ecx_22 + 0x80)
            xmm0_22 - xmm2_9
            eax_52:1.b = (xmm0_22 == xmm2_9 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_22, xmm2_9) ? 1 : 0) << 2 | (xmm0_22 < xmm2_9 ? 1 : 0)
            p_8 = unimplemented  {test ah, 0x44}
        
        if (p_6 || p_8)
            *(ecx_22 + 0x7c) = xmm0_6
            *(ecx_22 + 0x80) = xmm2_9
            *(ecx_22 + 0x70) = 1
    
    void* ecx_23 = arg1[0x27]
    float xmm0_23 = *(ecx_23 + 0x7c)
    float xmm2_12 = _mm_cvtepi32_ps(zx.o(&result_1[-4])) + xmm0_6
    xmm0_23 - xmm2_12
    void* eax_55
    eax_55:1.b = (xmm0_23 == xmm2_12 ? 1 : 0) << 6 | (is_unordered.d(xmm0_23, xmm2_12) ? 1 : 0) << 2
        | (xmm0_23 < xmm2_12 ? 1 : 0)
    bool p_10 = unimplemented  {test ah, 0x44}
    bool p_12
    
    if (not(p_10))
        float xmm0_24 = *(ecx_23 + 0x80)
        xmm0_24 - xmm0_8
        eax_55:1.b = (xmm0_24 == xmm0_8 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_24, xmm0_8) ? 1 : 0) << 2 | (xmm0_24 < xmm0_8 ? 1 : 0)
        p_12 = unimplemented  {test ah, 0x44}
    
    if (p_10 || p_12)
        *(ecx_23 + 0x7c) = xmm2_12
        *(ecx_23 + 0x80) = xmm0_8
        *(ecx_23 + 0x70) = 1
    
    int32_t var_34
    char* eax_56 = sub_4a3390(arg1[0x5e], &var_34, 2)
    var_88 = eax_56
    int32_t var_c_6 = 4
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = arg1[0x27]
    result_1 = result_2
    
    if (sub_4058a0(&result_2[0x120][6], eax_56) == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result_1
        int32_t edx_6 = var_88
        char* ecx_28 = &result_3[0x120][6]
        
        if (ecx_28 != edx_6)
            sub_401ff0(ecx_28, edx_6, 0, 0xffffffff)
            result_3 = result_1
        
        result_3[0x1c].b = 1
    
    int32_t var_c_7 = 0xffffffff
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    char* eax_58 = sub_4a3390(arg1[0x5e], &var_34, 3)
    var_88 = eax_58
    int32_t var_c_8 = 5
    struct _EXCEPTION_REGISTRATION_RECORD** result_4 = arg1[0x27]
    result_1 = result_4
    
    if (sub_4058a0(&result_4[0x120][9], eax_58).b == 0)
        result = result_1
        int32_t edx_8 = var_88
        char* ecx_33 = &result[0x120][9]
        
        if (ecx_33 != edx_8)
            sub_401ff0(ecx_33, edx_8, 0, 0xffffffff)
            result = result_1
        
        result[0x1c].b = 1
    
    int32_t var_c_9 = 0xffffffff
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    result.b = arg1[0xe] != ebx_3
    
    if (result.b != 0)
        if (ebx_3 s< edi_2 && *(arg1 + 0x18e) != 0)
            int32_t var_b0_12 = ebx_3
            sub_4aaa40(eax_7 + 0xb4)
        else if (edi_2 + eax_13 s<= ebx_3 && *(arg1 + 0x18e) != 0)
            int32_t var_b0_13 = ebx_3 - eax_13 + 1
            sub_4aaa40(eax_7 + 0xb4)
    
    void* ecx_37 = arg1[0x24]
    float xmm1_8 = xmm0_6
    float xmm3_2 = xmm0_8
    *(arg1 + 0x18e) = 0
    arg1[0xe] = ebx_3
    float xmm0_25 = *(ecx_37 + 0x7c)
    xmm0_25 - xmm1_8
    result:1.b = (xmm0_25 == xmm1_8 ? 1 : 0) << 6 | (is_unordered.d(xmm0_25, xmm1_8) ? 1 : 0) << 2
        | (xmm0_25 < xmm1_8 ? 1 : 0)
    bool p_14 = unimplemented  {test ah, 0x44}
    bool p_16
    
    if (not(p_14))
        float xmm0_26 = *(ecx_37 + 0x80)
        xmm0_26 - xmm3_2
        result:1.b = (xmm0_26 == xmm3_2 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_26, xmm3_2) ? 1 : 0) << 2 | (xmm0_26 < xmm3_2 ? 1 : 0)
        p_16 = unimplemented  {test ah, 0x44}
    
    if (p_14 || p_16)
        *(ecx_37 + 0x7c) = xmm1_8
        *(ecx_37 + 0x80) = xmm3_2
        *(ecx_37 + 0x70) = 1
    
    if (result_5 != 0)
        result = nullptr
        result_1 = nullptr
        
        if (eax_27 s> 0)
            void* ebx_4 = edi_2
            int32_t edi_4 = edi_2 * 0x18
            void* var_78_2 = ebx_4
            var_88 = edi_4
            
            do
                void* eax_62 = sub_4a4020(*(arg1[0x28] + (result << 2)))
                
                if (result_5 s> ebx_4)
                    int32_t eax_72
                    int32_t edx_9
                    edx_9:eax_72 = muls.dp.d(0x2aaaaaab, arg1[0x59] - arg1[0x58])
                    int32_t edx_10 = edx_9 s>> 2
                    void* ebx_6
                    
                    if ((edx_10 u>> 0x1f) + edx_10 s<= ebx_4 || ebx_4 s< 0)
                        ebx_6 = &arg1[0x2c]
                    else
                        ebx_6 = arg1[0x58] + edi_4
                    
                    void* edi_8 = *(eax_62 + 0x34)
                    
                    if ((*(**(*(edi_8 + 0x28) + 4) + 8))() != 0xd)
                        (*(**(*(edi_8 + 0x28) + 4) + 4))()
                        struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_81 =
                            sub_69adc6(0x15c)
                        struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_7c_4 =
                            eax_81
                        int32_t var_c_12 = 0x15
                        struct partsengine::CSprite::partsengine::CTextSprite::VTable** ecx_51
                        
                        if (eax_81 == 0)
                            ecx_51 = nullptr
                        else
                            ecx_51 = sub_517c70(eax_81)
                        
                        int32_t var_c_13 = 0xffffffff
                        *(*(edi_8 + 0x28) + 4) = ecx_51
                        *(edi_8 + 0x14) = 1
                    
                    sub_5195c0(*(*(edi_8 + 0x28) + 4), ebx_6)
                    ebx_4 = var_78_2
                else
                    void* var_b0_14 = nullptr
                    void* const var_b4_7 = &data_6da29a
                    int32_t var_38_1 = 0xf
                    int32_t var_3c_1 = 0
                    char var_4c = 0
                    sub_402110(&var_4c, var_b4_7, var_b0_14)
                    int32_t var_c_10 = 6
                    void* edi_6 = *(eax_62 + 0x34)
                    
                    if ((*(**(*(edi_6 + 0x28) + 4) + 8))() != 0xd)
                        (*(**(*(edi_6 + 0x28) + 4) + 4))()
                        struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_68 =
                            sub_69adc6(0x15c)
                        struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_7c_3 =
                            eax_68
                        var_c_10.b = 9
                        struct partsengine::CSprite::partsengine::CTextSprite::VTable** ecx_44
                        
                        if (eax_68 == 0)
                            ecx_44 = nullptr
                        else
                            ecx_44 = sub_517c70(eax_68)
                        
                        var_c_10.b = 6
                        *(*(edi_6 + 0x28) + 4) = ecx_44
                        *(edi_6 + 0x14) = 1
                    
                    sub_5195c0(*(*(edi_6 + 0x28) + 4), &var_4c)
                    int32_t var_c_11 = 0xffffffff
                    
                    if (var_38_1 u>= 0x10)
                        j__free(var_4c.d)
                    
                    int32_t var_38_2 = 0xf
                    int32_t var_3c_2 = 0
                    var_4c = 0
                
                ebx_4 += 1
                result = result_1 + 1
                edi_4 = var_88 + 0x18
                result_1 = result
                var_78_2 = ebx_4
                var_88 = edi_4
            while (result s< eax_27)
            
            xmm3_2 = xmm0_8
            xmm1_8 = xmm0_6
    
    void** i = arg1[0x28]
    
    if (i != arg1[0x29])
        float xmm4_2 = _mm_cvtepi32_ps(zx.o(eax_9))
        float xmm2_14 = xmm4_2 + xmm1_8
        
        do
            void* edx_11 = *i
            float xmm0_27 = *(edx_11 + 0x7c)
            xmm0_27 - xmm2_14
            int32_t eax_88
            eax_88:1.b = (xmm0_27 == xmm2_14 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_27, xmm2_14) ? 1 : 0) << 2 | (xmm0_27 < xmm2_14 ? 1 : 0)
            float xmm1_12 =
                _mm_cvtepi32_ps(zx.o(((i - arg1[0x28]) s>> 2) * ecx_5)) + xmm3_2 + xmm4_2
            bool p_18 = unimplemented  {test ah, 0x44}
            bool p_20
            
            if (not(p_18))
                float xmm0_28 = *(edx_11 + 0x80)
                xmm0_28 - xmm1_12
                eax_88:1.b = (xmm0_28 == xmm1_12 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_28, xmm1_12) ? 1 : 0) << 2 | (xmm0_28 < xmm1_12 ? 1 : 0)
                p_20 = unimplemented  {test ah, 0x44}
            
            if (p_18 || p_20)
                *(edx_11 + 0x7c) = xmm2_14
                *(edx_11 + 0x80) = xmm1_12
                *(edx_11 + 0x70) = 1
            
            result = *i
            
            if (*(result + 0x47d) != 1)
                *(result + 0x47d) = 1
                result[0x1c].b = 1
            
            i = &i[1]
        while (i != arg1[0x29])
    
    if (arg1[0x4a] != edi_2)
        int32_t* ecx_54 = arg1[0x5d]
        arg1[0x4a] = edi_2
        
        if (ecx_54 != 0)
            result = (**ecx_54)()

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_9c)
return result
