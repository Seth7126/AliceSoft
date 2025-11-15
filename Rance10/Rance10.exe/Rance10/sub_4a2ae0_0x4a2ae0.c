// 函数: sub_4a2ae0
// 地址: 0x4a2ae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

POINT point
int32_t eax_1 = __security_cookie ^ &point
RECT rect

if (IsIconic(**(arg1 + 0x10)) == 0 && GetClientRect(**(arg1 + 0x10), &rect) != 0)
    point.x = rect.left
    point.y = rect.top
    POINT point_1
    point_1.x = rect.right
    point_1.y = rect.bottom
    
    if (ClientToScreen(**(arg1 + 0x10), &point) != 0
            && ClientToScreen(**(arg1 + 0x10), &point_1) != 0 && arg2 s>= point.x
            && arg2 s< point_1.x && arg3 s>= point.y && arg3 s< point_1.y)
        BOOL eax_11
        eax_11.b = SetCursorPos(arg2, arg3) != 0
        @__security_check_cookie@4(eax_1 ^ &point)
        return eax_11

BOOL eax_3
eax_3.b = 0
@__security_check_cookie@4(eax_1 ^ &point)
return eax_3
