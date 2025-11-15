// 函数: sub_563b40
// 地址: 0x563b40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_28
int32_t result = __security_cookie ^ &var_28
int32_t result_1 = result

if (data_7fd464 == 0)
    result.b = 0
    @__security_check_cookie@4(result_1 ^ &var_28)
    return result

void* var_24
int32_t* eax_1 = sub_4079d0(result, &data_7fd454, &var_24, arg1)
uint8_t* ecx_3 = *arg2
uint8_t* edx = nullptr
int32_t esi_1 = arg2[1]

if (ecx_3 != esi_1)
    edx = ecx_3

int32_t ebx
ebx.b = sub_67efe0(eax_1, edx, eax_1, esi_1 - ecx_3)
int32_t var_10

if (var_10 u>= 0x10)
    sub_403160(var_24, var_10 + 1, 1)

@__security_check_cookie@4(result_1 ^ &var_28)
return ebx.b
