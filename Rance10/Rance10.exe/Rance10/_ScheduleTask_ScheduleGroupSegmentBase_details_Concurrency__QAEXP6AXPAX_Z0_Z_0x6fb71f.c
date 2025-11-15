// 函数: ?ScheduleTask@ScheduleGroupSegmentBase@details@Concurrency@@QAEXP6AXPAX@Z0@Z
// 地址: 0x6fb71f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    void var_14
    std::length_error::length_error(&var_14, "proc")
    sub_70021b(&var_14, &data_7db524)
    noreturn

int32_t* edi = *(arg1[0x40] + 4)
void* eax_1 = Concurrency::details::SchedulerBase::GetRealizedChore(edi, arg2, arg3)
void* ecx_1 = arg1[0x40]

if ((*(ecx_1 + 0x30) & 4) == 0)
    *(ecx_1 + 0x14) += 1

Concurrency::details::SafeSQueue<class Concurrency::details::RealizedChore,class Concurrency::details::_HyperNonReentrantLock>::Enqueue(
    &arg1[0xa], eax_1)
void* eax_2 = sub_6f09b1()
int32_t eax_3

if (eax_2 != 0)
    eax_3 = sub_4866a0(eax_2)

if (eax_2 == 0 || eax_3 != edi)
    int32_t* esi_1 = Concurrency::details::platform::__TlsGetValue(edi[6])
    
    if (esi_1 == 0)
        esi_1 = sub_6e810c(0x1c)
        int32_t* var_8_1 = esi_1
        
        if (esi_1 == 0)
            esi_1 = nullptr
        else
            esi_1[2] = 0
            esi_1[3] = 0
            esi_1[4] = 0
            esi_1[5] = 0
            esi_1[6] = 1
        
        sub_6faa1a(&edi[0x32], esi_1)
        sub_6eb375(edi[6], esi_1)
    
    esi_1[2] += 1
else
    void* eax_4 = *(eax_2 + 0x9c)
    
    if (*(eax_2 + 0x4c) == 0)
        *(eax_4 + 0x68) += 1
    else
        *(eax_4 + 8) += 1

void* edx = &arg1[3]

if ((*edx & 0xfffffff) != 0)
    int32_t esi_2 = *(*arg1 + 4)
    j_sub_4033e0()
    esi_2()
    edx = &arg1[3]

int32_t result = edi[0x6e]

if (edi[0x6d] - result s<= 0)
    return result

void var_30
Concurrency::location::_Assign(&var_30, edx)
int32_t esi_3 = *(*edi + 0x38)
j_sub_4033e0()
return esi_3(arg1)
