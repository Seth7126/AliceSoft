// 函数: sub_514280
// 地址: 0x514280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738476
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<bool, int32_t, class std::string const&>::std::_Func_impl<class <lambda_8eeb29a19e91094ff091bc2d896251b1>,class std::allocator<int32_t>,bool,int32_t,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::VTable
    * const var_3c = &std::_Func_impl<class <lambda_8eeb29a19e91094ff091bc2d896251b1>,class std::allocator<int32_t>,bool,int32_t,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::`vftable'{for `std::_Func_base<bool, int32_t, class std::string const&>'}
int128_t var_38 = *arg2
int32_t var_20 = *(arg2 + 0x18)
int64_t var_28 = arg2[1].q
struct std::_Func_base<bool, int32_t, class std::string const&>::std::_Func_impl<class <lambda_8eeb29a19e91094ff091bc2d896251b1>,class std::allocator<int32_t>,bool,int32_t,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::VTable
    * const* var_18 = &var_3c
sub_49abd0(&var_3c, arg1)
int32_t var_8_1 = 0

if (var_18 != 0)
    (*var_18)->__offset(0x10).d(var_18 != &var_3c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
