// 函数: sub_67be50
// 地址: 0x67be50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_16 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d09e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = &var_40
int32_t var_2c = 0xf
int32_t var_30 = 0
char eax_5 = *(arg1 + 0xbc)
var_40 = 0

if (eax_5 == 0)
    sub_402110(ecx, 0x703138, 0x19)
    int32_t var_4_1 = 1
else
    sub_402110(ecx, 0x703154, 0x1b)
    int32_t var_4 = 0

sub_412d60(arg2, &var_40)
int32_t var_4_2 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_2 = *(arg1 + 0x1c)
int32_t var_4_3 = 2
sub_412d60(arg2, sub_4691f0(&var_40, 0x70301c))
int32_t var_4_4 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_5 = *(arg1 + 0x20)
int32_t var_4_5 = 3
sub_412d60(arg2, sub_4691f0(&var_40, 0x703008))
int32_t var_4_6 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_8 = *(arg1 + 0x2c)
int32_t var_4_7 = 4
sub_412d60(arg2, sub_4691f0(&var_40, 0x703044))
int32_t var_4_8 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_11 = *(arg1 + 0x30)
int32_t var_4_9 = 5
sub_412d60(arg2, sub_4691f0(&var_40, 0x703030))
int32_t var_4_10 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_14 = *(arg1 + 0x34)
int32_t var_4_11 = 6
sub_412d60(arg2, sub_4691f0(&var_40, 0x70306c))
int32_t var_4_12 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_17 = *(arg1 + 0x38)
int32_t var_4_13 = 7
sub_412d60(arg2, sub_4691f0(&var_40, 0x703058))
int32_t var_4_14 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_50_20 = *(arg1 + 0x3c)
int32_t var_4_15 = 8
int32_t var_28
int32_t result = sub_412d60(arg2, sub_4691f0(&var_28, 0x70309c))
int32_t var_14

if (var_14 u>= 0x10)
    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
