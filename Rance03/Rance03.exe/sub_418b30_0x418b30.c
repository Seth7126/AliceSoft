// 函数: sub_418b30
// 地址: 0x418b30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_64
int32_t eax_1 = __security_cookie ^ &var_64
RECT rect_3
GetClientRect(arg2, &rect_3)
var_64 = rect_3.right - rect_3.left
HWND hWnd = *(arg1 + 0x1c)
RECT rect_2
__builtin_memset(&rect_2, 0, 0x10)
GetWindowRect(hWnd, &rect_2)
HWND hWnd_1 = *(arg1 + 0x20)
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetWindowRect(hWnd_1, &rect)
HWND hWnd_2 = *(arg1 + 0x1c)
RECT rect_1
__builtin_memset(&rect_1, 0, 0x10)
GetClientRect(hWnd_2, &rect_1)
HWND hWnd_3 = *(arg1 + 0x20)
RECT rect_4
__builtin_memset(&rect_4, 0, 0x10)
GetClientRect(hWnd_3, &rect_4)
int32_t nWidth = arg3

if (nWidth s< 4)
    nWidth = 4

if (nWidth s>= var_64 - 6)
    nWidth = var_64 - 6

int32_t nHeight = rect.bottom - rect.top
MoveWindow(*(arg1 + 0x1c), rect_1.left, rect_1.top, nWidth, rect_2.bottom - rect_2.top, 1)
BOOL result = MoveWindow(*(arg1 + 0x20), nWidth + 2, rect_4.top, var_64 - nWidth - 2, nHeight, 1)
sub_69a5bc(eax_1 ^ &var_64)
return result
