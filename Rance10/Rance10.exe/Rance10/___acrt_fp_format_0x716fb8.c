// 函数: ___acrt_fp_format
// 地址: 0x716fb8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_8 = arg3.b
int32_t var_c = arg3
int32_t edi
int32_t var_14 = edi

if (arg5 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

if (arg6 == 0 || arg7 == 0 || arg8 u<= 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

if (arg9 != 0x41 && arg9 != 0x45 && arg9 != 0x46)
    var_8 = 0

if (arg9 == 0x41 || arg9 == 0x45 || arg9 == 0x46 || arg9 == 0x47)
    var_8 = 1

if ((arg11 & 8) == 0)
    int32_t eax_6 = __acrt_fp_classify(arg4)
    
    if (eax_6 != 0)
        return fp_format_nan_or_infinity(eax_6, __acrt_fp_is_negative(arg4), arg5, arg6, var_8)

int32_t var_1c_3

if ((arg11 & 0x10) == 0)
    var_1c_3 = 2
else
    var_1c_3 = 3

int32_t esi_3
bool cond:1_1

if (arg9 s> 0x61)
    esi_3 = arg9 - 0x65
    cond:1_1 = arg9 == 0x65
else
    if (arg9 == 0x61 || arg9 == 0x41)
        return fp_format_a(arg4, arg5, arg6, arg7, arg8, arg10, var_8, var_1c_3, arg12)
    
    esi_3 = arg9 - 0x45
    cond:1_1 = arg9 == 0x45

if (cond:1_1)
    return fp_format_e(arg4, arg5, arg6, arg7, arg8, arg10, var_8, var_1c_3, arg12)

if (esi_3 == 1)
    return fp_format_f(arg4, arg5, arg6, arg7, arg8, arg10, arg12)

return fp_format_g(arg4, arg5, arg6, arg7, arg8, arg10, var_8, var_1c_3, arg12)
