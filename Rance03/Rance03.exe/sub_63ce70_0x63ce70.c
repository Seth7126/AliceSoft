// 函数: sub_63ce70
// 地址: 0x63ce70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == 0)
    return 0xffffffff

_memset(arg1, 0, 0x168)
arg1[1] = 0x4000
arg1[6] = 0x400
int32_t eax = _malloc(0x4000)
*arg1 = eax
int32_t eax_1 = _malloc(0x1000)
arg1[4] = eax_1
int32_t eax_2 = _malloc(0x2000)
arg1[5] = eax_2

if (eax != 0 && eax_1 != 0 && eax_2 != 0)
    arg1[0x54] = arg2
    return 0

sub_63cf00(arg1)
return 0xffffffff
