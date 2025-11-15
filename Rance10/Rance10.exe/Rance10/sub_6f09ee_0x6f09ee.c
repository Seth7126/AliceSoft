// 函数: sub_6f09ee
// 地址: 0x6f09ee
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t esi_1 = *(*arg1[0x6b] + 4)
j_sub_4033e0()
esi_1()
CloseHandle(arg1[0x5f])
int32_t* i_6 = arg1[0x2d]
arg1[0x2d] = 0
int32_t* i_4 = i_6

if (i_4 != 0)
    int32_t* i
    
    do
        i = *i_4
        sub_6ef6dc(i_4[1])
        int32_t var_20_1 = 8
        operator new(i_4)
        i_4 = i
    while (i != 0)

SLIST_ENTRY* eax_3 = InterlockedFlushSList(&arg1[0x7c])
int32_t edx_1 = neg.d(eax_3)
int32_t edx_4
int32_t esi_2

for (void* i_1 = sbb.d(edx_1, edx_1, eax_3 != 0) & &eax_3[-1]; i_1 != 0; 
        i_1 = sbb.d(edx_4, edx_4, esi_2 != 0) & (esi_2 - 4))
    esi_2 = *(i_1 + 4)
    sub_6ef6ba(i_1)
    edx_4 = neg.d(esi_2)

SLIST_ENTRY* eax_6 = InterlockedFlushSList(&arg1[0x7e])
int32_t ecx_5 = neg.d(eax_6)
void* i_5 = sbb.d(ecx_5, ecx_5, eax_6 != 0) & &eax_6[-3]
void* i_7 = i_5

if (i_5 != 0)
    void* i_3 = i_5
    void* i_2
    
    do
        int32_t edi_2 = *(i_3 + 0xc)
        int32_t edi_3 = neg.d(edi_2)
        i_2 = sbb.d(edi_3, edi_3, edi_2 != 0) & (edi_2 - 0xc)
        int32_t esi_3 = **i_3
        j_sub_4033e0()
        esi_3(1)
        i_3 = i_2
    while (i_2 != 0)

Concurrency::details::SchedulerBase::TraceSchedulerEvent(2, 4, arg1[0x5d])

while (arg1[0x2e] != 0)
    int32_t* eax_10 = Concurrency::details::SafeRWList<class Concurrency::details::SchedulerBase::WaitNode,class Concurrency::details::CollectionTypes::NoCount,class Concurrency::details::_ReaderWriterLock>::RemoveHead(
        &arg1[0x2e])
    SetEvent(eax_10[2])
    CloseHandle(eax_10[2])
    operator new(eax_10)

int32_t esi_5 = **arg1
j_sub_4033e0()
return esi_5(1)
