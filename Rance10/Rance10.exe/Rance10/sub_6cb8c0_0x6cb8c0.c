// 函数: sub_6cb8c0
// 地址: 0x6cb8c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_18
int32_t eax_1 = __security_cookie ^ &var_18
float xmm2 = *arg1
float xmm1 = arg1[5]
float xmm3 = arg1[0xa]
float xmm0_3 = xmm2 + xmm1 + xmm3 f+ arg1[0xf]

if (xmm0_3 < 1f)
    int32_t ebx_1
    ebx_1.b = xmm2 <= xmm1
    
    if (xmm3 f> arg1[ebx_1 * 5])
        ebx_1 = 2
    
    uint32_t temp1_1 = modu.dp.d(0:(ebx_1 + 1), 3)
    int32_t temp1_2 = mods.dp.d(sx.q(temp1_1 + 1), 3)
    float xmm0_12 = sub_484cc0(arg1[ebx_1 * 5] f- arg1[temp1_1 * 5] f- arg1[temp1_2 * 5] + 1f)
    float xmm0_13 = xmm0_12 + xmm0_12
    float xmm4_1 = 1f / xmm0_13
    float xmm0_16 = (arg1[ebx_1 + (temp1_1 << 2)] f+ arg1[temp1_1 + (ebx_1 << 2)]) * xmm4_1
    float var_14
    (&var_14)[ebx_1] = xmm0_13 * 0.25f
    (&var_14)[temp1_1] = xmm0_16
    float xmm1_8 = (arg1[temp1_2 + (temp1_1 << 2)] f- arg1[temp1_1 + (temp1_2 << 2)]) * xmm4_1
    (&var_14)[temp1_2] = (arg1[ebx_1 + (temp1_2 << 2)] f+ arg1[temp1_2 + (ebx_1 << 2)]) * xmm4_1
    *arg2 = var_14
    int32_t var_10
    arg2[1] = var_10
    int32_t var_c
    arg2[2] = var_c
    arg2[3] = xmm1_8
else
    float xmm0_4 = sub_484cc0(xmm0_3)
    float xmm3_2 = xmm0_4 + xmm0_4
    float xmm4 = 1f / xmm3_2
    float xmm1_3 = (arg1[1] f- arg1[4]) * xmm4
    float xmm0_7 = (arg1[6] f- arg1[9]) * xmm4
    arg2[1] = (arg1[8] f- arg1[2]) * xmm4
    arg2[2] = xmm1_3
    *arg2 = xmm0_7
    arg2[3] = xmm3_2 * 0.25f

@__security_check_cookie@4(eax_1 ^ &var_18)
return arg2
