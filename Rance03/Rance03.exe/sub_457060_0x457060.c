// 函数: sub_457060
// 地址: 0x457060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s>= 0 && (*(arg1 + 0x18) - *(arg1 + 0x14)) s>> 2 s> arg2)
    void* edx = *(*(arg1 + 0x14) + (arg2 << 2))
    
    if (edx != 0 && arg3 s>= 0 && (*(edx + 8) - *(edx + 4)) s>> 2 s> arg3)
        void* eax_9 = *(*(edx + 4) + (arg3 << 2))
        
        if (eax_9 != 0)
            return *(eax_9 + 0xc) ^ 0x65656565

return 0
