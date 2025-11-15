// 函数: sub_409350
// 地址: 0x409350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727380
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_4c = arg3
int32_t var_50 = 0

if (arg2[5] u>= 0x10)
    arg2 = *arg2

var_4c = arg2
void* var_48
sub_407d70(arg4, &var_4c, &var_48, arg4)
int32_t var_8_1 = 0
int32_t* edx_1 = var_4c
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
void* ecx_1

if (*edx_1 != 0)
    int32_t* ecx_2 = edx_1
    void* edi_1 = ecx_2 + 1
    char i
    
    do
        i = *ecx_2
        ecx_2 += 1
    while (i != 0)
    ecx_1 = ecx_2 - edi_1
else
    ecx_1 = nullptr

sub_403490(&var_30, edx_1, ecx_1)
var_8_1.b = 1
sub_407820(&var_30, &var_48, arg3, &var_30)

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

int32_t var_1c_1 = 0xf
int32_t var_20_1 = 0
var_30 = 0
int32_t var_34

if (var_34 u>= 0x10)
    sub_403160(var_48, var_34 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
