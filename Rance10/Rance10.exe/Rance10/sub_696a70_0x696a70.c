// 函数: sub_696a70
// 地址: 0x696a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
int32_t var_1c = 0
void var_24
__ExceptionPtrCreate(&var_24)
int32_t var_8_1 = 0
int32_t* edx
__ExceptionPtrCopyException(&var_24, edx, arg1, &var_24, edx, 0x7de9d4)
__ExceptionPtrCopy(arg1, &var_24)
int32_t var_8_2 = 0xffffffff
__ExceptionPtrDestroy(&var_24)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
