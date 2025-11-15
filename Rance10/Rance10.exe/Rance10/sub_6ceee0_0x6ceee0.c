// 函数: sub_6ceee0
// 地址: 0x6ceee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg2
sub_429080(&arg2)
int32_t* ecx_1 = *ebx
int32_t* esi
int32_t* edi

if (*(ecx_1 + 0xd) == 0)
    if (*(ebx[2] + 0xd) != 0)
        edi = ecx_1
        goto label_6cef20
    
    int32_t* edx_1 = arg2
    edi = edx_1[2]
    
    if (edx_1 == ebx)
        goto label_6cef20
    
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
    
    void* eax_10 = data_7fd4c4
    
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
label_6cef20:
    esi = ebx[1]
    
    if (*(edi + 0xd) == 0)
        edi[1] = esi
    
    void* eax_2 = data_7fd4c4
    
    if (*(eax_2 + 4) == ebx)
        *(eax_2 + 4) = edi
    else if (*esi != ebx)
        esi[2] = edi
    else
        *esi = edi
    
    if (*data_7fd4c4 == ebx)
        int32_t* ecx_2
        
        if (*(edi + 0xd) == 0)
            int32_t* eax_4 = *edi
            ecx_2 = edi
            
            while (*(eax_4 + 0xd) == 0)
                ecx_2 = eax_4
                eax_4 = *ecx_2
        else
            ecx_2 = esi
        
        *data_7fd4c4 = ecx_2
    
    void* edx_2 = data_7fd4c4
    
    if (*(edx_2 + 8) == ebx)
        if (*(edi + 0xd) == 0)
            int32_t* eax_6 = edi[2]
            int32_t* ecx_4 = edi
            
            while (*(eax_6 + 0xd) == 0)
                ecx_4 = eax_6
                eax_6 = ecx_4[2]
            
            *(edx_2 + 8) = ecx_4
        else
            *(edx_2 + 8) = esi

if (ebx[3].b == 1)
    if (edi != *(data_7fd4c4 + 4))
        while (true)
            int32_t* edx_3 = esi
            int32_t* ebp_1 = esi
            int32_t* var_4_1 = esi
            
            if (edi[3].b != 1)
                break
            
            int32_t* ecx_5 = *esi
            
            if (edi != ecx_5)
                if (ecx_5[3].b == 0)
                    ecx_5[3].b = 1
                    esi[3].b = 0
                    sub_6cf160(esi)
                    ecx_5 = *esi
                
                if (*(ecx_5 + 0xd) == 0)
                    if (*(ecx_5[2] + 0xc) != 1 || *(*ecx_5 + 0xc) != 1)
                        if ((*ecx_5)[3].b == 1)
                            *(ecx_5[2] + 0xc) = 1
                            ecx_5[3].b = 0
                            sub_6cf1c0(ecx_5)
                            ecx_5 = *esi
                        
                        int32_t** eax_26
                        eax_26.b = esi[3].b
                        ecx_5[3].b = eax_26.b
                        esi[3].b = 1
                        *(*ecx_5 + 0xc) = 1
                        sub_6cf160(esi)
                        break
                    
                    ecx_5[3].b = 0
            else
                ecx_5 = esi[2]
                
                if (ecx_5[3].b == 0)
                    ecx_5[3].b = 1
                    esi[3].b = 0
                    sub_6cf1c0(esi)
                    ecx_5 = esi[2]
                    edx_3 = esi
                
                if (*(ecx_5 + 0xd) == 0)
                    if (*(*ecx_5 + 0xc) != 1 || *(ecx_5[2] + 0xc) != 1)
                        if (ecx_5[2][3].b == 1)
                            *(*ecx_5 + 0xc) = 1
                            ecx_5[3].b = 0
                            sub_6cf160(ecx_5)
                            ecx_5 = esi[2]
                        
                        void** eax_17
                        eax_17.b = esi[3].b
                        ecx_5[3].b = eax_17.b
                        esi[3].b = 1
                        *(ecx_5[2] + 0xc) = 1
                        sub_6cf1c0(esi)
                        break
                    
                    ecx_5[3].b = 0
            
            edi = edx_3
            esi = esi[1]
            
            if (ebp_1 == *(data_7fd4c4 + 4))
                edi = var_4_1
                break
    
    edi[3].b = 1

sub_403160(ebx, 1, 0x18)
int32_t eax_22 = data_7fd4c8
int32_t* ecx_6 = arg2

if (eax_22 != 0)
    data_7fd4c8 = eax_22 - 1

*arg1 = ecx_6
return arg1
