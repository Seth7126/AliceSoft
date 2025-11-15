// 函数: sub_62de70
// 地址: 0x62de70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = (**arg1)(eax_2)
int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (*edx != 0)
    char* ecx_1 = edx
    char* eax_4
    
    do
        eax_4.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_4.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_2c, edx, ecx)
int32_t var_8_1 = 0

if (var_1c != 0)
    int32_t esi_2 = 0
    char* ebx_1 = var_2c.d
    int32_t ecx_3 = 0
    
    if (var_1c != 0)
        do
            char* eax_5 = &var_2c
            esi_2 = ecx_3
            
            if (result_1 u>= 0x10)
                eax_5 = ebx_1
            
            eax_5.b = eax_5[ecx_3]
            int32_t eax_6
            
            if (eax_5.b u< 0x81 || eax_5.b u> 0x9f)
                eax_5.b += 0x20
                
                eax_6 = eax_5.b u> 0xf ? 1 : 2
            else
                eax_6 = 2
            
            ecx_3 += eax_6
        while (ecx_3 u< var_1c)
        
        if (var_1c u< esi_2)
            sub_6d0947("invalid string position")
            noreturn
    
    int32_t var_1c_1 = esi_2
    char* eax_7 = &var_2c
    
    if (result_1 u>= 0x10)
        eax_7 = ebx_1
    
    eax_7[esi_2] = 0

char* edx_2 = &var_2c

if (result_1 u>= 0x10)
    edx_2 = var_2c.d

(*(*arg1 + 4))(edx_2)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
