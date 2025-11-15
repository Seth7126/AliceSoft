// 函数: sub_6c4d30
// 地址: 0x6c4d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748b50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_5c
int32_t* eax_3 = sub_6c4e30(&var_5c, arg1 + 0x24)
int32_t var_8_1 = 0
char var_44
int32_t* eax_4 = sub_4175e0(eax_3, arg1 + 0xc, &var_44, "\n\n")
var_8_1.b = 1
char var_2c[0x10]
char* eax_5 = sub_4177a0(eax_4, eax_4, &var_2c, eax_3)
struct win32only::CClipboard::VTable* const var_64 = &win32only::CClipboard::`vftable'
char var_60 = 0
sub_6ccc30(&var_64, eax_5)
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c[0].d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c[0] = 0
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t result_1
int32_t result = result_1
int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (result u>= 0x10)
    result = sub_403160(var_5c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
