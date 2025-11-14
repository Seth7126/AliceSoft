// 函数: sub_499590
// 地址: 0x499590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = *(arg1 + 0x20d) == 0
*(arg1 + 0x20c) = 0

if (cond:0)
    return 

int32_t* ecx = *(arg1 + 0x200)

if (ecx != 0)
    jump(**ecx)
