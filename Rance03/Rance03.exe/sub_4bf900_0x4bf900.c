// 函数: sub_4bf900
// 地址: 0x4bf900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = *arg2
arg1[1] = arg2[1]

if (&arg1[2] != &arg2[2])
    sub_401ff0(&arg1[2], &arg2[2], 0, 0xffffffff)

if (&arg1[8] != &arg2[8])
    sub_401ff0(&arg1[8], &arg2[8], 0, 0xffffffff)

void* eax_3
eax_3.b = arg2[0xe].b
arg1[0xe].b = eax_3.b
sub_4bf960(&arg1[0xf], &arg2[0xf])
sub_4a6db0(&arg1[0x12], &arg2[0x12])
return arg1
