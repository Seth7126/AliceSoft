// 函数: sub_5acff0
// 地址: 0x5acff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg2 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg2 << 2))
        
        if (ecx != 0 && arg4 s>= 0 && arg4 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* ecx_1 = *(*(ecx + 0x1c) + (arg4 << 2))
            
            if (ecx_1 != 0)
                arg1 = *(ecx_1 + 0x10)
                
                if (arg1 == 0xa || arg1 == 0xb)
                    void* ecx_2 = *(ecx_1 + 0x1c0)
                    
                    if (ecx_2 != 0 && arg5 s>= 0
                            && arg5 s< (*(ecx_2 + 0x50) - *(ecx_2 + 0x4c)) s>> 2)
                        void* ecx_3 = *(*(ecx_2 + 0x4c) + (arg5 << 2))
                        
                        if (ecx_3 != 0 && arg3 - 0x70 u<= 0xa)
                            switch (arg3)
                                case 0x70
                                    *arg6 = *(ecx_3 + 0x4c)
                                    int32_t* eax_6
                                    eax_6.b = 1
                                    return eax_6
                                case 0x71
                                    *arg6 = *(ecx_3 + 0x50)
                                    int32_t* eax_7
                                    eax_7.b = 1
                                    return eax_7
                                case 0x75
                                    *arg6 = *(ecx_3 + 0x54)
                                    int32_t* eax_8
                                    eax_8.b = 1
                                    return eax_8
                                case 0x76
                                    *arg6 = *(ecx_3 + 0x58)
                                    int32_t* eax_9
                                    eax_9.b = 1
                                    return eax_9
                                case 0x77
                                    *arg6 = *(ecx_3 + 0x5c)
                                    int32_t* eax_10
                                    eax_10.b = 1
                                    return eax_10
                                case 0x78
                                    *arg6 = *(ecx_3 + 0x64)
                                    int32_t* eax_11
                                    eax_11.b = 1
                                    return eax_11
                                case 0x79
                                    *arg6 = *(ecx_3 + 0x44)
                                    int32_t* eax_12
                                    eax_12.b = 1
                                    return eax_12
                                case 0x7a
                                    *arg6 = *(ecx_3 + 0x48)
                                    int32_t* eax_13
                                    eax_13.b = 1
                                    return eax_13

arg1.b = 0
return arg1
