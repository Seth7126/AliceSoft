// 函数: sub_4269e0
// 地址: 0x4269e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_44
int32_t eax_1 = __security_cookie ^ &var_44
uint32_t eax_2 = zx.d(arg2.w)
var_44 = arg1
SendMessageA(*(arg1 + 0x8f0), 5, 0, 0)
RECT rect
GetWindowRect(*(arg1 + 0x84c), &rect)
SendMessageA(*(arg1 + 0x84c), 5, 0, 
    zx.d((rect.bottom).w - (rect.top).w - 1) << 0x10 | zx.d(eax_2.w))
GetWindowRect(*(arg1 + 0x84c), &rect)
int32_t esi_2 = rect.bottom - rect.top - 1
RECT rect_1
GetWindowRect(*(arg1 + 0x84c), &rect_1)
MoveWindow((**(arg1 + 0x854))(0, rect_1.bottom - rect_1.top - 1, eax_2, esi_2, 1))
HWND hWnd = *(arg1 + 0x8f0)
int32_t edi_1

if (hWnd != 0)
    GetWindowRect(hWnd, &rect_1)
    edi_1 = rect_1.bottom - rect_1.top
else
    edi_1 = 0

GetWindowRect(*(var_44 + 0x84c), &rect)
int32_t esi_5 = rect.bottom - rect.top - 1
RECT rect_2
GetWindowRect(*(var_44 + 0x84c), &rect_2)
MoveWindow((**(var_44 + 0xa8))(0, (rect_2.bottom - rect_2.top - 1) * 2, eax_2, 
    (arg2 u>> 0x10) - esi_5 * 2 - edi_1, 1))
sub_69a5bc(eax_1 ^ &var_44)
return 0
