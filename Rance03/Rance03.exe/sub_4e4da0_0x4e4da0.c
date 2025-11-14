// 函数: sub_4e4da0
// 地址: 0x4e4da0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c0558
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_esi
int32_t var_74 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *(arg1 + 0x14) != 0
var_6c = arg2
int32_t var_68 = arg3
int32_t eax_6
eax_6.b = cond:0
int32_t ecx
ecx.b = eax_6.b != 0
int32_t var_78 = ecx
int32_t var_c_1 = 0
int32_t var_4c
sub_4e4ff0(&var_6c, sub_4691f0(&var_4c, 0x6e1d24))
int32_t var_c_2 = 0xffffffff
int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c)

int32_t var_64
char* eax_9 = sub_4e50c0(&var_64, arg1 + 0x2c)
int32_t var_c_3 = 1

if (*(eax_9 + 0x14) u>= 0x10)
    eax_9 = *eax_9

char* var_78_4 = eax_9
var_c_3.b = 2
sub_4e4ff0(&var_6c, sub_4691f0(&var_4c, 0x6e1e38))

if (var_38 u>= 0x10)
    j__free(var_4c)

int32_t var_c_4 = 0xffffffff
int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c.b = 0
int32_t var_50

if (var_50 u>= 0x10)
    j__free(var_64)

int32_t var_78_8 = *(arg1 + 0x48)
int32_t var_c_5 = 3
sub_4e4ff0(&var_6c, sub_4691f0(&var_64, 0x6e1e24))
int32_t var_c_6 = 0xffffffff

if (var_50 u>= 0x10)
    j__free(var_64)

int32_t var_78_11 = *(arg1 + 0x4c)
int32_t var_c_7 = 4
sub_4e4ff0(&var_6c, sub_4691f0(&var_64, 0x6e1e0c))
int32_t var_c_8 = 0xffffffff

if (var_50 u>= 0x10)
    j__free(var_64)

int32_t var_78_14 = *(arg1 + 0x58)
int32_t var_7c_1 = *(arg1 + 0x54)
int32_t var_80_4 = *(arg1 + 0x50)
int32_t var_c_9 = 5
sub_4e4ff0(&var_6c, sub_4691f0(&var_64, 0x6e1df8))
int32_t var_c_10 = 0xffffffff

if (var_50 u>= 0x10)
    j__free(var_64)

void* ecx_6 = *(arg1 + 0x44)
int32_t eax_14

if (ecx_6 == 0)
    eax_14 = 0
else
    eax_14 = sub_4430f0(ecx_6)

int32_t var_78_17 = eax_14
int32_t var_c_11 = 6
int32_t var_34
sub_4e4ff0(&var_6c, sub_4691f0(&var_34, 0x6e1e58))
int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
