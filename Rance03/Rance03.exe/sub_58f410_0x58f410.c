// 函数: sub_58f410
// 地址: 0x58f410
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8198
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_5c = 0
int32_t var_28
char* eax_5 = sub_402bc0(&var_28, arg2)
int32_t var_4 = 0
char var_40[0x10]
char* eax_6 = sub_4028a0(&var_40, arg2)
var_4.b = 1
char var_58
char* eax_7 = sub_410a20(eax_6, eax_6, &var_58, eax_5)
var_4.b = 2
sub_410a80(eax_7.b, eax_7, arg1, ".pol")
int32_t var_44

if (var_44 u>= 0x10)
    j__free(var_58.d)

int32_t var_44_1 = 0xf
int32_t var_48 = 0
var_58 = 0
int32_t var_2c

if (var_2c u>= 0x10)
    j__free(var_40[0].d)

int32_t var_2c_1 = 0xf
int32_t var_30 = 0
var_40[0] = 0
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return arg1
