// 函数: sub_55b010
// 地址: 0x55b010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_402110(&var_2c, &(*U"={==")[3], 1)
int32_t var_4 = 0
char* eax_5 = &var_2c

if (var_18 u>= 0x10)
    eax_5 = var_2c.d

bool result

if (sub_59d180(arg2, eax_5) != 0)
    result = true
else
    char* eax_6 = &var_2c
    
    if (var_18 u>= 0x10)
        eax_6 = var_2c.d
    
    char* var_44_1 = eax_6
    int32_t var_48_1 = 0x6e48cc
    void* var_4c_1 = arg2
    sub_561610(arg1)
    result = false

int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = result == 0

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (ebx.b == 0)
    result = sub_59d350(arg1 + 0x24) != 0
else
    result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
