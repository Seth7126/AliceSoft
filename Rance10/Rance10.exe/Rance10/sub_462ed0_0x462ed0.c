// 函数: sub_462ed0
// 地址: 0x462ed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
int32_t var_28 = 0
var_2c = arg1
void* var_24
void** edx
char* eax_2 = sub_462db0(&var_24, edx)
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_4056a0(arg1, eax_2)
int32_t var_10

if (var_10 u>= 0x10)
    sub_403160(var_24, var_10 + 1, 1)

@__security_check_cookie@4(eax_1 ^ &var_2c)
return arg1
