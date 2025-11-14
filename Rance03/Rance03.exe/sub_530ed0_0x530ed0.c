// 函数: sub_530ed0
// 地址: 0x530ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3af8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm3 = *(arg1 + 0x1c)
float* arg_4
int32_t* eax_3 = arg_4
float xmm5 = *arg3
float xmm4 = *eax_3
float xmm1 = 1f / (*(arg1 + 0x20) - xmm3)
float xmm2_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c)))

if (xmm4 > xmm5)
    eax_3 = arg3

float* eax_4 = arg_4
float xmm0_4 = *eax_3 - arg2 - xmm3

if (xmm5 > xmm4)
    eax_4 = arg3

void* var_28 = &arg3[2]
int32_t edx = int.d(xmm0_4 * xmm2_1 * xmm1)
int32_t* eax_6 = &arg_4[2]
void* var_14 = eax_6
float xmm3_1 = *(arg1 + 0x24)
int32_t var_1c = int.d((*eax_4 + arg2 - xmm3) * xmm2_1 * xmm1)

if (*eax_6 f> arg3[2])
    eax_6 = &arg3[2]

int32_t esi_2 = *(arg1 + 0x30)
void* edi_1 = var_28
float xmm1_1 = 1f / (*(arg1 + 0x28) - xmm3_1)
void* eax_7 = var_14
float xmm0_16 = *eax_6 - arg2
float xmm2_3 = _mm_cvtepi32_ps(zx.o(esi_2))
int32_t esi_3 = int.d((xmm0_16 - xmm3_1) * xmm2_3 * xmm1_1)

if (*edi_1 f> *eax_7)
    eax_7 = edi_1

void* result = arg1
int32_t edi_2 = int.d((arg2 f+ *eax_7 - xmm3_1) * xmm2_3 * xmm1_1)

if (edx s< *(result + 0x2c) && var_1c s>= 0 && esi_3 s< esi_2 && edi_2 s>= 0)
    if (edx s< 0)
        edx = 0
    
    var_28 = edx
    int32_t edx_1 = *(arg1 + 0x2c)
    int32_t eax_9 = esi_2
    
    if (var_1c s>= edx_1)
        var_1c = edx_1 - 1
        eax_9 = esi_2
    
    if (esi_3 s< 0)
        esi_3 = 0
    
    if (edi_2 s>= eax_9)
        edi_2 = eax_9 - 1
    
    int32_t* var_3c = nullptr
    int32_t var_38_1 = 0
    var_3c = sub_4a6eb0()
    int32_t var_4 = 0
    sub_5312f0(arg1, &var_3c, var_28, var_1c, esi_3, edi_2)
    int32_t* ecx_5 = var_3c
    float var_18_1 = 3.40282347e+38f
    void* eax_12 = *ecx_5
    var_28 = eax_12
    
    if (eax_12 != ecx_5)
        int32_t var_2c_1 = 3
        
        do
            void* edi_3 = *(eax_12 + 0x10)
            int32_t i = 0
            float* ecx_6 = edi_3 + 4
            int32_t* edi_4 = edi_3 + 0x28
            float* var_24_1 = ecx_6
            
            do
                if (*edi_4 == 0)
                    int32_t eax_15 = mods.dp.d(sx.q(i + 1), var_2c_1) * 3
                    float xmm5_1 = *arg_4
                    float xmm1_2 = *var_14
                    float xmm7_2 = arg3[2] f- xmm1_2
                    float xmm6_2 = *arg3 - xmm5_1
                    float xmm0_27 = *(edi_3 + (eax_15 << 2) + 0xc) - ecx_6[2]
                    float xmm2_5 = *(edi_3 + (eax_15 << 2) + 4) - *ecx_6
                    float xmm4_3 = xmm6_2 * xmm0_27 - xmm7_2 * xmm2_5
                    xmm4_3 - 0f
                    eax_15:1.b = (xmm4_3 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm4_3, 0f) ? 1 : 0) << 2 | (xmm4_3 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        float xmm3_3 = xmm1_2 - ecx_6[2]
                        float xmm2_7 = xmm5_1 - *ecx_6
                        float xmm1_3 = 1f / xmm4_3
                        float xmm4_7 = (xmm3_3 * xmm2_5 - xmm2_7 * xmm0_27) * xmm1_3
                        float xmm3_6 = (xmm3_3 * xmm6_2 - xmm2_7 * xmm7_2) * xmm1_3
                        
                        if (not(0 f> xmm4_7) && not(xmm4_7 > 1f) && not(0 f> xmm3_6)
                                && not(xmm3_6 > 1f))
                            float xmm7_4 = xmm7_2 * xmm4_7 f+ *var_14
                            float xmm6_4 = xmm6_2 * xmm4_7 + xmm5_1
                            float xmm0_33 = xmm7_4 f- *var_14
                            float xmm5_3 = xmm6_4 - *arg_4
                            float xmm5_5 = xmm5_3 * xmm5_3 + xmm0_33 * xmm0_33
                            
                            if (not(var_18_1 <= xmm5_5))
                                float var_48 = xmm0_27
                                int32_t var_44_1 = 0
                                int32_t var_40_1 = xmm2_5 ^ (data_7094c0).d
                                float var_54
                                sub_59f780(&var_48, &var_54)
                                var_18_1 = xmm5_5
                                float var_50
                                *arg4 = _mm_unpacklo_ps(var_54 * arg2 + xmm6_4, var_50 * arg2)
                                float var_4c
                                arg4[1].d = var_4c * arg2 + xmm7_4
                                ecx_6 = var_24_1
                
                i += 1
                ecx_6 = &ecx_6[3]
                edi_4 = &edi_4[1]
                var_24_1 = ecx_6
            while (i s< 3)
            
            sub_418380(&var_28)
            eax_12 = var_28
            ecx_5 = var_3c
        while (eax_12 != ecx_5)
    
    sub_4200d0(&var_3c, &arg_4, *ecx_5, ecx_5)
    result = j__free(var_3c)

fsbase->NtTib.ExceptionList = ExceptionList
return result
