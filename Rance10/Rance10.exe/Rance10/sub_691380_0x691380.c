// 函数: sub_691380
// 地址: 0x691380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729640
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_4c = arg3
char* ecx = *arg2
int32_t var_48 = arg5
int32_t var_50 = 0
int32_t* eax_4 = sub_406b20(ecx)

if (eax_4.b == 0)
    void* var_44
    sub_407c10(eax_4, arg2, &var_44, arg4)
    int32_t var_8_1 = 0
    char var_2c
    sub_6917e0(&var_48, arg2, &var_2c, &var_48)
    var_8_1.b = 1
    sub_4079d0(&var_2c, &var_44, arg3, &var_2c)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
else
    sub_691740(&var_48, arg2, arg3, arg4, &var_48)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
