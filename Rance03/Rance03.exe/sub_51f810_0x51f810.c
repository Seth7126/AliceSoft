// 函数: sub_51f810
// 地址: 0x51f810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t* eax = sub_69adc6(0x3000)

if (eax == 0)
    sub_69a4fc()
    noreturn

int32_t* var_c = arg1
*arg1 = eax
arg1[2] = &eax[0xc00]
arg1[1] = eax
sub_51f870(eax)
arg1[1] += 0x3000
return arg1
