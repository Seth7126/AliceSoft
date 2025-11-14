// 函数: sub_59bf90
// 地址: 0x59bf90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = sub_52b110(arg1 + 0x54)
int32_t* ecx_1 = *(arg1 + 0x10)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))()
    *(arg1 + 0x10) = 0

*(arg1 + 0x34) = 0
int32_t* ecx_2 = *(arg1 + 0x3c)

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))()
    *(arg1 + 0x3c) = 0

*(arg1 + 0x40) = 0
*(arg1 + 0x44) = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x4c) = 0
*(arg1 + 0x50) = 0
*(arg1 + 4) = 0
*(arg1 + 8) = 0
return result
