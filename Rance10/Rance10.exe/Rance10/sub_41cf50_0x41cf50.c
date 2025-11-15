// 函数: sub_41cf50
// 地址: 0x41cf50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728ad0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_50 = &fileimage::CFileImageMaker::`vftable'
void* var_4c = nullptr
int32_t var_48 = 0
int32_t var_44 = 0
int32_t var_8_1 = 0
sub_41dba0(arg1, &var_50)
sub_6ca100(&var_50, sub_4209a0(*(arg1 + 4)))
struct win32only::CFileMapping::VTable* const var_40 = &win32only::CFileMapping::`vftable'
int32_t result_1 = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_34 = 0
var_8_1.b = 1

if (sub_41f180(&var_40, &var_50) != 0)
    SendMessageA(*(arg1 + 0xc), arg2, 0, 0)

var_40 = &win32only::CFileMapping::`vftable'
sub_6cdf10(&var_40)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_30.d, result + 1, 1)

int32_t var_1c = 0xf
int32_t var_20_1 = 0
char var_30_1 = 0

if (var_4c != 0)
    result = sub_403160(var_4c, var_44 - var_4c, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
