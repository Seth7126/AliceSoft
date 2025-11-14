// 函数: sub_4f5cc0
// 地址: 0x4f5cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_4a89a0(data_75d4fc + 0x174, arg3)

if (result == 0)
    return result

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2aaaaaab, *(result + 0x164) - *(result + 0x160))
int32_t edx_1 = edx s>> 2
void* edx_2

if ((edx_1 u>> 0x1f) + edx_1 s<= arg2 || arg2 s< 0)
    edx_2 = result + 0xb0
else
    edx_2 = *(result + 0x160) + arg2 * 0x18

if (*(edx_2 + 0x14) u>= 0x10)
    edx_2 = *edx_2

return (*(*arg4 + 4))(edx_2)
