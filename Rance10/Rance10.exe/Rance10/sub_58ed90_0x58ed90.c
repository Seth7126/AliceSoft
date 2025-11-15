// 函数: sub_58ed90
// 地址: 0x58ed90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 4)

for (int32_t edi = *(arg1 + 8); i != edi; i = &i[1])
    if ((*(**i + 4))(arg2, arg3) == 0)
        return 0

return 1
