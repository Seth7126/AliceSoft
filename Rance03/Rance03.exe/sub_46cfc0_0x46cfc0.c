// 函数: sub_46cfc0
// 地址: 0x46cfc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &ibis::CJoystick::`vftable'{for `IJoystick'}
int32_t* eax = sub_69adc6(0x1c)

if (eax == 0)
    arg1[1] = 0
    arg1[2] = 1
    return arg1

*eax = 0
eax[1].b = 1
__builtin_memset(&eax[2], 0, 0x14)
arg1[1] = eax
arg1[2] = 1
return arg1
