// 函数: sub_59e0e0
// 地址: 0x59e0e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e5f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, U"==,=]=,=,", 1)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_59f280(arg1, &var_2c) == 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, &var_18[1], 1)

char* result

if (ebx.b == 0)
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    int32_t var_8_3 = 1
    void var_64
    
    if (sub_5de3d0(&var_44, &var_64).b == 0)
        ebx.b = 0
    else if (sub_407560(&var_44, 0x7692e4).b == 0)
        if (sub_407560(&var_44, 0x7692d8).b == 0)
            ebx.b = 0
        else
            *(arg2 + 0x340) = 1
            sub_403360(&var_2c, U"[")
            var_8_3.b = 2
            var_8_3.b = 1
            ebx.b = sub_59f280(arg1, &var_2c) == 0
            sub_403320(&var_2c)
            int32_t var_60
            
            if (ebx.b != 0)
                ebx.b = 0
            else if (sub_5de8c0(&var_60).b == 0)
                ebx.b = 0
            else
                *(arg2 + 0x344) = var_60
                void var_5c
                sub_403360(&var_5c, &(*U"==,=]=,=,")[4])
                var_8_3.b = 3
                ebx.b = sub_59f280(arg1, &var_5c) == 0
                sub_403320(&var_5c)
                
                if (ebx.b != 0)
                    ebx.b = 0
                else
                    ebx.b = 1
    else
        *(arg2 + 0x340) = 0
        ebx.b = 1
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
