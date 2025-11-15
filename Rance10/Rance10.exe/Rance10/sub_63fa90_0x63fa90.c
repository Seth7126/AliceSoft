// 函数: sub_63fa90
// 地址: 0x63fa90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &textsurface::CSurface8bpp::`vftable'{for `common::NotifyRefCounter<class ISurface>'}
int32_t result = arg1[2]
arg1[3] = result
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
void* ecx = arg1[2]

if (ecx != 0)
    result = sub_403160(ecx, arg1[4] - ecx, 1)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

return result
