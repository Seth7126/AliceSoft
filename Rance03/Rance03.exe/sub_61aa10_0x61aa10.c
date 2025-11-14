// 函数: sub_61aa10
// 地址: 0x61aa10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x20) = *(arg1 + 0x1c)
int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 0xc) = 0

int32_t result = *(arg1 + 0x10)
*(arg1 + 0x14) = result
*(arg1 + 0x2c) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x3c) = 0
return result
