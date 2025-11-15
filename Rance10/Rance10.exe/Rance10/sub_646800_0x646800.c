// 函数: sub_646800
// 地址: 0x646800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

(*(*arg1 + 8))()
arg1[3] = arg3
arg1[4] = arg4
arg1[0x13] = 0x3f800000
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x17] = 0
float xmm1 = 1f / sub_4a78e0()
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
arg1[0x1d] = 0x3f8020cd
arg1[0x1e] = 0x3f800000
arg1[0x1f] = 0
arg1[0x20] = 0
arg1[0x21] = 0xbf8020cd
arg1[0x22] = 0
arg1[0x18] = xmm1
arg1[0x11] = 0x3f800000
arg1[0x12] = 0x447a0000
void var_48
int32_t* eax_3 = sub_6cb130(&arg1[0x13], &var_48)
float xmm3_3 = eax_3[4] f- *eax_3 * 1f + eax_3[8] f* 0.999000013f f+ eax_3[0xc]
float xmm5_3 = eax_3[5] f- eax_3[1] f* 1f + eax_3[9] f* 0.999000013f f+ eax_3[0xd]
float var_58 = xmm5_3
float xmm6_3 = eax_3[6] f- eax_3[2] f* 1f + eax_3[0xa] f* 0.999000013f f+ eax_3[0xe]
float xmm4_3 = eax_3[7] f- eax_3[3] f* 1f + eax_3[0xb] f* 0.999000013f f+ eax_3[0xf]
xmm4_3 - 1f
eax_3:1.b =
    (xmm4_3 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm4_3, 1f) ? 1 : 0) << 2 | (xmm4_3 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm4_3 f- 0
    eax_3:1.b = (xmm4_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_3, 0f) ? 1 : 0) << 2
        | (xmm4_3 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm2_1 = 1f / xmm4_3
        xmm6_3 = xmm6_3 * xmm2_1
        xmm5_3 = xmm5_3 * xmm2_1
        xmm3_3 = xmm3_3 * xmm2_1
        var_58 = xmm5_3

arg1[0x26] = xmm6_3
float xmm3_4 = xmm3_3 ^ 0x80000000
float xmm2_3 = xmm5_3 ^ 0x80000000
float xmm1_2 = xmm3_4 ^ 0x80000000
sub_646c40(xmm1_2, xmm5_3, &arg1[0x23], 0f, 0f, xmm3_4, xmm5_3, 1f, 0f, xmm1_2, xmm2_3, 0f, 1f, 3)
int32_t var_64_1 = sub_646c40(xmm3_4, var_58, &arg1[0x23], 1f, 0f, xmm3_4, xmm2_3, 1f, 1f, xmm1_2, 
    xmm2_3, 0f, 1f, 3)

if (sub_649ee0(&arg1[5], arg2, 4) != 0 && sub_6474f0(arg1) != 0)
    return sub_6475e0(arg1, arg2) != 0

return 0
