// 函数: sub_596b80
// 地址: 0x596b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0x74)

for (int32_t edi = *(arg1 + 0x78); i != edi; i = &i[1])
    if ((*(**i + 8))() != 0)
        return 1

return 0
