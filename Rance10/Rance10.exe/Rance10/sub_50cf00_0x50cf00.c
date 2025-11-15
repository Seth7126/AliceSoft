// 函数: sub_50cf00
// 地址: 0x50cf00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm2
float var_c = xmm2
float var_18
float var_10
sub_50f4c0(arg1, &var_18, &var_10)
float xmm0_1 = var_18 + arg2
var_18 = var_10 + var_c
float var_8
float var_4
sub_50faf0(arg1, &var_c, &var_10, &var_4, &var_8)
int32_t edi = *(arg1 + 0x128)
int32_t ebx = edi
var_c = _mm_max_ss(var_c - var_18, 0)

if ((ebx.b & 1) != 0)
    ebx += 1

int32_t eax = int.d(sub_4a78b0(*(arg1 + 0x140)))
int32_t esi = edi

if (eax s< edi)
    esi = eax

int32_t eax_1 = int.d(sub_4a78b0(*(arg1 + 0x13c)))

if (eax_1 s< edi)
    edi = eax_1

if (edi s< esi)
    edi = esi

int32_t edi_1 = *(arg1 + 0x128)
int32_t ebx_1 = edi_1
var_10 = _mm_max_ss(_mm_cvtepi32_ps(zx.o(ebx + (edi << 1))) + var_18 - var_10, 0)

if ((ebx_1.b & 1) != 0)
    ebx_1 += 1

int32_t eax_3 = int.d(sub_4a78b0(*(arg1 + 0x140)))
int32_t esi_1 = edi_1

if (eax_3 s< edi_1)
    esi_1 = eax_3

int32_t eax_4 = int.d(sub_4a78b0(*(arg1 + 0x13c)))
float xmm0_20 = var_c
float xmm0_21 = xmm0_20 + var_18

if (eax_4 s< edi_1)
    edi_1 = eax_4

if (edi_1 s< esi_1)
    edi_1 = esi_1

int32_t edi_3 = edi_1 * 2 - int.d(var_10 + xmm0_20)
void* eax_6 = *(arg1 + 0xa8)
*(eax_6 + 0x90) = xmm0_1
*(eax_6 + 0x94) = xmm0_21
void* esi_2 = *(sub_4efcc0(*(arg1 + 0xa8)) + 0x44)
sub_555e00(esi_2, 0x18, 1)
void* result = *(esi_2 + 0x80)

if (edi_3 + ebx_1 s>= 0)
    *(result + 0x90) = 0
    *(result + 0x94) = 0
    *(result + 0x9c) = 1
    *(result + 0xa0) = edi_3 + ebx_1
    *(result + 0xa4) = 1

return result
