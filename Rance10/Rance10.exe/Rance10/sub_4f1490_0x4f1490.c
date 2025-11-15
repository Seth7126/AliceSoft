// 函数: sub_4f1490
// 地址: 0x4f1490
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i_1 = arg1
sub_4f1640(arg1)
*(arg1 + 8) = 0
int32_t* esi_1 = *(arg1 + 0x1c)
void* i = *esi_1
i_1 = i

for (; i != esi_1; i = i_1)
    *(*(i + 0x14) + 0x20) = 0
    sub_429080(&i_1)

return i
