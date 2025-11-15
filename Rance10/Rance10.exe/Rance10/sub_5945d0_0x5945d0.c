// 函数: sub_5945d0
// 地址: 0x5945d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg4
int32_t** var_28 = arg3
int32_t* i = &arg2[(ebp - arg2) s/ 0x30 * 6]
int32_t* eax_5 = ebp - 0x18
sub_594d90(eax_5, i, arg2, eax_5)
int32_t* edi = &i[6]

for (; arg2 u< i; i = &i[-6])
    int32_t ecx_1 = i[-6]
    int32_t edx_3 = *i
    
    if (ecx_1 s< edx_3)
        break
    
    if (edx_3 s< ecx_1)
        break

if (edi u< ebp)
    int32_t ecx_2 = *i
    
    do
        int32_t eax_6 = *edi
        
        if (eax_6 s< ecx_2)
            break
        
        if (ecx_2 s< eax_6)
            break
        
        edi = &edi[6]
    while (edi u< ebp)

int32_t* i_2 = i
int32_t* eax_7 = edi
int32_t* i_3 = i_2

while (true)
    int32_t* ecx_3 = arg2
label_59464f:
    int32_t* var_8_1 = eax_7
    
    while (true)
        if (eax_7 u< ebp)
            void* edx_4 = &edi[-6]
            
            do
                int32_t ecx_4 = *i
                int32_t ebp_1 = *eax_7
                
                if (ecx_4 s>= ebp_1)
                    if (ebp_1 s< ecx_4)
                        break
                    
                    int32_t* ecx_5 = edi
                    edx_4 += 0x18
                    edi = &edi[6]
                    
                    if (ecx_5 != eax_7)
                        int128_t xmm1_1 = *edx_4
                        int64_t xmm2_1 = *(edx_4 + 0x10)
                        *edx_4 = *eax_7
                        *(edx_4 + 0x10) = *(eax_7 + 0x10)
                        *eax_7 = xmm1_1
                        *(eax_7 + 0x10) = xmm2_1
                
                eax_7 = &eax_7[6]
            while (eax_7 u< arg4)
            
            i_2 = i_3
            ecx_3 = arg2
            var_8_1 = eax_7
        
        bool cond:0_1 = i_2 != ecx_3
        
        if (i_2 u> ecx_3)
            void* ecx_6 = &i_2[-6]
            
            do
                int32_t edx_5 = *ecx_6
                int32_t ebp_2 = *i
                
                if (edx_5 s>= ebp_2)
                    if (ebp_2 s< edx_5)
                        break
                    
                    i -= 0x18
                    
                    if (i != ecx_6)
                        int128_t xmm1_2 = *i
                        int64_t xmm2_2 = *(i + 0x10)
                        *i = *ecx_6
                        *(i + 0x10) = *(ecx_6 + 0x10)
                        *ecx_6 = xmm1_2
                        *(ecx_6 + 0x10) = xmm2_2
                
                i_2 -= 0x18
                ecx_6 -= 0x18
            while (arg2 u< i_2)
            
            ecx_3 = arg2
            cond:0_1 = i_2 != ecx_3
            eax_7 = var_8_1
            i_3 = i_2
        
        ebp = arg4
        
        if (not(cond:0_1))
            if (eax_7 == ebp)
                arg3[1] = edi
                *arg3 = i
                return arg3
            
            if (edi != eax_7)
                int128_t xmm1_3 = *i
                int64_t xmm2_3 = *(i + 0x10)
                *i = *edi
                *(i + 0x10) = *(edi + 0x10)
                *edi = xmm1_3
                *(edi + 0x10) = xmm2_3
            
            int32_t* edx_6 = eax_7
            int32_t* i_1 = i
            edi = &edi[6]
            i = &i[6]
            eax_7 = &eax_7[6]
            int128_t xmm1_4 = *i_1
            int64_t xmm2_4 = *(i_1 + 0x10)
            *i_1 = *edx_6
            *(i_1 + 0x10) = *(edx_6 + 0x10)
            *edx_6 = xmm1_4
            *(edx_6 + 0x10) = xmm2_4
            break
        
        i_2 -= 0x18
        i_3 = i_2
        
        if (eax_7 != ebp)
            int128_t xmm1_7 = *eax_7
            int64_t xmm2_7 = *(eax_7 + 0x10)
            *eax_7 = *i_2
            *(eax_7 + 0x10) = *(i_2 + 0x10)
            eax_7 = &eax_7[6]
            *i_2 = xmm1_7
            *(i_2 + 0x10) = xmm2_7
            goto label_59464f
        
        i -= 0x18
        
        if (i_2 != i)
            int128_t xmm1_5 = *i_2
            int64_t xmm2_5 = *(i_2 + 0x10)
            *i_2 = *i
            *(i_2 + 0x10) = *(i + 0x10)
            *i = xmm1_5
            *(i + 0x10) = xmm2_5
        
        int128_t xmm0_11 = *(edi - 0x18)
        edi -= 0x18
        int128_t xmm1_6 = *i
        int64_t xmm2_6 = *(i + 0x10)
        *i = xmm0_11
        *(i + 0x10) = *(edi + 0x10)
        *edi = xmm1_6
        *(edi + 0x10) = xmm2_6
