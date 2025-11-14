// 函数: sub_5ab640
// 地址: 0x5ab640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg2 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* edx = *(*(esi_1 + 0x50) + (arg2 << 2))
        
        if (edx != 0 && arg4 s>= 0 && arg4 s< (*(edx + 0x20) - *(edx + 0x1c)) s>> 2)
            arg1 = *(*(edx + 0x1c) + (arg4 << 2))
            
            if (arg1 != 0)
                if (arg3 != 0)
                    arg1 = *(arg1 + 0x1d8)
                    
                    if (arg1 != 0)
                        if (arg3 == 1)
                            int32_t eax_10
                            int32_t edx_1
                            edx_1:eax_10 = muls.dp.d(0x1a6d01a7, *(arg1 + 0x18) - *(arg1 + 0x14))
                            int32_t edx_2 = edx_1 s>> 6
                            *arg5 = (edx_2 u>> 0x1f) + edx_2
                            int32_t* eax_11
                            eax_11.b = 1
                            return eax_11
                        
                        if (arg3 == 2)
                            int32_t var_c
                            void var_4
                            sub_55b120(arg1, &var_c, &var_4)
                            *arg5 = var_c
                            int32_t eax_9
                            eax_9.b = 1
                            return eax_9
                        
                        if (arg3 == 3)
                            int32_t var_10
                            void var_8
                            sub_55b120(arg1, &var_8, &var_10)
                            *arg5 = var_10
                            int32_t eax_8
                            eax_8.b = 1
                            return eax_8
                else if (*(arg1 + 0x160) == arg3.b)
                    arg1 = *(arg1 + 0x15c)
                    
                    if (arg1 != 0)
                        void* eax_5 = *(arg1 + 0x10)
                        
                        if (eax_5 != 0)
                            *arg5 = *(eax_5 + 0x2c)
                            int32_t* eax_7
                            eax_7.b = 1
                            return eax_7
                        
                        *arg5 = arg3
                        int32_t* eax_6
                        eax_6.b = 1
                        return eax_6

arg1.b = 0
return arg1
