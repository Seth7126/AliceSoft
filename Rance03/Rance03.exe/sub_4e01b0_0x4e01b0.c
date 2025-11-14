// 函数: sub_4e01b0
// 地址: 0x4e01b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = *(arg1 + 0x1bd) == 0
*(arg1 + 0x1bc) = 0

if (cond:0)
    return 

int32_t* ecx = *(arg1 + 0x1a8)

if (ecx != 0)
    jump(**ecx)
