// 函数: sub_5f3500
// 地址: 0x5f3500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_4 = (*(**arg1 + 0x14))(arg2)
int32_t* eax_5 = (*(**arg1 + 0x14))(arg3)
int32_t result

if (eax_4 == 0 || eax_5 == 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x797e58, 0x1c)
    int32_t var_8_1 = 0
    sub_6c52e0(&var_2c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = 0
else
    char* esi_1 = (**eax_5)(eax_2)
    char* eax_8
    int32_t ecx_4
    eax_8, ecx_4 = (**eax_4)()
    
    while (true)
        ecx_4.b = *eax_8
        char temp1_1 = *esi_1
        bool c_1 = ecx_4.b u< temp1_1
        
        if (ecx_4.b == temp1_1)
            if (ecx_4.b == 0)
                result.b = false
                break
            
            ecx_4.b = eax_8[1]
            char temp2_1 = esi_1[1]
            c_1 = ecx_4.b u< temp2_1
            
            if (ecx_4.b == temp2_1)
                eax_8 = &eax_8[2]
                esi_1 = &esi_1[2]
                
                if (ecx_4.b != 0)
                    continue
                
                result.b = false
                break
        
        result.b = (sbb.d(ecx_4, ecx_4, c_1) | 1) s< 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
