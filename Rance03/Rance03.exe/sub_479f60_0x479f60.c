// 函数: sub_479f60
// 地址: 0x479f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    return 0

for (int32_t* i = *(arg1 + 8); i != *(arg1 + 0xc); i = &i[1])
    int32_t result = (*(**i + 0x94))(arg2)
    
    if (result != 0)
        return result

return 0
