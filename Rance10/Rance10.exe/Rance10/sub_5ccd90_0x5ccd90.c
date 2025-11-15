// 函数: sub_5ccd90
// 地址: 0x5ccd90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737dce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
void* var_2c
sub_5ccd50(&var_2c, arg3)
int32_t var_8_1 = 0
void** var_40 = arg3
struct std::_Func_base<class common::CInterfacePtr<class sealengine::CResourceSurface>>::std::_Func_impl<class <lambda_c9e6886d67afadcee0fb22da84fa6200>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CResourceSurface>>::VTable
    * const var_7c = &std::_Func_impl<class <lambda_c9e6886d67afadcee0fb22da84fa6200>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CResourceSurface>>::`vftable'{for `std::_Func_base<class common::CInterfacePtr<class sealengine::CResourceSurface>>'}
int64_t var_78 = arg1.q
int32_t* var_70 = &var_2c
struct std::_Func_base<class common::CInterfacePtr<class sealengine::CResourceSurface>>::std::_Func_impl<class <lambda_c9e6886d67afadcee0fb22da84fa6200>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CResourceSurface>>::VTable
    * const* var_58_1 = &var_7c
int32_t* var_34
int32_t* eax_3 = sub_5d0b00(arg1 + 0x94, &var_34, &var_2c, var_7c)
*arg2 = 0
arg2[1] = 0
sub_4323a0(arg2, eax_3)
SRWLOCK var_30
__seterrormode(&var_30)
var_8_1.b = 1
int32_t* ecx_2 = var_34

if (ecx_2 != 0)
    var_34 = nullptr
    (*(*ecx_2 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_30)
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
