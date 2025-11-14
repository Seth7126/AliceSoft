// 函数: sub_503440
// 地址: 0x503440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c121b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_d8
int32_t eax_2 = __security_cookie ^ &var_d8
int32_t __saved_esi
int32_t var_e0 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CConstructionProcess::VTable* var_d4
sub_47f050(&var_d4)
int32_t var_4 = 0
int32_t var_b8 = arg2
int32_t var_b4 = arg3
int32_t var_a8 = arg4
int32_t var_a4 = arg5
int32_t var_94 = arg6
int32_t var_d0 = 5
sub_481250(arg1 + 0x2c, &var_d4)
sub_47f160(&var_d4)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_d8)
return result
