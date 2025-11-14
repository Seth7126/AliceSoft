// 函数: sub_4934c0
// 地址: 0x4934c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
int32_t var_40 = arg3
int32_t var_24 = 0
void** var_48
char var_20
int32_t* eax_3 = sub_487b00(&var_20, var_48)
void** eax_4 = sub_417ed0(arg1 + 0x28, eax_3)
char eax_6

if (eax_4 != *(arg1 + 0x28))
    eax_6 = sub_40c3a0(eax_3, &eax_4[4])

void** var_28

if (eax_4 == *(arg1 + 0x28) || eax_6 != 0)
    var_28 = *(arg1 + 0x28)
else
    var_28 = eax_4

int32_t var_c

if (var_c u>= 0x10)
    j__free(var_20.d)

int32_t var_c_1 = 0xf
int32_t var_10 = 0
var_20 = 0

if (var_28 != *(arg1 + 0x28))
    void** eax_8 = var_28[0xa]
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_401ff0(arg2, eax_8, 0, 0xffffffff)
else
    sub_401f60(arg2, 0x6da223)

sub_69a5bc(eax_1 ^ &var_2c)
return arg2
