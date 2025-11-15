// 函数: sub_4c2b20
// 地址: 0x4c2b20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73316e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* i = *(arg1 + 0x38)

for (int32_t edi = *(arg1 + 0x3c); i != edi; i = &i[1])
    var_14 = *i
    
    if (arg2 == 0)
        sub_6d090a()
        noreturn
    
    result = (*(*arg2 + 8))(&var_14)

int32_t var_8_2 = 1
void arg_4

if (arg2 != 0)
    result = (*(*arg2 + 0x10))(arg2 != &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
