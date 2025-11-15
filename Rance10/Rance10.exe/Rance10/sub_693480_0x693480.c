// 函数: sub_693480
// 地址: 0x693480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_30
int32_t eax_1 = __security_cookie ^ &var_30
int32_t* edx = *(arg1 + 0xc)

if (edx != 0)
    (*(*edx + 8))(edx)
    *(arg1 + 0xc) = 0

_memset(&var_30, 0, 0x2c)
var_30 = arg2
int32_t var_2c = arg3
int32_t var_28 = arg4
int32_t var_24 = 1
int32_t var_20 = 0x1c
int32_t var_1c = 1
int32_t var_18 = 0
int32_t var_14 = 1
int32_t var_10 = 8
int32_t var_c = 0
int32_t var_8 = 0
int32_t* eax_7 = *(*(arg1 + 8) + 0x34)
int32_t result
result.b = (*(*eax_7 + 0x14))(eax_7, &var_30, arg5, arg1 + 0xc) s>= 0
@__security_check_cookie@4(eax_1 ^ &var_30)
return result
