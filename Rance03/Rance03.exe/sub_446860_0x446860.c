// 函数: sub_446860
// 地址: 0x446860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax_6 = *(arg1 + 4)
int32_t edx = *(eax_6 + 8)
int32_t esi = *(eax_6 + 0xc)
uint32_t edx_2 = (edx + 0xf) u>> 4
*(arg1 + 0xc) = edx_2
*(arg1 + 8) = esi * edx * 3
uint32_t eax_4 = (esi + 0xf) u>> 4
*(arg1 + 0x10) = eax_4
*(arg1 + 0x14) = eax_4 * edx_2
void* result = *(arg1 + 0x18)

if (result != 0)
    *(result + 0x30) = 0
    *(arg1 + 0x18) = 0

return result
