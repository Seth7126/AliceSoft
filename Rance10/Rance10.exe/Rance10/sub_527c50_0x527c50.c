// 函数: sub_527c50
// 地址: 0x527c50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg5 s<= 0 || arg6 s<= 0)
    arg1.b = 0
    return arg1

int32_t esi = *(arg4 + 0x7c)
float xmm0_1 = _mm_cvtepi32_ps(zx.o(sub_555b20(esi, arg5)))
int32_t eax_2 = sub_555b60(esi, arg6)
void* edi_2 = data_7fcba0
void* edx_2 = edi_2
float xmm1_1 = _mm_cvtepi32_ps(zx.o(eax_2))
void* esi_1 = *(arg4 + 0xbc)

if (esi_1 != 0)
    edx_2 = *(esi_1 + 8)

float var_48
float* eax_5 = sub_561190(arg4 + 8, edx_2, &var_48, xmm0_1, xmm1_1, arg4 + 8)
void* edx_3 = edi_2

if (esi_1 != 0)
    edx_3 = *(esi_1 + 8)

float xmm0_4 = _mm_cvtepi32_ps(zx.o(arg5)) + xmm0_1
float var_38
float* eax_6 = sub_561190(eax_5, edx_3, &var_38, xmm0_4, xmm1_1, arg4 + 8)
void* edx_4 = edi_2

if (esi_1 != 0)
    edx_4 = *(esi_1 + 8)

float xmm0_7 = _mm_cvtepi32_ps(zx.o(arg6)) + xmm1_1
float var_28
float* eax_7 = sub_561190(eax_6, edx_4, &var_28, xmm0_1, xmm0_7, arg4 + 8)

if (esi_1 != 0)
    edi_2 = *(esi_1 + 8)

float var_18
sub_561190(eax_7, edi_2, &var_18, xmm0_4, xmm0_7, arg4 + 8)
float var_54 = var_18
int32_t var_14
int32_t var_50 = var_14
float var_6c = var_28
int32_t var_24
int32_t var_68 = var_24
float var_78 = var_38
int32_t var_34
int32_t var_74 = var_34
float var_60 = var_48
int32_t var_4c = 0
int32_t var_64 = 0
int32_t var_70 = 0
int32_t var_44
int32_t var_5c = var_44
int32_t var_58 = 0
char eax_9
int32_t ecx_7
eax_9, ecx_7 = sub_527e90(&var_60, arg2, arg3, &var_60, &var_78, &var_6c)

if (eax_9 != 0)
    return 1

int32_t var_9c_4 = ecx_7
return sub_527e90(&var_6c, arg2, arg3, &var_6c, &var_78, &var_54) != 0
