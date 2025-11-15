// 函数: sub_592d50
// 地址: 0x592d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg3
sub_429080(&arg3)
int32_t* edx = *ebx
int32_t* edx_1
int32_t* esi

if (*(edx + 0xd) == 0)
    if (*(ebx[2] + 0xd) != 0)
        esi = edx
        goto label_592d93
    
    int32_t* edi_1 = arg3
    esi = edi_1[2]
    
    if (edi_1 == ebx)
        goto label_592d93
    
    edx[1] = edi_1
    *edi_1 = *ebx
    
    if (edi_1 != ebx[2])
        edx_1 = edi_1[1]
        
        if (*(esi + 0xd) == 0)
            esi[1] = edx_1
        
        *edx_1 = esi
        edi_1[2] = ebx[2]
        *(ebx[2] + 4) = edi_1
    else
        edx_1 = edi_1
    
    void* eax_8 = *arg1
    
    if (*(eax_8 + 4) != ebx)
        void** eax_9 = ebx[1]
        
        if (*eax_9 != ebx)
            eax_9[2] = edi_1
        else
            *eax_9 = edi_1
    else
        *(eax_8 + 4) = edi_1
    
    edi_1[1] = ebx[1]
    int32_t eax_10
    eax_10.b = ebx[3].b
    edi_1[3].b = eax_10.b
    ebx[3].b = edi_1[3].b
else
    esi = ebx[2]
label_592d93:
    edx_1 = ebx[1]
    
    if (*(esi + 0xd) == 0)
        esi[1] = edx_1
    
    void* eax_2 = *arg1
    
    if (*(eax_2 + 4) == ebx)
        *(eax_2 + 4) = esi
    else if (*edx_1 != ebx)
        edx_1[2] = esi
    else
        *edx_1 = esi
    
    int32_t* edi_2 = *arg1
    
    if (*edi_2 == ebx)
        int32_t* ecx_2
        
        if (*(esi + 0xd) == 0)
            int32_t* eax_3 = *esi
            ecx_2 = esi
            
            while (*(eax_3 + 0xd) == 0)
                ecx_2 = eax_3
                eax_3 = *ecx_2
        else
            ecx_2 = edx_1
        
        *edi_2 = ecx_2
    
    void* edi_3 = *arg1
    
    if (*(edi_3 + 8) == ebx)
        if (*(esi + 0xd) == 0)
            int32_t* eax_4 = esi[2]
            int32_t* ecx_4 = esi
            
            while (*(eax_4 + 0xd) == 0)
                ecx_4 = eax_4
                eax_4 = ecx_4[2]
            
            *(edi_3 + 8) = ecx_4
        else
            *(edi_3 + 8) = edx_1

if (ebx[3].b == 1)
    if (esi != *(*arg1 + 4))
        while (true)
            int32_t* edi_4 = edx_1
            int32_t* var_8_1 = edx_1
            int32_t* var_4_1 = edx_1
            
            if (esi[3].b != 1)
                break
            
            int32_t* ecx_5 = *edx_1
            
            if (esi != ecx_5)
                if (ecx_5[3].b == 0)
                    ecx_5[3].b = 1
                    void* ecx_7 = *edx_1
                    edx_1[3].b = 0
                    *edx_1 = *(ecx_7 + 8)
                    void* eax_25 = *(ecx_7 + 8)
                    
                    if (*(eax_25 + 0xd) == 0)
                        *(eax_25 + 4) = edx_1
                    
                    *(ecx_7 + 4) = edx_1[1]
                    void* eax_27 = *arg1
                    
                    if (edx_1 != *(eax_27 + 4))
                        void** eax_28 = edx_1[1]
                        
                        if (edx_1 != eax_28[2])
                            *eax_28 = ecx_7
                        else
                            eax_28[2] = ecx_7
                    else
                        *(eax_27 + 4) = ecx_7
                    
                    *(ecx_7 + 8) = edx_1
                    edx_1[1] = ecx_7
                    ecx_5 = *edx_1
                
                if (*(ecx_5 + 0xd) == 0)
                    if (*(ecx_5[2] + 0xc) != 1 || *(*ecx_5 + 0xc) != 1)
                        int32_t*** eax_45
                        
                        if ((*ecx_5)[3].b == 1)
                            *(ecx_5[2] + 0xc) = 1
                            int32_t** edi_6 = ecx_5[2]
                            ecx_5[3].b = 0
                            ecx_5[2] = *edi_6
                            int32_t* eax_43 = *edi_6
                            
                            if (*(eax_43 + 0xd) == 0)
                                eax_43[1] = ecx_5
                            
                            edi_6[1] = ecx_5[1]
                            eax_45 = *arg1
                            
                            if (ecx_5 != eax_45[1])
                                eax_45 = ecx_5[1]
                                
                                if (ecx_5 != *eax_45)
                                    eax_45[2] = edi_6
                                else
                                    *eax_45 = edi_6
                            else
                                eax_45[1] = edi_6
                            
                            *edi_6 = ecx_5
                            ecx_5[1] = edi_6
                            ecx_5 = *edx_1
                        
                        eax_45.b = edx_1[3].b
                        ecx_5[3].b = eax_45.b
                        edx_1[3].b = 1
                        *(*ecx_5 + 0xc) = 1
                        void* ecx_11 = *edx_1
                        *edx_1 = *(ecx_11 + 8)
                        void* eax_48 = *(ecx_11 + 8)
                        
                        if (*(eax_48 + 0xd) == 0)
                            *(eax_48 + 4) = edx_1
                        
                        *(ecx_11 + 4) = edx_1[1]
                        void* eax_50 = *arg1
                        
                        if (edx_1 != *(eax_50 + 4))
                            void** eax_51 = edx_1[1]
                            
                            if (edx_1 != eax_51[2])
                                *eax_51 = ecx_11
                                *(ecx_11 + 8) = edx_1
                                edx_1[1] = ecx_11
                            else
                                eax_51[2] = ecx_11
                                *(ecx_11 + 8) = edx_1
                                edx_1[1] = ecx_11
                        else
                            *(eax_50 + 4) = ecx_11
                            *(ecx_11 + 8) = edx_1
                            edx_1[1] = ecx_11
                        
                        break
                    
                    ecx_5[3].b = 0
            else
                ecx_5 = edx_1[2]
                
                if (ecx_5[3].b == 0)
                    ecx_5[3].b = 1
                    int32_t* ecx_6 = edx_1[2]
                    edx_1[3].b = 0
                    edx_1[2] = *ecx_6
                    void* eax_13 = *ecx_6
                    
                    if (*(eax_13 + 0xd) == 0)
                        *(eax_13 + 4) = edx_1
                    
                    ecx_6[1] = edx_1[1]
                    void* eax_15 = *arg1
                    
                    if (edx_1 != *(eax_15 + 4))
                        int32_t** eax_16 = edx_1[1]
                        
                        if (edx_1 != *eax_16)
                            eax_16[2] = ecx_6
                        else
                            *eax_16 = ecx_6
                    else
                        *(eax_15 + 4) = ecx_6
                    
                    *ecx_6 = edx_1
                    edx_1[1] = ecx_6
                    ecx_5 = edx_1[2]
                
                if (*(ecx_5 + 0xd) == 0)
                    if (*(*ecx_5 + 0xc) != 1 || *(ecx_5[2] + 0xc) != 1)
                        void** eax_23
                        
                        if (ecx_5[2][3].b == 1)
                            *(*ecx_5 + 0xc) = 1
                            void* edi_5 = *ecx_5
                            ecx_5[3].b = 0
                            *ecx_5 = *(edi_5 + 8)
                            void* eax_21 = *(edi_5 + 8)
                            
                            if (*(eax_21 + 0xd) == 0)
                                *(eax_21 + 4) = ecx_5
                            
                            *(edi_5 + 4) = ecx_5[1]
                            eax_23 = *arg1
                            
                            if (ecx_5 != eax_23[1])
                                eax_23 = ecx_5[1]
                                
                                if (ecx_5 != eax_23[2])
                                    *eax_23 = edi_5
                                else
                                    eax_23[2] = edi_5
                            else
                                eax_23[1] = edi_5
                            
                            *(edi_5 + 8) = ecx_5
                            ecx_5[1] = edi_5
                            ecx_5 = edx_1[2]
                        
                        eax_23.b = edx_1[3].b
                        ecx_5[3].b = eax_23.b
                        edx_1[3].b = 1
                        *(ecx_5[2] + 0xc) = 1
                        int32_t** ecx_10 = edx_1[2]
                        edx_1[2] = *ecx_10
                        int32_t* eax_37 = *ecx_10
                        
                        if (*(eax_37 + 0xd) == 0)
                            eax_37[1] = edx_1
                        
                        ecx_10[1] = edx_1[1]
                        void* eax_39 = *arg1
                        
                        if (edx_1 != *(eax_39 + 4))
                            int32_t*** eax_40 = edx_1[1]
                            
                            if (edx_1 != *eax_40)
                                eax_40[2] = ecx_10
                                *ecx_10 = edx_1
                                edx_1[1] = ecx_10
                            else
                                *eax_40 = ecx_10
                                *ecx_10 = edx_1
                                edx_1[1] = ecx_10
                        else
                            *(eax_39 + 4) = ecx_10
                            *ecx_10 = edx_1
                            edx_1[1] = ecx_10
                        
                        break
                    
                    ecx_5[3].b = 0
            
            edx_1 = edx_1[1]
            esi = var_8_1
            
            if (edi_4 == *(*arg1 + 4))
                esi = var_4_1
                break
    
    esi[3].b = 1

sub_5932b0(&ebx[4])
sub_403160(ebx, 1, 0x34)
int32_t eax_32 = arg1[1]
int32_t* ecx_9 = arg3

if (eax_32 != 0)
    arg1[1] = eax_32 - 1

*arg2 = ecx_9
return arg2
