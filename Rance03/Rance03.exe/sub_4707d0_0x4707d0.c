// 函数: sub_4707d0
// 地址: 0x4707d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t var_1c
sub_402d30(&var_1c, arg2)
int32_t edi = *(arg1 + 4)
void** eax_2 = sub_417ed0(arg1 + 4, &var_1c)
char eax_4

if (eax_2 != *(arg1 + 4))
    eax_4 = sub_40c3a0(&var_1c, &eax_2[4])

void** var_20

if (eax_2 == *(arg1 + 4) || eax_4 != 0)
    var_20 = *(arg1 + 4)
else
    var_20 = eax_2

void* ebx_1
ebx_1.b = var_20 != edi
int32_t var_8

if (var_8 u>= 0x10)
    j__free(var_1c)

void*** result
result.b = ebx_1.b
sub_69a5bc(eax_1 ^ &var_24)
return result
