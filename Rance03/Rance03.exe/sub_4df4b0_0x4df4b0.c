// 函数: sub_4df4b0
// 地址: 0x4df4b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be851
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
char* var_48 = arg2
int32_t var_50 = 0
int32_t* var_44
sub_40d1c0(arg1 + 0xc0, arg1 + 0xa8, &var_44, arg1 + 0xc0)
int32_t var_4_1 = 1
int32_t eax_6 = sub_4c75f0(&var_44)
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
sub_402110(arg2, 0x6da591, nullptr)
int32_t arg_8
int32_t edx_1 = arg_8
int32_t arg_c
int32_t ecx_2 = arg_c
int32_t var_50_1 = 1
int32_t var_30

if (edx_1 != ecx_2 && ecx_2 s<= eax_6)
    int32_t* eax_7 = &arg_c
    
    if (ecx_2 s>= edx_1)
        eax_7 = &arg_8
    
    int32_t i_2 = *eax_7
    int32_t* eax_8 = &arg_c
    
    if (edx_1 s>= ecx_2)
        eax_8 = &arg_8
    
    int32_t* esi_1 = var_44
    int32_t i_5 = 0
    int32_t ebp_1 = *eax_8
    int32_t eax_9 = 0
    
    if (i_2 s> 0)
        int32_t i_4 = i_2
        int32_t i
        
        do
            int32_t* ecx_3 = &var_44
            
            if (var_30 u>= 0x10)
                ecx_3 = esi_1
            
            int32_t* ecx_4
            
            if (*(ecx_3 + eax_9) u>= 0x81)
                ecx_4 = &var_44
                
                if (var_30 u>= 0x10)
                    ecx_4 = esi_1
            
            if (*(ecx_3 + eax_9) u>= 0x81 && *(ecx_4 + eax_9) u<= 0x9f)
                eax_9 += 1
            else
                int32_t* ecx_5 = &var_44
                
                if (var_30 u>= 0x10)
                    ecx_5 = esi_1
                
                if (*(ecx_5 + eax_9) u>= 0xe0)
                    int32_t* ecx_6 = &var_44
                    
                    if (var_30 u>= 0x10)
                        ecx_6 = esi_1
                    
                    if (*(ecx_6 + eax_9) u<= 0xef)
                        eax_9 += 1
            
            eax_9 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
        i_5 = i_4
    
    int32_t ebx_1 = eax_9
    
    if (i_5 s< ebp_1)
        int32_t i_3 = ebp_1 - i_5
        int32_t i_1
        
        do
            int32_t* ecx_7 = &var_44
            
            if (var_30 u>= 0x10)
                ecx_7 = esi_1
            
            int32_t* ecx_8
            
            if (*(ecx_7 + eax_9) u>= 0x81)
                ecx_8 = &var_44
                
                if (var_30 u>= 0x10)
                    ecx_8 = esi_1
            
            if (*(ecx_7 + eax_9) u>= 0x81 && *(ecx_8 + eax_9) u<= 0x9f)
                eax_9 += 1
            else
                int32_t* ecx_9 = &var_44
                
                if (var_30 u>= 0x10)
                    ecx_9 = esi_1
                
                if (*(ecx_9 + eax_9) u>= 0xe0)
                    int32_t* ecx_10 = &var_44
                    
                    if (var_30 u>= 0x10)
                        ecx_10 = esi_1
                    
                    if (*(ecx_10 + eax_9) u<= 0xef)
                        eax_9 += 1
            
            eax_9 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    int32_t var_2c
    char* eax_11 = sub_403070(&var_44, &var_2c, ebx_1, eax_9 - ebx_1)
    
    if (arg2 != eax_11)
        if (*(arg2 + 0x14) u>= 0x10)
            j__free(*arg2)
        
        *(arg2 + 0x14) = 0xf
        *(arg2 + 0x10) = 0
        *arg2 = 0
        
        if (*(eax_11 + 0x14) u>= 0x10)
            *arg2 = *eax_11
            *eax_11 = 0
        else
            void* eax_12 = *(eax_11 + 0x10)
            
            if (eax_12 != 0xffffffff)
                _memcpy(arg2, eax_11, eax_12 + 1, eax_4)
        
        *(arg2 + 0x10) = *(eax_11 + 0x10)
        *(arg2 + 0x14) = *(eax_11 + 0x14)
        *(eax_11 + 0x14) = 0xf
        *(eax_11 + 0x10) = 0
        *eax_11 = 0
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)

if (var_30 u>= 0x10)
    j__free(var_44)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return arg2
