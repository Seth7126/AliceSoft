// 函数: sub_448370
// 地址: 0x448370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax_7 = *(arg1 + 4)
int32_t edx = *(eax_7 + 4)
int32_t esi = *(eax_7 + 8)
uint32_t edx_2 = (edx + 0xf) u>> 4
*(arg1 + 0xc) = edx_2
*(arg1 + 8) = esi * edx * 3
uint32_t eax_4 = (esi + 0xf) u>> 4
*(arg1 + 0x10) = eax_4
*(arg1 + 0x14) = eax_4 * edx_2
void* eax_6 = *(arg1 + 0x18)

if (eax_6 != 0)
    *(eax_6 + 0x2d) = 0
    *(arg1 + 0x18) = 0

void* result = *(arg1 + 0x1c)

if (result != 0)
    *(result + 0x2d) = 0
    *(arg1 + 0x1c) = 0

return result
