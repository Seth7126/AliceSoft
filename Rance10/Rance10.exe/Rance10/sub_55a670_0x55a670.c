// 函数: sub_55a670
// 地址: 0x55a670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$_Mpunct@G@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = arg1 + 4
int32_t result_1 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403590(&var_44, edi, 0, 0xffffffff)
int32_t var_8_1 = 0
void** esi = arg1 + 0x1c
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403590(&var_2c, esi, 0, 0xffffffff)
var_8_1.b = 1
bool cond:0 = edi[5] u< 0x10
char eax_3 = *(arg1 + 0xe8)
int32_t var_48 = *(arg1 + 0xf0)
int32_t eax_5 = *(arg1 + 0xec)
edi[4] = 0

if (not(cond:0))
    edi = *edi

*edi = nullptr
bool cond:1 = esi[5] u< 0x10
esi[4] = 0

if (not(cond:1))
    esi = *esi

*esi = nullptr
sub_55a490(arg1, &var_44, &var_2c, eax_3.d, eax_5, &var_48)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result = result_1
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (result u>= 0x10)
    result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
