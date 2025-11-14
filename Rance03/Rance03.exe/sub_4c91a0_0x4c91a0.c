// 函数: sub_4c91a0
// 地址: 0x4c91a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc4b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_esi
int32_t var_48 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = arg2
uint32_t* (__thiscall* var_38)(void* arg1, void* arg2) = sub_4c2480
void* var_30 = arg1 + 0x100
void var_2c
sub_4c9460(&var_2c, &var_38)
int32_t var_4 = 0
int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = sub_4c9330(arg1, &var_2c)
int32_t* var_1c

if (var_1c != 0)
    (*(*var_1c + 0x10))(var_1c != &var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return ebx.b
