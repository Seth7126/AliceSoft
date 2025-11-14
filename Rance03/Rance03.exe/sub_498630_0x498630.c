// 函数: sub_498630
// 地址: 0x498630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
bool cond:0 = *(arg1 + 0x1e0) != 0
*(arg1 + 0x1e1) = 1

if (cond:0)
    return 

void* eax_1 = sub_4a4020(*(arg1 + 0x5c))

if (*(eax_1 + 0x30) != 0)
    *(eax_1 + 0x30) = 0
    *(*(eax_1 + 0x34) + 0x14) = 1

if (*(arg1 + 0x6c) != 0)
    sub_498c30(arg1 - 0x2c)
    sub_498e00(arg1 - 0x2c)
    sub_498fd0(arg1 - 0x2c)
    return 

sub_4991a0(arg1 - 0x2c)
