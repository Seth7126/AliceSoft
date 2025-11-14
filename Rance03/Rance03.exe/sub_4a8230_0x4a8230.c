// 函数: sub_4a8230
// 地址: 0x4a8230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_4a5510(arg1 + 4)
int32_t* ecx_1 = *(arg1 + 0x44)

if (ecx_1 != 0)
    (**ecx_1)(1)

int32_t* i = *(arg1 + 0x48)
*(arg1 + 0x44) = 0

for (; i != *(arg1 + 0x4c); i = &i[1])
    int32_t* ecx_2 = *i
    
    if (ecx_2 != 0)
        (**ecx_2)(1)

int32_t result = *(arg1 + 0x48)
*(arg1 + 0x4c) = result
*(arg1 + 0x54) = 0
return result
