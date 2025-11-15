// 函数: sub_4be450
// 地址: 0x4be450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f249
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_58 = ebx
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char var_48 = arg3.b
int32_t var_4c = 0
arg3[4] = 0
arg3[5] = 0
arg3[5] = 0xf
bool cond:0 = arg3[5] u< 0x10
int32_t* var_54 = arg3
arg3[4] = 0
char* eax_4

if (cond:0)
    eax_4 = arg3
else
    eax_4 = *arg3

*eax_4 = 0
int32_t var_8_1 = 0
int32_t var_4c_1 = 1

while (**arg2 != 0)
    char* eax_6
    eax_6.b = **arg2
    
    if (eax_6.b == 0x25)
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_403490(&var_2c, U"%", 1)
        int32_t var_8_2 = 1
        *arg2 += 1
        ebx.b = **arg2
        int128_t var_3c
        
        while (ebx.b != 0)
            sub_405500(&var_2c, 1, ebx.b)
            __builtin_strncpy(&var_3c, "diouxXfeEgGcspn%", 0x10)
            void* eax_9 = _memchr(&var_3c, ebx.b, 0x10)
            void* ecx_3 = &var_2c
            
            if (eax_9 != 0)
                ecx_3 = eax_9
            
            if (ecx_3 != &var_2c)
                break
            
            *arg2 += 1
            ebx.b = **arg2
        
        char* ecx_4 = &var_2c
        int32_t eax_11 = 2
        
        if (var_18_1 u>= 0x10)
            ecx_4 = var_2c.d
        
        if (var_1c_1 u< 2)
            eax_11 = var_1c_1
        
        if (sub_406ac0(eax_11, 0x762224, ecx_4, eax_11) != 0 || var_1c_1 u< 2 || var_1c_1 u> 2)
            var_8_2.b = 2
            void* var_44
            sub_4055a0(arg3, sub_4073c0(arg4, &var_44, &var_2c), 0, 0xffffffff)
            int32_t eax_16 = var_3c:0xc.d
            
            if (eax_16 u>= 0x10)
                sub_403160(var_44, eax_16 + 1, 1)
            
            char* eax_18 = *arg2
            
            if (*eax_18 != 0)
                *arg2 = &eax_18[1]
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            break
        
        sub_407430(arg3, U"%", 1)
        var_8_2.b = 0
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
    else
        sub_405500(arg3, 1, eax_6.b)
    
    *arg2 += 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
