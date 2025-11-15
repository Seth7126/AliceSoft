// 函数: sub_61ed80
// 地址: 0x61ed80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c416
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg1 + 4)
int32_t ecx = *(arg1 + 8)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (edx u>= ecx)
label_61edd0:
    result.b = 0
else
    while (true)
        char* eax_3 = *(arg1 + 4)
        
        if (*eax_3 == 0)
            int32_t var_20_1 = 0
            char var_30 = 0
            result = 0xf
            struct _EXCEPTION_REGISTRATION_RECORD** result_1 = 0xf
            
            if (edx != eax_3)
                sub_403490(&var_30, edx, eax_3 - edx)
                result = result_1
            
            if (arg2 != &var_30)
                int32_t eax_4 = arg2[5]
                
                if (eax_4 u>= 0x10)
                    sub_403160(*arg2, eax_4 + 1, 1)
                
                arg2[5] = 0xf
                bool cond:0_1 = arg2[5] u< 0x10
                arg2[4] = 0
                int32_t* eax_6
                
                if (cond:0_1)
                    eax_6 = arg2
                else
                    eax_6 = *arg2
                
                *eax_6 = 0
                sub_4056a0(arg2, &var_30)
                result = result_1
            
            if (result u>= 0x10)
                sub_403160(var_30.d, result + 1, 1)
            
            *(arg1 + 4) += 1
            result.b = 1
            break
        
        *(arg1 + 4) = &eax_3[1]
        
        if (&eax_3[1] u>= ecx)
            goto label_61edd0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
