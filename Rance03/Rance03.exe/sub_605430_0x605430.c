// 函数: sub_605430
// 地址: 0x605430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE hFindFile = arg1[1]
*arg1 = &filesystem::CFindFile::CImpl::`vftable'

if (hFindFile != 0xffffffff && FindClose(hFindFile) != 0)
    arg1[1] = 0xffffffff

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
