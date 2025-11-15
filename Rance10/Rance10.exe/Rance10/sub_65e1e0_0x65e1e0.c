// 函数: sub_65e1e0
// 地址: 0x65e1e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x1a4)

if (*(esi + 0x18) == 0)
    *(esi + 0xc) = (*(*(arg1 + 4) + 0x1c))(arg1, *(esi + 8), *(esi + 0x14), *(esi + 0x10), 1)

void* eax_4 = *(esi + 0x18)
(*(*(arg1 + 0x1b8) + 4))(arg1, arg2, arg3, arg4, *(esi + 0xc), esi + 0x18, *(esi + 0x10))
int32_t ebp = *(esi + 0x18)

if (ebp u> eax_4)
    void* ebp_1 = ebp - eax_4
    (*(*(arg1 + 0x1c0) + 4))(arg1, *(esi + 0xc) + (eax_4 << 2), 0, ebp_1)
    *arg5 += ebp_1

int32_t result = *(esi + 0x10)

if (*(esi + 0x18) u>= result)
    *(esi + 0x14) += result
    *(esi + 0x18) = 0

return result
