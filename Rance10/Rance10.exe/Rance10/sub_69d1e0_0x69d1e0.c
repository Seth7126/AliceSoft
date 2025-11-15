// 函数: sub_69d1e0
// 地址: 0x69d1e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748aa1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 0)
    struct common::SuicideRefCounter<class kiwi::ISoundBuffer>::kiwi::CDirectSoundBuffer::VTable** 
        eax_5 = sub_6e810c(0x78)
    arg2.d = eax_5
    int32_t var_8_2 = 1
    struct common::SuicideRefCounter<class kiwi::ISoundBuffer>::kiwi::CDirectSoundBuffer::VTable** 
        eax_6 = sub_698e10(eax_5, *(arg1 + 0xc), *(arg1 + 0x10), arg1 + 9)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

struct common::SuicideRefCounter<class kiwi::ISoundBuffer>::kiwi::CDirectMusicBuffer::VTable** 
    eax_3 = sub_6e810c(0x9c)
arg2.d = eax_3
int32_t var_8_1 = 0
struct common::SuicideRefCounter<class kiwi::ISoundBuffer>::kiwi::CDirectMusicBuffer::VTable** 
    eax_4 = sub_694f90(eax_3, *(arg1 + 0xc), *(arg1 + 0x10), arg1 + 9)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
