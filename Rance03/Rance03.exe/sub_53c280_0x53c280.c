// 函数: sub_53c280
// 地址: 0x53c280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg1
void* var_4 = ebx
int32_t* i = *(ebx + 8)

if (i == *(ebx + 0xc))
    return 

int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = 0
int32_t* var_10 = nullptr

do
    float xmm4_1 = -3.40282347e+38f
    int32_t ecx = i[1]
    float xmm6_1 = 3.40282347e+38f
    int32_t* j = *i
    float xmm7_1 = 3.40282347e+38f
    int32_t* i_1 = i
    float xmm5_1 = -3.40282347e+38f
    
    for (; j != ecx; j = &j[3])
        float xmm0_1 = *j
        
        if (not(xmm6_1 <= xmm0_1))
            xmm6_1 = xmm0_1
        
        if (not(xmm0_1 <= xmm4_1))
            xmm4_1 = xmm0_1
        
        float xmm0_2 = j[2]
        
        if (not(xmm7_1 <= xmm0_2))
            xmm7_1 = xmm0_2
        
        if (not(xmm0_2 <= xmm5_1))
            xmm5_1 = xmm0_2
    
    float xmm3_1 = *(ebx + 0x20)
    int32_t eax_1 = *(ebx + 0x30)
    float xmm3_2 = *(ebx + 0x28)
    int32_t var_20
    int32_t* ecx_1 = &var_20
    float xmm1_1 = 1f / (*(ebx + 0x24) - xmm3_1)
    int32_t* var_24 = eax_1 - 1
    int32_t var_28 = eax_1 - 1
    float xmm2_2 = _mm_cvtepi32_ps(zx.o(eax_1))
    float xmm0_6 = *(ebx + 0x2c) - xmm3_2
    int32_t eax_2 = int.d((xmm6_1 - xmm3_1) * xmm2_2 * xmm1_1)
    var_20 = eax_2
    int32_t* eax_3 = &var_24
    
    if (eax_2 s<= 0)
        ecx_1 = &var_1c
    
    float xmm1_2 = 1f / xmm0_6
    
    if (eax_1 - 1 s>= *ecx_1)
        eax_3 = ecx_1
    
    int32_t* ecx_2 = &var_20
    var_24 = *eax_3
    int32_t eax_5 = int.d((xmm4_1 - xmm3_1) * xmm2_2 * xmm1_1)
    var_20 = eax_5
    int32_t* eax_6 = &var_28
    
    if (eax_5 s<= 0)
        ecx_2 = &var_18
    
    int32_t* edx_2 = &var_20
    
    if (eax_1 - 1 s>= *ecx_2)
        eax_6 = ecx_2
    
    int32_t ebp_1 = *eax_6
    void* eax_7 = *(ebx + 0x34)
    var_28 = ebp_1
    float xmm2_4 = _mm_cvtepi32_ps(zx.o(eax_7))
    int32_t* var_c = eax_7 - 1
    int32_t var_8 = eax_7 - 1
    int32_t eax_8 = int.d((xmm7_1 - xmm3_2) * xmm2_4 * xmm1_2)
    var_20 = eax_8
    int32_t eax_9 = int.d((xmm5_1 - xmm3_2) * xmm2_4 * xmm1_2)
    
    if (eax_8 s<= 0)
        edx_2 = &var_14
    
    int32_t* var_2c
    int32_t** ecx_3 = &var_2c
    var_2c = eax_9
    
    if (eax_9 s<= 0)
        ecx_3 = &var_10
    
    int32_t** eax_10 = &var_c
    
    if (eax_7 - 1 s>= *ecx_3)
        eax_10 = ecx_3
    
    int32_t* ecx_4 = *eax_10
    int32_t* eax = &var_8
    
    if (eax_7 - 1 s>= *edx_2)
        eax = edx_2
    
    var_c = ecx_4
    int32_t edx_3 = *eax
    var_20 = edx_3
    
    if (edx_3 s<= ecx_4)
        eax = var_24
        
        do
            int32_t* ecx_5 = eax
            var_2c = ecx_5
            
            if (eax s<= ebp_1)
                do
                    int32_t* edi_1 = *(ebx + 0x14) + (*(ebx + 0x30) * edx_3 + ecx_5) * 0xc
                    int32_t ecx_7 = edi_1[1]
                    int32_t ebp_2
                    
                    if (&i_1 u< ecx_7)
                        ebp_2 = *edi_1
                    
                    if (&i_1 u>= ecx_7 || ebp_2 u> &i_1)
                        int32_t edx_8 = edi_1[2]
                        
                        if (ecx_7 == edx_8 && (edx_8 - ecx_7) s>> 2 u< 1)
                            int32_t ebx_3 = *edi_1
                            int32_t ecx_16 = (ecx_7 - ebx_3) s>> 2
                            
                            if (0x3fffffff - ecx_16 u< 1)
                                sub_69a551("vector<T> too long")
                                noreturn
                            
                            int32_t edx_10 = (edx_8 - ebx_3) s>> 2
                            uint32_t ecx_18 = edx_10 u>> 1
                            int32_t edx_11
                            
                            if (0x3fffffff - ecx_18 u>= edx_10)
                                edx_11 = edx_10 + ecx_18
                            else
                                edx_11 = 0
                            
                            if (edx_11 u< ecx_16 + 1)
                                edx_11 = ecx_16 + 1
                            
                            sub_412f90(edi_1, edx_11)
                        
                        void** eax_27 = edi_1[1]
                        
                        if (eax_27 != 0)
                            *eax_27 = i
                    else
                        int32_t edx_4 = edi_1[2]
                        
                        if (ecx_7 == edx_4 && (edx_4 - ecx_7) s>> 2 u< 1)
                            int32_t ecx_9 = (ecx_7 - ebp_2) s>> 2
                            
                            if (0x3fffffff - ecx_9 u< 1)
                                sub_69a551("vector<T> too long")
                                noreturn
                            
                            int32_t edx_6 = (edx_4 - ebp_2) s>> 2
                            var_8 = ecx_9 + 1
                            uint32_t ecx_12 = edx_6 u>> 1
                            int32_t edx_7
                            
                            if (0x3fffffff - ecx_12 u>= edx_6)
                                edx_7 = edx_6 + ecx_12
                            else
                                edx_7 = 0
                            
                            if (edx_7 u< var_8)
                                edx_7 = var_8
                            
                            sub_412f90(edi_1, edx_7)
                        
                        int32_t* ecx_14 = edi_1[1]
                        
                        if (ecx_14 != 0)
                            *ecx_14 = *(*edi_1 + ((&i_1 - ebp_2) s>> 2 << 2))
                    
                    int32_t* ecx_20 = var_2c
                    edi_1[1] += 4
                    ecx_5 = ecx_20 + 1
                    ebp_1 = var_28
                    ebx = var_4
                    edx_3 = var_20
                    var_2c = ecx_5
                while (ecx_5 s<= ebp_1)
                
                eax = var_24
            
            edx_3 += 1
            var_20 = edx_3
        while (edx_3 s<= var_c)
    
    i = &i[0xa]
while (i != *(ebx + 0xc))
