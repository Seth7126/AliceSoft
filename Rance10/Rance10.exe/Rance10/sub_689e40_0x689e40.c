// 函数: sub_689e40
// 地址: 0x689e40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result_1
int32_t eax_1 = __security_cookie ^ &result_1
int32_t var_30
_memset(&var_30, 0, 0x2c)
var_30 = *(arg1 + 0x18)
int32_t var_2c = *(arg1 + 0x1c)
int32_t var_20 = *(arg1 + 0x44)
void* eax_5 = *(arg1 + 8)
int32_t var_28 = 1
int32_t var_24 = 1
int32_t var_1c = 1
int32_t var_18 = 0
int32_t var_14 = 3
int32_t var_10 = 0
int32_t var_c = 0x20000
int32_t var_8 = 0
result_1 = 0
int32_t* eax_6 = *(eax_5 + 0x34)
int32_t eax_7 = (*(*eax_6 + 0x14))(eax_6, &var_30, 0, &result_1)
int32_t result = result_1

if (eax_7 s< 0)
    result = 0

@__security_check_cookie@4(eax_1 ^ &result_1)
return result
