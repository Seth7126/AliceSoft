// 函数: sub_58ed00
// 地址: 0x58ed00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 4)

for (int32_t edi = *(arg1 + 8); i != edi; i = &i[1])
    if (sub_58d2b0(*i, arg2) != 0)
        return 1

return 0
