// 函数: sub_50d300
// 地址: 0x50d300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
char result = sub_4ff3f0(arg1 + 0x278, arg2)

if (result != 0 && *(arg1 + 0x28) == 2)
    return result

*(arg1 + 0x27c) = *(arg2 + 4)
*(arg1 + 0x280) = *(arg2 + 8)
*(arg1 + 0x284) = *(arg2 + 0xc)
*(arg1 + 0x294) = *(arg2 + 0x1c)
*(arg1 + 0x298) = *(arg2 + 0x20)
*(arg1 + 0x29c) = *(arg2 + 0x24)

if (*(arg1 + 0x28) != 2)
    *(arg1 + 0x28) = 2
    sub_50d490(arg1)

return sub_50d490(arg1)
