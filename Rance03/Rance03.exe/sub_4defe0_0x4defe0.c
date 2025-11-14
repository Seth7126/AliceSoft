// 函数: sub_4defe0
// 地址: 0x4defe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0098
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t var_50 = __security_cookie ^ &var_4c
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CCharSpriteProperty::VTable* var_40
sub_4ff2c0(&var_40)
int32_t var_4 = 0
int32_t var_54_1 = sub_4e0140(arg1, &var_40)
int32_t* result = nullptr
int32_t var_44 = 0
sub_4dec30(&var_40, arg2, &result, &var_44)
fsbase->NtTib.ExceptionList = ExceptionList
return result
