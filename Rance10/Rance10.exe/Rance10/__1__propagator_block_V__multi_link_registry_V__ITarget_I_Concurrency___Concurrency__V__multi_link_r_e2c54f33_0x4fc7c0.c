// 函数: ??1?$propagator_block@V?$multi_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$multi_link_registry@V?$ISource@I@Concurrency@@@2@V?$ordered_message_processor@I@2@@Concurrency@@UAE@XZ
// 地址: 0x4fc7c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736aee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* arg_4
int32_t* edi = arg_4
int32_t* i = *edi

for (int32_t edi_1 = edi[1]; i != edi_1; i = &i[1])
    arg_4 = *i
    
    if (arg1 == 0)
        sub_6d090a()
        noreturn
    
    result = (*(*arg1 + 8))(&arg_4)

int32_t var_8_2 = 1
void arg_8

if (arg1 != 0)
    result = (*(*arg1 + 0x10))(arg1 != &arg_8)
fsbase->NtTib.ExceptionList = ExceptionList
return result
