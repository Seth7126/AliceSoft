// 函数: sub_611fe0
// 地址: 0x611fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7435fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, "<memory>", 0x1d)
int32_t var_8_1 = 0

if (sub_6247b0(arg1 + 0x1a8, &var_44) != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x76b80c, 0x19)
    var_8_1.b = 1
    var_8_1.b = 0
    int32_t eax_5 = var_18_1
    int32_t ebx
    ebx.b = sub_624890(arg1 + 0x1a8, &var_2c, &var_44) == 0
    
    if (eax_5 u>= 0x10)
        eax_5 = sub_403160(var_2c.d, eax_5 + 1, 1)
    
    if (ebx.b == 0)
        int32_t var_90_1 = 0xf
        int32_t var_94_1 = 0
        char var_a4 = ebx.b
        var_8_1.b = 2
        char var_8c[0x10]
        char* eax_7 = sub_4176f0(eax_5.b, &var_a4, &var_8c, 0x76b868)
        var_8_1.b = 3
        char var_74[0x10]
        char* eax_8 = sub_4176f0(eax_7.b, eax_7, &var_74, 0x76b828)
        var_8_1.b = 4
        char var_5c[0x10]
        char* eax_9 = sub_4176f0(eax_8.b, eax_8, &var_5c, 0x76b930)
        var_8_1.b = 5
        var_8_1.b = 6
        sub_6c56d0(sub_4176f0(eax_9.b, eax_9, &var_2c, 0x76b8c8))
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c[0].d, var_48 + 1, 1)
        
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        var_5c[0] = 0
        int32_t var_60
        
        if (var_60 u>= 0x10)
            sub_403160(var_74[0].d, var_60 + 1, 1)
        
        int32_t var_60_1 = 0xf
        int32_t var_64_1 = 0
        var_74[0] = 0
        int32_t var_78
        
        if (var_78 u>= 0x10)
            sub_403160(var_8c[0].d, var_78 + 1, 1)
        
        int32_t var_78_1 = 0xf
        int32_t var_7c_1 = 0
        var_8c[0] = 0
        
        if (var_90_1 u>= 0x10)
            sub_403160(var_a4.d, var_90_1 + 1, 1)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
