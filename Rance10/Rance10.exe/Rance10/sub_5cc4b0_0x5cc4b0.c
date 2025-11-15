// 函数: sub_5cc4b0
// 地址: 0x5cc4b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7407e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_68 = 0
char var_30
int32_t* eax_4 = sub_4175e0(&ExceptionList, arg3, &var_30, "/")
int32_t var_8_1 = 0
void* var_48
sub_417750(eax_4, eax_4, &var_48, arg4)
var_8_1.b = 2
int32_t var_1c

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

int32_t* var_58 = &var_48
int32_t var_5c = arg1
void** var_60 = arg4
struct std::_Func_base<class common::CInterfacePtr<class sealengine::CMotionData>>::std::_Func_impl<class <lambda_3eb959a474744c30e6edb542289278f9>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CMotionData>>::VTable
    * const var_a0 = &std::_Func_impl<class <lambda_3eb959a474744c30e6edb542289278f9>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CMotionData>>::`vftable'{for `std::_Func_base<class common::CInterfacePtr<class sealengine::CMotionData>>'}
int32_t var_1c_1 = 0xf
int128_t var_9c = arg3.o
struct std::_Func_base<class common::CInterfacePtr<class sealengine::CMotionData>>::std::_Func_impl<class <lambda_3eb959a474744c30e6edb542289278f9>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CMotionData>>::VTable
    * const* var_7c_3 = &var_a0
int32_t var_20 = 0
var_30 = 0
int32_t* var_54
int32_t* eax_7 = sub_5d10a0(arg1 + 0x7c, &var_54, &var_48, var_a0)
*arg2 = 0
arg2[1] = 0
sub_5688b0(arg2, eax_7)
SRWLOCK var_50
__seterrormode(&var_50)
var_8_1.b = 3
int32_t* ecx_5 = var_54

if (ecx_5 != 0)
    var_54 = nullptr
    int32_t esi_1 = ecx_5[1]
    ecx_5[1] -= 1
    (**ecx_5)(esi_1 - 1)

___crtSetUnhandledExceptionFilter(&var_50)
int32_t var_34

if (var_34 u>= 0x10)
    sub_403160(var_48, var_34 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
