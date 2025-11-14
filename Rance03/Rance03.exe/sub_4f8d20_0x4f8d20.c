// 函数: sub_4f8d20
// 地址: 0x4f8d20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (result != 0)
    struct partsengine::CCharSpriteProperty::VTable* var_40
    struct partsengine::CCharSpriteProperty::VTable** eax_3
    int32_t ecx_3
    eax_3, ecx_3 =
        sub_4ff320(&var_40, arg2, arg4, arg5, arg6, arg7, arg8, arg12, arg9, arg10, arg11)
    int32_t var_54_2 = ecx_3
    int32_t var_4 = 0
    result = sub_50d300(sub_510440(*(result + 0x34), arg13), eax_3)

fsbase->NtTib.ExceptionList = ExceptionList
return result
