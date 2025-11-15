// 函数: sub_409dc0
// 地址: 0x409dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727420
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
void** edi = arg3
int32_t* result = arg4
int32_t* result_1 = result
int32_t var_8_1 = 0

while (edi != arg2)
    Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(result, edi)
    result = &result[0xc]
    edi = &edi[0xc]
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
