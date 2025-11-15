// 函数: ?GetSubAllocator@SchedulerBase@details@Concurrency@@SAPAVSubAllocator@23@_N@Z
// 地址: 0x6f12e8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74a93f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6f12f4
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = arg1

if (ebx.b == 0)
    goto label_6f131a

SLIST_ENTRY* result

if (data_7fc2f8 s< 0x20)
    data_7fc2f8 += 1
label_6f131a:
    SLIST_ENTRY* result_1 = InterlockedPopEntrySList(&data_7fc310)
    
    if (result_1 == 0)
        result_1 = sub_6e810c(0x308)
        SLIST_ENTRY* result_2 = result_1
        int32_t var_8 = 0
        
        if (result_1 == 0)
            result_1 = nullptr
        else
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_28)(int32_t* arg1) = sub_6f8983
            `eh vector constructor iterator'(&result_1[1], 8, 0x60, 
                Concurrency::details::AllocatorBucket::AllocatorBucket)
            result_1->__offset(0x304).b = 0
    
    result_1->__offset(0x304).b = ebx.b
    result = result_1
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f1367
return result
