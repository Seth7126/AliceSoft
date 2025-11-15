// 函数: ?ReserveAtHigherUseCounts@ResourceManager@details@Concurrency@@AAEIPAVSchedulerProxy@23@I@Z
// 地址: 0x6eed06
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx
void* var_8 = ecx
int32_t edi = 0
void* var_8_1 = ecx
int32_t result = 0

if (arg2 u> 0)
    do
        edi += 1
        int32_t eax_3 = sub_6eed3c(ecx, arg1, arg2 - result, edi)
        ecx = var_8_1
        result += eax_3
    while (result u< arg2)

return result
