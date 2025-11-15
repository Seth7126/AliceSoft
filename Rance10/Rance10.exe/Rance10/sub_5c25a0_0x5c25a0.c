// 函数: sub_5c25a0
// 地址: 0x5c25a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bd06
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
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
        goto label_5c2646
    
    i_11 = i[2]
    
    if (i == i_5)
        goto label_5c2646
    
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
    
    void* eax_11 = *arg1
    
    if (*(eax_11 + 4) != i_5)
        int32_t* eax_12 = i_5[1]
        
        if (*eax_12 != i_5)
            eax_12[2] = i
        else
            *eax_12 = i
    else
        *(eax_11 + 4) = i
    
    i[1] = i_5[1]
    int32_t eax_13
    eax_13.b = i_5[3].b
    i_12.b = i[3].b
    i[3].b = eax_13.b
    i_5[3].b = i_12.b
else
    i_11 = i_5[2]
label_5c2646:
    i_4 = i_5[1]
    
    if (*(i_11 + 0xd) == 0)
        i_11[1] = i_4
    
    void* eax_5 = *arg1
    
    if (*(eax_5 + 4) == i_5)
        *(eax_5 + 4) = i_11
    else if (*i_4 != i_5)
        i_4[2] = i_11
    else
        *i_4 = i_11
    
    int32_t* eax_6 = arg1
    int32_t* esi = *eax_6
    
    if (*esi == i_5)
        int32_t* i_8
        
        if (*(i_11 + 0xd) == 0)
            int32_t* i_10 = *i_11
            i_8 = i_11
            
            while (*(i_10 + 0xd) == 0)
                i_8 = i_10
                i_10 = *i_8
            
            eax_6 = arg1
        else
            i_8 = i_4
        
        *esi = i_8
    
    void* esi_1 = *eax_6
    
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
    int32_t* esi_2 = arg1
    
    if (i_11 != *(*esi_2 + 4))
        while (true)
            int32_t* i_7 = i_4
            int32_t* i_6 = i_4
            
            if (i_11[3].b != 1)
                break
            
            int32_t* ecx_1 = *i_4
            
            if (i_11 != ecx_1)
                if (ecx_1[3].b == 0)
                    ecx_1[3].b = 1
                    void* ecx_3 = *i_4
                    i_4[3].b = 0
                    *i_4 = *(ecx_3 + 8)
                    void* eax_29 = *(ecx_3 + 8)
                    
                    if (*(eax_29 + 0xd) == 0)
                        *(eax_29 + 4) = i_4
                    
                    *(ecx_3 + 4) = i_4[1]
                    void* eax_31 = *esi_2
                    
                    if (i_4 != *(eax_31 + 4))
                        void** eax_32 = i_4[1]
                        
                        if (i_4 != eax_32[2])
                            *eax_32 = ecx_3
                        else
                            eax_32[2] = ecx_3
                    else
                        *(eax_31 + 4) = ecx_3
                    
                    *(ecx_3 + 8) = i_4
                    i_4[1] = ecx_3
                    ecx_1 = *i_4
                
                if (*(ecx_1 + 0xd) == 0)
                    if (*(ecx_1[2] + 0xc) != 1 || *(*ecx_1 + 0xc) != 1)
                        int32_t*** eax_53
                        
                        if ((*ecx_1)[3].b == 1)
                            *(ecx_1[2] + 0xc) = 1
                            int32_t** esi_5 = ecx_1[2]
                            ecx_1[3].b = 0
                            ecx_1[2] = *esi_5
                            int32_t* eax_50 = *esi_5
                            
                            if (*(eax_50 + 0xd) == 0)
                                eax_50[1] = ecx_1
                            
                            esi_5[1] = ecx_1[1]
                            eax_53 = *arg1
                            
                            if (ecx_1 != eax_53[1])
                                eax_53 = ecx_1[1]
                                
                                if (ecx_1 != *eax_53)
                                    eax_53[2] = esi_5
                                else
                                    *eax_53 = esi_5
                            else
                                eax_53[1] = esi_5
                            
                            *esi_5 = ecx_1
                            ecx_1[1] = esi_5
                            ecx_1 = *i_4
                            esi_2 = arg1
                        
                        eax_53.b = i_4[3].b
                        ecx_1[3].b = eax_53.b
                        i_4[3].b = 1
                        *(*ecx_1 + 0xc) = 1
                        void* ecx_11 = *i_4
                        *i_4 = *(ecx_11 + 8)
                        void* eax_56 = *(ecx_11 + 8)
                        
                        if (*(eax_56 + 0xd) == 0)
                            *(eax_56 + 4) = i_4
                        
                        *(ecx_11 + 4) = i_4[1]
                        void* eax_58 = *esi_2
                        
                        if (i_4 != *(eax_58 + 4))
                            void** eax_59 = i_4[1]
                            
                            if (i_4 != eax_59[2])
                                *eax_59 = ecx_11
                                *(ecx_11 + 8) = i_4
                                i_4[1] = ecx_11
                            else
                                eax_59[2] = ecx_11
                                *(ecx_11 + 8) = i_4
                                i_4[1] = ecx_11
                        else
                            *(eax_58 + 4) = ecx_11
                            *(ecx_11 + 8) = i_4
                            i_4[1] = ecx_11
                        
                        break
                    
                    ecx_1[3].b = 0
            else
                ecx_1 = i_4[2]
                
                if (ecx_1[3].b == 0)
                    ecx_1[3].b = 1
                    int32_t* ecx_2 = i_4[2]
                    i_4[3].b = 0
                    i_4[2] = *ecx_2
                    void* eax_16 = *ecx_2
                    
                    if (*(eax_16 + 0xd) == 0)
                        *(eax_16 + 4) = i_4
                    
                    ecx_2[1] = i_4[1]
                    void* eax_18 = *esi_2
                    
                    if (i_4 != *(eax_18 + 4))
                        int32_t** eax_19 = i_4[1]
                        
                        if (i_4 != *eax_19)
                            eax_19[2] = ecx_2
                        else
                            *eax_19 = ecx_2
                    else
                        *(eax_18 + 4) = ecx_2
                    
                    *ecx_2 = i_4
                    i_4[1] = ecx_2
                    ecx_1 = i_4[2]
                
                if (*(ecx_1 + 0xd) == 0)
                    if (*(*ecx_1 + 0xc) != 1 || *(ecx_1[2] + 0xc) != 1)
                        void** eax_27
                        
                        if (ecx_1[2][3].b == 1)
                            *(*ecx_1 + 0xc) = 1
                            void* esi_3 = *ecx_1
                            ecx_1[3].b = 0
                            *ecx_1 = *(esi_3 + 8)
                            void* eax_24 = *(esi_3 + 8)
                            
                            if (*(eax_24 + 0xd) == 0)
                                *(eax_24 + 4) = ecx_1
                            
                            *(esi_3 + 4) = ecx_1[1]
                            eax_27 = *arg1
                            
                            if (ecx_1 != eax_27[1])
                                eax_27 = ecx_1[1]
                                
                                if (ecx_1 != eax_27[2])
                                    *eax_27 = esi_3
                                else
                                    eax_27[2] = esi_3
                            else
                                eax_27[1] = esi_3
                            
                            *(esi_3 + 8) = ecx_1
                            ecx_1[1] = esi_3
                            ecx_1 = i_4[2]
                            esi_2 = arg1
                        
                        eax_27.b = i_4[3].b
                        ecx_1[3].b = eax_27.b
                        i_4[3].b = 1
                        *(ecx_1[2] + 0xc) = 1
                        int32_t* ecx_10 = i_4[2]
                        i_4[2] = *ecx_10
                        int32_t eax_44 = *ecx_10
                        
                        if (*(eax_44 + 0xd) == 0)
                            *(eax_44 + 4) = i_4
                        
                        ecx_10[1] = i_4[1]
                        void* eax_46 = *esi_2
                        
                        if (i_4 != *(eax_46 + 4))
                            int32_t** eax_47 = i_4[1]
                            
                            if (i_4 != *eax_47)
                                eax_47[2] = ecx_10
                                *ecx_10 = i_4
                                i_4[1] = ecx_10
                            else
                                *eax_47 = ecx_10
                                *ecx_10 = i_4
                                i_4[1] = ecx_10
                        else
                            *(eax_46 + 4) = ecx_10
                            *ecx_10 = i_4
                            i_4[1] = ecx_10
                        
                        break
                    
                    ecx_1[3].b = 0
            
            int32_t* i_9 = i_4
            i_4 = i_4[1]
            i_11 = i_7
            
            if (i_9 == *(*esi_2 + 4))
                i_11 = i_6
                break
    
    i_11[3].b = 1

int32_t var_8_1 = 0
int32_t* esi_4 = i_5[5]

if (esi_4 != 0)
    bool cond:2_1 = esi_4[1] != 1
    esi_4[1]
    esi_4[1] -= 1
    
    if (not(cond:2_1))
        (**esi_4)(eax_2)
        int32_t edi = esi_4[2]
        esi_4[2] -= 1
        
        if (edi == 1)
            (*(*esi_4 + 4))()

sub_403160(i_5, 1, 0x18)
int32_t eax_39 = arg1[1]

if (eax_39 != 0)
    arg1[1] = eax_39 - 1

*arg2 = arg3
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
