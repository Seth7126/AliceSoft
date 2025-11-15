// 函数: sub_579e10
// 地址: 0x579e10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *arg4
void* var_8c
void var_80
float xmm1_1
float xmm2
float xmm3

if (arg1 f< _mm_cvtepi32_ps(zx.o(ecx)))
    int32_t esi_1 = *arg3
    ecx -= esi_1
    xmm3 = arg3[4]
    
    if (ecx s> 0)
        float xmm0_3 = _mm_cvtepi32_ps(zx.o(esi_1))
        float xmm2_1 = arg4[2]
        float xmm4_1 = arg4[4]
        float xmm1_3 = (arg1 - xmm0_3) / _mm_cvtepi32_ps(zx.o(ecx))
        xmm2 = (xmm2_1 f- arg3[2]) * xmm1_3 f+ arg3[2]
        xmm1_1 = arg3[3] f+ (arg4[3] f- arg3[3]) * xmm1_3
        xmm3 = xmm3 + (xmm4_1 f- arg3[4]) * xmm1_3
        var_8c = &var_80
    else
        xmm2 = arg3[2]
        ecx = &var_80
        xmm1_1 = arg3[3]
        var_8c = &var_80
else
    xmm3 = arg4[4]
    xmm2 = arg4[2]
    xmm1_1 = arg4[3]
    var_8c = &var_80

void* var_90 = ecx
float var_40[0x10]
sub_4ba000(sub_57a9b0(&var_40, xmm1_1, xmm2, xmm3), var_8c)
sub_6cb8c0(&var_80, arg2)
return arg2
