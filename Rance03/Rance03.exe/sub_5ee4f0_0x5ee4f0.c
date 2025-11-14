// 函数: sub_5ee4f0
// 地址: 0x5ee4f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &textfile::CTextFileWriter::`vftable'
arg1[5].b = 0
HANDLE hObject = arg1[2]

if (hObject != 0xffffffff && CloseHandle(hObject) != 0)
    arg1[2] = 0xffffffff

HANDLE hObject_1 = arg1[2]
arg1[1] = &filesystem::CFile::`vftable'

if (hObject_1 != 0xffffffff && CloseHandle(hObject_1) != 0)
    arg1[2] = 0xffffffff

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
