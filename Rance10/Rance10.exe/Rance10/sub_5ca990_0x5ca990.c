// 函数: sub_5ca990
// 地址: 0x5ca990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_7404f2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = arg6
void* eax_4 = &arg1[4]
*(eax_4 + 0x14) = 0xf
*(eax_4 + 0x10) = 0

if (*(eax_4 + 0x14) u>= 0x10)
    eax_4 = *eax_4

*eax_4 = 0
int32_t var_14_1 = 0
int32_t* var_2c
int32_t* eax_5 = sub_44cfc0(&var_2c, arg3)
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
sub_4323a0(&arg1[0x1c], eax_5)
SRWLOCK var_28
__seterrormode(&var_28)
var_14_1.b = 2
int32_t* ecx_2 = var_2c

if (ecx_2 != 0)
    var_2c = nullptr
    (*(*ecx_2 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_28)
*(arg1 + 0x24) = arg4
int32_t* eax_8 = sub_432270(&var_2c, arg5)
*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0
sub_4323a0(&arg1[0x28], eax_8)
__seterrormode(&var_28)
var_14_1.b = 4
int32_t* ecx_5 = var_2c

if (ecx_5 != 0)
    var_2c = nullptr
    (*(*ecx_5 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_28)
int32_t* eax_10 = sub_44cfc0(&var_2c, arg2)
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
sub_4323a0(&arg1[0x30], eax_10)
__seterrormode(&var_28)
var_14_1.b = 6
int32_t* ecx_8 = var_2c

if (ecx_8 != 0)
    var_2c = nullptr
    (*(*ecx_8 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_28)
__builtin_memset(&arg1[0x38], 0, 0x24)
var_14_1.b = 0xb
var_28 = &arg1[0x5c]
*(arg1 + 0x5c) = &thread::CCriticalSection::`vftable'
SRWLOCK eax_12 = sub_6e810c(0x1c)
var_28 = eax_12
*eax_12 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(eax_12 + 4)
*(arg1 + 0x60) = eax_12
var_14_1.b = 0xc
__builtin_memset(&arg1[0x64], 0, 0x18)
sub_5cac00(&arg1[0x64])
var_14_1.b = 0xd
__builtin_memset(&arg1[0x7c], 0, 0x18)
sub_5cac00(&arg1[0x7c])
var_14_1.b = 0xe
__builtin_memset(&arg1[0x94], 0, 0x18)
sub_5cacb0(&arg1[0x94])
var_14_1.b = 0xf
__builtin_memset(&arg1[0xac], 0, 0x18)
sub_5cac00(&arg1[0xac])
var_14_1.b = 0x10
var_28 = &arg1[0xc4]
*(arg1 + 0xc4) = 0
*(arg1 + 0xc8) = 0
*(arg1 + 0xc4) = sub_4a8f20()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
