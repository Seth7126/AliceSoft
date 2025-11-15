// 函数: sub_6ea792
// 地址: 0x6ea792
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t (* var_c)(void* arg1) = sub_74a55f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
void* const var_2c = &data_6ea79e
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = &arg1[1]
*arg1 = arg2
void* var_18 = &arg1[1]
int32_t var_8 = 0

if (arg1 != 0xfffffffc)
    Concurrency::details::LockQueueNode::LockQueueNode(&arg1[1], 0xffffffff)

int32_t var_8_1 = 0xffffffff
sub_6eaac4(*arg1, &arg1[1], 1)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ea7d4
return arg1
