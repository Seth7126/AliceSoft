// 函数: sub_44a660
// 地址: 0x44a660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6ece
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b0
int32_t eax_2 = __security_cookie ^ &var_b0
int32_t __saved_edi
int32_t var_bc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_58
sub_402d30(&var_58, arg1)
int32_t var_4 = 0
var_4.b = 1
char var_a8
int32_t var_28
sub_402a20(&var_a8, sub_402bc0(&var_28, &var_58))
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

struct filesystem::CFilePath::VTable* const var_90 = &filesystem::CFilePath::`vftable'
int32_t var_78 = 0xf
int32_t var_7c = 0
char var_8c = 0
var_4.b = 4
sub_604730(&var_90)
sub_403110(&var_8c, &var_58, nullptr, 0xffffffff)
struct filesystem::CFilePath::VTable* const var_74 = &filesystem::CFilePath::`vftable'
int32_t var_5c = 0xf
int32_t var_60 = 0
char var_70 = 0
var_4.b = 5
char* eax_6 = sub_604600(&var_90, &var_28)
var_4.b = 6
sub_604730(&var_74)
sub_403110(&var_70, eax_6, nullptr, 0xffffffff)
var_4.b = 5

if (var_14 u>= 0x10)
    j__free(var_28)

char var_40
sub_604650(&var_74, &var_40)
var_4.b = 7
int32_t* result = sub_40c250(&var_40, 0x6db500)
int32_t var_94

if (result.b == 0)
    void** eax_7 = sub_417ed0(arg2, &var_a8)
    void** var_ac_1
    
    if (eax_7 == *arg2)
        var_ac_1 = *arg2
    else if (sub_40c3a0(&var_a8, &eax_7[4]) != 0)
        var_ac_1 = *arg2
    else
        var_ac_1 = eax_7
    
    char* eax_12 = &var_a8
    
    if (var_ac_1 == *arg2)
        result = sub_44b300(arg2, &var_a8)
        
        if (result != &var_58)
            result = sub_401ff0(result, &var_58, 0, 0xffffffff)
    else
        if (var_94 u>= 0x10)
            eax_12 = var_a8.d
        
        char* var_c0_7 = eax_12
        result = sub_455870(0x6db504)

int32_t var_2c

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30 = 0
var_40 = 0
var_74 = &filesystem::CFilePath::`vftable'

if (var_5c u>= 0x10)
    result = j__free(var_70.d)

int32_t var_5c_1 = 0xf
int32_t var_60_1 = 0
var_70 = 0
var_90 = &filesystem::CFilePath::`vftable'

if (var_78 u>= 0x10)
    result = j__free(var_8c.d)

int32_t var_78_1 = 0xf
int32_t var_7c_1 = 0
var_8c = 0

if (var_94 u>= 0x10)
    result = j__free(var_a8.d)

int32_t var_94_1 = 0xf
int32_t var_98 = 0
var_a8 = 0
int32_t var_44

if (var_44 u>= 0x10)
    result = j__free(var_58)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b0)
return result
