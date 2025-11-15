// 函数: sub_5be0e0
// 地址: 0x5be0e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73fb18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != arg2)
    int32_t var_24 = 0
    int32_t var_20_1 = 0
    int32_t edi_3 = (arg2 - arg1) s>> 2
    int32_t var_1c_1 = 0
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(edi_3 + 1)
    int32_t var_18_1 = (eax_4 - edx_1) s>> 1
    int32_t* var_14_1 = &var_24
    int32_t var_8_1 = 0
    void arg_c
    sub_5bed80(&var_24, arg2, arg1, edi_3, &var_24, &arg_c)
    result = sub_5bed30(&var_24)

fsbase->NtTib.ExceptionList = ExceptionList
return result
