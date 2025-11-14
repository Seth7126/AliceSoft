// 函数: sub_60e250
// 地址: 0x60e250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = *(arg1 + 0x10)
*(arg1 + 0x14) = result
int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0)
    result = (*(*ecx + 8))(ecx)
    *(arg1 + 0xc) = 0

*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
return result
