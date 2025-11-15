// 函数: sub_6efd95
// 地址: 0x6efd95
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if ((arg2 & 2) == 0)
    Concurrency::details::SchedulerBase::NumaInformation::~NumaInformation(arg1)
    
    if ((arg2 & 1) != 0)
        operator new(arg1)
    
    result = arg1
else
    `eh vector vbase constructor iterator'(arg1, 0x10, arg1[-1], 
        Concurrency::details::SchedulerBase::NumaInformation::~NumaInformation)
    
    if ((arg2 & 1) != 0)
        int32_t var_20_1 = (arg1[-1] << 4) + 4
        operator new[](&arg1[-1])
    
    result = &arg1[-1]

fsbase->NtTib.ExceptionList = ExceptionList
return result
