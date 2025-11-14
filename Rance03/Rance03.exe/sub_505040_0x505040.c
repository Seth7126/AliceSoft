// 函数: sub_505040
// 地址: 0x505040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba47b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_90
int32_t eax_2 = __security_cookie ^ &var_90
int32_t __saved_edi
int32_t var_9c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8c = 0
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
sub_402110(&var_40, 0x6e2390, 2)
int32_t var_4 = 0
int32_t var_5c = 0xf
int32_t var_60 = 0
char var_70 = 0
sub_402110(&var_70, 0x6e238c, 1)
var_4.b = 1
int32_t var_74 = 0xf
int32_t var_78 = 0
char var_88 = 0
sub_402110(&var_88, 0x6e2388, 2)
var_4.b = 2
int32_t var_44 = 0xf
int32_t var_48 = 0
char var_58 = 0
sub_402110(&var_58, 0x6e2384, 1)
var_4.b = 3
char var_28
char* eax_6 = sub_4692e0(&var_58, arg2, &var_28, &var_58, &var_88)
var_4.b = 4
sub_4692e0(eax_6, eax_6, arg1, &var_70, &var_40)
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_1 = 0xf
int32_t var_18 = 0
var_28 = 0

if (var_44 u>= 0x10)
    j__free(var_58.d)

int32_t var_44_1 = 0xf
int32_t var_48_1 = 0
var_58 = 0

if (var_74 u>= 0x10)
    j__free(var_88.d)

int32_t var_74_1 = 0xf
int32_t var_78_1 = 0
var_88 = 0

if (var_5c u>= 0x10)
    j__free(var_70.d)

int32_t var_5c_1 = 0xf
int32_t var_60_1 = 0
var_70 = 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_90)
return arg1
