// 函数: sub_6a75b0
// 地址: 0x6a75b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_e0
int32_t eax_1 = __security_cookie ^ &var_e0

if ((*(arg1 + 0x78) & 0x100000) == 0)
    if ((*(arg1 + 0x74) & 0x8000) != 0 && *(arg1 + 0x11c) != 0)
        sub_6a7750(arg1, arg2)
        noreturn
    
    sub_6a7500(arg1, arg2)
    noreturn

if ((*(arg1 + 0x74) & 0x8000) != 0 && *(arg1 + 0x11c) != 0)
    sub_6a7650(eax_1, &var_e0, arg1, arg2)
    arg2 = &var_e0

int32_t result = sub_6a7530(arg1, arg2)
@__security_check_cookie@4(eax_1 ^ &var_e0)
return result
