// 函数: sub_57aba0
// 地址: 0x57aba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx_2
void var_120
float var_80[0x10]
float xmm1_4
float xmm2_4
float xmm3_7

if (arg5 == 0)
    xmm3_7 = arg1[2]
    xmm2_4 = *arg1
    xmm1_4 = arg1[1]
label_57aceb:
    float* var_130_3 = arg1
    sub_4ba000(sub_57a9b0(&var_80, xmm1_4, xmm2_4, xmm3_7), &var_120)
    ecx_2 = &var_120
else
    if (arg5 == 1)
        float xmm2_3 = *arg1
        float xmm1_3 = arg1[1]
        xmm2_4 = xmm2_3 + (*arg4 - xmm2_3) * arg2
        xmm1_4 = xmm1_3 + (arg4[1] - xmm1_3) * arg2
        xmm3_7 = (arg4[2] - arg1[2]) * arg2 + arg1[2]
        goto label_57aceb
    
    void var_c0
    void* var_12c = &var_c0
    float* var_130 = arg1
    
    if (arg5 == 2)
        float var_40[0x10]
        int32_t var_130_1 = sub_4ba000(sub_57a9b0(&var_40, arg4[1], *arg4, arg4[2]), var_12c)
        sub_4ba000(sub_57a9b0(&var_80, arg1[1], *arg1, arg1[2]), &var_120)
        float var_e0[0x4]
        int128_t* eax_7 = sub_6cb8c0(&var_c0, &var_e0)
        float var_d0[0x4]
        sub_6cbf50(sub_6cb8c0(&var_120, &var_d0), arg2, arg3, eax_7)
        return arg3
    
    sub_4ba000(sub_57a9b0(&var_120, arg1[1], *arg1, arg1[2]), var_12c)
    ecx_2 = &var_c0
sub_6cb8c0(ecx_2, arg3)
return arg3
