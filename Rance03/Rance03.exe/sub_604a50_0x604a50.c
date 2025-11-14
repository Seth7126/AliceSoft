// 函数: sub_604a50
// 地址: 0x604a50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL hObject = *(arg1 + 4)

if (hObject != 0xffffffff)
    if (CloseHandle(hObject) == 0)
        hObject.b = 0
        return hObject
    
    *(arg1 + 4) = 0xffffffff

hObject.b = 1
return hObject
