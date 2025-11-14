// 函数: sub_4e29f0
// 地址: 0x4e29f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = *(arg1 + 0x2d1) == 0
*(arg1 + 0x2d0) = 0

if (cond:0)
    return 

int32_t* ecx = *(arg1 + 0x1fc)

if (ecx != 0)
    jump(**ecx)
