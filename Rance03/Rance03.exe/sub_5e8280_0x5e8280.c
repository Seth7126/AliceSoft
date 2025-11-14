// 函数: sub_5e8280
// 地址: 0x5e8280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

POINT point
int32_t eax_1 = __security_cookie ^ &point
RECT rect

if (IsIconic(**(arg1 + 0xc)) == 0 && GetClientRect(**(arg1 + 0xc), &rect) != 0)
    POINT point_1
    point_1.x = rect.left
    point_1.y = rect.top
    point.x = rect.right
    point.y = rect.bottom
    
    if (ClientToScreen(**(arg1 + 0xc), &point_1) != 0 && ClientToScreen(**(arg1 + 0xc), &point) != 0
            && arg2 s>= point_1.x && arg2 s< point.x && arg3 s>= point_1.y && arg3 s< point.y)
        BOOL eax_11
        eax_11.b = SetCursorPos(arg2, arg3) != 0
        sub_69a5bc(eax_1 ^ &point)
        return eax_11

BOOL eax_3
eax_3.b = 0
sub_69a5bc(eax_1 ^ &point)
return eax_3
