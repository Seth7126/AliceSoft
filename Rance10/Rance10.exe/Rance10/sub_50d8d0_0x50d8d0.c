// 函数: sub_50d8d0
// 地址: 0x50d8d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_1c
float var_18
sub_50f4c0(arg1, &var_1c, &var_18)
float xmm1_1 = sub_50f870(arg1) + var_1c
var_1c = xmm1_1
float xmm0_2 = sub_50f8e0(arg1) + var_18
int32_t esi = *(arg1 + 0x128)
int32_t ebx = esi

if ((ebx.b & 1) != 0)
    ebx += 1

int32_t eax = int.d(sub_4a78b0(*(arg1 + 0x140)))
int32_t ebp = esi

if (eax s< esi)
    ebp = eax

int32_t eax_1 = int.d(sub_4a78b0(*(arg1 + 0x13c)))

if (eax_1 s< esi)
    esi = eax_1

float var_14
float var_8
float var_4
sub_50faf0(arg1, &var_4, &var_8, &var_14, &var_18)

if (var_1c <= var_18 && not(var_14 > xmm1_1 + 1f) && not(xmm0_2 >= var_8))
    if (esi s< ebp)
        esi = ebp
    
    float xmm1_4 = _mm_cvtepi32_ps(zx.o(ebx + (esi << 1))) + xmm0_2
    
    if (not(var_4 >= xmm1_4))
        int32_t eax_7
        eax_7.b = arg2 s% 0x3e8 s< 0x1f4
        return eax_7

float* eax_2
eax_2.b = 0
return eax_2
