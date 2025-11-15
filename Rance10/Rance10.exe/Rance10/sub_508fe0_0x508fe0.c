// 函数: sub_508fe0
// 地址: 0x508fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737736
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg1

if (arg2 s> 0)
    int32_t ebx_1 = esi[4]
    
    if (ebx_1 != 0 && ebx_1 s> arg2)
        void* eax_3 = nullptr
        int32_t edx_1 = 0
        
        if (arg2 s> 0)
            while (eax_3 s< ebx_1)
                char* ecx_1
                
                if (esi[5] u< 0x10)
                    ecx_1 = esi
                else
                    ecx_1 = *esi
                
                ecx_1.b = *(ecx_1 + eax_3)
                
                if (ecx_1.b u< 0x81 || ecx_1.b u> 0x9f)
                    ecx_1.b += 0x20
                    
                    if (ecx_1.b u<= 0xf)
                        eax_3 += 1
                else
                    eax_3 += 1
                
                edx_1 += 1
                eax_3 += 1
                
                if (edx_1 s>= arg2)
                    break
        
        void* var_2c
        char* eax_4 = sub_405480(esi, &var_2c, 0, eax_3)
        
        if (esi != eax_4)
            int32_t eax_5 = esi[5]
            
            if (eax_5 u>= 0x10)
                sub_403160(*esi, eax_5 + 1, 1)
            
            esi[5] = 0xf
            bool cond:1_1 = esi[5] u< 0x10
            esi[4] = 0
            char* eax_7
            
            if (cond:1_1)
                eax_7 = esi
            else
                eax_7 = *esi
            
            *eax_7 = 0
            sub_4056a0(esi, eax_4)
        
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        result = result_1
        
        if (result u>= 0x10)
            result = sub_403160(var_2c, result + 1, 1)
else
    bool cond:0_1 = esi[5] u< 0x10
    esi[4] = 0
    
    if (not(cond:0_1))
        esi = *esi
    
    *esi = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
