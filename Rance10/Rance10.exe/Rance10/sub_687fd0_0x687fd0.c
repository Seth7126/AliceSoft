// 函数: sub_687fd0
// 地址: 0x687fd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0x2c4)

for (int32_t edi = *(arg1 + 0x2c8); i != edi; i = &i[1])
    if ((*(**i + 0x14))() != 0)
        return 1

return 0
