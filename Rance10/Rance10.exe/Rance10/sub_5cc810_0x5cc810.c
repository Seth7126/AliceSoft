// 函数: sub_5cc810
// 地址: 0x5cc810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740874
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_60 = 0xffffffff
void* var_38 = arg3
int32_t var_64 = 0
int32_t var_50 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403590(&var_2c, arg3 + 8, var_64, var_60)
int32_t var_8_1 = 0
char* var_4c = &var_2c
void** var_44 = &var_38
int32_t var_48 = arg1
void arg_c
void* var_40 = &arg_c
void arg_10
void* var_3c = &arg_10
int32_t* var_34
SRWLOCK var_30

if (var_1c != 0)
    int128_t xmm0_1 = var_4c.o
    int32_t* var_84 = &std::_Func_impl<class <lambda_9d391c37dbe907dcfe21e56ffb385bc9>, class std::allocator<int>, class common::CInterfacePtr<class sealengine::CConstMeshList>>::`vftable'{for `std::_Func_base<class common::CInterfacePtr<class sealengine::CConstMeshList>>'}
    int128_t var_80_1 = xmm0_1
    void* var_70_1 = &arg_10
    int32_t** var_60_7 = &var_84
    int32_t* eax_8 = sub_5d10a0(arg1 + 0xac, &var_34, &var_2c, var_84)
    *arg2 = 0
    arg2[1] = 0
    sub_5688b0(arg2, eax_8)
    __seterrormode(&var_30)
    var_8_1.b = 2
    int32_t* ecx_8 = var_34
    
    if (ecx_8 != 0)
        var_34 = nullptr
        int32_t esi_2 = ecx_8[1]
        ecx_8[1] -= 1
        (**ecx_8)(esi_2 - 1)
    
    ___crtSetUnhandledExceptionFilter(&var_30)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
else
    int32_t* eax_5 = sub_5cc9c0(&var_4c, &var_34)
    *arg2 = 0
    arg2[1] = 0
    sub_5688b0(arg2, eax_5)
    __seterrormode(&var_30)
    var_8_1.b = 1
    int32_t* ecx_3 = var_34
    
    if (ecx_3 != 0)
        var_34 = nullptr
        int32_t esi_1 = ecx_3[1]
        ecx_3[1] -= 1
        (**ecx_3)(esi_1 - 1)
    
    ___crtSetUnhandledExceptionFilter(&var_30)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
