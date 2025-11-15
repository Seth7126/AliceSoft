// 函数: sub_4dd5b0
// 地址: 0x4dd5b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
int32_t var_2c = arg2
void** var_34
int32_t* eax_3 = sub_4ce600(&var_1c, var_34)
void** esi = sub_432330(arg1 + 8, eax_3)
char eax_6

if (esi != *(arg1 + 8))
    eax_6 = sub_412ca0(eax_3, &esi[4])

if (esi == *(arg1 + 8) || eax_6 != 0)
    esi = *(arg1 + 8)

int32_t var_8

if (var_8 u>= 0x10)
    sub_403160(var_1c.d, var_8 + 1, 1)

int32_t var_8_1 = 0xf
int32_t var_c = 0
var_1c = 0

if (esi == *(arg1 + 8))
    @__security_check_cookie@4(eax_1 ^ &var_1c)
    return 0

int32_t result = *(esi[0xa] + 0x18)
@__security_check_cookie@4(eax_1 ^ &var_1c)
return result
