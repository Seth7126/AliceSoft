// 函数: sub_473ee0
// 地址: 0x473ee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm0_1 = _mm_cvtepi32_ps(zx.o(arg3))
int32_t var_10 = arg2
void* result = sub_477f50(arg1 + 8, &var_10)
*(result + 4) = xmm0_1 * 0.00999999978f
void* ecx_1 = *(arg1 + 0x14)

if (ecx_1 == 0)
    return result

return sub_474070(ecx_1, sub_474040, arg1)
