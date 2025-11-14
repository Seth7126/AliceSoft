// 函数: sub_51c520
// 地址: 0x51c520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *(arg1 + 0x8c)

for (int32_t* i = *(arg1 + 0x88); i != ebx; i = &i[7])
    (**i)(0)

int32_t result = *(arg1 + 0x88)
*(arg1 + 0x8c) = result
*(arg1 + 0xd8) = 1
return result
