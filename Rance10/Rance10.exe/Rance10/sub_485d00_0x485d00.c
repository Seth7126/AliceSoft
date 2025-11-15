// 函数: sub_485d00
// 地址: 0x485d00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_20
int32_t eax_1 = __security_cookie ^ &var_20
void* var_1c
sub_4051e0(&var_1c, arg2)
void** esi = sub_432330(arg1 + 8, &var_1c)
char eax_4

if (esi != *(arg1 + 8))
    eax_4 = sub_412ca0(&var_1c, &esi[4])

if (esi == *(arg1 + 8) || eax_4 != 0)
    esi = *(arg1 + 8)

void* result

if (esi != *(arg1 + 8))
    result = &esi[0xa]
else
    result = nullptr

int32_t var_8

if (var_8 u>= 0x10)
    sub_403160(var_1c, var_8 + 1, 1)

@__security_check_cookie@4(eax_1 ^ &var_20)
return result
