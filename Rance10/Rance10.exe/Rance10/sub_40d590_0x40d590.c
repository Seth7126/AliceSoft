// 函数: sub_40d590
// 地址: 0x40d590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727951
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_168 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
int32_t var_158 = 0

if (ecx == 0 || *(arg1 + 8) == 0)
    sub_414340(arg2)
else
    void var_13c
    (*(*ecx + 0xc))(&var_13c, arg3)
    int32_t var_8_1 = 0
    void var_c0
    (*(**(arg1 + 8) + 0xc))(&var_c0, arg3)
    var_8_1.b = 1
    int32_t var_138
    
    if (var_138 == 0xa || var_138 == 2 || var_138 == 0x12 || var_138 == 0x5c || var_138 == 0x5b
            || var_138 == 0x5d)
        sub_40d180(arg2, &var_c0)
    else if (sub_41a7b0(&var_13c) != 0)
        sub_40d180(arg2, &var_c0)
    else if (var_138 == 0xc || var_138 == 4 || var_138 == 0x14)
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        var_8_1.b = 2
        void var_44
        void* ecx_10
        
        if (sub_41a7d0(&var_c0) == 0)
            if (sub_41a800(&var_c0) != 0)
                sub_41aaa0(&var_13c, &var_44)
                var_8_1.b = 4
                sub_61fa50(sub_41a970(&var_c0))
                ecx_10 = &var_44
                goto label_40d77d
            
            void* ecx_15 = &var_c0
            
            if (sub_41a820(ecx_15) != 0)
                void var_154
                sub_41aaa0(ecx_15, &var_154)
                var_8_1.b = 5
                sub_41aaa0(&var_13c, &var_44)
                var_8_1.b = 6
                sub_620070(&var_2c)
                sub_403320(&var_44)
                ecx_10 = &var_154
                goto label_40d77d
            
            sub_414340(arg2)
            sub_403320(&var_2c)
        else
            char* eax_7 = sub_41aaa0(&var_13c, &var_44)
            var_8_1.b = 3
            sub_41a840(&var_c0)
            sub_61f360(eax_7, &var_2c)
            ecx_10 = &var_44
        label_40d77d:
            var_8_1.b = 2
            sub_403320(ecx_10)
            sub_414640(arg2, &var_2c)
            sub_403320(&var_2c)
    else
        sub_414340(arg2)
    
    sub_40ad50(&var_c0)
    sub_40ad50(&var_13c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
