// 函数: sub_493110
// 地址: 0x493110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t var_34 = arg2
void var_3c
char var_1c
int32_t* eax_3 = sub_487b00(&var_1c, var_3c)
void** eax_4 = sub_417ed0(arg1 + 0x20, eax_3)
char eax_6

if (eax_4 != *(arg1 + 0x20))
    eax_6 = sub_40c3a0(eax_3, &eax_4[4])

if (eax_4 == *(arg1 + 0x20) || eax_6 != 0)
    var_20 = *(arg1 + 0x20)
else
    var_20 = eax_4

void** esi_1 = var_20
int32_t var_8

if (var_8 u>= 0x10)
    j__free(var_1c.d)

void* result = arg1 + 4
int32_t var_8_1 = 0xf
int32_t var_c = 0
var_1c = 0

if (esi_1 != *(arg1 + 0x20))
    result = esi_1[0xa]

sub_69a5bc(eax_1 ^ &var_20)
return result
