// 函数: sub_624a80
// 地址: 0x624a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg3
sub_429080(&arg3)
int32_t* ecx_1 = *ebx
int32_t* esi
int32_t* edi

if (*(ecx_1 + 0xd) == 0)
    if (*(ebx[2] + 0xd) != 0)
        edi = ecx_1
        goto label_624ac3
    
    int32_t* edx_1 = arg3
    edi = edx_1[2]
    
    if (edx_1 == ebx)
        goto label_624ac3
    
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
    
    void* eax_8 = *arg1
    
    if (*(eax_8 + 4) != ebx)
        void** eax_9 = ebx[1]
        
        if (*eax_9 != ebx)
            eax_9[2] = edx_1
        else
            *eax_9 = edx_1
    else
        *(eax_8 + 4) = edx_1
    
    edx_1[1] = ebx[1]
    int32_t eax_10
    eax_10.b = ebx[3].b
    ecx_1.b = edx_1[3].b
    edx_1[3].b = eax_10.b
    ebx[3].b = ecx_1.b
else
    edi = ebx[2]
label_624ac3:
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
    
    void* edx_3 = *arg1
    
    if (*(edx_3 + 8) == ebx)
        if (*(edi + 0xd) == 0)
            int32_t* eax_4 = edi[2]
            int32_t* ecx_4 = edi
            
            while (*(eax_4 + 0xd) == 0)
                ecx_4 = eax_4
                eax_4 = ecx_4[2]
            
            *(edx_3 + 8) = ecx_4
        else
            *(edx_3 + 8) = esi

if (ebx[3].b == 1)
    if (edi != *(*arg1 + 4))
        while (true)
            int32_t* edx_4 = esi
            int32_t* var_8_1 = esi
            int32_t* var_4_1 = esi
            
            if (edi[3].b != 1)
                break
            
            int32_t* ecx_5 = *esi
            
            if (edi != ecx_5)
                if (ecx_5[3].b == 0)
                    ecx_5[3].b = 1
                    esi[3].b = 0
                    sub_44e3a0(arg1, esi)
                    ecx_5 = *esi
                
                if (*(ecx_5 + 0xd) == 0)
                    if (*(ecx_5[2] + 0xc) != 1 || *(*ecx_5 + 0xc) != 1)
                        if ((*ecx_5)[3].b == 1)
                            *(ecx_5[2] + 0xc) = 1
                            ecx_5[3].b = 0
                            sub_44e400(arg1, ecx_5)
                            ecx_5 = *esi
                        
                        int32_t** eax_24
                        eax_24.b = esi[3].b
                        ecx_5[3].b = eax_24.b
                        esi[3].b = 1
                        *(*ecx_5 + 0xc) = 1
                        sub_44e3a0(arg1, esi)
                        break
                    
                    ecx_5[3].b = 0
            else
                ecx_5 = esi[2]
                
                if (ecx_5[3].b == 0)
                    ecx_5[3].b = 1
                    esi[3].b = 0
                    sub_44e400(arg1, esi)
                    ecx_5 = esi[2]
                    edx_4 = esi
                
                if (*(ecx_5 + 0xd) == 0)
                    if (*(*ecx_5 + 0xc) != 1 || *(ecx_5[2] + 0xc) != 1)
                        if (ecx_5[2][3].b == 1)
                            *(*ecx_5 + 0xc) = 1
                            ecx_5[3].b = 0
                            sub_44e3a0(arg1, ecx_5)
                            ecx_5 = esi[2]
                        
                        void** eax_15
                        eax_15.b = esi[3].b
                        ecx_5[3].b = eax_15.b
                        esi[3].b = 1
                        *(ecx_5[2] + 0xc) = 1
                        sub_44e400(arg1, esi)
                        break
                    
                    ecx_5[3].b = 0
            
            esi = esi[1]
            edi = var_8_1
            
            if (edx_4 == *(*arg1 + 4))
                edi = var_4_1
                break
    
    edi[3].b = 1

sub_624e70(&ebx[4])
sub_403160(ebx, 1, 0x34)
int32_t eax_20 = arg1[1]
int32_t* ecx_11 = arg3

if (eax_20 != 0)
    arg1[1] = eax_20 - 1

*arg2 = ecx_11
return arg2
