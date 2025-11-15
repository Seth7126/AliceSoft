// 函数: sub_5733e0
// 地址: 0x5733e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg2
void* edx = arg1
void* var_1c = edx
int32_t edi = esi[1]
int32_t* esi_1 = *esi

if (esi_1 == edi)
    return 

void* ecx = &esi_1[9]
int32_t* var_14 = nullptr
int32_t* var_10 = nullptr
int32_t* var_c = nullptr
int32_t* var_8 = nullptr
void* var_18_1 = ecx
int32_t edi_1

do
    float xmm4_1 = 3.40282347e+38f
    float xmm5_1 = -3.40282347e+38f
    float xmm6_1 = 3.40282347e+38f
    float xmm7_1 = -3.40282347e+38f
    int32_t* eax_1 = esi_1
    
    if (esi_1 != ecx)
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
    
    float xmm3_1 = *(edx + 0x18)
    void* eax_2 = *(edx + 0x28)
    float xmm3_2 = *(edx + 0x20)
    int32_t** ecx_1 = &arg2
    edi_1 = edi
    float xmm1_5 = 1f / (*(edx + 0x1c) - xmm3_1)
    float xmm0_7 = *(edx + 0x24)
    float xmm2_2 = _mm_cvtepi32_ps(zx.o(eax_2))
    int32_t eax_3 = int.d((xmm4_1 - xmm3_1) * xmm2_2 * xmm1_5)
    float xmm1_6 = 1f / (xmm0_7 - xmm3_2)
    arg2 = eax_3
    
    if (eax_3 s<= 0)
        ecx_1 = &var_14
    
    int32_t* eax_4 = *ecx_1
    int32_t** ecx_2 = &arg2
    
    if (eax_2 - 1 s< eax_4)
        eax_4 = eax_2 - 1
    
    int32_t* var_28_1 = eax_4
    int32_t eax_5 = int.d((xmm5_1 - xmm3_1) * xmm2_2 * xmm1_5)
    arg2 = eax_5
    void* eax_6 = *(edx + 0x2c)
    
    if (eax_5 s<= 0)
        ecx_2 = &var_10
    
    int32_t* ebx_1 = *ecx_2
    float xmm2_4 = _mm_cvtepi32_ps(zx.o(eax_6))
    
    if (eax_2 - 1 s< ebx_1)
        ebx_1 = eax_2 - 1
    
    arg2 = eax_6 - 1
    int32_t* var_24
    int32_t** ecx_4 = &var_24
    int32_t* var_2c_1 = ebx_1
    int32_t eax_7 = int.d((xmm6_1 - xmm3_2) * xmm2_4 * xmm1_6)
    var_24 = eax_7
    int32_t eax_8 = int.d((xmm7_1 - xmm3_2) * xmm2_4 * xmm1_6)
    
    if (eax_7 s<= 0)
        ecx_4 = &var_c
    
    int32_t* ebp_2 = *ecx_4
    int32_t** ecx_5 = &var_24
    
    if (arg2 s< ebp_2)
        ebp_2 = arg2
    
    var_24 = eax_8
    
    if (eax_8 s<= 0)
        ecx_5 = &var_8
    
    int32_t* eax = *ecx_5
    int32_t* ecx_6 = var_28_1
    
    if (arg2 s< eax)
        eax = arg2
    
    var_24 = eax
    
    if (ecx_6 s> 0)
        ecx_6 -= 1
        var_28_1 = ecx_6
    
    if (ebx_1 s< eax_2 - 1)
        var_2c_1 = ebx_1 + 1
    
    if (ebp_2 s> 0)
        ebp_2 -= 1
    
    if (eax s< arg2)
        eax += 1
        var_24 = eax
    
    if (ebp_2 s<= eax)
        eax = var_2c_1
        int32_t* edx_1 = var_24
        
        do
            int32_t* ebx_3 = ecx_6
            
            if (ecx_6 s<= eax)
                do
                    arg2 = esi_1
                    sub_428f00(*(var_1c + 0xc) + (*(var_1c + 0x28) * ebp_2 + ebx_3) * 0xc, &arg2)
                    eax = var_2c_1
                    ebx_3 += 1
                while (ebx_3 s<= eax)
                
                ecx_6 = var_28_1
                edx_1 = var_24
            
            ebp_2 += 1
        while (ebp_2 s<= edx_1)
        
        edi_1 = edi
        edx = var_1c
    
    esi_1 = &esi_1[0x17]
    ecx = var_18_1 + 0x5c
    var_18_1 = ecx
while (esi_1 != edi_1)
