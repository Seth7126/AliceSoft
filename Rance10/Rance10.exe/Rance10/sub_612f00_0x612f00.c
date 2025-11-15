// 函数: sub_612f00
// 地址: 0x612f00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[0x7f]
int32_t esi = *(arg1[0x7e] + (edx << 2) - 4)
arg1[0x7f] = edx - 1
int32_t eax_2 = arg1[0x7e]
void* ebp = eax_2 + ((edx - 1) << 2)
void* eax_3 = sub_621720(&arg1[0x52], *(eax_2 + ((edx - 1) << 2) - 4))

if (eax_3 == 0 || esi u>= *(eax_3 + 0x14) u>> 2)
    return sub_612600(arg1, *(ebp - 4), esi)

int32_t result = *(*(eax_3 + 0x10) + (esi << 2))
*(ebp - 4) = result
return result
