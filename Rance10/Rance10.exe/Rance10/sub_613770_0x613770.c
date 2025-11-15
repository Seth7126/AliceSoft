// 函数: sub_613770
// 地址: 0x613770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t ecx = *(arg1 + 0x1fc)
int32_t ebp = *(*(arg1 + 0x1f8) + (ecx << 2) - 4)
*(arg1 + 0x1fc) = ecx - 1
int32_t edi = *(*(arg1 + 0x1f8) + ((ecx - 1) << 2) - 4)
*(arg1 + 0x1fc) = ecx - 2
int32_t eax_5 = *(*(arg1 + 0x1f8) + ((ecx - 2) << 2) - 4)
*(arg1 + 0x1fc) = ecx - 3
int32_t esi = *(*(arg1 + 0x1f8) + ((ecx - 3) << 2) - 4)
*(arg1 + 0x1fc) = ecx - 4

if (esi == edi && eax_5 == ebp)
    return sub_405d30(arg1 + 0x1f4, 1)

return sub_405d30(arg1 + 0x1f4, 0)
