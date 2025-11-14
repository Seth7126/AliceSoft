// 函数: sub_4b4850
// 地址: 0x4b4850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bd768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIMessageVariable::VTable* const var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t var_40 = __security_cookie ^ &var_3c
fsbase->NtTib.ExceptionList = &ExceptionList
var_3c = &partsengine::CGUIMessageVariable::`vftable'
int32_t var_38 = 1
int32_t var_34 = arg2
int32_t var_30 = 0
char var_2c = 0
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4b4c20(arg1 + 0x10, &var_3c)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
