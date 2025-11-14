// 函数: sub_4b3ff0
// 地址: 0x4b3ff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = *(arg1 + 0x18d) == 0
*(arg1 + 0x18c) = 0

if (cond:0)
    return 

int32_t* ecx = *(arg1 + 0x174)

if (ecx != 0)
    jump(**ecx)
