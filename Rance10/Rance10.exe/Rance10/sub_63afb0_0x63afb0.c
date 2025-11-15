// 函数: sub_63afb0
// 地址: 0x63afb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745de8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_70 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_7fcbb8
int32_t var_8_1 = 0
struct sys43vm::CGlobalLoader::VTable* var_60
int32_t ebx
ebx.b = sub_604cb0(sub_604800(&var_60, esi + 0x28), arg4, arg3, arg2, arg5, esi + 0x44, esi + 0x148)
sub_6048b0(&var_60)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
