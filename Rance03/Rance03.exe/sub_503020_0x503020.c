// 函数: sub_503020
// 地址: 0x503020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c118b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_e4
int32_t eax_2 = __security_cookie ^ &var_e4
int32_t __saved_esi
int32_t var_ec = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CConstructionProcess::VTable* var_e0
sub_47f050(&var_e0)
int32_t var_c_1 = 0
int32_t var_c4 = arg2
int32_t var_c0 = arg3
int32_t var_b4 = arg4
int32_t var_b0 = arg5
int32_t var_ac = arg6
int32_t var_a8 = arg7
int32_t var_a4 = arg8
int32_t var_dc = 3
sub_481250(arg1 + 0x2c, &var_e0)
sub_47f160(&var_e0)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_e4)
return result
