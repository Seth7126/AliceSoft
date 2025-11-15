// 函数: sub_6271a0
// 地址: 0x6271a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
void* eax_2

if (sub_627860(arg1 - 0x20, arg2).b != 0 && *(arg1 + 0x14) == 0 && *(arg1 + 0xc) == 0xc)
    int32_t eax_3
    
    if (*(arg1 - 0xc) != 0)
        eax_3 = *(arg1 - 0x10)
    else
        eax_3 = 0
    
    eax_2 = sub_6227b0(*(arg1 + 4), *(eax_3 + (arg2 << 2)))
    
    if (eax_2 != 0)
        sub_403360(&var_24, arg3)
        char* ebx
        ebx.b = sub_625800(eax_2, &var_24)
        sub_403320(&var_24)
        char* eax_5
        eax_5.b = ebx.b
        @__security_check_cookie@4(eax_1 ^ &var_24)
        return eax_5

eax_2.b = 0
@__security_check_cookie@4(eax_1 ^ &var_24)
return eax_2
