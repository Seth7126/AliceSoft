// 函数: sub_5e8a40
// 地址: 0x5e8a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t lpdwProcessId = arg1
void* esi = *(arg1 + 4)

if ((**(esi + 0x34))() != 0)
    return 1

HWND hWnd = GetActiveWindow()

if (hWnd == 0)
    hWnd.b = 0
    return hWnd

lpdwProcessId = 0xffffffff
GetWindowThreadProcessId(hWnd, &lpdwProcessId)
uint32_t eax_3
eax_3.b = lpdwProcessId == *(esi + 0x1c)
return eax_3
