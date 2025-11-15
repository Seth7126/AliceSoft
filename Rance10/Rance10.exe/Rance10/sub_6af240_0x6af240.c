// 函数: sub_6af240
// 地址: 0x6af240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_10
int32_t eax_1 = __security_cookie ^ &var_10
char eax_2 = (*(arg3 + 0x74)).b

if ((eax_2 & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

int32_t eax_3

if ((eax_2 & 4) != 0)
    sub_6ace40(arg3, arg4)
    eax_3 = sub_6a77d0(arg3, "out of place")
else if (arg2 != 0 && (*(arg2 + 8) & 0x80) != 0)
    sub_6ace40(arg3, arg4)
    eax_3 = sub_6a77d0(arg3, "duplicate")
else if (arg4 == 9)
    int32_t eax_4 = *(arg3 + 0x5c)
    
    if (eax_4 == 0)
        sub_6a7500(arg3, "Call to NULL read function")
        noreturn
    
    sub_6a4030(eax_4(arg3, &var_10, 9), &var_10, arg3, 9)
    eax_3 = sub_6ace40(arg3, nullptr)
    
    if (eax_3 == 0 && arg2 != 0)
        char var_f
        uint32_t ecx_7 = (zx.d(var_10) << 8) + zx.d(var_f)
        *(arg2 + 8) |= 0x80
        char var_e
        char var_d
        *(arg2 + 0xc0) = (((ecx_7 << 8) + zx.d(var_e)) << 8) + zx.d(var_d)
        char var_8
        uint32_t eax_11
        eax_11.b = var_8
        char var_c
        char var_b
        char var_a
        char var_9
        *(arg2 + 0xc4) =
            (((((zx.d(var_c) << 8) + zx.d(var_b)) << 8) + zx.d(var_a)) << 8) + zx.d(var_9)
        *(arg2 + 0xc8) = eax_11.b
        @__security_check_cookie@4(eax_1 ^ &var_10)
        return eax_11
else
    sub_6ace40(arg3, arg4)
    eax_3 = sub_6a77d0(arg3, "invalid")

@__security_check_cookie@4(eax_1 ^ &var_10)
return eax_3
