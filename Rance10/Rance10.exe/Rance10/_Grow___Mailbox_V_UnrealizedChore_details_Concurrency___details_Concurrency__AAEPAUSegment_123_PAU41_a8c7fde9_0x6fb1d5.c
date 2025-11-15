// 函数: ?Grow@?$Mailbox@V_UnrealizedChore@details@Concurrency@@@details@Concurrency@@AAEPAUSegment@123@PAU4123@@Z
// 地址: 0x6fb1d5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74afff
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6fb1e1
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax = sub_6e810c(0x2c)
int32_t* var_14 = eax
int32_t* result = nullptr
int32_t var_8 = 0

if (eax != 0)
    result = Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Segment::Segment(
        eax, *arg1, &arg1[1], arg1[3], *(arg2 + 0x10) + arg1[3])

arg1[4] = result
*(arg2 + 0x18) = result
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fb21c
return result
