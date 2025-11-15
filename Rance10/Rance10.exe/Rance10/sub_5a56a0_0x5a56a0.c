// 函数: sub_5a56a0
// 地址: 0x5a56a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733560
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, U"=", 1)
int32_t var_8_1 = 0
char eax_3
int32_t ecx_2
eax_3, ecx_2 = sub_59f280(arg1, &var_44)
int32_t var_8_2 = 0xffffffff
char* result

if (var_30 u>= 0x10)
    result, ecx_2 = sub_403160(var_44.d, &var_30[1], 1)

if (eax_3 != 0)
    int32_t var_60_1 = ecx_2
    result = sub_5a67d0(arg1, arg2)

if (eax_3 == 0 || result.b == 0)
label_5a57bc:
    result.b = 0
else
    while (true)
        char* var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        int32_t var_8_3 = 1
        void var_4c
        
        if (sub_5de3d0(&var_2c, &var_4c) != 0)
            char eax_6
            int32_t ecx_5
            eax_6, ecx_5 = sub_407560(&var_2c, 0x769c8c)
            
            if (eax_6 != 0)
                int32_t var_8_4 = 0xffffffff
                
                if (var_18_1 u>= 0x10)
                    ecx_5 = sub_403160(var_2c.d, &var_18_1[1], 1)
                
                int32_t var_60_3 = ecx_5
                int32_t var_18_2 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
                
                if (sub_5a67d0(arg1, arg2).b == 0)
                    goto label_5a57bc
                
                continue
        
        *arg1 = arg1[1]
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, &var_18_1[1], 1)
        
        result.b = 1
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
