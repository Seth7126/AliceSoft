// 函数: sub_7002e9
// 地址: 0x7002e9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0x123)
    *arg2 = 0x700398
    return 1

struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = nullptr
int32_t (__convention("regparm")* var_38_1)(int32_t arg1, int32_t arg2, int32_t arg3, 
    EXCEPTION_RECORD* arg4, void* arg5, int32_t arg6) = __TranslatorGuardHandler
int32_t var_34_1 = __security_cookie ^ &ExceptionList
int32_t var_30_1 = arg4
int32_t* var_2c_1 = arg2
int32_t var_28_1 = arg5
int32_t var_24_1 = arg6
int32_t var_20_1 = 0
int32_t var_1c_1 = 0
int32_t var_18_1 = 0
int32_t __saved_ebx
int32_t* var_20_2 = &__saved_ebx
int32_t __saved_ebp
int32_t* var_1c_2 = &__saved_ebp
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c_1 = 1
int32_t* var_14 = arg1
int32_t var_10_1 = arg3
int32_t eax_11 = *(sub_702f40() + 8)
eax_11(*arg1, &var_14)
int32_t result = 0

if (var_18_1 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
else
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = ExceptionList
    ExceptionList_1->Next = fsbase->NtTib.ExceptionList->Next
    fsbase->NtTib.ExceptionList = ExceptionList_1

return result
