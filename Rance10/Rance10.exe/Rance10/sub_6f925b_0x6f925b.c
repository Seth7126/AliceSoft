// 函数: sub_6f925b
// 地址: 0x6f925b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0xa8) == 0)
    int32_t eax
    eax.b = 0
    return eax

if (*(arg1 + 0xb1) == 0)
    int32_t* esi_1 = *(arg1 + 0xa8)
    sub_6fec27(esi_1)
    void* ecx_4 = *(arg1 + 0x20)
    *(arg1 + 0xa8) = 0
    Concurrency::details::SchedulerBase::ReleaseRealizedChore(ecx_4, esi_1)
else
    void* eax_1 = *(arg1 + 0xa8)
    int32_t esi = *(eax_1 + 0xc)
    j_sub_4033e0()
    esi(eax_1)
    *(arg1 + 0xa8) = 0

Concurrency::details::ContextBase::ReleaseWorkQueue(arg1 + 4)
int32_t eax_2
eax_2.b = 1
return eax_2
