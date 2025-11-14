// 函数: sub_4fada0
// 地址: 0x4fada0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0b60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_84 = arg10
void* result = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (result != 0)
    void* var_2c
    sub_401f60(&var_2c, (**arg5)(eax_4))
    int32_t var_4 = 0
    var_4.b = 1
    struct partsengine::CCharSpriteProperty::VTable* var_60
    int32_t ebx
    ebx.b = sub_4d2310(result, arg2, arg4, &var_2c, 
        sub_4ff320(&var_60, arg6, arg7, arg8, arg9, var_84, arg11, arg15, arg12, arg13, arg14), 
        arg16, arg17, arg18).b
    var_60 = &partsengine::CCharSpriteProperty::`vftable'
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_84)
return result
