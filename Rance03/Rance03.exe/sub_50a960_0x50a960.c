// 函数: sub_50a960
// 地址: 0x50a960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c17b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_esi
int32_t var_74 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_6c = arg2
int32_t var_68 = arg3
int32_t var_64
char* eax_8 = sub_50ac30(&var_64, arg1 + 0x14)
int32_t var_c_1 = 0

if (*(eax_8 + 0x14) u>= 0x10)
    eax_8 = *eax_8

char* var_78_1 = eax_8
var_c_1.b = 1
char var_4c
sub_50ab60(&var_6c, sub_4691f0(&var_4c, 0x6e2484))
int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t var_c_2 = 0xffffffff
int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c = 0
int32_t var_50

if (var_50 u>= 0x10)
    j__free(var_64)

int32_t var_78_5 = *(arg1 + 0x2c)
int32_t var_c_3 = 2
sub_50ab60(&var_6c, sub_4691f0(&var_64, 0x6e2494))
int32_t var_c_4 = 0xffffffff

if (var_50 u>= 0x10)
    j__free(var_64)

int32_t var_78_8 = *(arg1 + 0x30)
int32_t var_c_5 = 3
sub_50ab60(&var_6c, sub_4691f0(&var_64, 0x6e24a4))
int32_t var_c_6 = 0xffffffff

if (var_50 u>= 0x10)
    j__free(var_64)

int32_t var_78_11 = *(arg1 + 0x34)
int32_t var_c_7 = 4
sub_50ab60(&var_6c, sub_4691f0(&var_64, 0x6e24b0))
int32_t var_c_8 = 0xffffffff

if (var_50 u>= 0x10)
    j__free(var_64)

int32_t var_78_14 = *(arg1 + 0x54)
int32_t var_7c_1 = *(arg1 + 0x50)
int32_t var_80_4 = *(arg1 + 0x4c)
int32_t var_84 = *(arg1 + 0x48)
int32_t var_c_9 = 5
int32_t var_34
sub_50ab60(&var_6c, sub_4691f0(&var_34, 0x6e2450))
int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
