// 函数: sub_4fd230
// 地址: 0x4fd230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x38) != arg2 || *(arg1 + 0x3c) != arg3 || *(arg1 + 0x40) != arg4
        || *(arg1 + 0x44) != arg5)
    *(arg1 + 0x38) = arg2
    *(arg1 + 0x3c) = arg3
    *(arg1 + 0x40) = arg4
    *(arg1 + 0x44) = arg5
    *(arg1 + 0x48) = 1

return arg5
