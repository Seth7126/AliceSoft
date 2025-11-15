// 函数: sub_613af0
// 地址: 0x613af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *(arg1 + 0x1d0)
int32_t edi = *eax
*(arg1 + 0x1d0) = &eax[1]
int32_t ecx = *(arg1 + 0x1fc)
int32_t edx = *(*(arg1 + 0x1f8) + (ecx << 2) - 4)
int32_t result = ecx - 1
*(arg1 + 0x1fc) = result

if (edx == 0)
    result = *(arg1 + 0x1d4) + edi
    *(arg1 + 0x1d0) = result

return result
