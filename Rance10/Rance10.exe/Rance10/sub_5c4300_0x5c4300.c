// 函数: sub_5c4300
// 地址: 0x5c4300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0x64)

for (int32_t edi = *(arg1 + 0x68); i != edi; i = &i[1])
    if ((*(**i + 8))() != 0)
        return 1

return 0
