// 函数: sub_60d2e0
// 地址: 0x60d2e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[8].b != 0)
    char result = (*(*arg1 + 0xc))()
    
    if (result == 0)
        return result

if ((*(*arg1 + 0x10))() == 0)
    return 1

for (int32_t* i = arg1[0x1c]; i != arg1[0x1d]; i = &i[1])
    if (sub_61ac50(*i) == 0)
        return 0

for (int32_t* i_1 = arg1[0x22]; i_1 != arg1[0x23]; i_1 = &i_1[1])
    if (sub_60dfa0(*i_1) == 0)
        return 0

if (sub_60d9c0(&arg1[0x27]) != 0 && sub_60dab0(&arg1[0x2d]) != 0)
    for (int32_t* i_2 = arg1[0x3a]; i_2 != arg1[0x3b]; i_2 = &i_2[1])
        if (sub_61b0a0(*i_2) == 0)
            return 0
    
    if (sub_60dd20(&arg1[0x3f]) != 0 && sub_618990(&arg1[0x56]) != 0 && sub_619fa0(&arg1[0x6e]) != 0
            && sub_609c10(&arg1[0x87], arg1[0xd]) != 0)
        int32_t var_c_2 = arg1[0xd]
        return sub_60fb20(&arg1[0x8f]) != 0

return 0
