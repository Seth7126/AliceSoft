// 函数: sub_680b10
// 地址: 0x680b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

POINT point
int32_t eax_1 = __security_cookie ^ &point

if (**(arg1 + 0x70) != 0)
    sub_69a5bc(eax_1 ^ &point)
    return 1

GetCursorPos(&point)
RECT rect
GetWindowRect(arg2, &rect)
int32_t ebx
ebx.b = 0
int16_t eax_5 = (point.x).w - (rect.left).w

if ((*(arg1 + 0x7b) == 0 || *(arg1 + 0x68) == 0) && *(arg1 + 0x74) != 0)
    ebx.b = 0
    WINDOWPLACEMENT lpwndpl
    GetWindowPlacement(*(arg1 + 8), &lpwndpl)
    
    if (eax_5 s>= lpwndpl.rcNormalPosition.right.w - *(arg1 + 0x74) - *(arg1 + 0x2c)
            - lpwndpl.rcNormalPosition.left.w)
        GetWindowPlacement(*(arg1 + 8), &lpwndpl)
        ebx = 0
        
        if (eax_5 s<= *(arg1 + 0x2c) - lpwndpl.rcNormalPosition.left.w
                + lpwndpl.rcNormalPosition.right.w)
            ebx = 1

if (*(arg1 + 0x7b) == 0 && ebx.b != 0)
    SetCursor(LoadCursorA(nullptr, 0x7f84))
    
    if (*(arg1 + 0x68) != 0)
        **(arg1 + 0x70) = 1
        *(arg1 + 0x7b) = 1

*(arg1 + 0x60) = sx.d(eax_5)
sub_69a5bc(eax_1 ^ &point)
return 0
