// 函数: sub_5a9c60
// 地址: 0x5a9c60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s>= 0)
    void* ecx = data_75d508
    
    if (arg2 s< (*(ecx + 0x54) - *(ecx + 0x50)) s>> 2)
        void* ecx_1 = *(*(ecx + 0x50) + (arg2 << 2))
        
        if (ecx_1 != 0 && arg4 s>= 0 && arg4 s< (*(ecx_1 + 0x20) - *(ecx_1 + 0x1c)) s>> 2)
            void* edx_1 = *(*(ecx_1 + 0x1c) + (arg4 << 2))
            
            if (edx_1 != 0)
                void* ecx_2 = *(edx_1 + 0x1d8)
                
                if (ecx_2 != 0)
                    if (arg3 == 2)
                        *(ecx_2 + 0x20) = arg5
                    label_5a9cc9:
                        int32_t eax_6 = *(ecx_2 + 0x20)
                        
                        if (eax_6 != 0xffffffff)
                            int32_t ecx_3 = *(ecx_2 + 0x24)
                            
                            if (ecx_3 != 0xffffffff)
                                *(edx_1 + 0x138) = _mm_cvtepi32_ps(zx.o(eax_6))
                                *(edx_1 + 0x13c) = _mm_cvtepi32_ps(zx.o(ecx_3))
                        
                        eax_6.b = 1
                        return eax_6
                    
                    if (arg3 == 3)
                        *(ecx_2 + 0x24) = arg5
                        goto label_5a9cc9

arg1.b = 0
return arg1
