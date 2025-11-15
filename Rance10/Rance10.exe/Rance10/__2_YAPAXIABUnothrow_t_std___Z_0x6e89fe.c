// 函数: ??2@YAPAXIABUnothrow_t@std@@@Z
// 地址: 0x6e89fe
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74a3fa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
int32_t var_8_1 = 0
int32_t result = sub_6e810c(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
