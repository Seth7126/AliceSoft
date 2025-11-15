// 函数: sub_51d710
// 地址: 0x51d710
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
char* result = sub_4b8340()

if (result.b == 0)
    result = arg3[1]
    
    if (result == 1 && arg1[0x2b].b == 0)
        int32_t var_30 = 0
        float var_34 = 0f
        sub_522c20(&var_30, &var_34)
        void var_2c
        sub_4079d0(&arg1[0x36], &arg1[0x30], &var_2c, &arg1[0x36])
        int32_t var_8_1 = 0
        float xmm0_1 = sub_520330(arg1)
        sub_51f3d0(arg1, &var_2c, var_30 - int.d(xmm0_1) - 3)
        arg1[0x2c] = sub_51fff0(&arg1[0x30])
        result = sub_403320(&var_2c)
    else if (result == 0xd)
        *(arg1 + 0x1c1) = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
