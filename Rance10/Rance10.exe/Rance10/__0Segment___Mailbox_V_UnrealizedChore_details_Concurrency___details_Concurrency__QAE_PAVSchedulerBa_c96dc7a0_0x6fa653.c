// 函数: ??0Segment@?$Mailbox@V_UnrealizedChore@details@Concurrency@@@details@Concurrency@@QAE@PAVSchedulerBase@23@ABVQuickBitSet@23@II@Z
// 地址: 0x6fa653
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74af8e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_3 = &data_6fa65f
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
*arg1 = arg2
arg1[1] = 0
arg1[2] = 0
sub_6f0784(&arg1[1], arg3)
arg1[4] = arg5
int32_t var_28_1 = 4
int32_t var_8 = 0
arg1[5] = 0
int32_t ecx_1
ecx_1.b = mulu.dp.d(arg4, 4) u>> 0x20 != 0
arg1[6] = 0
int32_t var_28_2 = neg.d(ecx_1) | (arg4 * 4)
uint32_t (* eax_4)[0x4] = sub_6e8787()
arg1[3] = eax_4
_memset(eax_4, 0, arg4 << 2)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fa6bc
return arg1
