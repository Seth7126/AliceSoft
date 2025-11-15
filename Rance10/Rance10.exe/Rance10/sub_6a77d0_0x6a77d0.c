// 函数: sub_6a77d0
// 地址: 0x6a77d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_e0[0xdc]
int32_t eax_1 = __security_cookie ^ &var_e0

if ((*(arg1 + 0x78) & 0x100000) == 0)
    sub_6a7750(arg1, arg2)
    noreturn

sub_6a7650(eax_1, &var_e0, arg1, arg2)
int32_t result = sub_6a7530(arg1, &var_e0)
@__security_check_cookie@4(eax_1 ^ &var_e0)
return result
