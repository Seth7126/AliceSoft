// 函数: sub_4af900
// 地址: 0x4af900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731cd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_68 = arg2
int32_t var_64 = arg3
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x75cf19, nullptr)
int32_t var_8_1 = 0
int32_t i = *arg1
char var_44
int32_t var_30
char var_2c

for (int32_t edi_1 = arg1[1]; i != edi_1; i += 4)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    var_8_1.b = 1
    var_8_1.b = 2
    sub_4055a0(&var_5c, sub_409350(sub_403490(&var_2c, "%d, ", 4), &var_2c, &var_44, i), 0, 
        0xffffffff)
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    var_8_1.b = 0
    var_30 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)

char* eax_11 = &var_5c

if (var_48 u>= 0x10)
    eax_11 = var_5c.d

char* var_60 = eax_11
int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x7619b0, 0x13)
var_8_1.b = 3
var_8_1.b = 4
sub_4abfc0(&var_68, sub_409240(&var_60, &var_2c, &var_44, &var_60))

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_2 = 0
var_44 = 0

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
