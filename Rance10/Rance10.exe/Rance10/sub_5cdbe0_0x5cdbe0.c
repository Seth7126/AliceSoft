// 函数: sub_5cdbe0
// 地址: 0x5cdbe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740ba1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_3
eax_3.b = arg5
char var_90 = eax_3.b
int32_t var_a4 = 0
char var_74
char* eax_4 = sub_5ccd50(&var_74, arg4)
int32_t var_8_1 = 0
char var_5c
char* eax_5 = sub_5ccd50(&var_5c, arg3)
var_8_1.b = 1
char var_44[0x10]
char* eax_6 = sub_4176f0(eax_5.b, eax_5, &var_44, "/")
var_8_1.b = 2
char var_2c[0x10]
char* eax_7 = sub_4177a0(eax_6, eax_6, &var_2c, eax_4)
var_8_1.b = 3
void* const eax_8 = &data_76a7c0

if (var_90 == 0)
    eax_8 = &data_75d599

void* var_8c
sub_4176f0(eax_8.b, eax_7, &var_8c, eax_8)
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c[0].d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c[0] = 0
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44[0].d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44[0] = 0
int32_t var_48

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c = 0
var_8_1.b = 8
int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74.d, var_60 + 1, 1)

void** var_b4 = arg3
void** var_b0 = arg4
char* var_ac = &var_90
int32_t var_60_1 = 0xf
struct std::_Func_base<class common::CInterfacePtr<class sealengine::CResourceSurface>>::std::_Func_impl<class <lambda_a9693a8f94e7559788daabe048c6fec5>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CResourceSurface>>::VTable
    * const var_f4 = &std::_Func_impl<class <lambda_a9693a8f94e7559788daabe048c6fec5>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CResourceSurface>>::`vftable'{for `std::_Func_base<class common::CInterfacePtr<class sealengine::CResourceSurface>>'}
int128_t var_f0 = arg1.o
int32_t* var_e0 = &var_8c
struct std::_Func_base<class common::CInterfacePtr<class sealengine::CResourceSurface>>::std::_Func_impl<class <lambda_a9693a8f94e7559788daabe048c6fec5>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CResourceSurface>>::VTable
    * const* var_d0_9 = &var_f4
int32_t var_64 = 0
var_74 = 0
int32_t* var_a0
int32_t* eax_19 = sub_5d0b00(arg1 + 0x94, &var_a0, &var_8c, var_f4)
*arg2 = 0
arg2[1] = 0
sub_4323a0(arg2, eax_19)
SRWLOCK var_9c
__seterrormode(&var_9c)
var_8_1.b = 9
int32_t* ecx_6 = var_a0

if (ecx_6 != 0)
    var_a0 = nullptr
    (*(*ecx_6 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_9c)
int32_t var_78

if (var_78 u>= 0x10)
    sub_403160(var_8c, var_78 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
