// 函数: sub_64c8c0
// 地址: 0x64c8c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[0x49].b != 0)
    POINT point
    GetCursorPos(&point)
    ScreenToClient(arg2, &point)
    int32_t x = point.x
    
    if (x s< 0)
        x = 0
    
    arg1[0x47] = x
    int32_t y = point.y
    
    if (y s< 0)
        y = 0
    
    arg1[0x48] = y
    (*(*arg1 + 0x3c))()

return 0
