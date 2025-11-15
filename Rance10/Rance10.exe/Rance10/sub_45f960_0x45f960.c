// 函数: sub_45f960
// 地址: 0x45f960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0

if (arg3 s< 0)
    sub_403360(arg2, arg4)
else if ((*(*arg1 + 8))(eax_2) s<= arg3)
    sub_403360(arg2, arg4)
else
    int32_t edi_1 = *(arg1[1] + (arg3 << 2))
    
    if (edi_1 == 0)
        sub_403360(arg2, arg4)
    else
        void* var_2c
        sub_403360(&var_2c, arg4)
        int32_t var_8_1 = 0
        sub_46dfd0(edi_1, arg2, &var_2c)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
