// 函数: sub_53e450
// 地址: 0x53e450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x160) != 0)
    sub_5f4ad0(*(arg1 + 0x1fc))
    *(arg1 + 0x160) = 0

int32_t* ecx_1 = *(arg1 + 0x15c)

if (ecx_1 != 0)
    sub_53a360(ecx_1)
    *(arg1 + 0x15c) = 0

bool cond:0 = *(arg1 + 0x180) u< 0x10
*(arg1 + 0x17c) = 0

if (cond:0)
    *(arg1 + 0x16c) = 0
    return 

**(arg1 + 0x16c) = 0
