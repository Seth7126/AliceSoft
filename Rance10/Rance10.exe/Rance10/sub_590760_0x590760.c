// 函数: sub_590760
// 地址: 0x590760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = int.d(arg2)

if (edi s>= 0)
    int32_t eax_1 = *(arg1 + 0x24)
    
    if (edi s>= eax_1)
        edi = eax_1 - 1
else
    edi = 0

int32_t ebp = edi + 1

if (ebp s>= 0)
    int32_t eax_2 = *(arg1 + 0x24)
    
    if (ebp s>= eax_2)
        ebp = eax_2 - 1
else
    ebp = 0

int32_t ebx = int.d(arg3)
float xmm1 = arg2 - _mm_cvtepi32_ps(zx.o(edi))
float var_48 = xmm1

if (ebx s>= 0)
    int32_t eax_3 = *(arg4 + 0x24)
    
    if (ebx s>= eax_3)
        ebx = eax_3 - 1
else
    ebx = 0

int32_t var_54 = ebx + 1

if (ebx + 1 s>= 0)
    int32_t ecx_1 = *(arg4 + 0x24)
    
    if (ebx + 1 s>= ecx_1)
        var_54 = ecx_1 - 1
else
    var_54 = 0

int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x2c) - *(arg1 + 0x28))
int32_t edx_1 = edx s>> 3
float xmm2_1 = arg3 - _mm_cvtepi32_ps(zx.o(ebx))
float var_44 = xmm2_1

if ((edx_1 u>> 0x1f) + edx_1 != (arg6[1] - *arg6) s>> 6)
    int32_t eax_10
    int32_t edx_3
    edx_3:eax_10 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x2c) - *(arg1 + 0x28))
    int32_t edx_4 = edx_3 s>> 3
    sub_58cf40(arg6, (edx_4 u>> 0x1f) + edx_4)
    xmm1 = var_48
    xmm2_1 = var_44

int32_t eax_14
int32_t edx_5
edx_5:eax_14 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x2c) - *(arg1 + 0x28))
int32_t var_50 = 0
int32_t edx_6 = edx_5 s>> 3
int32_t result = (edx_6 u>> 0x1f) + edx_6

if (result s> 0)
    int32_t var_4c_1 = 0
    int32_t ecx_12 = 0
    
    do
        float var_40[0x4]
        __builtin_memcpy(&var_40, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x10)
        int128_t var_30
        __builtin_memcpy(&var_30, 
            "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "00\x80\x3f", 
            0x30)
        int32_t var_80_1 = ecx_12
        sub_590b00(arg1, &var_40, ecx_12, edi, ebp, xmm1, arg4, ebx, var_54, xmm2_1, arg5)
        var_50 += 1
        xmm1 = var_48
        float (* eax_18)[0x4] = *arg6 + var_4c_1
        xmm2_1 = var_44
        var_4c_1 += 0x40
        *eax_18 = var_40
        eax_18[1] = var_30
        __builtin_memcpy(&eax_18[2], 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x20)
        int32_t eax_19
        int32_t edx_7
        edx_7:eax_19 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x2c) - *(arg1 + 0x28))
        ecx_12 = var_50
        int32_t edx_8 = edx_7 s>> 3
        result = (edx_8 u>> 0x1f) + edx_8
    while (ecx_12 s< result)

return result
