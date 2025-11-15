// 函数: sub_636540
// 地址: 0x636540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_48
int32_t eax_1 = __security_cookie ^ &var_48
uint32_t var_44 = zx.d(arg2)
int32_t* var_3c
sub_633ee0(**arg1, &var_3c, &var_44, &var_44:2)
int32_t* edx = var_3c
int32_t var_2c
int32_t var_28
int16_t edi

if (var_2c != 1)
    edi = var_44.w
else
    int32_t* eax_3 = &var_3c
    
    if (var_28 u>= 8)
        eax_3 = edx
    
    edi = *eax_3

if (var_28 u>= 8)
    sub_403160(edx, var_28 + 1, 2)

int32_t** ecx_3 = *arg1
var_3c.w = 0
uint32_t var_40 = zx.d(arg3)
int32_t var_28_1 = 7
int32_t var_2c_1 = 0
int32_t* result_2
sub_633ee0(*ecx_3, &result_2, &var_40, &var_40:2)
int32_t* result_1 = result_2
int32_t var_14
int32_t var_10
int32_t* result
int16_t esi_1

if (var_14 != 1)
    esi_1 = var_40.w
else
    result = &result_2
    
    if (var_10 u>= 8)
        result = result_1
    
    esi_1 = *result

if (var_10 u>= 8)
    sub_403160(result_1, var_10 + 1, 2)

result.b = edi == esi_1
@__security_check_cookie@4(eax_1 ^ &var_48)
return result
