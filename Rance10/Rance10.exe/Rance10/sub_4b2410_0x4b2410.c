// 函数: sub_4b2410
// 地址: 0x4b2410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** result =
    arg2

if (result[0x2a].b != 0)
    bool cond:1_1 = arg1[0x55].b == 0
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(arg1[0x3a]))
    int32_t var_8_1
    
    if (cond:1_1)
        var_8_1 = arg1[0x3b]
    else
        var_8_1 = 0x18
    
    int32_t esi_1 = *(arg1[0x56] + 0xa4)
    int32_t ecx = (*(*arg1 + 0x24))(1)
    int32_t ecx_1
    
    if (esi_1 - 1 u> 8)
        ecx_1 = 0
    else
        switch (esi_1 + &jump_table_4b2890[2]:3)
            case &lookup_table_4b289c, &lookup_table_4b289c[3], &lookup_table_4b289c[6]
                ecx_1 = 0
            case &lookup_table_4b289c[1], &lookup_table_4b289c[4], &lookup_table_4b289c[7]
                int32_t eax_7
                int32_t edx_1
                edx_1:eax_7 = sx.q(ecx)
                ecx_1 = neg.d((eax_7 - edx_1) s>> 1)
            case &lookup_table_4b289c[2], &lookup_table_4b289c[5], &lookup_table_4b289c[8]
                ecx_1 = neg.d(ecx)
    
    int32_t esi_3 = *(arg1[0x56] + 0xa4)
    int32_t ecx_3 = (*(*arg1 + 0x28))(1)
    int32_t ecx_4
    
    if (esi_3 - 1 u> 8)
        ecx_4 = 0
    else
        switch (esi_3 + &jump_table_4b28a8[2]:3)
            case &lookup_table_4b28b4, &lookup_table_4b28b4[1], &lookup_table_4b28b4[2]
                ecx_4 = 0
            case &lookup_table_4b28b4[3], &lookup_table_4b28b4[4], &lookup_table_4b28b4[5]
                int32_t eax_16
                int32_t edx_2
                edx_2:eax_16 = sx.q(ecx_3)
                ecx_4 = neg.d((eax_16 - edx_2) s>> 1)
            case &lookup_table_4b28b4[6], &lookup_table_4b28b4[7], &lookup_table_4b28b4[8]
                ecx_4 = neg.d(ecx_3)
    
    int32_t* var_40 = &std::_Func_impl<class <lambda_108bbe1c3f32365ce9028f373fa5c660>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    int32_t* var_3c_1 = arg1
    int32_t** var_1c_3 = &var_40
    sub_4c2b20(&arg1[0x10], var_40)
    int32_t ecx_7 = 0x1e
    
    if (sub_4b37d0(arg1) != 0)
        ecx_7 = 0
    
    int32_t var_1c_4 = ecx_7
    int32_t var_20_1 = ecx_7
    sub_5040a0(arg1[0x28] + 0x84, ecx_7)
    void* eax_20 = arg1[0x28]
    float xmm5_2 = _mm_cvtepi32_ps(4)
    float xmm7_2 = _mm_cvtepi32_ps(zx.o(ecx_4))
    *(eax_20 + 0x94) = xmm7_2
    float xmm6_2 = _mm_cvtepi32_ps(zx.o(ecx_1))
    *(eax_20 + 0x90) = xmm6_2
    float xmm4_2 = xmm5_2 + xmm6_2
    void* ecx_11 = arg1[0x29]
    float xmm0_5 = _mm_cvtepi32_ps(zx.o(arg1[0x42])) + xmm7_2
    *(ecx_11 + 0x90) = xmm4_2
    float xmm3_2 = _mm_cvtepi32_ps(0x14)
    float xmm1_2 = xmm6_2 + xmm0_2
    *(ecx_11 + 0x94) = xmm0_5 + xmm3_2
    float xmm2_2 = xmm1_2 - xmm5_2
    void* ecx_12 = arg1[0x2a]
    *(ecx_12 + 0x90) = xmm4_2 + xmm3_2
    *(ecx_12 + 0x94) = _mm_cvtepi32_ps(0xa) + xmm7_2
    void* ecx_13 = arg1[0x2b]
    float xmm0_13 = _mm_cvtepi32_ps(zx.o(arg1[0x42]))
    *(ecx_13 + 0x90) = xmm2_2
    *(ecx_13 + 0x94) = xmm0_13 + xmm7_2 + xmm3_2
    void* eax_23 = arg1[0x2c]
    float xmm0_17 = _mm_cvtepi32_ps(zx.o(var_8_1))
    *(eax_23 + 0x90) = xmm4_2
    float xmm3_5 = xmm7_2 + xmm0_17 - xmm5_2
    *(eax_23 + 0x94) = xmm3_5
    void* eax_24 = arg1[0x2e]
    *(eax_24 + 0x90) = xmm1_2
    *(eax_24 + 0x94) = xmm7_2
    float xmm1_4 = xmm6_2 - xmm5_2
    void* eax_25 = arg1[0x2f]
    *(eax_25 + 0x90) = xmm1_4
    float xmm0_19 = xmm7_2 - xmm5_2
    *(eax_25 + 0x94) = xmm0_19
    void* eax_26 = arg1[0x30]
    *(eax_26 + 0x90) = xmm2_2
    *(eax_26 + 0x94) = xmm0_19
    void* eax_27 = arg1[0x31]
    *(eax_27 + 0x90) = xmm1_4
    *(eax_27 + 0x94) = xmm0_19
    void* eax_28 = arg1[0x32]
    *(eax_28 + 0x90) = xmm1_4
    *(eax_28 + 0x94) = xmm3_5
    void* eax_29 = arg1[0x33]
    *(eax_29 + 0x90) = xmm4_2
    *(eax_29 + 0x94) = xmm5_2 + xmm7_2
    eax_29.b = *(arg1 + 0x155)
    *(arg1[0x2e] + 0xaa) = eax_29.b
    sub_4b29e0(arg1)
    *(arg1[0x34] + 0x1a9) = 1
    *(arg1[0x35] + 0x1a9) = 1
    *(arg1[0x36] + 0x1a9) = 1
    sub_4b32a0(arg1)
    result = sub_4b36c0(arg1)
    
    if (result != 0)
        void* ecx_19 = arg1[0x2c]
        int32_t xmm0_20 = (zx.o(0)).d
        float var_4_2 = 0f
        
        if (*(ecx_19 + 0xaa) != 0 && *(ecx_19 + 0xab) != 0)
            xmm0_20 = _mm_cvtepi32_ps(zx.o(neg.d(sub_4ef220(ecx_19)[0x46])))
        
        void* ecx_20 = arg1[0x2b]
        
        if (*(ecx_20 + 0xaa) != 0 && *(ecx_20 + 0xab) != 0)
            var_4_2 = _mm_cvtepi32_ps(zx.o(neg.d(sub_4ef140(ecx_20)[0x46])))
        
        int32_t var_1c_5 = 1
        float xmm1_7 = _mm_cvtepi32_ps(zx.o(arg1[0x42])) + _mm_cvtepi32_ps(zx.o(ecx_4))
        float xmm0_27 = _mm_cvtepi32_ps(0x14)
        float xmm2_4 = _mm_cvtepi32_ps(zx.o(ecx_1))
        float xmm0_29 = _mm_cvtepi32_ps(4)
        result[0x93] = xmm1_7 + xmm0_27
        result[0x92] = xmm0_29 + xmm2_4
        int32_t eax_46 =
            (*(**(arg1[0x29] + 0x74) + 0x24))(1, (*(**(arg1[0x29] + 0x74) + 0x28))(var_1c_5))
        sub_4edee0(result, int.d(xmm0_20 ^ (data_79aad0).d), int.d(var_4_2 ^ (data_79aad0).d), 
            eax_46)
        int32_t eax_49 = result[0x10]
        struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
            ** eax_50 = sub_4ef140(arg1[0x2b])
        
        if (eax_50[0x85] != eax_49)
            eax_50[0x85] = eax_49
            eax_50[0x87].b = 1
        
        int32_t eax_51 = result[0x10]
        int32_t* eax_52 = sub_4ef220(arg1[0x2c])
        
        if (eax_52[0x85] != eax_51)
            eax_52[0x85] = eax_51
            eax_52[0x87].b = 1
        
        return sub_4edc30(result, xmm0_20, var_4_2)

return result
