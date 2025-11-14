// 函数: sub_51e3b0
// 地址: 0x51e3b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    EnumC13Lines::EnumC13Lines(arg3)
    return arg3

float xmm1 = *(arg2 + 0x90)
float xmm3_1 = *(arg2 + 0xa4) * arg4
float xmm2_2 = (*(arg2 + 0xa8) * arg5) ^ (data_7094c0).d
float xmm4_4 =
    *(arg2 + 0x54) * xmm2_2 + *(arg2 + 0x44) * xmm3_1 + *(arg2 + 0x64) * xmm1 f+ *(arg2 + 0x74)
float var_8 = xmm4_4
float xmm5_4 =
    *(arg2 + 0x48) * xmm3_1 + *(arg2 + 0x58) * xmm2_2 + *(arg2 + 0x68) * xmm1 f+ *(arg2 + 0x78)
float var_4 = xmm5_4
float xmm6_4 =
    *(arg2 + 0x50) * xmm3_1 + *(arg2 + 0x60) * xmm2_2 + *(arg2 + 0x70) * xmm1 f+ *(arg2 + 0x80)
xmm6_4 - 1f
arg1:1.b =
    (xmm6_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm6_4, 1f) ? 1 : 0) << 2 | (xmm6_4 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm6_4 f- 0
    arg1:1.b = (xmm6_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6_4, 0f) ? 1 : 0) << 2
        | (xmm6_4 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm1_1 = 1f / xmm6_4
        var_4 = xmm1_1 * xmm5_4
        var_8 = xmm1_1 * xmm4_4

int128_t var_48
sub_48d630(&var_48, arg6, arg7)
arg9 f- 0
int32_t* eax_1
eax_1:1.b =
    (arg9 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg9, 0f) ? 1 : 0) << 2 | (arg9 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}
void var_88

if (p_5)
    void* ecx_1 = &var_88
    EnumC13Lines::EnumC13Lines(ecx_1)
    sub_47b7f0(ecx_1, arg9 ^ (data_7094c0).d)
    sub_47b440(&var_48, &var_88)

arg8 f- 0
eax_1:1.b =
    (arg8 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg8, 0f) ? 1 : 0) << 2 | (arg8 < 0f ? 1 : 0)
bool p_7 = unimplemented  {test ah, 0x44}

if (p_7)
    void* ecx_3 = &var_88
    EnumC13Lines::EnumC13Lines(ecx_3)
    sub_47b8b0(ecx_3, arg8 ^ (data_7094c0).d)
    sub_47b440(&var_48, &var_88)

arg10 f- 0
eax_1:1.b =
    (arg10 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg10, 0f) ? 1 : 0) << 2 | (arg10 < 0f ? 1 : 0)
bool p_9 = unimplemented  {test ah, 0x44}

if (p_9)
    void* ecx_5 = &var_88
    EnumC13Lines::EnumC13Lines(ecx_5)
    sub_47b960(ecx_5, arg10 ^ (data_7094c0).d)
    sub_47b440(&var_48, &var_88)

float var_14 = var_4
*arg3 = var_48
int128_t var_38
*(arg3 + 0x10) = var_38
int128_t var_28
*(arg3 + 0x20) = var_28
*(arg3 + 0x30) = var_8.o
return arg3
