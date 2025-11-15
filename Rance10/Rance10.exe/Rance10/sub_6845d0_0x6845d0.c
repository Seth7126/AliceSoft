// 函数: sub_6845d0
// 地址: 0x6845d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg1 + 0x14)

for (int32_t* i = *(arg1 + 0x10); i != ebx; i = &i[2])
    (**i)(0)

*(arg1 + 0x14) = *(arg1 + 0x10)
int32_t ebx_1 = *(arg1 + 8)

for (int32_t* i_1 = *(arg1 + 4); i_1 != ebx_1; i_1 = &i_1[2])
    (**i_1)(0)

int32_t result = *(arg1 + 4)
*(arg1 + 8) = result
*(arg1 + 0x1c) = 0
return result
