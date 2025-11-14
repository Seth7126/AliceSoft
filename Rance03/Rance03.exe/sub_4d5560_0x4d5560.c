// 函数: sub_4d5560
// 地址: 0x4d5560
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbc38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_esi
int32_t var_44 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = arg2
void* var_2c = arg1 + 0x34
int32_t (__fastcall* var_34)(void* arg1) = sub_4d40d0
void var_28
sub_4d5830(&var_28, &var_34)
int32_t var_4 = 0
int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = sub_4d57c0(arg1, &var_28, arg3)
int32_t* var_18

if (var_18 != 0)
    (*(*var_18 + 0x10))(var_18 != &var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return ebx.b
