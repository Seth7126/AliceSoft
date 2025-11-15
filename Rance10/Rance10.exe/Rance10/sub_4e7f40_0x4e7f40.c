// 函数: sub_4e7f40
// 地址: 0x4e7f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0xb0)

for (int32_t edi = *(arg1 + 0xb4); i != edi; i = &i[1])
    if ((*(**(*i + 0x74) + 0x18))() != 0)
        return 1

return 0
