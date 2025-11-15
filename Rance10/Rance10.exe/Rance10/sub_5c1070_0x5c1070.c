// 函数: sub_5c1070
// 地址: 0x5c1070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x3c) != 0)
    return 1

int32_t* i = *(arg1 + 0x48)

for (int32_t edi = *(arg1 + 0x4c); i != edi; i = &i[1])
    if (*i != 0 && sub_5c1070() != 0)
        return 1

return 0
