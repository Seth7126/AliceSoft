// 函数: sub_454d90
// 地址: 0x454d90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b79c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
void* ecx

if (*arg2 != 0)
    char* ecx_1 = arg2
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_34, arg2, ecx)
int32_t var_c_1 = 0
int32_t* esi_2 = *(arg1 + 0x38)
int32_t result

if (esi_2 == *(arg1 + 0x3c))
label_454f2a:
    result = 0
else
    while (true)
        char* edx_1 = (***esi_2)(eax_4)
        int32_t var_38_1 = 0xf
        int32_t var_3c_1 = 0
        char var_4c = 0
        void* ecx_4
        
        if (*edx_1 != 0)
            char* ecx_5 = edx_1
            char* eax_6
            
            do
                eax_6.b = *ecx_5
                ecx_5 = &ecx_5[1]
            while (eax_6.b != 0)
            ecx_4 = ecx_5 - &ecx_5[1]
        else
            ecx_4 = nullptr
        
        sub_402110(&var_4c, edx_1, ecx_4)
        char* ecx_7 = &var_34
        char* edx_2 = &var_4c
        
        if (var_20 u>= 0x10)
            ecx_7 = var_34.d
        
        int32_t edi_2 = var_24
        int32_t eax_7 = var_3c_1
        
        if (var_38_1 u>= 0x10)
            edx_2 = var_4c.d
        
        if (eax_7 u< var_24)
            edi_2 = eax_7
        
        if (edi_2 == 0)
            goto label_454eee
        
        int32_t i_2 = edi_2 - 4
        
        if (edi_2 u>= 4)
            int32_t i_1
            
            do
                if (*edx_2 != *ecx_7)
                    goto label_454eae
                
                edx_2 = &edx_2[4]
                ecx_7 = &ecx_7[4]
                i_1 = i_2
                i_2 -= 4
            while (i_1 u>= 4)
        
        int32_t eax_9
        
        if (i_2 == 0xfffffffc)
            eax_9 = 0
        else
        label_454eae:
            eax_7.b = *edx_2
            char temp2_1 = *ecx_7
            
            if (eax_7.b != temp2_1)
                eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp2_1) | 1
            else if (i_2 == 0xfffffffd)
                eax_9 = 0
            else
                eax_7.b = edx_2[1]
                char temp5_1 = ecx_7[1]
                
                if (eax_7.b != temp5_1)
                    eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp5_1) | 1
                else if (i_2 == 0xfffffffe)
                    eax_9 = 0
                else
                    eax_7.b = edx_2[2]
                    char temp6_1 = ecx_7[2]
                    
                    if (eax_7.b != temp6_1)
                        eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp6_1) | 1
                    else if (i_2 == 0xffffffff)
                        eax_9 = 0
                    else
                        eax_7.b = edx_2[3]
                        char temp7_1 = ecx_7[3]
                        
                        if (eax_7.b == temp7_1)
                            eax_9 = 0
                        else
                            eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp7_1) | 1
        
        bool cond:2_1 = eax_9 != 0
        
        if (eax_9 == 0)
            eax_7 = var_3c_1
        label_454eee:
            int32_t eax_10
            
            if (eax_7 u>= var_24)
                eax_10.b = var_3c_1 != var_24
            else
                eax_10 = 0xffffffff
            
            cond:2_1 = eax_10 != 0
        
        int32_t ebx_1
        ebx_1.b = cond:2_1
        
        if (var_38_1 u>= 0x10)
            j__free(var_4c.d)
        
        if (ebx_1.b == 0)
            result = *esi_2
            break
        
        esi_2 = &esi_2[1]
        
        if (esi_2 == *(arg1 + 0x3c))
            goto label_454f2a

if (var_20 u>= 0x10)
    j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
