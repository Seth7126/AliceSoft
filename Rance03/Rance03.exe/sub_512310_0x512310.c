// 函数: sub_512310
// 地址: 0x512310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int128_t* eax = sub_69adc6(0x10)

if (eax == 0)
    sub_69a4fc()
    noreturn

arg1[1] = eax
*arg1 = eax
arg1[2] = &eax[1]
*eax = zx.o(0)
arg1[1] += 0x10
return arg1
