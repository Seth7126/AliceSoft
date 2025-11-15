// 函数: sub_69c2f0
// 地址: 0x69c2f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748921
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
struct std::_Func_base<unsigned char>::std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::VTable
    ** result = sub_6e810c(0x30)
int32_t var_8_1 = 0
struct std::_Func_base<unsigned char>::std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::VTable
    ** result_3 = result
struct std::_Func_base<unsigned char>::std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::VTable
    ** result_2 = result
struct std::_Func_base<unsigned char>::std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::VTable
    ** result_1 = result
var_8_1.b = 1

if (result != 0)
    *result = &std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::`vftable'{for `std::_Func_base<unsigned char>'}
    void* var_24_1 = &result[2]
    void* var_24_2 = &result[2]
    result[0xb] = 0
    var_8_1.b = 3
    int32_t* ecx = *(arg1 + 0x2c)
    
    if (ecx != 0)
        result[0xb] = (**ecx)(&result[2])

fsbase->NtTib.ExceptionList = ExceptionList
return result
