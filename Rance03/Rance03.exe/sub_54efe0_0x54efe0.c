// 函数: sub_54efe0
// 地址: 0x54efe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t* ebp = arg3
sub_418380(&arg3)
int32_t* ecx_1 = *ebp
int32_t* esi
int32_t* edi

if (*(ecx_1 + 0xd) == 0)
    if (*(ebp[2] + 0xd) != 0)
        edi = ecx_1
        goto label_54f01e
    
    int32_t* edx_1 = arg3
    edi = edx_1[2]
    
    if (edx_1 == ebp)
        goto label_54f01e
    
    ecx_1[1] = edx_1
    *edx_1 = *ebp
    
    if (edx_1 != ebp[2])
        esi = edx_1[1]
        
        if (*(edi + 0xd) == 0)
            edi[1] = esi
        
        *esi = edi
        edx_1[2] = ebp[2]
        *(ebp[2] + 4) = edx_1
    else
        esi = edx_1
    
    void* eax_10 = *arg1
    
    if (*(eax_10 + 4) != ebp)
        void** eax_11 = ebp[1]
        
        if (*eax_11 != ebp)
            eax_11[2] = edx_1
        else
            *eax_11 = edx_1
    else
        *(eax_10 + 4) = edx_1
    
    edx_1[1] = ebp[1]
    int32_t eax_12
    eax_12.b = ebp[3].b
    ecx_1.b = edx_1[3].b
    edx_1[3].b = eax_12.b
    ebp[3].b = ecx_1.b
else
    edi = ebp[2]
label_54f01e:
    esi = ebp[1]
    
    if (*(edi + 0xd) == 0)
        edi[1] = esi
    
    void* eax_2 = *arg1
    
    if (*(eax_2 + 4) == ebp)
        *(eax_2 + 4) = edi
    else if (*esi != ebp)
        esi[2] = edi
    else
        *esi = edi
    
    int32_t* edx_2 = *arg1
    
    if (*edx_2 == ebp)
        int32_t* ecx_2
        
        if (*(edi + 0xd) == 0)
            int32_t* eax_3 = *edi
            ecx_2 = edi
            
            while (*(eax_3 + 0xd) == 0)
                ecx_2 = eax_3
                eax_3 = *ecx_2
        else
            ecx_2 = esi
        
        *edx_2 = ecx_2
    
    if (*(*arg1 + 8) == ebp)
        if (*(edi + 0xd) == 0)
            *(*arg1 + 8) = sub_418330(edi)
        else
            *(*arg1 + 8) = esi

if (ebp[3].b == 1)
    if (edi != *(*arg1 + 4))
        while (edi[3].b == 1)
            int32_t* ecx_6 = *esi
            
            if (edi != ecx_6)
                if (ecx_6[3].b == 0)
                    ecx_6[3].b = 1
                    esi[3].b = 0
                    sub_4182d0(arg1, esi)
                    ecx_6 = *esi
                
                if (*(ecx_6 + 0xd) == 0)
                    if (*(ecx_6[2] + 0xc) != 1 || *(*ecx_6 + 0xc) != 1)
                        if ((*ecx_6)[3].b == 1)
                            *(ecx_6[2] + 0xc) = 1
                            ecx_6[3].b = 0
                            sub_418280(arg1, ecx_6)
                            ecx_6 = *esi
                        
                        int32_t** eax_23
                        eax_23.b = esi[3].b
                        ecx_6[3].b = eax_23.b
                        esi[3].b = 1
                        *(*ecx_6 + 0xc) = 1
                        sub_4182d0(arg1, esi)
                        break
                    
                    ecx_6[3].b = 0
            else
                ecx_6 = esi[2]
                
                if (ecx_6[3].b == 0)
                    ecx_6[3].b = 1
                    esi[3].b = 0
                    sub_418280(arg1, esi)
                    ecx_6 = esi[2]
                
                if (*(ecx_6 + 0xd) == 0)
                    if (*(*ecx_6 + 0xc) != 1 || *(ecx_6[2] + 0xc) != 1)
                        if (ecx_6[2][3].b == 1)
                            *(*ecx_6 + 0xc) = 1
                            ecx_6[3].b = 0
                            sub_4182d0(arg1, ecx_6)
                            ecx_6 = esi[2]
                        
                        void** eax_17
                        eax_17.b = esi[3].b
                        ecx_6[3].b = eax_17.b
                        esi[3].b = 1
                        *(ecx_6[2] + 0xc) = 1
                        sub_418280(arg1, esi)
                        break
                    
                    ecx_6[3].b = 0
            
            edi = esi
            esi = esi[1]
            
            if (edi == *(*arg1 + 4))
                break
    
    edi[3].b = 1

sub_551470(&ebp[4])
j__free(ebp)
int32_t eax_25 = arg1[1]
int32_t* ecx_14 = arg3

if (eax_25 != 0)
    arg1[1] = eax_25 - 1

*arg2 = ecx_14
return arg2
