// 函数: sub_43f030
// 地址: 0x43f030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6038
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_402110(&var_2c, 0x6db3e8, 3)
int32_t var_4 = 0
char* edi = &var_2c
char* edx = &var_2c
int32_t var_30
int32_t var_4c = var_30

if (var_18 u>= 0x10)
    edi = var_2c.d

if (var_18 u>= 0x10)
    edx = var_2c.d

sub_468ff0(arg1 + 4, *(arg1 + 8), edx, var_1c + edi)
char var_31 = 0
sub_414b60(arg1 + 4, &var_31)
int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t result = sub_468ec0(arg1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
