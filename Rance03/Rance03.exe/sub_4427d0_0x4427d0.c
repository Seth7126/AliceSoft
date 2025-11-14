// 函数: sub_4427d0
// 地址: 0x4427d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct apeg::CApegHeader::VTable** var_4 = arg1
*arg1 = &apeg::CApegHeader::`vftable'
int32_t** eax = arg1[0x25]
sub_4200d0(&arg1[0x25], &var_4, *eax, eax)
j__free(arg1[0x25])

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
