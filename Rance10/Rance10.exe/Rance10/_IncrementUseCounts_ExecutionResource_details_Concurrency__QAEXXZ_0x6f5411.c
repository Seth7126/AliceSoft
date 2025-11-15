// 函数: ?IncrementUseCounts@ExecutionResource@details@Concurrency@@QAEXXZ
// 地址: 0x6f5411
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx = *(arg1 + 0x30)
BOOL result = ecx + 1
*(arg1 + 0x30) = result

if (ecx == 0)
    void* ecx_1 = *(arg1 + 0x14)
    int32_t ebx
    ebx.b = *(arg1 + 0x1c) != ecx
    
    if (*(arg1 + 0x18) != 0)
        void* __saved_edi_2 = arg1
        Concurrency::details::SchedulerProxy::AddThreadSubscription(ecx_1)
    else
        result.b = ebx.b == 0
        Concurrency::details::SchedulerProxy::IncrementFixedCoreCount(ecx_1, *(arg1 + 0x24), 
            *(arg1 + 0x28), result.b)
        
        if (ebx.b == 0)
            HANDLE eax_3 = GetCurrentThread()
            void var_20
            uint32_t* eax_4 =
                Concurrency::details::HardwareAffinity::HardwareAffinity(&var_20, eax_3)
            void* ecx_2
            ecx_2.w = eax_4[1].w
            *(arg1 + 0xc) = ecx_2.w
            *(arg1 + 8) = *eax_4
            int32_t* edx_1 = *(arg1 + 0x24) * 0x34
            int32_t eax_5 = *(*(arg1 + 0x14) + 0x10)
            int16_t ecx_5 = *(edx_1 + eax_5 + 0xc)
            int32_t esi_1 = *(edx_1 + eax_5)
            int32_t var_14 = 0
            int16_t var_10
            int16_t* edi_1 = &var_10
            *edi_1 = 0
            *(edi_1 + 4) = 0
            var_10 = ecx_5
            var_14 = esi_1
            Concurrency::details::HardwareAffinity::ApplyTo(&var_14, eax_3)
            Concurrency::details::SchedulerProxy::IncrementCoreSubscription(*(arg1 + 0x14), arg1)
            sub_6f5f44(*(arg1 + 0x14), arg1)
    
    result = Concurrency::details::ExecutionResource::SetAsCurrent(arg1)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
