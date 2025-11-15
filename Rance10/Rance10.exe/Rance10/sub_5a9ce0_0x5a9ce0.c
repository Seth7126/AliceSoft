// 函数: sub_5a9ce0
// 地址: 0x5a9ce0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg3 + 0xd0) != 1)
    return 

int32_t* ecx

if ((*(arg3 + 0x29c) - *(arg3 + 0x298)) s/ 0x1c s> 0)
    ecx = **(arg3 + 0x298)
else
    ecx = nullptr

if (ecx != int.d(arg4))
    return 

float xmm3_1 = *(arg3 + 0xd8)
float xmm4_1 = *(arg3 + 0xd4)
float xmm5_1 = *(arg3 + 0xdc)
float xmm0_5 = sub_484cc0(xmm4_1 * xmm4_1 + xmm3_1 * xmm3_1 + xmm5_1 * xmm5_1)
xmm0_5 f- 0
arg1:1.b =
    (xmm0_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2 | (xmm0_5 < 0f ? 1 : 0)
bool p_2 = unimplemented  {test ah, 0x44}
int64_t var_270
float xmm3_2
float xmm4_2
int32_t xmm5_2

if (not(p_2))
    arg1 = *(arg3 + 0xdc)
    var_270 = *(arg3 + 0xd4)
    xmm3_2 = var_270:4.d
    xmm4_2 = var_270.d
    xmm5_2 = arg1
else
    float xmm0_6 = 1f / xmm0_5
    xmm4_2 = xmm4_1 * xmm0_6
    xmm3_2 = xmm3_1 * xmm0_6
    xmm5_2 = xmm5_1 * xmm0_6

float xmm0_9 = xmm4_2 f* data_7e70e0
float xmm2_1 = xmm3_2 f* data_7e70e4
float xmm1_7 = xmm5_2 f* data_7e70e8
float xmm0_14 = sub_484cc0(xmm0_9 + xmm0_9 + xmm2_1 + xmm2_1 + xmm1_7 + xmm1_7 + 2f)
xmm0_14 f- 0
arg1:1.b = (xmm0_14 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_14, 0f) ? 1 : 0) << 2
    | (xmm0_14 < 0f ? 1 : 0)
bool p_4 = unimplemented  {test ah, 0x44}
float var_260

if (p_4)
    float xmm0_18 = 1f / xmm0_14
    float var_254_1 = xmm0_14 * 0.5f
    float xmm1_12 = (xmm4_2 f* data_7e70e8 - xmm5_2 f* data_7e70e0) * xmm0_18
    float xmm3_5 = (xmm3_2 f* data_7e70e0 - xmm4_2 f* data_7e70e4) * xmm0_18
    var_260 = (xmm5_2 f* data_7e70e4 - xmm3_2 f* data_7e70e8) * xmm0_18
    float var_25c_1 = xmm1_12
    float var_258_1 = xmm3_5
else
    var_260.o = data_79a970[0x10][0].o

int32_t* var_27c_1 = &var_260
sub_58aa90(arg2, arg5, ecx)
float xmm1_13 = *(arg3 + 0xe0)

if (xmm1_13 <= 0f || 90f <= xmm1_13)
    return 

var_270.d = 0
var_270:4.d = 0x3f800000
int32_t var_268_2 = 0
void var_208
sub_6cadd0(&var_208, &var_270)
int32_t xmm0_20 = sub_48ca30()
int32_t xmm0_22 = sub_484cb0()
int32_t var_244_1 = xmm0_22
int32_t var_238_1 = xmm0_22 ^ (data_79aad0).d
int128_t var_230_1 = zx.o(0)
int32_t var_240_1 = 0
int128_t var_220_1 = data_79a7a0
int32_t var_23c_1 = 0
int32_t xmm0_25 = *(arg3 + 0xe4)
int32_t var_248 = xmm0_20
int32_t var_234_1 = xmm0_20
int32_t var_210_1 = 0
int32_t var_20c_1 = 0x3f800000
var_270.d = 0x3f800000
var_270:4.d = 0x3f800000
int32_t var_268_3 = xmm0_25
void var_1c8
int32_t* eax_5 = sub_6cadd0(&var_1c8, arg5)
float var_188[0x10]
int128_t* eax_6 = sub_6cbac0(&var_260, &var_188)
float var_148[0x10]
float* eax_8 = sub_6cbac0(sub_6cb8c0(&var_248, &var_260), &var_148)
void var_108
int32_t* eax_9 = sub_6cae40(&var_108, &var_270)
float var_c8[0x4][0x4]
float (* eax_10)[0x4] = sub_6cb020(eax_9, eax_9, &var_c8, eax_8)
float var_88[0x4][0x4]
float (* eax_11)[0x4] = sub_6cb020(eax_10, eax_10, &var_88, &var_208)
float var_48[0x4][0x4]
int128_t* eax_12 = sub_6cb020(eax_11, eax_11, &var_48, eax_6)
sub_6cb020(eax_12, eax_12, &var_208, eax_5)
var_260.o = data_79aa20
var_270.d = 0
var_270:4.d = 0
int32_t var_268_4 = 0
sub_58b0c0(arg2, sub_4a78e0(), 1f, &var_270, &var_260, &var_208)
