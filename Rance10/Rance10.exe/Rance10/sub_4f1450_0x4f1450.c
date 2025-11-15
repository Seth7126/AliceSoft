// 函数: sub_4f1450
// 地址: 0x4f1450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg2
*(arg1 + 8) = edi
int32_t* esi = *(arg1 + 0x1c)
void* i = *esi
arg2 = i

for (; i != esi; i = arg2)
    *(*(i + 0x14) + 0x20) = edi
    sub_429080(&arg2)

return i
