// 函数: sub_4e7920
// 地址: 0x4e7920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t eax = sub_69adc6(0x9c40)

if (eax == 0)
    sub_69a4fc()
    noreturn

arg1[1] = eax
arg1[2] = eax + 0x9c40
*arg1 = eax
__builtin_memset(eax, 0, 0x9c40)
arg1[1] += 0x9c40
return arg1
