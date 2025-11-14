// 函数: sub_49e3f0
// 地址: 0x49e3f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbc38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t* (__thiscall* var_38)(void* arg1, int32_t arg2, void* arg3)
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_esi
int32_t var_44 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = arg3
int32_t var_30 = arg2
var_38 = sub_49aa70
void* var_2c = arg1 + 0x98
void var_28
sub_49e610(&var_28, &var_38)
int32_t var_4 = 0
int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = sub_49e580(arg1, &var_28)
int32_t* var_18

if (var_18 != 0)
    (*(*var_18 + 0x10))(var_18 != &var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return ebx.b
