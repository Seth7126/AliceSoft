// 函数: sub_4d50a0
// 地址: 0x4d50a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = *(arg1 + 0x52) == 0
*(arg1 + 0x51) = 0

if (cond:0)
    return 

int32_t* ecx = *(arg1 + 0x44)

if (ecx != 0)
    jump(**ecx)
