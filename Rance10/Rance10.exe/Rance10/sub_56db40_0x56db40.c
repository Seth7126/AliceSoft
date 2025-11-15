// 函数: sub_56db40
// 地址: 0x56db40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
void* ecx = arg1[6]

if (ecx != 0)
    sub_403160(ecx, (arg1[8] - ecx) s>> 2, 4)
    arg1[6] = 0
    arg1[7] = 0
    arg1[8] = 0

int32_t* eax_4 = arg1[3]
int32_t* var_10 = eax_4
sub_4602e0(&arg1[3], &var_4, *eax_4)
sub_403160(arg1[3], 1, 0x18)
int32_t result = *arg1

if (result != 0)
    Concurrency::propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<enum Concurrency::agent_status> >,class Concurrency::multi_link_registry<class Concurrency::ISource<enum Concurrency::agent_status> >,class Concurrency::ordered_message_processor<enum Concurrency::agent_status> >::~propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<enum Concurrency::agent_status> >,class Concurrency::multi_link_registry<class Concurrency::ISource<enum Concurrency::agent_status> >,class Concurrency::ordered_message_processor<enum Concurrency::agent_status> >(
        result, arg1[1])
    void* esi_1 = *arg1
    result = sub_403160(esi_1, (arg1[2] - esi_1) s/ 0x3c, 0x3c)
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0

return result
