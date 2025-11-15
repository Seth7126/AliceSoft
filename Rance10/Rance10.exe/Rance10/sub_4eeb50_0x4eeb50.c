// 函数: sub_4eeb50
// 地址: 0x4eeb50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = *(arg1 + 0x120)

if (edi == 0)
    *(arg1 + 0xb4) = 0x3f800000
    return 

int32_t var_14_1 = edi
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** eax =
    sub_4f15e0(*(arg1 + 0x78))

if (eax == 0)
    *(arg1 + 0xb4) = 0x3f800000
    return 

int32_t edx_1 = eax[2]

if (edi s< edx_1 || eax[1] + edx_1 s<= edi)
    *(arg1 + 0xb4) = 0x3f800000
    return 

eax.b = eax[3][edi - eax[2]] != 0

if (eax.b == 0)
    *(arg1 + 0xb4) = 0x3f800000
    return 

*(arg1 + 0x78)
eax = sub_4f1840(edi)

if (eax == 0)
    return 

char eax_3 = (*(eax[0x1d]->vFunc_0 + 0x48))()
float arg_4
int128_t xmm2_2 = _mm_cvtepi32_ps(zx.o(arg_4)) / _mm_cvtepi32_ps(zx.o(*(arg1 + 0x44)))

if (eax_3 == 0)
    xmm2_2 ^= data_79aad0

float xmm2_3 = xmm2_2 f+ *(arg1 + 0xb4)
float* ecx_5 = &arg_4
float var_4 = 1f
int32_t var_8 = 0
arg_4 = xmm2_3

if (1f <= xmm2_3)
    ecx_5 = &var_4

int32_t* eax_4 = &var_8

if (*ecx_5 f> 0)
    eax_4 = ecx_5

*(arg1 + 0xb4) = *eax_4
