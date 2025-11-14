// 函数: sub_1000b8a9
// 地址: 0x1000b8a9
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

HANDLE hObject_1 = data_10020f04

if (hObject_1 != 0xffffffff && hObject_1 != 0xfffffffe)
    CloseHandle(hObject_1)

BOOL hObject = data_10020f00

if (hObject != 0xffffffff && hObject != 0xfffffffe)
    return CloseHandle(hObject)

return hObject
