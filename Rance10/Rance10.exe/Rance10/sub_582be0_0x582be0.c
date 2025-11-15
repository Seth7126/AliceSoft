// 函数: sub_582be0
// 地址: 0x582be0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t xmm1 = *(arg1 + 0x174)
int64_t xmm2 = *(arg1 + 0x184)
*(arg1 + 0x174) = *(arg1 + 0x18c)
*(arg1 + 0x184) = *(arg1 + 0x19c)
*(arg1 + 0x18c) = xmm1
*(arg1 + 0x19c) = xmm2
int32_t ecx = *(arg1 + 0x1a4)
int32_t result = *(arg1 + 0x1ac)
*(arg1 + 0x1a4) = result
*(arg1 + 0x1ac) = ecx
return result
