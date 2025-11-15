// 函数: sub_483850
// 地址: 0x483850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t var_8 = 0xf
int32_t var_c = 0
char var_1c = 0
sub_403590(&var_1c, arg2, 0, 0xffffffff)
void** esi = sub_432330(arg1 + 4, &var_1c)
void** result

if (esi != *(arg1 + 4))
    result = sub_412ca0(&var_1c, &esi[4])

if (esi == *(arg1 + 4) || result.b != 0)
    esi = *(arg1 + 4)

int32_t* ebx_1
ebx_1.b = esi != *(arg1 + 4)

if (var_8 u>= 0x10)
    sub_403160(var_1c.d, var_8 + 1, 1)

result.b = ebx_1.b
@__security_check_cookie@4(eax_1 ^ &var_20)
return result
