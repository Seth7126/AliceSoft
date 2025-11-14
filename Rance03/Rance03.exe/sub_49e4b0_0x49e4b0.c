// 函数: sub_49e4b0
// 地址: 0x49e4b0
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
int32_t (__thiscall* var_40)(void* arg1, long double arg2 @ st0, void* arg3, void** arg4) =
    sub_49b6a0
void* var_30 = arg1 + 0x98
void var_2c
sub_49e6a0(&var_2c, &var_40)
int32_t var_4 = 0
int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = sub_49e580(arg1, &var_2c)
int32_t* var_1c

if (var_1c != 0)
    (*(*var_1c + 0x10))(var_1c != &var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return ebx.b
