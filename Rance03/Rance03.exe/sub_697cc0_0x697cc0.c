// 函数: sub_697cc0
// 地址: 0x697cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE hObject = arg1[1]
*arg1 = &sys40::CDualBoot::`vftable'

if (hObject != 0)
    CloseHandle(hObject)
    arg1[1] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
