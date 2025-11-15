// 函数: sub_6137f0
// 地址: 0x6137f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = *(arg1 + 0x1fc)
int32_t ebx = *(*(arg1 + 0x1f8) + (ecx << 2) - 4)
*(arg1 + 0x1fc) = ecx - 1
int32_t esi = *(*(arg1 + 0x1f8) + ((ecx - 1) << 2) - 4)
*(arg1 + 0x1fc) = ecx - 2
int32_t ebp = *(*(arg1 + 0x1f8) + ((ecx - 2) << 2) - 4)
*(arg1 + 0x1fc) = ecx - 3
int32_t ecx_3 = *(*(arg1 + 0x1f8) + ((ecx - 3) << 2) - 4)
*(arg1 + 0x1fc) = ecx - 4

if (ecx_3 == esi && (ecx_3 == 0xffffffff || ebp == ebx))
    return sub_405d30(arg1 + 0x1f4, 0)

return sub_405d30(arg1 + 0x1f4, 1)
