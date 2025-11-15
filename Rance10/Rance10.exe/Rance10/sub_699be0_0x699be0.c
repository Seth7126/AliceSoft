// 函数: sub_699be0
// 地址: 0x699be0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x14) != 0)
    struct thread::CCriticalLock::VTable* const var_40_1 = &thread::CCriticalLock::`vftable'
    EnterCriticalSection(*(arg1 + 0x58) + 4)
    char var_3c_1 = 1
    int32_t var_8_1 = 0
    int32_t ebx
    
    if (*(arg1 + 0x18) == 0 || *(arg1 + 0x50) == 0)
        ebx.b = 0
    else
        int32_t* ecx = *(arg1 + 0x1c)
        
        if (ecx != 0)
            (*(*ecx + 8))(ecx)
            *(arg1 + 0x1c) = 0
        
        int32_t* eax_7 = *(arg1 + 0x18)
        void var_2c
        
        if ((**eax_7)(eax_7, 0x752ab4, arg1 + 0x1c) s>= 0)
            int32_t var_30_1 = *(arg1 + 0x50)
            int32_t* eax_10 = *(arg1 + 0x1c)
            int32_t var_34 = 0xffffffff
            
            if ((*(*eax_10 + 0xc))(eax_10, 1, &var_34) s< 0)
                sub_403360(&var_2c, "IDirectSoundNotify::SetNotificationPositions()")
                var_8_1.b = 2
                goto label_699c87
            
            ebx.b = 1
        else
            sub_403360(&var_2c, "IID_IDirectSoundNotify")
            var_8_1.b = 1
        label_699c87:
            sub_45aae0(&var_2c)
            sub_403320(&var_2c)
            ebx.b = 0
    
    LeaveCriticalSection(*(arg1 + 0x58) + 4)
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
