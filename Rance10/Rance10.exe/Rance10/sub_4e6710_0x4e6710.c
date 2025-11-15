// 函数: sub_4e6710
// 地址: 0x4e6710
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg1

if (edi[0x75] == 0 || edi[0x78].b != 0)
    arg1.b = 0
else
    arg1.b = 1

*(edi[0x37] + 0xaa) = arg1.b
int32_t result = arg2

if (*(result + 0xa8) != 0)
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q((*(*edi + 0x28))(1))
    int32_t eax_5 = (eax_3 - edx_1) s>> 1
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<class <lambda_5142e6f1175a5d5f2ef7b071411b5c1f>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::VTable
        * const var_44 = &std::_Func_impl<class <lambda_5142e6f1175a5d5f2ef7b071411b5c1f>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    int32_t* var_40_1 = edi
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<class <lambda_5142e6f1175a5d5f2ef7b071411b5c1f>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::VTable
        * const* var_20_2 = &var_44
    sub_4c2b20(&edi[0x1e], var_44)
    int32_t esi_1 = *(edi[0x7c] + 0xa4)
    int32_t ebx_1 = (*(*edi + 0x24))(1)
    int32_t ebx_2
    
    if (esi_1 - 1 u> 8)
        ebx_2 = 0
    else
        switch (esi_1 + &jump_table_4e68c4[2]:3)
            case &lookup_table_4e68d0, &lookup_table_4e68d0[3], &lookup_table_4e68d0[6]
                ebx_2 = 0
            case &lookup_table_4e68d0[1], &lookup_table_4e68d0[4], &lookup_table_4e68d0[7]
                int32_t eax_11
                int32_t edx_2
                edx_2:eax_11 = sx.q(ebx_1)
                ebx_2 = neg.d((eax_11 - edx_2) s>> 1)
            case &lookup_table_4e68d0[2], &lookup_table_4e68d0[5], &lookup_table_4e68d0[8]
                ebx_2 = neg.d(ebx_1)
    
    int32_t esi_3 = *(edi[0x7c] + 0xa4)
    int32_t ebp_1 = (*(*edi + 0x28))(1)
    int32_t ebp_2
    
    if (esi_3 - 1 u> 8)
        ebp_2 = 0
    else
        switch (esi_3 + &jump_table_4e68dc[2]:3)
            case &lookup_table_4e68e8, &lookup_table_4e68e8[1], &lookup_table_4e68e8[2]
                ebp_2 = 0
            case &lookup_table_4e68e8[3], &lookup_table_4e68e8[4], &lookup_table_4e68e8[5]
                int32_t eax_19
                int32_t edx_3
                edx_3:eax_19 = sx.q(ebp_1)
                ebp_2 = neg.d((eax_19 - edx_3) s>> 1)
            case &lookup_table_4e68e8[6], &lookup_table_4e68e8[7], &lookup_table_4e68e8[8]
                ebp_2 = neg.d(ebp_1)
    
    int32_t var_c
    int32_t var_8
    (*(**(edi[0x36] + 0x74) + 0x20))(&var_8, &var_c, 1)
    void* eax_24 = edi[0x7c]
    void* ecx_5 = edi[0x36]
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(ebp_2))
    eax_24.b = *(eax_24 + 0x1b5)
    *(ecx_5 + 0x1b5) = eax_24.b
    int32_t eax_26
    int32_t edx_4
    edx_4:eax_26 = sx.q(var_c)
    void* eax_29 = edi[0x36]
    int32_t var_20_6 = 1
    float xmm0_3 = _mm_cvtepi32_ps(zx.o(eax_5 - ((eax_26 - edx_4) s>> 1))) + xmm1_2
    int32_t xmm1_4 = _mm_cvtepi32_ps(zx.o(ebx_2))
    *(eax_29 + 0x94) = xmm0_3
    *(eax_29 + 0x90) = xmm1_4
    int32_t eax_32 = (*(**(edi[0x37] + 0x74) + 0x28))(var_20_6)
    int32_t ecx_10 = edi[0x1d] + var_8
    void* esi_5 = edi[0x37]
    float xmm1_6 = _mm_cvtepi32_ps(zx.o(ebx_2))
    int32_t eax_33
    int32_t edx_5
    edx_5:eax_33 = sx.q(eax_32)
    result = (eax_33 - edx_5) s>> 1
    float xmm0_6 = _mm_cvtepi32_ps(zx.o(ecx_10)) + xmm1_6
    float xmm1_8 = _mm_cvtepi32_ps(zx.o(ebp_2))
    *(esi_5 + 0x90) = xmm0_6
    *(esi_5 + 0x94) = _mm_cvtepi32_ps(zx.o(eax_5 - result)) + xmm1_8

return result
