// 函数: sub_4f7bc0
// 地址: 0x4f7bc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (eax_3 == 0)
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t var_4 = 0
struct partsengine::CCharSpriteProperty::VTable* var_40
int32_t eax_5 = sub_4d1cd0(eax_3, 
    sub_4ff320(&var_40, arg2, arg4, arg5, arg6, arg7, arg8, arg12, arg9, arg10, arg11), arg13)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
