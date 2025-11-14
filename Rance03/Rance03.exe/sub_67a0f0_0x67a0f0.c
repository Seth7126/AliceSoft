// 函数: sub_67a0f0
// 地址: 0x67a0f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_17 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d09e8
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
sub_402110(&var_40, 0x7028bc, 0x19)
int32_t var_4 = 0
sub_412d60(arg2, &var_40)
int32_t var_4_1 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_2 = *(arg1 + 0x1c)
int32_t var_4_2 = 1
sub_412d60(arg2, sub_4691f0(&var_40, 0x7028f8))
int32_t var_4_3 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_5 = *(arg1 + 0x20)
int32_t var_4_4 = 2
sub_412d60(arg2, sub_4691f0(&var_40, 0x7028e8))
int32_t var_4_5 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_8 = *(arg1 + 0x2c)
int32_t var_4_6 = 3
sub_412d60(arg2, sub_4691f0(&var_40, 0x702918))
int32_t var_4_7 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_11 = *(arg1 + 0x30)
int32_t var_4_8 = 4
sub_412d60(arg2, sub_4691f0(&var_40, 0x702908))
int32_t var_4_9 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_14 = *(arg1 + 0x34)
int32_t var_4_10 = 5
sub_412d60(arg2, sub_4691f0(&var_40, 0x702938))
int32_t var_4_11 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_17 = *(arg1 + 0x38)
int32_t var_4_12 = 6
sub_412d60(arg2, sub_4691f0(&var_40, 0x702928))
int32_t var_4_13 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_20 = *(arg1 + 0x3c)
int32_t var_4_14 = 7
sub_412d60(arg2, sub_4691f0(&var_40, 0x70283c))
int32_t var_4_15 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_23 = *(arg1 + 0x40)
int32_t var_4_16 = 8
int32_t var_28
int32_t result = sub_412d60(arg2, sub_4691f0(&var_28, 0x70282c))
int32_t var_14

if (var_14 u>= 0x10)
    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
