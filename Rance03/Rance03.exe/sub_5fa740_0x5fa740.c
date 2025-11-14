// 函数: sub_5fa740
// 地址: 0x5fa740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_100
EnumC13Lines::EnumC13Lines(&var_100)
void var_80
EnumC13Lines::EnumC13Lines(&var_80)
void var_40
EnumC13Lines::EnumC13Lines(&var_40)
int128_t var_c0
EnumC13Lines::EnumC13Lines(&var_c0)
sub_47b3d0(&var_100)
__builtin_memcpy(&var_c0, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x
        00", 
    0x30)
int32_t var_84 = 0x3f800000
int32_t var_90 = *arg3
int32_t var_8c = arg3[1]
int32_t var_88 = arg3[2]
sub_47b7f0(&var_80, arg1)
sub_47b8b0(&var_40, arg4)
int128_t* ecx_7 = &var_100
sub_47b440(ecx_7, &var_80)
sub_47b440(ecx_7, &var_40)
sub_47b440(ecx_7, &var_c0)
float xmm1_2 = arg2[1]
float xmm5 = *arg2
float xmm2 = arg2[2]
float var_f0
float var_e0
float var_d0
float xmm6_4 = xmm5 * var_100 + xmm1_2 * var_f0 + xmm2 * var_e0 + var_d0
float var_fc
float var_ec
float var_dc
float var_cc
float xmm7_4 = xmm5 * var_fc + xmm1_2 * var_ec + xmm2 * var_dc + var_cc
float var_10c = xmm6_4
float var_108 = xmm7_4
float var_f8
float var_e8
float var_d8
float var_c8
float xmm4_4 = xmm5 * var_f8 + xmm1_2 * var_e8 + xmm2 * var_d8 + var_c8
float var_f4
float var_e4
float var_d4
float var_c4
float xmm5_4 = xmm5 * var_f4 + xmm1_2 * var_e4 + xmm2 * var_d4 + var_c4
float var_104 = xmm4_4
xmm5_4 - 1f
int128_t* eax_1
eax_1:1.b =
    (xmm5_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm5_4, 1f) ? 1 : 0) << 2 | (xmm5_4 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm5_4 f- 0
    eax_1:1.b = (xmm5_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_4, 0f) ? 1 : 0) << 2
        | (xmm5_4 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm1_4 = 1f / xmm5_4
        var_104 = xmm4_4 * xmm1_4
        var_10c = xmm1_4 * xmm6_4
        float var_108_1 = xmm1_4 * xmm7_4

*(arg2 + 0xc) = var_10c.q
arg2[5] = var_104
float xmm4_6 = arg2[9]
float xmm1_5 = arg2[8]
float xmm2_2 = arg2[0xa]
float xmm6_9 = xmm4_6 * var_f0 + xmm1_5 * var_100 + xmm2_2 * var_e0 + var_d0
float xmm7_9 = xmm4_6 * var_ec + xmm1_5 * var_fc + xmm2_2 * var_dc + var_cc
float var_10c_1 = xmm6_9
float var_108_2 = xmm7_9
float xmm4_10 = xmm4_6 * var_e4 + xmm1_5 * var_f4 + xmm2_2 * var_d4 + var_c4
float xmm5_9 = xmm4_6 * var_e8 + xmm1_5 * var_f8 + xmm2_2 * var_d8 + var_c8
xmm4_10 - 1f
float var_104_1 = xmm5_9
float eax_2
eax_2:1.b = (xmm4_10 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm4_10, 1f) ? 1 : 0) << 2
    | (xmm4_10 < 1f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (p_5)
    xmm4_10 f- 0
    eax_2:1.b = (xmm4_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_10, 0f) ? 1 : 0) << 2
        | (xmm4_10 < 0f ? 1 : 0)
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (p_7)
        float xmm1_7 = 1f / xmm4_10
        var_104_1 = xmm5_9 * xmm1_7
        var_10c_1 = xmm1_7 * xmm6_9
        float var_108_3 = xmm1_7 * xmm7_9

*(arg2 + 0x2c) = var_10c_1.q
arg2[0xd] = var_104_1
float xmm4_11 = arg2[0x11]
float xmm1_8 = arg2[0x10]
float xmm2_4 = arg2[0x12]
float xmm6_14 = xmm4_11 * var_f0 + xmm1_8 * var_100 + xmm2_4 * var_e0 + var_d0
float xmm7_14 = xmm4_11 * var_ec + xmm1_8 * var_fc + xmm2_4 * var_dc + var_cc
float var_10c_2 = xmm6_14
float var_108_4 = xmm7_14
float xmm4_15 = xmm4_11 * var_e4 + xmm1_8 * var_f4 + xmm2_4 * var_d4 + var_c4
float result_1 = xmm4_11 * var_e8 + xmm1_8 * var_f8 + xmm2_4 * var_d8 + var_c8
xmm4_15 - 1f
float result = result_1
float eax_3
eax_3:1.b = (xmm4_15 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm4_15, 1f) ? 1 : 0) << 2
    | (xmm4_15 < 1f ? 1 : 0)
bool p_9 = unimplemented  {test ah, 0x44}

if (p_9)
    xmm4_15 f- 0
    eax_3:1.b = (xmm4_15 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_15, 0f) ? 1 : 0) << 2
        | (xmm4_15 < 0f ? 1 : 0)
    bool p_11 = unimplemented  {test ah, 0x44}
    
    if (p_11)
        float xmm3 = 1f / xmm4_15
        result = result_1 * xmm3
        var_10c_2 = xmm3 * xmm6_14
        float var_108_5 = xmm3 * xmm7_14

*(arg2 + 0x4c) = var_10c_2.q
arg2[0x15] = result
return result
