// 函数: sub_64c1e0
// 地址: 0x64c1e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t (** result)(void* arg1, char arg2) = (**(arg1 + 4))(arg1, 1, 0xd0)
*(arg1 + 0x198) = result
int32_t i_1 = 0x10
*result = sub_64c000
void* ecx = &result[0x23]
result[2] = sub_64ae50
int32_t i

do
    *(ecx - 0x40) = 0
    ecx += 4
    *(ecx - 4) = 0
    i = i_1
    i_1 -= 1
while (i != 1)
result[0x33].b = 0x71
return result
