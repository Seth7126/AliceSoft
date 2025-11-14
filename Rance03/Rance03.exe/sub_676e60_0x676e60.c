// 函数: sub_676e60
// 地址: 0x676e60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d03d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_28
sub_673ca0(&var_28, arg2, arg3)
int32_t var_4 = 0
int32_t eax_5 = sub_673b90(arg2, arg3)
int32_t eax_6 = sub_673dd0(arg2, arg3)
int32_t var_44 = 0xf
int32_t var_48 = 0
char var_58 = 0
sub_402110(&var_58, 0x6da907, nullptr)
var_4.b = 1

if (eax_6 u> 5)
    sub_402110(&var_58, 0x701ddc, 6)
else
    switch (eax_6)
        case 0
            sub_402670(&var_58, 0x701f14)
        case 1
            sub_402670(&var_58, 0x701f28)
        case 2
            sub_402670(&var_58, 0x701f1c)
        case 3
            sub_402670(&var_58, 0x701dd0)
        case 4
            sub_402670(&var_58, 0x701db8)
        case 5
            sub_402670(&var_58, 0x701de4)

*(arg1 + 0x38) = 1
*(arg1 + 0x1d0) = eax_5
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
sub_402110(&var_40, 0x701e1c, 0x18)
var_4.b = 2
sub_412d60(arg4, &var_40)
var_4.b = 1

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t* eax_7 = &var_28
int32_t var_14

if (var_14 u>= 0x10)
    eax_7 = var_28

int32_t* var_78_5 = eax_7
var_4.b = 3
sub_412d60(arg4, sub_4691f0(&var_40, 0x701e04))
var_4.b = 1

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_78_8 = eax_5
var_4.b = 4
sub_412d60(arg4, sub_4691f0(&var_40, 0x701e50))
var_4.b = 1

if (var_2c u>= 0x10)
    j__free(var_40.d)

char* eax_10 = &var_58

if (var_44 u>= 0x10)
    eax_10 = var_58.d

char* var_78_11 = eax_10
var_4.b = 5
int32_t result = sub_412d60(arg4, sub_4691f0(&var_40, 0x701e38))

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

if (var_44 u>= 0x10)
    result = j__free(var_58.d)

int32_t var_44_1 = 0xf
int32_t var_48_1 = 0
var_58 = 0

if (var_14 u>= 0x10)
    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
