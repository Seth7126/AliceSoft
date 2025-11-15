// 函数: sub_602ff0
// 地址: 0x602ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74262e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_bc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<int32_t, class std::string const&>::std::_Func_impl<class <lambda_7542bf9be4d1b5c3652f8686db17f747>,class std::allocator<int32_t>,int32_t,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::VTable
    * const var_b4 = &std::_Func_impl<class <lambda_7542bf9be4d1b5c3652f8686db17f747>,class std::allocator<int32_t>,int32_t,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::`vftable'{for `std::_Func_base<int32_t, class std::string const&>'}
struct std::_Func_base<int32_t, class std::string const&>::std::_Func_impl<class <lambda_7542bf9be4d1b5c3652f8686db17f747>,class std::allocator<int32_t>,int32_t,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::VTable
    * const* var_90 = &var_b4
int32_t var_8_1 = 0
struct std::_Func_base<int32_t, float>::std::_Func_impl<class <lambda_b87752d020bf09a2709f3313b759bdd2>,class std::allocator<int32_t>,int32_t,float>::VTable
    * const var_8c = &std::_Func_impl<class <lambda_b87752d020bf09a2709f3313b759bdd2>,class std::allocator<int32_t>,int32_t,float>::`vftable'{for `std::_Func_base<int32_t, float>'}
struct std::_Func_base<int32_t, float>::std::_Func_impl<class <lambda_b87752d020bf09a2709f3313b759bdd2>,class std::allocator<int32_t>,int32_t,float>::VTable
    * const* var_68 = &var_8c
struct std::_Func_base<int32_t, int32_t>::std::_Func_impl<class <lambda_73a75b6c0c280a30ea71dda0f048ce66>,class std::allocator<int32_t>,int32_t,int32_t>::VTable
    * const var_64 = &std::_Func_impl<class <lambda_73a75b6c0c280a30ea71dda0f048ce66>,class std::allocator<int32_t>,int32_t,int32_t>::`vftable'{for `std::_Func_base<int32_t, int32_t>'}
struct std::_Func_base<int32_t, int32_t>::std::_Func_impl<class <lambda_73a75b6c0c280a30ea71dda0f048ce66>,class std::allocator<int32_t>,int32_t,int32_t>::VTable
    * const* var_40 = &var_64
struct std::_Func_base<int32_t, bool>::std::_Func_impl<class <lambda_244199c2e657aa07f9334c2869f6547e>,class std::allocator<int32_t>,int32_t,bool>::VTable
    * const var_3c = &std::_Func_impl<class <lambda_244199c2e657aa07f9334c2869f6547e>,class std::allocator<int32_t>,int32_t,bool>::`vftable'{for `std::_Func_base<int32_t, bool>'}
struct std::_Func_base<int32_t, bool>::std::_Func_impl<class <lambda_244199c2e657aa07f9334c2869f6547e>,class std::allocator<int32_t>,int32_t,bool>::VTable
    * const* var_18 = &var_3c
var_8_1.b = 3
int32_t* ecx
int32_t result = sub_6039b0(ecx, &var_3c, &var_64, &var_8c, &var_b4)
var_8_1.b = 4

if (var_18 != 0)
    (*var_18)->__offset(0x10).d(var_18 != &var_3c)
    int32_t var_18_1 = 0

var_8_1.b = 5

if (var_40 != 0)
    (*var_40)->__offset(0x10).d(var_40 != &var_64)
    int32_t var_40_1 = 0

var_8_1.b = 6

if (var_68 != 0)
    (*var_68)->__offset(0x10).d(var_68 != &var_8c)
    int32_t var_68_1 = 0

int32_t var_8_2 = 7

if (var_90 != 0)
    (*var_90)->__offset(0x10).d(var_90 != &var_b4)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
