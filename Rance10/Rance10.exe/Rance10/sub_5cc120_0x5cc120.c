// 函数: sub_5cc120
// 地址: 0x5cc120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740756
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24 = arg1
int32_t var_14 = 0
struct std::_Func_base<class common::CInterfacePtr<class sealengine::CPolyData>>::std::_Func_impl<class <lambda_a35d6dc98bb21a699ab04d1b3892078a>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CPolyData>>::VTable
    * const var_5c = &std::_Func_impl<class <lambda_a35d6dc98bb21a699ab04d1b3892078a>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CPolyData>>::`vftable'{for `std::_Func_base<class common::CInterfacePtr<class sealengine::CPolyData>>'}
int64_t var_58 = arg3.q
void arg_c
void* var_50 = &arg_c
struct std::_Func_base<class common::CInterfacePtr<class sealengine::CPolyData>>::std::_Func_impl<class <lambda_a35d6dc98bb21a699ab04d1b3892078a>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CPolyData>>::VTable
    * const* var_38 = &var_5c
int32_t* var_1c
int32_t* eax_3 = sub_5d10a0(arg1 + 0x64, &var_1c, arg3, var_5c)
*arg2 = 0
arg2[1] = 0
sub_5688b0(arg2, eax_3)
SRWLOCK var_18
__seterrormode(&var_18)
int32_t var_8_1 = 0
int32_t* ecx_2 = var_1c

if (ecx_2 != 0)
    var_1c = nullptr
    int32_t esi_1 = ecx_2[1]
    ecx_2[1] -= 1
    (**ecx_2)(esi_1 - 1)

___crtSetUnhandledExceptionFilter(&var_18)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
