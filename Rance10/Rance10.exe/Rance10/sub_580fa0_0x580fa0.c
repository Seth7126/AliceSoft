// 函数: sub_580fa0
// 地址: 0x580fa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_68
int32_t eax_1 = __security_cookie ^ &var_68
float* result = sub_5f1f30(arg2 + 0xc, arg2, &var_68, arg2 + 0xc, arg2 + 0x18)

if (not(0 f>= result[1]))
    int32_t eax_4 = arg2[2].d
    int32_t var_8_1 = eax_4
    int128_t var_28 = *arg2
    int32_t var_3c_1 = eax_4
    int128_t var_18 = arg2[1]
    int128_t var_5c = *arg2
    int128_t var_4c_1 = arg2[1]
    float* eax_6 = sub_5f1f30(&var_28:0xc, &var_28, &var_68, &var_28:0xc, &var_18:8)
    float xmm4_1[0x4] = *arg2
    float xmm2_1 = *eax_6
    float xmm3_1 = eax_6[1]
    float xmm1_1 = eax_6[2]
    float var_34_1 = xmm3_1
    float var_38_1 = xmm2_1
    float var_30_1 = xmm1_1
    int32_t var_2c_1 = (xmm3_1 * _mm_shuffle_ps(xmm4_1, xmm4_1, 0x55) + xmm2_1 f* xmm4_1
        + xmm1_1 * _mm_shuffle_ps(xmm4_1, xmm4_1, 0xaa)) ^ (data_79aad0).d
    result = sub_581090(arg1, &var_5c)

@__security_check_cookie@4(eax_1 ^ &var_68)
return result
