// 函数: sub_59dfd0
// 地址: 0x59dfd0
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
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_59f280(arg1, &var_44) == 0

if (var_30 u>= 0x10)
    sub_403160(var_44.d, &var_30[1], 1)

char* result

if (ebx.b == 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_3 = 1
    void var_48
    
    if (sub_5de3d0(&var_2c, &var_48).b != 0)
        if (arg2 + 0x22c != &var_2c)
            sub_403590(arg2 + 0x22c, &var_2c, 0, 0xffffffff)
        
        ebx.b = 1
    else
        ebx.b = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
