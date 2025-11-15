// 函数: sub_593e60
// 地址: 0x593e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_2 = arg4
int32_t** var_24 = arg3
int32_t* i = &arg2[(arg4 - arg2) s/ 0x18 * 3]
sub_594a40(esi_2 - 0xc, i, arg2, esi_2 - 0xc)
int32_t* ebp = &i[3]

for (; arg2 u< i; i = &i[-3])
    int32_t ecx_1 = i[-3]
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
        
        ebp = &ebp[3]
    while (ebp u< esi_2)

int32_t* i_2 = i
int32_t* eax_7 = ebp
int32_t* i_3 = i_2

while (true)
    int32_t* var_c_1 = eax_7
    
    while (true)
        if (eax_7 u< esi_2)
            void* esi_3 = &ebp[-3]
            
            do
                int32_t ecx_3 = *i
                int32_t edx_4 = *eax_7
                
                if (ecx_3 s>= edx_4)
                    if (edx_4 s< ecx_3)
                        break
                    
                    int32_t* ecx_4 = ebp
                    esi_3 += 0xc
                    ebp = &ebp[3]
                    
                    if (ecx_4 != eax_7)
                        int64_t xmm1_1 = *esi_3
                        int32_t edx_5 = *(esi_3 + 8)
                        *esi_3 = *eax_7
                        *(esi_3 + 8) = eax_7[2]
                        *eax_7 = xmm1_1
                        eax_7[2] = edx_5
                
                eax_7 = &eax_7[3]
            while (eax_7 u< arg4)
            
            i_2 = i_3
            var_c_1 = eax_7
        
        bool cond:0_1 = i_2 != arg2
        
        if (i_2 u> arg2)
            void* esi_4 = &i_2[-3]
            
            do
                int32_t ecx_7 = *esi_4
                int32_t edx_6 = *i
                
                if (ecx_7 s>= edx_6)
                    if (edx_6 s< ecx_7)
                        break
                    
                    i -= 0xc
                    
                    if (i != esi_4)
                        int64_t xmm1_2 = *i
                        int32_t edx_7 = i[2]
                        *i = *esi_4
                        i[2] = *(esi_4 + 8)
                        *esi_4 = xmm1_2
                        *(esi_4 + 8) = edx_7
                
                i_2 -= 0xc
                esi_4 -= 0xc
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
                int64_t xmm1_3 = *i
                int32_t edx_8 = i[2]
                *i = *ebp
                i[2] = ebp[2]
                *ebp = xmm1_3
                ebp[2] = edx_8
            
            int32_t* edi_2 = eax_7
            int32_t* i_1 = i
            ebp = &ebp[3]
            i = &i[3]
            eax_7 = &eax_7[3]
            int64_t xmm1_4 = *i_1
            int32_t edx_9 = i_1[2]
            *i_1 = *edi_2
            i_1[2] = edi_2[2]
            esi_2 = arg4
            *edi_2 = xmm1_4
            edi_2[2] = edx_9
            i_2 = i_3
            break
        
        esi_2 = arg4
        i_2 -= 0xc
        i_3 = i_2
        
        if (eax_7 != esi_2)
            int64_t xmm1_7 = *eax_7
            int32_t edx_12 = eax_7[2]
            *eax_7 = *i_2
            eax_7[2] = i_2[2]
            eax_7 = &eax_7[3]
            *i_2 = xmm1_7
            i_2[2] = edx_12
            break
        
        i -= 0xc
        
        if (i_2 != i)
            int64_t xmm1_5 = *i_2
            int32_t edx_10 = i_2[2]
            *i_2 = *i
            i_2[2] = i[2]
            *i = xmm1_5
            i[2] = edx_10
        
        int64_t xmm0_6 = *(ebp - 0xc)
        ebp -= 0xc
        int64_t xmm1_6 = *i
        int32_t edx_11 = i[2]
        *i = xmm0_6
        i[2] = ebp[2]
        *ebp = xmm1_6
        ebp[2] = edx_11
