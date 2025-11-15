// 函数: sub_574990
// 地址: 0x574990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm5 = *(arg1 + 0x18)
float xmm1 = 1f / (*(arg1 + 0x1c) - xmm5)
int32_t* eax = arg2
float xmm2 = *arg2
float xmm4 = *arg3
float xmm3_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x28)))

if (xmm2 > xmm4)
    eax = arg3

float xmm2_1 = *(arg1 + 0x20)
int32_t var_60 = int.d((*eax - 0.5f - xmm5) * xmm3_1 * xmm1)
int32_t* eax_2 = arg2

if (xmm4 > xmm2)
    eax_2 = arg3

float xmm0_11 = (*eax_2 + 0.5f - xmm5) * xmm3_1 * xmm1
float xmm1_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c)))
int32_t var_5c = int.d(xmm0_11)
void* eax_4 = &arg2[2]
float xmm7 = 1f / (*(arg1 + 0x24) - xmm2_1)

if (arg2[2] f> arg3[2])
    eax_4 = &arg3[2]

int32_t var_58 = int.d((*eax_4 - 0.5f - xmm2_1) * xmm1_2 * xmm7)
void* eax_6 = &arg2[2]

if (arg3[2] f> arg2[2])
    eax_6 = &arg3[2]

int32_t var_54 = int.d((*eax_6 + 0.5f - xmm2_1) * xmm1_2 * xmm7)
int32_t* var_9c = &var_60
int32_t* var_8c
sub_573220(arg1, &var_8c)
int32_t var_88
void var_7c
int32_t* eax_8
int32_t* ebx

if (var_88 != 0)
    float xmm2_2[0x4] = *arg3
    int32_t var_28_1 = arg2[2]
    int32_t var_1c_1 = arg3[2]
    eax_8 = var_8c
    int64_t xmm1_4 = _mm_unpacklo_ps(*arg2, 0)
    int64_t xmm2_3 = _mm_unpacklo_ps(xmm2_2, 0)
    int64_t var_30 = xmm1_4
    int32_t* i_1 = *eax_8
    int64_t var_24 = xmm2_3
    int32_t var_18_1 = 0x3e800000
    
    if (i_1 != eax_8)
        int32_t var_80_1 = 3
        
        do
            int128_t* ebx_1 = i_1[4]
            int32_t i = 0
            int128_t* ecx = ebx_1
            ebx = ebx_1 + 0x24
            int128_t* var_84_1 = ecx
            
            do
                if (*ebx == 0)
                    int64_t var_4c = _mm_unpacklo_ps(*ecx, 0)
                    int32_t var_34_1 = 0x3e800000
                    int32_t eax_13 = mods.dp.d(sx.q(i + 1), var_80_1) * 3
                    int32_t edx_3 = i_1[4]
                    int32_t var_78
                    __builtin_memset(&var_78, 0, 0x18)
                    int32_t var_44_1 = *(ecx + 8)
                    int32_t var_38_1 = *(edx_3 + (eax_13 << 2) + 8)
                    int64_t var_40 = _mm_unpacklo_ps(*(edx_3 + (eax_13 << 2)), 0)
                    int32_t var_6c
                    int32_t var_50
                    
                    if (sub_56c130(&var_4c, &var_24, &var_30, &var_4c, &var_40, &var_7c, &var_50, 
                            &var_6c, &var_78) f<= 0.25f)
                        eax_8 = var_8c
                        ebx.b = 1
                        goto label_574c71
                    
                    ecx = var_84_1
                
                i += 1
                ecx += 0xc
                ebx = &ebx[1]
                var_84_1 = ecx
            while (i s< 3)
            
            if (*(i_1 + 0xd) == 0)
                int32_t* i_2 = i_1[2]
                
                if (*(i_2 + 0xd) != 0)
                    int32_t* i_4 = i_1[1]
                    
                    if (*(i_4 + 0xd) == 0)
                        while (i_1 == i_4[2])
                            i_1 = i_4
                            i_4 = i_4[1]
                            
                            if (*(i_4 + 0xd) != 0)
                                break
                    
                    i_1 = i_4
                else
                    i_1 = i_2
                    int32_t* i_3 = *i_1
                    
                    while (*(i_3 + 0xd) == 0)
                        i_1 = i_3
                        i_3 = *i_1
            
            eax_8 = var_8c
        while (i_1 != eax_8)
    
    ebx.b = 0
else
    eax_8 = var_8c
    ebx.b = 0

label_574c71:
sub_4f27c0(&var_8c, &var_7c, *eax_8, eax_8)
sub_403160(var_8c, 1, 0x14)
int32_t result
result.b = ebx.b
return result
