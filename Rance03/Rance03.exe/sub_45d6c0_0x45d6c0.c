// 函数: sub_45d6c0
// 地址: 0x45d6c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8580
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct exfile::CTokenList::VTable* var_3c
sub_466460(&var_3c, *(arg1 + 4))
int32_t var_4 = 0
sub_466610(&var_3c, arg2)
var_48 = nullptr
int32_t var_44 = 0
int32_t var_40 = 0
var_4.b = 1
var_4.b = 0
int32_t ebx
ebx.b = sub_4667f0(&var_3c, &var_48)
struct _EXCEPTION_REGISTRATION_RECORD** ecx_3 = var_48

if (ecx_3 != 0)
    sub_4107c0(ecx_3, var_44)
    j__free(var_48)
    var_48 = nullptr
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0

if (ebx.b == 0)
    ebx.b = 0
else if (sub_466b30(&var_3c) == 0)
    ebx.b = 0
else if (sub_466c50(&var_3c) == 0)
    ebx.b = 0
else if (sub_45b430(arg1, &var_3c, arg3) == 0)
    ebx.b = 0
else
    ebx.b = 1

int32_t var_4_1 = 0xffffffff
sub_466520(&var_3c)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
