// 函数: sub_528690
// 地址: 0x528690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    int32_t* ecx_1 = *i
    
    if (ecx_1 != 0)
        sub_53a360(ecx_1)

*(arg1 + 8) = *(arg1 + 4)
int32_t ebx = *(arg1 + 0x14)

for (int32_t* i_1 = *(arg1 + 0x10); i_1 != ebx; i_1 = &i_1[6])
    if (i_1[5] u>= 0x10)
        j__free(*i_1)
    
    i_1[5] = 0xf
    i_1[4] = 0
    *i_1 = 0

*(arg1 + 0x14) = *(arg1 + 0x10)
int32_t result = *(arg1 + 0x1c)
*(arg1 + 0x20) = result
return result
