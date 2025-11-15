// 函数: sub_65dfd0
// 地址: 0x65dfd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t (** eax_2)(void* arg1) = (**(arg1 + 4))(arg1, 1, 0x30)
*(arg1 + 0x1b8) = eax_2
*eax_2 = sub_65db40
eax_2[2].b = 0
int32_t ecx_1 = *(arg1 + 0x64) * *(arg1 + 0x5c)
eax_2[0xa] = ecx_1

if (*(arg1 + 0x11c) != 2)
    eax_2[1] = sub_65dc10
    eax_2[3] = sub_65dc50
    eax_2[8] = 0
else
    eax_2[1] = sub_65db60
    eax_2[3] = sub_65ddc0
    eax_2[8] = (*(*(arg1 + 4) + 4))(arg1, 1, ecx_1)

if (*(arg1 + 0x28) != 7)
    return sub_65d9a0(arg1) __tailcall

void* var_4_1 = arg1
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14_2 = edi
void* edi_3 = *(arg1 + 0x1b8)
*(edi_3 + 0x10) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi_3 + 0x14) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi_3 + 0x18) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi_3 + 0x1c) = (**(arg1 + 4))(arg1, 1, 0x400)
int32_t result = 0
int32_t var_4_2 = 0xfe3ade00
int32_t ebx = 0xb6d180
int32_t ebp = 0x589980

for (int32_t i = 0xfe999680; i s<= 0x1649bad; )
    result += 4
    int32_t i_1 = i
    i += 0x2cdd3
    *(result + *(edi_3 + 0x10) - 4) = i_1 s>> 0x10
    int32_t edx_3 = var_4_2
    var_4_2 += 0x38b44
    *(result + *(edi_3 + 0x14) - 4) = edx_3 s>> 0x10
    *(result + *(edi_3 + 0x18) - 4) = ebx
    ebx -= 0x16da3
    *(result + *(edi_3 + 0x1c) - 4) = ebp
    ebp -= 0xb033

return result
