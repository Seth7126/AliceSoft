// 函数: sub_4ad8a0
// 地址: 0x4ad8a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba420
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_esi
int32_t var_50 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
int32_t* eax_6 = sub_40d1c0(arg2, *arg1, &var_2c, arg2)
int32_t var_4 = 0
char var_44
char* eax_7 = sub_410a80(eax_6.b, eax_6, &var_44, "\r\n")
var_4.b = 1
int32_t* result = sub_403110(arg1[1], eax_7, nullptr, 0xffffffff)
int32_t var_30

if (var_30 u>= 0x10)
    result = j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
int32_t var_18

if (var_18 u>= 0x10)
    result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
