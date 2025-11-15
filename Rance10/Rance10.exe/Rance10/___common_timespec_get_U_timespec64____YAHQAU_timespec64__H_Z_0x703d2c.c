// 函数: ??$common_timespec_get@U_timespec64@@@@YAHQAU_timespec64@@H@Z
// 地址: 0x703d2c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg3
int32_t var_c = arg3

if (arg4 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
else if (arg5 == 1)
    var_c = 0
    int32_t var_8_1 = 0
    int32_t ebx
    int32_t var_14_1 = ebx
    ___acrt_GetSystemTimePreciseAsFileTime@4(&var_c)
    int32_t ecx = var_c
    uint32_t eax_3
    int32_t ecx_2
    int32_t edx
    eax_3, ecx_2, edx =
        __alldvrm(ecx + 0x2ac18000, sbb.d(var_8_1, 0x19db1de, ecx u< 0xd53e8000), 0x989680, 0)
    int32_t var_8_2 = ebx
    
    if (edx s< 7)
    label_703d9b:
        *arg4 = eax_3
        arg4[1] = edx
        arg4[2] = ecx_2 * 0x64
        return 1
    
    if (edx s<= 7 && eax_3 u<= 0x93406fff)
        goto label_703d9b

return 0
