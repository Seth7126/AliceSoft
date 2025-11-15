// 函数: sub_49d090
// 地址: 0x49d090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HIMC eax = ImmGetContext(*(arg1 + 0x6c))
ImmNotifyIME(eax, NI_COMPOSITIONSTR, CPS_CANCEL, 0)
ImmSetOpenStatus(eax, 0)
return ImmReleaseContext(*(arg1 + 0x6c), eax)
