// 函数: sub_5ad150
// 地址: 0x5ad150
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
                        arg1 = *(*(ecx_2 + 0x4c) + (arg5 << 2))
                        
                        if (arg1 != 0 && arg3 - 0x70 u<= 0xa)
                            switch (arg3)
                                case 0x70
                                    *(arg1 + 0x4c) = arg6
                                    arg1.b = 1
                                    return arg1
                                case 0x71
                                    *(arg1 + 0x50) = arg6
                                    arg1.b = 1
                                    return arg1
                                case 0x75
                                    int128_t var_10 = *(arg1 + 0x54)
                                    var_10.d = arg6
                                    *(arg1 + 0x54) = var_10
                                    arg1.b = 1
                                    return arg1
                                case 0x76
                                    int128_t var_10_1 = *(arg1 + 0x54)
                                    var_10_1:4.d = arg6
                                    *(arg1 + 0x54) = var_10_1
                                    arg1.b = 1
                                    return arg1
                                case 0x77
                                    int128_t var_10_2 = *(arg1 + 0x54)
                                    var_10_2:8.d = arg6
                                    *(arg1 + 0x54) = var_10_2
                                    arg1.b = 1
                                    return arg1
                                case 0x78
                                    *(arg1 + 0x64) = arg6
                                    arg1.b = 1
                                    return arg1
                                case 0x79
                                    *(arg1 + 0x44) = arg6
                                    arg1.b = 1
                                    return arg1
                                case 0x7a
                                    *(arg1 + 0x48) = arg6
                                    arg1.b = 1
                                    return arg1

arg1.b = 0
return arg1
