// 函数: sub_4925b0
// 地址: 0x4925b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bb468
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_6c = arg2
int32_t var_68 = arg3
int32_t var_34
char* eax_6 = sub_4927e0(&var_34, arg1 + 8)
int32_t var_c_1 = 0

if (*(eax_6 + 0x14) u>= 0x10)
    eax_6 = *eax_6

char* var_80_1 = eax_6
var_c_1.b = 1
char var_64
sub_492710(&var_6c, sub_4691f0(&var_64, 0x6df144))
int32_t var_50

if (var_50 u>= 0x10)
    j__free(var_64.d)

int32_t var_c_2 = 0xffffffff
int32_t var_50_1 = 0xf
int32_t var_54 = 0
var_64 = 0
int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

int32_t var_80_5 = *(arg1 + 0x34)
int32_t var_84_1 = *(arg1 + 0x30)
int32_t var_88_1 = *(arg1 + 0x2c)
int32_t var_8c = *(arg1 + 0x28)
int32_t var_c_3 = 2
char var_4c
sub_492710(&var_6c, sub_4691f0(&var_4c, 0x6df5dc))
int32_t var_c_4 = 0xffffffff
int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c = 0
bool result = sub_494720(arg1 + 0x38, arg2, arg3) != 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
