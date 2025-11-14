// 函数: sub_5af560
// 地址: 0x5af560
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi_2 = arg4
int32_t eax_4
int32_t edx_3
edx_3:eax_4 = sx.q((arg4 - arg2) s/ 0x1c)
int32_t* i = &arg2[((eax_4 - edx_3) s>> 1) * 7]
sub_5b0140(esi_2 - 0x1c, i, arg2, esi_2 - 0x1c, arg5)
int32_t* edi = &i[7]
int32_t* var_14 = edi

for (; arg2 u< i; i = &i[-7])
    int32_t ecx_3 = i[-7]
    int32_t edx_5 = *i
    
    if (ecx_3 s< edx_5)
        break
    
    if (edx_5 s< ecx_3)
        break

if (edi u< esi_2)
    int32_t ecx_4 = *i
    
    do
        int32_t eax_8 = *edi
        
        if (eax_8 s< ecx_4)
            break
        
        if (ecx_4 s< eax_8)
            break
        
        edi = &edi[7]
    while (edi u< esi_2)
    
    var_14 = edi

int32_t* i_1 = i
int32_t* ebx_1 = edi
int32_t* i_3 = i_1

while (true)
    int32_t* var_18_1 = ebx_1
    
    while (true)
        if (ebx_1 u< esi_2)
            void* esi_3 = &ebx_1[4]
            void* var_18_2 = esi_3
            void* ecx_5 = &edi[-3]
            
            do
                int32_t edx_6 = *i
                int32_t eax_9 = *ebx_1
                
                if (edx_6 s>= eax_9)
                    if (eax_9 s< edx_6)
                        break
                    
                    int32_t* eax_10 = edi
                    ecx_5 += 0x1c
                    edi = &edi[7]
                    var_14 = edi
                    
                    if (eax_10 != ebx_1)
                        int32_t xmm1_1 = *(ecx_5 - 4)
                        int32_t xmm2_1 = *ecx_5
                        int32_t xmm0_1 = *(ecx_5 + 4)
                        int32_t esi_4 = *(ecx_5 - 0x10)
                        int32_t edx_7 = *(ecx_5 - 0xc)
                        int32_t ecx_6 = *(ecx_5 + 8)
                        *(ecx_5 - 0x10) = *ebx_1
                        *(ecx_5 - 0xc) = *(var_18_2 - 0xc)
                        *(ecx_5 - 4) = *(var_18_2 - 4)
                        *ecx_5 = *var_18_2
                        *(ecx_5 + 4) = *(var_18_2 + 4)
                        *(ecx_5 + 8) = *(var_18_2 + 8)
                        edi = var_14
                        *ebx_1 = esi_4
                        esi_3 = var_18_2
                        *(esi_3 - 0xc) = edx_7
                        *(esi_3 - 4) = xmm1_1
                        *esi_3 = xmm2_1
                        *(esi_3 + 4) = xmm0_1
                        *(esi_3 + 8) = ecx_6
                
                ebx_1 = &ebx_1[7]
                esi_3 += 0x1c
                var_18_2 = esi_3
            while (ebx_1 u< arg4)
            
            i_1 = i_3
            var_18_1 = ebx_1
        
        int32_t* esi_5 = arg2
        bool cond:0_1 = i_1 != esi_5
        
        if (i_1 u> esi_5)
            void* ebx_2 = &i[4]
            void* edi_3 = &i_1[-3]
            
            do
                int32_t ecx_7 = *(edi_3 - 0x10)
                int32_t edx_8 = *i
                
                if (ecx_7 s>= edx_8)
                    if (edx_8 s< ecx_7)
                        break
                    
                    i -= 0x1c
                    ebx_2 -= 0x1c
                    
                    if (i != edi_3 - 0x10)
                        int32_t xmm1_2 = *(ebx_2 - 4)
                        int32_t xmm2_2 = *ebx_2
                        int32_t xmm0_2 = *(ebx_2 + 4)
                        int32_t esi_6 = *i
                        int32_t edx_9 = *(ebx_2 - 0xc)
                        int32_t ecx_8 = *(ebx_2 + 8)
                        *i = *(edi_3 - 0x10)
                        *(ebx_2 - 0xc) = *(edi_3 - 0xc)
                        *(ebx_2 - 4) = *(edi_3 - 4)
                        *ebx_2 = *edi_3
                        *(ebx_2 + 4) = *(edi_3 + 4)
                        *(ebx_2 + 8) = *(edi_3 + 8)
                        *(edi_3 - 0x10) = esi_6
                        esi_5 = arg2
                        *(edi_3 - 0xc) = edx_9
                        *(edi_3 - 4) = xmm1_2
                        *edi_3 = xmm2_2
                        *(edi_3 + 4) = xmm0_2
                        *(edi_3 + 8) = ecx_8
                    
                    i_1 = i_3
                
                i_1 -= 0x1c
                edi_3 -= 0x1c
                i_3 = i_1
            while (esi_5 u< i_1)
            
            ebx_1 = var_18_1
            cond:0_1 = i_1 != esi_5
            edi = var_14
        
        if (cond:0_1)
            i_3 = i_1 - 0x1c
            
            if (ebx_1 != arg4)
                int32_t xmm0_7 = ebx_1[3]
                int32_t xmm1_7 = ebx_1[4]
                int32_t xmm2_7 = ebx_1[5]
                int32_t esi_11 = *ebx_1
                int32_t edx_14 = ebx_1[1]
                int32_t ecx_13 = ebx_1[6]
                *ebx_1 = *(i_1 - 0x1c)
                ebx_1[1] = i_3[1]
                ebx_1[3] = i_3[3]
                ebx_1[4] = i_3[4]
                ebx_1[5] = i_3[5]
                ebx_1[6] = i_3[6]
                ebx_1 = &ebx_1[7]
                i_1 = i_3
                *i_1 = esi_11
                esi_2 = arg4
                i_1[1] = edx_14
                i_1[3] = xmm0_7
                i_1[4] = xmm1_7
                i_1[5] = xmm2_7
                i_1[6] = ecx_13
                break
            
            i -= 0x1c
            
            if (i_1 - 0x1c != i)
                int32_t xmm0_5 = *(i_1 - 0x10)
                int32_t xmm1_5 = *(i_1 - 0xc)
                int32_t xmm2_5 = *(i_1 - 8)
                int32_t esi_9 = *(i_1 - 0x1c)
                int32_t edx_12 = *(i_1 - 0x18)
                int32_t ecx_11 = *(i_1 - 4)
                *i_3 = *i
                i_3[1] = i[1]
                i_3[3] = i[3]
                i_3[4] = i[4]
                i_3[5] = i[5]
                i_3[6] = i[6]
                ebx_1 = var_18_1
                *i = esi_9
                i[1] = edx_12
                i[3] = xmm0_5
                i[4] = xmm1_5
                i[5] = xmm2_5
                i[6] = ecx_11
            
            int32_t xmm0_6 = i[3]
            edi -= 0x1c
            int32_t xmm1_6 = i[4]
            int32_t xmm2_6 = i[5]
            int32_t esi_10 = *i
            int32_t edx_13 = i[1]
            int32_t ecx_12 = i[6]
            *i = *edi
            i[1] = edi[1]
            i[3] = edi[3]
            i[4] = edi[4]
            i[5] = edi[5]
            i[6] = edi[6]
            i_1 = i_3
            *edi = esi_10
            esi_2 = arg4
            edi[1] = edx_13
            edi[3] = xmm0_6
            edi[4] = xmm1_6
            edi[5] = xmm2_6
            var_14 = edi
            edi[6] = ecx_12
        else
            if (ebx_1 == arg4)
                arg3[1] = edi
                *arg3 = i
                return arg3
            
            if (edi != ebx_1)
                int32_t xmm0_3 = i[3]
                int32_t xmm1_3 = i[4]
                int32_t xmm2_3 = i[5]
                int32_t esi_7 = *i
                int32_t edx_10 = i[1]
                int32_t ecx_9 = i[6]
                *i = *edi
                i[1] = edi[1]
                i[3] = edi[3]
                i[4] = edi[4]
                i[5] = edi[5]
                i[6] = edi[6]
                *edi = esi_7
                edi[1] = edx_10
                edi[3] = xmm0_3
                edi[4] = xmm1_3
                edi[5] = xmm2_3
                edi[6] = ecx_9
            
            var_14 = &edi[7]
            int32_t* i_2 = i
            i = &i[7]
            var_18_1 = &var_18_1[7]
            int32_t xmm0_4 = i_2[3]
            int32_t xmm1_4 = i_2[4]
            int32_t xmm2_4 = i_2[5]
            int32_t esi_8 = *i_2
            int32_t edx_11 = i_2[1]
            int32_t ecx_10 = i_2[6]
            *i_2 = *ebx_1
            i_2[1] = ebx_1[1]
            i_2[3] = ebx_1[3]
            i_2[4] = ebx_1[4]
            i_2[5] = ebx_1[5]
            i_2[6] = ebx_1[6]
            edi = var_14
            i_1 = i_3
            *ebx_1 = esi_8
            esi_2 = arg4
            ebx_1[1] = edx_11
            ebx_1[3] = xmm0_4
            ebx_1[4] = xmm1_4
            ebx_1[5] = xmm2_4
            ebx_1[6] = ecx_10
            ebx_1 = var_18_1
