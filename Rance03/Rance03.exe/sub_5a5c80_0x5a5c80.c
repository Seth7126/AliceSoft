// 函数: sub_5a5c80
// 地址: 0x5a5c80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg1 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg1 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* eax_9 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (eax_9 != 0)
                void* eax_10 = *(eax_9 + 0x1c0)
                
                if (eax_10 != 0)
                    int32_t eax_11
                    int32_t edx
                    edx:eax_11 = muls.dp.d(0x38e38e39, *(eax_10 + 0x5c) - *(eax_10 + 0x58))
                    int32_t edx_1 = edx s>> 3
                    return (edx_1 u>> 0x1f) + edx_1

return 0
