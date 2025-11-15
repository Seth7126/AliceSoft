// 函数: sub_59dde0
// 地址: 0x59dde0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e370
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, U"=,,,,,{,==},},======,", 1)
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
    void var_7c
    
    if (sub_5de3d0(&var_2c, &var_7c).b == 0)
        ebx.b = 0
    else if (sub_407560(&var_2c, 0x769194).b == 0)
        if (sub_407560(&var_2c, 0x76918c).b == 0)
            if (sub_407560(&var_2c, 0x769184).b == 0)
                if (sub_407560(&var_2c, 0x7692c8).b == 0)
                    if (sub_407560(&var_2c, 0x7692b4).b == 0)
                        char* eax_5 = &var_2c
                        
                        if (var_18_1 u>= 0x10)
                            eax_5 = var_2c.d
                        
                        char* var_78 = eax_5
                        void var_5c
                        sub_403360(&var_5c, 0x76928c)
                        var_8_3.b = 2
                        var_8_3.b = 3
                        void var_74
                        sub_5e01e0(sub_409240(&var_78, &var_5c, &var_74, &var_78))
                        sub_403320(&var_74)
                        sub_403320(&var_5c)
                        ebx.b = 0
                    else
                        *(arg2 + 0x208) = 4
                        ebx.b = 1
                else
                    *(arg2 + 0x208) = 3
                    ebx.b = 1
            else
                *(arg2 + 0x208) = 2
                ebx.b = 1
        else
            *(arg2 + 0x208) = 1
            ebx.b = 1
    else
        *(arg2 + 0x208) = 0
        ebx.b = 1
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
