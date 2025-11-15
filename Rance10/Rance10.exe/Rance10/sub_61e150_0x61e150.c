// 函数: sub_61e150
// 地址: 0x61e150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f2be
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_40 = arg3
int32_t var_38 = arg4
int32_t var_44 = 0
struct std::_Func_base<class std::string, class std::string const&>::std::_Func_impl<class <lambda_1ca81206dee4a336fdf099b10b64bed8>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::VTable
    * const var_3c = &std::_Func_impl<class <lambda_1ca81206dee4a336fdf099b10b64bed8>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::`vftable'{for `std::_Func_base<class std::string, class std::string const&>'}
int32_t var_34 = arg5
struct std::_Func_base<class std::string, class std::string const&>::std::_Func_impl<class <lambda_1ca81206dee4a336fdf099b10b64bed8>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::VTable
    * const* var_18 = &var_3c
int32_t var_8_1 = 0
sub_60f640(&var_3c, arg2, arg3, &var_3c)
int32_t var_8_2 = 1

if (var_18 != 0)
    (*var_18)->__offset(0x10).d(var_18 != &var_3c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
