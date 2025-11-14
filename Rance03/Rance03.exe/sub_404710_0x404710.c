// 函数: sub_404710
// 地址: 0x404710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

RECT var_14
int32_t eax_1 = __security_cookie ^ &var_14
SendMessageA(*(arg1 + 0x368), 5, 0, 0)
GetWindowRect(*(arg1 + 0x368), &var_14)
int32_t Y = var_14.bottom - var_14.top
HWND hWnd = *(arg1 + 0x380)
int32_t ecx

if (hWnd != 0)
    GetWindowRect(hWnd, &var_14)
    ecx = var_14.bottom - var_14.top
else
    ecx = 0

int32_t nWidth = zx.d(arg2.w)
MoveWindow(*(arg1 + 0x28), 0, Y, nWidth, (arg2 u>> 0x10) - ecx - Y, 1)
SendMessageA(*(arg1 + 0x380), 5, 0, 0)
var_14.top = 0xffffffff
var_14.left = nWidth - 0xa0
SendMessageA(*(arg1 + 0x380), 0x404, 2, &var_14)
sub_69a5bc(eax_1 ^ &var_14)
return 0
