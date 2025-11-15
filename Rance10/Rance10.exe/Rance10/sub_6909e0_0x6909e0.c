// 函数: sub_6909e0
// 地址: 0x6909e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

(*(*arg12 + 0x68))(8)
float var_14 = fconvert.s(arg4)
(*(*arg12 + 0x68))(9)
float var_10 = fconvert.s(arg5)
(*(*arg12 + 0x68))(0xa)
float var_c = fconvert.s(arg6)
float xmm0_4 = sub_484cc0(var_14 * var_14 + var_10 * var_10 + var_c * var_c)
xmm0_4 f- 0
int32_t eax_6
eax_6:1.b =
    (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2 | (xmm0_4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float xmm2_1
float xmm3_1
float xmm4_1

if (not(p_1))
    int64_t xmm0_5 = var_14.q
    xmm4_1 = xmm0_5:4.d
    xmm2_1 = xmm0_5.d
    xmm3_1 = var_c
else
    float xmm1_4 = 1f / xmm0_4
    xmm2_1 = var_14 * xmm1_4
    xmm4_1 = xmm1_4 * var_10
    xmm3_1 = var_c * xmm1_4

int32_t esi_1 = *arg2
*(arg3 + (esi_1 << 2)) = xmm2_1 ^ 0x80000000
*(arg3 + (esi_1 << 2) + 4) = xmm4_1 ^ 0x80000000
*(arg3 + (esi_1 << 2) + 8) = xmm3_1 ^ 0x80000000
*(arg3 + (esi_1 << 2) + 0xc) = 0
*arg2 = esi_1 + 5
(*(*arg12 + 0x68))(0xb)
*(arg3 + (esi_1 << 2) + 0x10) = fconvert.s(arg7)
int32_t esi_2 = *arg2
*arg2 = esi_2 + 1
(*(*arg12 + 0x68))(0xc)
*(arg3 + (esi_2 << 2)) = fconvert.s(arg8)
int32_t esi_3 = *arg2
*arg2 = esi_3 + 1
(*(*arg12 + 0x68))(0xd)
*(arg3 + (esi_3 << 2)) = fconvert.s(arg9)
int32_t esi_4 = *arg2
*(arg3 + (esi_4 << 2)) = 0
*arg2 = esi_4 + 2
(*(*arg12 + 0x68))(0xe)
*(arg3 + (esi_4 << 2) + 4) = fconvert.s(arg10)
int32_t esi_5 = *arg2
*arg2 = esi_5 + 1
(*(*arg12 + 0x68))(0xf)
*(arg3 + (esi_5 << 2)) = fconvert.s(arg11)
int32_t esi_6 = *arg2
*arg2 = esi_6 + 1
(*(*arg12 + 0x68))(0x10)
*(arg3 + (esi_6 << 2)) = fconvert.s(arg4)
int32_t esi_7 = *arg2
*(arg3 + (esi_7 << 2)) = 0
*arg2 = esi_7 + 2
(*(*arg12 + 0x68))(0x11)
*(arg3 + (esi_7 << 2) + 4) = fconvert.s(arg5)
int32_t esi_8 = *arg2
*arg2 = esi_8 + 1
(*(*arg12 + 0x68))(0x12)
*(arg3 + (esi_8 << 2)) = fconvert.s(arg6)
int32_t esi_9 = *arg2
*arg2 = esi_9 + 1
(*(*arg12 + 0x68))(0x13)
int32_t ecx_20 = *arg2
*(arg3 + (esi_9 << 2)) = fconvert.s(arg7)
*(arg3 + (ecx_20 << 2)) = 0
*arg2 = ecx_20 + 1
return ecx_20 + 1
