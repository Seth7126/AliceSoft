// 函数: sub_59c5e0
// 地址: 0x59c5e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e418
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
void var_64
int32_t ebx

if (sub_5de3d0(&var_2c, &var_64) == 0)
    ebx.b = 0
else if (sub_407560(&var_2c, 0x769040) == 0)
    if (sub_407560(&var_2c, 0x769090) == 0)
        if (sub_407560(&var_2c, 0x769084) == 0)
            char* eax_4 = &var_2c
            
            if (var_18 u>= 0x10)
                eax_4 = var_2c.d
            
            char* var_60 = eax_4
            void var_44
            sub_403360(&var_44, 0x769058)
            var_8_1.b = 1
            var_8_1.b = 2
            void var_5c
            sub_5e01e0(sub_409240(&var_60, &var_44, &var_5c, &var_60))
            sub_403320(&var_5c)
            sub_403320(&var_44)
            ebx.b = 0
        else
            *arg2 = 2
            ebx.b = 1
    else
        *arg2 = 1
        ebx.b = 1
else
    *arg2 = 0
    ebx.b = 1

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
