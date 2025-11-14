// 函数: sub_5acb90
// 地址: 0x5acb90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* esi_2 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (esi_2 != 0)
                void* esi_3 = *(esi_2 + 0x1d8)
                
                if (esi_3 != 0)
                    if (arg4 s>= 0)
                        int32_t eax_4
                        int32_t edx
                        edx:eax_4 = muls.dp.d(0x1a6d01a7, *(esi_3 + 0x18) - *(esi_3 + 0x14))
                        int32_t edx_1 = edx s>> 6
                        
                        if (arg4 s< (edx_1 u>> 0x1f) + edx_1)
                            int32_t edi_1 = arg4 * 0x26c
                            
                            if (edi_1 != neg.d(*(esi_3 + 0x14)))
                                if (arg5 s>= 0)
                                    int32_t eax_7
                                    int32_t edx_2
                                    edx_2:eax_7 =
                                        muls.dp.d(0x1a6d01a7, *(esi_3 + 0x18) - *(esi_3 + 0x14))
                                    int32_t edx_3 = edx_2 s>> 6
                                    
                                    if (arg5 s< (edx_3 u>> 0x1f) + edx_3)
                                        int32_t eax_10 = arg5 * 0x26c
                                        
                                        if (eax_10 != neg.d(*(esi_3 + 0x14)))
                                            sub_568b50(edi_1 + *(esi_3 + 0x14), 
                                                eax_10 + *(esi_3 + 0x14))
                                            void* eax_11
                                            eax_11.b = 1
                                            return eax_11
                                
                                arg1.b = 0
                                return arg1
                    
                    arg1.b = 0
                    return arg1

arg1.b = 0
return arg1
