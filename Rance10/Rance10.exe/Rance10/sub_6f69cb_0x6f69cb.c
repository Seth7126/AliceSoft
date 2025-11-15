// 函数: sub_6f69cb
// 地址: 0x6f69cb
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
struct Concurrency::IExecutionResource::Concurrency::details::ExecutionResource::VTable** eax_1 =
    Concurrency::details::platform::__TlsGetValue(*(*(arg1 + 0xc) + 0x70))
struct Concurrency::IExecutionResource::Concurrency::details::ExecutionResource::VTable** edi =
    eax_1

if (edi != 0)
    void* eax_2 = eax_1 & 3
    
    if (eax_2 == 0)
    label_6f6a0b:
        Concurrency::details::ExecutionResource::IncrementUseCounts(edi)
    label_6f6a60:
        
        if (edi != 0)
            return Concurrency::details::SchedulerProxy::GetResourceForNewSubscription(arg1, edi)
    else
        if (eax_2 != 1)
            void* edi_3 = edi & 0xfffffffd
            int32_t esi_1 = *(*(edi_3 + 4) + 0x10)
            j_sub_4033e0()
            esi_1()
            void* edi_4 = *(edi_3 + 0x20)
            void* eax_6 = *(edi_4 + 0x2c)
            edi = edi_4 + 0x10
            
            if (eax_6 == 0 || *(eax_6 + 0x44) == 0)
                Concurrency::details::ExecutionResource::IncrementUseCounts(edi)
            else
                edi = nullptr
            
            int32_t esi_2 = *(*(edi_3 + 4) + 0x14)
            j_sub_4033e0()
            esi_2()
            goto label_6f6a60
        
        edi = *((edi & 0xfffffffe) + 0x10) + 8
        void* eax_3 = edi[7]
        
        if (eax_3 == 0 || *(eax_3 + 0x44) == 0)
            goto label_6f6a0b

return nullptr
