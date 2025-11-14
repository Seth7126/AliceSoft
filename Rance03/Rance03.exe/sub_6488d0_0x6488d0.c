// 函数: sub_6488d0
// 地址: 0x6488d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4 = ecx
int128_t var_1c = arg3
int32_t eax_1 = sub_648640(&var_1c, arg2, ecx)

if (eax_1 != 0)
    return eax_1

if (*(arg2 + 0x58) != 1)
    return 0xffffff7d

bool cond:0_1 = *(arg2 + 4) == 0
*(arg2 + 0x58) = 2

if (cond:0_1)
    *(arg2 + 0x58) = 3
    return 0

int32_t edi_1 = sub_6480b0(arg2)

if (edi_1 == 0)
    return edi_1

*arg2 = 0
sub_6487c0(arg2)
return edi_1
