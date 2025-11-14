// 函数: sub_5b1e90
// 地址: 0x5b1e90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_48
int32_t* ecx
sub_47c420(ecx, &var_48)
int32_t var_40
int32_t xmm0_2[0x4] = ___libm_sse2_asinf(var_40 ^ (data_7094c0).d)
float var_8 = xmm0_2
double* eax
float xmm0_3
int80_t x87_r0
eax, xmm0_3 = ___libm_sse2_cosf(xmm0_2, x87_r0)
xmm0_3 - 0f
eax:1.b =
    (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2 | (xmm0_3 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    xmm0_3 = 9.99999975e-05f

float xmm3 = 1f / xmm0_3
int32_t* result = arg1
float var_30
float var_20
*result =
    fconvert.s(__fpatan(fconvert.t(xmm3 * var_20), fconvert.t(xmm3 * var_30))) * 180f * 0.318309873f
result[1] = var_8 * 180f * 0.318309873f
float var_44
result[2] =
    fconvert.s(__fpatan(fconvert.t(xmm3 * var_48), fconvert.t(xmm3 * var_44))) * 180f * 0.318309873f
return result
