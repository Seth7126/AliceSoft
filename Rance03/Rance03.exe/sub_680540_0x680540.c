// 函数: sub_680540
// 地址: 0x680540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

POINT point
int32_t eax_1 = __security_cookie ^ &point

if (**(arg1 + 0x70) != 0)
    sub_69a5bc(eax_1 ^ &point)
    return 1

GetCursorPos(&point)
RECT rect
GetWindowRect(arg2, &rect)
int16_t eax_5 = (point.x).w - (rect.left).w
char ecx_2 = *(arg1 + 0x7b)
int16_t ebx = (point.y).w - (rect.top).w
int16_t eax_7
eax_7.b = 0

if (ecx_2 == 0 || *(arg1 + 0x68) == 0)
    eax_7 = 0
    
    if (*(arg1 + 0x74) != 0)
        eax_7 = 1

if (ecx_2 == 0 && eax_7.b != 0)
    SetCursor(LoadCursorA(nullptr, 0x7f82))
    
    if (*(arg1 + 0x68) != 0)
        **(arg1 + 0x70) = 1
        *(arg1 + 0x7b) = 1

*(arg1 + 0x60) = sx.d(eax_5)
*(arg1 + 0x64) = sx.d(ebx)
sub_69a5bc(eax_1 ^ &point)
return 0
