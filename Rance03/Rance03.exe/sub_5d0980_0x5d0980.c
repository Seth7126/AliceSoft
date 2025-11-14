// 函数: sub_5d0980
// 地址: 0x5d0980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s>= 0)
    void* ecx = *(arg1 + 4)
    
    if (arg2 s< (*(ecx + 0xc) - *(ecx + 8)) s>> 2 && arg2 s< (*(ecx + 0xc) - *(ecx + 8)) s>> 2
            && *(*(ecx + 8) + (arg2 << 2)) != 0 && arg2 u< (*(ecx + 0xc) - *(ecx + 8)) s>> 2)
        void* eax_12 = *(*(ecx + 8) + (arg2 << 2))
        
        if (eax_12 != 0)
            return *(eax_12 + 0x14)

return 0xffffffff
