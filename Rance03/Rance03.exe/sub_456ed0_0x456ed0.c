// 函数: sub_456ed0
// 地址: 0x456ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 0x14); i != *(arg1 + 0x18); i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

*(arg1 + 0x18) = *(arg1 + 0x14)

for (int32_t* i_1 = *(arg1 + 8); i_1 != *(arg1 + 0xc); i_1 = &i_1[1])
    int32_t* ecx_1 = *i_1
    
    if (ecx_1 != 0)
        (**ecx_1)(1)

int32_t result = *(arg1 + 8)
*(arg1 + 0xc) = result
return result
