// 函数: sub_5015e0
// 地址: 0x5015e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = arg3
int32_t ecx = eax[3]

if (ecx == 1 || ecx == 2)
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** eax_1 = sub_4ef140(arg1[0x2d])
    int32_t ebx_1 = arg1[0x44]
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** var_10 = eax_1
    int32_t eax_2 = (*eax_1)->vFunc_9(1)
    void* ecx_3 = arg1[0x63]
    int32_t eax_5 = (arg1[0x2f] - arg1[0x2e]) s>> 2
    void* eax_6 = *(ecx_3 + 0x31c)
    float var_1c = 0f
    float var_20 = 0f
    void* eax_7
    
    if (eax_6 != 0)
        eax_7 = *(eax_6 + 8)
    else
        eax_7 = data_7fcba0
    
    sub_528b80(ecx_3 + 0x268, &var_1c, &var_20, (zx.o(0)).d, (zx.o(0)).d, ecx_3 + 0x268, eax_7)
    long double x87_r0
    long double x87_r1
    var_20 = sub_63ce00(var_20, x87_r0, x87_r1)
    long double x87_r2
    float xmm0_5 = sub_63ce00(var_1c, x87_r1, x87_r2)
    void* eax_9 = arg1[0x63]
    var_1c = xmm0_5
    int32_t esi_1 = *(eax_9 + 0xa4)
    int32_t ebx_3 = (*(*arg1 + 0x24))(1)
    int32_t ebx_4
    
    if (esi_1 - 1 u> 8)
        ebx_4 = 0
    else
        switch (esi_1 + &jump_table_501814[2]:3)
            case &lookup_table_501820, &lookup_table_501820[3], &lookup_table_501820[6]
                ebx_4 = 0
            case &lookup_table_501820[1], &lookup_table_501820[4], &lookup_table_501820[7]
                int32_t eax_14
                int32_t edx_3
                edx_3:eax_14 = sx.q(ebx_3)
                ebx_4 = neg.d((eax_14 - edx_3) s>> 1)
            case &lookup_table_501820[2], &lookup_table_501820[5], &lookup_table_501820[8]
                ebx_4 = neg.d(ebx_3)
    
    int32_t esi_3 = *(arg1[0x63] + 0xa4)
    int32_t ecx_7 = (*(*arg1 + 0x28))(1)
    int32_t ecx_8
    
    if (esi_3 - 1 u> 8)
        ecx_8 = 0
    else
        switch (esi_3 + &jump_table_50182c[2]:3)
            case &lookup_table_501838, &lookup_table_501838[1], &lookup_table_501838[2]
                ecx_8 = 0
            case &lookup_table_501838[3], &lookup_table_501838[4], &lookup_table_501838[5]
                int32_t eax_22
                int32_t edx_4
                edx_4:eax_22 = sx.q(ecx_7)
                ecx_8 = neg.d((eax_22 - edx_4) s>> 1)
            case &lookup_table_501838[6], &lookup_table_501838[7], &lookup_table_501838[8]
                ecx_8 = neg.d(ecx_7)
    
    eax = arg3
    float xmm1_4 = _mm_cvtepi32_ps(zx.o(ebx_4)) + var_20
    float xmm3_2 = _mm_cvtepi32_ps(zx.o(eax[1]))
    float xmm2_3 = _mm_cvtepi32_ps(zx.o(ecx_8)) + var_1c
    
    if (not(xmm3_2 < xmm1_4) && not(_mm_cvtepi32_ps(zx.o(ebx_1 - eax_2)) + xmm1_4 < xmm3_2))
        float xmm1_6 = _mm_cvtepi32_ps(zx.o(eax[2]))
        
        if (not(xmm1_6 < xmm2_3))
            int32_t ecx_9 = arg1[0x45]
            
            if (not(_mm_cvtepi32_ps(zx.o(ecx_9 * eax_5)) + xmm2_3 < xmm1_6))
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
                    ** eax_27 = var_10
                float xmm0_13 = _mm_cvtepi32_ps(zx.o(ecx_9))
                int32_t eax_28
                int32_t edx_5
                edx_5:eax_28 = muls.dp.d(0x2aaaaaab, arg1[0x5e] - arg1[0x5d])
                int32_t edx_6 = edx_5 s>> 2
                int32_t esi_5 =
                    int.d((xmm1_6 - xmm2_3) / xmm0_13 + _mm_cvtepi32_ps(zx.o(eax_27[0x46])))
                
                if (esi_5 s< (edx_6 u>> 0x1f) + edx_6)
                    int32_t var_34_2 = esi_5
                    sub_4ffbc0(&arg1[0x31])
                    arg1[0x10] = esi_5
                    var_10 =
                        &partsengine::SSelectedEventArgs::`vftable'{for `partsengine::IEventArgs'}
                    int32_t var_c_1 = esi_5
                    sub_4cbd50(&arg1[3], &var_10, arg2)
            
            eax = arg3

return sub_4cbd50(&arg1[3], eax, arg2)
