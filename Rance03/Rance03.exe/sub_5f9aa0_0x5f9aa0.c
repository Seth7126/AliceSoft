// 函数: sub_5f9aa0
// 地址: 0x5f9aa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

(*(*arg1 + 8))()
arg1[1] = arg3
arg1[2] = arg4
arg1[5] = 0x3f800000
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
int80_t x87_r0
float xmm1 = 1f / ___libm_sse2_tanf(0x3ec90fdb, x87_r0)
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0x3f8020cd
arg1[0x10] = 0x3f800000
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x13] = 0xbf8020cd
arg1[0x14] = 0
arg1[0xa] = xmm1
arg1[3] = 0x3f800000
arg1[4] = 0x447a0000
void var_48
int32_t* eax_3 = sub_47ba10(&arg1[5], &var_48)
float xmm4_3 = eax_3[4] f- *eax_3 * 1f + eax_3[8] f* 0.999000013f f+ eax_3[0xc]
float xmm5_3 = eax_3[5] f- eax_3[1] f* 1f + eax_3[9] f* 0.999000013f f+ eax_3[0xd]
float var_58 = xmm5_3
float xmm6_3 = eax_3[6] f- eax_3[2] f* 1f + eax_3[0xa] f* 0.999000013f f+ eax_3[0xe]
float xmm3_3 = eax_3[7] f- eax_3[3] f* 1f + eax_3[0xb] f* 0.999000013f f+ eax_3[0xf]
xmm3_3 - 1f
eax_3:1.b =
    (xmm3_3 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm3_3, 1f) ? 1 : 0) << 2 | (xmm3_3 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm3_3 f- 0
    eax_3:1.b = (xmm3_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_3, 0f) ? 1 : 0) << 2
        | (xmm3_3 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm2_1 = 1f / xmm3_3
        xmm4_3 = xmm2_1 * xmm4_3
        xmm5_3 = xmm2_1 * xmm5_3
        var_58 = xmm5_3
        xmm6_3 = xmm2_1 * xmm6_3

arg1[0x18] = xmm6_3
float xmm4_4 = xmm4_3 ^ 0x80000000
float xmm2_4 = xmm5_3 ^ 0x80000000
float xmm1_2 = xmm4_4 ^ 0x80000000
sub_5f9f60(xmm1_2, xmm5_3, &arg1[0x15], 0f, 0f, xmm4_4, xmm5_3, 1f, 0f, xmm1_2, xmm2_4, 0f, 1f, 3)
sub_5f9f60(xmm4_4, var_58, &arg1[0x15], 1f, 0f, xmm4_4, xmm2_4, 1f, 1f, xmm1_2, xmm2_4, 0f, 1f, 3)
int32_t* result = (*(*arg2 + 0x54))()
arg1[0x1a] = result

if (result != 0 && sub_5fab70(arg1).b != 0 && sub_5fac40(arg1, (*(*arg2 + 0x9c))()).b != 0)
    result = (*(*arg2 + 0x54))()
    arg1[0x19] = result
    
    if (result != 0 && sub_5fade0(arg1).b != 0)
        result.b = 1
        return result

result.b = 0
return result
