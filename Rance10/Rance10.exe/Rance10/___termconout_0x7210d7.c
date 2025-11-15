// 函数: ___termconout
// 地址: 0x7210d7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL hObject = data_7e1d40

if (hObject != 0xffffffff && hObject != 0xfffffffe)
    return CloseHandle(hObject)

return hObject
