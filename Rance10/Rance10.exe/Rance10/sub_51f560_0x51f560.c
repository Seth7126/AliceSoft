// 函数: sub_51f560
// 地址: 0x51f560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_739148
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct textsurface::CTextSurfaceProperty::VTable* var_4c
sub_6437f0(&var_4c)
int32_t var_8_1 = 0
sub_520410(arg1, &var_4c)
int32_t result = 0
int32_t var_18 = 0
sub_51f150(arg1, &var_4c, arg2, &result, &var_18, arg3)
fsbase->NtTib.ExceptionList = ExceptionList
return result
