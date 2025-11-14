// 函数: sub_5c6f30
// 地址: 0x5c6f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9ca0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_esi
int32_t var_4c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
var_4.b = 1
char result = sub_5cea10(arg1, &var_28, "S_GT")

if (result != 0)
    result = sub_5cea10(arg1, &var_40, "S_GT")
    
    if (result != 0)
        char* ecx_1 = &var_28
        char* eax_5 = &var_40
        
        if (var_14 u>= 0x10)
            ecx_1 = var_28.d
        
        if (var_2c u>= 0x10)
            eax_5 = var_40.d
        
        int32_t ecx_3
        
        while (true)
            char edx_1 = *eax_5
            char temp0_1 = *ecx_1
            bool c_1 = edx_1 u< temp0_1
            
            if (edx_1 == temp0_1)
                if (edx_1 == 0)
                    ecx_3 = 0
                    break
                
                edx_1 = eax_5[1]
                char temp1_1 = ecx_1[1]
                c_1 = edx_1 u< temp1_1
                
                if (edx_1 == temp1_1)
                    eax_5 = &eax_5[2]
                    ecx_1 = &ecx_1[2]
                    
                    if (edx_1 != 0)
                        continue
                    
                    ecx_3 = 0
                    break
            
            ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
            break
        
        int32_t eax_6
        eax_6.b = ecx_3 s> 0
        result = sub_5ddf10(arg1 + 0x220, eax_6)

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30_1 = 0
var_40 = 0

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
