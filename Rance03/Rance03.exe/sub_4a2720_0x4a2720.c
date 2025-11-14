// 函数: sub_4a2720
// 地址: 0x4a2720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_2 = arg1
float xmm0 = *(arg1 + 0x94)
float xmm0_1 = sub_4a4200(arg1, *(arg1 + 0xe8))
int32_t eax_2 = *(*(*(arg1 + 0x50) + 0x58) + 0x90)
int32_t eax_3

if (eax_2 s> 0)
    int32_t var_c_1 = eax_2
    eax_3 = sub_4a56f0(*(arg1 + 0x54))

int32_t eax_4

if (eax_2 s<= 0 || eax_3 == 0)
    eax_4 = 0xff
else
    eax_4 = sub_4a2720()

return int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x90))) * xmm0_1 * xmm0) * eax_4 s/ 0xff
