// 函数: sub_6a7830
// 地址: 0x6a7830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_e4
int32_t eax_1 = __security_cookie ^ &var_e4

if ((*(arg3 + 0x74) & 0x8000) != 0)
    if (arg4 s>= 2)
        int32_t eax_3 = sub_6a77d0(arg3, arg2)
        @__security_check_cookie@4(eax_1 ^ &var_e4)
        return eax_3
    
    void var_e0
    sub_6a7650(eax_1, &var_e0, arg3, arg2)
    arg2 = &var_e0
else if (arg4 s>= 1)
    if ((*(arg3 + 0x78) & &__dos_header) == 0)
        sub_6a7500(arg3, arg2)
        noreturn
else if ((*(arg3 + 0x78) & 0x200000) == 0)
    sub_6a7500(arg3, arg2)
    noreturn

int32_t eax_2 = sub_6a7530(arg3, arg2)
@__security_check_cookie@4(eax_1 ^ &var_e4)
return eax_2
