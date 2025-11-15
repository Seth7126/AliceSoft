// 函数: sub_6e3125
// 地址: 0x6e3125
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = 0
*arg5 = arg3
int32_t eax_3 = *arg2
int32_t eax_4 = arg2[1]
int32_t var_2c = arg1 + 8
int32_t* var_30 = arg2
char var_10
int32_t eax_7 = __Wcrtomb(&var_10, arg2, arg1, &var_10, nullptr)

if (eax_7 s<= 0)
    result = 2
else if (arg4 - *arg5 s< eax_7 - 1)
    result = 1
    *arg2 = eax_3
    arg2[1] = eax_4
else if (eax_7 - 1 s> 0)
    sub_700660(*arg5, &var_10, eax_7 - 1)
    *arg5 += eax_7 - 1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
