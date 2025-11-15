// 函数: sub_4b7c90
// 地址: 0x4b7c90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
struct partsengine::IEventArgs::partsengine::SChangedEventArgs::VTable* const result

if (arg2->__offset(0xa8).b != 0)
    int32_t eax_1 = (*(*arg1 + 0x24))(1)
    struct partsengine::IEventArgs::partsengine::SChangedEventArgs::VTable* eax_2 =
        (*(*arg1 + 0x28))(1)
    void* ecx_1 = arg1[0x57]
    struct partsengine::IEventArgs::partsengine::SChangedEventArgs::VTable* const edx_2 = eax_2
    arg2 = edx_2
    int32_t ebx_2 = *(ecx_1 + 0xa4) - 1
    int32_t edi_2
    
    switch (ebx_2)
        case 1, 4, 7
            int32_t eax_4
            int32_t edx_3
            edx_3:eax_4 = sx.q(eax_1)
            edx_2 = arg2
            edi_2 = neg.d((eax_4 - edx_3) s>> 1)
        case 2, 5, 8
            edi_2 = neg.d(eax_1)
        default
            edi_2 = 0
    
    int32_t ebx_4
    
    switch (ebx_2)
        case 3, 4, 5
            int32_t eax_9
            int32_t edx_4
            edx_4:eax_9 = sx.q(edx_2)
            ebx_4 = neg.d((eax_9 - edx_4) s>> 1)
        case 6, 7, 8
            ebx_4 = neg.d(edx_2)
        default
            ebx_4 = 0
    
    int32_t* var_3c = &std::_Func_impl<class <lambda_934ec4e72ab6907e5ace75d1de28cb4a>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    int32_t* var_38_1 = arg1
    int32_t** var_18_3 = &var_3c
    sub_4c2b20(&arg1[0x10], var_3c)
    void* eax_12 = arg1[0x28]
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(ebx_4))
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_1))
    float xmm2_2 = _mm_cvtepi32_ps(zx.o(edi_2))
    *(eax_12 + 0x94) = xmm1_2
    *(eax_12 + 0x90) = xmm2_2
    float xmm0_3 = xmm0_2 + xmm2_2
    void* eax_13 = arg1[0x29]
    *(eax_13 + 0x90) = xmm0_3
    *(eax_13 + 0x94) = xmm1_2
    result = arg1[0x2a]
    result->__offset(0x90).d = xmm0_3
    result->__offset(0x94).d = _mm_cvtepi32_ps(zx.o(arg2)) + xmm1_2

float xmm0_7 = arg1[0x3d]
float temp1 = arg1[0x2b]
xmm0_7 - temp1
result:1.b = (xmm0_7 == temp1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_7, temp1) ? 1 : 0) << 2
    | (xmm0_7 < temp1 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    int32_t var_18_4 = 0
    arg2 = &partsengine::SChangedEventArgs::`vftable'{for `partsengine::IEventArgs'}
    sub_4cbd50(&arg1[3], &arg2, var_18_4)
    result = arg1[0x3d]
    arg1[0x2b] = result

return result
