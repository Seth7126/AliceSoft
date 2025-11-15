// 函数: sub_57ba60
// 地址: 0x57ba60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg2 + 4) != 3 || *(arg2 + 0x26c) == 0)
    return 

int32_t ecx
int32_t var_20_1 = ecx
int32_t ecx_2 = sub_5845f0(*arg1)

if (ecx_2 == 0 || *(ecx_2 + 0x1a4) == 0)
    return 

int32_t eax
eax.b = *(ecx_2 + 0x1a8)

if (eax.b != 0)
    return 

int32_t ebx_1 = sub_58ffc0(*(ecx_2 + 0x1a4), arg2 + 0x25c)

if (ebx_1 s< 0)
    return 

int32_t eax_3
int32_t edx_1
edx_1:eax_3 = muls.dp.d(0x4bda12f7, *(ecx_2 + 0x124) - *(ecx_2 + 0x120))
int32_t edx_2 = edx_1 s>> 6

if (ebx_1 s>= (edx_2 u>> 0x1f) + edx_2)
    return 

float xmm0_1 = sub_5793d0(arg2, arg4)
float xmm6_2[0x4] = sub_579400(arg2, arg4) * xmm0_1
int64_t xmm5_2 = sub_579430(arg2, arg4) * xmm0_1
float xmm0_4 = sub_579460(arg2, arg4)
int32_t ecx_10 = *(ecx_2 + 0x120)
int32_t esi_1 = ebx_1 * 0xd8
int64_t xmm6_3 = _mm_unpacklo_ps(xmm6_2, xmm5_2)
int32_t eax_7 = arg3[1].d
*(ecx_10 + esi_1 + 0x24) = *arg3
*(ecx_10 + esi_1 + 0x2c) = eax_7
int32_t edx_3 = *(ecx_2 + 0x120)
*(edx_3 + esi_1 + 0x30) = xmm6_3
*(edx_3 + esi_1 + 0x38) = xmm0_4 * xmm0_1
sub_5d9fa0(ecx_2 + 0x120)
