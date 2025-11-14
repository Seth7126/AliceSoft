// 函数: sub_43ea40
// 地址: 0x43ea40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b6648
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_28 = &fileimage::CFileImageMaker::`vftable'
char* var_24 = nullptr
char* var_20 = nullptr
int32_t var_1c = 0
int32_t var_c_1 = 0
sub_43f030(&var_28)
int32_t ebx = *(arg1 + 8)
uint8_t var_31 = ebx.b
sub_414b60(&var_24, &var_31)
var_31 = (ebx u>> 8).b
sub_414b60(&var_24, &var_31)
var_31 = (ebx u>> 0x10).b
sub_414b60(&var_24, &var_31)
var_31 = (ebx u>> 0x18).b
sub_414b60(&var_24, &var_31)
int32_t* eax_7 = *(arg1 + 4)
void** esi = *eax_7
uint32_t ebx_1
char* edi_1

if (esi == eax_7)
label_43eb25:
    char* esi_1 = var_20
    edi_1 = var_24
    ebx_1.b = *(arg1 + 0x14) != 0
    char var_3d = ebx_1.b
    int32_t eax_9
    
    if (&var_3d u>= esi_1 || edi_1 u> &var_3d)
        eax_9 = var_1c
        
        if (esi_1 == eax_9)
            sub_403590(&var_24, 1)
            eax_9 = var_1c
            esi_1 = var_20
            edi_1 = var_24
        
        if (esi_1 != 0)
            *esi_1 = ebx_1.b
    else
        eax_9 = var_1c
        void* ebx_2 = &var_3d - edi_1
        
        if (esi_1 == eax_9)
            sub_403590(&var_24, 1)
            eax_9 = var_1c
            esi_1 = var_20
            edi_1 = var_24
        
        if (esi_1 != 0)
            *esi_1 = *(edi_1 + ebx_2)
    
    void* esi_2 = &esi_1[1]
    int32_t ebx_4 = *(arg1 + 0x18)
    char var_3c = ebx_4.b
    
    if (&var_3c u>= esi_2 || edi_1 u> &var_3c)
        if (esi_2 == eax_9)
            sub_403590(&var_24, 1)
            eax_9 = var_1c
            edi_1 = var_24
        
        if (esi_2 != 0)
            *esi_2 = ebx_4.b
    else
        int32_t ecx_8 = &var_3c - edi_1
        
        if (esi_2 == eax_9)
            sub_403590(&var_24, 1)
            eax_9 = var_1c
            edi_1 = var_24
        
        if (esi_2 != 0)
            ecx_8.b = edi_1[ecx_8]
            *esi_2 = ecx_8.b
    
    void* esi_3 = esi_2 + 1
    uint32_t ecx_12 = ebx_4 u>> 8
    char var_3b = ecx_12.b
    
    if (&var_3b u>= esi_3 || edi_1 u> &var_3b)
        if (esi_3 == eax_9)
            sub_403590(&var_24, 1)
            eax_9 = var_1c
            edi_1 = var_24
        
        if (esi_3 != 0)
            *esi_3 = ecx_12.b
    else
        ecx_12 = &var_3b - edi_1
        
        if (esi_3 == eax_9)
            sub_403590(&var_24, 1)
            eax_9 = var_1c
            edi_1 = var_24
        
        if (esi_3 != 0)
            ecx_12.b = edi_1[ecx_12]
            *esi_3 = ecx_12.b
    
    void* esi_4 = esi_3 + 1
    uint32_t ecx_16 = ebx_4 u>> 0x10
    char var_3a = ecx_16.b
    
    if (&var_3a u>= esi_4 || edi_1 u> &var_3a)
        if (esi_4 == eax_9)
            sub_403590(&var_24, 1)
            eax_9 = var_1c
            edi_1 = var_24
        
        if (esi_4 != 0)
            *esi_4 = ecx_16.b
    else
        ecx_16 = &var_3a - edi_1
        
        if (esi_4 == eax_9)
            sub_403590(&var_24, 1)
            eax_9 = var_1c
            edi_1 = var_24
        
        if (esi_4 != 0)
            ecx_16.b = edi_1[ecx_16]
            *esi_4 = ecx_16.b
    
    void* esi_5 = esi_4 + 1
    uint8_t ebx_5 = (ebx_4 u>> 0x18).b
    uint8_t var_39 = ebx_5
    
    if (&var_39 u>= esi_5 || edi_1 u> &var_39)
        if (esi_5 == eax_9)
            sub_403590(&var_24, 1)
            eax_9 = var_1c
            edi_1 = var_24
        
        if (esi_5 != 0)
            *esi_5 = ebx_5
    else
        int32_t ebx_6 = &var_39 - edi_1
        
        if (esi_5 == eax_9)
            sub_403590(&var_24, 1)
            eax_9 = var_1c
            edi_1 = var_24
        
        if (esi_5 != 0)
            *esi_5 = edi_1[ebx_6]
    
    void* esi_6 = esi_5 + 1
    void* var_20_5 = esi_6
    void* edx_2 = esi_6 - edi_1
    
    if ((edx_2.b & 3) != 0)
        char var_38 = 0
        
        do
            if (&var_38 u>= esi_6 || edi_1 u> &var_38)
                if (esi_6 == eax_9 && eax_9 - esi_6 u< 1)
                    if (edi_1 - esi_6 - 1 u< 1)
                        sub_69a551("vector<T> too long")
                        noreturn
                    
                    void* eax_12 = eax_9 - edi_1
                    uint32_t edx_6 = eax_12 u>> 1
                    uint32_t eax_13
                    
                    if (0xffffffff - edx_6 u>= eax_12)
                        eax_13 = eax_12 + edx_6
                    else
                        eax_13 = 0
                    
                    if (eax_13 u< edx_2 + 1)
                        eax_13 = edx_2 + 1
                    
                    sub_403640(&var_24, eax_13)
                    eax_9 = var_1c
                    esi_6 = var_20_5
                    edi_1 = var_24
                
                if (esi_6 != 0)
                    *esi_6 = 0
            else
                int32_t ebx_7 = &var_38 - edi_1
                
                if (esi_6 == eax_9 && eax_9 - esi_6 u< 1)
                    if (edi_1 - esi_6 - 1 u< 1)
                        sub_69a551("vector<T> too long")
                        noreturn
                    
                    void* eax_10 = eax_9 - edi_1
                    uint32_t edx_4 = eax_10 u>> 1
                    void* eax_11
                    
                    if (0xffffffff - edx_4 u>= eax_10)
                        eax_11 = eax_10 + edx_4
                    else
                        eax_11 = nullptr
                    
                    if (eax_11 u< edx_2 + 1)
                        eax_11 = edx_2 + 1
                    
                    sub_403640(&var_24, eax_11)
                    eax_9 = var_1c
                    esi_6 = var_20_5
                    edi_1 = var_24
                
                if (esi_6 != 0)
                    void* ecx_23
                    ecx_23.b = edi_1[ebx_7]
                    *esi_6 = ecx_23.b
            
            esi_6 += 1
            var_20_5 = esi_6
            edx_2 = esi_6 - edi_1
        while ((edx_2.b & 3) != 0)
    
    void* esi_9 = esi_6 - edi_1
    int32_t eax_15
    int32_t edx_8
    edx_8:eax_15 = sx.q(esi_9)
    int32_t var_2c = (eax_15 + (edx_8 & 3)) s>> 2
    
    if ((*(*arg2 + 0x30))(&var_2c, 1) != 0)
        sub_69d850((*(*arg2 + 0x10))(0), edi_1, esi_9, eax_2)
        ebx_1.b = 1
    else
        ebx_1.b = 0
else
    while (true)
        if (sub_43e210(&esi[2], &var_28) == 0)
            edi_1 = var_24
            ebx_1.b = 0
            break
        
        esi = *esi
        
        if (esi == *(arg1 + 4))
            goto label_43eb25

if (edi_1 != 0)
    j__free(edi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx_1.b
