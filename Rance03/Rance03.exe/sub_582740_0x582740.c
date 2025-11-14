// 函数: sub_582740
// 地址: 0x582740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_53b150(arg1 + 0x2c, arg2)
int32_t** var_8

if (*(arg1 + 0x3c) != 0)
    uint32_t var_1c_1 = zx.d(data_75dd2e)
    void* var_20_1 = arg1 + 0x3c
    sub_4a6ee0(arg2, &var_8, arg1 + 0x3c)

if (*(arg1 + 0x40) != 0)
    uint32_t var_1c_2 = zx.d(data_75dd2e)
    void* var_20_2 = arg1 + 0x40
    sub_4a6ee0(arg2, &var_8, arg1 + 0x40)

int32_t* result = *(arg1 + 0x48)

if (result != *(arg1 + 0x4c))
    for (int32_t* i = result; i != *(arg1 + 0x4c); i = &i[1])
        if (*i != 0)
            result = sub_582740(arg2)

return result
