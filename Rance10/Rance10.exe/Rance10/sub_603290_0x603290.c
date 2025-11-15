// 函数: sub_603290
// 地址: 0x603290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74269e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_c8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_bc = 0
struct std::_Func_base<class std::string, class std::string const&>::std::_Func_impl<class <lambda_624adefda69435a911de24fb7c12d702>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::VTable
    * const var_b8 = &std::_Func_impl<class <lambda_624adefda69435a911de24fb7c12d702>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::`vftable'{for `std::_Func_base<class std::string, class std::string const&>'}
struct std::_Func_base<class std::string, class std::string const&>::std::_Func_impl<class <lambda_624adefda69435a911de24fb7c12d702>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::VTable
    * const* var_94 = &var_b8
int32_t var_8_1 = 0
struct std::_Func_base<class std::string, float>::std::_Func_impl<class <lambda_417bc863f71218a88475dbf67a1743b6>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,float>::VTable
    * const var_90 = &std::_Func_impl<class <lambda_417bc863f71218a88475dbf67a1743b6>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,float>::`vftable'{for `std::_Func_base<class std::string, float>'}
struct std::_Func_base<class std::string, float>::std::_Func_impl<class <lambda_417bc863f71218a88475dbf67a1743b6>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,float>::VTable
    * const* var_6c = &var_90
struct std::_Func_base<class std::string, int32_t>::std::_Func_impl<class <lambda_b712e0a9ec9e63c91ffdc6608b29b170>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int32_t>::VTable
    * const var_68 = &std::_Func_impl<class <lambda_b712e0a9ec9e63c91ffdc6608b29b170>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int32_t>::`vftable'{for `std::_Func_base<class std::string, int32_t>'}
struct std::_Func_base<class std::string, int32_t>::std::_Func_impl<class <lambda_b712e0a9ec9e63c91ffdc6608b29b170>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int32_t>::VTable
    * const* var_44 = &var_68
struct std::_Func_base<class std::string, bool>::std::_Func_impl<class <lambda_2aa701684bf2800fa4565380cab565e8>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,bool>::VTable
    * const var_40 = &std::_Func_impl<class <lambda_2aa701684bf2800fa4565380cab565e8>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,bool>::`vftable'{for `std::_Func_base<class std::string, bool>'}
struct std::_Func_base<class std::string, bool>::std::_Func_impl<class <lambda_2aa701684bf2800fa4565380cab565e8>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,bool>::VTable
    * const* var_1c = &var_40
var_8_1.b = 3
int32_t* ecx
sub_603d70(ecx, arg1, &var_40, &var_68, &var_90, &var_b8)
var_8_1.b = 4

if (var_1c != 0)
    (*var_1c)->__offset(0x10).d(var_1c != &var_40)
    int32_t var_1c_1 = 0

var_8_1.b = 5

if (var_44 != 0)
    (*var_44)->__offset(0x10).d(var_44 != &var_68)
    int32_t var_44_1 = 0

var_8_1.b = 6

if (var_6c != 0)
    (*var_6c)->__offset(0x10).d(var_6c != &var_90)
    int32_t var_6c_1 = 0

int32_t var_8_2 = 7

if (var_94 != 0)
    (*var_94)->__offset(0x10).d(var_94 != &var_b8)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
