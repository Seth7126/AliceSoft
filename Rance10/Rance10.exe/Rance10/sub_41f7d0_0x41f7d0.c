// 函数: sub_41f7d0
// 地址: 0x41f7d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0
char* eax_5 = (***(arg1 + 0xc))((*(**(arg1 + 8) + 0x14))(arg3))

if (eax_5 != 0)
    void* var_2c
    int32_t* eax_6 = sub_403360(&var_2c, eax_5)
    int32_t var_8_1 = 0
    sub_4176f0(eax_6.b, eax_6, arg2, "()")
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
else
    sub_403360(arg2, 0x75d270)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
