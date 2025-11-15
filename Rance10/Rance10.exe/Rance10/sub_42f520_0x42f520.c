// 函数: sub_42f520
// 地址: 0x42f520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a0d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (*arg2 != 0)
    char* ecx_1 = arg2
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_2c, arg2, ecx)
int32_t var_8_1 = 0
var_8_1.b = 1
void* var_5c
char var_44
sub_430d00(&var_5c, sub_430ec0(&var_44))
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
var_8_1.b = 4

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
void** esi_2 = sub_432330(arg1 + 0xc, &var_5c)
char eax_10

if (esi_2 != *(arg1 + 0xc))
    eax_10 = sub_412ca0(&var_5c, &esi_2[4])

if (esi_2 == *(arg1 + 0xc) || eax_10 != 0)
    esi_2 = *(arg1 + 0xc)

int32_t result

if (esi_2 != *(arg1 + 0xc))
    result = sub_42f670(esi_2[0xa], arg3)
else
    result = 0

int32_t var_48

if (var_48 u>= 0x10)
    sub_403160(var_5c, var_48 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
