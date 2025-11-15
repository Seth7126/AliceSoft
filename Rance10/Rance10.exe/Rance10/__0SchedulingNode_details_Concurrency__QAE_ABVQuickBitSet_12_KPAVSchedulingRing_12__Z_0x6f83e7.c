// 函数: ??0SchedulingNode@details@Concurrency@@QAE@ABVQuickBitSet@12@KPAVSchedulingRing@12@@Z
// 地址: 0x6f83e7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74adcb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6f83f3
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
arg1[1] = arg4
arg1[2] = 0
arg1[3] = 0
sub_6f0784(&arg1[2], arg2)
int32_t var_8 = 0
sub_6f31a6(&arg1[4], 0x1001)
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = arg3
var_8.b = 1
sub_6fa128(&arg1[0xe], *arg4, 0x100, 0x7fffffff)
int32_t* ecx_3 = arg1[1]
*arg1 = *ecx_3
arg1[0xc] = ecx_3[0x2e]
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f8461
return arg1
