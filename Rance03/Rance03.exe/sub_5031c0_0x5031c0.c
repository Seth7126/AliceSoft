// 函数: sub_5031c0
// 地址: 0x5031c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c11d3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CConstructionProcess::VTable* var_d0
int32_t eax_2 = __security_cookie ^ &var_d0
int32_t __saved_edi
int32_t var_dc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
sub_47f050(&var_d0)
var_4.b = 1
void arg_10
sub_47f790(&var_d0, arg2, arg3, arg4, &arg_10, arg5, arg6)
sub_481250(arg1 + 0x2c, &var_d0)
sub_47f160(&var_d0)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_d0)
return result
