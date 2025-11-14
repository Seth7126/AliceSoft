// 函数: sub_49c660
// 地址: 0x49c660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbf48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char eax_3 = sub_4a26a0(arg1[0x99], arg2)
int32_t result = arg1[0x23]

if (*(result + 0x8c) != eax_3)
    *(result + 0x8c) = eax_3
    *(result + 0x70) = 1

if (eax_3 != 0 && arg1[0x92] != 0)
    result.b = arg1[0x95].b

if (eax_3 == 0 || arg1[0x92] == 0 || result.b != 0)
    result.b = 0
else
    result.b = 1

void* edx = arg1[0x24]

if (*(edx + 0x8c) != result.b)
    *(edx + 0x8c) = result.b
    *(edx + 0x70) = 1

if (eax_3 != 0)
    void* eax_4 = arg1[0x99]
    struct partsengine::COriginPosMode::VTable* const var_14 =
        &partsengine::COriginPosMode::`vftable'
    int32_t var_10_1 = *(eax_4 + 0x88)
    int32_t var_4 = 0
    int32_t eax_8 = sub_50feb0(&var_14, (*(*arg1 + 0x28))(1))
    var_14 = &partsengine::COriginPosMode::`vftable'
    void* eax_9 = arg1[0x99]
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_8))
    int32_t var_10_2 = *(eax_9 + 0x88)
    int32_t var_4_1 = 1
    int32_t eax_13 = sub_50ff00(&var_14, (*(*arg1 + 0x2c))(1))
    int32_t var_4_2 = 0xffffffff
    void* ecx_6 = arg1[0x99]
    float xmm0_4 = _mm_cvtepi32_ps(zx.o(eax_13))
    float xmm0_6 = sub_4a1c10(ecx_6) + xmm0_2
    float xmm0_8 = sub_4a1cf0(arg1[0x99]) + xmm0_4
    int32_t eax_16
    int32_t edx_1
    edx_1:eax_16 = sx.q((*(*arg1 + 0x2c))(1))
    int32_t ebx_2 = (eax_16 - edx_1) s>> 1
    int32_t* var_44 = &std::_Func_impl<struct std::_Callable_obj<class <lambda_e45f4ed0c2f3026e5aa9482eb3c48ae5>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    int32_t* var_40_1 = arg1
    int32_t** var_34_1 = &var_44
    int32_t var_4_3 = 0xffffffff
    sub_47eb70(&arg1[0xe], var_44)
    char ecx_10 = *(arg1[0x99] + 0x47f)
    void* eax_19 = arg1[0x23]
    
    if (*(eax_19 + 0x47f) != ecx_10)
        *(eax_19 + 0x47f) = ecx_10
        *(eax_19 + 0x70) = 1
    
    int32_t eax_23
    int32_t edx_2
    edx_2:eax_23 = sx.q((*(**(arg1[0x23] + 0x5c) + 0x2c))(1))
    void* ecx_14 = arg1[0x23]
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(ebx_2 - ((eax_23 - edx_2) s>> 1)))
    float xmm0_9 = *(ecx_14 + 0x7c)
    float xmm1_3 = xmm1_2 + xmm0_8
    xmm0_9 - xmm0_6
    int32_t eax_25
    eax_25:1.b = (xmm0_9 == xmm0_6 ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, xmm0_6) ? 1 : 0) << 2
        | (xmm0_9 < xmm0_6 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    bool p_4
    
    if (not(p_2))
        float xmm0_10 = *(ecx_14 + 0x80)
        xmm0_10 - xmm1_3
        eax_25:1.b = (xmm0_10 == xmm1_3 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_10, xmm1_3) ? 1 : 0) << 2 | (xmm0_10 < xmm1_3 ? 1 : 0)
        p_4 = unimplemented  {test ah, 0x44}
    
    if (p_2 || p_4)
        *(ecx_14 + 0x7c) = xmm0_6
        *(ecx_14 + 0x80) = xmm1_3
        *(ecx_14 + 0x70) = 1
    
    int32_t eax_28 = (*(**(arg1[0x24] + 0x5c) + 0x2c))(1)
    int32_t eax_29 = (*(**(arg1[0x23] + 0x5c) + 0x28))(1)
    void* ecx_18 = arg1[0x24]
    float xmm0_12 = _mm_cvtepi32_ps(zx.o(arg1[0xd]))
    int32_t eax_31
    int32_t edx_4
    edx_4:eax_31 = sx.q(eax_28)
    float xmm1_6 = _mm_cvtepi32_ps(zx.o(eax_29)) + xmm0_6
    float xmm2_3 = _mm_cvtepi32_ps(zx.o(ebx_2 - ((eax_31 - edx_4) s>> 1)))
    float xmm1_7 = xmm1_6 + xmm0_12
    float xmm0_13 = *(ecx_18 + 0x7c)
    float xmm2_4 = xmm2_3 + xmm0_8
    xmm0_13 - xmm1_7
    result:1.b = (xmm0_13 == xmm1_7 ? 1 : 0) << 6 | (is_unordered.d(xmm0_13, xmm1_7) ? 1 : 0) << 2
        | (xmm0_13 < xmm1_7 ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    bool p_8
    
    if (not(p_6))
        float xmm0_14 = *(ecx_18 + 0x80)
        xmm0_14 - xmm2_4
        result:1.b = (xmm0_14 == xmm2_4 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_14, xmm2_4) ? 1 : 0) << 2 | (xmm0_14 < xmm2_4 ? 1 : 0)
        p_8 = unimplemented  {test ah, 0x44}
    
    if (p_6 || p_8)
        *(ecx_18 + 0x7c) = xmm1_7
        *(ecx_18 + 0x80) = xmm2_4
        *(ecx_18 + 0x70) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
