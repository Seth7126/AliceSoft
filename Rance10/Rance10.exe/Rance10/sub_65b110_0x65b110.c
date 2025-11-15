// 函数: sub_65b110
// 地址: 0x65b110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(*arg1 + 0x14) = 0x68
(*(*arg1 + 4))(arg1, 1)

if (*(arg1[0x6b] + 0xc) != 0)
    *(*arg1 + 0x14) = 0x40
    (**arg1)(arg1)

void* eax_7 = arg1 + 0xdb
int32_t i_1 = 0x10
int32_t i

do
    *(eax_7 - 0x10) = 0
    eax_7 += 1
    *(eax_7 - 1) = 1
    *(eax_7 + 0xf) = 5
    i = i_1
    i_1 -= 1
while (i != 1)
void* result = arg1[0x6b]
arg1[0x3f] = i_1
arg1[0xa] = i_1
arg1[0x43] = i_1
arg1[0x44].b = i_1.b
arg1[0x40].w = 0x100
*(arg1 + 0x102) = 0x10001
*(arg1 + 0x106) = 1
*(result + 0xc) = 1
result.b = 1
return result
