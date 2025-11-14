// 函数: sub_4a03a0
// 地址: 0x4a03a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bc3e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char result = sub_4a26a0(arg1[0x58], arg2)
void* ecx_1 = arg1[0x22]

if (*(ecx_1 + 0x8c) != result)
    *(ecx_1 + 0x8c) = result
    *(ecx_1 + 0x70) = 1

void* ecx_2 = arg1[0x23]

if (*(ecx_2 + 0x8c) != result)
    *(ecx_2 + 0x8c) = result
    *(ecx_2 + 0x70) = 1

void* ecx_3 = arg1[0x24]

if (*(ecx_3 + 0x8c) != result)
    *(ecx_3 + 0x8c) = result
    *(ecx_3 + 0x70) = 1

if (result != 0)
    void* eax_5 = arg1[0x58]
    struct partsengine::COriginPosMode::VTable* const var_64 =
        &partsengine::COriginPosMode::`vftable'
    int32_t var_60_1 = *(eax_5 + 0x88)
    int32_t var_c_1 = 0
    int32_t eax_9 = sub_50feb0(&var_64, (*(*arg1 + 0x28))(1))
    var_64 = &partsengine::COriginPosMode::`vftable'
    void* eax_10 = arg1[0x58]
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_9))
    int32_t var_60_2 = *(eax_10 + 0x88)
    int32_t var_c_2 = 1
    int32_t eax_14 = sub_50ff00(&var_64, (*(*arg1 + 0x2c))(1))
    int32_t var_c_3 = 0xffffffff
    void* ecx_8 = arg1[0x58]
    float xmm0_4 = _mm_cvtepi32_ps(zx.o(eax_14))
    float xmm0_6 = sub_4a1c10(ecx_8) + xmm0_2
    float xmm0_7 = sub_4a1cf0(arg1[0x58])
    int32_t eax_15 = arg1[0x39]
    float xmm0_8 = xmm0_7 + xmm0_4
    int32_t eax_16 = arg1[0x3c]
    int32_t eax_17 = arg1[0x3b]
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<struct std::_Callable_obj<class <lambda_e371bb646a88ba7b22f33762e272c45c>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::VTable
        * const var_9c = &std::_Func_impl<struct std::_Callable_obj<class <lambda_e371bb646a88ba7b22f33762e272c45c>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    int32_t* var_98_1 = arg1
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<struct std::_Callable_obj<class <lambda_e371bb646a88ba7b22f33762e272c45c>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::VTable
        * const* var_8c_1 = &var_9c
    int32_t var_c_4 = 0xffffffff
    sub_47eb70(&arg1[0xd], var_9c)
    void* ecx_11 = arg1[0x22]
    float xmm0_9 = *(ecx_11 + 0x7c)
    xmm0_9 - xmm0_6
    struct _EXCEPTION_REGISTRATION_RECORD** eax_18
    eax_18:1.b = (xmm0_9 == xmm0_6 ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, xmm0_6) ? 1 : 0) << 2
        | (xmm0_9 < xmm0_6 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    bool p_4
    
    if (not(p_2))
        float xmm0_10 = *(ecx_11 + 0x80)
        xmm0_10 - xmm0_8
        eax_18:1.b = (xmm0_10 == xmm0_8 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_10, xmm0_8) ? 1 : 0) << 2 | (xmm0_10 < xmm0_8 ? 1 : 0)
        p_4 = unimplemented  {test ah, 0x44}
    
    if (p_2 || p_4)
        *(ecx_11 + 0x7c) = xmm0_6
        *(ecx_11 + 0x80) = xmm0_8
        *(ecx_11 + 0x70) = 1
    
    void* eax_19 = arg1[0x22]
    
    if (*(eax_19 + 0x47c) != 1)
        *(eax_19 + 0x47c) = 1
        *(eax_19 + 0x70) = 1
    
    int32_t var_4c
    char* eax_20 = sub_4a3390(arg1[0x58], &var_4c, 2)
    int32_t var_c_5 = 3
    void* esi_1 = arg1[0x22]
    
    if (sub_4058a0(*(esi_1 + 0x480) + 0x30, eax_20) == 0)
        char* ecx_16 = *(esi_1 + 0x480) + 0x30
        
        if (ecx_16 != eax_20)
            sub_401ff0(ecx_16, eax_20, 0, 0xffffffff)
        
        *(esi_1 + 0x70) = 1
    
    int32_t var_c_6 = 0xffffffff
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    char* eax_22 = sub_4a3390(arg1[0x58], &var_4c, 3)
    int32_t var_c_7 = 4
    void* esi_2 = arg1[0x22]
    
    if (sub_4058a0(*(esi_2 + 0x480) + 0x48, eax_22) == 0)
        char* ecx_21 = *(esi_2 + 0x480) + 0x48
        
        if (ecx_21 != eax_22)
            sub_401ff0(ecx_21, eax_22, 0, 0xffffffff)
        
        *(esi_2 + 0x70) = 1
    
    int32_t var_c_8 = 0xffffffff
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    int32_t edi_3 = 0xff
    int32_t esi_3 = 0xff
    
    if ((*(*arg1 + 0x18))(eax_4) != 0)
        esi_3 = 0xc8
    
    int32_t esi_4 = esi_3 * sub_4a27b0(arg1[0x58])
    
    if ((*(*arg1 + 0x18))() != 0)
        edi_3 = 0xc8
    
    int32_t eax_31 = sub_4a2800(arg1[0x58])
    int32_t var_88_11 = sub_4a2850(arg1[0x58])
    int32_t var_8c_6 = (edi_3 * eax_31) s>> 8
    sub_4b7a20(arg1[0x22] + 0x6c, esi_4 s>> 8)
    void* ecx_29 = arg1[0x23]
    float xmm2_3 = _mm_cvtepi32_ps(zx.o(eax_17))
    float xmm0_11 = *(ecx_29 + 0x7c)
    float xmm2_4 = xmm2_3 + xmm0_6
    xmm0_11 - xmm2_4
    float xmm1_4 = _mm_cvtepi32_ps(zx.o(eax_16)) + xmm0_8
    int32_t eax_33
    eax_33:1.b = (xmm0_11 == xmm2_4 ? 1 : 0) << 6 | (is_unordered.d(xmm0_11, xmm2_4) ? 1 : 0) << 2
        | (xmm0_11 < xmm2_4 ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    bool p_8
    
    if (not(p_6))
        float xmm0_12 = *(ecx_29 + 0x80)
        xmm0_12 - xmm1_4
        eax_33:1.b = (xmm0_12 == xmm1_4 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_12, xmm1_4) ? 1 : 0) << 2 | (xmm0_12 < xmm1_4 ? 1 : 0)
        p_8 = unimplemented  {test ah, 0x44}
    
    if (p_6 || p_8)
        *(ecx_29 + 0x7c) = xmm2_4
        *(ecx_29 + 0x80) = xmm1_4
        *(ecx_29 + 0x70) = 1
    
    void* eax_34 = arg1[0x23]
    
    if (*(eax_34 + 0x47d) != 1)
        *(eax_34 + 0x47d) = 1
        *(eax_34 + 0x70) = 1
    
    void* edi_6 = arg1[0x58]
    int32_t eax_35 = sub_4a2850(edi_6)
    int32_t eax_36 = sub_4a2800(edi_6)
    int32_t eax_37 = sub_4a27b0(edi_6)
    int32_t var_88_12 = eax_35
    int32_t var_8c_7 = eax_36
    sub_4b7a20(arg1[0x23] + 0x6c, eax_37)
    void* ecx_35 = arg1[0x24]
    float xmm1_6 = _mm_cvtepi32_ps(zx.o(eax_15))
    float xmm0_13 = *(ecx_35 + 0x7c)
    float xmm1_8 = xmm1_6 + xmm0_6 - 16f
    xmm0_13 - xmm1_8
    int32_t eax_38
    eax_38:1.b = (xmm0_13 == xmm1_8 ? 1 : 0) << 6 | (is_unordered.d(xmm0_13, xmm1_8) ? 1 : 0) << 2
        | (xmm0_13 < xmm1_8 ? 1 : 0)
    bool p_10 = unimplemented  {test ah, 0x44}
    bool p_12
    
    if (not(p_10))
        float xmm0_14 = *(ecx_35 + 0x80)
        xmm0_14 - xmm0_8
        eax_38:1.b = (xmm0_14 == xmm0_8 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_14, xmm0_8) ? 1 : 0) << 2 | (xmm0_14 < xmm0_8 ? 1 : 0)
        p_12 = unimplemented  {test ah, 0x44}
    
    if (p_10 || p_12)
        *(ecx_35 + 0x7c) = xmm1_8
        *(ecx_35 + 0x80) = xmm0_8
        *(ecx_35 + 0x70) = 1
    
    char* eax_39 = sub_4a3390(arg1[0x58], &var_4c, 2)
    int32_t var_c_9 = 5
    void* esi_7 = arg1[0x24]
    
    if (sub_4058a0(*(esi_7 + 0x480) + 0x30, eax_39) == 0)
        char* ecx_40 = *(esi_7 + 0x480) + 0x30
        
        if (ecx_40 != eax_39)
            sub_401ff0(ecx_40, eax_39, 0, 0xffffffff)
        
        *(esi_7 + 0x70) = 1
    
    int32_t var_c_10 = 0xffffffff
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    int32_t var_34
    char* eax_41 = sub_4a3390(arg1[0x58], &var_34, 3)
    int32_t var_c_11 = 6
    void* esi_8 = arg1[0x24]
    
    if (sub_4058a0(*(esi_8 + 0x480) + 0x48, eax_41) == 0)
        char* ecx_45 = *(esi_8 + 0x480) + 0x48
        
        if (ecx_45 != eax_41)
            sub_401ff0(ecx_45, eax_41, 0, 0xffffffff)
        
        *(esi_8 + 0x70) = 1
    
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    void* esi_9 = arg1[0x58]
    int32_t var_88_19 = sub_4a2850(esi_9)
    int32_t var_8c_12 = sub_4a2800(esi_9)
    int32_t eax_45 = sub_4a27b0(esi_9)
    result = sub_4b7a20(arg1[0x24] + 0x6c, eax_45)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return result
