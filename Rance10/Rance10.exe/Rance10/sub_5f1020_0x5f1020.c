// 函数: sub_5f1020
// 地址: 0x5f1020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_2 = arg4
int32_t** var_24 = arg3
int32_t* i = &arg2[(arg4 - arg2) s/ 0x28 * 5]
sub_5f1840(esi_2 - 0x14, i, arg2, esi_2 - 0x14)
int32_t* ebp = &i[5]

for (; arg2 u< i; i = &i[-5])
    int32_t ecx_1 = i[-5]
    int32_t edx_3 = *i
    
    if (ecx_1 s< edx_3)
        break
    
    if (edx_3 s< ecx_1)
        break

if (ebp u< esi_2)
    int32_t ecx_2 = *i
    
    do
        int32_t eax_6 = *ebp
        
        if (eax_6 s< ecx_2)
            break
        
        if (ecx_2 s< eax_6)
            break
        
        ebp = &ebp[5]
    while (ebp u< esi_2)

int32_t* i_2 = i
int32_t* eax_7 = ebp
int32_t* i_3 = i_2

while (true)
    int32_t* var_c_1 = eax_7
    
    while (true)
        if (eax_7 u< esi_2)
            void* esi_3 = &ebp[-5]
            
            do
                int32_t ecx_3 = *i
                int32_t edx_4 = *eax_7
                
                if (ecx_3 s>= edx_4)
                    if (edx_4 s< ecx_3)
                        break
                    
                    int32_t* ecx_4 = ebp
                    esi_3 += 0x14
                    ebp = &ebp[5]
                    
                    if (ecx_4 != eax_7)
                        int32_t edx_5 = *(esi_3 + 0x10)
                        int128_t xmm1_1 = *esi_3
                        *esi_3 = *eax_7
                        *(esi_3 + 0x10) = eax_7[4]
                        *eax_7 = xmm1_1
                        eax_7[4] = edx_5
                
                eax_7 = &eax_7[5]
            while (eax_7 u< arg4)
            
            i_2 = i_3
            var_c_1 = eax_7
        
        bool cond:0_1 = i_2 != arg2
        
        if (i_2 u> arg2)
            void* esi_4 = &i_2[-5]
            
            do
                int32_t ecx_7 = *esi_4
                int32_t edx_6 = *i
                
                if (ecx_7 s>= edx_6)
                    if (edx_6 s< ecx_7)
                        break
                    
                    i -= 0x14
                    
                    if (i != esi_4)
                        int32_t edx_7 = i[4]
                        int128_t xmm1_2 = *i
                        *i = *esi_4
                        i[4] = *(esi_4 + 0x10)
                        *esi_4 = xmm1_2
                        *(esi_4 + 0x10) = edx_7
                
                i_2 -= 0x14
                esi_4 -= 0x14
            while (arg2 u< i_2)
            
            cond:0_1 = i_2 != arg2
            eax_7 = var_c_1
            i_3 = i_2
        
        if (not(cond:0_1))
            if (eax_7 == arg4)
                arg3[1] = ebp
                *arg3 = i
                return arg3
            
            if (ebp != eax_7)
                int32_t edx_8 = i[4]
                int128_t xmm1_3 = *i
                *i = *ebp
                i[4] = ebp[4]
                *ebp = xmm1_3
                ebp[4] = edx_8
            
            int32_t* edi_2 = eax_7
            int32_t* i_1 = i
            ebp = &ebp[5]
            i = &i[5]
            eax_7 = &eax_7[5]
            int32_t edx_9 = i_1[4]
            int128_t xmm1_4 = *i_1
            *i_1 = *edi_2
            i_1[4] = edi_2[4]
            esi_2 = arg4
            *edi_2 = xmm1_4
            edi_2[4] = edx_9
            i_2 = i_3
            break
        
        esi_2 = arg4
        i_2 -= 0x14
        i_3 = i_2
        
        if (eax_7 != esi_2)
            int32_t edx_12 = eax_7[4]
            int128_t xmm1_7 = *eax_7
            *eax_7 = *i_2
            eax_7[4] = i_2[4]
            eax_7 = &eax_7[5]
            *i_2 = xmm1_7
            i_2[4] = edx_12
            break
        
        i -= 0x14
        
        if (i_2 != i)
            int32_t edx_10 = i_2[4]
            int128_t xmm1_5 = *i_2
            *i_2 = *i
            i_2[4] = i[4]
            *i = xmm1_5
            i[4] = edx_10
        
        int128_t xmm0_6 = *(ebp - 0x14)
        int32_t edx_11 = i[4]
        ebp -= 0x14
        int128_t xmm1_6 = *i
        *i = xmm0_6
        i[4] = ebp[4]
        *ebp = xmm1_6
        ebp[4] = edx_11
