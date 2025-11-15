// 函数: sub_54eb50
// 地址: 0x54eb50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *arg1

if (edi == 0)
    return 

float var_48[0x4]
__builtin_memset(&var_48, 0, 0x40)
float var_38[0x4]
float var_28[0x4]
float var_18[0x4]
sub_528370(&var_48, arg5, arg4, arg2, arg3, arg6, arg7, arg8, &var_48, &var_38, &var_28, &var_18, 
    arg13)
int32_t ecx_1 = *(arg13 + 0x1c)
int32_t edx_2 = *(arg13 + 0x20)
float xmm1_1[0x4] = var_48
int32_t xmm2 = *arg9
int32_t xmm3_1 = arg9[1]
int32_t xmm4_1 = *arg10
int32_t xmm5_1 = arg10[1]
int32_t xmm6_1 = *arg11
int32_t xmm7_1 = arg11[1]
int32_t xmm0_2 = *arg12
int32_t xmm0_3 = arg12[1]
*(edi + 0x3c) = _mm_shuffle_ps(xmm1_1, xmm1_1, 0x55)
*(edi + 0x38) = xmm1_1
*(edi + 0x40) = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa)
*(edi + 0x44) = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xff)
float xmm1_3[0x4] = var_38
*(edi + 0x48) = xmm1_3
*(edi + 0x4c) = _mm_shuffle_ps(xmm1_3, xmm1_3, 0x55)
*(edi + 0x50) = _mm_shuffle_ps(xmm1_3, xmm1_3, 0xaa)
*(edi + 0x54) = _mm_shuffle_ps(xmm1_3, xmm1_3, 0xff)
float xmm1_5[0x4] = var_28
*(edi + 0x58) = xmm1_5
*(edi + 0x5c) = _mm_shuffle_ps(xmm1_5, xmm1_5, 0x55)
*(edi + 0x60) = _mm_shuffle_ps(xmm1_5, xmm1_5, 0xaa)
*(edi + 0x64) = _mm_shuffle_ps(xmm1_5, xmm1_5, 0xff)
float xmm1_7[0x4] = var_18
*(edi + 0x68) = xmm1_7
*(edi + 0x6c) = _mm_shuffle_ps(xmm1_7, xmm1_7, 0x55)
int32_t xmm0_19 = _mm_shuffle_ps(xmm1_7, xmm1_7, 0xaa)
int32_t xmm1_8 = _mm_shuffle_ps(xmm1_7, xmm1_7, 0xff)
*(edi + 0x70) = xmm0_19
*(edi + 0x74) = xmm1_8
*(edi + 0xbc) = ecx_1
*(edi + 0xc0) = edx_2
*(edi + 0xc4) = xmm2
*(edi + 0xc8) = xmm3_1
*(edi + 0xcc) = xmm4_1
*(edi + 0xd0) = xmm5_1
*(edi + 0xd4) = xmm6_1
*(edi + 0xd8) = xmm7_1
*(edi + 0xdc) = xmm0_2
*(edi + 0xe0) = xmm0_3
sub_450cd0(edi)
