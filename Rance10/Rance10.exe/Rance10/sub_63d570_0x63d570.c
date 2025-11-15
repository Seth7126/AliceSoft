// 函数: sub_63d570
// 地址: 0x63d570
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &textfile::CTextFileReader::`vftable'
HANDLE hObject = arg1[2]

if (hObject != 0xffffffff && CloseHandle(hObject) != 0)
    arg1[2] = 0xffffffff

HANDLE hObject_1 = arg1[2]
arg1[1] = &filesystem::CFile::`vftable'

if (hObject_1 != 0xffffffff && CloseHandle(hObject_1) != 0)
    arg1[2] = 0xffffffff

if ((arg2 & 1) != 0)
    int32_t var_8_3 = 0x14
    operator new(arg1)

return arg1
