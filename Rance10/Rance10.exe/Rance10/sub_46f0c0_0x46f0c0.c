// 函数: sub_46f0c0
// 地址: 0x46f0c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d706
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 4)
void* ecx = *esi
void* var_30 = ecx
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx == esi)
label_46f11d:
    result.b = 0
else
    int32_t edi_1 = arg3
    
    while (true)
        if (*(*(ecx + 0x28) + 0x34) != 6)
            if (edi_1 == 0)
                void* var_2c
                char* eax_4 = sub_46de30(*(ecx + 0x28), &var_2c)
                
                if (arg2 != eax_4)
                    int32_t eax_5 = *(arg2 + 0x14)
                    
                    if (eax_5 u>= 0x10)
                        sub_403160(*arg2, eax_5 + 1, 1)
                    
                    *(arg2 + 0x14) = 0xf
                    bool cond:0_1 = *(arg2 + 0x14) u< 0x10
                    *(arg2 + 0x10) = 0
                    char* eax_7
                    
                    if (cond:0_1)
                        eax_7 = arg2
                    else
                        eax_7 = *arg2
                    
                    *eax_7 = 0
                    sub_4056a0(arg2, eax_4)
                
                struct _EXCEPTION_REGISTRATION_RECORD** var_18
                
                if (var_18 u>= 0x10)
                    sub_403160(var_2c, var_18 + 1, 1)
                
                result.b = 1
                break
            
            edi_1 -= 1
        
        sub_429080(&var_30)
        ecx = var_30
        
        if (ecx == esi)
            goto label_46f11d

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
