// 函数: sub_5393b0
// 地址: 0x5393b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *(arg1 + 8)

for (int32_t* i = *(arg1 + 4); i != ebx; i = &i[0x13])
    (**i)(0)

*(arg1 + 8) = *(arg1 + 4)
sub_41fff0(arg1 + 0x10)
int32_t result = *(arg1 + 0x1c)
*(arg1 + 0x20) = result
*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0
*(arg1 + 0x30) = 0
return result
