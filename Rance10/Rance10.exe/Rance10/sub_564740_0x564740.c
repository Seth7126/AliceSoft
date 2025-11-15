// 函数: sub_564740
// 地址: 0x564740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bd06
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_8
int32_t* ebx = arg_8
sub_429080(&arg_8)
int32_t* ecx_1 = *ebx
int32_t* edx_2
int32_t* esi
int32_t* edi

if (*(ecx_1 + 0xd) == 0)
    if (*(ebx[2] + 0xd) != 0)
        edi = ecx_1
        goto label_5647a2
    
    int32_t* edx_1 = arg_8
    edi = edx_1[2]
    
    if (edx_1 == ebx)
        goto label_5647a2
    
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
    
    void* eax_13 = *arg1
    
    if (*(eax_13 + 4) != ebx)
        void** eax_14 = ebx[1]
        
        if (*eax_14 != ebx)
            eax_14[2] = edx_1
        else
            *eax_14 = edx_1
    else
        *(eax_13 + 4) = edx_1
    
    edx_1[1] = ebx[1]
    void** ecx_5
    ecx_5.b = edx_1[3].b
    int32_t eax_15
    eax_15.b = ebx[3].b
    edx_1[3].b = eax_15.b
    edx_2 = arg1
    ebx[3].b = ecx_5.b
else
    edi = ebx[2]
label_5647a2:
    esi = ebx[1]
    
    if (*(edi + 0xd) == 0)
        edi[1] = esi
    
    edx_2 = arg1
    void* eax_4 = *edx_2
    
    if (*(eax_4 + 4) == ebx)
        *(eax_4 + 4) = edi
    else if (*esi != ebx)
        esi[2] = edi
    else
        *esi = edi
    
    int32_t* eax_5 = *edx_2
    
    if (*eax_5 == ebx)
        int32_t* ecx_2
        
        if (*(edi + 0xd) == 0)
            int32_t* eax_6 = *edi
            ecx_2 = edi
            
            while (*(eax_6 + 0xd) == 0)
                ecx_2 = eax_6
                eax_6 = *ecx_2
            
            eax_5 = *edx_2
        else
            ecx_2 = esi
        
        *eax_5 = ecx_2
    
    void* eax_7 = *edx_2
    
    if (*(eax_7 + 8) == ebx)
        if (*(edi + 0xd) == 0)
            int32_t* eax_8 = edi[2]
            int32_t* ecx_4 = edi
            
            while (*(eax_8 + 0xd) == 0)
                ecx_4 = eax_8
                eax_8 = ecx_4[2]
            
            *(*edx_2 + 8) = ecx_4
        else
            *(eax_7 + 8) = esi

if (ebx[3].b == 1)
    if (edi != *(*edx_2 + 4))
        while (true)
            int32_t* var_18_1 = esi
            int32_t* var_20_1 = esi
            
            if (edi[3].b != 1)
                break
            
            int32_t* ecx_6 = *esi
            
            if (edi != ecx_6)
                if (ecx_6[3].b == 0)
                    ecx_6[3].b = 1
                    esi[3].b = 0
                    sub_44e3a0(edx_2, esi)
                    ecx_6 = *esi
                    edx_2 = arg1
                
                if (*(ecx_6 + 0xd) == 0)
                    if (*(ecx_6[2] + 0xc) != 1 || *(*ecx_6 + 0xc) != 1)
                        if ((*ecx_6)[3].b == 1)
                            *(ecx_6[2] + 0xc) = 1
                            ecx_6[3].b = 0
                            sub_44e400(edx_2, ecx_6)
                            ecx_6 = *esi
                        
                        int32_t** eax_32
                        eax_32.b = esi[3].b
                        ecx_6[3].b = eax_32.b
                        esi[3].b = 1
                        *(*ecx_6 + 0xc) = 1
                        sub_44e3a0(arg1, esi)
                        break
                    
                    ecx_6[3].b = 0
            else
                ecx_6 = esi[2]
                
                if (ecx_6[3].b == 0)
                    ecx_6[3].b = 1
                    esi[3].b = 0
                    sub_44e400(edx_2, esi)
                    ecx_6 = esi[2]
                    edx_2 = arg1
                
                if (*(ecx_6 + 0xd) == 0)
                    if (*(*ecx_6 + 0xc) != 1 || *(ecx_6[2] + 0xc) != 1)
                        if (ecx_6[2][3].b == 1)
                            *(*ecx_6 + 0xc) = 1
                            ecx_6[3].b = 0
                            sub_44e3a0(edx_2, ecx_6)
                            ecx_6 = esi[2]
                        
                        void** eax_20
                        eax_20.b = esi[3].b
                        ecx_6[3].b = eax_20.b
                        esi[3].b = 1
                        *(ecx_6[2] + 0xc) = 1
                        sub_44e400(arg1, esi)
                        break
                    
                    ecx_6[3].b = 0
            
            int32_t* ecx_11 = esi
            esi = esi[1]
            edi = var_18_1
            
            if (ecx_11 == *(*edx_2 + 4))
                edi = var_20_1
                break
    
    edi[3].b = 1

int32_t var_8_1 = 0
int32_t* esi_1 = ebx[6]

if (esi_1 != 0)
    bool cond:2_1 = esi_1[1] != 1
    esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:2_1))
        (**esi_1)(eax_2)
        int32_t edi_1 = esi_1[2]
        esi_1[2] -= 1
        
        if (edi_1 == 1)
            (*(*esi_1 + 4))()

sub_403160(ebx, 1, 0x1c)
int32_t eax_28 = arg1[1]

if (eax_28 != 0)
    arg1[1] = eax_28 - 1

*arg2 = arg_8
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
