// 函数: sub_42c700
// 地址: 0x42c700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct dpvariable::CVarDocument::VTable** var_4 = arg1
*arg1 = &dpvariable::CVarDocument::`vftable'

if (arg1[0x1a] u>= 0x10)
    j__free(arg1[0x15])

arg1[0x1a] = 0xf
arg1[0x19] = 0
arg1[0x15].b = 0
int32_t eax = arg1[0x12]

if (eax != 0)
    j__free(eax)
    arg1[0x12] = 0
    arg1[0x13] = 0
    arg1[0x14] = 0

sub_42c6a0(&arg1[0xd])
int32_t eax_1 = arg1[0xa]

if (eax_1 != 0)
    j__free(eax_1)
    arg1[0xa] = 0
    arg1[0xb] = 0
    arg1[0xc] = 0

int32_t** eax_2 = arg1[8]
sub_417e10(&arg1[8], &var_4, *eax_2, eax_2)
j__free(arg1[8])
int32_t** eax_3 = arg1[6]
sub_4200d0(&arg1[6], &var_4, *eax_3, eax_3)
return j__free(arg1[6])
