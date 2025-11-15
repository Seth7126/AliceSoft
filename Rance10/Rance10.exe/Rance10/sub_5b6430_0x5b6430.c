// 函数: sub_5b6430
// 地址: 0x5b6430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ca28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != arg2)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0
    int32_t edi_3 = (arg2 - arg1) s/ 0xc
    int32_t eax_5
    int32_t edx_5
    edx_5:eax_5 = sx.q(edi_3 + 1)
    int32_t var_18_1 = (eax_5 - edx_5) s>> 1
    struct _EXCEPTION_REGISTRATION_RECORD*** var_14_1 = &result_1
    int32_t var_8_1 = 0
    void arg_c
    sub_5b6510(&result_1, arg2, arg1, edi_3, &result_1, &arg_c)
    result = result_1
    
    if (result != 0)
        result = _free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
