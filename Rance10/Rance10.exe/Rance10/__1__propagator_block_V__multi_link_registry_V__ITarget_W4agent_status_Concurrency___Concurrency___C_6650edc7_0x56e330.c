// 函数: ??1?$propagator_block@V?$multi_link_registry@V?$ITarget@W4agent_status@Concurrency@@@Concurrency@@@Concurrency@@V?$multi_link_registry@V?$ISource@W4agent_status@Concurrency@@@Concurrency@@@2@V?$ordered_message_processor@W4agent_status@Concurrency@@@2@@Concurrency@@UAE@XZ
// 地址: 0x56e330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a526
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg1

while (esi != arg2)
    int32_t var_8_1 = 0
    result = `eh vector vbase constructor iterator'(esi, 0x10, 3, sub_56dbf0)
    esi += 0x3c
    int32_t var_8_2 = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
return result
