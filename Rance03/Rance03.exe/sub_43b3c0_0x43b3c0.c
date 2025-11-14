// 函数: sub_43b3c0
// 地址: 0x43b3c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b6270
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
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

sub_402110(&var_34, arg2, ecx)
int32_t var_c_1 = 0
char var_4c
sub_43c2b0(&var_4c, &var_34)
var_c_1.b = 1
void** eax_5 = sub_417ed0(arg1 + 0xc, &var_4c)
char eax_7

if (eax_5 != *(arg1 + 0xc))
    eax_7 = sub_40c3a0(&var_4c, &eax_5[4])

if (eax_5 == *(arg1 + 0xc) || eax_7 != 0)
    var_50 = *(arg1 + 0xc)
else
    var_50 = eax_5

void** eax_9 = var_50
int32_t* result

if (eax_9 != *(arg1 + 0xc))
    result = sub_43b500(&eax_9[0xa])
else
    result = nullptr

int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c = 0

if (var_20 u>= 0x10)
    j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
