// 函数: sub_4c7640
// 地址: 0x4c7640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be8f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** i = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = *(arg1 + 0xc8)
void* edi = ebx - 1

if (edi s>= 0)
    void* temp1_1
    
    do
        if (*(arg1 + 0xcc) u< 0x10)
            i = arg1 + 0xb8
        else
            i = *(arg1 + 0xb8)
        
        i.b = *(i + edi)
        
        if (i.b == 0xa)
            break
        
        temp1_1 = edi
        edi -= 1
    while (temp1_1 - 1 s>= 0)

if (edi != 0xffffffff)
    void* ebx_1 = ebx - edi
    void* edi_1 = edi - 1
    
    if (edi - 1 s>= 0)
        void* temp4_1
        
        do
            void* eax_5
            
            if (*(arg1 + 0xcc) u< 0x10)
                eax_5 = arg1 + 0xb8
            else
                eax_5 = *(arg1 + 0xb8)
            
            eax_5.b = *(eax_5 + edi_1)
            
            if (eax_5.b == 0xa)
                break
            
            temp4_1 = edi_1
            edi_1 -= 1
        while (temp4_1 - 1 s>= 0)
    
    void* esi_1 = arg1 + 0xb8
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    char var_40 = 0
    sub_401ff0(&var_40, esi_1, 0, 0xffffffff)
    int32_t var_4 = 0
    char* ecx_1 = &var_40
    int32_t var_58
    int32_t var_44
    int32_t var_28
    int32_t var_14
    
    if (edi - edi_1 s> ebx_1)
        char* eax_22 = sub_403070(ecx_1, &var_28, 0, ebx_1 + edi_1)
        
        if (esi_1 != eax_22)
            if (*(esi_1 + 0x14) u>= 0x10)
                j__free(*esi_1)
            
            *(esi_1 + 0x14) = 0xf
            *(esi_1 + 0x10) = 0
            *esi_1 = 0
            
            if (*(eax_22 + 0x14) u>= 0x10)
                *esi_1 = *eax_22
                *eax_22 = 0
            else
                void* eax_23 = *(eax_22 + 0x10)
                
                if (eax_23 != 0xffffffff)
                    _memcpy(esi_1, eax_22, eax_23 + 1, eax_4)
            
            *(esi_1 + 0x10) = *(eax_22 + 0x10)
            *(esi_1 + 0x14) = *(eax_22 + 0x14)
            *(eax_22 + 0x14) = 0xf
            *(eax_22 + 0x10) = 0
            *eax_22 = 0
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        int32_t ecx_4 = *(arg1 + 0xc8)
        int32_t* eax_30 = sub_403070(&var_40, &var_28, ecx_4, var_30_1 - ecx_4)
        var_4.b = 2
        int32_t* eax_31 = sub_410ad0(eax_30, eax_30, &var_58, arg1 + 0xd0)
        
        if (arg1 + 0xd0 != eax_31)
            if (*(arg1 + 0xe4) u>= 0x10)
                j__free(*(arg1 + 0xd0))
            
            *(arg1 + 0xe4) = 0xf
            *(arg1 + 0xe0) = 0
            *(arg1 + 0xd0) = 0
            
            if (eax_31[5] u>= 0x10)
                *(arg1 + 0xd0) = *eax_31
                *eax_31 = 0
            else
                void* eax_32 = eax_31[4]
                
                if (eax_32 != 0xffffffff)
                    _memcpy(arg1 + 0xd0, eax_31, eax_32 + 1, eax_4)
            
            *(arg1 + 0xe0) = eax_31[4]
            *(arg1 + 0xe4) = eax_31[5]
            eax_31[5] = 0xf
            eax_31[4] = 0
            *eax_31 = 0
        
        if (var_44 u>= 0x10)
            j__free(var_58)
        
        var_4.b = 0
        int32_t var_44_2 = 0xf
        int32_t var_48_2 = 0
        var_58.b = 0
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        void* edx_5 = *(arg1 + 0xc8)
        i = edx_5 - 1
        
        if (i s< 0)
        label_4c7a0a:
            i = nullptr
        else
            while (true)
                char* ecx_7
                
                if (*(esi_1 + 0x14) u< 0x10)
                    ecx_7 = esi_1
                else
                    ecx_7 = *esi_1
                
                if (*(ecx_7 + i) == 0xa)
                    break
                
                struct _EXCEPTION_REGISTRATION_RECORD** i_3 = i
                i -= 1
                
                if (i_3 - 1 s< 0)
                    goto label_4c7a0a_1
            
            if (i s< 0)
            label_4c7a0a_1:
                i = nullptr
        
        for (; i s< edx_5; i += 1)
            char* ecx_8
            
            if (*(esi_1 + 0x14) u< 0x10)
                ecx_8 = esi_1
            else
                ecx_8 = *esi_1
            
            char* ecx_9
            
            if (*(ecx_8 + i) u>= 0x81)
                if (*(esi_1 + 0x14) u< 0x10)
                    ecx_9 = esi_1
                else
                    ecx_9 = *esi_1
            
            if (*(ecx_8 + i) u>= 0x81 && *(ecx_9 + i) u<= 0x9f)
            label_4c7a5c:
                i += 1
                
                if (edx_5 s<= i)
                    void* eax_37
                    
                    if (*(arg1 + 0xe4) u< 0x10)
                        eax_37 = arg1 + 0xd0
                    else
                        eax_37 = *(arg1 + 0xd0)
                    
                    edx_5.b = *eax_37
                    void* ecx_12 = *(esi_1 + 0x10)
                    char var_5d_1 = edx_5.b
                    
                    if (0xffffffff - ecx_12 u<= 1)
                        sub_69a551("string too long")
                        noreturn
                    
                    if (ecx_12 + 1 u> 0xfffffffe)
                        sub_69a551("string too long")
                        noreturn
                    
                    int32_t eax_39 = *(esi_1 + 0x14)
                    
                    if (eax_39 u< ecx_12 + 1)
                        sub_4023a0(esi_1, ecx_12 + 1, ecx_12)
                        edx_5.b = var_5d_1
                        
                        if (ecx_12 != 0xffffffff)
                            goto label_4c7ac5
                    else if (ecx_12 != 0xffffffff)
                    label_4c7ac5:
                        void* eax_40
                        
                        if (*(esi_1 + 0x14) u< 0x10)
                            eax_40 = esi_1
                        else
                            eax_40 = *esi_1
                        
                        *(*(esi_1 + 0x10) + eax_40) = edx_5.b
                        bool cond:2_1 = *(esi_1 + 0x14) u< 0x10
                        *(esi_1 + 0x10) = ecx_12 + 1
                        
                        if (not(cond:2_1))
                            esi_1 = *esi_1
                        
                        *(ecx_12 + 1 + esi_1) = 0
                    else
                        *(esi_1 + 0x10) = ecx_12 + 1
                        
                        if (eax_39 u>= 0x10)
                            esi_1 = *esi_1
                        
                        *esi_1 = 0
                    
                    i = sub_403070(arg1 + 0xd0, &var_28, 1, *(arg1 + 0xe0) - 1)
                    struct _EXCEPTION_REGISTRATION_RECORD** i_1 = i
                    
                    if (arg1 + 0xd0 != i_1)
                        if (*(arg1 + 0xe4) u>= 0x10)
                            j__free(*(arg1 + 0xd0))
                        
                        *(arg1 + 0xe4) = 0xf
                        *(arg1 + 0xe0) = 0
                        *(arg1 + 0xd0) = 0
                        
                        if (i_1[5] u>= 0x10)
                            *(arg1 + 0xd0) = *i_1
                            *i_1 = nullptr
                        else
                            void* eax_43 = i_1[4]
                            
                            if (eax_43 != 0xffffffff)
                                _memcpy(arg1 + 0xd0, i_1, eax_43 + 1, eax_4)
                        
                        *(arg1 + 0xe0) = i_1[4]
                        i = i_1[5]
                        *(arg1 + 0xe4) = i
                        i_1[5] = 0xf
                        i_1[4] = 0
                        *i_1 = nullptr
                    
                    goto label_4c7b6f
            else
                char* ecx_10
                
                if (*(esi_1 + 0x14) u< 0x10)
                    ecx_10 = esi_1
                else
                    ecx_10 = *esi_1
                
                if (*(ecx_10 + i) u>= 0xe0)
                    char* ecx_11
                    
                    if (*(esi_1 + 0x14) u< 0x10)
                        ecx_11 = esi_1
                    else
                        ecx_11 = *esi_1
                    
                    if (*(ecx_11 + i) u<= 0xef)
                        goto label_4c7a5c
    else
        char* eax_8 = sub_403070(ecx_1, &var_58, 0, edi)
        
        if (esi_1 != eax_8)
            if (*(esi_1 + 0x14) u>= 0x10)
                j__free(*esi_1)
            
            *(esi_1 + 0x14) = 0xf
            *(esi_1 + 0x10) = 0
            *esi_1 = 0
            
            if (*(eax_8 + 0x14) u>= 0x10)
                *esi_1 = *eax_8
                *eax_8 = 0
            else
                void* eax_9 = *(eax_8 + 0x10)
                
                if (eax_9 != 0xffffffff)
                    _memcpy(esi_1, eax_8, eax_9 + 1, eax_4)
            
            *(esi_1 + 0x10) = *(eax_8 + 0x10)
            *(esi_1 + 0x14) = *(eax_8 + 0x14)
            *(eax_8 + 0x14) = 0xf
            *(eax_8 + 0x10) = 0
            *eax_8 = 0
        
        if (var_44 u>= 0x10)
            j__free(var_58)
        
        char* eax_16 = sub_403070(&var_40, &var_28, edi, var_30_1 - edi)
        var_4.b = 1
        i = sub_410ad0(eax_16, eax_16, &var_58, arg1 + 0xd0)
        struct _EXCEPTION_REGISTRATION_RECORD** i_2 = i
        
        if (arg1 + 0xd0 != i_2)
            if (*(arg1 + 0xe4) u>= 0x10)
                j__free(*(arg1 + 0xd0))
            
            *(arg1 + 0xe4) = 0xf
            *(arg1 + 0xe0) = 0
            *(arg1 + 0xd0) = nullptr
            
            if (i_2[5] u>= 0x10)
                *(arg1 + 0xd0) = *i_2
                *i_2 = nullptr
            else
                void* eax_17 = i_2[4]
                
                if (eax_17 != 0xffffffff)
                    _memcpy(arg1 + 0xd0, i_2, eax_17 + 1, eax_4)
            
            *(arg1 + 0xe0) = i_2[4]
            i = i_2[5]
            *(arg1 + 0xe4) = i
            i_2[5] = 0xf
            i_2[4] = 0
            *i_2 = nullptr
        
        if (var_44 u>= 0x10)
            i = j__free(var_58)
        
        int32_t var_44_1 = 0xf
        int32_t var_48_1 = 0
        var_58.b = 0
    label_4c7b6f:
        
        if (var_14 u>= 0x10)
            i = j__free(var_28)
    
    if (var_2c_1 u>= 0x10)
        i = j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return i
