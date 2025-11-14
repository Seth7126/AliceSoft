// 函数: sub_4277e0
// 地址: 0x4277e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x88) == *(arg1 + 0x8c))
    return 0

void* eax_1 = *(arg1 + 0x84)
int32_t i = 0
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2aaaaaab, *(eax_1 + 0x40) - *(eax_1 + 0x3c))
int32_t edx_1 = edx s>> 2

if ((edx_1 u>> 0x1f) + edx_1 s<= 0)
    return 0

int32_t X = 0
int32_t edx_3

do
    MoveWindow(*(*(arg1 + 0x88) + (i << 2)), X, 0, 0x96, arg2 u>> 0x10, 1)
    void* eax_7 = *(arg1 + 0x84)
    i += 1
    X += 0x96
    int32_t eax_8
    int32_t edx_2
    edx_2:eax_8 = muls.dp.d(0x2aaaaaab, *(eax_7 + 0x40) - *(eax_7 + 0x3c))
    edx_3 = edx_2 s>> 2
while (i s< (edx_3 u>> 0x1f) + edx_3)
return 0
