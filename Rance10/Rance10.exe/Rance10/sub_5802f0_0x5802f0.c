// 函数: sub_5802f0
// 地址: 0x5802f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
int32_t* esi = *arg1

if (esi == edi)
    return 

void* ecx = &esi[9]
int32_t var_18 = 0
int32_t var_14 = 0
int32_t* var_c = nullptr
int32_t var_8 = 0
void* var_1c_1 = ecx
int32_t edi_1

do
    float xmm4_1 = 3.40282347e+38f
    float xmm5_1 = -3.40282347e+38f
    float xmm6_1 = 3.40282347e+38f
    float xmm7_1 = -3.40282347e+38f
    int32_t* eax_1 = esi
    
    if (esi != ecx)
        do
            int32_t xmm1_1 = *eax_1
            float xmm1_2 = _mm_max_ss(xmm1_1, xmm5_1)
            float xmm0_2 = _mm_min_ss(xmm1_1, xmm4_1)
            xmm5_1 = xmm1_2
            int32_t xmm1_3 = eax_1[2]
            xmm4_1 = xmm0_2
            eax_1 = &eax_1[3]
            xmm7_1 = _mm_max_ss(xmm1_3, xmm7_1)
            xmm6_1 = _mm_min_ss(xmm1_3, xmm6_1)
        while (eax_1 != ecx)
    
    float xmm3_1 = arg1[6]
    int32_t eax_2 = arg1[0xa]
    float xmm3_2 = arg1[8]
    int32_t var_24
    int32_t* ecx_1 = &var_24
    edi_1 = edi
    float xmm1_5 = 1f / (arg1[7] f- xmm3_1)
    float xmm2_2 = _mm_cvtepi32_ps(zx.o(eax_2))
    float xmm0_8 = arg1[9] f- xmm3_2
    int32_t eax_3 = int.d((xmm4_1 - xmm3_1) * xmm2_2 * xmm1_5)
    var_24 = eax_3
    float xmm1_6 = 1f / xmm0_8
    
    if (eax_3 s<= 0)
        ecx_1 = &var_18
    
    int32_t eax_4 = *ecx_1
    int32_t* ecx_2 = &var_24
    
    if (eax_2 - 1 s< eax_4)
        eax_4 = eax_2 - 1
    
    int32_t eax_5 = int.d((xmm5_1 - xmm3_1) * xmm2_2 * xmm1_5)
    var_24 = eax_5
    
    if (eax_5 s<= 0)
        ecx_2 = &var_14
    
    int32_t eax_6 = *ecx_2
    
    if (eax_2 - 1 s< eax_6)
        eax_6 = eax_2 - 1
    
    int32_t* var_10
    int32_t** edx_2 = &var_10
    int32_t eax_7 = arg1[0xb]
    float xmm2_4 = _mm_cvtepi32_ps(zx.o(eax_7))
    int32_t var_4_1 = eax_7 - 1
    int32_t eax_8 = int.d((xmm6_1 - xmm3_2) * xmm2_4 * xmm1_6)
    var_10 = eax_8
    int32_t eax_9 = int.d((xmm7_1 - xmm3_2) * xmm2_4 * xmm1_6)
    
    if (eax_8 s<= 0)
        edx_2 = &var_c
    
    int32_t* ecx_3 = &var_24
    var_24 = eax_9
    
    if (eax_9 s<= 0)
        ecx_3 = &var_8
    
    int32_t eax = *edx_2
    int32_t ecx_4 = *ecx_3
    
    if (eax_7 - 1 s< ecx_4)
        ecx_4 = eax_7 - 1
    
    var_24 = ecx_4
    
    if (eax_7 - 1 s< eax)
        eax = eax_7 - 1
    
    var_10 = eax
    
    if (eax s<= ecx_4)
        int32_t ecx_5 = eax_4
        int32_t edi_2 = eax
        eax = eax_6
        int32_t edx_3 = var_24
        
        do
            int32_t ebx_2 = ecx_5
            
            if (ecx_5 s<= eax)
                do
                    var_10 = esi
                    sub_428f00(arg1[3] + (arg1[0xa] * edi_2 + ebx_2) * 0xc, &var_10)
                    eax = eax_6
                    ebx_2 += 1
                while (ebx_2 s<= eax)
                
                ecx_5 = eax_4
                edx_3 = var_24
            
            edi_2 += 1
        while (edi_2 s<= edx_3)
        
        edi_1 = edi
    
    esi = &esi[0xd]
    ecx = var_1c_1 + 0x34
    var_1c_1 = ecx
while (esi != edi_1)
