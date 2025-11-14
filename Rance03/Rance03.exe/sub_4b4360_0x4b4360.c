// 函数: sub_4b4360
// 地址: 0x4b4360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbc68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_esi
int32_t var_50 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_3c = arg4
int32_t var_38 = arg3
int32_t var_34 = arg2
void* (__thiscall* var_40)(void* arg1, long double arg2 @ st0, void* arg3, void** arg4) = sub_4b15c0
void* var_30 = arg1 + 0xac
void var_2c
sub_4b4540(&var_2c, &var_40)
int32_t var_4 = 0
int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = sub_4b4430(arg1, &var_2c)
int32_t* var_1c

if (var_1c != 0)
    (*(*var_1c + 0x10))(var_1c != &var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return ebx.b
