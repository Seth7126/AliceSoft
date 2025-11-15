// 函数: sub_5183d0
// 地址: 0x5183d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738afb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_f0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = *(arg1 + 0x44)
sub_555e00(esi, 0x18, arg4)
int32_t var_8_1 = 0
struct partsengine::CConstructionProcess::VTable* var_dc
sub_518470(arg3, sub_54c290(*(esi + (arg4 << 2) + 0x7c), &var_dc, arg2))
sub_4c3130(&var_dc)
char* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
