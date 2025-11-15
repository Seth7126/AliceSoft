// 函数: sub_526650
// 地址: 0x526650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73316e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD*** i = arg1[3]

for (int32_t edi = arg1[4]; i != edi; i = &i[1])
    result = *i
    
    if (result != 0)
        result_1 = result
        
        if (arg2 == 0)
            sub_6d090a()
            noreturn
        
        result = (*(*arg2 + 8))(&result_1)

int32_t var_8_2 = 1
void arg_4

if (arg2 != 0)
    result = (*(*arg2 + 0x10))(arg2 != &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
