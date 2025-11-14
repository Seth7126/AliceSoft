// 函数: sub_4f3b70
// 地址: 0x4f3b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0098
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_4a87c0(data_75d4fc + 0x174, arg3)

if (result != 0)
    int32_t var_4 = 0
    struct partsengine::CCharSpriteProperty::VTable* var_40
    result = sub_4997d0(result, 
        sub_4ff320(&var_40, arg2, arg4, arg5, arg6, arg7, arg8, arg12, arg9, arg10, arg11))

fsbase->NtTib.ExceptionList = ExceptionList
return result
