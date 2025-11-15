// 函数: sub_69c110
// 地址: 0x69c110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7488dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Associated_state<bool>::std::_Packaged_state<bool __cdecl ()>::VTable** result = arg1
struct std::_Associated_state<bool>::std::_Packaged_state<bool __cdecl ()>::VTable** result_1 =
    result
struct std::_Associated_state<bool>::VTable** var_34 = arg1
sub_69c580(arg1)
*result = &std::_Packaged_state<bool __cdecl ()>::`vftable'{for `std::_Associated_state<bool>'}
int32_t edx = *arg2
int32_t esi = arg2[1]
int32_t eax_4 = arg2[2]
result[0x20] = &std::_Func_impl<class std::_Fake_no_copy_callable_adapter<bool (__cdecl &)(class kiwi::CDirectSoundBuffer *, class ISoundData *), class kiwi::CDirectSoundBuffer *const, class ISoundData *&>, class std::allocator<int>, bool>::`vftable'{for `std::_Func_base<bool>'}
result[0x21] = edx
result[0x22] = esi
result[0x23] = eax_4
result[0x29] = &result[0x20]
int32_t var_8_1 = 0
*result = &std::_Task_async_state<bool, 0>::`vftable'{for `std::_Packaged_state<bool __cdecl ()>'}
result[0x2a] = 0
result[0x2b] = 0
var_8_1.b = 1
void var_60
int32_t* eax_5
int32_t edx_1
eax_5, edx_1 = sub_697ff0(&var_60)
void var_20
int32_t* eax_6 = sub_69c420(eax_5, edx_1, &var_20, result)

if (&result[0x2a] != eax_6)
    Concurrency::details::_SyncOriginator<uint32_t>::~_SyncOriginator<uint32_t>(&result[0x2a], 
        eax_6)

var_8_1.b = 2
int32_t* var_1c

if (var_1c != 0)
    bool cond:0_1 = var_1c[1] != 1
    var_1c[1]
    var_1c[1] -= 1
    
    if (not(cond:0_1))
        (**var_1c)(eax_2)
        int32_t ebx_1 = var_1c[2]
        var_1c[2] -= 1
        
        if (ebx_1 == 1)
            (*(*var_1c + 4))()

*(result + 0x76) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
