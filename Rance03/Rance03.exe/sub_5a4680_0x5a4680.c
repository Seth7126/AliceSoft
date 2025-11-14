// 函数: sub_5a4680
// 地址: 0x5a4680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* ecx_1 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (ecx_1 != 0)
                if (arg4 s>= 0 && arg4 s< (*(ecx_1 + 0x1b4) - *(ecx_1 + 0x1b0)) s>> 2)
                    *(*(ecx_1 + 0x1b0) + (arg4 << 2)) = arg5
                
                arg1.b = 1
                return arg1

arg1.b = 0
return arg1
