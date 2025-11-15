// 函数: sub_69ec90
// 地址: 0x69ec90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = *(arg1 + 0x4c)
*(arg1 + 0x3c) = *(arg1 + 0x2c) * 2
*(*(arg1 + 0x44) + (edx << 1) - 2) = 0
_memset(*(arg1 + 0x44), 0, (*(arg1 + 0x4c) << 1) + 0xfffffffe)
int32_t ecx = *(arg1 + 0x84) * 3
*(arg1 + 0x80) = zx.d(*((ecx << 2) + &data_771cc2))
*(arg1 + 0x8c) = zx.d(*((ecx << 2) + &data_771cc0))
*(arg1 + 0x90) = zx.d(*((ecx << 2) + &data_771cc4))
uint32_t result = zx.d(*((ecx << 2) + &data_771cc6))
*(arg1 + 0x7c) = result
*(arg1 + 0x6c) = 0
*(arg1 + 0x5c) = 0
*(arg1 + 0x74) = 0
*(arg1 + 0x16b4) = 0
*(arg1 + 0x78) = 2
*(arg1 + 0x60) = 2
*(arg1 + 0x68) = 0
*(arg1 + 0x48) = 0
return result
