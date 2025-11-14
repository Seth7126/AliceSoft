// 函数: ___termconout
// 地址: 0x6ac6f2
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL hObject = data_74b410

if (hObject != 0xffffffff && hObject != 0xfffffffe)
    return CloseHandle(hObject)

return hObject
