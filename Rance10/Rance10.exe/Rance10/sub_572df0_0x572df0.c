// 函数: sub_572df0
// 地址: 0x572df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = &arg3[2]
*arg5 = *arg4
arg5[1].d = arg4[1].d
float xmm2 = *arg3
float xmm4 = *arg4
float xmm5 = *(arg1 + 0x18)
float xmm0_2 = *(arg1 + 0x1c) - xmm5
int32_t* eax_2 = arg3

if (xmm2 > xmm4)
    eax_2 = arg4

float xmm3_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x28)))
float xmm1 = 1f / xmm0_2
int32_t var_18 = int.d((*eax_2 - arg2 - xmm5) * xmm3_1 * xmm1)
int32_t* eax_4 = arg3

if (xmm4 > xmm2)
    eax_4 = arg4

int32_t var_14 = int.d((*eax_4 + arg2 - xmm5) * xmm3_1 * xmm1)
float xmm2_1 = *(arg1 + 0x20)
float xmm0_14 = *(arg1 + 0x24) - xmm2_1
int32_t* eax_7 = ecx
float xmm1_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c)))
float xmm6 = 1f / xmm0_14

if (*ecx f> arg4[1].d)
    eax_7 = &arg4[1]

int32_t var_10 = int.d((*eax_7 - arg2 - xmm2_1) * xmm1_2 * xmm6)

if (arg4[1].d f> *ecx)
    ecx = &arg4[1]

int32_t var_c = int.d((*ecx + arg2 - xmm2_1) * xmm1_2 * xmm6)
int32_t* var_3c = &var_18
int32_t** var_20
int32_t* eax_10
int32_t ecx_2
eax_10, ecx_2 = sub_573220(arg1, &var_20)
int32_t var_40_1 = ecx_2
sub_572f90(eax_10, arg3, arg4, arg2, arg5)
int32_t** eax_11 = var_20
void var_24
sub_4f27c0(&var_20, &var_24, *eax_11, eax_11)
sub_403160(var_20, 1, 0x14)
sub_573650(arg1, arg2, arg5)
return sub_572c20(arg1, *arg5, arg5[1].d, arg5 + 4)
