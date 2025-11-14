// 函数: sub_604940
// 地址: 0x604940
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL hObject = arg1[1]
*arg1 = &filesystem::CFile::`vftable'

if (hObject != 0xffffffff)
    hObject = CloseHandle(hObject)
    
    if (hObject != 0)
        arg1[1] = 0xffffffff

return hObject
