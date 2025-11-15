// 函数: sub_6f31fd
// 地址: 0x6f31fd
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74aa42
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_6 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6f3209
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::Context::Concurrency::details::ContextBase::VTable** var_14 = arg1
arg1[0xf] = 0xffffffff
arg1[7] = arg2
int32_t eax
eax.b = arg3
*arg1 = &Concurrency::details::ContextBase::`vftable'{for `Concurrency::Context'}
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 1
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x13].b = eax.b
int32_t var_8 = 0
arg1[0x14] = 0
TI_OFF::TI_OFF(&arg1[0x15])
arg1[0x19] = 0
arg1[0x1a] = 0xffffffff
arg1[0x1b] = 0xffffffff
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
arg1[0x1f] = 0
sub_6f31a6(&arg1[0x20], 7)
var_8.b = 1
Concurrency::details::ContextBase::CancellationBeaconStack::CancellationBeaconStack(&arg1[0x23])
var_8.b = 2
int32_t eax_1 = Concurrency::details::SchedulerBase::GetNewContextId(arg1[7])
int32_t* edi = arg1[7]
arg1[2] = eax_1
int32_t esi = *(*edi + 4)
j_sub_4033e0()
Concurrency::details::ContextBase::TraceContextEvent(1, 4, esi(eax_1, eax_6))
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f32cb
return arg1
