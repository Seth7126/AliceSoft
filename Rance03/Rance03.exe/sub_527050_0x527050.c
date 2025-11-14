// 函数: sub_527050
// 地址: 0x527050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = data_75d508

if (arg1 s>= 0 && arg1 s< (*(edx + 0x54) - *(edx + 0x50)) s>> 2)
    void* ecx_1 = *(*(edx + 0x50) + (arg1 << 2))
    
    if (ecx_1 != 0 && arg2 s>= 0 && arg2 s< (*(ecx_1 + 0x20) - *(ecx_1 + 0x1c)) s>> 2)
        void* esi_1 = *(*(ecx_1 + 0x1c) + (arg2 << 2))
        
        if (esi_1 != 0)
            void* esi_2 = *(esi_1 + 0x1d8)
            
            if (esi_2 != 0)
                if (arg3 s>= 0)
                    int32_t eax_9
                    int32_t edx_2
                    edx_2:eax_9 = muls.dp.d(0x1a6d01a7, *(esi_2 + 0x18) - *(esi_2 + 0x14))
                    int32_t edx_3 = edx_2 s>> 6
                    
                    if (arg3 s< (edx_3 u>> 0x1f) + edx_3)
                        return arg3 * 0x26c + *(esi_2 + 0x14)

return 0
