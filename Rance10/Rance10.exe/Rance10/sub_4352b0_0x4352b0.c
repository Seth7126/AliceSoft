// 函数: sub_4352b0
// 地址: 0x4352b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72717e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_44 = arg3
int32_t var_3c = arg4
int32_t var_48 = 0
struct std::_Func_base<class std::string, class std::string const&>::std::_Func_impl<class <lambda_f47dd3811528d659dc8a316a0537f898>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::VTable
    * const var_40 = &std::_Func_impl<class <lambda_f47dd3811528d659dc8a316a0537f898>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::`vftable'{for `std::_Func_base<class std::string, class std::string const&>'}
struct std::_Func_base<class std::string, class std::string const&>::std::_Func_impl<class <lambda_f47dd3811528d659dc8a316a0537f898>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::VTable
    * const* var_1c = &var_40
int32_t var_8_1 = 0
sub_434bf0(&var_40, arg2, arg3, &var_40)
int32_t var_8_2 = 1

if (var_1c != 0)
    (*var_1c)->__offset(0x10).d(var_1c != &var_40)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
