// 函数: sub_473dc0
// 地址: 0x473dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = arg3
int32_t* i_5 = i

if (*(i + 0xd) == 0)
    int32_t* i_1 = i[2]
    
    if (*(i_1 + 0xd) != 0)
        int32_t* i_3 = i[1]
        
        if (*(i_3 + 0xd) == 0)
            while (i == i_3[2])
                i = i_3
                arg3 = i
                i_3 = i_3[1]
                
                if (*(i_3 + 0xd) != 0)
                    break
        
        i = i_3
    else
        i = i_1
        int32_t* i_2 = *i
        
        while (*(i_2 + 0xd) == 0)
            i = i_2
            i_2 = *i
    
    arg3 = i

int32_t* i_12 = *i_5
int32_t* i_4
int32_t* i_11

if (*(i_12 + 0xd) == 0)
    if (*(i_5[2] + 0xd) != 0)
        i_11 = i_12
        goto label_473e44
    
    i_11 = i[2]
    
    if (i == i_5)
        goto label_473e44
    
    i_12[1] = i
    *i = *i_5
    
    if (i != i_5[2])
        i_4 = i[1]
        
        if (*(i_11 + 0xd) == 0)
            i_11[1] = i_4
        
        *i_4 = i_11
        i[2] = i_5[2]
        *(i_5[2] + 4) = i
    else
        i_4 = i
    
    void* eax_6 = *arg1
    
    if (*(eax_6 + 4) != i_5)
        int32_t* eax_7 = i_5[1]
        
        if (*eax_7 != i_5)
            eax_7[2] = i
        else
            *eax_7 = i
    else
        *(eax_6 + 4) = i
    
    i[1] = i_5[1]
    int32_t eax_8
    eax_8.b = i_5[3].b
    i_12.b = i[3].b
    i[3].b = eax_8.b
    i_5[3].b = i_12.b
else
    i_11 = i_5[2]
label_473e44:
    i_4 = i_5[1]
    
    if (*(i_11 + 0xd) == 0)
        i_11[1] = i_4
    
    void* eax_2 = *arg1
    
    if (*(eax_2 + 4) == i_5)
        *(eax_2 + 4) = i_11
    else if (*i_4 != i_5)
        i_4[2] = i_11
    else
        *i_4 = i_11
    
    int32_t* esi = *arg1
    
    if (*esi == i_5)
        int32_t* i_8
        
        if (*(i_11 + 0xd) == 0)
            int32_t* i_10 = *i_11
            i_8 = i_11
            
            while (*(i_10 + 0xd) == 0)
                i_8 = i_10
                i_10 = *i_8
        else
            i_8 = i_4
        
        *esi = i_8
    
    void* esi_1 = *arg1
    
    if (*(esi_1 + 8) == i_5)
        if (*(i_11 + 0xd) == 0)
            int32_t* i_14 = i_11[2]
            int32_t* i_13 = i_11
            
            while (*(i_14 + 0xd) == 0)
                i_13 = i_14
                i_14 = i_13[2]
            
            *(esi_1 + 8) = i_13
        else
            *(esi_1 + 8) = i_4

if (i_5[3].b == 1)
    if (i_11 != *(*arg1 + 4))
        while (true)
            int32_t* i_9 = i_4
            int32_t* i_6 = i_4
            int32_t* i_7 = i_4
            
            if (i_11[3].b != 1)
                break
            
            int32_t* ecx_1 = *i_4
            
            if (i_11 != ecx_1)
                if (ecx_1[3].b == 0)
                    ecx_1[3].b = 1
                    void* ecx_3 = *i_4
                    i_4[3].b = 0
                    *i_4 = *(ecx_3 + 8)
                    void* eax_23 = *(ecx_3 + 8)
                    
                    if (*(eax_23 + 0xd) == 0)
                        *(eax_23 + 4) = i_4
                    
                    *(ecx_3 + 4) = i_4[1]
                    void* eax_25 = *arg1
                    
                    if (i_4 != *(eax_25 + 4))
                        void** eax_26 = i_4[1]
                        
                        if (i_4 != eax_26[2])
                            *eax_26 = ecx_3
                        else
                            eax_26[2] = ecx_3
                    else
                        *(eax_25 + 4) = ecx_3
                    
                    *(ecx_3 + 8) = i_4
                    i_4[1] = ecx_3
                    ecx_1 = *i_4
                
                if (*(ecx_1 + 0xd) == 0)
                    if (*(ecx_1[2] + 0xc) != 1 || *(*ecx_1 + 0xc) != 1)
                        int32_t*** eax_45
                        
                        if ((*ecx_1)[3].b == 1)
                            *(ecx_1[2] + 0xc) = 1
                            int32_t** esi_4 = ecx_1[2]
                            ecx_1[3].b = 0
                            ecx_1[2] = *esi_4
                            int32_t* eax_43 = *esi_4
                            
                            if (*(eax_43 + 0xd) == 0)
                                eax_43[1] = ecx_1
                            
                            esi_4[1] = ecx_1[1]
                            eax_45 = *arg1
                            
                            if (ecx_1 != eax_45[1])
                                eax_45 = ecx_1[1]
                                
                                if (ecx_1 != *eax_45)
                                    eax_45[2] = esi_4
                                else
                                    *eax_45 = esi_4
                            else
                                eax_45[1] = esi_4
                            
                            *esi_4 = ecx_1
                            ecx_1[1] = esi_4
                            ecx_1 = *i_4
                        
                        eax_45.b = i_4[3].b
                        ecx_1[3].b = eax_45.b
                        i_4[3].b = 1
                        *(*ecx_1 + 0xc) = 1
                        void* ecx_7 = *i_4
                        *i_4 = *(ecx_7 + 8)
                        void* eax_48 = *(ecx_7 + 8)
                        
                        if (*(eax_48 + 0xd) == 0)
                            *(eax_48 + 4) = i_4
                        
                        *(ecx_7 + 4) = i_4[1]
                        void* eax_50 = *arg1
                        
                        if (i_4 != *(eax_50 + 4))
                            void** eax_51 = i_4[1]
                            
                            if (i_4 != eax_51[2])
                                *eax_51 = ecx_7
                                *(ecx_7 + 8) = i_4
                                i_4[1] = ecx_7
                            else
                                eax_51[2] = ecx_7
                                *(ecx_7 + 8) = i_4
                                i_4[1] = ecx_7
                        else
                            *(eax_50 + 4) = ecx_7
                            *(ecx_7 + 8) = i_4
                            i_4[1] = ecx_7
                        
                        break
                    
                    ecx_1[3].b = 0
            else
                ecx_1 = i_4[2]
                
                if (ecx_1[3].b == 0)
                    ecx_1[3].b = 1
                    int32_t* ecx_2 = i_4[2]
                    i_4[3].b = 0
                    i_4[2] = *ecx_2
                    void* eax_11 = *ecx_2
                    
                    if (*(eax_11 + 0xd) == 0)
                        *(eax_11 + 4) = i_4
                    
                    ecx_2[1] = i_4[1]
                    void* eax_13 = *arg1
                    
                    if (i_4 != *(eax_13 + 4))
                        int32_t** eax_14 = i_4[1]
                        
                        if (i_4 != *eax_14)
                            eax_14[2] = ecx_2
                        else
                            *eax_14 = ecx_2
                    else
                        *(eax_13 + 4) = ecx_2
                    
                    *ecx_2 = i_4
                    i_4[1] = ecx_2
                    ecx_1 = i_4[2]
                
                if (*(ecx_1 + 0xd) == 0)
                    if (*(*ecx_1 + 0xc) != 1 || *(ecx_1[2] + 0xc) != 1)
                        void** eax_21
                        
                        if (ecx_1[2][3].b == 1)
                            *(*ecx_1 + 0xc) = 1
                            void* esi_2 = *ecx_1
                            ecx_1[3].b = 0
                            *ecx_1 = *(esi_2 + 8)
                            void* eax_19 = *(esi_2 + 8)
                            
                            if (*(eax_19 + 0xd) == 0)
                                *(eax_19 + 4) = ecx_1
                            
                            *(esi_2 + 4) = ecx_1[1]
                            eax_21 = *arg1
                            
                            if (ecx_1 != eax_21[1])
                                eax_21 = ecx_1[1]
                                
                                if (ecx_1 != eax_21[2])
                                    *eax_21 = esi_2
                                else
                                    eax_21[2] = esi_2
                            else
                                eax_21[1] = esi_2
                            
                            *(esi_2 + 8) = ecx_1
                            ecx_1[1] = esi_2
                            ecx_1 = i_4[2]
                        
                        eax_21.b = i_4[3].b
                        ecx_1[3].b = eax_21.b
                        i_4[3].b = 1
                        *(ecx_1[2] + 0xc) = 1
                        int32_t** ecx_6 = i_4[2]
                        i_4[2] = *ecx_6
                        int32_t* eax_37 = *ecx_6
                        
                        if (*(eax_37 + 0xd) == 0)
                            eax_37[1] = i_4
                        
                        ecx_6[1] = i_4[1]
                        void* eax_39 = *arg1
                        
                        if (i_4 != *(eax_39 + 4))
                            int32_t*** eax_40 = i_4[1]
                            
                            if (i_4 != *eax_40)
                                eax_40[2] = ecx_6
                                *ecx_6 = i_4
                                i_4[1] = ecx_6
                            else
                                *eax_40 = ecx_6
                                *ecx_6 = i_4
                                i_4[1] = ecx_6
                        else
                            *(eax_39 + 4) = ecx_6
                            *ecx_6 = i_4
                            i_4[1] = ecx_6
                        
                        break
                    
                    ecx_1[3].b = 0
            
            i_4 = i_4[1]
            i_11 = i_6
            
            if (i_9 == *(*arg1 + 4))
                i_11 = i_7
                break
    
    i_11[3].b = 1

void* esi_3 = &i_5[4]
sub_4676f0(esi_3 + 0x18)
int32_t eax_30 = *(esi_3 + 0x14)

if (eax_30 u>= 0x10)
    sub_403160(*esi_3, eax_30 + 1, 1)

*(esi_3 + 0x14) = 0xf
bool cond:2 = *(esi_3 + 0x14) u< 0x10
*(esi_3 + 0x10) = 0

if (not(cond:2))
    esi_3 = *esi_3

*esi_3 = 0
sub_403160(i_5, 1, 0x34)
int32_t eax_32 = arg1[1]

if (eax_32 != 0)
    arg1[1] = eax_32 - 1

*arg2 = arg3
return arg2
