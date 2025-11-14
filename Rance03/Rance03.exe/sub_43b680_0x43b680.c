// 函数: sub_43b680
// 地址: 0x43b680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b62d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0xf
int32_t var_3c = 0
char var_4c = 0
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

sub_402110(&var_4c, arg2, ecx)
int32_t var_c_1 = 0
int32_t var_34
sub_43c2b0(&var_34, &var_4c)

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t edi = *(arg1 + 0xc)
void** eax_5 = sub_417ed0(arg1 + 0xc, &var_34)
char eax_7

if (eax_5 != *(arg1 + 0xc))
    eax_7 = sub_40c3a0(&var_34, &eax_5[4])

void** var_50

if (eax_5 == *(arg1 + 0xc) || eax_7 != 0)
    var_50 = *(arg1 + 0xc)
else
    var_50 = eax_5

void* ebx_1
ebx_1.b = var_50 != edi
int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

void*** result
result.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
