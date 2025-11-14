// 函数: sub_6044d0
// 地址: 0x6044d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ccae0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != &data_74f9b0)
    sub_401ff0(arg1 + 4, &data_74f9b4, 0, 0xffffffff)

sub_6047d0(arg1)
int32_t var_2c = 0xf
int32_t var_30 = 0
var_40 = 0
sub_402110(&var_40, "DebugData", 9)
int32_t var_4 = 0
sub_604730(arg1)
sub_403110(arg1 + 4, &var_40, nullptr, 0xffffffff)
int32_t var_4_1 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, "02_Last", 7)
int32_t var_4_2 = 1
sub_604730(arg1)
int32_t* result = sub_403110(arg1 + 4, &var_28, nullptr, 0xffffffff)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
