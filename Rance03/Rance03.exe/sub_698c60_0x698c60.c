// 函数: sub_698c60
// 地址: 0x698c60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg2
sub_418380(&arg2)
int32_t* ecx_1 = *ebx
int32_t* esi
int32_t* edi

if (*(ecx_1 + 0xd) == 0)
    if (*(ebx[2] + 0xd) != 0)
        edi = ecx_1
        goto label_698c9a
    
    int32_t* edx_1 = arg2
    edi = edx_1[2]
    
    if (edx_1 == ebx)
        goto label_698c9a
    
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
    
    void* eax_11 = data_75dd14
    
    if (*(eax_11 + 4) != ebx)
        int32_t** eax_12 = ebx[1]
        
        if (*eax_12 != ebx)
            eax_12[2] = edx_1
        else
            *eax_12 = edx_1
    else
        *(eax_11 + 4) = edx_1
    
    edx_1[1] = ebx[1]
    int32_t eax_13
    eax_13.b = ebx[3].b
    ecx_1.b = edx_1[3].b
    edx_1[3].b = eax_13.b
    ebx[3].b = ecx_1.b
else
    edi = ebx[2]
label_698c9a:
    esi = ebx[1]
    
    if (*(edi + 0xd) == 0)
        edi[1] = esi
    
    void* eax_2 = data_75dd14
    
    if (*(eax_2 + 4) == ebx)
        *(eax_2 + 4) = edi
    else if (*esi != ebx)
        esi[2] = edi
    else
        *esi = edi
    
    if (*data_75dd14 == ebx)
        int32_t* ecx_2
        
        if (*(edi + 0xd) == 0)
            int32_t* eax_4 = *edi
            ecx_2 = edi
            
            while (*(eax_4 + 0xd) == 0)
                ecx_2 = eax_4
                eax_4 = *ecx_2
        else
            ecx_2 = esi
        
        *data_75dd14 = ecx_2
    
    void* ebp_1 = data_75dd14
    
    if (*(ebp_1 + 8) == ebx)
        if (*(edi + 0xd) == 0)
            *(ebp_1 + 8) = sub_418330(edi)
        else
            *(ebp_1 + 8) = esi

if (ebx[3].b == 1)
    if (edi != *(data_75dd14 + 4))
        while (edi[3].b == 1)
            int32_t* ecx_4 = *esi
            
            if (edi != ecx_4)
                if (ecx_4[3].b == 0)
                    ecx_4[3].b = 1
                    esi[3].b = 0
                    sub_698fa0(esi)
                    ecx_4 = *esi
                
                if (*(ecx_4 + 0xd) == 0)
                    if (*(ecx_4[2] + 0xc) != 1 || *(*ecx_4 + 0xc) != 1)
                        if ((*ecx_4)[3].b == 1)
                            *(ecx_4[2] + 0xc) = 1
                            ecx_4[3].b = 0
                            sub_698f50(ecx_4)
                            ecx_4 = *esi
                        
                        int32_t** eax_24
                        eax_24.b = esi[3].b
                        ecx_4[3].b = eax_24.b
                        esi[3].b = 1
                        *(*ecx_4 + 0xc) = 1
                        sub_698fa0(esi)
                        break
                    
                    ecx_4[3].b = 0
            else
                ecx_4 = esi[2]
                
                if (ecx_4[3].b == 0)
                    ecx_4[3].b = 1
                    esi[3].b = 0
                    sub_698f50(esi)
                    ecx_4 = esi[2]
                
                if (*(ecx_4 + 0xd) == 0)
                    if (*(*ecx_4 + 0xc) != 1 || *(ecx_4[2] + 0xc) != 1)
                        if (ecx_4[2][3].b == 1)
                            *(*ecx_4 + 0xc) = 1
                            ecx_4[3].b = 0
                            sub_698fa0(ecx_4)
                            ecx_4 = esi[2]
                        
                        void** eax_18
                        eax_18.b = esi[3].b
                        ecx_4[3].b = eax_18.b
                        esi[3].b = 1
                        *(ecx_4[2] + 0xc) = 1
                        sub_698f50(esi)
                        break
                    
                    ecx_4[3].b = 0
            
            edi = esi
            esi = esi[1]
            
            if (edi == *(data_75dd14 + 4))
                break
    
    edi[3].b = 1

j__free(ebx)
int32_t eax_26 = data_75dd18
int32_t* ecx_5 = arg2

if (eax_26 != 0)
    data_75dd18 = eax_26 - 1

*arg1 = ecx_5
return arg1
