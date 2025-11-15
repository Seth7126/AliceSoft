// 函数: ??0SchedulingRing@details@Concurrency@@QAE@PAVSchedulerBase@12@H@Z
// 地址: 0x6fa221
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x14
int32_t (* var_c)(void* arg1) = sub_74aec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
void* const var_38_1 = &data_6fa22d
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
arg1[1] = 0
arg1[2] = 0
*arg1 = arg2
sub_6fa128(&arg1[4], arg2, 0x100, 0x40)
int32_t var_8 = 0
sub_6fa128(&arg1[0x18], arg2, 0x100, 0x40)
arg1[0x2e] = arg3
arg1[0x2c] = 0
arg1[0x2d] = 0
arg1[0x2f] = 0
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_18 = 0
var_8.b = 1
arg1[2] = sub_6fae1d(*(arg2 + 0xb0), &var_24, arg1)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fa2a7
return arg1
