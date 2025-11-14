// 函数: sub_4d62b0
// 地址: 0x4d62b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (*(arg1 + 0x170) s>= 1)
    sub_4a8dd0(arg1 + 0x100)

int32_t result = sub_4ac530(*(arg1 + 0x144) + 0x10)

for (int32_t* i = *(arg1 + 0x148); i != *(arg1 + 0x14c); i = &i[1])
    result = sub_4ac530(*i + 0x10)

*(arg1 + 0x170) += 1
return result
