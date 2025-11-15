// 函数: sub_698b20
// 地址: 0x698b20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74833e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1
int32_t var_18 = 0
struct std::_Func_base<unsigned char>::std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::VTable
    * var_44
struct std::_Func_base<unsigned char>::std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::VTable
    ** var_1c = &var_44
int32_t* var_20 = nullptr
int32_t var_8_1 = 0
int32_t* ecx = *(arg2 + 0x24)

if (ecx != 0)
    var_20 = (**ecx)(&var_44)

int32_t var_8_2 = 1
*(arg1 + 0x24) = 0
var_8_2.b = 2
struct std::_Func_base<unsigned char>::std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::VTable
    ** var_50_2 = var_1c
sub_69c060(arg1, &var_44)
int32_t var_8_3 = 3

if (var_20 != 0)
    (*(*var_20 + 0x10))(var_20 != &var_44)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
