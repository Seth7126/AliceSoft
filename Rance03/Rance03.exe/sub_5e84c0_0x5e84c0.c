// 函数: sub_5e84c0
// 地址: 0x5e84c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 0
int32_t var_8 = 0
int32_t ecx_1 = sub_5ea350(arg1 + 0x9c, 0, 0, &var_4, &var_8)
int32_t eax = *(arg1 + 0xb8)
float xmm3 = 1f
float xmm1

if (eax s> 0)
    xmm1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xd0))) / _mm_cvtepi32_ps(zx.o(eax))
else
    xmm1 = 1f

int32_t eax_1 = *(arg1 + 0xb4)

if (eax_1 s> 0)
    xmm3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xcc))) / _mm_cvtepi32_ps(zx.o(eax_1))

int32_t var_10_1 = ecx_1
return sub_5e22f0(arg1 + 0x124, xmm3, var_4, var_8, xmm1)
