// 函数: sub_5224b0
// 地址: 0x5224b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0x7c)

for (int32_t edi = *(arg1 + 0x80); i != edi; i = &i[1])
    if ((*(**(*i + 0x74) + 0x18))() != 0)
        return 1

return 0
