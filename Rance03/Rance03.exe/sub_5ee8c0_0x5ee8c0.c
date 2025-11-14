// 函数: sub_5ee8c0
// 地址: 0x5ee8c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = data_75d518
BOOL hObject

if (esi != 0)
    esi[5].b = 0
    hObject = esi[2]
    
    if (hObject != 0xffffffff)
        if (CloseHandle(hObject) == 0)
            hObject.b = 0
            return hObject
        
        esi[2] = 0xffffffff
        esi = data_75d518
    
    if (esi != 0)
        (**esi)(1)
    
    data_75d518 = 0

hObject.b = 1
return hObject
