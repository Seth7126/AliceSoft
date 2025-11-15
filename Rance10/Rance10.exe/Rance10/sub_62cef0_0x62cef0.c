// 函数: sub_62cef0
// 地址: 0x62cef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int64_t var_14
int32_t eax_1 = __security_cookie ^ &var_14
int32_t var_18 = arg1 + 0x18
var_14 = 0
int64_t* var_1c = &var_14
char var_c
int32_t edx
int32_t result = __Wcrtomb(&var_c, edx, arg1, &var_c, arg2)
char edx_1 = var_c

if (result != 1)
    edx_1 = arg3

result.b = edx_1
@__security_check_cookie@4(eax_1 ^ &var_14)
return result
