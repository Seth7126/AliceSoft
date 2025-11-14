// 函数: sub_47cac0
// 地址: 0x47cac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = arg1 + 8
int32_t i_3 = 8
int32_t i

do
    int32_t eax_1 = *(edx + 0x7a4)
    edx += 0x10
    *(edx - 0x10) ^= eax_1
    *(edx - 0xc) ^= *(edx + 0x798)
    *(edx - 8) ^= *(edx + 0x79c)
    *(edx - 4) ^= *(edx + 0x7a0)
    i = i_3
    i_3 -= 1
while (i != 1)
void* result = arg1 + 0x88
int32_t i_2 = 0xa3
int32_t i_1

do
    int32_t ecx = *(result - 0x80)
    result += 0xc
    *(result - 0xc) ^= ecx
    *(result - 8) ^= *(result - 0x88)
    *(result - 4) ^= *(result - 0x84)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return result
