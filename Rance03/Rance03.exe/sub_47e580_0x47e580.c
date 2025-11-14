// 函数: sub_47e580
// 地址: 0x47e580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba2a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_4c = 0
struct IString::common::CStringWrapper::VTable* const var_48 =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
int32_t var_4 = 0
int32_t var_2c
char* eax_5 = sub_696ff0(&var_2c)
var_4.b = 1

if (*(eax_5 + 0x14) u>= 0x10)
    eax_5 = *eax_5

var_48->vFunc_1(eax_5)
var_4.b = 0
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

char* edx = var_48->data(eax_4)
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
void* ecx

if (*edx != 0)
    char* ecx_1 = edx
    char* eax_8
    
    do
        eax_8.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_8.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(arg1, edx, ecx)
struct IString::common::CStringWrapper::VTable* const var_48_1 =
    &common::CStringWrapper::`vftable'{for `IString'}

if (var_30 u>= 0x10)
    j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return arg1
