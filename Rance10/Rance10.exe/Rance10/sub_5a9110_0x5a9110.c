// 函数: sub_5a9110
// 地址: 0x5a9110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0x28)

for (int32_t edi = *(arg1 + 0x2c); i != edi; i = &i[1])
    if (sub_57c0b0(*i) != 0)
        return 1

return 0
