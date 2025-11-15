// 函数: sub_4575f0
// 地址: 0x4575f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg3
sub_429080(&arg3)
int32_t* ecx_1 = *ebx
int32_t* esi
int32_t* edi

if (*(ecx_1 + 0xd) == 0)
    if (*(ebx[2] + 0xd) != 0)
        edi = ecx_1
        goto label_45762f
    
    int32_t* edx_1 = arg3
    edi = edx_1[2]
    
    if (edx_1 == ebx)
        goto label_45762f
    
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
    
    void* eax_9 = *arg1
    
    if (*(eax_9 + 4) != ebx)
        void** eax_10 = ebx[1]
        
        if (*eax_10 != ebx)
            eax_10[2] = edx_1
        else
            *eax_10 = edx_1
    else
        *(eax_9 + 4) = edx_1
    
    edx_1[1] = ebx[1]
    int32_t eax_11
    eax_11.b = ebx[3].b
    ecx_1.b = edx_1[3].b
    edx_1[3].b = eax_11.b
    ebx[3].b = ecx_1.b
else
    edi = ebx[2]
label_45762f:
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
            *(edx_3 + 8) = sub_44e380(edi)
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
            
            int32_t* ecx_4 = *esi
            
            if (edi != ecx_4)
                if (ecx_4[3].b == 0)
                    ecx_4[3].b = 1
                    esi[3].b = 0
                    sub_44e3a0(arg1, esi)
                    ecx_4 = *esi
                
                if (*(ecx_4 + 0xd) == 0)
                    if (*(ecx_4[2] + 0xc) != 1 || *(*ecx_4 + 0xc) != 1)
                        if ((*ecx_4)[3].b == 1)
                            *(ecx_4[2] + 0xc) = 1
                            ecx_4[3].b = 0
                            sub_44e400(arg1, ecx_4)
                            ecx_4 = *esi
                        
                        int32_t** eax_27
                        eax_27.b = esi[3].b
                        ecx_4[3].b = eax_27.b
                        esi[3].b = 1
                        *(*ecx_4 + 0xc) = 1
                        sub_44e3a0(arg1, esi)
                        break
                    
                    ecx_4[3].b = 0
            else
                ecx_4 = esi[2]
                
                if (ecx_4[3].b == 0)
                    ecx_4[3].b = 1
                    esi[3].b = 0
                    sub_44e400(arg1, esi)
                    ecx_4 = esi[2]
                    edx_4 = esi
                
                if (*(ecx_4 + 0xd) == 0)
                    if (*(*ecx_4 + 0xc) != 1 || *(ecx_4[2] + 0xc) != 1)
                        if (ecx_4[2][3].b == 1)
                            *(*ecx_4 + 0xc) = 1
                            ecx_4[3].b = 0
                            sub_44e3a0(arg1, ecx_4)
                            ecx_4 = esi[2]
                        
                        void** eax_16
                        eax_16.b = esi[3].b
                        ecx_4[3].b = eax_16.b
                        esi[3].b = 1
                        *(ecx_4[2] + 0xc) = 1
                        sub_44e400(arg1, esi)
                        break
                    
                    ecx_4[3].b = 0
            
            esi = esi[1]
            edi = var_8_1
            
            if (edx_4 == *(*arg1 + 4))
                edi = var_4_1
                break
    
    edi[3].b = 1

int32_t eax_21 = ebx[9]
void* esi_1 = &ebx[4]

if (eax_21 u>= 0x10)
    sub_403160(*esi_1, eax_21 + 1, 1)

*(esi_1 + 0x14) = 0xf
bool cond:2 = *(esi_1 + 0x14) u< 0x10
*(esi_1 + 0x10) = 0

if (not(cond:2))
    esi_1 = *esi_1

*esi_1 = 0
sub_403160(ebx, 1, 0x2c)
int32_t eax_23 = arg1[1]
int32_t* ecx_9 = arg3

if (eax_23 != 0)
    arg1[1] = eax_23 - 1

*arg2 = ecx_9
return arg2
