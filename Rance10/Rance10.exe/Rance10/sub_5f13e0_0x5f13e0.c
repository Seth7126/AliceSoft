// 函数: sub_5f13e0
// 地址: 0x5f13e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi_2 = arg4
int32_t ecx_2 = (arg4 - arg2) s/ 0x38
int32_t var_24 = ecx_2
int32_t* i = &arg2[ecx_2 * 7]
sub_5f1b50(esi_2 - 0x1c, i, arg2, esi_2 - 0x1c)
int32_t* ebp = &i[7]

for (; arg2 u< i; i = &i[-7])
    int32_t ecx_4 = i[-7]
    int32_t edx_4 = *i
    
    if (ecx_4 s< edx_4)
        break
    
    if (edx_4 s< ecx_4)
        break

if (ebp u< esi_2)
    int32_t ecx_5 = *i
    
    do
        int32_t eax_4 = *ebp
        
        if (eax_4 s< ecx_5)
            break
        
        if (ecx_5 s< eax_4)
            break
        
        ebp = &ebp[7]
    while (ebp u< esi_2)

int32_t* i_2 = i
int32_t* eax_5 = ebp
int32_t* i_3 = i_2

while (true)
    int32_t* var_c_1 = eax_5
    
    while (true)
        if (eax_5 u< esi_2)
            void* esi_3 = &ebp[-7]
            
            do
                int32_t ecx_6 = *i
                int32_t edx_5 = *eax_5
                
                if (ecx_6 s>= edx_5)
                    if (edx_5 s< ecx_6)
                        break
                    
                    int32_t* ecx_7 = ebp
                    esi_3 += 0x1c
                    ebp = &ebp[7]
                    
                    if (ecx_7 != eax_5)
                        int32_t edx_6 = *(esi_3 + 0x18)
                        int128_t xmm1_1 = *esi_3
                        int64_t xmm2_1 = *(esi_3 + 0x10)
                        *esi_3 = *eax_5
                        *(esi_3 + 0x10) = *(eax_5 + 0x10)
                        *(esi_3 + 0x18) = eax_5[6]
                        *eax_5 = xmm1_1
                        *(eax_5 + 0x10) = xmm2_1
                        eax_5[6] = edx_6
                
                eax_5 = &eax_5[7]
            while (eax_5 u< arg4)
            
            i_2 = i_3
            var_c_1 = eax_5
        
        bool cond:0_1 = i_2 != arg2
        
        if (i_2 u> arg2)
            void* esi_4 = &i_2[-7]
            
            do
                int32_t ecx_10 = *esi_4
                int32_t edx_7 = *i
                
                if (ecx_10 s>= edx_7)
                    if (edx_7 s< ecx_10)
                        break
                    
                    i -= 0x1c
                    
                    if (i != esi_4)
                        int32_t edx_8 = i[6]
                        int128_t xmm1_2 = *i
                        int64_t xmm2_2 = *(i + 0x10)
                        *i = *esi_4
                        *(i + 0x10) = *(esi_4 + 0x10)
                        i[6] = *(esi_4 + 0x18)
                        *esi_4 = xmm1_2
                        *(esi_4 + 0x10) = xmm2_2
                        *(esi_4 + 0x18) = edx_8
                
                i_2 -= 0x1c
                esi_4 -= 0x1c
            while (arg2 u< i_2)
            
            cond:0_1 = i_2 != arg2
            eax_5 = var_c_1
            i_3 = i_2
        
        if (not(cond:0_1))
            if (eax_5 == arg4)
                arg3[1] = ebp
                *arg3 = i
                return arg3
            
            if (ebp != eax_5)
                int32_t edx_9 = i[6]
                int128_t xmm1_3 = *i
                int64_t xmm2_3 = *(i + 0x10)
                *i = *ebp
                *(i + 0x10) = *(ebp + 0x10)
                i[6] = ebp[6]
                *ebp = xmm1_3
                *(ebp + 0x10) = xmm2_3
                ebp[6] = edx_9
            
            int32_t* edi_2 = eax_5
            int32_t* i_1 = i
            ebp = &ebp[7]
            i = &i[7]
            eax_5 = &eax_5[7]
            int32_t edx_10 = i_1[6]
            int128_t xmm1_4 = *i_1
            int64_t xmm2_4 = *(i_1 + 0x10)
            *i_1 = *edi_2
            *(i_1 + 0x10) = *(edi_2 + 0x10)
            i_1[6] = edi_2[6]
            esi_2 = arg4
            *edi_2 = xmm1_4
            *(edi_2 + 0x10) = xmm2_4
            edi_2[6] = edx_10
            i_2 = i_3
            break
        
        esi_2 = arg4
        i_2 -= 0x1c
        i_3 = i_2
        
        if (eax_5 != esi_2)
            int32_t edx_13 = eax_5[6]
            int128_t xmm1_7 = *eax_5
            int64_t xmm2_7 = *(eax_5 + 0x10)
            *eax_5 = *i_2
            *(eax_5 + 0x10) = *(i_2 + 0x10)
            eax_5[6] = i_2[6]
            eax_5 = &eax_5[7]
            *i_2 = xmm1_7
            *(i_2 + 0x10) = xmm2_7
            i_2[6] = edx_13
            break
        
        i -= 0x1c
        
        if (i_2 != i)
            int32_t edx_11 = i_2[6]
            int128_t xmm1_5 = *i_2
            int64_t xmm2_5 = *(i_2 + 0x10)
            *i_2 = *i
            *(i_2 + 0x10) = *(i + 0x10)
            i_2[6] = i[6]
            *i = xmm1_5
            *(i + 0x10) = xmm2_5
            i[6] = edx_11
        
        int128_t xmm0_11 = *(ebp - 0x1c)
        int32_t edx_12 = i[6]
        ebp -= 0x1c
        int128_t xmm1_6 = *i
        int64_t xmm2_6 = *(i + 0x10)
        *i = xmm0_11
        *(i + 0x10) = *(ebp + 0x10)
        i[6] = ebp[6]
        *ebp = xmm1_6
        *(ebp + 0x10) = xmm2_6
        ebp[6] = edx_12
