// 函数: sub_690050
// 地址: 0x690050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg12
(*(*edi + 0x68))(0x17)
arg12 = fconvert.s(arg4)
float xmm0 = (zx.o(0)).d
arg12 f- 0
int32_t eax_2
eax_2:1.b =
    (arg12 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg12, 0f) ? 1 : 0) << 2 | (arg12 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm0 = 1f / arg12

(*(*edi + 0x68))(0x18)
float var_38 = fconvert.s(arg5)
(*(*edi + 0x68))(0x19)
float var_34 = fconvert.s(arg6)
(*(*edi + 0x68))(0x1a)
float var_30 = fconvert.s(arg7)
float xmm0_5 = sub_484cc0(var_38 * var_38 + var_34 * var_34 + var_30 * var_30)
xmm0_5 - 0f
int32_t eax_9
eax_9:1.b =
    (xmm0_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2 | (xmm0_5 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
float var_14
float var_10
float var_c

if (not(p_3))
    int64_t xmm0_10 = var_38.q
    var_14 = var_30
    var_10 = xmm0_10:4.d
    var_c = xmm0_10.d
else
    float xmm1_5 = 1f / xmm0_5
    var_14 = var_30 * xmm1_5
    var_c = xmm1_5 * var_38
    var_10 = xmm1_5 * var_34

(*(*edi + 0x68))(0x16)
float var_1c = fconvert.s(arg8)
(*(*edi + 0x68))(0x14)
float var_18 = fconvert.s(arg9)
(*(*edi + 0x68))(0x15)
float var_20 = fconvert.s(arg10)
float xmm0_21 = 1f - var_1c
float xmm4_2 = var_20 + var_18
xmm4_2 f- 0
int32_t eax_17
eax_17:1.b =
    (xmm4_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_2, 0f) ? 1 : 0) << 2 | (xmm4_2 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}
float var_18_1

if (not(p_5))
    var_18_1 = 0f
else
    var_18_1 = 1f / xmm4_2

int32_t esi_1 = *arg2
*arg2 = esi_1 + 1
(*(*edi + 0x68))(0x1b)
*(arg3 + (esi_1 << 2)) = fconvert.s(arg11)
int32_t esi_2 = *arg2
*arg2 = esi_2 + 1
(*(*edi + 0x68))(0x1c)
*(arg3 + (esi_2 << 2)) = fconvert.s(arg4)
int32_t esi_3 = *arg2
*arg2 = esi_3 + 1
(*(*edi + 0x68))(0x1d)
*(arg3 + (esi_3 << 2)) = fconvert.s(arg5)
int32_t esi_4 = *arg2
*(arg3 + (esi_4 << 2)) = 0
*arg2 = esi_4 + 2
(*(*edi + 0x68))(0x1e)
*(arg3 + (esi_4 << 2) + 4) = fconvert.s(arg6)
int32_t esi_5 = *arg2
*arg2 = esi_5 + 1
(*(*edi + 0x68))(0x1f)
*(arg3 + (esi_5 << 2)) = fconvert.s(arg7)
int32_t esi_6 = *arg2
*arg2 = esi_6 + 1
(*(*edi + 0x68))(0x20)
*(arg3 + (esi_6 << 2)) = fconvert.s(arg8)
int32_t esi_7 = *arg2
*(arg3 + (esi_7 << 2)) = 0
*arg2 = esi_7 + 2
(*(*edi + 0x68))(0x14)
*(arg3 + (esi_7 << 2) + 4) = fconvert.s(arg9)
int32_t esi_8 = *arg2
*arg2 = esi_8 + 1
(*(*edi + 0x68))(0x15)
*(arg3 + (esi_8 << 2)) = fconvert.s(arg10)
int32_t esi_9 = *arg2
*arg2 = esi_9 + 1
(*(*edi + 0x68))(0x16)
*(arg3 + (esi_9 << 2)) = fconvert.s(arg11)
int32_t ecx_25 = *arg2
*(arg3 + (ecx_25 << 2)) = xmm0
*(arg3 + (ecx_25 << 2) + 4) = var_c
*(arg3 + (ecx_25 << 2) + 8) = var_10
*(arg3 + (ecx_25 << 2) + 0xc) = var_14
*(arg3 + (ecx_25 << 2) + 0x10) = 0
*(arg3 + (ecx_25 << 2) + 0x14) = var_18 * 0.589048624f
*(arg3 + (ecx_25 << 2) + 0x18) = var_1c * -2f
*(arg3 + (ecx_25 << 2) + 0x1c) = var_1c * var_1c + 1f
*(arg3 + (ecx_25 << 2) + 0x20) = xmm0_21 * var_20 * 0.785398185f * xmm0_21
int32_t xmm0_31 = xmm4_2 ^ (data_79aad0).d
*(arg3 + (ecx_25 << 2) + 0x24) = var_18_1
*(arg3 + (ecx_25 << 2) + 0x28) = xmm0_31
*(arg3 + (ecx_25 << 2) + 0x2c) = 0
*arg2 = ecx_25 + 0xd
*(arg3 + (ecx_25 << 2) + 0x30) = 0
return ecx_25 + 0xd
