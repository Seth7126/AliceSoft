// 函数: sub_656ba0
// 地址: 0x656ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
void* edi = *(arg1 + 0x1bc)
*(edi + 8) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi + 0xc) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi + 0x10) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi + 0x14) = (**(arg1 + 4))(arg1, 1, 0x400)
int32_t result = 0
int32_t var_4 = 0xff1daf00
int32_t ebx = 0x5b6900
int32_t ebp = 0x2c8c80

for (int32_t i = 0xff4d0b80; i s<= 0xb28d97; )
    result += 4
    int32_t i_1 = i
    i += 0x166e9
    *(result + *(edi + 8) - 4) = i_1 s>> 0x10
    int32_t edx_2 = var_4
    var_4 += 0x1c5a2
    *(result + *(edi + 0xc) - 4) = edx_2 s>> 0x10
    *(result + *(edi + 0x10) - 4) = ebx
    ebx -= 0xb6d2
    *(result + *(edi + 0x14) - 4) = ebp
    ebp -= 0x5819

return result
