// 函数: sub_56f290
// 地址: 0x56f290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c6c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t esi = arg2
void* eax_3
int32_t ecx
eax_3, ecx = sub_409080(esi)
int32_t var_8_1 = 0
int32_t var_34_1 = ecx
int32_t var_38 = 0.d
void* var_1c = eax_3
int32_t var_3c = ecx
sub_5703e0(eax_3, arg1[1], *arg1, eax_3)
int32_t ecx_6 = (arg1[1] - *arg1) s/ 0x3c
void* edx_4 = *arg1
char var_18
var_18.d = ecx_6

if (edx_4 != 0)
    Concurrency::propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<enum Concurrency::agent_status> >,class Concurrency::multi_link_registry<class Concurrency::ISource<enum Concurrency::agent_status> >,class Concurrency::ordered_message_processor<enum Concurrency::agent_status> >::~propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<enum Concurrency::agent_status> >,class Concurrency::multi_link_registry<class Concurrency::ISource<enum Concurrency::agent_status> >,class Concurrency::ordered_message_processor<enum Concurrency::agent_status> >(
        edx_4, arg1[1])
    void* esi_1 = *arg1
    sub_403160(esi_1, (arg1[2] - esi_1) s/ 0x3c, 0x3c)
    esi = arg2
    ecx_6 = var_18.d

arg1[2] = eax_3 + esi * 0x3c
void* result = eax_3 + ecx_6 * 0x3c
arg1[1] = result
*arg1 = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return result
