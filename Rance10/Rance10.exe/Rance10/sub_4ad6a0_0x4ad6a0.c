// 函数: sub_4ad6a0
// 地址: 0x4ad6a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg1
void* var_18 = ebp
int32_t* i = *(ebp + 0xa4)
int32_t* i_1 = i

while (i != *(ebp + 0xa8))
    if (*i != i[1])
        float var_c = 0f
        float var_8 = 0f
        sub_4ad990(ebp, i, &var_c, &var_8)
        int32_t* j = *i
        var_c = var_c
        
        while (j != i[1])
            void* var_10 = nullptr
            float var_14 = 0f
            sub_4ad840(ebp, j, &var_10, &var_14)
            int32_t* k = *j
            var_14 = var_8
            
            for (; k != j[1]; k = &k[1])
                int32_t ebx_1 = *k
                int32_t var_2c_3 = ebx_1
                void* eax = sub_4f15e0(*(ebp + 0xb4))
                
                if (eax != 0)
                    int32_t edx_1 = *(eax + 8)
                    
                    if (ebx_1 s>= edx_1 && *(eax + 4) + edx_1 s> ebx_1)
                        void* ebp_1 = *(*(eax + 0xc) + ((ebx_1 - edx_1) << 2))
                        
                        if (ebp_1 != 0)
                            int32_t* ecx_5 = *(ebp_1 + 0x74)
                            
                            if (ecx_5 != 0 && (*(*ecx_5 + 8))(1) == 0xd)
                                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormView::VTable
                                    ** eax_2 = sub_4efa20(ebp_1)
                                sub_4edc30(ebp_1, var_c, var_14)
                                int32_t var_2c_4 = (*eax_2)->vFunc_10(1)
                                sub_4b39f0(eax_2, var_10)
                                var_14 = _mm_cvtepi32_ps(zx.o((*eax_2)->vFunc_10(1))) + var_14
                        
                        ebp = var_18
            
            j = &j[3]
            i = i_1
            var_c = _mm_cvtepi32_ps(zx.o(var_10)) + var_c
    
    i = &i[4]
    i_1 = i
