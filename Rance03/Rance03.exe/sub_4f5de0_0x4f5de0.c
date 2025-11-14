// 函数: sub_4f5de0
// 地址: 0x4f5de0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_4a89a0(data_75d4fc + 0x174, arg1)

if (result == 0)
    return result

int32_t edi_1 = *(result + 0x34)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2aaaaaab, *(result + 0x164) - *(result + 0x160))
int32_t edx_1 = edx s>> 2
void* ecx_5

if ((edx_1 u>> 0x1f) + edx_1 s<= edi_1 || edi_1 s< 0)
    ecx_5 = result + 0xb0
else
    ecx_5 = *(result + 0x160) + edi_1 * 0x18

if (*(ecx_5 + 0x14) u>= 0x10)
    ecx_5 = *ecx_5

return (*(*arg2 + 4))(ecx_5)
