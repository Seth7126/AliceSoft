// 函数: ?CreateWorkQueue@ContextBase@details@Concurrency@@QAEXXZ
// 地址: 0x6f38e2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74aa93
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_2 = &data_6f38ee
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax = Concurrency::details::ScheduleGroupSegmentBase::GetDetachedWorkQueue(*(arg1 + 0x18))
*(arg1 + 0x20) = eax

if (eax == 0)
    SLIST_ENTRY* eax_3 = InterlockedPopEntrySList(*(arg1 + 0x18) + 0x58)
    int32_t* edi_1 = nullptr
    void* __offset(_SINGLE_LIST_ENTRY, -0x18) ecx_1 = nullptr
    
    if (eax_3 != 0)
        ecx_1 = &eax_3[-6]
    
    *(arg1 + 0x20) = ecx_1
    
    if (ecx_1 != 0)
        Concurrency::details::WorkQueue::Reinitialize(ecx_1)
    else
        int32_t* eax_4 = sub_6e810c(0x74)
        int32_t* var_14_1 = eax_4
        int32_t var_8 = 0
        
        if (eax_4 != 0)
            edi_1 = Concurrency::details::WorkQueue::WorkQueue(eax_4)
        
        int32_t var_8_1 = 0xffffffff
        *(arg1 + 0x20) = edi_1
    
    sub_6f3497(*(arg1 + 0x18) + 0x58, *(arg1 + 0x20))

void* result = *(arg1 + 0x20)
*(result + 0x48) = arg1
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f3960
return result
