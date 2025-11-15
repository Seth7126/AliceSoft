// 函数: sub_4a15a0
// 地址: 0x4a15a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t lpdwProcessId = arg1

if ((**(arg1 + 0x34))() != 0)
    return 1

HWND hWnd = GetActiveWindow()

if (hWnd == 0)
    hWnd.b = 0
    return hWnd

lpdwProcessId = 0xffffffff
GetWindowThreadProcessId(hWnd, &lpdwProcessId)
uint32_t eax_3
eax_3.b = lpdwProcessId == *(arg1 + 0x14)
return eax_3
