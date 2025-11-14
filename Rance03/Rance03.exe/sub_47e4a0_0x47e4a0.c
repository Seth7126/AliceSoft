// 函数: sub_47e4a0
// 地址: 0x47e4a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba268
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t eax_4 = __security_cookie ^ &var_4c
fsbase->NtTib.ExceptionList = &ExceptionList
struct IString::common::CStringWrapper::VTable* const var_48 =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_401ff0(&var_44, arg1, 0, 0xffffffff)
int32_t var_4 = 0
int32_t var_2c
sub_401f60(&var_2c, var_48->data(eax_4))
BOOL result = sub_696f50(data_75d4d0, &var_2c)
int32_t var_18

if (var_18 u>= 0x10)
    result = j__free(var_2c)

struct IString::common::CStringWrapper::VTable* const var_48_1 =
    &common::CStringWrapper::`vftable'{for `IString'}

if (var_30 u>= 0x10)
    result = j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
