// 函数: sub_4ad140
// 地址: 0x4ad140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = arg3[1]
int32_t var_24 = esi_1
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormView::VTable** 
    result = sub_4f15e0(*(arg1 + 0xb4))

if (result != 0)
    int32_t edx_1 = result[2]
    
    if (esi_1 s>= edx_1 && result[1] + edx_1 s> esi_1)
        result = result[3]
        float ebx_1 = result[esi_1 - edx_1]
        float var_c = ebx_1
        
        if (ebx_1 != 0)
            int32_t* ecx_3 = *(arg2 + 0x74)
            
            if (ecx_3 != 0)
                result = (*(*ecx_3 + 8))(1)
                
                if (result == 0xd)
                    result = sub_4efa20(arg2)
                    
                    if (result[0x37] == result[0x33])
                        result = (*result)->vFunc_6()
                        
                        if (result.b != 0 && ebx_1 != arg2)
                            float eax_3 = var_c
                            void* ebx_2 = *(arg2 + 0x40)
                            void* var_10 = *(eax_3 i+ 0x40)
                            int32_t* ecx_8 = *(eax_3 i+ 0x74)
                            int32_t eax_5
                            
                            if (ecx_8 != 0)
                                eax_5 = (*(*ecx_8 + 8))(1)
                            
                            if (ecx_8 == 0 || eax_5 != 0xd)
                                sub_4ab5b0(arg1 + 0xa0, ebx_2)
                                sub_4ed780(*(arg1 + 0xb0), &var_10, &var_c)
                                result = arg3
                                uint128_t xmm0_1 = zx.o(result[2])
                                float xmm1_2 = _mm_cvtepi32_ps(zx.o(result[3]))
                                float xmm0_3 = _mm_cvtepi32_ps(xmm0_1) f- var_10
                                *(arg2 + 0x94) = xmm1_2 - var_c
                                *(arg2 + 0x90) = xmm0_3
                            else
                                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormView::VTable
                                    ** eax_6 = sub_4efa20(var_c)
                                int32_t ecx_10 = eax_6[0x38]
                                int32_t esi_4 = eax_6[0x31]
                                var_c = eax_6[0x2f]
                                int32_t edx_4 = eax_6[0x30]
                                result = eax_6[0x32]
                                
                                if (ecx_10 == var_c || ecx_10 == edx_4)
                                label_4ad250:
                                    
                                    if (ecx_10 == esi_4)
                                        return sub_4ab370(arg1 + 0xa0, var_10, ebx_2)
                                    
                                    if (ecx_10 == result)
                                        return sub_4ab490(arg1 + 0xa0, var_10, ebx_2)
                                    
                                    if (ecx_10 == var_c)
                                        return sub_4ab0e0(arg1 + 0xa0, var_10, ebx_2)
                                    
                                    if (ecx_10 == edx_4)
                                        return sub_4ab250(arg1 + 0xa0, var_10, ebx_2)
                                else
                                    if (ecx_10 == esi_4)
                                        return sub_4ab370(arg1 + 0xa0, var_10, ebx_2)
                                    
                                    if (ecx_10 == result)
                                        goto label_4ad250

return result
