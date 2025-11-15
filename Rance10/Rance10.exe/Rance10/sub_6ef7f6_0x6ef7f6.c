// 函数: sub_6ef7f6
// 地址: 0x6ef7f6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x34
int32_t (* var_c)(void* arg1) = sub_74a7f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
void* const var_58_11 = &data_6ef802
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::Scheduler::Concurrency::details::SchedulerBase::VTable** var_14 = arg1
*arg1 = &Concurrency::details::SchedulerBase::`vftable'{for `Concurrency::Scheduler'}
int32_t var_8 = 0
Concurrency::SchedulerPolicy::SchedulerPolicy(&arg1[1], arg2)
__builtin_memset(&arg1[0xc], 0, 0x2c)
var_8.b = 5
sub_6fa128(&arg1[0x18], 0, 0x100, 0x40)
arg1[0x2d] = 0
arg1[0x2e] = 0
var_8.b = 6
TI_OFF::TI_OFF(&arg1[0x2f])
sub_6fa128(&arg1[0x32], 0, 0x100, 0x7fffffff)
var_8.b = 7
sub_6ea728(&arg1[0x46])
var_8.b = 8
arg1[0x4c] = 0
TI_OFF::TI_OFF(&arg1[0x4d])
arg1[0x4f] = 0
arg1[0x50] = &arg1[0x4f]
arg1[0x51] = 0
arg1[0x52] = 0xffffffff
arg1[0x53] = 0xffffffff
arg1[0x54] = 0
arg1[0x55] = 0
arg1[0x56] = 0
sub_6f31a6(&arg1[0x57], 0x1001)
var_8.b = 9
sub_6f31a6(&arg1[0x5a], 0x1001)
arg1[0x5d] = 0xffffffff
arg1[0x5e] = 0
arg1[0x60] = 0
arg1[0x61] = 0
arg1[0x62] = 1
arg1[0x63] = 0
arg1[0x64] = 0
var_8.b = 0xa
arg1[0x65] = 0
arg1[0x66] = 0
arg1[0x68] = 0
arg1[0x69] = 0
arg1[0x6a] = 0
arg1[0x6c] = 0
__builtin_memset(&arg1[0x6e], 0, 0x14)
arg1[0x74] = 0
arg1[0x75] = 0
arg1[0x79] = 0
InitializeSListHead(&arg1[0x7a])
InitializeSListHead(&arg1[0x7c])
InitializeSListHead(&arg1[0x7e])
InitializeSListHead(&arg1[0x80])
arg1[0x21] = arg1
arg1[2] = sub_6f5021(arg2, 0)
arg1[4].w = sub_6f5021(arg2, 4)
arg1[3] = sub_6f5021(arg2, 7)
int32_t eax_8 = sub_6f5021(arg2, 1)
int32_t eax_12

if (j_Concurrency::details::ResourceManager::GetCoreCount() << 2 u<= eax_8)
    eax_12 = sub_6f5021(arg2, 1)
else
    eax_12 = j_Concurrency::details::ResourceManager::GetCoreCount() << 2

arg1[0x73] = eax_12
arg1[6] = sub_6eb318()
HANDLE hObject = Concurrency::details::platform::__CreateAutoResetEvent(0)
arg1[0x76] = hObject
struct std::exception::Concurrency::scheduler_resource_allocation_error::VTable** eax_18

if (RegisterWaitForSingleObject(&arg1[0x77], hObject, 
        Concurrency::details::SchedulerBase::ThrottlerTrampoline, arg1, 0xffffffff, 
        WT_EXECUTEDEFAULT) != 0)
    int32_t eax_19
    int32_t edx_1
    eax_19, edx_1 = j_Concurrency::details::ResourceManager::Version()
    
    if (eax_19 s< 3)
        if (Concurrency::details::platform::__CreateTimerQueueTimer(&arg1[0x78], nullptr, 
            Concurrency::details::SchedulerBase::ThrottlerDispatchBridge, arg1, 0x7fffffff, 
            0x7fffffff, WT_EXECUTEDEFAULT) != 0)
        label_6e8c89:
            fsbase->NtTib.ExceptionList = ExceptionList
            void* const __saved_ebp_2 = &data_6efb0f
            return arg1
        
        enum WIN32_ERROR eax_25 = GetLastError()
        
        if (eax_25 s> NO_ERROR)
            eax_25 = zx.d(eax_25.w) | 0x80070000
        
        struct std::exception::Concurrency::scheduler_resource_allocation_error::VTable* var_44
        Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(
            &var_44, eax_25)
        void* const var_58_10 = &data_7dd12c
        eax_18 = &var_44
    else
        int32_t eax_20 = Concurrency::details::RegisterAsyncTimerAndLoadLibrary(0x7fffffff, edx_1, 
            &data_6ef6b9, 0x7fffffff, Concurrency::details::SchedulerBase::ThrottlerDispatchBridge, 
            arg1, 1)
        arg1[0x78] = eax_20
        
        if (eax_20 != 0)
            goto label_6e8c89
        
        enum WIN32_ERROR eax_21 = GetLastError()
        
        if (eax_21 s> NO_ERROR)
            eax_21 = zx.d(eax_21.w) | 0x80070000
        
        struct std::exception::Concurrency::scheduler_resource_allocation_error::VTable* var_34
        Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(
            &var_34, eax_21)
        void* const var_58_8 = &data_7dd12c
        eax_18 = &var_34
else
    enum WIN32_ERROR eax_16 = GetLastError()
    
    if (eax_16 s> NO_ERROR)
        eax_16 = zx.d(eax_16.w) | 0x80070000
    
    struct std::exception::Concurrency::scheduler_resource_allocation_error::VTable* var_24
    Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(&var_24, 
        eax_16)
    void* const var_58_6 = &data_7dd12c
    eax_18 = &var_24

sub_70021b(eax_18, &data_7dd12c)
noreturn
