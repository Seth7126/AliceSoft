// 函数: sub_5afb80
// 地址: 0x5afb80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm2 = arg2
int32_t xmm1 = (zx.o(0)).d

if (*(arg1 + 0x344) == 1 && *(arg4 i+ 0x174) != 0)
    void* eax_1 = ___std_acquire_shared_mutex_for_instance@4(arg4, *(arg1 + 0x348))
    xmm1 = (zx.o(0)).d
    
    if (eax_1 == 0)
        xmm2 = (zx.o(0)).d
    else if (*(eax_1 + 0x1e4) == 0)
        xmm2 = *(eax_1 + 0x178)
    else
        xmm2 = (zx.o(0)).d

float xmm3 = *(arg1 + 0x3a0)
float xmm4 = *(arg1 + 0x39c)

if (not(xmm4 >= xmm3))
    float xmm0_3 = (xmm2 - xmm4) / (xmm3 - xmm4)
    
    if (not(0 f> xmm0_3))
        xmm1 = __minss_xmmss_memss(xmm0_3, 0x3f800000)

int32_t eax_2 = *(arg1 + 0x128)

if (eax_2 u> 3)
    *arg3 = 0f
    arg3[1] = 0
    arg3[2] = 0
    return arg3

float var_64
float var_58
float var_4c
float var_40[0x10]

switch (eax_2)
    case 0
        arg7 = *(arg1 + 0x384) f+ *arg6
        float xmm0_7 = *(arg1 + 0x388) f+ *(arg6 i+ 4)
        float xmm0_9 = *(arg1 + 0x38c) f+ *(arg6 i+ 8)
        float* eax_4 = sub_5b0320(arg1, xmm2, xmm1, &var_64)
        *arg3 = arg7 + *eax_4
        arg3[1] = eax_4[1] + xmm0_7
        arg3[2] = eax_4[2] + xmm0_9
        return arg3
    case 1
        arg7 = *(arg1 + 0x390) f+ *arg5
        float xmm0_19 = *(arg1 + 0x394) f+ *(arg5 i+ 4)
        float xmm0_21 = *(arg1 + 0x398) f+ *(arg5 i+ 8)
        float* eax_7 = sub_5b0320(arg1, xmm2, xmm1, &var_64)
        *arg3 = arg7 + *eax_7
        arg3[1] = eax_7[1] + xmm0_19
        arg3[2] = eax_7[2] + xmm0_21
        return arg3
    case 2
        float* eax_9 = sub_5b0320(arg1, xmm2, xmm1, &var_58)
        var_64 = *eax_9 f+ *(arg1 + 0x390)
        float var_60 = *(arg1 + 0x394) + eax_9[1]
        float var_5c = *(arg1 + 0x398) + eax_9[2]
        float xmm0_35 = *(arg1 + 0x384) f- *(arg1 + 0x390)
        float xmm0_37 = *(arg1 + 0x388) f- *(arg1 + 0x394)
        float xmm0_39 = *(arg1 + 0x38c) f- *(arg1 + 0x398)
        float* eax_11 = sub_6ca8d0(&var_64, &var_4c, sub_6cbac0(arg7, &var_40))
        *arg3 = *eax_11 + xmm0_35
        arg3[1] = eax_11[1] + xmm0_37
        arg3[2] = eax_11[2] + xmm0_39
        return arg3
    case 3
        float* eax_13 = sub_5b0320(arg1, xmm2, xmm1, &var_4c)
        var_64 = *eax_13 f+ *(arg1 + 0x390)
        float var_60_1 = *(arg1 + 0x394) + eax_13[1]
        float var_5c_1 = *(arg1 + 0x398) + eax_13[2]
        float* eax_15 = sub_6ca8d0(&var_64, &var_58, sub_6cbac0(arg7, &var_40))
        float* ecx_12 = arg5
        *arg3 = *eax_15 + *ecx_12
        arg3[1] = eax_15[1] + ecx_12[1]
        arg3[2] = eax_15[2] + ecx_12[2]
        return arg3
