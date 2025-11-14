// 函数: sub_5a5e50
// 地址: 0x5a5e50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* ecx_1 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (ecx_1 != 0)
                void* ecx_2 = *(ecx_1 + 0x1c0)
                
                if (ecx_2 != 0 && arg4 s>= 0 && arg4 s< (*(ecx_2 + 0x50) - *(ecx_2 + 0x4c)) s>> 2)
                    void* eax_12 = *(*(ecx_2 + 0x4c) + (arg4 << 2))
                    
                    if (eax_12 != 0)
                        return *(eax_12 + 0x1c)

return 0xffffffff
