// 函数: ?StaticDestruction@SchedulerBase@details@Concurrency@@CAXXZ
// 地址: 0x6f294b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74aa03
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28 = &data_6f2957
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &data_7fc304
SLIST_ENTRY* result = Concurrency::details::_NonReentrantLock::_Acquire(&data_7fc304)
int32_t var_8 = 0
int32_t temp0 = data_7fc2f4
data_7fc2f4 -= 1

if (temp0 == 1)
    Concurrency::details::_UnregisterConcRTEventTracing()
    
    while (true)
        result = InterlockedPopEntrySList(&data_7fc310)
        
        if (result == 0)
            break
        
        Concurrency::details::SubAllocator::`scalar deleting destructor'(result, 1)

data_7fc304 = 0
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f29a0
return result
