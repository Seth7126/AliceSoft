// 函数: sub_4a2f20
// 地址: 0x4a2f20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t hWnd = arg1

if (hWnd == 0 || arg2 == 0)
    hWnd.b = 0
    return hWnd

arg1 = 0
GetWindowThreadProcessId(hWnd, &arg1)
uint32_t __saved_ecx
GetWindowThreadProcessId(arg2, &__saved_ecx)
int32_t eax
eax.b = arg1 == 0
return eax
