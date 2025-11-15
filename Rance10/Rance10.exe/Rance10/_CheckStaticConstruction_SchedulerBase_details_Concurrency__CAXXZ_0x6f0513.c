// 函数: ?CheckStaticConstruction@SchedulerBase@details@Concurrency@@CAXXZ
// 地址: 0x6f0513
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74aa03
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28 = &data_6f051f
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &data_7fc304
Concurrency::details::_NonReentrantLock::_Acquire(&data_7fc304)
int32_t var_8 = 0
int32_t* result = data_7fc2f4 + 1
data_7fc2f4 = result

if (result == 1)
    result = sub_6f293d()
    
    if ((data_7e1374 & 0x80000000) == 0)
        sub_6f1c3a()
        result = &data_7e1374
        data_7e1374 |= 0x80000000

data_7fc304 = 0
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f056e
return result
