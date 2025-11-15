// 函数: sub_696d20
// 地址: 0x696d20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
var_2c = arg1
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_403590(&var_48, arg4, 0, 0xffffffff)
void* var_24
char* ecx_1 = sub_696c40(&var_24, arg2, arg3)

if (*(ecx_1 + 0x14) u>= 0x10)
    ecx_1 = *ecx_1

*arg1 = &std::exception::`vftable'
var_2c = ecx_1
*(arg1 + 4) = nullptr
char var_28 = 1
___std_exception_copy(&var_2c, &arg1[1])
*arg1 = &std::runtime_error::`vftable'{for `std::exception'}
int32_t var_10

if (var_10 u>= 0x10)
    sub_403160(var_24, var_10 + 1, 1)

arg1[3] = arg2
arg1[4] = arg3
*arg1 = &std::_System_error::`vftable'{for `std::runtime_error'}
@__security_check_cookie@4(eax_1 ^ &var_2c)
return arg1
