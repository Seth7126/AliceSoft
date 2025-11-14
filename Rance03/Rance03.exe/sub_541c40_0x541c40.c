// 函数: sub_541c40
// 地址: 0x541c40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s>= 0 && arg2 s< (*(arg1 + 0x1b4) - *(arg1 + 0x1b0)) s>> 2)
    int32_t edx = *(*(arg1 + 0x1b0) + (arg2 << 2))
    
    if (edx != 0xffffffff)
        void* ecx = *(arg1 + 0x1f8)
        
        if (edx s>= 0 && edx s< (*(ecx + 8) - *(ecx + 4)) s>> 2)
            return *(*(ecx + 4) + (edx << 2))

return 0
