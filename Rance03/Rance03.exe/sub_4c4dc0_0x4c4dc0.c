// 函数: sub_4c4dc0
// 地址: 0x4c4dc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6be6ae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = sub_4a26a0(arg1[0x81], arg2)
void* eax_6 = arg1[0x22]

if (*(eax_6 + 0x8c) != ebx.b)
    *(eax_6 + 0x8c) = ebx.b
    *(eax_6 + 0x70) = 1

void* eax_7 = arg1[0x23]

if (*(eax_7 + 0x8c) != ebx.b)
    *(eax_7 + 0x8c) = ebx.b
    *(eax_7 + 0x70) = 1

void* eax_8 = arg1[0x24]

if (*(eax_8 + 0x8c) != 0)
    *(eax_8 + 0x8c) = 0
    *(eax_8 + 0x70) = 1

void* eax_9 = arg1[0x25]

if (*(eax_9 + 0x8c) != ebx.b)
    *(eax_9 + 0x8c) = ebx.b
    *(eax_9 + 0x70) = 1

void* eax_10 = arg1[0x26]

if (*(eax_10 + 0x8c) != ebx.b)
    *(eax_10 + 0x8c) = ebx.b
    *(eax_10 + 0x70) = 1

int32_t var_4c
char* ecx_1 = &var_4c
int32_t* result
int32_t var_38

if (ebx.b != 0)
    ebx:1.b = sub_40d280(&arg1[0x51], sub_40d1c0(eax_10, &arg1[0x2e], ecx_1, &arg1[0x34]))
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    if (ebx:1.b != 0)
        sub_402110(&arg1[0x2e], &data_6da4da, nullptr)
        
        if (&arg1[0x34] != &arg1[0x51])
            sub_401ff0(&arg1[0x34], &arg1[0x51], 0, 0xffffffff)
    
    float var_64 = sub_4c8b60(arg1)
    float xmm0_2 = sub_4c8c20(arg1)
    int32_t eax_16 = arg1[0x41]
    int32_t eax_17 = arg1[0x42]
    float var_68 = xmm0_2
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<struct std::_Callable_obj<class <lambda_ed241127c131a1d3cac36721fa59ea5a>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::VTable
        * const var_9c = &std::_Func_impl<struct std::_Callable_obj<class <lambda_ed241127c131a1d3cac36721fa59ea5a>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    int32_t* var_98_1 = arg1
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<struct std::_Callable_obj<class <lambda_ed241127c131a1d3cac36721fa59ea5a>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::VTable
        * const* var_8c_3 = &var_9c
    int32_t var_c_1 = 0xffffffff
    sub_47eb70(&arg1[0xd], var_9c)
    void* ecx_12 = arg1[0x22]
    float xmm2_1 = var_64
    float xmm1_1 = var_68
    float xmm0_3 = *(ecx_12 + 0x7c)
    xmm0_3 - xmm2_1
    struct _EXCEPTION_REGISTRATION_RECORD** eax_18
    eax_18:1.b = (xmm0_3 == xmm2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, xmm2_1) ? 1 : 0) << 2
        | (xmm0_3 < xmm2_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    bool p_4
    
    if (not(p_2))
        float xmm0_4 = *(ecx_12 + 0x80)
        xmm0_4 - xmm1_1
        eax_18:1.b = (xmm0_4 == xmm1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, xmm1_1) ? 1 : 0) << 2
            | (xmm0_4 < xmm1_1 ? 1 : 0)
        p_4 = unimplemented  {test ah, 0x44}
    
    if (p_2 || p_4)
        *(ecx_12 + 0x7c) = xmm2_1
        *(ecx_12 + 0x80) = xmm1_1
        *(ecx_12 + 0x70) = 1
    
    void* eax_19 = sub_4a4020(arg1[0x23])
    void* ecx_14 = arg1[0x23]
    float xmm1_3 = _mm_cvtepi32_ps(zx.o(arg1[0x28]))
    void* var_54_1 = eax_19
    float xmm0_5 = *(ecx_14 + 0x7c)
    float xmm2_3 = xmm1_3 + var_64
    float xmm1_4 = xmm1_3 + var_68
    xmm0_5 - xmm2_3
    eax_19:1.b = (xmm0_5 == xmm2_3 ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, xmm2_3) ? 1 : 0) << 2
        | (xmm0_5 < xmm2_3 ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    bool p_8
    
    if (not(p_6))
        float xmm0_6 = *(ecx_14 + 0x80)
        xmm0_6 - xmm1_4
        eax_19:1.b = (xmm0_6 == xmm1_4 ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, xmm1_4) ? 1 : 0) << 2
            | (xmm0_6 < xmm1_4 ? 1 : 0)
        p_8 = unimplemented  {test ah, 0x44}
    
    if (p_6 || p_8)
        *(ecx_14 + 0x7c) = xmm2_3
        *(ecx_14 + 0x80) = xmm1_4
        *(ecx_14 + 0x70) = 1
    
    int32_t* eax_20 = sub_4a3ac0(arg1[0x25])
    void* edi_2 = arg1[0x25]
    float xmm2_5 =
        _mm_cvtepi32_ps(zx.o(eax_16)) + var_64 - _mm_cvtepi32_ps(zx.o((*(*eax_20 + 0x28))(1)))
    float xmm0_12 = *(edi_2 + 0x7c)
    xmm0_12 - xmm2_5
    int32_t eax_21
    eax_21:1.b = (xmm0_12 == xmm2_5 ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, xmm2_5) ? 1 : 0) << 2
        | (xmm0_12 < xmm2_5 ? 1 : 0)
    bool p_10 = unimplemented  {test ah, 0x44}
    bool p_12
    
    if (not(p_10))
        float xmm0_13 = *(edi_2 + 0x80)
        float temp1_1 = var_68
        xmm0_13 - temp1_1
        eax_21:1.b = (xmm0_13 == temp1_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_13, temp1_1) ? 1 : 0) << 2 | (xmm0_13 < temp1_1 ? 1 : 0)
        p_12 = unimplemented  {test ah, 0x44}
    
    if (p_10 || p_12)
        float xmm0_14 = var_68
        *(edi_2 + 0x7c) = xmm2_5
        *(edi_2 + 0x80) = xmm0_14
        *(edi_2 + 0x70) = 1
    
    int32_t* eax_22 = sub_4a3b70(arg1[0x26])
    void* edi_3 = arg1[0x26]
    float xmm0_16 = _mm_cvtepi32_ps(zx.o(eax_17))
    int32_t edx_5 = *eax_22
    int32_t var_88_13 = 1
    var_68 = xmm0_16 + var_68
    int32_t eax_23 = (*(edx_5 + 0x2c))(var_88_13)
    float xmm2_6 = var_64
    float xmm1_6 = var_68 - _mm_cvtepi32_ps(zx.o(eax_23))
    float xmm0_20 = *(edi_3 + 0x7c)
    xmm0_20 - xmm2_6
    eax_23:1.b = (xmm0_20 == xmm2_6 ? 1 : 0) << 6 | (is_unordered.d(xmm0_20, xmm2_6) ? 1 : 0) << 2
        | (xmm0_20 < xmm2_6 ? 1 : 0)
    bool p_14 = unimplemented  {test ah, 0x44}
    bool p_16
    
    if (not(p_14))
        float xmm0_21 = *(edi_3 + 0x80)
        xmm0_21 - xmm1_6
        eax_23:1.b = (xmm0_21 == xmm1_6 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_21, xmm1_6) ? 1 : 0) << 2 | (xmm0_21 < xmm1_6 ? 1 : 0)
        p_16 = unimplemented  {test ah, 0x44}
    
    if (p_14 || p_16)
        *(edi_3 + 0x7c) = xmm2_6
        *(edi_3 + 0x80) = xmm1_6
        *(edi_3 + 0x70) = 1
    
    int32_t eax_26 = (*(*arg1 + 0x18))(eax_4)
    
    if (eax_26.b != 0)
        sub_4c8760(arg1, &var_68, &var_64)
        void* ecx_21 = arg1[0x24]
        float xmm2_7 = var_68
        float xmm1_7 = var_64
        float xmm0_22 = *(ecx_21 + 0x7c)
        xmm0_22 - xmm2_7
        float* eax_27
        eax_27:1.b = (xmm0_22 == xmm2_7 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_22, xmm2_7) ? 1 : 0) << 2 | (xmm0_22 < xmm2_7 ? 1 : 0)
        bool p_18 = unimplemented  {test ah, 0x44}
        bool p_20
        
        if (not(p_18))
            float xmm0_23 = *(ecx_21 + 0x80)
            xmm0_23 - xmm1_7
            eax_27:1.b = (xmm0_23 == xmm1_7 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_23, xmm1_7) ? 1 : 0) << 2 | (xmm0_23 < xmm1_7 ? 1 : 0)
            p_20 = unimplemented  {test ah, 0x44}
        
        if (p_18 || p_20)
            *(ecx_21 + 0x7c) = xmm2_7
            *(ecx_21 + 0x80) = xmm1_7
            *(ecx_21 + 0x70) = 1
        
        char eax_30 = (*(*arg1 + 0x18))()
        
        if (sub_4c6740(arg1, arg1[0x2c], eax_30) != 0)
            void* eax_33 = arg1[0x24]
            
            if (*(eax_33 + 0x8c) != ebx.b)
                *(eax_33 + 0x8c) = ebx.b
                *(eax_33 + 0x70) = 1
        
        eax_26 = sub_4c6050(arg1)
        
        if (*(arg1 + 0xa6) != 0)
            *(arg1 + 0xa6) = 0
            eax_26 = sub_4c8060(arg1)
    
    var_64 = sub_40d1c0(eax_26, &arg1[0x2e], &var_4c, &arg1[0x34])
    int32_t var_c_2 = 1
    void* edi_5 = *(var_54_1 + 0x34)
    
    if ((*(**(*(edi_5 + 0x28) + 4) + 8))() != 0xd)
        (*(**(*(edi_5 + 0x28) + 4) + 4))()
        float eax_38 = sub_69adc6(0x15c)
        var_68 = eax_38
        var_c_2.b = 4
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** ecx_31
        
        if (eax_38 == 0)
            ecx_31 = nullptr
        else
            ecx_31 = sub_517c70(eax_38)
        
        var_c_2.b = 1
        *(*(edi_5 + 0x28) + 4) = ecx_31
        *(edi_5 + 0x14) = 1
    
    sub_5195c0(*(*(edi_5 + 0x28) + 4), var_64)
    int32_t var_c_3 = 0xffffffff
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    sub_4c6330(arg1)
    int32_t var_88_20 = 1
    var_64 = eax_20[0x40]
    var_68 = eax_22[0x40]
    int32_t eax_45 = (*(*eax_22 + 0x2c))(var_88_20)
    int32_t ecx_35 = arg1[0x28]
    int32_t eax_47 = (*(*eax_20 + 0x28))(1)
    int32_t ecx_38 = arg1[0x28]
    void* edi_7 = *(var_54_1 + 0x34)
    
    if ((*(**(*(edi_7 + 0x28) + 4) + 8))() != 0xd)
        (*(**(*(edi_7 + 0x28) + 4) + 4))()
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_54 = sub_69adc6(0x15c)
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_54_2 = eax_54
        int32_t var_c_4 = 0x10
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** ecx_43
        
        if (eax_54 == 0)
            ecx_43 = nullptr
        else
            ecx_43 = sub_517c70(eax_54)
        
        int32_t var_c_5 = 0xffffffff
        *(*(edi_7 + 0x28) + 4) = ecx_43
        *(edi_7 + 0x14) = 1
    
    int32_t* eax_59 = sub_40d1c0(
        sub_51bb30(*(*(edi_7 + 0x28) + 4), var_68, var_64, eax_16 - ecx_38 * 2 - eax_47, 
            eax_17 - ecx_35 * 2 - eax_45), 
        &arg1[0x2e], &var_4c, &arg1[0x34])
    int32_t var_c_6 = 0x1a
    sub_4c1f00(&arg1[0x40], eax_59)
    int32_t var_c_7 = 0xffffffff
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    arg1[0x64] = eax_20[0x40]
    int32_t eax_63 = eax_22[0x40]
    arg1[0x65] = eax_63
    result = sub_40d280(sub_40d1c0(eax_63, &arg1[0x2e], &var_4c, &arg1[0x34]), &arg1[0x3a])
    char var_69_1 = result.b
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
        result.b = var_69_1
    
    if (result.b != 0)
        int32_t var_34
        result = sub_40d1c0(sub_485d30(&arg1[2], 0), &arg1[0x2e], &var_34, &arg1[0x34])
        
        if (&arg1[0x3a] != result)
            if (arg1[0x3f] u>= 0x10)
                j__free(arg1[0x3a])
            
            arg1[0x3f] = 0xf
            arg1[0x3e] = 0
            arg1[0x3a].b = 0
            result = sub_4030b0(&arg1[0x3a], result)
        
        int32_t var_20
        
        if (var_20 u>= 0x10)
            result = j__free(var_34)
else
    result = sub_40d280(sub_40d1c0(eax_10, &arg1[0x2e], ecx_1, &arg1[0x34]), &arg1[0x3a])
    char var_69 = result.b
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
        result.b = var_69
    
    if (result.b != 0)
        result = sub_40d1c0(sub_485d30(&arg1[2], 0), &arg1[0x2e], &var_4c, &arg1[0x34])
        
        if (&arg1[0x3a] != result)
            if (arg1[0x3f] u>= 0x10)
                j__free(arg1[0x3a])
            
            arg1[0x3f] = 0xf
            arg1[0x3e] = 0
            arg1[0x3a].b = 0
            result = sub_4030b0(&arg1[0x3a], result)
        
        if (var_38 u>= 0x10)
            result = j__free(var_4c)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return result
