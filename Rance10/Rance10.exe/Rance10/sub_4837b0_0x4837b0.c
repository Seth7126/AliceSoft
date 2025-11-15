// 函数: sub_4837b0
// 地址: 0x4837b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t var_8 = 0xf
int32_t var_c = 0
char var_1c = 0
sub_403590(&var_1c, arg2, 0, 0xffffffff)
void** esi = sub_432330(arg1 + 0xc, &var_1c)
char eax_5

if (esi != *(arg1 + 0xc))
    eax_5 = sub_412ca0(&var_1c, &esi[4])

if (esi == *(arg1 + 0xc) || eax_5 != 0)
    esi = *(arg1 + 0xc)

void* result

if (esi != *(arg1 + 0xc))
    result = &esi[0xa]
else
    result = nullptr

if (var_8 u>= 0x10)
    sub_403160(var_1c.d, var_8 + 1, 1)

@__security_check_cookie@4(eax_1 ^ &var_20)
return result
