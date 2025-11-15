// 函数: sub_47ce40
// 地址: 0x47ce40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e5b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
char* i = arg2
int32_t var_8_1 = 0

for (; i != arg3; i = &i[1])
    result = sub_405500(arg1, 1, *i)

fsbase->NtTib.ExceptionList = ExceptionList
return result
