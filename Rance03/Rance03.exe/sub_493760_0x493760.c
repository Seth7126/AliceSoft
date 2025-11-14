// 函数: sub_493760
// 地址: 0x493760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t var_34 = arg2
void var_3c
int32_t var_1c
int32_t* eax_3 = sub_487b00(&var_1c, var_3c)
int32_t edi = *(arg1 + 0x20)
void** eax_4 = sub_417ed0(arg1 + 0x20, eax_3)
char eax_6

if (eax_4 != *(arg1 + 0x20))
    eax_6 = sub_40c3a0(eax_3, &eax_4[4])

if (eax_4 == *(arg1 + 0x20) || eax_6 != 0)
    var_20 = *(arg1 + 0x20)
else
    var_20 = eax_4

void* ebx_1
ebx_1.b = var_20 != edi
int32_t var_8

if (var_8 u>= 0x10)
    j__free(var_1c)

void*** result
result.b = ebx_1.b
sub_69a5bc(eax_1 ^ &var_20)
return result
