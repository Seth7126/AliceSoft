// 函数: sub_55e580
// 地址: 0x55e580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b680
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_30 = nullptr
int32_t var_2c = 0
int32_t var_28 = 0
int32_t var_8_1 = 0
void* var_24 = nullptr
int32_t var_20 = 0
int32_t var_1c = 0
var_8_1.b = 1
char var_11 = 0x20
sub_4263a0(&var_24, &var_11)
var_11 = 0x40
sub_4263a0(&var_24, &var_11)
sub_55f0d0(&var_30, arg1, &var_24)
struct _EXCEPTION_REGISTRATION_RECORD** ecx_2 = var_30
int32_t result

if (var_2c - ecx_2 - 0x30 u>= 0x18)
    result = 0
else
    void* eax_6 = &ecx_2[6]
    
    if (ecx_2[0xb] u>= 0x10)
        eax_6 = *eax_6
    
    int32_t result_1
    int32_t* var_3c_3 = &result_1
    
    if (sub_6ca310(eax_6, 0x7942e0) != 1)
        result = 0
    else
        result = result_1

void* edx = var_24

if (edx != 0)
    sub_403160(edx, var_1c - edx, 1)

sub_417070(&var_30)
fsbase->NtTib.ExceptionList = ExceptionList
return result
