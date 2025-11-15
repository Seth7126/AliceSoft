// 函数: sub_576720
// 地址: 0x576720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ca28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 != arg2)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    int32_t var_20_1 = 0
    int32_t esi_3 = (arg2 - arg3) s>> 2
    int32_t var_1c_1 = 0
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(esi_3 + 1)
    int32_t var_18_1 = (eax_4 - edx) s>> 1
    int32_t* var_14_1 = &result_1
    int32_t var_8_1 = 0
    sub_576880(&result_1, arg2, arg3, esi_3, &result_1, arg4)
    result = result_1
    
    if (result != 0)
        result = _free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
