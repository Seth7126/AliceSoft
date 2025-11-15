// 函数: sub_6d79dd
// 地址: 0x6d79dd
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != arg2)
    std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Tidy(
        arg1, 1, nullptr)
    std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::_Assign_rv(
        arg1, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
