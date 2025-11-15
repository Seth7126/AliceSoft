// 函数: sub_4338f0
// 地址: 0x4338f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_403490(&var_2c, "ADL", 3)
int32_t var_8_1 = 0
char* edi = &var_2c
char* edx = &var_2c

if (var_18 u>= 0x10)
    edi = var_2c.d

if (var_18 u>= 0x10)
    edx = var_2c.d

int32_t var_48 = 0.d
sub_6ca200(arg1 + 4, *(arg1 + 8), edx, var_1c + edi)
char var_2d = 0
sub_4263a0(arg1 + 4, &var_2d)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
void* result = sub_6ca100(arg1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
