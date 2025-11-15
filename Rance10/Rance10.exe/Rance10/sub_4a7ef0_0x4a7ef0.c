// 函数: sub_4a7ef0
// 地址: 0x4a7ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = data_7fcb98

if (*(edx + 8) == 0 || *(edx + 0x10) == *(edx + 0x14) || arg1 s< 0 || arg1 s>= *(edx + 0xc))
    return 0

int32_t ecx_1 = arg1 & 0x80000007

if (ecx_1 s< 0)
    ecx_1 = ((ecx_1 - 1) | 0xfffffff8) + 1

int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(arg1)
int32_t result
result.b = (*(((eax_3 + (edx_1 & 7)) s>> 3) + *(edx + 0x10)) & (0x80 s>> ecx_1.b).b) != 0
return result
