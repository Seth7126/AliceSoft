// 函数: sub_652a20
// 地址: 0x652a20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HGDIOBJ ho = arg1[1]
*arg1 = &dpparts::CBrush::`vftable'

if (ho != 0)
    DeleteObject(ho)
    arg1[1] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
