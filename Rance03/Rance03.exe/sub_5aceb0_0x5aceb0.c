// 函数: sub_5aceb0
// 地址: 0x5aceb0
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
                        
                        if (ecx_3 != 0 && arg3 - 0x72 u<= 0xb)
                            switch (arg3)
                                case 0x72
                                    *(ecx_3 + 0x6c) = arg6
                                    int32_t eax_6
                                    eax_6.b = 1
                                    return eax_6
                                case 0x73
                                    arg1.b = arg6 != 0
                                    *(ecx_3 + 0x40) = arg1.b
                                    arg1.b = 1
                                    return arg1
                                case 0x74
                                    arg1.b = arg6 != 0
                                    *(ecx_3 + 0x41) = arg1.b
                                    arg1.b = 1
                                    return arg1
                                case 0x7b
                                    arg1.b = arg6 != 0
                                    *(ecx_3 + 0x68) = arg1.b
                                    arg1.b = 1
                                    return arg1
                                case 0x7c
                                    arg1.b = arg6 != 0
                                    *(ecx_3 + 0x75) = arg1.b
                                    arg1.b = 1
                                    return arg1
                                case 0x7d
                                    arg1.b = arg6 != 0
                                    *(ecx_3 + 0x27) = arg1.b
                                    arg1.b = 1
                                    return arg1

arg1.b = 0
return arg1
