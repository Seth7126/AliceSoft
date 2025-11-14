// 函数: sub_5571c0
// 地址: 0x5571c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 0x44); i != *(arg1 + 0x48); i = &i[1])
    (*(**i + 4))()

*(arg1 + 0x48) = *(arg1 + 0x44)

for (int32_t* i_1 = *(arg1 + 0x38); i_1 != *(arg1 + 0x3c); i_1 = &i_1[1])
    int32_t* ecx_2 = *i_1
    
    if (ecx_2 != 0)
        sub_53a360(ecx_2)

int32_t result = *(arg1 + 0x38)
*(arg1 + 0x3c) = result
*(arg1 + 0x50) = 0xffffffff
return result
