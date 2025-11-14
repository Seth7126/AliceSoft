// 函数: sub_551900
// 地址: 0x551900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi_2 = arg4
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q((arg4 - arg2) s/ 0x14)
int32_t* i = &arg2[((eax_4 - edx_2) s>> 1) * 5]
int32_t* eax_8 = esi_2 - 0x14
sub_552550(eax_8, i, arg2, eax_8, arg5)
int32_t* edi = &i[5]
int32_t* var_14 = edi

for (; arg2 u< i; i = &i[-5])
    int32_t ecx_1 = i[-5]
    int32_t edx_4 = *i
    
    if (ecx_1 s< edx_4)
        break
    
    if (edx_4 s< ecx_1)
        break

if (edi u< esi_2)
    int32_t ecx_2 = *i
    
    do
        int32_t eax_9 = *edi
        
        if (eax_9 s< ecx_2)
            break
        
        if (ecx_2 s< eax_9)
            break
        
        edi = &edi[5]
    while (edi u< esi_2)
    
    var_14 = edi

int32_t* i_1 = i
int32_t* ebx_1 = edi
int32_t* i_3 = i_1

while (true)
    int32_t* var_10_1 = ebx_1
    
    while (true)
        if (ebx_1 u< esi_2)
            void* ecx_3 = &edi[-2]
            
            do
                int32_t edx_5 = *i
                int32_t eax_10 = *ebx_1
                
                if (edx_5 s>= eax_10)
                    if (eax_10 s< edx_5)
                        break
                    
                    int32_t* eax_11 = edi
                    ecx_3 += 0x14
                    edi = &edi[5]
                    var_14 = edi
                    
                    if (eax_11 != ebx_1)
                        int32_t esi_3 = *(ecx_3 - 0xc)
                        int32_t edx_6 = *(ecx_3 - 8)
                        int32_t xmm0_1 = *ecx_3
                        int32_t ecx_4 = *(ecx_3 + 4)
                        *(ecx_3 - 0xc) = *ebx_1
                        *(ecx_3 - 8) = ebx_1[1]
                        *ecx_3 = ebx_1[3]
                        *(ecx_3 + 4) = ebx_1[4]
                        edi = var_14
                        *ebx_1 = esi_3
                        esi_2 = arg4
                        ebx_1[1] = edx_6
                        ebx_1[3] = xmm0_1
                        ebx_1[4] = ecx_4
                
                ebx_1 = &ebx_1[5]
            while (ebx_1 u< esi_2)
            
            i_1 = i_3
            var_10_1 = ebx_1
        
        bool cond:0_1 = i_1 != arg2
        
        if (i_1 u> arg2)
            void* edi_3 = &i_1[-2]
            
            do
                int32_t ecx_6 = *(edi_3 - 0xc)
                int32_t edx_7 = *i
                
                if (ecx_6 s>= edx_7)
                    if (edx_7 s< ecx_6)
                        break
                    
                    i -= 0x14
                    
                    if (i != edi_3 - 0xc)
                        int32_t esi_4 = *i
                        int32_t edx_8 = i[1]
                        int32_t xmm0_2 = i[3]
                        int32_t ecx_7 = i[4]
                        *i = *(edi_3 - 0xc)
                        i[1] = *(edi_3 - 8)
                        i[3] = *edi_3
                        i[4] = *(edi_3 + 4)
                        *(edi_3 - 0xc) = esi_4
                        *(edi_3 - 8) = edx_8
                        *edi_3 = xmm0_2
                        *(edi_3 + 4) = ecx_7
                    
                    i_1 = i_3
                
                i_1 -= 0x14
                edi_3 -= 0x14
                i_3 = i_1
            while (arg2 u< i_1)
            
            cond:0_1 = i_1 != arg2
            ebx_1 = var_10_1
            edi = var_14
            esi_2 = arg4
        
        if (cond:0_1)
            i_3 = i_1 - 0x14
            
            if (ebx_1 != esi_2)
                int32_t esi_9 = *ebx_1
                int32_t edx_13 = ebx_1[1]
                int32_t xmm0_7 = ebx_1[3]
                int32_t ecx_13 = ebx_1[4]
                *ebx_1 = *(i_1 - 0x14)
                ebx_1[1] = i_3[1]
                ebx_1[3] = i_3[3]
                ebx_1[4] = i_3[4]
                ebx_1 = &ebx_1[5]
                i_1 = i_3
                *i_1 = esi_9
                esi_2 = arg4
                i_1[1] = edx_13
                i_1[3] = xmm0_7
                i_1[4] = ecx_13
                break
            
            i -= 0x14
            
            if (i_1 - 0x14 != i)
                int32_t esi_7 = *(i_1 - 0x14)
                int32_t edx_11 = *(i_1 - 0x10)
                int32_t xmm0_5 = *(i_1 - 8)
                int32_t ecx_11 = *(i_1 - 4)
                *i_3 = *i
                i_3[1] = i[1]
                i_3[3] = i[3]
                i_3[4] = i[4]
                ebx_1 = var_10_1
                *i = esi_7
                i[1] = edx_11
                i[3] = xmm0_5
                i[4] = ecx_11
            
            int32_t eax_34 = edi[-5]
            edi -= 0x14
            int32_t esi_8 = *i
            int32_t edx_12 = i[1]
            int32_t xmm0_6 = i[3]
            int32_t ecx_12 = i[4]
            *i = eax_34
            i[1] = edi[1]
            i[3] = edi[3]
            i[4] = edi[4]
            i_1 = i_3
            *edi = esi_8
            esi_2 = arg4
            edi[1] = edx_12
            edi[3] = xmm0_6
            var_14 = edi
            edi[4] = ecx_12
        else
            if (ebx_1 == esi_2)
                arg3[1] = edi
                *arg3 = i
                return arg3
            
            if (edi != ebx_1)
                int32_t esi_5 = *i
                int32_t edx_9 = i[1]
                int32_t xmm0_3 = i[3]
                int32_t ecx_9 = i[4]
                *i = *edi
                i[1] = edi[1]
                i[3] = edi[3]
                i[4] = edi[4]
                *edi = esi_5
                edi[1] = edx_9
                edi[3] = xmm0_3
                edi[4] = ecx_9
            
            var_14 = &edi[5]
            int32_t* i_2 = i
            i = &i[5]
            var_10_1 = &var_10_1[5]
            int32_t esi_6 = *i_2
            int32_t edx_10 = i_2[1]
            int32_t xmm0_4 = i_2[3]
            int32_t ecx_10 = i_2[4]
            *i_2 = *ebx_1
            i_2[1] = ebx_1[1]
            i_2[3] = ebx_1[3]
            i_2[4] = ebx_1[4]
            edi = var_14
            i_1 = i_3
            *ebx_1 = esi_6
            esi_2 = arg4
            ebx_1[1] = edx_10
            ebx_1[3] = xmm0_4
            ebx_1[4] = ecx_10
            ebx_1 = var_10_1
