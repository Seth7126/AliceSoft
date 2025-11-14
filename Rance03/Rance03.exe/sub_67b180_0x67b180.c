// 函数: sub_67b180
// 地址: 0x67b180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_15 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0970
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
sub_402110(&var_40, 0x702a24, 0x1d)
int32_t var_4 = 0
sub_412d60(arg2, &var_40)
int32_t var_4_1 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t* eax_5 = arg1 + 0xa4

if (*(arg1 + 0xb8) u>= 0x10)
    eax_5 = *eax_5

int32_t* var_50_2 = eax_5
int32_t var_4_2 = 1
sub_412d60(arg2, sub_4691f0(&var_40, 0x702a10))
int32_t var_4_3 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_5 = *(arg1 + 0xc)
int32_t var_4_4 = 2
sub_412d60(arg2, sub_4691f0(&var_40, 0x702a58))
int32_t var_4_5 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_8 = *(arg1 + 0x10)
int32_t var_4_6 = 3
sub_412d60(arg2, sub_4691f0(&var_40, 0x702a44))
int32_t var_4_7 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_11 = *(arg1 + 0x1c)
int32_t var_4_8 = 4
sub_412d60(arg2, sub_4691f0(&var_40, 0x702e30))
int32_t var_4_9 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_14 = *(arg1 + 0x20)
int32_t var_4_10 = 5
sub_412d60(arg2, sub_4691f0(&var_40, 0x702e1c))
int32_t var_4_11 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_17 = *(arg1 + 0x2c)
int32_t var_4_12 = 6
sub_412d60(arg2, sub_4691f0(&var_40, 0x702e58))
int32_t var_4_13 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_20 = *(arg1 + 0x30)
int32_t var_4_14 = 7
int32_t var_28
int32_t result = sub_412d60(arg2, sub_4691f0(&var_28, 0x702e44))
int32_t var_14

if (var_14 u>= 0x10)
    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
