// 函数: sub_551730
// 地址: 0x551730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_RunAndWait@_TaskCollection@details@Concurrency@@QAG?AW4_TaskCollectionStatus@23@PAV_UnrealizedChore@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_d8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[0x10]

if (ecx s< 0 || ecx s>= (arg1[3] - arg1[2]) s>> 2)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t var_8_1 = 0
void var_d0
(*(*arg1 + 0x18))(sub_526a90(&var_d0, arg4))
int32_t var_8_2 = 0xffffffff
___dyn_tls_init@12(&var_d0)
int32_t* eax_8 = sub_5505a0(*(arg1[2] + (arg1[0x10] << 2)), arg2, arg3, arg5)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
