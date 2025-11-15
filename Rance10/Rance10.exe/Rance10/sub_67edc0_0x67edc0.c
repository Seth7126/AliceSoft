// 函数: sub_67edc0
// 地址: 0x67edc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL hObject = *(arg1 + 4)

if (hObject != 0xffffffff)
    if (CloseHandle(hObject) == 0)
        hObject.b = 0
        return hObject
    
    *(arg1 + 4) = 0xffffffff

hObject.b = 1
return hObject
