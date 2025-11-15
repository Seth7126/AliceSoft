// 函数: sub_5a93e0
// 地址: 0x5a93e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0x48)

for (int32_t edi = *(arg1 + 0x4c); i != edi; i = &i[1])
    if ((*(**i + 4))(arg2, arg3) == 0)
        return 0

return 1
