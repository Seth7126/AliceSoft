// 函数: sub_69b5d0
// 地址: 0x69b5d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748734
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 == 1)
    struct std::_Associated_state<bool>::VTable** eax_7 = sub_6e810c(0xb0)
    struct std::_Associated_state<bool>::VTable** var_14_3 = eax_7
    int32_t var_8_2 = 0
    struct std::_Associated_state<bool>::std::_Packaged_state<bool __cdecl ()>::VTable** eax_8 =
        sub_69c110(eax_7, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8

if (arg1 != 2)
    struct std::_Associated_state<bool>::VTable** eax_3 = sub_6e810c(0xb0)
    struct std::_Associated_state<bool>::VTable** var_14_1 = eax_3
    int32_t var_8_1 = 1
    struct std::_Associated_state<bool>::std::_Packaged_state<bool __cdecl ()>::VTable** eax_4 =
        sub_69c200(eax_3, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

struct std::_Associated_state<bool>::std::_Packaged_state<bool __cdecl ()>::VTable** eax_5 =
    sub_6e810c(0xa8)
struct std::_Associated_state<bool>::std::_Packaged_state<bool __cdecl ()>::VTable** var_14_2 =
    eax_5
sub_69c580(eax_5)
*eax_5 = &std::_Packaged_state<bool __cdecl ()>::`vftable'{for `std::_Associated_state<bool>'}
int32_t ecx_6 = *arg2
int32_t edx = arg2[1]
int32_t esi_1 = arg2[2]
eax_5[0x20] = &std::_Func_impl<class std::_Fake_no_copy_callable_adapter<bool (__cdecl &)(class kiwi::CDirectSoundBuffer *, class ISoundData *), class kiwi::CDirectSoundBuffer *const, class ISoundData *&>, class std::allocator<int>, bool>::`vftable'{for `std::_Func_base<bool>'}
eax_5[0x21] = ecx_6
eax_5[0x22] = edx
eax_5[0x23] = esi_1
eax_5[0x29] = &eax_5[0x20]
*eax_5 = &std::_Deferred_async_state<bool>::`vftable'{for `std::_Packaged_state<bool __cdecl ()>'}
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
