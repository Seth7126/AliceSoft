// 函数: sub_51d810
// 地址: 0x51d810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4cbd50(&arg1[3], arg3, arg2)
int32_t result = sub_4b8340()

if (result.b == 0)
    int32_t eax_4 = arg3[1]
    
    if (eax_4 == 1)
        void* ebx_1 = data_7fcb64
        float var_30 = 0f
        float var_34 = 0f
        
        if (sub_47d5a0(ebx_1) != 0 && (***(ebx_1 + 0xc))(&var_30, &var_34) != 0)
            long double x87_r0
            long double x87_r1
            float eax_9 = sub_63cd60(var_30, x87_r0, x87_r1)
            float ecx_4 = var_34
            var_30 = eax_9
            long double x87_r2
            var_34 = sub_63cd60(ecx_4, x87_r1, x87_r2)
        
        void* var_2c
        sub_4079d0(&arg1[0x36], &arg1[0x30], &var_2c, &arg1[0x36])
        int32_t var_8_1 = 0
        float xmm0_1 = sub_520330(arg1)
        sub_51f3d0(arg1, &var_2c, var_30 i- int.d(xmm0_1) - 3)
        arg1[0x2e] = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
    else if (eax_4 == 0x10)
        if (arg1[0x2c] == 0xffffffff)
            arg1[0x2c] = sub_51fff0(&arg1[0x30])
        
        arg1[0x2b].b = 1
    else if (eax_4 == 0x11)
        *(arg1 + 0xad) = 1
    
    result = arg3[1]
    
    if (result == 0x25 || result == 0x27 || result == 8 || result == 0x2e || result == 0xd
            || result == 0x24 || result == 0x23)
        arg1[0x2e] = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
