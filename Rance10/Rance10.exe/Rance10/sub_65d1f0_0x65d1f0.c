// 函数: sub_65d1f0
// 地址: 0x65d1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* (** eax_2)(void* arg1) = (**(arg1 + 4))(arg1, 0, 0xa8)
*(arg1 + 0x1ac) = eax_2
int32_t i_1 = 0x10
*eax_2 = sub_65d1b0
void* ecx = &eax_2[0x18]
eax_2[1] = sub_65cd10
eax_2[2] = sub_65d010
eax_2[6] = sub_65caa0
eax_2[0x17] = 0
int32_t i

do
    *(ecx - 0x44) = sub_65caa0
    ecx += 4
    *(ecx - 4) = 0
    i = i_1
    i_1 -= 1
while (i != 1)
eax_2[7] = sub_65c930
eax_2[0x15] = sub_65c930
void* result = *(arg1 + 0x1ac)
*(arg1 + 0xc4) = 0
*(arg1 + 0x7c) = 0
*(arg1 + 0x194) = 0
*(result + 0xc) = 0
*(result + 0x14) = 0
*(result + 0xa0) = 0
return result
