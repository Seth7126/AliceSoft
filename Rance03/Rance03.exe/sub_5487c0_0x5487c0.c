// 函数: sub_5487c0
// 地址: 0x5487c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s< 0 || arg2 s>= (*(arg1 + 0x24) - *(arg1 + 0x20)) s>> 2)
    if (((*(arg1 + 0x24) - *(arg1 + 0x20)) & 0xfffffffc) s> 0)
        return **(arg1 + 0x20)
else if (arg2 s< (*(arg1 + 0x24) - *(arg1 + 0x20)) s>> 2)
    return *(*(arg1 + 0x20) + (arg2 << 2))

return 0
