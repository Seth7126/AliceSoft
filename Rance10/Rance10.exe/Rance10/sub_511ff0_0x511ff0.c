// 函数: sub_511ff0
// 地址: 0x511ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738120
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** result

if (arg3 != 0)
    if (sub_510b20(arg1, arg5, arg4).b == 0)
        result.b = 0
    else if (sub_51b2c0(arg3, arg4).b == 0)
        result.b = 0
    else
        int32_t* var_2c
        sub_403360(&var_2c, 0x766750)
        int32_t var_8_1 = 0
        int32_t* ecx_3 = arg2[1]
        int32_t var_18
        int32_t ebx_1
        
        if (ecx_3 != 0)
            int32_t* edx_1 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_1 = var_2c
            
            ebx_1 = (*(*ecx_3 + 8))(edx_1, 0)
        else
            ebx_1 = 0
        
        int32_t var_8_2 = 0xffffffff
        int32_t ecx_5 = sub_403320(&var_2c)
        void* var_38
        
        if (ebx_1 == 1)
            void** var_50_3 = arg2
            int32_t* var_54_3 = arg5
            sub_44e4f0(&arg1[2], &var_38, ecx_5)
        
        sub_403360(&var_2c, 0x76675c)
        int32_t var_8_3 = 1
        int32_t* ecx_8 = arg2[1]
        int32_t ebx_2
        
        if (ecx_8 != 0)
            int32_t* edx_2 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_2 = var_2c
            
            ebx_2 = (*(*ecx_8 + 8))(edx_2, 0)
        else
            ebx_2 = 0
        
        int32_t var_8_4 = 0xffffffff
        int32_t ecx_10
        result, ecx_10 = sub_403320(&var_2c)
        
        if (ebx_2 == 1)
            void** var_50_4 = arg2
            int32_t* var_54_5 = arg5
            sub_44e4f0(&arg1[4], &var_38, ecx_10)
        
        result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
