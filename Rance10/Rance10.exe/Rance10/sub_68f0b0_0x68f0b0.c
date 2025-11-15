// 函数: sub_68f0b0
// 地址: 0x68f0b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747948
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_60 = 0xf
int32_t var_64 = 0
char var_74 = 0
int32_t var_8_1 = 0
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
var_8_1.b = 1
int32_t eax_4 = arg2 & 3
int32_t ebx
void* var_44
int32_t var_30
char var_2c
int32_t var_18
int32_t var_18_1
char* eax_13

if (eax_4 == 1)
    var_8_1.b = 2
    sub_409670(&var_74, sub_68b8d0(&var_2c, sub_6921a0(&var_44, arg2)))
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    var_8_1.b = 1
    var_18_1 = 0xf
    int32_t var_1c_3 = 0
    var_2c = 0
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    sub_403360(&var_44, "shader_vs_output.fx")
    var_8_1.b = 3
    eax_13 = sub_68b8d0(&var_2c, &var_44)
label_68f2bf:
    sub_409670(&var_5c, eax_13)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    var_8_1.b = 1
    int32_t var_18_2 = 0xf
    int32_t var_1c_4 = 0
    var_2c = 0
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    if (sub_68f3e0(&var_74) != 0)
        char var_75 = 0
        sub_4263a0(arg1, &var_75)
        
        if (var_4c == 0)
            ebx.b = 1
        else
            char* var_20 = nullptr
            int32_t var_1c_5 = 0
            int32_t var_18_3 = 0
            var_8_1.b = 8
            
            if (sub_68f3e0(&var_5c) != 0)
                int32_t var_90_6 = 0.d
                sub_691150(arg1, *arg1, var_20, var_1c_5)
                sub_4059a0(&var_20)
                ebx.b = 1
            else
                sub_4059a0(&var_20)
                ebx.b = 0
    else
        ebx.b = 0
else
    if (eax_4 == 2)
        sub_403360(&var_44, "ps_shadowmap.fx")
        var_8_1.b = 4
        sub_409670(&var_74, sub_68b9e0(&var_2c, &var_44))
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        var_8_1.b = 1
        var_18_1 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        sub_403360(&var_44, "shader_vs_output.fx")
        var_8_1.b = 5
        eax_13 = sub_68b9e0(&var_2c, &var_44)
        goto label_68f2bf
    
    if (eax_4 == 3)
        sub_403360(&var_44, "shader_ps.fx")
        var_8_1.b = 6
        sub_409670(&var_74, sub_68baf0(&var_2c, &var_44))
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        var_8_1.b = 1
        var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        sub_403360(&var_44, "shader_vs_output.fx")
        var_8_1.b = 7
        eax_13 = sub_68baf0(&var_2c, &var_44)
        goto label_68f2bf
    
    ebx.b = 0

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0

if (var_60 u>= 0x10)
    sub_403160(var_74.d, var_60 + 1, 1)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
