// 函数: sub_4d6670
// 地址: 0x4d6670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x10)

if (esi == 0 || *(esi + 8) != 3)
    return 0

int32_t edi_1 = arg2 - *(esi + 0x3c)

if (arg2 - *(esi + 0x3c) s>= 0)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x2aaaaaab, *(esi + 0x48) - *(esi + 0x44))
    int32_t edx_2 = edx_1 s>> 1
    
    if ((edx_2 u>> 0x1f) + edx_2 s> edi_1)
        return *(esi + 0x44) + edi_1 * 0xc

return 0
