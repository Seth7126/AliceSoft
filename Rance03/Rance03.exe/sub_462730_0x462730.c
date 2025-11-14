// 函数: sub_462730
// 地址: 0x462730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b8c28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_6c = arg4
bool cond:0 = *arg2 != 0
int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
void* ecx

if (cond:0)
    char* ecx_1 = arg2
    char* eax_5
    
    do
        eax_5.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_5.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_64, arg2, ecx)
int32_t var_c_1 = 0
void* esi_2 = sub_4612f0(arg1 + 8, &var_64)

if (esi_2 == 0)
    esi_2 = arg1 + 0x94

int32_t var_c_2 = 0xffffffff

if (var_50 u>= 0x10)
    j__free(var_64.d)

bool cond:1 = *arg3 != 0
int32_t var_50_1 = 0xf
int32_t var_54_1 = 0
var_64 = 0
int32_t var_38 = 0xf
int32_t var_3c = 0
int32_t var_4c[0x4]
var_4c[0].b = 0
void* ecx_4

if (cond:1)
    char* ecx_5 = arg3
    void* eax_6
    
    do
        eax_6.b = *ecx_5
        ecx_5 = &ecx_5[1]
    while (eax_6.b != 0)
    ecx_4 = ecx_5 - &ecx_5[1]
else
    ecx_4 = nullptr

sub_402110(&var_4c, arg3, ecx_4)
int32_t var_c_3 = 1
int32_t var_c_4 = 0xffffffff
int32_t var_68 = sub_457b90(esi_2 + 0x2c, &var_4c)

if (var_38 u>= 0x10)
    j__free(var_4c[0])

char* edi_1 = var_6c
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
void* ecx_8

if (*edi_1 != 0)
    char* ecx_9 = edi_1
    int32_t eax_7
    
    do
        eax_7.b = *ecx_9
        ecx_9 = &ecx_9[1]
    while (eax_7.b != 0)
    ecx_8 = ecx_9 - &ecx_9[1]
else
    ecx_8 = nullptr

sub_402110(&var_34, edi_1, ecx_8)
int32_t var_c_5 = 2
int32_t edi_2 = sub_45eea0(esi_2 + 0x30, &var_34)

if (var_20 u>= 0x10)
    j__free(var_34.d)

int32_t result

if (*(esi_2 + 4) == 4)
    result = sub_456f70(esi_2 + 0x2c, var_68, edi_2)
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
