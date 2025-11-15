// 函数: sub_4bb1f0
// 地址: 0x4bb1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg4

if (edi == 0)
    return 

float xmm0_2 = _mm_cvtepi32_ps(zx.o(arg3))
int32_t var_78_1 = edi
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x51eb851f, arg1[2] - arg1[1])
float xmm2_3 = _mm_cvtepi32_ps(zx.o(arg2)) / (1000f / xmm0_2)
int32_t* eax_2 = &arg4
int32_t edx_2 = edx_1 s>> 5
int32_t ecx_4 = (edx_2 u>> 0x1f) + edx_2 - 1
arg2 = ecx_4
int32_t esi_1 = int.d(xmm2_3)
int32_t esi_2 = esi_1 - *arg1
arg4 = esi_2
float xmm0_4 = _mm_cvtepi32_ps(zx.o(esi_1))

if (esi_2 s>= ecx_4)
    eax_2 = &arg2

int32_t ebp_1 = 0
int32_t eax_3 = *eax_2
float xmm2_4 = xmm2_3 - xmm0_4

if (eax_3 s> 0)
    ebp_1 = eax_3

float* esi_4 = ebp_1 * 0x64 + arg1[1]
xmm2_4 - 0f
eax_3:1.b =
    (xmm2_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_4, 0f) ? 1 : 0) << 2 | (xmm2_4 < 0f ? 1 : 0)
bool p_2 = unimplemented  {test ah, 0x44}
int32_t edx_5

if (p_2)
    ecx_4 = arg1[2] - arg1[1]
    int32_t eax_5
    int32_t edx_4
    edx_4:eax_5 = muls.dp.d(0x51eb851f, ecx_4)
    edx_5 = edx_4 s>> 5

if (not(p_2) || (edx_5 u>> 0x1f) + edx_5 s<= ebp_1 + 1)
    float* var_7c_1 = esi_4
    sub_4bb2e0(ecx_4)
    return 

void var_64
int32_t* ecx_6 = &var_64
int32_t* eax_10 = (ebp_1 + 1) * 0x64 + arg1[1]
int32_t* var_7c_3 = sub_4bacc0(eax_10, esi_4, ecx_6, xmm2_4, eax_10)
sub_4bb2e0(ecx_6)
