// 函数: sub_485990
// 地址: 0x485990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ecef
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    struct kiwi::CSoundChannel::VTable** result
    int32_t eax_5 = (*(*ecx + 8))(result)
    
    if (eax_5 != 0)
        struct kiwi::CSoundChannel::VTable** eax_6 = sub_6e810c(0x50)
        struct kiwi::CSoundChannel::VTable** var_14_1 = eax_6
        int32_t var_8_1 = 0
        int32_t var_8_2 = 0xffffffff
        result = sub_488f80(eax_6, eax_5, *(arg1 + 8), result.b)
        EnterCriticalSection(*(arg1 + 0x1c) + 4)
        sub_485b80(arg1 + 0x10, &result)
        LeaveCriticalSection(*(arg1 + 0x1c) + 4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
