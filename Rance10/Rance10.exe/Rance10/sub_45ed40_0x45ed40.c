// 函数: sub_45ed40
// 地址: 0x45ed40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72be88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg2
int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x75e12c, 0xd)
int32_t var_8_1 = 0

if (esi[5] u>= 0x10)
    esi = *esi

char var_44
void arg_8
char* eax_4 = sub_45f080(&arg_8, &var_2c, &var_44, &arg_8, esi)
var_8_1.b = 1
var_8_1.b = 2
void* var_5c
sub_4055a0(arg1, sub_4175e0(eax_4, eax_4, &var_5c, U"\n"), 0, 0xffffffff)
int32_t var_48

if (var_48 u>= 0x10)
    sub_403160(var_5c, var_48 + 1, 1)

int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t result = result_1
int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
