// 函数: sub_4dfb40
// 地址: 0x4dfb40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_2c
int32_t eax_1 = __security_cookie ^ &var_2c

if (arg2[5] u< 0x10)
    var_2c = arg2
else
    var_2c = *arg2

int32_t* var_28

if (*(arg1 + 0xdc) u< 0x10)
    var_28 = arg1 + 0xc8
else
    var_28 = *(arg1 + 0xc8)

int32_t ecx = arg2[4]
int32_t eax_4 = ecx

if (*(arg1 + 0xd8) u< ecx)
    eax_4 = *(arg1 + 0xd8)

int32_t* result = sub_406ac0(eax_4, var_2c, var_28, eax_4)

if (result != 0)
label_4dfbb9:
    
    if (arg1 + 0xc8 != arg2)
        result = sub_403590(arg1 + 0xc8, arg2, 0, 0xffffffff)
    
    void* var_24
    sub_409670(arg1 + 0xe0, sub_4175e0(result, arg2, &var_24, 0x7647e4))
    int32_t* result_1
    int32_t* result_2 = result_1
    
    if (result_2 u>= 0x10)
        result_2 = sub_403160(var_24, result_2 + 1, 1)
    
    sub_409670(arg1 + 0xf8, sub_4175e0(result_2, arg2, &var_24, 0x764904))
    int32_t* result_3 = result_1
    
    if (result_3 u>= 0x10)
        result_3 = sub_403160(var_24, result_3 + 1, 1)
    
    sub_409670(arg1 + 0x110, sub_4175e0(result_3, arg2, &var_24, 0x76490c))
    int32_t* result_4 = result_1
    
    if (result_4 u>= 0x10)
        result_4 = sub_403160(var_24, result_4 + 1, 1)
    
    sub_409670(arg1 + 0x128, sub_4175e0(result_4, arg2, &var_24, 0x764918))
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_24, result + 1, 1)
    
    *(arg1 + 0x174) = 1
else
    result = arg2[4]
    int32_t ecx_2 = *(arg1 + 0xd8)
    
    if (ecx_2 u< result || ecx_2 u> result)
        goto label_4dfbb9

@__security_check_cookie@4(eax_1 ^ &var_2c)
return result
