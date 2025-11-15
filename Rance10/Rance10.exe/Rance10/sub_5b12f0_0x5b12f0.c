// 函数: sub_5b12f0
// 地址: 0x5b12f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_74 = arg1
int32_t eax = arg1[0x43]
float var_6c = arg7

if (eax u> 7)
    sub_6cac10(arg2)
    return arg2

int64_t var_80
float var_78
float var_68
float var_5c
float eax_5
int128_t* eax_8
int64_t xmm0_10
int32_t xmm0_34
int64_t xmm2_6
int128_t xmm3_5

switch (eax)
    case 0
        *arg2 = *(arg3 i+ 0x80)
        arg2[1] = *(arg3 i+ 0x90)
        arg2[2] = *(arg3 i+ 0xa0)
        arg2[3] = *(arg3 i+ 0xb0)
        return arg2
    case 1
        int32_t* ecx_1 = arg2
        var_74 = *arg6 ^ 0x80000000
        int32_t var_70_1 = *(arg6 + 4) ^ 0x80000000
        int32_t var_6c_1 = *(arg6 + 8) ^ 0x80000000
        sub_6cac90(ecx_1, arg8, arg7, &var_74)
        return ecx_1
    case 2
        int64_t* eax_4 = sub_5b1760(&var_74, &var_5c)
        xmm0_10 = *eax_4
        eax_5 = eax_4[1].d
    label_5b161a:
        var_78 = eax_5
        eax_8 = arg6
        var_80 = xmm0_10
        goto label_5b1627
    case 3
        int64_t* eax_6 = sub_5b1760(&var_74, &var_5c)
        var_78 = eax_6[1].d
        var_80 = *eax_6
        eax_8 = sub_6ca9e0(&arg1[0x36], &var_5c)
    label_5b1627:
        xmm0_34 = *(eax_8 + 8)
        xmm2_6 = *(eax_8 + 4)
        xmm3_5 = *eax_8
        goto label_5b163d
    case 4
        int32_t eax_9 = arg1[0x100]
        
        if (eax_9 != 0xffffffff && eax_9 != *arg1)
            void* eax_10 = sub_59f380(arg4, eax_9)
            
            if (eax_10 != 0)
                int64_t* eax_11 = sub_579230(eax_10, &var_5c)
                var_80.d = arg1[0x101] f- *eax_11
                var_80:4.d = arg1[0x102] f- *(eax_11 + 4)
                float xmm0_17 = arg1[0x103] f- eax_11[1].d
                sub_6ca9e0(&var_80, &var_74)
                float xmm3 = arg7[1]
                float xmm2_1 = arg7[2]
                float xmm5 = var_74
                var_68 = xmm3 * var_6c - xmm2_1 * arg3
                float xmm1_3 = *arg7
                float var_60 = xmm1_3 * arg3 - xmm3 * xmm5
                float var_64 = xmm2_1 * xmm5 - xmm1_3 * var_6c
                sub_6ca9e0(&var_68, &var_80)
                float xmm3_2 = var_80:4.d
                int32_t* ecx_9 = arg2
                var_68 = xmm0_17 * arg3 - xmm3_2 * var_6c
                float xmm1_9 = var_80.d
                float var_60_1 = xmm3_2 * xmm5 - xmm1_9 * arg3
                float var_64_1 = xmm1_9 * var_6c - xmm0_17 * xmm5
                sub_6cac90(ecx_9, &var_80, &var_68, &var_74)
                return ecx_9
        
        var_68 = *arg6 ^ 0x80000000
        int32_t var_64_2 = *(arg6 + 4) ^ 0x80000000
        int32_t var_60_2 = *(arg6 + 8) ^ 0x80000000
        sub_6cac90(arg2, arg8, arg7, &var_68)
        return arg2
    case 5
        int64_t* eax_15 = sub_5b1760(&var_74, &var_5c)
        xmm3_5 = arg1[0xee]
        xmm2_6 = arg1[0xef]
        float eax_16 = eax_15[1].d
        var_80 = *eax_15
        xmm0_34 = arg1[0xf0]
        var_78 = eax_16
    label_5b163d:
        float xmm6_1 = var_80:4.d
        float xmm0_35 = xmm0_34 ^ 0x80000000
        int64_t xmm3_7 = _mm_unpacklo_ps(xmm3_5 ^ 0x80000000, xmm2_6 ^ 0x80000000)
        float xmm2_8 = var_80.d
        var_74.q = xmm3_7
        int32_t* ecx_14 = arg2
        float xmm7_3 = xmm0_35 * xmm6_1 - arg3 * var_78
        float xmm0_38 = var_74
        float xmm5_3 = arg3 * xmm2_8 - xmm0_38 * xmm6_1
        var_5c = xmm7_3
        float xmm4_2 = xmm0_38 * var_78 - xmm0_35 * xmm2_8
        float var_54_1 = xmm5_3
        float var_58 = xmm4_2
        var_68 = xmm4_2 * var_78 - xmm5_3 * xmm6_1
        float var_60_3 = xmm7_3 * xmm6_1 - xmm4_2 * xmm2_8
        float var_64_3 = xmm5_3 * xmm2_8 - xmm7_3 * var_78
        sub_6cac90(ecx_14, &var_5c, &var_80, &var_68)
        return ecx_14
    case 6
        float var_48[0x10]
        float* eax_18 = sub_6cbac0(&arg1[0x118], &var_48)
        sub_6cb020(eax_18, eax_18, arg2, arg3 i+ 0x80)
        return arg2
    case 7
        xmm0_10 = *(arg1 + 0x474)
        eax_5 = arg1[0x11f]
        goto label_5b161a
