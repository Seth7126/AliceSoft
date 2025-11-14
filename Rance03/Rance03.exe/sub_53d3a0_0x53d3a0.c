// 函数: sub_53d3a0
// 地址: 0x53d3a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4348
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
float* result = *esi
float xmm4 = result[5]
float xmm2_1 = result[7] - result[4]
float xmm3_1 = result[8] - xmm4
float xmm7_1 = result[4] - result[1]
float xmm4_1 = xmm4 - result[2]
float xmm5 = result[3]
float xmm1_1 = result[6] - xmm5
float xmm5_1 = xmm5 - *result
float xmm6_2 = xmm3_1 * xmm7_1 - xmm2_1 * xmm4_1
float xmm3_3 = xmm1_1 * xmm4_1 - xmm5_1 * xmm3_1
float xmm5_3 = xmm5_1 * xmm2_1 - xmm1_1 * xmm7_1
float xmm2_2 = _mm_sqrt_ss(0, xmm3_3 * xmm3_3 + xmm6_2 * xmm6_2 + xmm5_3 * xmm5_3)
xmm2_2 f- 0
result:1.b =
    (xmm2_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_2, 0f) ? 1 : 0) << 2 | (xmm2_2 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float xmm1_3

if (p_1)
    xmm1_3 = 1f / xmm2_2
else
    xmm1_3 = (zx.o(0)).d

if (not(0 f>= xmm1_3 * xmm3_3))
    int128_t var_50
    __builtin_memset(&var_50, 0, 0x28)
    int32_t var_4 = 0
    sub_533500(&var_50, esi)
    float* eax_3 = *esi
    float xmm2_3 = eax_3[3]
    float xmm1_5 = *eax_3
    float var_24 = eax_3[2] - eax_3[5]
    float var_20_1 = xmm2_3 - xmm1_5
    float var_1c_1 = xmm1_5 * eax_3[5] - xmm2_3 * eax_3[2]
    sub_533630(&var_50:0xc, &var_24)
    void* eax_4 = *esi
    float xmm4_2 = *(eax_4 + 0x20)
    float xmm2_5 = *(eax_4 + 0x18)
    float xmm4_3 = xmm4_2 f* *(eax_4 + 0xc)
    var_24 = *(eax_4 + 0x14) - xmm4_2
    float var_20_2 = xmm2_5 f- *(eax_4 + 0xc)
    float var_1c_2 = xmm4_3 - xmm2_5 f* *(eax_4 + 0x14)
    sub_533630(&var_50:0xc, &var_24)
    float* eax_5 = *esi
    float xmm4_5 = eax_5[8]
    float xmm2_7 = eax_5[6]
    float xmm4_6 = xmm4_5 * *eax_5
    var_24 = xmm4_5 - eax_5[2]
    float var_20_3 = *eax_5 - xmm2_7
    float var_1c_3 = xmm2_7 * eax_5[2] - xmm4_6
    sub_533630(&var_50:0xc, &var_24)
    int32_t* ecx_4 = *esi
    float xmm4_7 = ecx_4[5]
    float xmm7_2 = ecx_4[1]
    float xmm3_5 = ecx_4[8] f- xmm4_7
    float xmm2_11 = ecx_4[7] f- ecx_4[4]
    float xmm4_8 = xmm4_7 f- ecx_4[2]
    float xmm6_4 = *ecx_4
    float xmm5_6 = ecx_4[4] f- xmm7_2
    float xmm1_10 = xmm3_5 * xmm5_6 - xmm2_11 * xmm4_8
    float xmm0_24 = ecx_4[3]
    float xmm1_12 = ecx_4[6] f- xmm0_24
    float xmm0_25 = xmm0_24 - xmm6_4
    float xmm2_12 = (zx.o(0)).d
    float xmm3_7 = xmm1_12 * xmm4_8 - xmm0_25 * xmm3_5
    float xmm4_11 = xmm0_25 * xmm2_11 - xmm1_12 * xmm5_6
    float xmm0_34 = _mm_sqrt_ss(0, xmm3_7 * xmm3_7 + xmm1_10 * xmm1_10 + xmm4_11 * xmm4_11)
    xmm0_34 f- 0
    int32_t eax_6
    eax_6:1.b = (xmm0_34 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_34, 0f) ? 1 : 0) << 2
        | (xmm0_34 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        xmm2_12 = 1f / xmm0_34
    
    float xmm0_36 = xmm2_12 * xmm1_10
    float xmm1_19 = xmm2_12 * xmm3_7
    float xmm2_13 = xmm2_12 * xmm4_11
    float xmm6_7 = ((xmm6_4 * xmm0_36) ^ (data_7094c0).d) - xmm7_2 * xmm1_19
    float xmm0_38 = ecx_4[2] f* xmm2_13
    var_24 = xmm1_19
    float var_20_4 = xmm2_13
    float var_1c_4 = xmm6_7 - xmm0_38
    int128_t var_38_1 = xmm0_36.o
    sub_53d750(arg1 + 8, &var_50)
    sub_53d700(&var_50)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
