// 函数: sub_69b8b0
// 地址: 0x69b8b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
bool result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &std::_Func_impl<class <lambda_cab26a778e4185933e9c5b0cfaedfe5e>, class std::allocator<int>, unsigned char>::`vftable'{for `std::_Func_base<unsigned char>'}
int32_t var_8_1 = 0
int32_t* ecx = arg1[0xb]

if (ecx != 0)
    result = (*(*ecx + 0x10))(ecx != &arg1[2])
    arg1[0xb] = 0

*arg1 = &std::_Func_base<unsigned char>::`vftable'

if (arg2 != 0)
    result = sub_403160(arg1, 1, 0x30)

fsbase->NtTib.ExceptionList = ExceptionList
return result
