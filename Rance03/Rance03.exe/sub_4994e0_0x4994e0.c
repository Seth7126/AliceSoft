// 函数: sub_4994e0
// 地址: 0x4994e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 0x5c)

for (int32_t edi = *(arg1 + 0x60); i != edi; i = &i[1])
    if ((*(**(*i + 0x5c) + 0x18))() != 0)
        return 1

return 0
