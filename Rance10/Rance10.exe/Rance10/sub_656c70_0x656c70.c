// 函数: sub_656c70
// 地址: 0x656c70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
void* edi = *(arg1 + 0x1bc)
*(edi + 8) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi + 0xc) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi + 0x10) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi + 0x14) = (**(arg1 + 4))(arg1, 1, 0x400)
int32_t result = 0
int32_t var_4 = 0xfe3ade00
int32_t ebx = 0xb6d180
int32_t ebp = 0x589980

for (int32_t i = 0xfe999680; i s<= 0x1649bad; )
    result += 4
    int32_t i_1 = i
    i += 0x2cdd3
    *(result + *(edi + 8) - 4) = i_1 s>> 0x10
    int32_t edx_2 = var_4
    var_4 += 0x38b44
    *(result + *(edi + 0xc) - 4) = edx_2 s>> 0x10
    *(result + *(edi + 0x10) - 4) = ebx
    ebx -= 0x16da3
    *(result + *(edi + 0x14) - 4) = ebp
    ebp -= 0xb033

return result
