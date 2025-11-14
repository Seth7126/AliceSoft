// 函数: sub_5e1d10
// 地址: 0x5e1d10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

POINT point
BOOL result = __security_cookie ^ &point
BOOL result_1 = result

if (*(arg1 + 0x28) == 0)
    GetCursorPos(&point)
    RECT rect
    result = GetWindowRect(**(arg1 + 8), &rect)
    
    if (result != 0)
        result = rect.bottom + 1
        
        if (point.y s> result)
            result = PostMessageA(**(arg1 + 8), 0x7fff, 0, 0)

sub_69a5bc(result_1 ^ &point)
return result
