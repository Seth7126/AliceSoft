// 函数: sub_1000cf00
// 地址: 0x1000cf00
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4 = arg1
var_4 = __security_cookie ^ &var_4

if (arg2 == 0)
    sub_10001d19(var_4 ^ &var_4)
    return 0x80004003

int32_t* eax_3 = CoTaskMemAlloc(6)
*arg2 = eax_3

if (eax_3 == 0)
    sub_10001d19(var_4 ^ &var_4)
    return 0x8007000e

int32_t ecx_6 = var_4
*eax_3 = 0x6e0049
eax_3[1].w = 0
sub_10001d19(ecx_6 ^ &var_4)
return 0
