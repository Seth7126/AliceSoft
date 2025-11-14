// 函数: sub_5a8620
// 地址: 0x5a8620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && ecx != 0xffffffec && arg2 s>= 0
                && arg2 s< (*(ecx + 0x1b8) - *(ecx + 0x1b4)) s>> 2)
            *(*(ecx + 0x1b4) + (arg2 << 2)) = arg4
            int32_t eax_4
            eax_4.b = 1
            return eax_4

arg1.b = 0
return arg1
