// 函数: sub_62c990
// 地址: 0x62c990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10
int32_t eax_1 = __security_cookie ^ &var_10
*arg5 = arg3
int32_t ebp = *arg2
var_10 = arg2[1]
int32_t var_24 = arg1 + 8
int32_t* var_28 = arg2
char var_c
int32_t edx
int32_t eax_6 = __Wcrtomb(&var_c, edx, arg1, &var_c, nullptr)

if (eax_6 s<= 0)
    @__security_check_cookie@4(eax_1 ^ &var_10)
    return 2

char* ecx_2 = *arg5

if (arg4 - ecx_2 s< eax_6 - 1)
    int32_t eax_10 = var_10
    *arg2 = ebp
    arg2[1] = eax_10
    @__security_check_cookie@4(eax_1 ^ &var_10)
    return 1

if (eax_6 - 1 s> 0)
    sub_700660(ecx_2, &var_c, eax_6 - 1)
    *arg5 += eax_6 - 1

@__security_check_cookie@4(eax_1 ^ &var_10)
return 0
