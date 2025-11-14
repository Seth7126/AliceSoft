// 函数: sub_473460
// 地址: 0x473460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t var_1c
sub_402d30(&var_1c, arg2)
void** eax_2 = sub_417ed0(arg1 + 8, &var_1c)
char eax_4

if (eax_2 != *(arg1 + 8))
    eax_4 = sub_40c3a0(&var_1c, &eax_2[4])

if (eax_2 == *(arg1 + 8) || eax_4 != 0)
    var_20 = *(arg1 + 8)
else
    var_20 = eax_2

void** eax_6 = var_20
void* result

if (eax_6 != *(arg1 + 8))
    result = &eax_6[0xa]
else
    result = nullptr

int32_t var_8

if (var_8 u>= 0x10)
    j__free(var_1c)

sub_69a5bc(eax_1 ^ &var_20)
return result
