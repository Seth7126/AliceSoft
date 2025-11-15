// 函数: sub_633d00
// 地址: 0x633d00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result_2
int32_t eax_1 = __security_cookie ^ &result_2
int16_t arg_4
void arg_6
sub_633ee0(*arg1, &result_2, &arg_4, &arg_6)
int32_t* result_1 = result_2
int32_t var_14
int32_t var_10
int32_t* result
int16_t esi

if (var_14 != 1)
    esi = arg_4
else
    result = &result_2
    
    if (var_10 u>= 8)
        result = result_1
    
    esi = *result

if (var_10 u>= 8)
    sub_403160(result_1, var_10 + 1, 2)

result.w = esi
@__security_check_cookie@4(eax_1 ^ &result_2)
return result
