// 函数: sub_58e280
// 地址: 0x58e280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28
char* eax_6 = sub_58e330(arg3, arg2, &var_28, arg3)
int32_t var_4 = 0
int32_t ebx

if (sub_590700(arg1, eax_6) == 0)
    ebx.b = sub_525610(arg1 + 0x30, eax_6) != 0
else
    ebx.b = 1

int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return ebx.b
