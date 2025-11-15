// 函数: sub_472ef0
// 地址: 0x472ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char** esi = *(arg1 + 0x24)
char* eax

if (*(arg1 + 0x20) != 0 && esi != *(arg1 + 0x1c))
    *(arg1 + 0x24) = *esi
    
    if (*(arg1 + 0x20) != 0)
        eax = *(arg1 + 0x1c)
        void* ebp_1 = *(arg1 + 0x24)
        
        if (ebp_1 != eax)
            void** edx_1 = ebp_1 + 8
            
            if (edx_1 != 0)
                void** ecx = edx_1
                
                if (ebp_1 == eax)
                    ecx = nullptr
                
                if (ecx[0xc] == 0x13)
                    if (ebp_1 == eax)
                        edx_1 = nullptr
                    
                    if (arg2 != edx_1)
                        sub_403590(arg2, edx_1, 0, 0xffffffff)
                    
                    int32_t* arg_c
                    
                    if (*(arg1 + 0x20) == 0 || *(arg1 + 0x24) == *(arg1 + 0x1c))
                    label_472fcd:
                        int32_t* var_20_2 = arg_c
                        *(arg1 + 0x24) = *(*(arg1 + 0x24) + 4)
                        
                        if (sub_473050(arg1, arg3, var_20_2, arg4).b != 0)
                        label_472ff0:
                            
                            if (*(arg1 + 0x20) == 0 || *(arg1 + 0x24) == *(arg1 + 0x1c))
                                *(arg1 + 0x24) = *(*(arg1 + 0x24) + 4)
                            else
                                *(arg1 + 0x24) = **(arg1 + 0x24)
                                
                                if (*(arg1 + 0x20) == 0)
                                    *(arg1 + 0x24) = *(*(arg1 + 0x24) + 4)
                                else
                                    int32_t eax_10 = *(arg1 + 0x1c)
                                    void* edx_3 = *(arg1 + 0x24)
                                    
                                    if (edx_3 == eax_10)
                                        *(arg1 + 0x24) = *(*(arg1 + 0x24) + 4)
                                    else
                                        void* ecx_5 = edx_3 + 8
                                        
                                        if (ecx_5 == 0)
                                            *(arg1 + 0x24) = *(*(arg1 + 0x24) + 4)
                                        else
                                            if (edx_3 == eax_10)
                                                ecx_5 = nullptr
                                            
                                            if (*(ecx_5 + 0x30) != 4)
                                                *(arg1 + 0x24) = *(*(arg1 + 0x24) + 4)
                            
                            int32_t eax_14 = **(arg1 + 0x24)
                            *(arg1 + 0x24) = eax_14
                            *(arg1 + 0x24) = *sub_473970(arg1 + 0x1c, &arg_c, esi, eax_14)
                            int32_t eax_16
                            eax_16.b = 1
                            return eax_16
                    else
                        *(arg1 + 0x24) = **(arg1 + 0x24)
                        
                        if (*(arg1 + 0x20) == 0)
                            goto label_472fcd
                        
                        int32_t eax_4 = *(arg1 + 0x1c)
                        void* ecx_2 = *(arg1 + 0x24)
                        
                        if (ecx_2 == eax_4)
                            goto label_472fcd
                        
                        void* edx_2 = ecx_2 + 8
                        
                        if (edx_2 == 0)
                            goto label_472fcd
                        
                        if (ecx_2 == eax_4)
                            edx_2 = nullptr
                        
                        if (*(edx_2 + 0x30) != 0xc)
                            goto label_472fcd
                        
                        if (sub_4733e0(arg1, arg3, arg_c, arg5).b != 0)
                            goto label_472ff0

eax.b = 0
return eax
