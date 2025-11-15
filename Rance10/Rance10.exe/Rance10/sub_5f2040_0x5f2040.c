// 函数: sub_5f2040
// 地址: 0x5f2040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &storage::CStorageFile::`vftable'
HANDLE hObject = arg1[2]
arg1[1] = &filesystem::CFile::`vftable'

if (hObject != 0xffffffff && CloseHandle(hObject) != 0)
    arg1[2] = 0xffffffff

if ((arg2 & 1) != 0)
    int32_t var_8_2 = 0x14
    operator new(arg1)

return arg1
