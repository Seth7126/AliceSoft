// 函数: sub_55f850
// 地址: 0x55f850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg1 + 0x8c)

for (int32_t* i = *(arg1 + 0x88); i != ebx; i = &i[7])
    (**i)(0)

int32_t result = *(arg1 + 0x88)
*(arg1 + 0x8c) = result
*(arg1 + 0xd4) = 1
return result
