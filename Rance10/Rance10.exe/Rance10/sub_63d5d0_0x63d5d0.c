// 函数: sub_63d5d0
// 地址: 0x63d5d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &textfile::CTextFileReader::`vftable'
HANDLE hObject = arg1[2]

if (hObject != 0xffffffff && CloseHandle(hObject) != 0)
    arg1[2] = 0xffffffff

BOOL hObject_1 = arg1[2]
arg1[1] = &filesystem::CFile::`vftable'

if (hObject_1 != 0xffffffff)
    hObject_1 = CloseHandle(hObject_1)
    
    if (hObject_1 != 0)
        arg1[2] = 0xffffffff

return hObject_1
