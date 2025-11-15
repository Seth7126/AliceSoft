// 函数: sub_49d060
// 地址: 0x49d060
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HIMC eax = ImmGetContext(*(arg1 + 0x6c))
ImmSetOpenStatus(eax, 1)
return ImmReleaseContext(*(arg1 + 0x6c), eax)
