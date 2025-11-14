// 函数: sub_5036b0
// 地址: 0x5036b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1266
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_d8
int32_t eax_2 = __security_cookie ^ &var_d8
int32_t __saved_edi
int32_t var_e4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSpriteEngineWrapper::VTable* const var_d4 =
    &partsengine::CSpriteEngineWrapper::`vftable'
int32_t var_4 = 0
int32_t* eax_5

if (arg2[5] u< 0x10)
    eax_5 = arg2
else
    eax_5 = *arg2

bool result = sub_44a260(eax_5)
int32_t var_4_1 = 0xffffffff

if (result != 0)
    struct partsengine::CConstructionProcess::VTable* var_d0
    sub_47f050(&var_d0)
    int32_t var_4_2 = 1
    sub_47f4b0(&var_d0, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11)
    sub_481250(arg1 + 0x2c, &var_d0)
    sub_47f160(&var_d0)
    result = true

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_d8)
return result
