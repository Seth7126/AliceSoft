// 函数: ?CommitToVersion@SchedulerBase@details@Concurrency@@AAEXK@Z
// 地址: 0x6f0661
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_1 = 0
int32_t* var_c = &i_1
void* ebx = arg1 + 0x144
std::function<void __cdecl (uint8_t)>::~function<void __cdecl (uint8_t)>(ebx)
void* i = *(arg1 + 0x13c)

while (i != 0)
    if (arg2 != 0)
        int32_t eax = *(i + 8)
        
        if (eax u< *(arg1 + 0x154))
            break
        
        if (eax u> arg2)
            break
    
    void* eax_1 = Concurrency::details::SQueue<class Concurrency::details::RealizedChore>::Dequeue(
        arg1 + 0x13c)
    *(eax_1 + 0xc) = 0
    *var_c = eax_1
    i = *(arg1 + 0x13c)
    var_c = eax_1 + 0xc

int32_t result = sub_6eb703(ebx)

while (i_1 != 0)
    int32_t* eax_2 =
        Concurrency::details::SQueue<class Concurrency::details::RealizedChore>::Dequeue(&i_1)
    int32_t esi_2 = *eax_2
    int32_t var_20_1 = eax_2[1]
    j_sub_4033e0()
    result = esi_2(var_20_1)

return result
