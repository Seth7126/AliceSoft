// 函数: sub_487890
// 地址: 0x487890
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t var_34 = arg2
void var_3c
char var_1c
int32_t* eax_3 = sub_487b00(&var_1c, var_3c)
void** eax_4 = sub_417ed0(arg1 + 0x60, eax_3)
char eax_6

if (eax_4 != *(arg1 + 0x60))
    eax_6 = sub_40c3a0(eax_3, &eax_4[4])

void** var_20

if (eax_4 == *(arg1 + 0x60) || eax_6 != 0)
    var_20 = *(arg1 + 0x60)
else
    var_20 = eax_4

int32_t var_8

if (var_8 u>= 0x10)
    j__free(var_1c.d)

int32_t var_8_1 = 0xf
int32_t var_c = 0
var_1c = 0

if (var_20 == *(arg1 + 0x60))
    sub_69a5bc(eax_1 ^ &var_24)
    return 0

int32_t result = var_20[0xa]
sub_69a5bc(eax_1 ^ &var_24)
return result
