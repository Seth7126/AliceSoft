// 函数: sub_517c00
// 地址: 0x517c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x44)
sub_555e00(edi, 0x13, arg3)
void* edx = *(edi + (arg3 << 2) + 0x7c)
*(arg2 + 4) = *(edx + 0x50)
*(arg2 + 8) = *(edx + 0x54)
*(arg2 + 0xc) = *(edx + 0x58)
*(arg2 + 0x1c) = *(edx + 0x68)
int32_t result = *(edx + 0x6c)
*(arg2 + 0x20) = result
*(arg2 + 0x24) = *(edx + 0x70)
return result
