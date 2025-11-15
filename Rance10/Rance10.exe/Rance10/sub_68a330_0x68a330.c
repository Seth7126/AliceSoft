// 函数: sub_68a330
// 地址: 0x68a330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result_1
int32_t eax_1 = __security_cookie ^ &result_1
int32_t var_30
_memset(&var_30, 0, 0x2c)
var_30 = arg2
int32_t var_2c = arg3
int32_t var_20 = arg4
int32_t var_1c = arg5
int32_t var_18 = arg6
void* eax_7 = *(arg1 + 8)
int32_t var_28 = 1
int32_t var_24 = 1
int32_t var_14 = 0
int32_t var_10 = 0x28
int32_t var_c = 0
int32_t var_8 = 0
result_1 = 0
int32_t* eax_8 = *(eax_7 + 0x34)
int32_t eax_9 = (*(*eax_8 + 0x14))(eax_8, &var_30, 0, &result_1)
int32_t result = result_1

if (eax_9 s< 0)
    result = 0

@__security_check_cookie@4(eax_1 ^ &result_1)
return result
