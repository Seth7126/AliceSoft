// 函数: sub_6af380
// 地址: 0x6af380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_10
int32_t eax_1 = __security_cookie ^ &var_10
char eax_2 = (*(arg3 + 0x74)).b

if ((eax_2 & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

uint32_t result

if ((eax_2 & 4) != 0)
    sub_6ace40(arg3, arg4)
    result = sub_6a77d0(arg3, "out of place")
else if (arg2 != 0 && (*(arg2 + 8) & 0x100) != 0)
    sub_6ace40(arg3, arg4)
    result = sub_6a77d0(arg3, "duplicate")
else if (arg4 == 9)
    int32_t eax_3 = *(arg3 + 0x5c)
    
    if (eax_3 == 0)
        sub_6a7500(arg3, "Call to NULL read function")
        noreturn
    
    sub_6a4030(eax_3(arg3, &var_10, 9), &var_10, arg3, 9)
    result = sub_6ace40(arg3, nullptr)
    
    if (result == 0)
        result.b = var_10
        char var_f
        char var_e
        char var_d
        uint32_t ecx_11 =
            (((((zx.d(result.b) << 8) + zx.d(var_f)) << 8) + zx.d(var_e)) << 8) + zx.d(var_d)
        char var_c
        uint32_t eax_7
        eax_7.b = var_c
        char result_1
        result = zx.d(result_1)
        char var_b
        char var_a
        uint32_t edx_11 =
            (((((zx.d(eax_7.b) << 8) + zx.d(var_b)) << 8) + zx.d(var_a)) << 8) + result
        
        if (arg2 != 0)
            char var_8
            result.b = var_8
            *(arg2 + 8) |= 0x100
            *(arg2 + 0xb4) = ecx_11
            *(arg2 + 0xb8) = edx_11
            *(arg2 + 0xbc) = result.b
            @__security_check_cookie@4(eax_1 ^ &var_10)
            return result
else
    sub_6ace40(arg3, arg4)
    result = sub_6a77d0(arg3, "invalid")

@__security_check_cookie@4(eax_1 ^ &var_10)
return result
