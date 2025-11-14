// 函数: sub_561120
// 地址: 0x561120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, &(*U"=====,=,=,=,=,=,,==,")[0x11], 1)
int32_t var_4 = 0
char* eax_5 = &var_28

if (var_14 u>= 0x10)
    eax_5 = var_28.d

char result

if (sub_59d180(arg2, eax_5) != 0)
    result = 1
else
    char* eax_6 = &var_28
    
    if (var_14 u>= 0x10)
        eax_6 = var_28.d
    
    char* var_40_1 = eax_6
    int32_t var_44_1 = 0x6e48cc
    void* var_48_1 = arg2
    sub_561610(arg1)
    result = 0

int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = result == 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_1 = 0xf
int32_t var_18_1 = 0
var_28 = 0

if (ebx.b == 0)
    result = sub_59d240(&var_2c)

if (ebx.b != 0 || result == 0)
    result = 0
else
    result = 1
    *(arg3 + 0xb0) = var_2c

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
