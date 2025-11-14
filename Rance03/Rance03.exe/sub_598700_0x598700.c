// 函数: sub_598700
// 地址: 0x598700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct sealengine::CDualQuaternion::VTable* var_68
float var_44[0x11]
float* eax_1 = sub_535d80(sub_52c960(arg1 + 4, &var_68, arg3), &var_44)
float xmm4_4 = (eax_1[7] + eax_1[3] + eax_1[0xb]) * 0f + eax_1[0xf]
float xmm1_4 = (eax_1[4] + *eax_1 + eax_1[8]) * 0f + eax_1[0xc]
float xmm2_4 = (eax_1[5] + eax_1[1] + eax_1[9]) * 0f + eax_1[0xd]
xmm4_4 - 1f
float xmm3_4 = (eax_1[6] + eax_1[2] + eax_1[0xa]) * 0f + eax_1[0xe]
*arg2 = xmm1_4
eax_1:1.b =
    (xmm4_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm4_4, 1f) ? 1 : 0) << 2 | (xmm4_4 < 1f ? 1 : 0)
arg2[1] = xmm2_4
arg2[2] = xmm3_4
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    return arg2

xmm4_4 f- 0
bool p_2 = unimplemented  {test ah, 0x44}

if (not(p_2))
    return arg2

float xmm0 = 1f / xmm4_4
*arg2 = xmm1_4 * xmm0
arg2[1] = xmm2_4 * xmm0
arg2[2] = xmm3_4 * xmm0
return arg2
