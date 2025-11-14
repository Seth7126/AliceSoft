// 函数: sub_6799d0
// 地址: 0x6799d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_13 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d08c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
var_40 = 0
sub_402110(&var_40, 0x702620, 0x11)
int32_t var_4 = 0
sub_412d60(arg2, &var_40)
int32_t var_4_1 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_2 = *(arg1 + 0x2c)
int32_t var_4_2 = 1
sub_412d60(arg2, sub_4691f0(&var_40, 0x70265c))
int32_t var_4_3 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_5 = *(arg1 + 0x30)
int32_t var_4_4 = 2
sub_412d60(arg2, sub_4691f0(&var_40, 0x70264c))
int32_t var_4_5 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30_1 = 0
var_40 = 0
sub_402110(&var_40, 0x70254c, 0xe)
int32_t var_4_6 = 3
sub_412d60(arg2, &var_40)
int32_t var_4_7 = 0xffffffff

if (var_2c_1 u>= 0x10)
    j__free(var_40.d)

int32_t var_2c_2 = 0xf
int32_t var_30_2 = 0
var_40 = 0
sub_402110(&var_40, 0x70253c, 0xe)
int32_t var_4_8 = 4
sub_412d60(arg2, &var_40)
int32_t var_4_9 = 0xffffffff

if (var_2c_2 u>= 0x10)
    j__free(var_40.d)

int32_t var_2c_3 = 0xf
int32_t var_30_3 = 0
var_40 = 0
sub_402110(&var_40, 0x702570, 0xe)
int32_t var_4_10 = 5
sub_412d60(arg2, &var_40)
int32_t var_4_11 = 0xffffffff

if (var_2c_3 u>= 0x10)
    j__free(var_40.d)

int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, 0x70255c, 0x10)
int32_t var_4_12 = 6
int32_t result = sub_412d60(arg2, &var_28)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
