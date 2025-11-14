// 函数: sub_5a3470
// 地址: 0x5a3470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* ecx_1 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (ecx_1 != 0 && arg5 s>= 0 && arg5 s< (*(ecx_1 + 0x78) - *(ecx_1 + 0x74)) s>> 3)
                int32_t ecx_2 = *(ecx_1 + 0x74)
                *(ecx_2 + (arg5 << 3)) = arg4
                *(ecx_2 + (arg5 << 3) + 4) = arg6
                int32_t eax_7
                eax_7.b = 1
                return eax_7

arg1.b = 0
return arg1
