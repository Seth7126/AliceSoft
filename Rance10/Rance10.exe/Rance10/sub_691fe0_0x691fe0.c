// 函数: sub_691fe0
// 地址: 0x691fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747a68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = nullptr
int32_t var_18 = 0
var_1c = sub_4321d0()
int32_t var_8_1 = 0
sub_691ac0(&var_1c)
void** eax_4 = sub_432330(&var_1c, arg1)
int32_t* edi = var_1c
void** esi = eax_4
char eax_6

if (esi != edi)
    eax_6 = sub_412ca0(arg1, &esi[4])

if (esi == edi || eax_6 != 0)
    esi = edi

int32_t result

if (esi != edi)
    result = esi[0xa] << 4 | 5
else
    result = 0

int32_t* var_30_2 = edi
void var_14
sub_456ff0(&var_1c, &var_14, *edi)
sub_403160(var_1c, 1, 0x2c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
