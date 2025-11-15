// 函数: sub_69eb60
// 地址: 0x69eb60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_69e100(arg1) != 0)
    return 0xfffffffe

void* eax_2 = *(arg1 + 0x1c)
int32_t edi = *(eax_2 + 4)
int32_t eax_3 = *(eax_2 + 8)

if (eax_3 != 0)
    (*(arg1 + 0x24))(*(arg1 + 0x28), eax_3)

int32_t eax_6 = *(*(arg1 + 0x1c) + 0x44)

if (eax_6 != 0)
    (*(arg1 + 0x24))(*(arg1 + 0x28), eax_6)

int32_t eax_9 = *(*(arg1 + 0x1c) + 0x40)

if (eax_9 != 0)
    (*(arg1 + 0x24))(*(arg1 + 0x28), eax_9)

int32_t eax_12 = *(*(arg1 + 0x1c) + 0x38)

if (eax_12 != 0)
    (*(arg1 + 0x24))(*(arg1 + 0x28), eax_12)

(*(arg1 + 0x24))(*(arg1 + 0x28), *(arg1 + 0x1c))
*(arg1 + 0x1c) = 0

if (edi == 0x71)
    return 0xfffffffd

return 0
