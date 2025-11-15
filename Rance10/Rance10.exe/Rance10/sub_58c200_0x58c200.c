// 函数: sub_58c200
// 地址: 0x58c200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x2c) != 0)
    return 1

int32_t* i = *(arg1 + 0x34)

for (int32_t edi = *(arg1 + 0x38); i != edi; i = &i[1])
    if (*i != 0 && sub_58c200() != 0)
        return 1

return 0
