// 函数: sub_41bfc0
// 地址: 0x41bfc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HWND hWnd_1 = CreateWindowExA(WS_EX_CLIENTEDGE, "SysTreeView32", 0x6da07a, 0x50300027, 0, 0, 0, 0, 
    arg2, arg4, arg3, nullptr)
*(arg1 + 4) = hWnd_1

if (hWnd_1 == 0)
    hWnd_1.b = 0
    return hWnd_1

SetWindowLongA(hWnd_1, 0xffffffeb, arg1)
int32_t eax = GetWindowLongA(*(arg1 + 4), 0xfffffffc)
HWND hWnd = *(arg1 + 4)
*(arg1 + 0x10) = eax
SetWindowLongA(hWnd, 0xfffffffc, sub_41c140)
int32_t eax_1
eax_1.b = 1
return eax_1
