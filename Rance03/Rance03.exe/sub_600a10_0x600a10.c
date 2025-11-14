// 函数: sub_600a10
// 地址: 0x600a10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HGDIOBJ ho = *(arg1 + 0x68)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x68) = 0

(*(*(arg1 + 0x34) + 4))()

if (sub_697f40(arg1 + 0x64) == 0)
    return 0xffffffff

void* ecx_2 = *(arg1 + 0x94)

if (ecx_2 != 0)
    *(arg1 + 0x20) = *(ecx_2 + 0x10)
    *(arg1 + 0x2c) = (*(ecx_2 + 8) - *(ecx_2 + 4)) s>> 2

void* eax_7 = *(arg1 + 0x98)

if (eax_7 != 0)
    sub_6981c0(arg1 + 4, 0x9c61, *(eax_7 + 4))

sub_601f40(arg1 + 0x18, arg2)
sub_6020b0(arg1 + 0x24, arg2)
return 0
