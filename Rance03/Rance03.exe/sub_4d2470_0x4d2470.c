// 函数: sub_4d2470
// 地址: 0x4d2470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf41b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CConstructionProcess::VTable* var_d4
int32_t eax_2 = __security_cookie ^ &var_d4
int32_t __saved_edi
int32_t var_e0 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
sub_485160(arg3, sub_503d30(sub_510540(*(arg1 + 0x34), arg4), &var_d4, arg2))
sub_47f160(&var_d4)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_d4)
return result
