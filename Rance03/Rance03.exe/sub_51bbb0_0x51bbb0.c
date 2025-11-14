// 函数: sub_51bbb0
// 地址: 0x51bbb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c29a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_44 = 0xf
int32_t i = 0
var_58 = 0
int32_t* result = sub_401ff0(&var_58, arg3, 0, 0xffffffff)
int32_t var_4 = 0

while (i != 0)
    int32_t* var_40
    sub_5197c0(arg1, &var_40, &var_58)
    var_4.b = 1
    int32_t var_2c
    
    if (*(arg1 + 0xc8) != 0)
        int32_t* edx_1 = &var_40
        int32_t eax_6 = 1
        
        if (var_2c u>= 0x10)
            edx_1 = var_40
        
        int32_t var_30
        
        if (var_30 u< 1)
            eax_6 = var_30
        
        int32_t eax_8
        bool cond:1_1
        
        if (eax_6 == 0)
        label_51bcc3:
            
            if (var_30 u>= 1)
                eax_8.b = var_30 != 1
            else
                eax_8 = 0xffffffff
            
            cond:1_1 = eax_8 == 0
        else
            void* const esi_1 = &data_6e2dd0
            int32_t j_1 = eax_6 - 4
            
            if (eax_6 u>= 4)
                int32_t j
                
                do
                    if (*edx_1 != *esi_1)
                        goto label_51bc86
                    
                    edx_1 = &edx_1[1]
                    esi_1 += 4
                    j = j_1
                    j_1 -= 4
                while (j u>= 4)
            
            if (j_1 == 0xfffffffc)
                eax_8 = 0
            else
            label_51bc86:
                int32_t ecx_2
                ecx_2.b = *edx_1
                char temp2_1 = *esi_1
                
                if (ecx_2.b != temp2_1)
                    eax_8 = sbb.d(j_1, j_1, ecx_2.b u< temp2_1) | 1
                else if (j_1 == 0xfffffffd)
                    eax_8 = 0
                else
                    ecx_2.b = *(edx_1 + 1)
                    char temp5_1 = *(esi_1 + 1)
                    
                    if (ecx_2.b != temp5_1)
                        eax_8 = sbb.d(j_1, j_1, ecx_2.b u< temp5_1) | 1
                    else if (j_1 == 0xfffffffe)
                        eax_8 = 0
                    else
                        ecx_2.b = *(edx_1 + 2)
                        char temp6_1 = *(esi_1 + 2)
                        
                        if (ecx_2.b != temp6_1)
                            eax_8 = sbb.d(j_1, j_1, ecx_2.b u< temp6_1) | 1
                        else if (j_1 == 0xffffffff)
                            eax_8 = 0
                        else
                            j_1.b = *(edx_1 + 3)
                            char temp7_1 = *(esi_1 + 3)
                            
                            if (j_1.b == temp7_1)
                                eax_8 = 0
                            else
                                eax_8 = sbb.d(j_1, j_1, j_1.b u< temp7_1) | 1
            
            cond:1_1 = eax_8 == 0
            
            if (eax_8 == 0)
                goto label_51bcc3
        
        eax_8.b = cond:1_1
        
        if (eax_8.b != 0)
            int32_t var_14_1 = 0xf
            int32_t var_18_1 = 0
            char var_28 = 0
            sub_402110(&var_28, 0x6e2dd4, 1)
            var_4.b = 2
            sub_412d60(arg2, &var_28)
            var_4.b = 1
            
            if (var_14_1 u>= 0x10)
                j__free(var_28.d)
    
    result = sub_421cd0(arg2, &var_40)
    var_4.b = 0
    
    if (var_2c u>= 0x10)
        result = j__free(var_40)

if (var_44 u>= 0x10)
    result = j__free(var_58.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return result
