// 函数: sub_4d8940
// 地址: 0x4d8940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 8) == 0 || *(arg1 + 0x10) == *(arg1 + 0x14))
    return 0

int32_t ecx = *(arg1 + 0x38)

if (ecx == 3 || ((*(arg1 + 0x14) - *(arg1 + 0x10)) & 0xfffffffc) == 4)
    return **(arg1 + 0x10)

int32_t temp0 = divs.dp.d(sx.q(arg2), *(arg1 + 0x30))
int32_t edx_1 = temp0
int32_t ebx_2 = (*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 2

if (ecx == 0)
    if (ebx_2 - 1 s< edx_1)
        edx_1 = ebx_2 - 1
    
    return *(*(arg1 + 0x10) + (edx_1 << 2))

if (ecx == 1 || ebx_2 == 2)
    edx_1 = mods.dp.d(sx.q(temp0), ebx_2)
else if (ecx == 2)
    int32_t edi_1
    edx_1 = mods.dp.d(sx.q(temp0), edi_1 - 2)
    
    if (ebx_2 s<= edx_1)
        return *(*(arg1 + 0x10) + ((ebx_2 * 2 - edx_1 - 2) << 2))

return *(*(arg1 + 0x10) + (edx_1 << 2))
