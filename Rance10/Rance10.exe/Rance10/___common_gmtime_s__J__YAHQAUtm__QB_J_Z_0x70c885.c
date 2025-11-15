// 函数: ??$common_gmtime_s@_J@@YAHQAUtm@@QB_J@Z
// 地址: 0x70c885
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

int32_t edi
int32_t var_18_1 = edi
__builtin_memset(arg1, 0xffffffff, 0x24)
int32_t result

if (arg2 != 0)
    uint32_t ecx_1 = arg2[1]
    int32_t eax_2 = *arg2
    int32_t var_10 = eax_2
    
    if ((ecx_1 s> 0xffffffff || (ecx_1 s>= 0xffffffff && eax_2 u>= 0xffff5740))
            && (ecx_1 s< 7 || (ecx_1 s<= 7 && eax_2 u<= 0x934126cf)))
        char var_5 = 0
        int32_t eax_4 = sub_70c9d2(&var_10, &var_5)
        int32_t ebx_1 = var_10
        arg1[5] = eax_4
        uint32_t eax_5 = __alldiv(ebx_1, ecx_1, 0x15180, 0)
        arg1[7] = eax_5
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = muls.dp.d(eax_5, 0x15180)
        void* const ecx_3 = &data_75675c
        int32_t ebx_2 = ebx_1 - eax_6
        uint32_t eax_8 = sbb.d(ecx_1, edx_1, ebx_1 u< eax_6)
        
        if (var_5 == 0)
            ecx_3 = &data_756728
        
        int32_t i = arg1[7]
        int32_t eax_9 = 1
        
        if (*(ecx_3 + 4) s< i)
            do
                eax_9 += 1
            while (*(ecx_3 + (eax_9 << 2)) s< i)
        
        arg1[4] = eax_9 - 1
        arg1[3] = i - *(ecx_3 + ((eax_9 - 1) << 2))
        arg1[6] = mods.dp.d(sx.q(__alldiv(*arg2, arg2[1], 0x15180, 0) + 4), 7)
        uint32_t eax_14 = __alldiv(ebx_2, eax_8, 0xe10, 0)
        arg1[2] = eax_14
        int32_t eax_15
        int32_t edx_5
        edx_5:eax_15 = muls.dp.d(eax_14, 0xe10)
        int32_t ebx_3 = ebx_2 - eax_15
        uint32_t eax_16 = __alldiv(ebx_3, sbb.d(eax_8, edx_5, ebx_2 u< eax_15), 0x3c, 0)
        arg1[8] = 0
        arg1[1] = eax_16
        result = 0
        *arg1 = ebx_3 - eax_16 * 0x3c
    else
        *__errno() = 0x16
        result = 0x16
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x16

return result
