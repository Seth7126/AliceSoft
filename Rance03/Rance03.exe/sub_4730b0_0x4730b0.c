// 函数: sub_4730b0
// 地址: 0x4730b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5eeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    struct kiwi::CSoundChannel::VTable** result_1
    int32_t eax_5 = (*(*ecx + 8))(result_1)
    
    if (eax_5 != 0)
        struct ISoundPlayer::kiwi::CSoundPlayer::VTable** eax_6 = sub_69adc6(0x30)
        struct ISoundPlayer::kiwi::CSoundPlayer::VTable** var_10 = eax_6
        int32_t var_4 = 0
        struct ISoundPlayer::kiwi::CSoundPlayer::VTable** edi_2
        
        if (eax_6 == 0)
            edi_2 = nullptr
        else
            edi_2 = sub_474870(eax_6, eax_5, *(arg1 + 8))
        
        int32_t var_4_1 = 0xffffffff
        struct kiwi::CSoundChannel::VTable** eax_8 = sub_69adc6(0x2c)
        struct kiwi::CSoundChannel::VTable** result
        
        if (eax_8 == 0)
            result = nullptr
        else
            result = sub_477190(eax_8, edi_2, result_1.b)
        
        CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x1c) + 4
        result_1 = result
        EnterCriticalSection(lpCriticalSection)
        sub_473300(arg1 + 0x10, &result_1)
        LeaveCriticalSection(*(arg1 + 0x1c) + 4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
