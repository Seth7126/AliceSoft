// 函数: sub_5f2400
// 地址: 0x5f2400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741b38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFilePath::VTable* const var_30 = &filesystem::CFilePath::`vftable'
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
sub_403590(&var_2c, &data_7fd490, 0, 0xffffffff)
sub_67eb70(&var_30)
sub_67eaf0(&var_30)
sub_4055a0(&var_2c, arg1, 0, 0xffffffff)
char* lpFileName = &var_2c

if (var_18 u>= 0x10)
    lpFileName = var_2c.d

uint32_t eax_3 = GetFileAttributesA(lpFileName)
uint32_t ebx

if (eax_3 != 0xffffffff)
    ebx.b = not.b((eax_3 u>> 4).b)
    ebx.b &= 1
else
    ebx.b = 0

var_30 = &filesystem::CFilePath::`vftable'

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
