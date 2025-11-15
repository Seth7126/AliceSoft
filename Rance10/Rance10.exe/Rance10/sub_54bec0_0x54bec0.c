// 函数: sub_54bec0
// 地址: 0x54bec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a44b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CConstructionProcess::VTable* var_dc
sub_4c3030(&var_dc)
int32_t var_8_1 = 0
int32_t var_c0 = arg2
int32_t var_bc = arg3
int32_t var_b8 = arg4
int32_t var_b4 = arg5
int32_t var_a8 = arg6
int32_t var_a4 = arg7
int32_t var_a0 = arg8
int32_t var_d8 = 0x12
int32_t var_9c = 0xff
sub_4c52a0(arg1 + 0x7c, &var_dc)
sub_4c3130(&var_dc)
char* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
