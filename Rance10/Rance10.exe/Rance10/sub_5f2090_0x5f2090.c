// 函数: sub_5f2090
// 地址: 0x5f2090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &storage::CStorageFile::`vftable'
BOOL hObject = arg1[2]
arg1[1] = &filesystem::CFile::`vftable'

if (hObject != 0xffffffff)
    hObject = CloseHandle(hObject)
    
    if (hObject != 0)
        arg1[2] = 0xffffffff

return hObject
