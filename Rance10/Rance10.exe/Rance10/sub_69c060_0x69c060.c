// 函数: sub_69c060
// 地址: 0x69c060
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7488a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
struct std::_Func_base<unsigned char>::std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::VTable
    ** result = sub_6e810c(0x30)
struct std::_Func_base<unsigned char>::std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::VTable
    ** result_1 = result
int32_t var_8_1 = 0
struct std::_Func_base<unsigned char>::std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::VTable
    ** result_4 = result_1
struct std::_Func_base<unsigned char>::std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::VTable
    ** result_3 = result_1
struct std::_Func_base<unsigned char>::std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::VTable
    ** result_2 = result_1
var_8_1.b = 1

if (result_1 != 0)
    *result_1 = &std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::`vftable'{for `std::_Func_base<unsigned char>'}
    void* var_24_1 = &result_1[2]
    void* var_24_2 = &result_1[2]
    result_1[0xb] = 0
    result = arg2
    var_8_1.b = 3
    int32_t* ecx = result[9]
    
    if (ecx != 0)
        result = (**ecx)(&result_1[2])
        result_1[0xb] = result

*(arg1 + 0x24) = result_1
fsbase->NtTib.ExceptionList = ExceptionList
return result
