// 函数: sub_530cc0
// 地址: 0x530cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_14 = arg1
void* var_18 = arg1
sub_48c2c0(*(arg1 + 0x10), *(arg1 + 0x14))
*(arg1 + 0x14) = *(arg1 + 0x10)
int32_t ebx = *(arg1 + 8)

for (int32_t* i = *(arg1 + 4); i != ebx; i = &i[0x21])
    (**i)(0)

int32_t result = *(arg1 + 4)
*(arg1 + 8) = result
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0
return result
