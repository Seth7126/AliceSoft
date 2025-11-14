// 函数: sub_47eb20
// 地址: 0x47eb20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 0x28)

for (int32_t edi = *(arg1 + 0x2c); i != edi; i = &i[1])
    if ((*(**(*i + 0x5c) + 0x50))(arg2, arg3, arg4) != 0)
        return 1

return 0
