// 函数: sub_4a1a80
// 地址: 0x4a1a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e720
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result

if ((*(*arg1 + 0x74))(eax_2).b != 0)
    result.b = 1
else
    sub_4a2e90(&arg1[-1])
    arg1[0x7d].b = 0
    *(arg1 + 0x121) = 1
    sub_4a5040(&arg1[0x2f])
    char var_45_1
    
    if (arg1[0x43] != 0)
        char eax_7 = (*(*arg1[0x43] + 0x10))()
        var_45_1 = eax_7
        
        if (eax_7 != 0 && arg1[0x43] != 0)
            (*(*arg1[0x43] + 0x1c))()
    else
        var_45_1 = 0
    
    if (sub_49e0f0(&arg1[-1]) != 0)
        *(arg1 + 0x1f5) = 1
        sub_49e2d0(&arg1[-1])
        Concurrency::details::ThreadScheduler::CreateVirtualProcessor(0)
    else
        void* var_2c
        sub_403360(&var_2c, 0x761338)
        int32_t var_8_1 = 0
        sub_6c52e0(&var_2c)
        int32_t var_8_2 = 0xffffffff
        char* var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, &var_18[1], 1)
    
    if (var_45_1 == 0 || arg1[0x43] == 0)
    label_4a1bad:
        *(arg1 + 0x121) = 0
        arg1[0x7d].b = 1
        *(arg1 + 0x85) = 1
        result.b = 1
    else
        if ((*(*arg1[0x43] + 0x20))().b != 0)
            goto label_4a1bad
        
        void var_44
        sub_403360(&var_44, "Direct3D")
        int32_t var_8_3 = 1
        sub_6c52e0(&var_44)
        sub_403320(&var_44)
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
