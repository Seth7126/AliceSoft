// 函数: sub_63db30
// 地址: 0x63db30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = data_7fcbc0
BOOL hObject

if (esi != 0)
    esi[5].b = 0
    hObject = esi[2]
    
    if (hObject != 0xffffffff)
        if (CloseHandle(hObject) == 0)
            hObject.b = 0
            return hObject
        
        esi[2] = 0xffffffff
        esi = data_7fcbc0
    
    if (esi != 0)
        (**esi)(1)
    
    data_7fcbc0 = 0

hObject.b = 1
return hObject
