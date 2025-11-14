// 函数: sub_49de40
// 地址: 0x49de40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 0x60)

for (int32_t edi = *(arg1 + 0x64); i != edi; i = &i[1])
    if ((*(**(*i + 0x5c) + 0x18))() != 0)
        return 1

return 0
