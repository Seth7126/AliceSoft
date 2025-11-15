// 函数: sub_4ad840
// 地址: 0x4ad840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
*arg4 = 0
void* var_4 = arg1
*arg3 = 0
int32_t* i = *arg2
void* result = arg2[1]

if (i != result)
    do
        int32_t edi_1 = *i
        int32_t var_18_1 = edi_1
        result = sub_4f15e0(*(arg1 + 0xb4))
        
        if (result != 0)
            int32_t edx_1 = *(result + 8)
            
            if (edi_1 s>= edx_1 && *(result + 4) + edx_1 s> edi_1)
                result = *(result + 0xc)
                void* edi_3 = *(result + ((edi_1 - edx_1) << 2))
                
                if (edi_3 != 0)
                    int32_t* ecx_3 = *(edi_3 + 0x74)
                    
                    if (ecx_3 != 0)
                        result = (*(*ecx_3 + 8))(1)
                        
                        if (result == 0xd)
                            if (i != *arg2)
                                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormView::VTable
                                    ** eax_4 = sub_4efa20(edi_3)
                                int32_t ecx_6 = *arg3
                                int32_t eax_5 = eax_4[0x3d]
                                
                                if (ecx_6 s< eax_5)
                                    ecx_6 = eax_5
                                
                                *arg3 = ecx_6
                            else
                                *arg3 = (*(**(edi_3 + 0x74) + 0x24))(1)
                            
                            result = (*(**(edi_3 + 0x74) + 0x28))(1)
                            *arg4 += result
        
        arg1 = var_4
        i = &i[1]
    while (i != arg2[1])

return result
