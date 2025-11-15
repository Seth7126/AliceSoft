// 函数: sub_697d50
// 地址: 0x697d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7480a7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::scheduler_interface::Concurrency::details::_DefaultPPLTaskScheduler::VTable* 
    eax_3 = sub_6e810c(0x28)
struct Concurrency::scheduler_interface::Concurrency::details::_DefaultPPLTaskScheduler::VTable* 
    var_14 = eax_3
int32_t var_8_1 = 0
struct Concurrency::scheduler_interface::Concurrency::details::_DefaultPPLTaskScheduler::VTable* 
    var_18 = eax_3
struct Concurrency::scheduler_interface::Concurrency::details::_DefaultPPLTaskScheduler::VTable* 
    edi = 0
var_8_1.b = 1
int32_t* ecx = *(arg1 + 0x24)

if (ecx != 0)
    int32_t eax_5
    eax_5, ecx = (**ecx)(edi)
    edi = eax_5

int32_t edx
int32_t var_30_2 = edx
int32_t var_8_2 = 0xffffffff
int32_t result = sub_697a70(ecx, edi)
fsbase->NtTib.ExceptionList = ExceptionList
return result
