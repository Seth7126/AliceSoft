// 函数: sub_490380
// 地址: 0x490380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 0x34)
*(arg1 + 0x44) = 0
*(arg1 + 0x40) = 1
*(arg1 + 0x48) = 0

for (; i != *(arg1 + 0x38); i = &i[1])
    (*(**i + 4))()

*(arg1 + 0x38) = *(arg1 + 0x34)

for (int32_t* i_1 = *(arg1 + 0x28); i_1 != *(arg1 + 0x2c); i_1 = &i_1[1])
    (*(**i_1 + 4))()

*(arg1 + 0x2c) = *(arg1 + 0x28)

for (int32_t* i_2 = *(arg1 + 0x1c); i_2 != *(arg1 + 0x20); i_2 = &i_2[1])
    (*(**i_2 + 4))()

int32_t result = *(arg1 + 0x1c)
*(arg1 + 0x20) = result
int32_t* ecx_5 = *(arg1 + 0x14)

if (ecx_5 != 0)
    result = (*(*ecx_5 + 4))()
    *(arg1 + 0x14) = 0

int32_t* ecx_6 = *(arg1 + 0x10)

if (ecx_6 != 0)
    result = (*(*ecx_6 + 4))()
    *(arg1 + 0x10) = 0

return result
