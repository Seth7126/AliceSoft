// 函数: sub_4c8760
// 地址: 0x4c8760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0
int32_t var_4 = 0
sub_4c7450(arg1, &arg1[0x2e], &var_8, &var_4)
void* eax_1 = sub_4a3ac0(arg1[0x25])
int32_t esi = *(sub_4a3b70(arg1[0x26]) + 0x100)
*arg2 = sub_4c8b60(arg1) + _mm_cvtepi32_ps(zx.o(arg1[0x28])) - _mm_cvtepi32_ps(zx.o(esi))
    + _mm_cvtepi32_ps(zx.o(var_8))
*arg3 = sub_4c8c20(arg1) + _mm_cvtepi32_ps(zx.o(arg1[0x28]))
    - _mm_cvtepi32_ps(zx.o(*(eax_1 + 0x100))) + _mm_cvtepi32_ps(zx.o(var_4))
return arg3
