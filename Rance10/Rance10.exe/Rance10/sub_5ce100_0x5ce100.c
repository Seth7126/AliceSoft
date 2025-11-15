// 函数: sub_5ce100
// 地址: 0x5ce100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740be6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 0
char var_2c
char* eax_3 = sub_5ccd50(&var_2c, arg3)
int32_t var_8_1 = 0
void* var_44
sub_4176f0(eax_3.b, eax_3, &var_44, ":A")
var_8_1.b = 2
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

void** var_58 = arg3
int32_t var_18_1 = 0xf
int32_t var_1c = 0
struct std::_Func_base<class common::CInterfacePtr<class sealengine::CResourceSurface>>::std::_Func_impl<class <lambda_71206f1f974892dd9b876d2e43163144>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CResourceSurface>>::VTable
    * const var_94 = &std::_Func_impl<class <lambda_71206f1f974892dd9b876d2e43163144>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CResourceSurface>>::`vftable'{for `std::_Func_base<class common::CInterfacePtr<class sealengine::CResourceSurface>>'}
int64_t var_90 = arg1.q
int32_t* var_88 = &var_44
struct std::_Func_base<class common::CInterfacePtr<class sealengine::CResourceSurface>>::std::_Func_impl<class <lambda_71206f1f974892dd9b876d2e43163144>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CResourceSurface>>::VTable
    * const* var_70_3 = &var_94
var_2c = 0
int32_t* var_4c
int32_t* eax_6 = sub_5d0b00(arg1 + 0x94, &var_4c, &var_44, var_94)
*arg2 = 0
arg2[1] = 0
sub_4323a0(arg2, eax_6)
SRWLOCK var_48
__seterrormode(&var_48)
var_8_1.b = 3
int32_t* ecx_3 = var_4c

if (ecx_3 != 0)
    var_4c = nullptr
    (*(*ecx_3 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_48)
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44, var_30 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
