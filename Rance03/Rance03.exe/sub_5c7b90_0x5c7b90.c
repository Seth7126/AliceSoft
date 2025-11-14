// 函数: sub_5c7b90
// 地址: 0x5c7b90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x234) -= 4
int32_t edx = **(arg1 + 0x234)
int32_t eax_8 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
int32_t result

if (edx u>= eax_8)
label_5c7d0d:
    int32_t var_48_4 = edx
    int32_t var_4c_1 = 0x6e7928
    result = sub_5c2400(eax_8, edx, arg1, arg1, "S_POPBACK2")
else
    eax_8 = *(*(arg1 + 0x174) + (edx << 2))
    int32_t var_2c_1 = eax_8
    
    if (eax_8 == 0)
        goto label_5c7d0d
    
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    char var_28 = 0
    int32_t var_4 = 0
    char* edx_1
    
    if (*(eax_8 + 0xc) != 0)
        edx_1 = *(eax_8 + 8)
    else
        edx_1 = nullptr
    
    void* ecx
    
    if (*edx_1 != 0)
        char* ecx_1 = edx_1
        
        do
            eax_8.b = *ecx_1
            ecx_1 = &ecx_1[1]
        while (eax_8.b != 0)
        
        ecx = ecx_1 - &ecx_1[1]
    else
        ecx = nullptr
    
    sub_402110(&var_28, edx_1, ecx)
    
    if (var_18_1 != 0)
        int32_t ebx_1 = 0
        char* esi_2 = var_28.d
        int32_t eax_10 = 0
        
        if (var_18_1 != 0)
            do
                char* ecx_3 = &var_28
                ebx_1 = eax_10
                
                if (var_14_1 u>= 0x10)
                    ecx_3 = esi_2
                
                char* ecx_4
                
                if (ecx_3[eax_10] u>= 0x81)
                    ecx_4 = &var_28
                    
                    if (var_14_1 u>= 0x10)
                        ecx_4 = esi_2
                
                char* ecx_5
                char* ecx_6
                
                if (ecx_3[eax_10] u< 0x81 || ecx_4[eax_10] u> 0x9f)
                    ecx_5 = &var_28
                    
                    if (var_14_1 u>= 0x10)
                        ecx_5 = esi_2
                    
                    if (ecx_5[eax_10] u>= 0xe0)
                        ecx_6 = &var_28
                        
                        if (var_14_1 u>= 0x10)
                            ecx_6 = esi_2
                
                if ((ecx_3[eax_10] u< 0x81 || ecx_4[eax_10] u> 0x9f)
                        && (ecx_5[eax_10] u< 0xe0 || ecx_6[eax_10] u> 0xef))
                    eax_10 += 1
                else
                    eax_10 += 2
            while (eax_10 u< var_18_1)
            
            if (var_18_1 u< ebx_1)
                sub_69a57f("invalid string position")
                noreturn
        
        int32_t var_18_2 = ebx_1
        char* eax_11 = &var_28
        
        if (var_14_1 u>= 0x10)
            eax_11 = esi_2
        
        eax_11[ebx_1] = 0
    
    int32_t ecx_8
    int32_t edx_3
    result, ecx_8, edx_3 = sub_5d3d20(var_2c_1, &var_28)
    
    if (result.b == 0)
        int32_t var_48_2 = 0x6e7960
        result = sub_5c2400(result, edx_3, ecx_8, arg1, "S_POPBACK2")
    
    if (var_14_1 u>= 0x10)
        result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
