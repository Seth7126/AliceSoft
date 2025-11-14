// 函数: sub_4d30d0
// 地址: 0x4d30d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg4
int32_t var_8 = arg3
int32_t var_c = arg2
void* ecx
sub_4d32b0(ecx, arg1)
int32_t var_4 = arg4
float xmm3_1 = _mm_cvtepi32_ps(zx.o(arg3))
float xmm2_1 = _mm_cvtepi32_ps(zx.o(arg2))
return sub_4d3c20(xmm2_1 * 0.200000003f + 1f, xmm3_1 * 0.200000003f + 1f, arg1, 
    xmm2_1 * 0.600000024f, xmm3_1 * 0.600000024f)
