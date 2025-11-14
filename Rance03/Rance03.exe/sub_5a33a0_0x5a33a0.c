// 函数: sub_5a33a0
// 地址: 0x5a33a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* esi_2 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (esi_2 != 0)
                int32_t var_8 = arg6
                
                if (arg5 s>= 0)
                    int32_t eax_4
                    int32_t edx
                    edx:eax_4 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x6c) - *(esi_2 + 0x68))
                    int32_t edx_1 = edx s>> 1
                    
                    if (arg5 s< (edx_1 u>> 0x1f) + edx_1)
                        int32_t ecx_3 = *(esi_2 + 0x68)
                        int32_t edx_2 = arg5 * 3
                        *(ecx_3 + (edx_2 << 2)) = arg4.q
                        *(ecx_3 + (edx_2 << 2) + 8) = arg7
                        int32_t eax_7
                        eax_7.b = 1
                        return eax_7
                
                arg1.b = 0
                return arg1

arg1.b = 0
return arg1
