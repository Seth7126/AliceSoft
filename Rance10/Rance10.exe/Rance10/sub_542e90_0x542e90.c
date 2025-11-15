// 函数: sub_542e90
// 地址: 0x542e90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738a28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0 && arg3 != 0 && arg4 != 0 && arg5 != 0 && arg6 != 0 && arg7 != 0 && arg8 != 0
        && arg9 != 0 && arg10 != 0 && arg11 != 0)
    int32_t ecx
    int32_t var_58_1 = ecx
    result = sub_4f6880()
    
    if (result != 0)
        struct textsurface::CTextSurfaceProperty::VTable* var_44
        sub_6437f0(&var_44)
        int32_t var_8_1 = 0
        sub_517c00(result, &var_44, arg12)
        int32_t var_40
        *arg2 = var_40
        int32_t var_3c
        *arg3 = var_3c
        int32_t var_38
        *arg4 = var_38
        int32_t var_34
        *arg5 = var_34
        int32_t var_30
        *arg6 = var_30
        int32_t var_28
        *arg7 = var_28
        int32_t var_20
        *arg8 = var_20
        int32_t var_1c
        *arg9 = var_1c
        int32_t var_18
        *arg10 = var_18
        result = arg11
        struct _EXCEPTION_REGISTRATION_RECORD* var_24
        *result = var_24

fsbase->NtTib.ExceptionList = ExceptionList
return result
