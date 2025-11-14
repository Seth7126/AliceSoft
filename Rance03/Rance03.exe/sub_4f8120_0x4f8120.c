// 函数: sub_4f8120
// 地址: 0x4f8120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0aa8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0 && arg3 != 0 && arg4 != 0 && arg5 != 0 && arg6 != 0 && arg7 != 0 && arg8 != 0
        && arg9 != 0 && arg10 != 0 && arg11 != 0)
    int32_t ecx
    int32_t var_58_1 = ecx
    result = sub_4a9e50()
    
    if (result != 0)
        struct partsengine::CCharSpriteProperty::VTable* var_40
        sub_4ff2c0(&var_40)
        int32_t var_4 = 0
        sub_4d1e00(result, &var_40, arg12)
        int32_t var_3c
        *arg2 = var_3c
        int32_t var_38
        *arg3 = var_38
        int32_t var_34
        *arg4 = var_34
        int32_t var_30
        *arg5 = var_30
        int32_t var_2c
        *arg6 = var_2c
        int32_t var_24
        *arg7 = var_24
        int32_t var_1c
        *arg8 = var_1c
        int32_t var_18
        *arg9 = var_18
        int32_t var_14
        *arg10 = var_14
        result = arg11
        struct _EXCEPTION_REGISTRATION_RECORD* var_20
        *result = var_20

fsbase->NtTib.ExceptionList = ExceptionList
return result
