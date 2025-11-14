// 函数: sub_4dd8c0
// 地址: 0x4dd8c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bff6f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_9c
int32_t eax_2 = __security_cookie ^ &var_9c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = sub_4a26a0(arg1[0x6b], arg2)
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

if (ebx.b != 0)
    struct partsengine::CRect::VTable* const var_4c
    ebx:1.b = sub_40d280(&arg1[0x4f], sub_40d1c0(&arg1[0x30], &arg1[0x2a], &var_4c, &arg1[0x30]))
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    if (ebx:1.b != 0)
        sub_402110(&arg1[0x2a], &data_6da576, nullptr)
        
        if (&arg1[0x30] != &arg1[0x4f])
            sub_401ff0(&arg1[0x30], &arg1[0x4f], 0, 0xffffffff)
    
    float xmm0_1 = sub_4dffc0(arg1)
    float xmm0_2 = sub_4e0080(arg1)
    int32_t eax_14 = (*(*arg1 + 0x28))(1)
    int32_t eax_15 = (*(*arg1 + 0x2c))(1)
    struct partsengine::CCharSpriteProperty::VTable* var_80
    sub_4ff2c0(&var_80)
    int32_t var_c_1 = 0
    sub_4e0140(arg1, &var_80)
    sub_4a4020(arg1[0x23])
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<struct std::_Callable_obj<class <lambda_132249b0ccaa8b0c1471081a2b88fb90>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::VTable
        * const var_c4 = &std::_Func_impl<struct std::_Callable_obj<class <lambda_132249b0ccaa8b0c1471081a2b88fb90>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    int32_t* var_c0_1 = arg1
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<struct std::_Callable_obj<class <lambda_132249b0ccaa8b0c1471081a2b88fb90>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::VTable
        * const* var_b4_3 = &var_c4
    var_c_1.b = 0
    sub_47eb70(&arg1[0xd], var_c4)
    void* ecx_13 = arg1[0x22]
    float xmm0_3 = *(ecx_13 + 0x7c)
    xmm0_3 - xmm0_1
    struct _EXCEPTION_REGISTRATION_RECORD** eax_16
    eax_16:1.b = (xmm0_3 == xmm0_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, xmm0_1) ? 1 : 0) << 2
        | (xmm0_3 < xmm0_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    bool p_4
    
    if (not(p_2))
        float xmm0_4 = *(ecx_13 + 0x80)
        xmm0_4 - xmm0_2
        eax_16:1.b = (xmm0_4 == xmm0_2 ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, xmm0_2) ? 1 : 0) << 2
            | (xmm0_4 < xmm0_2 ? 1 : 0)
        p_4 = unimplemented  {test ah, 0x44}
    
    if (p_2 || p_4)
        *(ecx_13 + 0x7c) = xmm0_1
        *(ecx_13 + 0x80) = xmm0_2
        *(ecx_13 + 0x70) = 1
    
    int32_t ecx_14 = arg1[0x3e]
    void* esi_2 = arg1[0x23]
    int32_t eax_18
    int32_t edx_4
    edx_4:eax_18 = sx.q(ecx_14)
    float xmm0_5 = *(esi_2 + 0x7c)
    int32_t eax_22
    int32_t edx_5
    edx_5:eax_22 = sx.q(ecx_14)
    float xmm3_3 = _mm_cvtepi32_ps(zx.o((eax_18 - edx_4) s>> 1)) + xmm0_1
    xmm0_5 - xmm3_3
    float xmm1_4 = _mm_cvtepi32_ps(zx.o((eax_22 - edx_5) s>> 1)) + xmm0_2
    int32_t eax_24
    eax_24:1.b = (xmm0_5 == xmm3_3 ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, xmm3_3) ? 1 : 0) << 2
        | (xmm0_5 < xmm3_3 ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    bool p_8
    
    if (not(p_6))
        float xmm0_6 = *(esi_2 + 0x80)
        xmm0_6 - xmm1_4
        eax_24:1.b = (xmm0_6 == xmm1_4 ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, xmm1_4) ? 1 : 0) << 2
            | (xmm0_6 < xmm1_4 ? 1 : 0)
        p_8 = unimplemented  {test ah, 0x44}
    
    if (p_6 || p_8)
        *(esi_2 + 0x7c) = xmm3_3
        *(esi_2 + 0x80) = xmm1_4
        *(esi_2 + 0x70) = 1
    
    sub_4d1cd0(sub_4a4020(arg1[0x23]), &var_80, 1)
    
    if ((*(*arg1 + 0x18))(eax_4) != 0)
        int32_t* eax_30 = sub_4defe0(arg1, &arg1[0x2a])
        sub_4de7c0(arg1, eax_30)
        int32_t ecx_20 = arg1[0x3e]
        int32_t eax_32
        int32_t edx_6
        edx_6:eax_32 = sx.q(ecx_20)
        float xmm0_8 = _mm_cvtepi32_ps(zx.o(arg1[0x3c]))
        void* ecx_21 = arg1[0x24]
        int32_t eax_36
        int32_t edx_7
        edx_7:eax_36 = sx.q(ecx_20)
        float xmm2_4 = _mm_cvtepi32_ps(zx.o((eax_32 - edx_6) s>> 1)) + xmm0_1
        float xmm1_7 = _mm_cvtepi32_ps(zx.o((eax_36 - edx_7) s>> 1)) + xmm0_2
        float xmm2_6 = xmm2_4 + xmm0_8 + _mm_cvtepi32_ps(zx.o(eax_30))
        float xmm0_11 = *(ecx_21 + 0x7c)
        xmm0_11 - xmm2_6
        int32_t eax_38
        eax_38:1.b = (xmm0_11 == xmm2_6 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_11, xmm2_6) ? 1 : 0) << 2 | (xmm0_11 < xmm2_6 ? 1 : 0)
        bool p_10 = unimplemented  {test ah, 0x44}
        bool p_12
        
        if (not(p_10))
            float xmm0_12 = *(ecx_21 + 0x80)
            xmm0_12 - xmm1_7
            eax_38:1.b = (xmm0_12 == xmm1_7 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_12, xmm1_7) ? 1 : 0) << 2 | (xmm0_12 < xmm1_7 ? 1 : 0)
            p_12 = unimplemented  {test ah, 0x44}
        
        if (p_10 || p_12)
            *(ecx_21 + 0x7c) = xmm2_6
            *(ecx_21 + 0x80) = xmm1_7
            *(ecx_21 + 0x70) = 1
        
        if ((*(*arg1 + 0x18))() != 0 && mods.dp.d(sx.q(arg1[0x28]), 0x3e8) s< 0x1f4)
            void* eax_45 = arg1[0x24]
            
            if (*(eax_45 + 0x8c) != ebx.b)
                *(eax_45 + 0x8c) = ebx.b
                *(eax_45 + 0x70) = 1
        
        sub_4de840(arg1, xmm2_6, xmm1_7)
    
    int32_t* eax_47 = sub_40d1c0(&arg1[0x30], &arg1[0x2a], &var_4c, &arg1[0x30])
    var_c_1.b = 2
    void* esi_4 = *(sub_4a4020(arg1[0x23]) + 0x34)
    
    if ((*(**(*(esi_4 + 0x28) + 4) + 8))() != 0xd)
        (*(**(*(esi_4 + 0x28) + 4) + 4))()
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_53 = sub_69adc6(0x15c)
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_90_2 = eax_53
        var_c_1.b = 5
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** ecx_31
        
        if (eax_53 == 0)
            ecx_31 = nullptr
        else
            ecx_31 = sub_517c70(eax_53)
        
        var_c_1.b = 2
        *(*(esi_4 + 0x28) + 4) = ecx_31
        *(esi_4 + 0x14) = 1
    
    sub_5195c0(*(*(esi_4 + 0x28) + 4), eax_47)
    var_c_1.b = 0
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    sub_4dea70(arg1)
    int32_t eax_57 = arg1[0x3e]
    int32_t ebx_3 = neg.d(arg1[0x3c])
    int32_t var_8c_2 = eax_15 - eax_57
    int32_t var_88_2 = eax_14 - eax_57
    void* esi_5 = *(sub_4a4020(arg1[0x23]) + 0x34)
    
    if ((*(**(*(esi_5 + 0x28) + 4) + 8))() != 0xd)
        (*(**(*(esi_5 + 0x28) + 4) + 4))()
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_64 = sub_69adc6(0x15c)
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_90_3 = eax_64
        var_c_1.b = 0x11
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** ecx_38
        
        if (eax_64 == 0)
            ecx_38 = nullptr
        else
            ecx_38 = sub_517c70(eax_64)
        
        var_c_1.b = 0
        *(*(esi_5 + 0x28) + 4) = ecx_38
        *(esi_5 + 0x14) = 1
    
    void* esi_6 = *(*(esi_5 + 0x28) + 4)
    
    if (var_88_2 s>= 0 && var_8c_2 s>= 0 && ebx_3 s>= 0)
        int32_t var_3c_1 = var_8c_2
        int32_t var_40_1 = var_88_2
        int32_t* var_b0_16 = &var_4c
        var_4c = &partsengine::CRect::`vftable'
        int32_t var_48_1 = ebx_3
        int32_t var_44_1 = 0
        
        if (sub_512700(esi_6 + 0xb4, var_b0_16) == 0)
            *(esi_6 + 0xc0) = var_88_2
            *(esi_6 + 0xb8) = ebx_3
            *(esi_6 + 0xbc) = 0
            *(esi_6 + 0xc4) = var_8c_2
            *(esi_6 + 0xd8) = 1
    
    var_c_1.b = 0x1b
    int32_t var_34
    sub_4daf10(&arg1[0x3d], sub_40d1c0(&arg1[0x30], &arg1[0x2a], &var_34, &arg1[0x30]))
    var_c_1.b = 0
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    void* eax_72 = arg1[0x24]
    
    if (*(eax_72 + 0x47d) != 1)
        *(eax_72 + 0x47d) = 1
        *(eax_72 + 0x70) = 1
    
    void* eax_73 = arg1[0x23]
    
    if (*(eax_73 + 0x47d) != 1)
        *(eax_73 + 0x47d) = 1
        *(eax_73 + 0x70) = 1

int32_t* result = sub_4dd6f0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_9c)
return result
