// 函数: sub_4a1170
// 地址: 0x4a1170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = *(arg1 + 0x1b5) == 0
*(arg1 + 0x1b4) = 0

if (cond:0)
    return 

int32_t* ecx = *(arg1 + 0x15c)

if (ecx != 0)
    jump(**ecx)
