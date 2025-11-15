// 函数: sub_5c0870
// 地址: 0x5c0870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73fc25
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_bc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_a4
sub_5c1100(arg1, &var_a4, 1)
int32_t var_8_1 = 0
char var_74
sub_5c1100(arg1, &var_74, 6)
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
var_8_1.b = 2
int32_t var_94
void* var_8c
int32_t var_78
char var_5c
int32_t var_48

if (var_94 != 0)
    char* eax_4 = sub_404f20(&var_8c, arg2)
    var_8_1.b = 3
    char* eax_5 = sub_417750(eax_4, eax_4, &var_5c, &var_a4)
    
    if (&var_44 != eax_5)
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        var_30 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        sub_4056a0(&var_44, eax_5)
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    var_48 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    
    if (var_78 u>= 0x10)
        sub_403160(var_8c, var_78 + 1, 1)

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
var_8_1.b = 5
int32_t var_64

if (var_64 != 0)
    char* eax_12 = sub_404f20(&var_8c, arg2)
    var_8_1.b = 6
    char* eax_13 = sub_417750(eax_12, eax_12, &var_5c, &var_74)
    
    if (&var_2c != eax_13)
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        var_18 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_4056a0(&var_2c, eax_13)
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    var_8_1.b = 5
    int32_t var_48_1 = 0xf
    int32_t var_4c_2 = 0
    var_5c = 0
    
    if (var_78 u>= 0x10)
        sub_403160(var_8c, var_78 + 1, 1)

void** ebx
ebx.b = sub_57dfb0(arg1 + 0x28, &var_44, &var_2c, arg3) != 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_2 = 0
var_2c = 0

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_2 = 0
var_44 = 0
int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74.d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64_1 = 0
var_74 = 0
int32_t var_90

if (var_90 u>= 0x10)
    sub_403160(var_a4, var_90 + 1, 1)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
