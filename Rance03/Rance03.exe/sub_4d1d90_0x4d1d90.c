// 函数: sub_4d1d90
// 地址: 0x4d1d90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = sub_510260(*(arg1 + 0x34), arg3)
char result = sub_4ff3f0(eax + 0x4c, arg2)

if (result == 0)
    *(eax + 0x50) = *(arg2 + 4)
    *(eax + 0x54) = *(arg2 + 8)
    *(eax + 0x58) = *(arg2 + 0xc)
    *(eax + 0x68) = *(arg2 + 0x1c)
    *(eax + 0x6c) = *(arg2 + 0x20)
    *(eax + 0x70) = *(arg2 + 0x24)
    result = sub_519640(eax)
    *(eax + 0xd8) = 1

return result
