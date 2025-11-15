// 函数: sub_50f580
// 地址: 0x50f580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_2 = arg1
int32_t eax_3 = arg2[4]
char* result_1 = result_2
int32_t var_38 = 0
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_403490(&var_2c, 0x75d2ba, nullptr)
int32_t edx = eax_3
int32_t esi = 0
int32_t var_8_1 = 0
char* result

if (edx s<= 0)
label_50f693:
    sub_403750(arg2, arg2[4] - var_1c, var_1c)
    *(result_2 + 0x14) = 0xf
    *(result_2 + 0x10) = 0
    *result_2 = 0
    sub_4056a0(result_2, &var_2c)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    result = result_2
else
    while (true)
        int32_t* eax_4
        
        if (arg2[5] u< 0x10)
            eax_4 = arg2
        else
            eax_4 = *arg2
        
        int32_t ecx_1 = var_18
        result_2.b = *(eax_4 + esi)
        
        if (ecx_1 u< 1)
            sub_403830(&var_2c, 1, var_1c)
            ecx_1 = var_18
            edx = eax_3
        
        char* eax_5 = &var_2c
        
        if (ecx_1 u>= 0x10)
            eax_5 = var_2c.d
        
        *eax_5 = result_2.b
        char* eax_6 = &var_2c
        var_1c = 1
        
        if (var_18 u>= 0x10)
            eax_6 = var_2c.d
        
        eax_6[1] = 0
        
        if (result_2.b u< 0x81 || result_2.b u> 0x9f)
            result_2.b += 0x20
            
            if (result_2.b u<= 0xf)
                goto label_50f654
        else
        label_50f654:
            esi += 1
            
            if (edx s<= esi)
                *(result_1 + 0x14) = 0xf
                *(result_1 + 0x10) = 0
                *result_1 = 0
                sub_403490(result_1, 0x75d2bb, nullptr)
                
                if (var_18 u>= 0x10)
                    sub_403160(var_2c.d, var_18 + 1, 1)
                
                result = result_1
                break
            
            int32_t* eax_7
            
            if (arg2[5] u< 0x10)
                eax_7 = arg2
            else
                eax_7 = *arg2
            
            sub_405500(&var_2c, 1, *(eax_7 + esi))
            edx = eax_3
        
        esi += 1
        
        if (esi s>= edx)
            result_2 = result_1
            goto label_50f693

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
