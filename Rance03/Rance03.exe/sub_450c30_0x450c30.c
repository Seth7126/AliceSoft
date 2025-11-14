// 函数: sub_450c30
// 地址: 0x450c30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t* ebx = arg3
sub_418380(&arg3)
int32_t* ecx_1 = *ebx
int32_t* esi
int32_t* edi

if (*(ecx_1 + 0xd) == 0)
    if (*(ebx[2] + 0xd) != 0)
        edi = ecx_1
        goto label_450c6d
    
    int32_t* edx_1 = arg3
    edi = edx_1[2]
    
    if (edx_1 == ebx)
        goto label_450c6d
    
    ecx_1[1] = edx_1
    *edx_1 = *ebx
    
    if (edx_1 != ebx[2])
        esi = edx_1[1]
        
        if (*(edi + 0xd) == 0)
            edi[1] = esi
        
        *esi = edi
        edx_1[2] = ebx[2]
        *(ebx[2] + 4) = edx_1
    else
        esi = edx_1
    
    void* eax_10 = *arg1
    
    if (*(eax_10 + 4) != ebx)
        void** eax_11 = ebx[1]
        
        if (*eax_11 != ebx)
            eax_11[2] = edx_1
        else
            *eax_11 = edx_1
    else
        *(eax_10 + 4) = edx_1
    
    edx_1[1] = ebx[1]
    int32_t eax_12
    eax_12.b = ebx[3].b
    ecx_1.b = edx_1[3].b
    edx_1[3].b = eax_12.b
    ebx[3].b = ecx_1.b
else
    edi = ebx[2]
label_450c6d:
    esi = ebx[1]
    
    if (*(edi + 0xd) == 0)
        edi[1] = esi
    
    void* eax_2 = *arg1
    
    if (*(eax_2 + 4) == ebx)
        *(eax_2 + 4) = edi
    else if (*esi != ebx)
        esi[2] = edi
    else
        *esi = edi
    
    int32_t* edx_2 = *arg1
    
    if (*edx_2 == ebx)
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
    
    if (*(*arg1 + 8) == ebx)
        if (*(edi + 0xd) == 0)
            *(*arg1 + 8) = sub_418330(edi)
        else
            *(*arg1 + 8) = esi

if (ebx[3].b == 1)
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

ebx[0xa] = &commonsystemdata::CProperty::`vftable'

if (ebx[0x13] u>= 0x10)
    j__free(ebx[0xe])

ebx[0x13] = 0xf
ebx[0x12] = 0
ebx[0xe].b = 0

if (ebx[9] u>= 0x10)
    j__free(ebx[4])

ebx[9] = 0xf
ebx[8] = 0
ebx[4].b = 0
j__free(ebx)
int32_t eax_25 = arg1[1]
int32_t* ecx_13 = arg3

if (eax_25 != 0)
    arg1[1] = eax_25 - 1

*arg2 = ecx_13
return arg2
