// 函数: ??0?$Mailbox@V_UnrealizedChore@details@Concurrency@@@details@Concurrency@@QAE@PAVSchedulerBase@12@ABVQuickBitSet@12@_NI@Z
// 地址: 0x6fa4c3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t (* var_c)(void* arg1) = sub_74aef3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
void* const var_2c_1 = &data_6fa4cf
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
int32_t* edi = nullptr
*arg1 = arg2
arg1[1] = 0
arg1[2] = 0
arg1[3] = arg4
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
int32_t var_8 = 0
arg1[8] = 0
Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Initialize(arg1, 
    &arg1[1])

if (arg3 == 0)
    int32_t* eax_2 = sub_6e810c(0x2c)
    int32_t* var_18_1 = eax_2
    var_8.b = 1
    
    if (eax_2 != 0)
        edi = Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Segment::Segment(
            eax_2, *arg1, &arg1[1], arg4, 0)
    
    arg1[4] = edi
    arg1[5] = edi

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fa537
return arg1
