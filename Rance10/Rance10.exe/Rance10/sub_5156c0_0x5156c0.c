// 函数: sub_5156c0
// 地址: 0x5156c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t var_20 = 0
int32_t var_2c = *arg5
var_24 = arg3
*arg4
void* var_1c
int32_t* eax_3 = arg2(&var_1c, var_2c)
*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
*arg3 = 0
sub_4056a0(arg3, eax_3)
int32_t var_8

if (var_8 u>= 0x10)
    sub_403160(var_1c, var_8 + 1, 1)

@__security_check_cookie@4(eax_1 ^ &var_24)
return arg3
