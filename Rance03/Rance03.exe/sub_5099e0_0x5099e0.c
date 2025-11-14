// 函数: sub_5099e0
// 地址: 0x5099e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx_2 = int.d(arg1)
float xmm0_1 = _mm_cvtepi32_ps(zx.o(ecx_2))
xmm0_1 - arg1
int32_t result
result:1.b = (xmm0_1 == arg1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, arg1) ? 1 : 0) << 2
    | (xmm0_1 < arg1 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    if (ecx_2 s>= 0)
        if (ecx_2 == ecx_2 s/ 0x168 * 0x168)
            result.b = 0
            return result
    else if (mods.dp.d(sx.q(neg.d(ecx_2)), 0x168) == 0)
        result.b = 0
        return result

result.b = 1
return result
