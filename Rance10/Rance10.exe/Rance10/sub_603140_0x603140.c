// 函数: sub_603140
// 地址: 0x603140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74262e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_bc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<float, class std::string const&>::std::_Func_impl<class <lambda_b560f7b36d66fbc6f33b098fcd2586ac>,class std::allocator<int32_t>,float,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::VTable
    * const var_b4 = &std::_Func_impl<class <lambda_b560f7b36d66fbc6f33b098fcd2586ac>,class std::allocator<int32_t>,float,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::`vftable'{for `std::_Func_base<float, class std::string const&>'}
struct std::_Func_base<float, class std::string const&>::std::_Func_impl<class <lambda_b560f7b36d66fbc6f33b098fcd2586ac>,class std::allocator<int32_t>,float,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::VTable
    * const* var_90 = &var_b4
int32_t var_8_1 = 0
struct std::_Func_base<float, float>::std::_Func_impl<class <lambda_3ae9284135fdcaf431ed58d485451e24>,class std::allocator<int32_t>,float,float>::VTable
    * const var_8c = &std::_Func_impl<class <lambda_3ae9284135fdcaf431ed58d485451e24>,class std::allocator<int32_t>,float,float>::`vftable'{for `std::_Func_base<float, float>'}
struct std::_Func_base<float, float>::std::_Func_impl<class <lambda_3ae9284135fdcaf431ed58d485451e24>,class std::allocator<int32_t>,float,float>::VTable
    * const* var_68 = &var_8c
struct std::_Func_base<float, int32_t>::std::_Func_impl<class <lambda_c189fbfae8601b575c11a9c3631c1cbd>,class std::allocator<int32_t>,float,int32_t>::VTable
    * const var_64 = &std::_Func_impl<class <lambda_c189fbfae8601b575c11a9c3631c1cbd>,class std::allocator<int32_t>,float,int32_t>::`vftable'{for `std::_Func_base<float, int32_t>'}
struct std::_Func_base<float, int32_t>::std::_Func_impl<class <lambda_c189fbfae8601b575c11a9c3631c1cbd>,class std::allocator<int32_t>,float,int32_t>::VTable
    * const* var_40 = &var_64
struct std::_Func_base<float, bool>::std::_Func_impl<class <lambda_1c5394a609aefb28af8a89cd707a97ae>,class std::allocator<int32_t>,float,bool>::VTable
    * const var_3c = &std::_Func_impl<class <lambda_1c5394a609aefb28af8a89cd707a97ae>,class std::allocator<int32_t>,float,bool>::`vftable'{for `std::_Func_base<float, bool>'}
struct std::_Func_base<float, bool>::std::_Func_impl<class <lambda_1c5394a609aefb28af8a89cd707a97ae>,class std::allocator<int32_t>,float,bool>::VTable
    * const* var_18 = &var_3c
var_8_1.b = 3
uint32_t result
int32_t* ecx
int32_t xmm0
long double x87_r0
result, xmm0 = sub_603b80(ecx, x87_r0, &var_3c, &var_64, &var_8c, &var_b4)
int32_t var_b8 = xmm0
var_8_1.b = 4

if (var_18 != 0)
    result = (*var_18)->__offset(0x10).d(var_18 != &var_3c)
    int32_t var_18_1 = 0

var_8_1.b = 5

if (var_40 != 0)
    result = (*var_40)->__offset(0x10).d(var_40 != &var_64)
    int32_t var_40_1 = 0

var_8_1.b = 6

if (var_68 != 0)
    result = (*var_68)->__offset(0x10).d(var_68 != &var_8c)
    int32_t var_68_1 = 0

int32_t var_8_2 = 7

if (var_90 != 0)
    result = (*var_90)->__offset(0x10).d(var_90 != &var_b4)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
