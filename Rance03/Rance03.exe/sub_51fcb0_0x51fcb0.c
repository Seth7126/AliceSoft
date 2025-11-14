// 函数: sub_51fcb0
// 地址: 0x51fcb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct passregister::CPassRegister::VTable** var_4 = arg1
*arg1 = &passregister::CPassRegister::`vftable'
int32_t** eax = arg1[0xa]
sub_417e10(&arg1[0xa], &var_4, *eax, eax)
j__free(arg1[0xa])
int32_t** eax_1 = arg1[8]
sub_4200d0(&arg1[8], &var_4, *eax_1, eax_1)
int32_t result = j__free(arg1[8])

if (arg1[6] u>= 0x10)
    result = j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
return result
