// 函数: sub_6aeb10
// 地址: 0x6aeb10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t var_110
int32_t var_4 = __security_cookie ^ &var_110
char ecx = (*(arg3 + 0x74)).b

if ((ecx & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

if ((ecx & 4) != 0)
    sub_6ace40(arg3, arg4)
    int32_t eax_2 = sub_6a77d0(arg3, "out of place")
    @__security_check_cookie@4(var_4 ^ &var_110)
    return eax_2

if (arg2 != 0 && (*(arg2 + 8) & 0x10) != 0)
    sub_6ace40(arg3, arg4)
    int32_t eax_3 = sub_6a77d0(arg3, "duplicate")
    @__security_check_cookie@4(var_4 ^ &var_110)
    return eax_3

int32_t eax_1
eax_1.b = *(arg3 + 0x157)
char var_104[0x100]
char* edx_3

if (eax_1.b == 0)
    if (arg4 != 2)
        sub_6ace40(arg3, arg4)
        edx_3 = "invalid"
    label_6aedc8:
        int32_t eax_21 = sub_6a77d0(arg3, edx_3)
        @__security_check_cookie@4(var_4 ^ &var_110)
        return eax_21
    
    int32_t eax_4 = *(arg3 + 0x5c)
    
    if (eax_4 == 0)
        sub_6a7500(arg3, "Call to NULL read function")
        noreturn
    
    sub_6a4030(eax_4(arg3, &var_110, 2), &var_110, arg3, 2)
    *(arg3 + 0x150) = 1
    int16_t eax_6 = var_110
    *(arg3 + 0x1c0) = zx.w(eax_6.b) * 0x100 + zx.w(eax_6:1.b)
else if (eax_1.b != 2)
    if (eax_1.b != 3)
        sub_6ace40(arg3, arg4)
        edx_3 = "invalid with alpha channel"
        goto label_6aedc8
    
    if ((ecx & 2) == 0)
        sub_6ace40(arg3, arg4)
        edx_3 = "out of place"
        goto label_6aedc8
    
    if (arg4 u> zx.d(*(arg3 + 0x148)) || arg4 u> 0x100 || arg4 == 0)
        sub_6ace40(arg3, arg4)
        edx_3 = "invalid"
        goto label_6aedc8
    
    int32_t eax_14 = *(arg3 + 0x5c)
    
    if (eax_14 == 0)
        sub_6a7500(arg3, "Call to NULL read function")
        noreturn
    
    sub_6a4030(eax_14(arg3, &var_104, arg4), &var_104, arg3, arg4)
    *(arg3 + 0x150) = arg4.w
else
    if (arg4 != 6)
        sub_6ace40(arg3, arg4)
        edx_3 = "invalid"
        goto label_6aedc8
    
    int32_t eax_8 = *(arg3 + 0x5c)
    
    if (eax_8 == 0)
        sub_6a7500(arg3, "Call to NULL read function")
        noreturn
    
    char var_10c
    sub_6a4030(eax_8(arg3, &var_10c, 6), &var_10c, arg3, 6)
    int16_t ecx_14 = zx.w(var_10c) * 0x100
    *(arg3 + 0x150) = 1
    char var_10b
    *(arg3 + 0x1ba) = ecx_14 + zx.w(var_10b)
    char var_10a
    char var_109
    *(arg3 + 0x1bc) = zx.w(var_10a) * 0x100 + zx.w(var_109)
    char var_108
    char var_107
    *(arg3 + 0x1be) = zx.w(var_108) * 0x100 + zx.w(var_107)

if (sub_6ace40(arg3, nullptr) == 0)
    int32_t eax_20 = sub_6b2360(&var_104, arg2, arg3, &var_104, zx.d(*(arg3 + 0x150)), arg3 + 0x1b8)
    @__security_check_cookie@4(var_4 ^ &var_110)
    return eax_20

*(arg3 + 0x150) = 0
@__security_check_cookie@4(var_4 ^ &var_110)
return 0
