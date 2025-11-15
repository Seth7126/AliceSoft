// 函数: sub_4c2ad0
// 地址: 0x4c2ad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0x38)

for (int32_t edi = *(arg1 + 0x3c); i != edi; i = &i[1])
    if ((*(**(*i + 0x74) + 0x44))(arg2, arg3, arg4) != 0)
        return 1

return 0
