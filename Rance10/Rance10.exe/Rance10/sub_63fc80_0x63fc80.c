// 函数: sub_63fc80
// 地址: 0x63fc80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &textsurface::CTextBoldBuf::`vftable'
arg1[0xf] = arg1[0xe]
arg1[0x11] = 0
arg1[4] = arg1[3]
__builtin_memset(&arg1[6], 0, 0x1c)
void* ecx = arg1[0xe]

if (ecx != 0)
    sub_403160(ecx, arg1[0x10] - ecx, 1)
    arg1[0xe] = 0
    arg1[0xf] = 0
    arg1[0x10] = 0

return sub_63fa90(&arg1[1]) __tailcall
