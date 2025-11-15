// 函数: sub_5cc9c0
// 地址: 0x5cc9c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7408c9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
struct common::NotifyRefCounter<class common::detail::EmptyClass>::sealengine::CResourceCacheObject<class sealengine::CConstMeshList>::VTable
    ** eax_3 = sub_6e810c(0x60)
struct common::NotifyRefCounter<class common::detail::EmptyClass>::sealengine::CResourceCacheObject<class sealengine::CConstMeshList>::VTable
    ** var_1c = eax_3
int32_t var_8_1 = 0
int32_t* var_2c
int32_t* eax_5 = sub_5d2350(&var_2c, sub_56e4f0(eax_3, *arg1, arg1[1] + 0xac))
int32_t* var_24 = nullptr
SRWLOCK var_20
__builtin_memset(&var_20, 0, 4)
sub_5688b0(&var_24, eax_5)
int32_t var_8_2 = 1
SRWLOCK var_28
__seterrormode(&var_28)
var_8_2.b = 2
int32_t* ecx_5 = var_2c

if (ecx_5 != 0)
    var_2c = nullptr
    int32_t edx_1 = ecx_5[1]
    ecx_5[1] -= 1
    (**ecx_5)(edx_1 - 1)

var_8_2.b = 1
___crtSetUnhandledExceptionFilter(&var_28)
__Smtx_lock_shared(&var_20)
int32_t* esi = var_24
__Smtx_unlock_shared(&var_20)
int32_t var_44_7 = *arg1[4]
char eax_12 = sub_56e7f0(esi, *arg1[2], zx.d(*arg1[3]))
*arg2 = 0
arg2[1] = 0

if (eax_12 != 0)
    sub_5688b0(arg2, &var_24)
    __seterrormode(&var_20)
    int32_t var_8_4 = 4
else
    __seterrormode(&var_20)
    int32_t var_8_3 = 3

int32_t* ecx_8 = var_24

if (ecx_8 != 0)
    var_24 = nullptr
    int32_t edi_1 = ecx_8[1]
    ecx_8[1] -= 1
    (**ecx_8)(edi_1 - 1)

___crtSetUnhandledExceptionFilter(&var_20)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
