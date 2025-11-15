// 函数: ?RemoveVirtualProcessors@SchedulerBase@details@Concurrency@@IAEXPAPAUIVirtualProcessorRoot@3@I@Z
// 地址: 0x6f25e8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t result = arg2
int32_t* esp_1

if (result == 0)
    char const* const __saved_ebx_2 = "ppVirtualProcessorRoots"
    int32_t __saved_ebx
    esp_1 = &__saved_ebx
else
    int32_t __saved_ebx_3
    int32_t __saved_ebx_1 = __saved_ebx_3
    int32_t ebx = arg3
    int32_t __saved_edi_2
    int32_t __saved_edi_1 = __saved_edi_2
    
    if (ebx u>= 1)
        int32_t edi = 0
        int32_t var_10 = 0
        
        if (ebx != 0)
            int32_t __saved_esi_3
            int32_t __saved_esi_2 = __saved_esi_3
            
            do
                int32_t* eax = *(result + (edi << 2))
                int32_t esi = **eax
                j_sub_4033e0()
                int32_t eax_2 = esi()
                void* i = Concurrency::details::SchedulingNode::FindMatchingVirtualProcessor(
                    *(*(arg1 + 0x20) + (eax_2 << 2)), eax)
                
                if (i == 0)
                    do
                        int32_t var_18_1 = 0
                        int32_t (* var_14_1)() = sub_6eb74c
                        char j
                        
                        do
                            void var_20
                            j = Concurrency::details::_SpinWait<1>::_SpinOnce(&var_20)
                        while (j != 0)
                        SwitchToThread()
                        int32_t esi_1 = **eax
                        j_sub_4033e0()
                        int32_t eax_4 = esi_1()
                        i = Concurrency::details::SchedulingNode::FindMatchingVirtualProcessor(
                            *(*(arg1 + 0x20) + (eax_4 << 2)), eax)
                    while (i == 0)
                    
                    edi = var_10
                    ebx = arg3
                
                if (*(i + 0xac) != 0)
                    i = Concurrency::details::InternalContextBase::GetAndResetOversubscribedVProc(
                        *(i + 0xb0), i)
                
                if (i != 0)
                    sub_6f7dde(i)
                
                result = arg2
                edi += 1
                var_10 = edi
            while (edi u< ebx)
        
        return result
    
    char const* const __saved_esi_1 = "count"
    int32_t __saved_esi
    esp_1 = &__saved_esi

void var_1c
std::length_error::length_error(&var_1c)
*esp_1 = &data_7db524
*(esp_1 - 4) = &var_1c
sub_70021b()
noreturn
