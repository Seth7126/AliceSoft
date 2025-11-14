// 函数: sub_61ff10
// 地址: 0x61ff10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce496
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 0)
    struct kiwi::ISoundBuffer::kiwi::CDirectSoundBuffer::VTable** eax_5 = sub_69adc6(0x8c)
    arg2.d = eax_5
    int32_t var_4_1 = 1
    
    if (eax_5 != 0)
        struct kiwi::ISoundBuffer::kiwi::CDirectSoundBuffer::VTable** eax_6 =
            sub_61ed10(eax_5, *(arg1 + 0xc), *(arg1 + 0x10), arg1 + 9)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6
else
    struct kiwi::ISoundBuffer::kiwi::CDirectMusicBuffer::VTable** eax_3 = sub_69adc6(0xb8)
    arg2.d = eax_3
    int32_t var_4 = 0
    
    if (eax_3 != 0)
        struct kiwi::ISoundBuffer::kiwi::CDirectMusicBuffer::VTable** eax_4 =
            sub_61d180(eax_3, *(arg1 + 0xc), *(arg1 + 0x10), arg1 + 9)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4

fsbase->NtTib.ExceptionList = ExceptionList
return 0
