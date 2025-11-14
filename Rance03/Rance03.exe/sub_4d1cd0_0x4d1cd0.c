// 函数: sub_4d1cd0
// 地址: 0x4d1cd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = sub_510260(*(arg1 + 0x34), arg3)

if (sub_4ff3f0(eax + 0xc, arg2) == 0)
    *(eax + 0x10) = *(arg2 + 4)
    *(eax + 0x14) = *(arg2 + 8)
    *(eax + 0x18) = *(arg2 + 0xc)
    *(eax + 0x28) = *(arg2 + 0x1c)
    *(eax + 0x2c) = *(arg2 + 0x20)
    *(eax + 0x30) = *(arg2 + 0x24)
    sub_519640(eax)
    *(eax + 0xd8) = 1

return 1
