// 函数: sub_67ecb0
// 地址: 0x67ecb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL hObject = arg1[1]
*arg1 = &filesystem::CFile::`vftable'

if (hObject != 0xffffffff)
    hObject = CloseHandle(hObject)
    
    if (hObject != 0)
        arg1[1] = 0xffffffff

return hObject
