// 函数: sub_460de0
// 地址: 0x460de0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ab8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** ebx = arg2
int32_t ebp = arg1[4]
struct _EXCEPTION_REGISTRATION_RECORD*** var_44 = ebx
int32_t var_2c = 0xf
void* var_30 = nullptr
char var_40 = 0
sub_402110(&var_40, 0x6da1b7, nullptr)
int32_t i = 0
int32_t var_4 = 0

if (ebp s> 0)
    while (true)
        int32_t eax_5 = arg1[5]
        char* ecx_1
        
        if (eax_5 u< 0x10)
            ecx_1 = arg1
        else
            ecx_1 = *arg1
        
        char* ecx_2
        
        if (ecx_1[i] u>= 0x81)
            if (eax_5 u< 0x10)
                ecx_2 = arg1
            else
                ecx_2 = *arg1
        
        if (ecx_1[i] u< 0x81 || ecx_2[i] u> 0x9f)
            char* ecx_3
            
            if (eax_5 u< 0x10)
                ecx_3 = arg1
            else
                ecx_3 = *arg1
            
            if (ecx_3[i] u< 0xe0)
                goto label_460eec
            
            char* ecx_4
            
            if (eax_5 u< 0x10)
                ecx_4 = arg1
            else
                ecx_4 = *arg1
            
            if (ecx_4[i] u> 0xef)
                goto label_460eec
            
            goto label_460ea2
        
    label_460ea2:
        
        if (i + 1 s>= ebp)
            ebx = var_44
        label_460eec:
            int32_t* ecx_7
            
            if (eax_5 u< 0x10)
                ecx_7 = arg1
            else
                ecx_7 = *arg1
            
            if (*(ecx_7 + i) != 0x22)
                int32_t* ecx_15
                
                if (eax_5 u< 0x10)
                    ecx_15 = arg1
                else
                    ecx_15 = *arg1
                
                if (*(ecx_15 + i) != 0x2e)
                    int32_t* eax_24
                    
                    if (eax_5 u< 0x10)
                        eax_24 = arg1
                    else
                        eax_24 = *arg1
                    
                    sub_4031c0(&var_40, 1, *(eax_24 + i))
                else
                    sub_421cd0(ebx, &var_40)
                    char* eax_23 = &var_40
                    var_30 = nullptr
                    
                    if (var_2c u>= 0x10)
                        eax_23 = var_40.d
                    
                    *eax_23 = 0
            else
                int32_t* eax_10
                
                if (eax_5 u< 0x10)
                    eax_10 = arg1
                else
                    eax_10 = *arg1
                
                sub_4031c0(&var_40, 1, *(eax_10 + i))
                
                for (i += 1; i s< ebp; i += 1)
                    int32_t* eax_12
                    
                    if (arg1[5] u< 0x10)
                        eax_12 = arg1
                    else
                        eax_12 = *arg1
                    
                    char edx_1 = *(eax_12 + i)
                    void* ebx_2
                    
                    if (0xffffffff - var_30 u> 1)
                        ebx_2 = var_30 + 1
                    
                    if (0xffffffff - var_30 u<= 1 || ebx_2 u> 0xfffffffe)
                        sub_69a551("string too long")
                        noreturn
                    
                    if (var_2c u< ebx_2)
                        sub_4023a0(&var_40, ebx_2, var_30)
                        
                        if (ebx_2 != 0)
                            goto label_460f71
                    else if (ebx_2 != 0)
                    label_460f71:
                        char* ecx_11 = &var_40
                        
                        if (var_2c u>= 0x10)
                            ecx_11 = var_40.d
                        
                        *(ecx_11 + var_30) = edx_1
                        char* eax_15 = &var_40
                        var_30 = ebx_2
                        
                        if (var_2c u>= 0x10)
                            eax_15 = var_40.d
                        
                        *(eax_15 + ebx_2) = 0
                    else
                        char* eax_17 = &var_40
                        var_30 = ebx_2
                        
                        if (var_2c u>= 0x10)
                            eax_17 = var_40.d
                        
                        *eax_17 = ebx_2.b
                    
                    int32_t eax_16 = arg1[5]
                    int32_t* ecx_12
                    
                    if (eax_16 u< 0x10)
                        ecx_12 = arg1
                    else
                        ecx_12 = *arg1
                    
                    if (*(ecx_12 + i) != 0x5c)
                        int32_t* eax_22
                        
                        if (eax_16 u< 0x10)
                            eax_22 = arg1
                        else
                            eax_22 = *arg1
                        
                        if (*(eax_22 + i) == 0x22)
                            break
                    else
                        i += 1
                        
                        if (i s< ebp)
                            if (eax_16 u< 0x10)
                                sub_4031c0(&var_40, 1, *(arg1 + i))
                            else
                                sub_4031c0(&var_40, 1, (*arg1)[i])
        else
            char* eax_6
            
            if (eax_5 u< 0x10)
                eax_6 = arg1
            else
                eax_6 = *arg1
            
            sub_4031c0(&var_40, 1, eax_6[i])
            int32_t* eax_8
            
            if (arg1[5] u< 0x10)
                eax_8 = arg1
            else
                eax_8 = *arg1
            
            sub_4031c0(&var_40, 1, *(eax_8 + i + 1))
            i += 1
        
        i += 1
        
        if (i s>= ebp)
            break
        
        ebx = var_44

struct _EXCEPTION_REGISTRATION_RECORD*** esi_1 = var_44
int32_t eax_26
eax_26.b = var_30 != 0

if (eax_26 != 0)
    sub_421cd0(esi_1, &var_40)

char* result
int32_t edx_2
edx_2:result = muls.dp.d(0x2aaaaaab, esi_1[1] - *esi_1)
int32_t edx_3 = edx_2 s>> 2
int32_t i_2 = (edx_3 u>> 0x1f) + edx_3

if (i_2 s> 0)
    int32_t ebx_3 = 0
    int32_t i_1
    
    do
        int32_t var_28
        result = sub_461190(&var_28, *esi_1 + ebx_3)
        char* result_1 = result
        void* esi_3 = *esi_1 + ebx_3
        
        if (esi_3 != result_1)
            if (*(esi_3 + 0x14) u>= 0x10)
                j__free(*esi_3)
            
            *(esi_3 + 0x14) = 0xf
            *(esi_3 + 0x10) = 0
            *esi_3 = 0
            
            if (*(result_1 + 0x14) u>= 0x10)
                *esi_3 = *result_1
                *result_1 = 0
            else
                void* eax_29 = *(result_1 + 0x10)
                
                if (eax_29 != 0xffffffff)
                    _memcpy(esi_3, result_1, eax_29 + 1, eax_4)
            
            *(esi_3 + 0x10) = *(result_1 + 0x10)
            result = *(result_1 + 0x14)
            *(esi_3 + 0x14) = result
            *(result_1 + 0x14) = 0xf
            *(result_1 + 0x10) = 0
            *result_1 = 0
        
        int32_t var_14
        
        if (var_14 u>= 0x10)
            result = j__free(var_28)
        
        esi_1 = var_44
        ebx_3 += 0x18
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
