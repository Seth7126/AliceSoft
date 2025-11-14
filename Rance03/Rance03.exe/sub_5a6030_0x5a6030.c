// 函数: sub_5a6030
// 地址: 0x5a6030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg1 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg1 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* eax_9 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (eax_9 != 0)
                void* ecx_1 = *(eax_9 + 0x1c0)
                
                if (ecx_1 != 0)
                    return sub_582ba0(ecx_1 + 0x30) __tailcall

return 0
