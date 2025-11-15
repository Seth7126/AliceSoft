// 函数: ?GetDefaultScheduler@SchedulerBase@details@Concurrency@@CAPAV123@XZ
// 地址: 0x6f0ee9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t (* var_c)(void* arg1) = sub_74a8ce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_6 = __security_cookie ^ &__saved_ebp
void* const var_2c_2 = &data_6f0ef5
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = &data_7fc30c
int32_t edx = Concurrency::details::_NonReentrantLock::_Acquire(&data_7fc30c)
int32_t var_8 = 0
void* ecx = data_7fc2e4

if (ecx == 0)
label_6f0f1f:
    void var_14
    sub_6f4f60(&var_14, edx, ecx, &var_14, 0)
    int32_t* eax_2 = data_7fc2e8
    var_8.b = 1
    
    if (eax_2 != 0)
        Concurrency::SchedulerPolicy::operator=(&var_14, eax_2)
    
    void* eax_3 = Concurrency::details::SchedulerBase::CreateWithoutInitializing(&var_14)
    data_7fc2e4 = eax_3
    sub_6f1499(eax_3)
    int32_t esi_1 = *(*data_7fc2e4 + 0x10)
    j_sub_4033e0()
    esi_1(eax_6)
    Concurrency::SchedulerPolicy::~SchedulerPolicy(&var_14)
else
    char eax
    eax, ecx, edx = Concurrency::details::SchedulerBase::SafeReference(ecx)
    
    if (eax == 0)
        goto label_6f0f1f

int32_t result = data_7fc2e4
data_7fc30c = 0
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f0f84
return result
