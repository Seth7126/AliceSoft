// 函数: sub_502b00
// 地址: 0x502b00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0x80)

for (int32_t edi = *(arg1 + 0x84); i != edi; i = &i[1])
    if ((*(**(*i + 0x74) + 0x18))() != 0)
        return 1

return 0
