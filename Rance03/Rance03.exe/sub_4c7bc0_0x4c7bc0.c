// 函数: sub_4c7bc0
// 地址: 0x4c7bc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be928
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg1 + 0xb8
int32_t* result_5
sub_40d1c0(&ExceptionList, esi, &result_5, arg1 + 0xd0)
int32_t var_4 = 0
void* ecx_1 = *(arg1 + 0xc8)
int32_t var_2c
int32_t ebx_1 = var_2c
int32_t* result_2 = result_5
void* ebp = ecx_1 - 1

if (ebp s>= 0)
    void* temp0_1
    
    do
        int32_t* result_6 = &result_5
        
        if (ebx_1 u>= 0x10)
            result_6 = result_2
        
        if (*(result_6 + ebp) == 0xa)
            break
        
        temp0_1 = ebp
        ebp -= 1
    while (temp0_1 - 1 s>= 0)

int32_t* result = ecx_1 - ebp
int32_t* result_1 = result
int32_t var_30
bool cond:1 = ecx_1 == var_30

if (ecx_1 s< var_30)
    do
        result = &result_5
        
        if (ebx_1 u>= 0x10)
            result = result_2
        
        if (*(result + ecx_1) == 0xa)
            break
        
        ecx_1 += 1
    while (ecx_1 s< var_30)
    
    cond:1 = ecx_1 == var_30

if (not(cond:1))
    void* i
    
    for (i = ecx_1 + 1; i s< var_30; i += 1)
        int32_t* result_7 = &result_5
        
        if (ebx_1 u>= 0x10)
            result_7 = result_2
        
        if (*(result_7 + i) == 0xa)
            break
    
    int32_t var_6c_2
    void* var_68_5
    int32_t var_28
    int32_t var_14
    void** ecx_4
    
    if (i - ecx_1 s<= result_1)
        char* eax_9 = sub_403070(&result_5, &var_28, 0, i)
        
        if (esi != eax_9)
            if (esi[5] u>= 0x10)
                j__free(*esi)
            
            esi[5] = 0xf
            esi[4] = 0
            *esi = nullptr
            
            if (*(eax_9 + 0x14) u>= 0x10)
                *esi = *eax_9
                *eax_9 = 0
            else
                void* eax_10 = *(eax_9 + 0x10)
                
                if (eax_10 != 0xffffffff)
                    _memcpy(esi, eax_9, eax_10 + 1, eax_4)
            
            esi[4] = *(eax_9 + 0x10)
            esi[5] = *(eax_9 + 0x14)
            *(eax_9 + 0x14) = 0xf
            *(eax_9 + 0x10) = 0
            *eax_9 = 0
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        int32_t ecx_3 = *(arg1 + 0xc8)
        var_68_5 = var_30 - ecx_3
        var_6c_2 = ecx_3
        ecx_4 = &result_5
        goto label_4c7f9f
    
    char* eax_18 = sub_403070(&result_5, &var_28, 0, ecx_1 + result_1)
    
    if (esi != eax_18)
        if (esi[5] u>= 0x10)
            j__free(*esi)
        
        esi[5] = 0xf
        esi[4] = 0
        *esi = nullptr
        
        if (*(eax_18 + 0x14) u>= 0x10)
            *esi = *eax_18
            *eax_18 = 0
        else
            void* eax_19 = *(eax_18 + 0x10)
            
            if (eax_19 != 0xffffffff)
                _memcpy(esi, eax_18, eax_19 + 1, eax_4)
        
        esi[4] = *(eax_18 + 0x10)
        esi[5] = *(eax_18 + 0x14)
        *(eax_18 + 0x14) = 0xf
        *(eax_18 + 0x10) = 0
        *eax_18 = 0
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    int32_t ecx_6 = *(arg1 + 0xc8)
    char* eax_26 = sub_403070(&result_5, &var_28, ecx_6, var_30 - ecx_6)
    
    if (arg1 + 0xd0 != eax_26)
        if (*(arg1 + 0xe4) u>= 0x10)
            j__free(*(arg1 + 0xd0))
        
        *(arg1 + 0xe4) = 0xf
        *(arg1 + 0xe0) = 0
        *(arg1 + 0xd0) = nullptr
        
        if (*(eax_26 + 0x14) u>= 0x10)
            *(arg1 + 0xd0) = *eax_26
            *eax_26 = 0
        else
            void* eax_27 = *(eax_26 + 0x10)
            
            if (eax_27 != 0xffffffff)
                _memcpy(arg1 + 0xd0, eax_26, eax_27 + 1, eax_4)
        
        *(arg1 + 0xe0) = *(eax_26 + 0x10)
        *(arg1 + 0xe4) = *(eax_26 + 0x14)
        *(eax_26 + 0x14) = 0xf
        *(eax_26 + 0x10) = 0
        *eax_26 = 0
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    void* edx_2 = *(arg1 + 0xc8)
    result = edx_2 - 1
    
    if (result s< 0)
    label_4c7ea1:
        result = nullptr
    else
        while (true)
            char* ecx_8
            
            if (esi[5] u< 0x10)
                ecx_8 = esi
            else
                ecx_8 = *esi
            
            if (*(ecx_8 + result) == 0xa)
                break
            
            int32_t* result_4 = result
            result -= 1
            
            if (result_4 - 1 s< 0)
                goto label_4c7ea1_1
        
        if (result s< 0)
        label_4c7ea1_1:
            result = nullptr
    
    if (result s< edx_2)
        while (true)
            char* ecx_9
            
            if (esi[5] u< 0x10)
                ecx_9 = esi
            else
                ecx_9 = *esi
            
            char* ecx_10
            
            if (*(ecx_9 + result) u>= 0x81)
                if (esi[5] u< 0x10)
                    ecx_10 = esi
                else
                    ecx_10 = *esi
            
            if (*(ecx_9 + result) u>= 0x81 && *(ecx_10 + result) u<= 0x9f)
            label_4c7ef8:
                result += 1
                
                if (edx_2 s<= result)
                    char* eax_32
                    
                    if (*(arg1 + 0xe4) u< 0x10)
                        eax_32 = arg1 + 0xd0
                    else
                        eax_32 = *(arg1 + 0xd0)
                    
                    edx_2.b = *eax_32
                    void* ecx_13 = esi[4]
                    char var_4d_1 = edx_2.b
                    
                    if (0xffffffff - ecx_13 u<= 1)
                        sub_69a551("string too long")
                        noreturn
                    
                    if (ecx_13 + 1 u> 0xfffffffe)
                        sub_69a551("string too long")
                        noreturn
                    
                    int32_t eax_34 = esi[5]
                    
                    if (eax_34 u< ecx_13 + 1)
                        sub_4023a0(esi, ecx_13 + 1, ecx_13)
                        edx_2.b = var_4d_1
                        
                        if (ecx_13 != 0xffffffff)
                            goto label_4c7f61
                    else if (ecx_13 != 0xffffffff)
                    label_4c7f61:
                        char* eax_35
                        
                        if (esi[5] u< 0x10)
                            eax_35 = esi
                        else
                            eax_35 = *esi
                        
                        eax_35[esi[4]] = edx_2.b
                        bool cond:5_1 = esi[5] u< 0x10
                        esi[4] = ecx_13 + 1
                        
                        if (not(cond:5_1))
                            esi = *esi
                        
                        *(esi + ecx_13 + 1) = 0
                    else
                        esi[4] = ecx_13 + 1
                        
                        if (eax_34 u>= 0x10)
                            esi = *esi
                        
                        *esi = nullptr
                    
                    ecx_4 = arg1 + 0xd0
                    var_68_5 = *(arg1 + 0xe0) - 1
                    var_6c_2 = 1
                    break
            else
                char* ecx_11
                
                if (esi[5] u< 0x10)
                    ecx_11 = esi
                else
                    ecx_11 = *esi
                
                if (*(ecx_11 + result) u>= 0xe0)
                    char* ecx_12
                    
                    if (esi[5] u< 0x10)
                        ecx_12 = esi
                    else
                        ecx_12 = *esi
                    
                    if (*(ecx_12 + result) u<= 0xef)
                        goto label_4c7ef8
            
            result += 1
            
            if (result s>= edx_2)
                goto label_4c801e
        
    label_4c7f9f:
        result = sub_403070(ecx_4, &var_28, var_6c_2, var_68_5)
        int32_t* result_3 = result
        
        if (arg1 + 0xd0 != result_3)
            if (*(arg1 + 0xe4) u>= 0x10)
                j__free(*(arg1 + 0xd0))
            
            *(arg1 + 0xe4) = 0xf
            *(arg1 + 0xe0) = 0
            *(arg1 + 0xd0) = nullptr
            
            if (result_3[5] u>= 0x10)
                *(arg1 + 0xd0) = *result_3
                *result_3 = 0
            else
                void* eax_38 = result_3[4]
                
                if (eax_38 != 0xffffffff)
                    _memcpy(arg1 + 0xd0, result_3, eax_38 + 1, eax_4)
            
            *(arg1 + 0xe0) = result_3[4]
            result = result_3[5]
            *(arg1 + 0xe4) = result
            result_3[5] = 0xf
            result_3[4] = 0
            *result_3 = 0
        
        if (var_14 u>= 0x10)
            result = j__free(var_28)
    
label_4c801e:
    ebx_1 = var_2c
    result_2 = result_5

if (ebx_1 u>= 0x10)
    result = j__free(result_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
