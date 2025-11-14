// 函数: sub_43c2b0
// 地址: 0x43c2b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6449
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_esi
int32_t var_54 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
char* var_44 = arg1
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
int32_t var_4 = 0
int32_t var_48_1 = 1
int32_t var_4_1 = 1
char var_40
int32_t var_28
sub_402d30(&var_28, sub_402a20(&var_40, arg2))
var_4_1.b = 3
int32_t var_2c

if (var_2c u>= 0x10)
    j__free(var_40.d)

char* var_58_2 = arg1
int32_t var_2c_1 = 0xf
int32_t* var_5c = &var_28
int32_t var_30 = 0
var_40 = 0
sub_43c3a0()
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return arg1
