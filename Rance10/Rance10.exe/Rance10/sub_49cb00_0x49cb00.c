// 函数: sub_49cb00
// 地址: 0x49cb00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

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

@__security_check_cookie@4(result_1 ^ &point)
return result
