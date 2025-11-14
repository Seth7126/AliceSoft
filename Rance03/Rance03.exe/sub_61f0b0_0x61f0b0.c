// 函数: sub_61f0b0
// 地址: 0x61f0b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x1c)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 0x1c) = 0

int32_t* ecx_1 = *(arg1 + 0x18)

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)
    *(arg1 + 0x18) = 0

*(arg1 + 0x2c) = 0
int32_t result
result.b = 1
*(arg1 + 0x30) = 0
*(arg1 + 0x24) = 0
return result
