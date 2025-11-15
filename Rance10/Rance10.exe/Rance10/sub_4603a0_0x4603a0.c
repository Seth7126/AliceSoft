// 函数: sub_4603a0
// 地址: 0x4603a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg3
sub_429080(&arg3)
int32_t* edx = *ebx
int32_t* edx_1
int32_t* esi

if (*(edx + 0xd) == 0)
    if (*(ebx[2] + 0xd) != 0)
        esi = edx
        goto label_4603df
    
    int32_t* edi_1 = arg3
    esi = edi_1[2]
    
    if (edi_1 == ebx)
        goto label_4603df
    
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
    
    void* eax_9 = *arg1
    
    if (*(eax_9 + 4) != ebx)
        void** eax_10 = ebx[1]
        
        if (*eax_10 != ebx)
            eax_10[2] = edi_1
        else
            *eax_10 = edi_1
    else
        *(eax_9 + 4) = edi_1
    
    edi_1[1] = ebx[1]
    int32_t eax_11
    eax_11.b = ebx[3].b
    edi_1[3].b = eax_11.b
    ebx[3].b = edi_1[3].b
else
    esi = ebx[2]
label_4603df:
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
            *(edi_3 + 8) = sub_44e380(esi)
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
            
            int32_t* ecx_4 = *edx_1
            
            if (esi != ecx_4)
                if (ecx_4[3].b == 0)
                    ecx_4[3].b = 1
                    void* ecx_6 = *edx_1
                    edx_1[3].b = 0
                    *edx_1 = *(ecx_6 + 8)
                    void* eax_26 = *(ecx_6 + 8)
                    
                    if (*(eax_26 + 0xd) == 0)
                        *(eax_26 + 4) = edx_1
                    
                    *(ecx_6 + 4) = edx_1[1]
                    void* eax_28 = *arg1
                    
                    if (edx_1 != *(eax_28 + 4))
                        void** eax_29 = edx_1[1]
                        
                        if (edx_1 != eax_29[2])
                            *eax_29 = ecx_6
                        else
                            eax_29[2] = ecx_6
                    else
                        *(eax_28 + 4) = ecx_6
                    
                    *(ecx_6 + 8) = edx_1
                    edx_1[1] = ecx_6
                    ecx_4 = *edx_1
                
                if (*(ecx_4 + 0xd) == 0)
                    if (*(ecx_4[2] + 0xc) != 1 || *(*ecx_4 + 0xc) != 1)
                        int32_t*** eax_46
                        
                        if ((*ecx_4)[3].b == 1)
                            *(ecx_4[2] + 0xc) = 1
                            int32_t** edi_6 = ecx_4[2]
                            ecx_4[3].b = 0
                            ecx_4[2] = *edi_6
                            int32_t* eax_44 = *edi_6
                            
                            if (*(eax_44 + 0xd) == 0)
                                eax_44[1] = ecx_4
                            
                            edi_6[1] = ecx_4[1]
                            eax_46 = *arg1
                            
                            if (ecx_4 != eax_46[1])
                                eax_46 = ecx_4[1]
                                
                                if (ecx_4 != *eax_46)
                                    eax_46[2] = edi_6
                                else
                                    *eax_46 = edi_6
                            else
                                eax_46[1] = edi_6
                            
                            *edi_6 = ecx_4
                            ecx_4[1] = edi_6
                            ecx_4 = *edx_1
                        
                        eax_46.b = edx_1[3].b
                        ecx_4[3].b = eax_46.b
                        edx_1[3].b = 1
                        *(*ecx_4 + 0xc) = 1
                        void* ecx_9 = *edx_1
                        *edx_1 = *(ecx_9 + 8)
                        void* eax_49 = *(ecx_9 + 8)
                        
                        if (*(eax_49 + 0xd) == 0)
                            *(eax_49 + 4) = edx_1
                        
                        *(ecx_9 + 4) = edx_1[1]
                        void* eax_51 = *arg1
                        
                        if (edx_1 != *(eax_51 + 4))
                            void** eax_52 = edx_1[1]
                            
                            if (edx_1 != eax_52[2])
                                *eax_52 = ecx_9
                                *(ecx_9 + 8) = edx_1
                                edx_1[1] = ecx_9
                            else
                                eax_52[2] = ecx_9
                                *(ecx_9 + 8) = edx_1
                                edx_1[1] = ecx_9
                        else
                            *(eax_51 + 4) = ecx_9
                            *(ecx_9 + 8) = edx_1
                            edx_1[1] = ecx_9
                        
                        break
                    
                    ecx_4[3].b = 0
            else
                ecx_4 = edx_1[2]
                
                if (ecx_4[3].b == 0)
                    ecx_4[3].b = 1
                    int32_t* ecx_5 = edx_1[2]
                    edx_1[3].b = 0
                    edx_1[2] = *ecx_5
                    void* eax_14 = *ecx_5
                    
                    if (*(eax_14 + 0xd) == 0)
                        *(eax_14 + 4) = edx_1
                    
                    ecx_5[1] = edx_1[1]
                    void* eax_16 = *arg1
                    
                    if (edx_1 != *(eax_16 + 4))
                        int32_t** eax_17 = edx_1[1]
                        
                        if (edx_1 != *eax_17)
                            eax_17[2] = ecx_5
                        else
                            *eax_17 = ecx_5
                    else
                        *(eax_16 + 4) = ecx_5
                    
                    *ecx_5 = edx_1
                    edx_1[1] = ecx_5
                    ecx_4 = edx_1[2]
                
                if (*(ecx_4 + 0xd) == 0)
                    if (*(*ecx_4 + 0xc) != 1 || *(ecx_4[2] + 0xc) != 1)
                        void** eax_24
                        
                        if (ecx_4[2][3].b == 1)
                            *(*ecx_4 + 0xc) = 1
                            void* edi_5 = *ecx_4
                            ecx_4[3].b = 0
                            *ecx_4 = *(edi_5 + 8)
                            void* eax_22 = *(edi_5 + 8)
                            
                            if (*(eax_22 + 0xd) == 0)
                                *(eax_22 + 4) = ecx_4
                            
                            *(edi_5 + 4) = ecx_4[1]
                            eax_24 = *arg1
                            
                            if (ecx_4 != eax_24[1])
                                eax_24 = ecx_4[1]
                                
                                if (ecx_4 != eax_24[2])
                                    *eax_24 = edi_5
                                else
                                    eax_24[2] = edi_5
                            else
                                eax_24[1] = edi_5
                            
                            *(edi_5 + 8) = ecx_4
                            ecx_4[1] = edi_5
                            ecx_4 = edx_1[2]
                        
                        eax_24.b = edx_1[3].b
                        ecx_4[3].b = eax_24.b
                        edx_1[3].b = 1
                        *(ecx_4[2] + 0xc) = 1
                        int32_t** ecx_8 = edx_1[2]
                        edx_1[2] = *ecx_8
                        int32_t* eax_38 = *ecx_8
                        
                        if (*(eax_38 + 0xd) == 0)
                            eax_38[1] = edx_1
                        
                        ecx_8[1] = edx_1[1]
                        void* eax_40 = *arg1
                        
                        if (edx_1 != *(eax_40 + 4))
                            int32_t*** eax_41 = edx_1[1]
                            
                            if (edx_1 != *eax_41)
                                eax_41[2] = ecx_8
                                *ecx_8 = edx_1
                                edx_1[1] = ecx_8
                            else
                                *eax_41 = ecx_8
                                *ecx_8 = edx_1
                                edx_1[1] = ecx_8
                        else
                            *(eax_40 + 4) = ecx_8
                            *ecx_8 = edx_1
                            edx_1[1] = ecx_8
                        
                        break
                    
                    ecx_4[3].b = 0
            
            edx_1 = edx_1[1]
            esi = var_8_1
            
            if (edi_4 == *(*arg1 + 4))
                esi = var_4_1
                break
    
    esi[3].b = 1

sub_403160(ebx, 1, 0x18)
int32_t eax_33 = arg1[1]
int32_t* ecx_7 = arg3

if (eax_33 != 0)
    arg1[1] = eax_33 - 1

*arg2 = ecx_7
return arg2
