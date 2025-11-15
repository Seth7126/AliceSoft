// 函数: ??1_Pop_finalizer@_Micro_queue@details@Concurrency@@QAE@XZ
// 地址: 0x409e50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727459
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
int32_t var_8_1 = 0

if (arg1 != 0)
    arg1[4] = 0
    arg1[5] = 0
    arg1[5] = 0xf
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = 0
    int32_t* eax_3
    
    if (cond:0_1)
        eax_3 = arg1
    else
        eax_3 = *arg1
    
    *eax_3 = 0
    sub_403590(arg1, arg2, 0, 0xffffffff)
    var_8_1.b = 1
    arg1[0xb] = 0xf
    arg1[0xa] = 0
    arg1[6].b = 0
    result = sub_403590(&arg1[6], &arg2[6], 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
return result
