// 函数: sub_49d0d0
// 地址: 0x49d0d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HIMC eax = ImmGetContext(*(arg1 + 0x6c))
int32_t ebx
ebx.b = ImmGetOpenStatus(eax) != 0
ImmReleaseContext(*(arg1 + 0x6c), eax)
BOOL result
result.b = ebx.b
return result
